#include "protos.h"

void f_004e838c(void) /* sub_4E838C */
{
    FN_ENTER(0x004e838c);
    /* 004e838c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e838d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e838e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e838f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e8390: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e8393: mov ecx, dword ptr [0xa72140] */ r_ecx = R32((u32)(0xa72140u));
    /* 004e8399: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004e839b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004e839e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004e83a0: mov eax, dword ptr [0xa72144] */ r_eax = R32((u32)(0xa72144u));
    /* 004e83a5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004e83a7: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004e83aa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004e83ac: mov ebx, edx */ r_ebx = r_edx;
    /* 004e83ae: mov eax, dword ptr [0xa72148] */ r_eax = R32((u32)(0xa72148u));
    /* 004e83b3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004e83b5: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004e83b8: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004e83ba: mov esi, ecx */ r_esi = r_ecx;
    /* 004e83bc: mov eax, dword ptr [0xa7214c] */ r_eax = R32((u32)(0xa7214cu));
    /* 004e83c1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004e83c3: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004e83c6: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 004e83c8: mov eax, 0x3e8 */ r_eax = 0x3e8u;
L_004e83cd:; BB(0x004e83cd);
    /* 004e83cd: movzx edx, byte ptr [esi] */ r_edx = (u32)R8((u32)(r_esi));
    /* 004e83d0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e83d3: cmp edx, 0x29 */ {  u32 a = r_edx; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e83d6: je 0x4e8406 */ if (fZ) goto L_004e8406;
L_004e83d8:; BB(0x004e83d8);
    /* 004e83d8: cmp edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e83db: jne 0x4e83e8 */ if (!fZ) goto L_004e83e8;
L_004e83dd:; BB(0x004e83dd);
    /* 004e83dd: mov edx, 4 */ r_edx = 0x4u;
    /* 004e83e2: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 004e83e6: jmp 0x4e840f */ goto L_004e840f;
L_004e83e8:; BB(0x004e83e8);
    /* 004e83e8: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e83ee: jne 0x4e83fb */ if (!fZ) goto L_004e83fb;
L_004e83f0:; BB(0x004e83f0);
    /* 004e83f0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004e83f5: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 004e83f9: jmp 0x4e840f */ goto L_004e840f;
L_004e83fb:; BB(0x004e83fb);
    /* 004e83fb: mov edx, 0xfffffffe */ r_edx = 0xfffffffeu;
    /* 004e8400: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 004e8404: jmp 0x4e840f */ goto L_004e840f;
L_004e8406:; BB(0x004e8406);
    /* 004e8406: mov edx, 3 */ r_edx = 0x3u;
    /* 004e840b: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
L_004e840f:; BB(0x004e840f);
    /* 004e840f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e8411: jl 0x4e86d3 */ if ((fS!=fO)) goto L_004e86d3;
L_004e8417:; BB(0x004e8417);
    /* 004e8417: movzx edx, word ptr [esi + 6] */ r_edx = (u32)R16((u32)(r_esi+0x6u));
    /* 004e841b: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e841e: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e8421: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e8424: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e8427: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e8429: jle 0x4e86cb */ if ((fZ||fS!=fO)) goto L_004e86cb;
L_004e842f:; BB(0x004e842f);
    /* 004e842f: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 004e8433: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 004e8437: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004e843b: lea ecx, [ecx - 3] */ r_ecx = (u32)(r_ecx+0xfffffffdu);
    /* 004e843e: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
L_004e8442:; BB(0x004e8442);
    /* 004e8442: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 004e8446: mov eax, 3 */ r_eax = 0x3u;
    /* 004e844b: mov esi, eax */ r_esi = r_eax;
L_004e844d:; BB(0x004e844d);
    /* 004e844d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004e844f: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 004e8451: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e8454: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x4e8459u); f_007a908c();
    /* 004e8459: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 004e845d: mov ecx, edi */ r_ecx = r_edi;
    /* 004e845f: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 004e8461: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e8464: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x4e8469u); f_007a908c();
    /* 004e8469: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 004e846d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004e846f: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 004e8471: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e8474: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x4e8479u); f_007a908c();
    /* 004e8479: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e847c: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e8482: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 004e8486: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e848c: fmul dword ptr [esp + 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x48u));
    /* 004e8490: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8492: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e8498: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004e849a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e849c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004e849f: call 0x7a909c */ r_esp -= 4; W32(r_esp, 0x4e84a4u); f_007a909c();
    /* 004e84a4: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 004e84a8: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 004e84aa: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e84ad: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 004e84b1: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e84b4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e84b6: jg 0x4e844d */ if ((!fZ&&fS==fO)) goto L_004e844d;
L_004e84b8:; BB(0x004e84b8);
    /* 004e84b8: mov esi, ecx */ r_esi = r_ecx;
    /* 004e84ba: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 004e84be: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e84c1: jl 0x4e8623 */ if ((fS!=fO)) goto L_004e8623;
L_004e84c7:; BB(0x004e84c7);
    /* 004e84c7: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 004e84ca: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004e84ce: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 004e84d0: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x4e84d5u); f_007a908c();
    /* 004e84d5: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 004e84d9: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
    /* 004e84dc: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 004e84e0: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 004e84e2: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x4e84e7u); f_007a908c();
    /* 004e84e7: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 004e84eb: lea eax, [ebp + 4] */ r_eax = (u32)(r_ebp+0x4u);
    /* 004e84ee: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 004e84f2: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 004e84f5: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x4e84fau); f_007a908c();
    /* 004e84fa: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e8500: fmul dword ptr [esp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x50u));
    /* 004e8504: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e850a: fmul dword ptr [esp + 0x54] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x54u));
    /* 004e850e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8510: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e8516: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004e8518: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e851a: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 004e851e: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004e8522: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 004e8524: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x4e8529u); f_007a908c();
    /* 004e8529: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004e852d: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 004e8531: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 004e8533: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x4e8538u); f_007a908c();
    /* 004e8538: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004e853c: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 004e8540: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 004e8542: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x4e8547u); f_007a908c();
    /* 004e8547: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e854d: fmul dword ptr [esp + 0x5c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x5cu));
    /* 004e8551: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e8557: fmul dword ptr [esp + 0x60] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x60u));
    /* 004e855b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e855d: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e8563: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004e8565: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8567: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 004e856b: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004e856f: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e8572: lea ebx, [eax + 8] */ r_ebx = (u32)(r_eax+0x8u);
    /* 004e8575: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x4e857au); f_007a908c();
    /* 004e857a: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004e857e: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 004e8582: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e8585: lea edi, [eax + 8] */ r_edi = (u32)(r_eax+0x8u);
    /* 004e8588: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x4e858du); f_007a908c();
    /* 004e858d: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 004e8591: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 004e8595: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e8598: lea ebp, [eax + 8] */ r_ebp = (u32)(r_eax+0x8u);
    /* 004e859b: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x4e85a0u); f_007a908c();
    /* 004e85a0: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e85a3: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e85a9: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 004e85ad: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e85b3: fmul dword ptr [esp + 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x48u));
    /* 004e85b7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e85b9: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e85bf: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004e85c1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e85c3: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004e85c7: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004e85cb: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4e85d0u); f_0083173c();
    /* 004e85d0: fcomp dword ptr [0x90a460] */ fx_compare(ST(0), R_F32((u32)(0x90a460u))); FPOP();
    /* 004e85d6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e85d8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e85d9: je 0x4e85e6 */ if (fZ) goto L_004e85e6;
L_004e85db:; BB(0x004e85db);
    /* 004e85db: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 004e85df: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4e85e4u); f_0082df08();
    /* 004e85e4: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004e85e6:; BB(0x004e85e6);
    /* 004e85e6: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e85ea: call 0x7a909c */ r_esp -= 4; W32(r_esp, 0x4e85efu); f_007a909c();
    /* 004e85ef: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 004e85f1: lea eax, [esi + 4] */ r_eax = (u32)(r_esi+0x4u);
    /* 004e85f4: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 004e85f8: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004e85fc: call 0x7a909c */ r_esp -= 4; W32(r_esp, 0x4e8601u); f_007a909c();
    /* 004e8601: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 004e8605: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 004e8607: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e860b: call 0x7a909c */ r_esp -= 4; W32(r_esp, 0x4e8610u); f_007a909c();
    /* 004e8610: mov edx, eax */ r_edx = r_eax;
    /* 004e8612: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e8615: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 004e8619: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 004e861d: lea esi, [eax + 8] */ r_esi = (u32)(r_eax+0x8u);
    /* 004e8620: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_004e8623:; BB(0x004e8623);
    /* 004e8623: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e8625: jle 0x4e86a4 */ if ((fZ||fS!=fO)) goto L_004e86a4;
L_004e8627:; BB(0x004e8627);
    /* 004e8627: mov eax, ebx */ r_eax = r_ebx;
    /* 004e8629: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 004e862d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004e8631: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 004e8635: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e8638: fmul dword ptr [0xa72134] */ ST(0) = ST(0) * R_F32((u32)(0xa72134u));
    /* 004e863e: mov eax, edi */ r_eax = r_edi;
    /* 004e8640: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 004e8644: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e8647: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e864a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004e864e: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004e8652: fmul dword ptr [0xa72138] */ ST(0) = ST(0) * R_F32((u32)(0xa72138u));
    /* 004e8658: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e865a: mov eax, ebp */ r_eax = r_ebp;
    /* 004e865c: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 004e8660: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004e8664: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004e8668: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e866b: fmul dword ptr [0xa7213c] */ ST(0) = ST(0) * R_F32((u32)(0xa7213cu));
    /* 004e8671: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8673: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004e8677: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004e867c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004e8681: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004e8685: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004e8689: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 004e868d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004e8691: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 004e8694: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004e8698: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004e869b: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004e869d: mov eax, esi */ r_eax = r_esi;
    /* 004e869f: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e86a2: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_004e86a4:; BB(0x004e86a4);
    /* 004e86a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e86a6: jle 0x4e86b4 */ if ((fZ||fS!=fO)) goto L_004e86b4;
L_004e86a8:; BB(0x004e86a8);
    /* 004e86a8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e86aa: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e86ac: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e86ae: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e86b0: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e86b2: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004e86b4:; BB(0x004e86b4);
    /* 004e86b4: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 004e86b8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e86bb: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004e86bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e86c1: jg 0x4e8442 */ if ((!fZ&&fS==fO)) goto L_004e8442;
L_004e86c7:; BB(0x004e86c7);
    /* 004e86c7: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
L_004e86cb:; BB(0x004e86cb);
    /* 004e86cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e86cd: jg 0x4e83cd */ if ((!fZ&&fS==fO)) goto L_004e83cd;
L_004e86d3:; BB(0x004e86d3);
    /* 004e86d3: mov eax, 1 */ r_eax = 0x1u;
    /* 004e86d8: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e86db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e86dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e86dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e86de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e86df: ret  */ FN_RET(0x004e838c); r_esp += 4; return;
}

void f_004e86e4(void) /* sub_4E86E4 */
{
    FN_ENTER(0x004e86e4);
    /* 004e86e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e86e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e86e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e86e7: mov ebx, eax */ r_ebx = r_eax;
    /* 004e86e9: mov eax, ebx */ r_eax = r_ebx;
    /* 004e86eb: call 0x4e877c */ r_esp -= 4; W32(r_esp, 0x4e86f0u); f_004e877c();
    /* 004e86f0: mov dword ptr [0xa72130], eax */ W32((u32)(0xa72130u), r_eax);
    /* 004e86f5: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 004e86f7: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 004e86fa: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 004e86fd: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e86ff: mov ecx, dword ptr [ebp + eax*8 + 0x9b16e0] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0x9b16e0u));
    /* 004e8706: mov edx, dword ptr [ebp + eax*8 + 0x9b16e4] */ r_edx = R32((u32)(r_ebp+r_eax*8+0x9b16e4u));
    /* 004e870d: mov ebp, dword ptr [ebp + eax*8 + 0x9b16e8] */ r_ebp = R32((u32)(r_ebp+r_eax*8+0x9b16e8u));
    /* 004e8714: fld dword ptr [ecx*8 + 0x9b1684] */ FPUSH(R_F32((u32)(r_ecx*8+0x9b1684u)));
    /* 004e871b: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004e871d: fld dword ptr [edx*8 + 0x9b1684] */ FPUSH(R_F32((u32)(r_edx*8+0x9b1684u)));
    /* 004e8724: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004e8726: fld dword ptr [ecx*8 + 0x9b1680] */ FPUSH(R_F32((u32)(r_ecx*8+0x9b1680u)));
    /* 004e872d: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 004e872f: fld dword ptr [ebp*8 + 0x9b1680] */ FPUSH(R_F32((u32)(r_ebp*8+0x9b1680u)));
    /* 004e8736: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004e8738: fdivp st(4) */ ST(4) = ST(4) / ST(0); FPOP();
    /* 004e873a: fld dword ptr [ebp*8 + 0x9b1684] */ FPUSH(R_F32((u32)(r_ebp*8+0x9b1684u)));
    /* 004e8741: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004e8743: fst dword ptr [0xa7213c] */ W_F32((u32)(0xa7213cu), ST(0));
    /* 004e8749: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004e874b: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 004e874d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004e874f: fchs  */ ST(0) = -ST(0);
    /* 004e8751: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 004e8753: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004e8755: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 004e8757: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e8759: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 004e875b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e875d: fst dword ptr [0xa72138] */ W_F32((u32)(0xa72138u), ST(0));
    /* 004e8763: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8765: fsubr dword ptr [0x90a45c] */ ST(0) = R_F32((u32)(0x90a45cu)) - ST(0);
    /* 004e876b: fstp dword ptr [0xa72134] */ W_F32((u32)(0xa72134u), ST(0)); FPOP();
    /* 004e8771: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e8772: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e8773: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e8774: ret  */ FN_RET(0x004e86e4); r_esp += 4; return;
}

void f_004e877c(void) /* sub_4E877C */
{
    FN_ENTER(0x004e877c);
    /* 004e877c: mov edx, eax */ r_edx = r_eax;
    /* 004e877e: fld dword ptr [0x90a44c] */ FPUSH(R_F32((u32)(0x90a44cu)));
    /* 004e8784: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 004e8786: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004e8788: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e878a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e878b: jbe 0x4e87a9 */ if ((fC||fZ)) goto L_004e87a9;
L_004e878d:; BB(0x004e878d);
    /* 004e878d: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004e878f: fmul dword ptr [0x90a450] */ ST(0) = ST(0) * R_F32((u32)(0x90a450u));
    /* 004e8795: fcomp dword ptr [edx + 4] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x4u))); FPOP();
    /* 004e8798: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e879a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e879b: ja 0x4e87a3 */ if ((!fC&&!fZ)) goto L_004e87a3;
L_004e879d:; BB(0x004e879d);
    /* 004e879d: mov eax, 6 */ r_eax = 0x6u;
    /* 004e87a2: ret  */ FN_RET(0x004e877c); r_esp += 4; return;
L_004e87a3:; BB(0x004e87a3);
    /* 004e87a3: mov eax, 7 */ r_eax = 0x7u;
    /* 004e87a8: ret  */ FN_RET(0x004e877c); r_esp += 4; return;
L_004e87a9:; BB(0x004e87a9);
    /* 004e87a9: fcom dword ptr [0x90a448] */ fx_compare(ST(0), R_F32((u32)(0x90a448u))); 
    /* 004e87af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e87b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e87b2: ja 0x4e87ec */ if ((!fC&&!fZ)) goto L_004e87ec;
L_004e87b4:; BB(0x004e87b4);
    /* 004e87b4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004e87b7: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004e87b9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004e87bb: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004e87bd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e87bf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e87c0: jbe 0x4e87e5 */ if ((fC||fZ)) goto L_004e87e5;
L_004e87c2:; BB(0x004e87c2);
    /* 004e87c2: fld dword ptr [0x90a454] */ FPUSH(R_F32((u32)(0x90a454u)));
    /* 004e87c8: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 004e87ca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e87cc: fmul dword ptr [0x90a458] */ ST(0) = ST(0) * R_F32((u32)(0x90a458u));
    /* 004e87d2: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004e87d4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e87d6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e87d7: jb 0x4e87df */ if (fC) goto L_004e87df;
L_004e87d9:; BB(0x004e87d9);
    /* 004e87d9: mov eax, 1 */ r_eax = 0x1u;
    /* 004e87de: ret  */ FN_RET(0x004e877c); r_esp += 4; return;
L_004e87df:; BB(0x004e87df);
    /* 004e87df: mov eax, 2 */ r_eax = 0x2u;
    /* 004e87e4: ret  */ FN_RET(0x004e877c); r_esp += 4; return;
L_004e87e5:; BB(0x004e87e5);
    /* 004e87e5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004e87e7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004e87e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e87eb: ret  */ FN_RET(0x004e877c); r_esp += 4; return;
L_004e87ec:; BB(0x004e87ec);
    /* 004e87ec: fld dword ptr [0x90a454] */ FPUSH(R_F32((u32)(0x90a454u)));
    /* 004e87f2: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 004e87f5: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 004e87f7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e87f9: fmul dword ptr [0x90a458] */ ST(0) = ST(0) * R_F32((u32)(0x90a458u));
    /* 004e87ff: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004e8801: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e8803: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e8804: jae 0x4e881b */ if (!fC) goto L_004e881b;
L_004e8806:; BB(0x004e8806);
    /* 004e8806: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004e8808: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004e880a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e880c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e880d: jb 0x4e8815 */ if (fC) goto L_004e8815;
L_004e880f:; BB(0x004e880f);
    /* 004e880f: mov eax, 4 */ r_eax = 0x4u;
    /* 004e8814: ret  */ FN_RET(0x004e877c); r_esp += 4; return;
L_004e8815:; BB(0x004e8815);
    /* 004e8815: mov eax, 5 */ r_eax = 0x5u;
    /* 004e881a: ret  */ FN_RET(0x004e877c); r_esp += 4; return;
L_004e881b:; BB(0x004e881b);
    /* 004e881b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004e881d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004e881f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004e8821: mov eax, 3 */ r_eax = 0x3u;
    /* 004e8826: ret  */ FN_RET(0x004e877c); r_esp += 4; return;
}

void f_004e8828(void) /* sub_4E8828 */
{
    FN_ENTER(0x004e8828);
    /* 004e8828: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e8829: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e882a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e882b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e882e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004e8830: call 0x4e71e0 */ r_esp -= 4; W32(r_esp, 0x4e8835u); f_004e71e0();
    /* 004e8835: mov esi, eax */ r_esi = r_eax;
    /* 004e8837: mov eax, esi */ r_eax = r_esi;
    /* 004e8839: call 0x4e8994 */ r_esp -= 4; W32(r_esp, 0x4e883eu); f_004e8994();
    /* 004e883e: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8841: jne 0x4e894f */ if (!fZ) goto L_004e894f;
L_004e8847:; BB(0x004e8847);
    /* 004e8847: mov eax, dword ptr [0xa720e0] */ r_eax = R32((u32)(0xa720e0u));
    /* 004e884c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e884e: jne 0x4e885a */ if (!fZ) goto L_004e885a;
L_004e8850:; BB(0x004e8850);
    /* 004e8850: mov eax, dword ptr [0xa4d7f8] */ r_eax = R32((u32)(0xa4d7f8u));
    /* 004e8855: jmp 0x4e8977 */ goto L_004e8977;
L_004e885a:; BB(0x004e885a);
    /* 004e885a: mov esi, dword ptr [0xa4d7f8] */ r_esi = R32((u32)(0xa4d7f8u));
    /* 004e8860: mov ecx, dword ptr [0xa72098] */ r_ecx = R32((u32)(0xa72098u));
    /* 004e8866: mov edx, dword ptr [0xa7209c] */ r_edx = R32((u32)(0xa7209cu));
    /* 004e886c: movzx eax, word ptr [esi + 0x3e] */ r_eax = (u32)R16((u32)(r_esi+0x3eu));
    /* 004e8870: mov edi, dword ptr [eax*8 + 0xa720bc] */ r_edi = R32((u32)(r_eax*8+0xa720bcu));
    /* 004e8877: mov dword ptr [0xa720e0], edi */ W32((u32)(0xa720e0u), r_edi);
    /* 004e887d: mov dword ptr [0xa720f8], ecx */ W32((u32)(0xa720f8u), r_ecx);
    /* 004e8883: mov dword ptr [0xa720fc], edx */ W32((u32)(0xa720fcu), r_edx);
    /* 004e8889: mov dword ptr [0xa72100], ecx */ W32((u32)(0xa72100u), r_ecx);
    /* 004e888f: mov dword ptr [0xa72104], edx */ W32((u32)(0xa72104u), r_edx);
    /* 004e8895: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e8897: mov dword ptr [0xa72108], ecx */ W32((u32)(0xa72108u), r_ecx);
    /* 004e889d: mov dword ptr [0xa7210c], edx */ W32((u32)(0xa7210cu), r_edx);
    /* 004e88a3: mov dword ptr [0xa72110], ecx */ W32((u32)(0xa72110u), r_ecx);
    /* 004e88a9: mov dword ptr [0xa72114], edx */ W32((u32)(0xa72114u), r_edx);
    /* 004e88af: mov dword ptr [0xa72118], ecx */ W32((u32)(0xa72118u), r_ecx);
    /* 004e88b5: mov dword ptr [0xa7211c], edx */ W32((u32)(0xa7211cu), r_edx);
L_004e88bb:; BB(0x004e88bb);
    /* 004e88bb: mov dword ptr [eax + 0xa71f80], ecx */ W32((u32)(r_eax+0xa71f80u), r_ecx);
    /* 004e88c1: mov dword ptr [eax + 0xa71f84], edx */ W32((u32)(r_eax+0xa71f84u), r_edx);
    /* 004e88c7: mov dword ptr [eax + 0xa71f88], ecx */ W32((u32)(r_eax+0xa71f88u), r_ecx);
    /* 004e88cd: mov dword ptr [eax + 0xa71f8c], edx */ W32((u32)(r_eax+0xa71f8cu), r_edx);
    /* 004e88d3: mov dword ptr [eax + 0xa71f90], ecx */ W32((u32)(r_eax+0xa71f90u), r_ecx);
    /* 004e88d9: mov dword ptr [eax + 0xa71f94], edx */ W32((u32)(r_eax+0xa71f94u), r_edx);
    /* 004e88df: mov dword ptr [eax + 0xa71f98], ecx */ W32((u32)(r_eax+0xa71f98u), r_ecx);
    /* 004e88e5: mov dword ptr [eax + 0xa71f9c], edx */ W32((u32)(r_eax+0xa71f9cu), r_edx);
    /* 004e88eb: mov dword ptr [eax + 0xa71fa0], ecx */ W32((u32)(r_eax+0xa71fa0u), r_ecx);
    /* 004e88f1: mov dword ptr [eax + 0xa71fa4], edx */ W32((u32)(r_eax+0xa71fa4u), r_edx);
    /* 004e88f7: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e88fa: cmp eax, 0x118 */ {  u32 a = r_eax; u32 b = 0x118u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e88ff: jl 0x4e88bb */ if ((fS!=fO)) goto L_004e88bb;
L_004e8901:; BB(0x004e8901);
    /* 004e8901: push 0xa720f8 */ { u32 v = 0xa720f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004e8906: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e8907: call 0x7aaed0 */ r_esp -= 4; W32(r_esp, 0x4e890cu); f_007aaed0();
    /* 004e890c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e890f: movsx eax, word ptr [esi + 0x3e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3eu));
    /* 004e8913: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004e8917: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004e8919: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004e891b: mov ebx, eax */ r_ebx = r_eax;
L_004e891d:; BB(0x004e891d);
    /* 004e891d: mov edx, dword ptr [0xa7212c] */ r_edx = R32((u32)(0xa7212cu));
    /* 004e8923: lea ecx, [esi + 0xa71f80] */ r_ecx = (u32)(r_esi+0xa71f80u);
    /* 004e8929: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004e892a: mov edx, dword ptr [edx + ebx*4 + 4] */ r_edx = R32((u32)(r_edx+r_ebx*4+0x4u));
    /* 004e892e: push dword ptr [edx + edi*4] */ { u32 v = R32((u32)(r_edx+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 004e8931: call 0x7aaed0 */ r_esp -= 4; W32(r_esp, 0x4e8936u); f_007aaed0();
    /* 004e8936: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e8939: add esi, 0x28 */ {  u32 a = r_esi; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e893c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e893f: cmp edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e8942: jl 0x4e891d */ if ((fS!=fO)) goto L_004e891d;
L_004e8944:; BB(0x004e8944);
    /* 004e8944: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 004e8948: mov eax, dword ptr [0xa4d7f8] */ r_eax = R32((u32)(0xa4d7f8u));
    /* 004e894d: jmp 0x4e8977 */ goto L_004e8977;
L_004e894f:; BB(0x004e894f);
    /* 004e894f: mov eax, dword ptr [0xa4d7f8] */ r_eax = R32((u32)(0xa4d7f8u));
    /* 004e8954: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8957: jne 0x4e8977 */ if (!fZ) goto L_004e8977;
L_004e8959:; BB(0x004e8959);
    /* 004e8959: movzx esi, word ptr [eax + 0x40] */ r_esi = (u32)R16((u32)(r_eax+0x40u));
    /* 004e895d: mov edx, dword ptr [esi*8 + 0xa4d8c4] */ r_edx = R32((u32)(r_esi*8+0xa4d8c4u));
    /* 004e8964: mov edi, dword ptr [esi*8 + 0xa4d864] */ r_edi = R32((u32)(r_esi*8+0xa4d864u));
    /* 004e896b: mov dword ptr [0xa720e8], edx */ W32((u32)(0xa720e8u), r_edx);
    /* 004e8971: mov dword ptr [0xa720e4], edi */ W32((u32)(0xa720e4u), r_edi);
L_004e8977:; BB(0x004e8977);
    /* 004e8977: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e897a: call 0x4e7e54 */ r_esp -= 4; W32(r_esp, 0x4e897fu); f_004e7e54();
    /* 004e897f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004e8981: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4e8986u); f_007aa094();
    /* 004e8986: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e8989: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e898a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e898b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e898c: ret  */ FN_RET(0x004e8828); r_esp += 4; return;
}

void f_004e8994(void) /* sub_4E8994 */
{
    FN_ENTER(0x004e8994);
    /* 004e8994: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e8995: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e8996: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e8997: sub esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e899d: mov esi, eax */ r_esi = r_eax;
    /* 004e899f: mov edx, 2 */ r_edx = 0x2u;
    /* 004e89a4: mov eax, 0xa4d920 */ r_eax = 0xa4d920u;
    /* 004e89a9: mov ebx, 0xa70f20 */ r_ebx = 0xa70f20u;
    /* 004e89ae: mov ecx, 0xa4d920 */ r_ecx = 0xa4d920u;
    /* 004e89b3: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e89b5: jae 0x4e89fb */ if (!fC) goto L_004e89fb;
L_004e89b7:; BB(0x004e89b7);
    /* 004e89b7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004e89b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e89bb: je 0x4e89f2 */ if (fZ) goto L_004e89f2;
L_004e89bd:; BB(0x004e89bd);
    /* 004e89bd: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004e89c0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e89c2: je 0x4e89ce */ if (fZ) goto L_004e89ce;
L_004e89c4:; BB(0x004e89c4);
    /* 004e89c4: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 004e89c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e89c9: jne 0x4e89ce */ if (!fZ) goto L_004e89ce;
L_004e89cb:; BB(0x004e89cb);
    /* 004e89cb: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_004e89ce:; BB(0x004e89ce);
    /* 004e89ce: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 004e89d4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e89d6: je 0x4e89e5 */ if (fZ) goto L_004e89e5;
L_004e89d8:; BB(0x004e89d8);
    /* 004e89d8: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 004e89de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e89e0: jne 0x4e89e5 */ if (!fZ) goto L_004e89e5;
L_004e89e2:; BB(0x004e89e2);
    /* 004e89e2: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_004e89e5:; BB(0x004e89e5);
    /* 004e89e5: mov ecx, dword ptr [eax + 0x2f8] */ r_ecx = R32((u32)(r_eax+0x2f8u));
    /* 004e89eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e89ed: jne 0x4e89f2 */ if (!fZ) goto L_004e89f2;
L_004e89ef:; BB(0x004e89ef);
    /* 004e89ef: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_004e89f2:; BB(0x004e89f2);
    /* 004e89f2: add eax, 0x46c */ {  u32 a = r_eax; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e89f7: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e89f9: jb 0x4e89b7 */ if (fC) goto L_004e89b7;
L_004e89fb:; BB(0x004e89fb);
    /* 004e89fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e89fd: jle 0x4e8ea6 */ if ((fZ||fS!=fO)) goto L_004e8ea6;
L_004e8a03:; BB(0x004e8a03);
    /* 004e8a03: mov eax, dword ptr [0xa4d7f8] */ r_eax = R32((u32)(0xa4d7f8u));
    /* 004e8a08: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004e8a0a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004e8a0d: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 004e8a10: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004e8a14: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004e8a17: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 004e8a1b: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 004e8a1f: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004e8a23: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 004e8a26: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004e8a2a: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 004e8a2d: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004e8a31: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004e8a34: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004e8a38: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004e8a3b: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004e8a3f: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 004e8a42: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 004e8a46: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 004e8a49: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004e8a4d: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 004e8a50: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 004e8a54: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004e8a57: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 004e8a5b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004e8a5e: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004e8a62: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 004e8a65: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 004e8a69: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004e8a6c: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 004e8a70: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004e8a73: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 004e8a77: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004e8a7a: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004e8a7e: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004e8a81: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004e8a85: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 004e8a88: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004e8a8c: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 004e8a8f: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 004e8a93: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 004e8a96: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 004e8a9a: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004e8a9d: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 004e8aa1: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 004e8aa4: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 004e8aa8: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 004e8aab: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 004e8aaf: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 004e8ab2: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 004e8ab6: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 004e8ab9: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 004e8abd: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 004e8ac0: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 004e8ac4: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 004e8ac7: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 004e8acb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e8acd: jl 0x4e8ce5 */ if ((fS!=fO)) goto L_004e8ce5;
L_004e8ad3:; BB(0x004e8ad3);
    /* 004e8ad3: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e8ad6: jge 0x4e8ce5 */ if ((fS==fO)) goto L_004e8ce5;
L_004e8adc:; BB(0x004e8adc);
    /* 004e8adc: mov eax, 0xa4d920 */ r_eax = 0xa4d920u;
    /* 004e8ae1: mov edx, 0xa4d920 */ r_edx = 0xa4d920u;
    /* 004e8ae6: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e8ae8: jae 0x4e8d4c */ if (!fC) goto L_004e8d4c;
L_004e8aee:; BB(0x004e8aee);
    /* 004e8aee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004e8af0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8af2: je 0x4e8cd6 */ if (fZ) goto L_004e8cd6;
L_004e8af8:; BB(0x004e8af8);
    /* 004e8af8: mov dl, byte ptr [eax + 0xe] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0xeu))) & 0xffu);
    /* 004e8afb: cmp dl, byte ptr [esp + 0x38] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 004e8aff: jne 0x4e8cd6 */ if (!fZ) goto L_004e8cd6;
L_004e8b05:; BB(0x004e8b05);
    /* 004e8b05: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 004e8b09: cmp dx, word ptr [esp + 0x40] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x40u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e8b0e: jne 0x4e8cd6 */ if (!fZ) goto L_004e8cd6;
L_004e8b14:; BB(0x004e8b14);
    /* 004e8b14: movsx edx, word ptr [eax + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004e8b18: cmp dx, word ptr [esp + 0x42] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x42u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e8b1d: jne 0x4e8cd6 */ if (!fZ) goto L_004e8cd6;
L_004e8b23:; BB(0x004e8b23);
    /* 004e8b23: movsx edx, word ptr [eax + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 004e8b27: cmp dx, word ptr [esp + 0x44] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x44u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e8b2c: jne 0x4e8cd6 */ if (!fZ) goto L_004e8cd6;
L_004e8b32:; BB(0x004e8b32);
    /* 004e8b32: movsx edx, word ptr [eax + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 004e8b36: cmp dx, word ptr [esp + 0x46] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x46u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e8b3b: jne 0x4e8cd6 */ if (!fZ) goto L_004e8cd6;
L_004e8b41:; BB(0x004e8b41);
    /* 004e8b41: movsx edx, word ptr [eax + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004e8b45: cmp dx, word ptr [esp + 0x48] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x48u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e8b4a: jne 0x4e8cd6 */ if (!fZ) goto L_004e8cd6;
L_004e8b50:; BB(0x004e8b50);
    /* 004e8b50: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004e8b54: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004e8b58: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 004e8b5c: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 004e8b60: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 004e8b64: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004e8b68: mov dword ptr [esp + 0x7c], ecx */ W32((u32)(r_esp+0x7cu), r_ecx);
    /* 004e8b6c: mov dword ptr [esp + 0x80], ebx */ W32((u32)(r_esp+0x80u), r_ebx);
    /* 004e8b73: mov dword ptr [esp + 0x84], edi */ W32((u32)(r_esp+0x84u), r_edi);
    /* 004e8b7a: mov dword ptr [esp + 0x88], edx */ W32((u32)(r_esp+0x88u), r_edx);
    /* 004e8b81: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 004e8b85: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 004e8b8c: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 004e8b90: mov dword ptr [esp + 0x90], edx */ W32((u32)(r_esp+0x90u), r_edx);
    /* 004e8b97: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 004e8b9b: mov dword ptr [esp + 0x94], edx */ W32((u32)(r_esp+0x94u), r_edx);
    /* 004e8ba2: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 004e8ba6: mov dword ptr [esp + 0x98], edx */ W32((u32)(r_esp+0x98u), r_edx);
    /* 004e8bad: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 004e8bb1: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 004e8bb8: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004e8bbc: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 004e8bc3: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 004e8bc7: mov dword ptr [esp + 0xa4], edx */ W32((u32)(r_esp+0xa4u), r_edx);
    /* 004e8bce: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 004e8bd2: mov dword ptr [esp + 0xa8], edx */ W32((u32)(r_esp+0xa8u), r_edx);
    /* 004e8bd9: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 004e8bdd: mov dword ptr [esp + 0xac], edx */ W32((u32)(r_esp+0xacu), r_edx);
    /* 004e8be4: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 004e8be8: mov dword ptr [esp + 0xb0], edx */ W32((u32)(r_esp+0xb0u), r_edx);
    /* 004e8bef: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 004e8bf3: mov dword ptr [esp + 0xb4], edx */ W32((u32)(r_esp+0xb4u), r_edx);
    /* 004e8bfa: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 004e8bfe: mov dword ptr [esp + 0xb8], edx */ W32((u32)(r_esp+0xb8u), r_edx);
    /* 004e8c05: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 004e8c09: mov dword ptr [esp + 0xbc], edx */ W32((u32)(r_esp+0xbcu), r_edx);
    /* 004e8c10: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 004e8c14: mov dword ptr [esp + 0xc0], edx */ W32((u32)(r_esp+0xc0u), r_edx);
    /* 004e8c1b: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 004e8c1f: mov dword ptr [esp + 0xc4], edx */ W32((u32)(r_esp+0xc4u), r_edx);
    /* 004e8c26: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 004e8c2a: mov dword ptr [esp + 0xc8], edx */ W32((u32)(r_esp+0xc8u), r_edx);
    /* 004e8c31: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 004e8c35: mov dword ptr [esp + 0xcc], edx */ W32((u32)(r_esp+0xccu), r_edx);
    /* 004e8c3c: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 004e8c40: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 004e8c47: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 004e8c4b: mov dword ptr [esp + 0xd4], edx */ W32((u32)(r_esp+0xd4u), r_edx);
    /* 004e8c52: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 004e8c56: mov dword ptr [esp + 0xd8], edx */ W32((u32)(r_esp+0xd8u), r_edx);
    /* 004e8c5d: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 004e8c61: mov dword ptr [esp + 0xdc], edx */ W32((u32)(r_esp+0xdcu), r_edx);
    /* 004e8c68: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 004e8c6c: mov dword ptr [esp + 0xe0], edx */ W32((u32)(r_esp+0xe0u), r_edx);
    /* 004e8c73: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 004e8c77: mov dword ptr [esp + 0xe4], edx */ W32((u32)(r_esp+0xe4u), r_edx);
    /* 004e8c7e: lea edx, [esp + 0x78] */ r_edx = (u32)(r_esp+0x78u);
    /* 004e8c82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004e8c83: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x4e8c88u); f_004e6f24();
    /* 004e8c88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e8c89: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004e8c8c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e8c8e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e8c90: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e8c92: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e8c94: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e8c96: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e8c98: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e8c9a: movsx ecx, word ptr [edx + esi*2 + 0x9b5b60] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+r_esi*2+0x9b5b60u));
    /* 004e8ca2: movsx edx, word ptr [esp + esi*2 + 0xb0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+r_esi*2+0xb0u));
    /* 004e8caa: mov eax, edx */ r_eax = r_edx;
L_004e8cac:; BB(0x004e8cac);
    /* 004e8cac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e8caf: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e8cb1: jge 0x4e8eb8 */ if ((fS==fO)) goto L_004e8eb8;
L_004e8cb7:; BB(0x004e8cb7);
    /* 004e8cb7: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8cb9: jne 0x4e8cac */ if (!fZ) goto L_004e8cac;
L_004e8cbb:; BB(0x004e8cbb);
    /* 004e8cbb: mov eax, edx */ r_eax = r_edx;
L_004e8cbd:; BB(0x004e8cbd);
    /* 004e8cbd: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e8cc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e8cc2: jl 0x4e8eb0 */ if ((fS!=fO)) goto L_004e8eb0;
L_004e8cc8:; BB(0x004e8cc8);
    /* 004e8cc8: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8cca: jne 0x4e8cbd */ if (!fZ) goto L_004e8cbd;
L_004e8ccc:; BB(0x004e8ccc);
    /* 004e8ccc: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e8cd2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e8cd3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e8cd4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e8cd5: ret  */ FN_RET(0x004e8994); r_esp += 4; return;
L_004e8cd6:; BB(0x004e8cd6);
    /* 004e8cd6: add eax, 0x46c */ {  u32 a = r_eax; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e8cdb: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e8cdd: jb 0x4e8aee */ if (fC) goto L_004e8aee;
L_004e8ce3:; BB(0x004e8ce3);
    /* 004e8ce3: jmp 0x4e8d4c */ goto L_004e8d4c;
L_004e8ce5:; BB(0x004e8ce5);
    /* 004e8ce5: mov eax, 0xa4d920 */ r_eax = 0xa4d920u;
    /* 004e8cea: mov edx, 0xa4d920 */ r_edx = 0xa4d920u;
    /* 004e8cef: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e8cf1: jae 0x4e8d4c */ if (!fC) goto L_004e8d4c;
L_004e8cf3:; BB(0x004e8cf3);
    /* 004e8cf3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004e8cf5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8cf7: je 0x4e8d43 */ if (fZ) goto L_004e8d43;
L_004e8cf9:; BB(0x004e8cf9);
    /* 004e8cf9: mov dl, byte ptr [eax + 0xe] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0xeu))) & 0xffu);
    /* 004e8cfc: cmp dl, byte ptr [esp + 0x38] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 004e8d00: jne 0x4e8d43 */ if (!fZ) goto L_004e8d43;
L_004e8d02:; BB(0x004e8d02);
    /* 004e8d02: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 004e8d06: cmp dx, word ptr [esp + 0x40] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x40u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e8d0b: jne 0x4e8d43 */ if (!fZ) goto L_004e8d43;
L_004e8d0d:; BB(0x004e8d0d);
    /* 004e8d0d: movsx edx, word ptr [eax + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 004e8d11: cmp dx, word ptr [esp + 0x42] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x42u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e8d16: jne 0x4e8d43 */ if (!fZ) goto L_004e8d43;
L_004e8d18:; BB(0x004e8d18);
    /* 004e8d18: movsx edx, word ptr [eax + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 004e8d1c: cmp dx, word ptr [esp + 0x44] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x44u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e8d21: jne 0x4e8d43 */ if (!fZ) goto L_004e8d43;
L_004e8d23:; BB(0x004e8d23);
    /* 004e8d23: movsx edx, word ptr [eax + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 004e8d27: cmp dx, word ptr [esp + 0x46] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x46u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e8d2c: jne 0x4e8d43 */ if (!fZ) goto L_004e8d43;
L_004e8d2e:; BB(0x004e8d2e);
    /* 004e8d2e: movsx edx, word ptr [eax + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004e8d32: cmp dx, word ptr [esp + 0x48] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esp+0x48u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e8d37: jne 0x4e8d43 */ if (!fZ) goto L_004e8d43;
L_004e8d39:; BB(0x004e8d39);
    /* 004e8d39: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e8d3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e8d40: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e8d41: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e8d42: ret  */ FN_RET(0x004e8994); r_esp += 4; return;
L_004e8d43:; BB(0x004e8d43);
    /* 004e8d43: add eax, 0x46c */ {  u32 a = r_eax; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e8d48: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e8d4a: jb 0x4e8cf3 */ if (fC) goto L_004e8cf3;
L_004e8d4c:; BB(0x004e8d4c);
    /* 004e8d4c: mov esi, 0xa4d920 */ r_esi = 0xa4d920u;
    /* 004e8d51: mov eax, 0xa4d920 */ r_eax = 0xa4d920u;
    /* 004e8d56: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e8d58: jae 0x4e8dbf */ if (!fC) goto L_004e8dbf;
L_004e8d5a:; BB(0x004e8d5a);
    /* 004e8d5a: mov eax, 0xa4d920 */ r_eax = 0xa4d920u;
    /* 004e8d5f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004e8d61: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e8d63: cmp eax, 0x1a88 */ {  u32 a = r_eax; u32 b = 0x1a88u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e8d68: jb 0x4e8daf */ if (fC) goto L_004e8daf;
L_004e8d6a:; BB(0x004e8d6a);
    /* 004e8d6a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004e8d6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8d6e: je 0x4e8dc1 */ if (fZ) goto L_004e8dc1;
L_004e8d70:; BB(0x004e8d70);
    /* 004e8d70: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e8d76: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004e8d78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8d7a: je 0x4e8dc1 */ if (fZ) goto L_004e8dc1;
L_004e8d7c:; BB(0x004e8d7c);
    /* 004e8d7c: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e8d82: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004e8d84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8d86: je 0x4e8dc1 */ if (fZ) goto L_004e8dc1;
L_004e8d88:; BB(0x004e8d88);
    /* 004e8d88: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e8d8e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004e8d90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8d92: je 0x4e8dc1 */ if (fZ) goto L_004e8dc1;
L_004e8d94:; BB(0x004e8d94);
    /* 004e8d94: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e8d9a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004e8d9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8d9e: je 0x4e8dc1 */ if (fZ) goto L_004e8dc1;
L_004e8da0:; BB(0x004e8da0);
    /* 004e8da0: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e8da6: mov eax, 0xa6f498 */ r_eax = 0xa6f498u;
    /* 004e8dab: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004e8dad: jbe 0x4e8d6a */ if ((fC||fZ)) goto L_004e8d6a;
L_004e8daf:; BB(0x004e8daf);
    /* 004e8daf: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004e8db1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8db3: je 0x4e8dc1 */ if (fZ) goto L_004e8dc1;
L_004e8db5:; BB(0x004e8db5);
    /* 004e8db5: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e8dbb: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e8dbd: jb 0x4e8daf */ if (fC) goto L_004e8daf;
L_004e8dbf:; BB(0x004e8dbf);
    /* 004e8dbf: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004e8dc1:; BB(0x004e8dc1);
    /* 004e8dc1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8dc3: je 0x4e8ebf */ if (fZ) goto L_004e8ebf;
L_004e8dc9:; BB(0x004e8dc9);
    /* 004e8dc9: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 004e8dcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e8dce: lea ebx, [esi + 0x14] */ r_ebx = (u32)(r_esi+0x14u);
    /* 004e8dd1: lea ecx, [esi + 0x188] */ r_ecx = (u32)(r_esi+0x188u);
    /* 004e8dd7: lea edx, [esi + 0x2fc] */ r_edx = (u32)(r_esi+0x2fcu);
    /* 004e8ddd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004e8dde: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004e8ddf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e8de0: call 0x4e6914 */ r_esp -= 4; W32(r_esp, 0x4e8de5u); f_004e6914();
    /* 004e8de5: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004e8de9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e8dea: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x4e8defu); f_004e6f24();
    /* 004e8def: mov ebx, eax */ r_ebx = r_eax;
    /* 004e8df1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e8df4: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 004e8df7: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 004e8dfa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8dfc: je 0x4e8e1b */ if (fZ) goto L_004e8e1b;
L_004e8dfe:; BB(0x004e8dfe);
    /* 004e8dfe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e8dff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e8e00: lea edx, [edi + 0x168] */ r_edx = (u32)(r_edi+0x168u);
    /* 004e8e06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004e8e07: push dword ptr [0xa720f0] */ { u32 v = R32((u32)(0xa720f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e8e0d: call 0x4edb08 */ r_esp -= 4; W32(r_esp, 0x4e8e12u); f_004edb08();
    /* 004e8e12: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e8e15: mov dword ptr [edi + 0x170], eax */ W32((u32)(r_edi+0x170u), r_eax);
L_004e8e1b:; BB(0x004e8e1b);
    /* 004e8e1b: mov edx, dword ptr [esi + 0x188] */ r_edx = R32((u32)(r_esi+0x188u));
    /* 004e8e21: lea edi, [esi + 0x184] */ r_edi = (u32)(r_esi+0x184u);
    /* 004e8e27: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8e29: je 0x4e8e48 */ if (fZ) goto L_004e8e48;
L_004e8e2b:; BB(0x004e8e2b);
    /* 004e8e2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e8e2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e8e2d: lea edx, [edi + 0x168] */ r_edx = (u32)(r_edi+0x168u);
    /* 004e8e33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004e8e34: push dword ptr [0xa720f0] */ { u32 v = R32((u32)(0xa720f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e8e3a: call 0x4edb08 */ r_esp -= 4; W32(r_esp, 0x4e8e3fu); f_004edb08();
    /* 004e8e3f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e8e42: mov dword ptr [edi + 0x170], eax */ W32((u32)(r_edi+0x170u), r_eax);
L_004e8e48:; BB(0x004e8e48);
    /* 004e8e48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e8e49: lea edi, [esi + 0x2f8] */ r_edi = (u32)(r_esi+0x2f8u);
    /* 004e8e4f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e8e50: lea edx, [esi + 0x460] */ r_edx = (u32)(r_esi+0x460u);
    /* 004e8e56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004e8e57: push dword ptr [0xa720f0] */ { u32 v = R32((u32)(0xa720f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e8e5d: call 0x4edb08 */ r_esp -= 4; W32(r_esp, 0x4e8e62u); f_004edb08();
    /* 004e8e62: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e8e65: mov dword ptr [edi + 0x170], eax */ W32((u32)(r_edi+0x170u), r_eax);
    /* 004e8e6b: mov dword ptr [esi], 1 */ W32((u32)(r_esi), 0x1u);
    /* 004e8e71: movzx edi, word ptr [esp + 0x40] */ r_edi = (u32)R16((u32)(r_esp+0x40u));
    /* 004e8e76: mov word ptr [esi + 4], di */ W16((u32)(r_esi+0x4u), (u16)r_edi);
    /* 004e8e7a: movzx eax, word ptr [esp + 0x42] */ r_eax = (u32)R16((u32)(r_esp+0x42u));
    /* 004e8e7f: mov word ptr [esi + 6], ax */ W16((u32)(r_esi+0x6u), (u16)r_eax);
    /* 004e8e83: movzx edx, word ptr [esp + 0x44] */ r_edx = (u32)R16((u32)(r_esp+0x44u));
    /* 004e8e88: mov word ptr [esi + 8], dx */ W16((u32)(r_esi+0x8u), (u16)r_edx);
    /* 004e8e8c: movzx ecx, word ptr [esp + 0x46] */ r_ecx = (u32)R16((u32)(r_esp+0x46u));
    /* 004e8e91: mov word ptr [esi + 0xa], cx */ W16((u32)(r_esi+0xau), (u16)r_ecx);
    /* 004e8e95: movzx ebx, word ptr [esp + 0x48] */ r_ebx = (u32)R16((u32)(r_esp+0x48u));
    /* 004e8e9a: mov word ptr [esi + 0xc], bx */ W16((u32)(r_esi+0xcu), (u16)r_ebx);
    /* 004e8e9e: movzx eax, byte ptr [esp + 0x38] */ r_eax = (u32)R8((u32)(r_esp+0x38u));
    /* 004e8ea3: mov byte ptr [esi + 0xe], al */ W8((u32)(r_esi+0xeu), (u8)r_eax);
L_004e8ea6:; BB(0x004e8ea6);
    /* 004e8ea6: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e8eac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e8ead: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e8eae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e8eaf: ret  */ FN_RET(0x004e8994); r_esp += 4; return;
L_004e8eb0:; BB(0x004e8eb0);
    /* 004e8eb0: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
    /* 004e8eb3: jmp 0x4e8cc8 */ goto L_004e8cc8;
L_004e8eb8:; BB(0x004e8eb8);
    /* 004e8eb8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e8eba: jmp 0x4e8cb7 */ goto L_004e8cb7;
L_004e8ebf:; BB(0x004e8ebf);
    /* 004e8ebf: call 0x4e71e0 */ r_esp -= 4; W32(r_esp, 0x4e8ec4u); f_004e71e0();
    /* 004e8ec4: mov esi, dword ptr [0xa4d7f8] */ r_esi = R32((u32)(0xa4d7f8u));
    /* 004e8eca: mov ecx, dword ptr [0xa720ec] */ r_ecx = R32((u32)(0xa720ecu));
    /* 004e8ed0: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004e8ed3: mov eax, 4 */ r_eax = 0x4u;
    /* 004e8ed8: mov edx, 0xa70ab4 */ r_edx = 0xa70ab4u;
    /* 004e8edd: mov ebx, esi */ r_ebx = r_esi;
L_004e8edf:; BB(0x004e8edf);
    /* 004e8edf: mov esi, edx */ r_esi = r_edx;
    /* 004e8ee1: mov ebp, 0xa4d920 */ r_ebp = 0xa4d920u;
    /* 004e8ee6: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e8ee8: jb 0x4e9014 */ if (fC) goto L_004e9014;
L_004e8eee:; BB(0x004e8eee);
    /* 004e8eee: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
L_004e8ef2:; BB(0x004e8ef2);
    /* 004e8ef2: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8ef4: je 0x4e8ff8 */ if (fZ) goto L_004e8ff8;
L_004e8efa:; BB(0x004e8efa);
    /* 004e8efa: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004e8efc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8efe: je 0x4e8ff8 */ if (fZ) goto L_004e8ff8;
L_004e8f04:; BB(0x004e8f04);
    /* 004e8f04: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 004e8f07: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8f09: je 0x4e8f16 */ if (fZ) goto L_004e8f16;
L_004e8f0b:; BB(0x004e8f0b);
    /* 004e8f0b: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 004e8f0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8f10: je 0x4e8ff8 */ if (fZ) goto L_004e8ff8;
L_004e8f16:; BB(0x004e8f16);
    /* 004e8f16: mov edx, dword ptr [esi + 0x188] */ r_edx = R32((u32)(r_esi+0x188u));
    /* 004e8f1c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8f1e: je 0x4e8f2e */ if (fZ) goto L_004e8f2e;
L_004e8f20:; BB(0x004e8f20);
    /* 004e8f20: mov eax, dword ptr [esi + 0x184] */ r_eax = R32((u32)(r_esi+0x184u));
    /* 004e8f26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8f28: je 0x4e8ff8 */ if (fZ) goto L_004e8ff8;
L_004e8f2e:; BB(0x004e8f2e);
    /* 004e8f2e: mov eax, dword ptr [esi + 0x2f8] */ r_eax = R32((u32)(r_esi+0x2f8u));
    /* 004e8f34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8f36: je 0x4e8ff8 */ if (fZ) goto L_004e8ff8;
L_004e8f3c:; BB(0x004e8f3c);
    /* 004e8f3c: movsx eax, word ptr [esi + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 004e8f40: cmp ax, word ptr [ebx + 0x38] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebx+0x38u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e8f44: mov ebp, 0 */ r_ebp = 0x0u;
    /* 004e8f49: je 0x4e8f50 */ if (fZ) goto L_004e8f50;
L_004e8f4b:; BB(0x004e8f4b);
    /* 004e8f4b: mov ebp, 1 */ r_ebp = 0x1u;
L_004e8f50:; BB(0x004e8f50);
    /* 004e8f50: movsx eax, word ptr [esi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 004e8f54: cmp ax, word ptr [ebx + 0x3a] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebx+0x3au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e8f58: je 0x4e8f5d */ if (fZ) goto L_004e8f5d;
L_004e8f5a:; BB(0x004e8f5a);
    /* 004e8f5a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004e8f5d:; BB(0x004e8f5d);
    /* 004e8f5d: movsx eax, word ptr [esi + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 004e8f61: cmp ax, word ptr [ebx + 0x3c] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebx+0x3cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e8f65: je 0x4e8f6a */ if (fZ) goto L_004e8f6a;
L_004e8f67:; BB(0x004e8f67);
    /* 004e8f67: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004e8f6a:; BB(0x004e8f6a);
    /* 004e8f6a: movsx eax, word ptr [esi + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xau));
    /* 004e8f6e: cmp ax, word ptr [ebx + 0x3e] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebx+0x3eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e8f72: je 0x4e8f77 */ if (fZ) goto L_004e8f77;
L_004e8f74:; BB(0x004e8f74);
    /* 004e8f74: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004e8f77:; BB(0x004e8f77);
    /* 004e8f77: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004e8f7b: cmp ax, word ptr [ebx + 0x40] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebx+0x40u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e8f7f: je 0x4e8f84 */ if (fZ) goto L_004e8f84;
L_004e8f81:; BB(0x004e8f81);
    /* 004e8f81: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004e8f84:; BB(0x004e8f84);
    /* 004e8f84: mov al, byte ptr [esi + 0xe] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0xeu))) & 0xffu);
    /* 004e8f87: cmp al, byte ptr [ebx + 0x30] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ebx+0x30u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 004e8f8a: je 0x4e8f8f */ if (fZ) goto L_004e8f8f;
L_004e8f8c:; BB(0x004e8f8c);
    /* 004e8f8c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004e8f8f:; BB(0x004e8f8f);
    /* 004e8f8f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004e8f93: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e8f95: jl 0x4e8ff8 */ if ((fS!=fO)) goto L_004e8ff8;
L_004e8f97:; BB(0x004e8f97);
    /* 004e8f97: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 004e8f9a: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 004e8fa0: mov ebx, 0xa70f20 */ r_ebx = 0xa70f20u;
    /* 004e8fa5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8fa7: je 0x4e8fc1 */ if (fZ) goto L_004e8fc1;
L_004e8fa9:; BB(0x004e8fa9);
    /* 004e8fa9: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 004e8fac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8fae: je 0x4e8fc1 */ if (fZ) goto L_004e8fc1;
L_004e8fb0:; BB(0x004e8fb0);
    /* 004e8fb0: lea ecx, [esi + 0x178] */ r_ecx = (u32)(r_esi+0x178u);
    /* 004e8fb6: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x4e8fbbu); f_00829de0();
    /* 004e8fbb: mov edx, dword ptr [esi + 0x188] */ r_edx = R32((u32)(r_esi+0x188u));
L_004e8fc1:; BB(0x004e8fc1);
    /* 004e8fc1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8fc3: je 0x4e8fda */ if (fZ) goto L_004e8fda;
L_004e8fc5:; BB(0x004e8fc5);
    /* 004e8fc5: mov eax, dword ptr [esi + 0x184] */ r_eax = R32((u32)(r_esi+0x184u));
    /* 004e8fcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8fcd: je 0x4e8fda */ if (fZ) goto L_004e8fda;
L_004e8fcf:; BB(0x004e8fcf);
    /* 004e8fcf: lea ecx, [esi + 0x2ec] */ r_ecx = (u32)(r_esi+0x2ecu);
    /* 004e8fd5: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x4e8fdau); f_00829de0();
L_004e8fda:; BB(0x004e8fda);
    /* 004e8fda: mov eax, dword ptr [esi + 0x2f8] */ r_eax = R32((u32)(r_esi+0x2f8u));
    /* 004e8fe0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8fe2: je 0x4e8ff1 */ if (fZ) goto L_004e8ff1;
L_004e8fe4:; BB(0x004e8fe4);
    /* 004e8fe4: add esi, 0x460 */ {  u32 a = r_esi; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e8fea: mov ecx, esi */ r_ecx = r_esi;
    /* 004e8fec: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x4e8ff1u); f_00829de0();
L_004e8ff1:; BB(0x004e8ff1);
    /* 004e8ff1: mov eax, 1 */ r_eax = 0x1u;
    /* 004e8ff6: jmp 0x4e9029 */ goto L_004e9029;
L_004e8ff8:; BB(0x004e8ff8);
    /* 004e8ff8: add esi, 0xfffffb94 */ {  u32 a = r_esi; u32 b = 0xfffffb94u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e8ffe: mov eax, 0xa4d920 */ r_eax = 0xa4d920u;
    /* 004e9003: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e9005: jae 0x4e8ef2 */ if (!fC) goto L_004e8ef2;
L_004e900b:; BB(0x004e900b);
    /* 004e900b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004e900f: mov edx, 0xa70ab4 */ r_edx = 0xa70ab4u;
L_004e9014:; BB(0x004e9014);
    /* 004e9014: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e9017: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e9019: jg 0x4e8edf */ if ((!fZ&&fS==fO)) goto L_004e8edf;
L_004e901f:; BB(0x004e901f);
    /* 004e901f: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 004e9022: mov ebx, 0xa70f20 */ r_ebx = 0xa70f20u;
    /* 004e9027: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004e9029:; BB(0x004e9029);
    /* 004e9029: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e902b: je 0x4e8ea6 */ if (fZ) goto L_004e8ea6;
L_004e9031:; BB(0x004e9031);
    /* 004e9031: mov esi, 0xa4d920 */ r_esi = 0xa4d920u;
    /* 004e9036: mov eax, 0xa4d920 */ r_eax = 0xa4d920u;
    /* 004e903b: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e903d: jae 0x4e90c0 */ if (!fC) goto L_004e90c0;
L_004e9043:; BB(0x004e9043);
    /* 004e9043: mov eax, 0xa4d920 */ r_eax = 0xa4d920u;
    /* 004e9048: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004e904a: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e904c: cmp eax, 0x1a88 */ {  u32 a = r_eax; u32 b = 0x1a88u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e9051: jb 0x4e90ac */ if (fC) goto L_004e90ac;
L_004e9053:; BB(0x004e9053);
    /* 004e9053: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004e9055: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9057: je 0x4e8dc9 */ if (fZ) goto L_004e8dc9;
L_004e905d:; BB(0x004e905d);
    /* 004e905d: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e9063: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004e9065: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9067: je 0x4e8dc9 */ if (fZ) goto L_004e8dc9;
L_004e906d:; BB(0x004e906d);
    /* 004e906d: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e9073: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004e9075: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9077: je 0x4e8dc9 */ if (fZ) goto L_004e8dc9;
L_004e907d:; BB(0x004e907d);
    /* 004e907d: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e9083: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004e9085: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9087: je 0x4e8dc9 */ if (fZ) goto L_004e8dc9;
L_004e908d:; BB(0x004e908d);
    /* 004e908d: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e9093: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004e9095: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e9097: je 0x4e8dc9 */ if (fZ) goto L_004e8dc9;
L_004e909d:; BB(0x004e909d);
    /* 004e909d: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e90a3: mov eax, 0xa6f498 */ r_eax = 0xa6f498u;
    /* 004e90a8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004e90aa: jbe 0x4e9053 */ if ((fC||fZ)) goto L_004e9053;
L_004e90ac:; BB(0x004e90ac);
    /* 004e90ac: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004e90ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e90b0: je 0x4e8dc9 */ if (fZ) goto L_004e8dc9;
L_004e90b6:; BB(0x004e90b6);
    /* 004e90b6: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e90bc: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e90be: jb 0x4e90ac */ if (fC) goto L_004e90ac;
L_004e90c0:; BB(0x004e90c0);
    /* 004e90c0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004e90c2: jmp 0x4e8dc9 */ goto L_004e8dc9;
}

