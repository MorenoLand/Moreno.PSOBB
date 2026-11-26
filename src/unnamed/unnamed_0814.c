#include "protos.h"

void f_00814028(void) /* sub_814028 */
{
    FN_ENTER(0x00814028);
    /* 00814028: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00814029: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081402a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0081402b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0081402c: sub esp, 0x20c */ {  u32 a = r_esp; u32 b = 0x20cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00814032: mov eax, dword ptr [esp + 0x220] */ r_eax = R32((u32)(r_esp+0x220u));
    /* 00814039: mov ecx, 0x20 */ r_ecx = 0x20u;
    /* 0081403e: mov word ptr [esp + 0xc], cx */ W16((u32)(r_esp+0xcu), (u16)r_ecx);
    /* 00814043: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 00814046: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00814048: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081404a: je 0x814141 */ if (fZ) goto L_00814141;
L_00814050:; BB(0x00814050);
    /* 00814050: mov ebp, dword ptr [esp + 0x220] */ r_ebp = R32((u32)(r_esp+0x220u));
    /* 00814057: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00814059:; BB(0x00814059);
    /* 00814059: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081405c: jl 0x814069 */ if ((fS!=fO)) goto L_00814069;
L_0081405e:; BB(0x0081405e);
    /* 0081405e: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00814061: jg 0x814069 */ if ((!fZ&&fS==fO)) goto L_00814069;
L_00814063:; BB(0x00814063);
    /* 00814063: and eax, 0x5f */ {  u32 a = r_eax; u32 b = 0x5fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00814066: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00814069:; BB(0x00814069);
    /* 00814069: mov word ptr [esp + edx + 0xe], ax */ W16((u32)(r_esp+r_edx+0xeu), (u16)r_eax);
    /* 0081406e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00814071: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00814074: movzx eax, word ptr [ebp + edx] */ r_eax = (u32)R16((u32)(r_ebp+r_edx));
    /* 00814079: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081407b: je 0x814085 */ if (fZ) goto L_00814085;
L_0081407d:; BB(0x0081407d);
    /* 0081407d: cmp ecx, 0xfd */ {  u32 a = r_ecx; u32 b = 0xfdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00814083: jl 0x814059 */ if ((fS!=fO)) goto L_00814059;
L_00814085:; BB(0x00814085);
    /* 00814085: mov eax, 0x20 */ r_eax = 0x20u;
    /* 0081408a: mov word ptr [esp + edx + 0xe], ax */ W16((u32)(r_esp+r_edx+0xeu), (u16)r_eax);
    /* 0081408f: mov eax, dword ptr [esp + 0x224] */ r_eax = R32((u32)(r_esp+0x224u));
    /* 00814096: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00814098: mov word ptr [esp + edx + 0x10], cx */ W16((u32)(r_esp+r_edx+0x10u), (u16)r_ecx);
    /* 0081409d: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 008140a0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008140a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008140a4: je 0x814131 */ if (fZ) goto L_00814131;
L_008140aa:; BB(0x008140aa);
    /* 008140aa: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 008140af: mov edi, dword ptr [esp + 0x224] */ r_edi = R32((u32)(r_esp+0x224u));
    /* 008140b6: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 008140b9: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 008140bc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008140be: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008140c0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008140c2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008140c4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008140c6:; BB(0x008140c6);
    /* 008140c6: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 008140c9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008140cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008140cd: je 0x814123 */ if (fZ) goto L_00814123;
L_008140cf:; BB(0x008140cf);
    /* 008140cf: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 008140d4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008140d8: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008140dc: lea ebp, [edi + eax] */ r_ebp = (u32)(r_edi+r_eax);
    /* 008140df: movzx ebx, word ptr [ebp] */ r_ebx = (u32)R16((u32)(r_ebp));
L_008140e3:; BB(0x008140e3);
    /* 008140e3: mov edx, esi */ r_edx = r_esi;
    /* 008140e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008140e7: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008140e9: jne 0x814108 */ if (!fZ) goto L_00814108;
L_008140eb:; BB(0x008140eb);
    /* 008140eb: movzx ecx, word ptr [ebp + eax*2 + 2] */ r_ecx = (u32)R16((u32)(r_ebp+r_eax*2+0x2u));
    /* 008140f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008140f2: je 0x814148 */ if (fZ) goto L_00814148;
L_008140f4:; BB(0x008140f4);
    /* 008140f4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008140f7: movzx ecx, word ptr [esp + edx*2 + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+r_edx*2+0xcu));
    /* 008140fc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008140ff: movzx edi, word ptr [ebp + eax*2] */ r_edi = (u32)R16((u32)(r_ebp+r_eax*2));
    /* 00814104: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814106: je 0x8140eb */ if (fZ) goto L_008140eb;
L_00814108:; BB(0x00814108);
    /* 00814108: movzx ecx, word ptr [esp + esi*2 + 0xe] */ r_ecx = (u32)R16((u32)(r_esp+r_esi*2+0xeu));
    /* 0081410d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00814110: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814112: jne 0x8140e3 */ if (!fZ) goto L_008140e3;
L_00814114:; BB(0x00814114);
    /* 00814114: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00814118: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0081411c: mov edi, dword ptr [esp + 0x224] */ r_edi = R32((u32)(r_esp+0x224u));
L_00814123:; BB(0x00814123);
    /* 00814123: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00814126: movzx ecx, word ptr [eax + edi] */ r_ecx = (u32)R16((u32)(r_eax+r_edi));
    /* 0081412a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081412d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081412f: jne 0x8140c6 */ if (!fZ) goto L_008140c6;
L_00814131:; BB(0x00814131);
    /* 00814131: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00814136: add esp, 0x20c */ {  u32 a = r_esp; u32 b = 0x20cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081413c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081413d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081413e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081413f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00814140: ret  */ FN_RET(0x00814028); r_esp += 4; return;
L_00814141:; BB(0x00814141);
    /* 00814141: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00814143: jmp 0x814085 */ goto L_00814085;
L_00814148:; BB(0x00814148);
    /* 00814148: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0081414c: mov eax, edx */ r_eax = r_edx;
    /* 0081414e: add esp, 0x20c */ {  u32 a = r_esp; u32 b = 0x20cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00814154: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00814155: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00814156: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00814157: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00814158: ret  */ FN_RET(0x00814028); r_esp += 4; return;
}

void f_0081415c(void) /* sub_81415C */
{
    FN_ENTER(0x0081415c);
    /* 0081415c: call 0x814948 */ r_esp -= 4; W32(r_esp, 0x814161u); f_00814948();
    /* 00814161: call 0x828bcc */ r_esp -= 4; W32(r_esp, 0x814166u); f_00828bcc();
    /* 00814166: ret  */ FN_RET(0x0081415c); r_esp += 4; return;
}

void f_00814168(void) /* sub_814168 */
{
    FN_ENTER(0x00814168);
    /* 00814168: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0081416b: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814171: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x814176u); f_0068d5a8();
    /* 00814176: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00814177: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814179: je 0x814261 */ if (fZ) goto L_00814261;
L_0081417f:; BB(0x0081417f);
    /* 0081417f: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00814182: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00814185: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00814188: mov dword ptr [0xab59c0], edx */ W32((u32)(0xab59c0u), r_edx);
    /* 0081418e: mov dword ptr [0xab59c4], ecx */ W32((u32)(0xab59c4u), r_ecx);
    /* 00814194: mov dword ptr [0xab59c8], eax */ W32((u32)(0xab59c8u), r_eax);
    /* 00814199: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
L_0081419e:; BB(0x0081419e);
    /* 0081419e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008141a0: je 0x814217 */ if (fZ) goto L_00814217;
L_008141a2:; BB(0x008141a2);
    /* 008141a2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 008141a5: fld dword ptr [eax + 0x184] */ FPUSH(R_F32((u32)(r_eax+0x184u)));
    /* 008141ab: fsub dword ptr [eax + 0x178] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x178u));
    /* 008141b1: fld dword ptr [eax + 0x188] */ FPUSH(R_F32((u32)(r_eax+0x188u)));
    /* 008141b7: fsub dword ptr [eax + 0x17c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x17cu));
    /* 008141bd: fld dword ptr [eax + 0x18c] */ FPUSH(R_F32((u32)(r_eax+0x18cu)));
    /* 008141c3: fsub dword ptr [eax + 0x180] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x180u));
    /* 008141c9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008141cb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008141ce: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 008141d2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 008141d6: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x8141dbu); f_0082df08();
    /* 008141db: fcomp dword ptr [0x980b08] */ fx_compare(ST(0), R_F32((u32)(0x980b08u))); FPOP();
    /* 008141e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008141e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008141e4: jne 0x8141f9 */ if (!fZ) goto L_008141f9;
L_008141e6:; BB(0x008141e6);
    /* 008141e6: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 008141ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008141f0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008141f2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008141f5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_008141f9:; BB(0x008141f9);
    /* 008141f9: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 008141fc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00814200: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00814204: mov dword ptr [0xab59cc], eax */ W32((u32)(0xab59ccu), r_eax);
    /* 00814209: mov dword ptr [0xab59d0], edx */ W32((u32)(0xab59d0u), r_edx);
    /* 0081420f: mov dword ptr [0xab59d4], ecx */ W32((u32)(0xab59d4u), r_ecx);
    /* 00814215: jmp 0x814235 */ goto L_00814235;
L_00814217:; BB(0x00814217);
    /* 00814217: mov dword ptr [0xab59d0], 0 */ W32((u32)(0xab59d0u), 0x0u);
    /* 00814221: mov dword ptr [0xab59cc], 0 */ W32((u32)(0xab59ccu), 0x0u);
    /* 0081422b: mov dword ptr [0xab59d4], 0x3f800000 */ W32((u32)(0xab59d4u), 0x3f800000u);
L_00814235:; BB(0x00814235);
    /* 00814235: push 0xab59cc */ { u32 v = 0xab59ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0081423a: push 0xab59c0 */ { u32 v = 0xab59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081423f: call 0x829870 */ r_esp -= 4; W32(r_esp, 0x814244u); f_00829870();
    /* 00814244: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00814246: call 0x828974 */ r_esp -= 4; W32(r_esp, 0x81424bu); f_00828974();
    /* 0081424b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0081424e: call 0x814988 */ r_esp -= 4; W32(r_esp, 0x814253u); f_00814988();
    /* 00814253: call 0x814f30 */ r_esp -= 4; W32(r_esp, 0x814258u); f_00814f30();
    /* 00814258: call 0x828d24 */ r_esp -= 4; W32(r_esp, 0x81425du); f_00828d24();
    /* 0081425d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00814260: ret  */ FN_RET(0x00814168); r_esp += 4; return;
L_00814261:; BB(0x00814261);
    /* 00814261: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00814266: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814268: je 0x81419e */ if (fZ) goto L_0081419e;
L_0081426e:; BB(0x0081426e);
    /* 0081426e: mov edx, dword ptr [eax + 0x178] */ r_edx = R32((u32)(r_eax+0x178u));
    /* 00814274: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0081427a: mov dword ptr [0xab59c0], edx */ W32((u32)(0xab59c0u), r_edx);
    /* 00814280: mov edx, dword ptr [eax + 0x180] */ r_edx = R32((u32)(r_eax+0x180u));
    /* 00814286: mov dword ptr [0xab59c4], ecx */ W32((u32)(0xab59c4u), r_ecx);
    /* 0081428c: mov dword ptr [0xab59c8], edx */ W32((u32)(0xab59c8u), r_edx);
    /* 00814292: jmp 0x81419e */ goto L_0081419e;
}

void f_00814298(void) /* sub_814298 */
{
    FN_ENTER(0x00814298);
    /* 00814298: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00814299: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081429a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0081429b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0081429c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0081429f: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 008142a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008142a5: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 008142a9: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 008142ad: je 0x81441a */ if (fZ) goto L_0081441a;
L_008142b3:; BB(0x008142b3);
    /* 008142b3: cmp eax, 0x700 */ {  u32 a = r_eax; u32 b = 0x700u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008142b8: jl 0x814427 */ if ((fS!=fO)) goto L_00814427;
L_008142be:; BB(0x008142be);
    /* 008142be: mov ebx, dword ptr [0xa13b20] */ r_ebx = R32((u32)(0xa13b20u));
    /* 008142c4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_008142c6:; BB(0x008142c6);
    /* 008142c6: fld dword ptr [0x980b00] */ FPUSH(R_F32((u32)(0x980b00u)));
    /* 008142cc: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 008142d0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008142d2: je 0x81434b */ if (fZ) goto L_0081434b;
L_008142d4:; BB(0x008142d4);
    /* 008142d4: call 0x82992c */ r_esp -= 4; W32(r_esp, 0x8142d9u); f_0082992c();
    /* 008142d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008142da: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008142db: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x8142e0u); f_00836208();
    /* 008142e0: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 008142e4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008142e7: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 008142eb: fcomp dword ptr [0x980afc] */ fx_compare(ST(0), R_F32((u32)(0x980afcu))); FPOP();
    /* 008142f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008142f3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008142f4: ja 0x8142fa */ if ((!fC&&!fZ)) goto L_008142fa;
L_008142f6:; BB(0x008142f6);
    /* 008142f6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008142f8: jmp 0x81434b */ goto L_0081434b;
L_008142fa:; BB(0x008142fa);
    /* 008142fa: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 008142fe: fcomp dword ptr [0x980af8] */ fx_compare(ST(0), R_F32((u32)(0x980af8u))); FPOP();
    /* 00814304: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00814306: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00814307: ja 0x81434b */ if ((!fC&&!fZ)) goto L_0081434b;
L_00814309:; BB(0x00814309);
    /* 00814309: cmp ebp, 0x87 */ {  u32 a = r_ebp; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081430f: jl 0x81434b */ if ((fS!=fO)) goto L_0081434b;
L_00814311:; BB(0x00814311);
    /* 00814311: cmp ebp, 0xa7 */ {  u32 a = r_ebp; u32 b = 0xa7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00814317: jg 0x81434b */ if ((!fZ&&fS==fO)) goto L_0081434b;
L_00814319:; BB(0x00814319);
    /* 00814319: cmp ebp, 0x88 */ {  u32 a = r_ebp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081431f: je 0x81434b */ if (fZ) goto L_0081434b;
L_00814321:; BB(0x00814321);
    /* 00814321: cmp ebp, 0x8a */ {  u32 a = r_ebp; u32 b = 0x8au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814327: je 0x81434b */ if (fZ) goto L_0081434b;
L_00814329:; BB(0x00814329);
    /* 00814329: cmp ebp, 0x8f */ {  u32 a = r_ebp; u32 b = 0x8fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081432f: je 0x81434b */ if (fZ) goto L_0081434b;
L_00814331:; BB(0x00814331);
    /* 00814331: cmp ebp, 0x93 */ {  u32 a = r_ebp; u32 b = 0x93u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814337: je 0x81434b */ if (fZ) goto L_0081434b;
L_00814339:; BB(0x00814339);
    /* 00814339: cmp ebp, 0x94 */ {  u32 a = r_ebp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081433f: je 0x81434b */ if (fZ) goto L_0081434b;
L_00814341:; BB(0x00814341);
    /* 00814341: cmp ebp, 0xa1 */ {  u32 a = r_ebp; u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814347: je 0x81434b */ if (fZ) goto L_0081434b;
L_00814349:; BB(0x00814349);
    /* 00814349: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0081434b:; BB(0x0081434b);
    /* 0081434b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x814350u); f_00807ac0();
    /* 00814350: call 0x814498 */ r_esp -= 4; W32(r_esp, 0x814355u); f_00814498();
    /* 00814355: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814357: jne 0x81437f */ if (!fZ) goto L_0081437f;
L_00814359:; BB(0x00814359);
    /* 00814359: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0081435d: fcomp dword ptr [0x980af4] */ fx_compare(ST(0), R_F32((u32)(0x980af4u))); FPOP();
    /* 00814363: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00814365: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00814366: jb 0x81437f */ if (fC) goto L_0081437f;
L_00814368:; BB(0x00814368);
    /* 00814368: mov dword ptr [0xa11eec], 0xffffffff */ W32((u32)(0xa11eecu), 0xffffffffu);
    /* 00814372: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00814377: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081437a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081437b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081437c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081437d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081437e: ret  */ FN_RET(0x00814298); r_esp += 4; return;
L_0081437f:; BB(0x0081437f);
    /* 0081437f: and ebx, 0x7f00 */ {  u32 a = r_ebx; u32 b = 0x7f00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00814385: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00814388: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0081438a: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814390: je 0x814396 */ if (fZ) goto L_00814396;
L_00814392:; BB(0x00814392);
    /* 00814392: add ebx, dword ptr [esp + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00814396:; BB(0x00814396);
    /* 00814396: fild dword ptr [0xab59f8] */ FPUSH((long double)(i32)R32((u32)(0xab59f8u)));
    /* 0081439c: fld dword ptr [0x980af0] */ FPUSH(R_F32((u32)(0x980af0u)));
    /* 008143a2: fld dword ptr [0x980aec] */ FPUSH(R_F32((u32)(0x980aecu)));
    /* 008143a8: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 008143aa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008143ac: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 008143ae: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008143b0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008143b2: mov ecx, 0xffffff81 */ r_ecx = 0xffffff81u;
    /* 008143b7: jl 0x8143bb */ if ((fS!=fO)) goto L_008143bb;
L_008143b9:; BB(0x008143b9);
    /* 008143b9: mov ebx, edx */ r_ebx = r_edx;
L_008143bb:; BB(0x008143bb);
    /* 008143bb: cmp ebx, -0x7f */ {  u32 a = r_ebx; u32 b = 0xffffff81u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008143be: jg 0x8143c2 */ if ((!fZ&&fS==fO)) goto L_008143c2;
L_008143c0:; BB(0x008143c0);
    /* 008143c0: mov ebx, ecx */ r_ebx = r_ecx;
L_008143c2:; BB(0x008143c2);
    /* 008143c2: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 008143c6: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 008143ca: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 008143cc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008143ce: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008143d0: fadd dword ptr [0x980ae8] */ ST(0) = ST(0) + R_F32((u32)(0x980ae8u));
    /* 008143d6: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008143d8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 008143da: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008143dc: fmul dword ptr [0x980ae4] */ ST(0) = ST(0) * R_F32((u32)(0x980ae4u));
    /* 008143e2: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 008143e6: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 008143eb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008143f0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008143f4: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 008143f8: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 008143fc: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00814400: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00814404: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00814405: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00814406: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00814407: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00814408: call 0x828e4c */ r_esp -= 4; W32(r_esp, 0x81440du); f_00828e4c();
    /* 0081440d: mov dword ptr [0xa11eec], eax */ W32((u32)(0xa11eecu), r_eax);
    /* 00814412: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00814415: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00814416: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00814417: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00814418: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00814419: ret  */ FN_RET(0x00814298); r_esp += 4; return;
L_0081441a:; BB(0x0081441a);
    /* 0081441a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0081441f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00814422: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00814423: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00814424: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00814425: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00814426: ret  */ FN_RET(0x00814298); r_esp += 4; return;
L_00814427:; BB(0x00814427);
    /* 00814427: call 0x81443c */ r_esp -= 4; W32(r_esp, 0x81442cu); f_0081443c();
    /* 0081442c: mov ebp, eax */ r_ebp = r_eax;
    /* 0081442e: mov ebx, dword ptr [ebp*4 + 0xa13b20] */ r_ebx = R32((u32)(r_ebp*4+0xa13b20u));
    /* 00814435: jmp 0x8142c6 */ goto L_008142c6;
}

void f_0081443c(void) /* sub_81443C */
{
    FN_ENTER(0x0081443c);
    /* 0081443c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0081443d: mov esi, eax */ r_esi = r_eax;
    /* 0081443f: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x814444u); f_00807ac0();
    /* 00814444: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00814447: jl 0x814483 */ if ((fS!=fO)) goto L_00814483;
L_00814449:; BB(0x00814449);
    /* 00814449: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0081444c: jg 0x814483 */ if ((!fZ&&fS==fO)) goto L_00814483;
L_0081444e:; BB(0x0081444e);
    /* 0081444e: cmp esi, 0x559 */ {  u32 a = r_esi; u32 b = 0x559u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00814454: je 0x81448c */ if (fZ) goto L_0081448c;
L_00814456:; BB(0x00814456);
    /* 00814456: cmp esi, 0x55a */ {  u32 a = r_esi; u32 b = 0x55au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0081445c: je 0x81447c */ if (fZ) goto L_0081447c;
L_0081445e:; BB(0x0081445e);
    /* 0081445e: cmp esi, 0x55b */ {  u32 a = r_esi; u32 b = 0x55bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00814464: jne 0x81446d */ if (!fZ) goto L_0081446d;
L_00814466:; BB(0x00814466);
    /* 00814466: mov eax, 0x4b3 */ r_eax = 0x4b3u;
    /* 0081446b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081446c: ret  */ FN_RET(0x0081443c); r_esp += 4; return;
L_0081446d:; BB(0x0081446d);
    /* 0081446d: cmp esi, 0x55c */ {  u32 a = r_esi; u32 b = 0x55cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00814473: jne 0x814483 */ if (!fZ) goto L_00814483;
L_00814475:; BB(0x00814475);
    /* 00814475: mov eax, 0x4b4 */ r_eax = 0x4b4u;
    /* 0081447a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081447b: ret  */ FN_RET(0x0081443c); r_esp += 4; return;
L_0081447c:; BB(0x0081447c);
    /* 0081447c: mov eax, 0x4b2 */ r_eax = 0x4b2u;
    /* 00814481: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00814482: ret  */ FN_RET(0x0081443c); r_esp += 4; return;
L_00814483:; BB(0x00814483);
    /* 00814483: mov eax, dword ptr [esi*4 + 0xa1f840] */ r_eax = R32((u32)(r_esi*4+0xa1f840u));
    /* 0081448a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081448b: ret  */ FN_RET(0x0081443c); r_esp += 4; return;
L_0081448c:; BB(0x0081448c);
    /* 0081448c: mov eax, 0x4b1 */ r_eax = 0x4b1u;
    /* 00814491: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00814492: ret  */ FN_RET(0x0081443c); r_esp += 4; return;
}

void f_00814498(void) /* sub_814498 */
{
    FN_ENTER(0x00814498);
    /* 00814498: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0081449b: je 0x8144aa */ if (fZ) goto L_008144aa;
L_0081449d:; BB(0x0081449d);
    /* 0081449d: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008144a0: je 0x8144aa */ if (fZ) goto L_008144aa;
L_008144a2:; BB(0x008144a2);
    /* 008144a2: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008144a5: je 0x8144aa */ if (fZ) goto L_008144aa;
L_008144a7:; BB(0x008144a7);
    /* 008144a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008144a9: ret  */ FN_RET(0x00814498); r_esp += 4; return;
L_008144aa:; BB(0x008144aa);
    /* 008144aa: mov eax, 1 */ r_eax = 0x1u;
    /* 008144af: ret  */ FN_RET(0x00814498); r_esp += 4; return;
}

void f_008144b0(void) /* sub_8144B0 */
{
    FN_ENTER(0x008144b0);
    /* 008144b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008144b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008144b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008144b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008144b4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008144b7: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 008144bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008144bd: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 008144c1: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 008144c5: je 0x814642 */ if (fZ) goto L_00814642;
L_008144cb:; BB(0x008144cb);
    /* 008144cb: cmp eax, 0x700 */ {  u32 a = r_eax; u32 b = 0x700u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008144d0: jl 0x81464f */ if ((fS!=fO)) goto L_0081464f;
L_008144d6:; BB(0x008144d6);
    /* 008144d6: mov ebx, dword ptr [0xa13b20] */ r_ebx = R32((u32)(0xa13b20u));
    /* 008144dc: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_008144de:; BB(0x008144de);
    /* 008144de: fld dword ptr [0x980ae0] */ FPUSH(R_F32((u32)(0x980ae0u)));
    /* 008144e4: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 008144e8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008144ea: je 0x81456f */ if (fZ) goto L_0081456f;
L_008144f0:; BB(0x008144f0);
    /* 008144f0: call 0x82992c */ r_esp -= 4; W32(r_esp, 0x8144f5u); f_0082992c();
    /* 008144f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008144f6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008144f7: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x8144fcu); f_00836208();
    /* 008144fc: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00814500: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00814503: cmp ebp, 0xa0 */ {  u32 a = r_ebp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814509: je 0x81456f */ if (fZ) goto L_0081456f;
L_0081450b:; BB(0x0081450b);
    /* 0081450b: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0081450f: fcomp dword ptr [0x980adc] */ fx_compare(ST(0), R_F32((u32)(0x980adcu))); FPOP();
    /* 00814515: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00814517: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00814518: ja 0x81451e */ if ((!fC&&!fZ)) goto L_0081451e;
L_0081451a:; BB(0x0081451a);
    /* 0081451a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0081451c: jmp 0x81456f */ goto L_0081456f;
L_0081451e:; BB(0x0081451e);
    /* 0081451e: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00814522: fcomp dword ptr [0x980ad8] */ fx_compare(ST(0), R_F32((u32)(0x980ad8u))); FPOP();
    /* 00814528: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0081452a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0081452b: ja 0x81456f */ if ((!fC&&!fZ)) goto L_0081456f;
L_0081452d:; BB(0x0081452d);
    /* 0081452d: cmp ebp, 0x87 */ {  u32 a = r_ebp; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00814533: jl 0x81456f */ if ((fS!=fO)) goto L_0081456f;
L_00814535:; BB(0x00814535);
    /* 00814535: cmp ebp, 0xa7 */ {  u32 a = r_ebp; u32 b = 0xa7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081453b: jg 0x81456f */ if ((!fZ&&fS==fO)) goto L_0081456f;
L_0081453d:; BB(0x0081453d);
    /* 0081453d: cmp ebp, 0x88 */ {  u32 a = r_ebp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814543: je 0x81456f */ if (fZ) goto L_0081456f;
L_00814545:; BB(0x00814545);
    /* 00814545: cmp ebp, 0x8a */ {  u32 a = r_ebp; u32 b = 0x8au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081454b: je 0x81456f */ if (fZ) goto L_0081456f;
L_0081454d:; BB(0x0081454d);
    /* 0081454d: cmp ebp, 0x8f */ {  u32 a = r_ebp; u32 b = 0x8fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814553: je 0x81456f */ if (fZ) goto L_0081456f;
L_00814555:; BB(0x00814555);
    /* 00814555: cmp ebp, 0x93 */ {  u32 a = r_ebp; u32 b = 0x93u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081455b: je 0x81456f */ if (fZ) goto L_0081456f;
L_0081455d:; BB(0x0081455d);
    /* 0081455d: cmp ebp, 0x94 */ {  u32 a = r_ebp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814563: je 0x81456f */ if (fZ) goto L_0081456f;
L_00814565:; BB(0x00814565);
    /* 00814565: cmp ebp, 0xa1 */ {  u32 a = r_ebp; u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081456b: je 0x81456f */ if (fZ) goto L_0081456f;
L_0081456d:; BB(0x0081456d);
    /* 0081456d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0081456f:; BB(0x0081456f);
    /* 0081456f: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x814574u); f_00807ac0();
    /* 00814574: call 0x814498 */ r_esp -= 4; W32(r_esp, 0x814579u); f_00814498();
    /* 00814579: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081457b: jne 0x8145a3 */ if (!fZ) goto L_008145a3;
L_0081457d:; BB(0x0081457d);
    /* 0081457d: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00814581: fcomp dword ptr [0x980ad4] */ fx_compare(ST(0), R_F32((u32)(0x980ad4u))); FPOP();
    /* 00814587: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00814589: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0081458a: jb 0x8145a3 */ if (fC) goto L_008145a3;
L_0081458c:; BB(0x0081458c);
    /* 0081458c: mov dword ptr [0xa11eec], 0xffffffff */ W32((u32)(0xa11eecu), 0xffffffffu);
    /* 00814596: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0081459b: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081459e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081459f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008145a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008145a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008145a2: ret  */ FN_RET(0x008144b0); r_esp += 4; return;
L_008145a3:; BB(0x008145a3);
    /* 008145a3: and ebx, 0x7f00 */ {  u32 a = r_ebx; u32 b = 0x7f00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008145a9: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008145ac: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008145ae: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008145b4: je 0x8145ba */ if (fZ) goto L_008145ba;
L_008145b6:; BB(0x008145b6);
    /* 008145b6: add ebx, dword ptr [esp + 0x48] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_008145ba:; BB(0x008145ba);
    /* 008145ba: fild dword ptr [0xab59f8] */ FPUSH((long double)(i32)R32((u32)(0xab59f8u)));
    /* 008145c0: fld dword ptr [0x980ad0] */ FPUSH(R_F32((u32)(0x980ad0u)));
    /* 008145c6: fld dword ptr [0x980acc] */ FPUSH(R_F32((u32)(0x980accu)));
    /* 008145cc: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 008145ce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008145d0: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 008145d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008145d4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008145d6: mov ecx, 0xffffff81 */ r_ecx = 0xffffff81u;
    /* 008145db: jl 0x8145df */ if ((fS!=fO)) goto L_008145df;
L_008145dd:; BB(0x008145dd);
    /* 008145dd: mov ebx, edx */ r_ebx = r_edx;
L_008145df:; BB(0x008145df);
    /* 008145df: cmp ebx, -0x7f */ {  u32 a = r_ebx; u32 b = 0xffffff81u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008145e2: jg 0x8145e6 */ if ((!fZ&&fS==fO)) goto L_008145e6;
L_008145e4:; BB(0x008145e4);
    /* 008145e4: mov ebx, ecx */ r_ebx = r_ecx;
L_008145e6:; BB(0x008145e6);
    /* 008145e6: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 008145ea: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 008145ee: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 008145f0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008145f2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008145f4: fadd dword ptr [0x980ac8] */ ST(0) = ST(0) + R_F32((u32)(0x980ac8u));
    /* 008145fa: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008145fc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 008145fe: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00814600: fmul dword ptr [0x980ac4] */ ST(0) = ST(0) * R_F32((u32)(0x980ac4u));
    /* 00814606: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0081460a: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0081460f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00814614: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00814618: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0081461c: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00814620: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00814624: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00814628: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00814629: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0081462a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0081462b: push dword ptr [esp + 0x4c] */ { u32 v = R32((u32)(r_esp+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0081462f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00814630: call 0x8292dc */ r_esp -= 4; W32(r_esp, 0x814635u); f_008292dc();
    /* 00814635: mov dword ptr [0xa11eec], eax */ W32((u32)(0xa11eecu), r_eax);
    /* 0081463a: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081463d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081463e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081463f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00814640: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00814641: ret  */ FN_RET(0x008144b0); r_esp += 4; return;
L_00814642:; BB(0x00814642);
    /* 00814642: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00814647: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081464a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081464b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081464c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081464d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081464e: ret  */ FN_RET(0x008144b0); r_esp += 4; return;
L_0081464f:; BB(0x0081464f);
    /* 0081464f: call 0x81443c */ r_esp -= 4; W32(r_esp, 0x814654u); f_0081443c();
    /* 00814654: mov ebp, eax */ r_ebp = r_eax;
    /* 00814656: mov ebx, dword ptr [ebp*4 + 0xa13b20] */ r_ebx = R32((u32)(r_ebp*4+0xa13b20u));
    /* 0081465d: jmp 0x8144de */ goto L_008144de;
}

void f_00814664(void) /* sub_814664 */
{
    FN_ENTER(0x00814664);
    /* 00814664: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00814668: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081466a: jl 0x81467d */ if ((fS!=fO)) goto L_0081467d;
L_0081466c:; BB(0x0081466c);
    /* 0081466c: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00814670: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00814674: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00814675: call 0x829704 */ r_esp -= 4; W32(r_esp, 0x81467au); f_00829704();
    /* 0081467a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0081467d:; BB(0x0081467d);
    /* 0081467d: ret  */ FN_RET(0x00814664); r_esp += 4; return;
}

void f_00814680(void) /* sub_814680 */
{
    FN_ENTER(0x00814680);
    /* 00814680: mov eax, dword ptr [0xa11eec] */ r_eax = R32((u32)(0xa11eecu));
    /* 00814685: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00814687: jl 0x8146aa */ if ((fS!=fO)) goto L_008146aa;
L_00814689:; BB(0x00814689);
    /* 00814689: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x81468eu); f_00520e6c();
    /* 0081468e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00814690: je 0x8146aa */ if (fZ) goto L_008146aa;
L_00814692:; BB(0x00814692);
    /* 00814692: mov eax, dword ptr [0xa11eec] */ r_eax = R32((u32)(0xa11eecu));
    /* 00814697: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00814699: jl 0x8146aa */ if ((fS!=fO)) goto L_008146aa;
L_0081469b:; BB(0x0081469b);
    /* 0081469b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081469d: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008146a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008146a2: call 0x829704 */ r_esp -= 4; W32(r_esp, 0x8146a7u); f_00829704();
    /* 008146a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_008146aa:; BB(0x008146aa);
    /* 008146aa: ret  */ FN_RET(0x00814680); r_esp += 4; return;
}

void f_008146ac(void) /* sub_8146AC */
{
    FN_ENTER(0x008146ac);
    /* 008146ac: mov eax, 0xffffffdd */ r_eax = 0xffffffddu;
    /* 008146b1: mov dword ptr [0xa11ee0], eax */ W32((u32)(0xa11ee0u), r_eax);
    /* 008146b6: mov dword ptr [0xa11ee8], eax */ W32((u32)(0xa11ee8u), r_eax);
    /* 008146bb: call 0x8146f8 */ r_esp -= 4; W32(r_esp, 0x8146c0u); f_008146f8();
    /* 008146c0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008146c3: jne 0x8146e1 */ if (!fZ) goto L_008146e1;
L_008146c5:; BB(0x008146c5);
    /* 008146c5: mov eax, dword ptr [0xa11ee0] */ r_eax = R32((u32)(0xa11ee0u));
    /* 008146ca: mov edx, dword ptr [0xa11ee8] */ r_edx = R32((u32)(0xa11ee8u));
    /* 008146d0: add eax, -0x14 */ {  u32 a = r_eax; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008146d3: mov dword ptr [0xa11ee0], eax */ W32((u32)(0xa11ee0u), r_eax);
    /* 008146d8: add edx, -0x14 */ {  u32 a = r_edx; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008146db: mov dword ptr [0xa11ee8], edx */ W32((u32)(0xa11ee8u), r_edx);
L_008146e1:; BB(0x008146e1);
    /* 008146e1: mov dword ptr [0xab5a04], 0 */ W32((u32)(0xab5a04u), 0x0u);
    /* 008146eb: call 0x814718 */ r_esp -= 4; W32(r_esp, 0x8146f0u); f_00814718();
    /* 008146f0: call 0x8147ac */ r_esp -= 4; W32(r_esp, 0x8146f5u); f_008147ac();
    /* 008146f5: ret  */ FN_RET(0x008146ac); r_esp += 4; return;
}

void f_008146f8(void) /* sub_8146F8 */
{
    FN_ENTER(0x008146f8);
    /* 008146f8: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x8146fdu); f_007083d4();
    /* 008146fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008146ff: jne 0x814707 */ if (!fZ) goto L_00814707;
L_00814701:; BB(0x00814701);
    /* 00814701: mov eax, 1 */ r_eax = 0x1u;
    /* 00814706: ret  */ FN_RET(0x008146f8); r_esp += 4; return;
L_00814707:; BB(0x00814707);
    /* 00814707: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0081470a: jne 0x81470f */ if (!fZ) goto L_0081470f;
L_0081470c:; BB(0x0081470c);
    /* 0081470c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081470e: ret  */ FN_RET(0x008146f8); r_esp += 4; return;
L_0081470f:; BB(0x0081470f);
    /* 0081470f: mov eax, 2 */ r_eax = 0x2u;
    /* 00814714: ret  */ FN_RET(0x008146f8); r_esp += 4; return;
}

void f_00814718(void) /* sub_814718 */
{
    FN_ENTER(0x00814718);
    /* 00814718: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00814719: mov eax, dword ptr [0xa11ee4] */ r_eax = R32((u32)(0xa11ee4u));
    /* 0081471e: mov dword ptr [0xab5a10], 0 */ W32((u32)(0xab5a10u), 0x0u);
    /* 00814728: call 0x814734 */ r_esp -= 4; W32(r_esp, 0x81472du); f_00814734();
    /* 0081472d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081472e: ret  */ FN_RET(0x00814718); r_esp += 4; return;
}

void f_00814730(void) /* sub_814730 */
{
    FN_ENTER(0x00814730);
    /* 00814730: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00814734: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00814737: mov dword ptr [0xa11ee4], eax */ W32((u32)(0xa11ee4u), r_eax);
    /* 0081473c: cmp eax, 0xffffff10 */ {  u32 a = r_eax; u32 b = 0xffffff10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00814741: jge 0x814754 */ if ((fS==fO)) goto L_00814754;
L_00814743:; BB(0x00814743);
    /* 00814743: mov dword ptr [0xab5a0c], 0xfffffc19 */ W32((u32)(0xab5a0cu), 0xfffffc19u);
    /* 0081474d: mov edx, 0xfffffc19 */ r_edx = 0xfffffc19u;
    /* 00814752: jmp 0x814774 */ goto L_00814774;
L_00814754:; BB(0x00814754);
    /* 00814754: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00814757: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814759: mov eax, edx */ r_eax = r_edx;
    /* 0081475b: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0081475e: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814760: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00814762: add edx, dword ptr [0xa11ee0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa11ee0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814768: add edx, dword ptr [0xab5a10] */ {  u32 a = r_edx; u32 b = R32((u32)(0xab5a10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081476e: mov dword ptr [0xab5a0c], edx */ W32((u32)(0xab5a0cu), r_edx);
L_00814774:; BB(0x00814774);
    /* 00814774: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00814777: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0081477a: fmul dword ptr [0x980ac0] */ ST(0) = ST(0) * R_F32((u32)(0x980ac0u));
    /* 00814780: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00814784: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00814789: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0081478e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00814792: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00814796: fistp dword ptr [0xab5a08] */ W32((u32)(0xab5a08u), (u32)fx_int32(ST(0))); FPOP();
    /* 0081479c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 008147a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008147a1: call 0x814e94 */ r_esp -= 4; W32(r_esp, 0x8147a6u); f_00814e94();
    /* 008147a6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008147a9: ret  */ FN_RET(0x00814730); r_esp += 4; return;
}

void f_00814734(void) /* sub_814734 */
{
    FN_ENTER(0x00814734);
    /* 00814734: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00814737: mov dword ptr [0xa11ee4], eax */ W32((u32)(0xa11ee4u), r_eax);
    /* 0081473c: cmp eax, 0xffffff10 */ {  u32 a = r_eax; u32 b = 0xffffff10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00814741: jge 0x814754 */ if ((fS==fO)) goto L_00814754;
L_00814743:; BB(0x00814743);
    /* 00814743: mov dword ptr [0xab5a0c], 0xfffffc19 */ W32((u32)(0xab5a0cu), 0xfffffc19u);
    /* 0081474d: mov edx, 0xfffffc19 */ r_edx = 0xfffffc19u;
    /* 00814752: jmp 0x814774 */ goto L_00814774;
L_00814754:; BB(0x00814754);
    /* 00814754: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00814757: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814759: mov eax, edx */ r_eax = r_edx;
    /* 0081475b: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0081475e: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814760: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00814762: add edx, dword ptr [0xa11ee0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa11ee0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814768: add edx, dword ptr [0xab5a10] */ {  u32 a = r_edx; u32 b = R32((u32)(0xab5a10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081476e: mov dword ptr [0xab5a0c], edx */ W32((u32)(0xab5a0cu), r_edx);
L_00814774:; BB(0x00814774);
    /* 00814774: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00814777: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0081477a: fmul dword ptr [0x980ac0] */ ST(0) = ST(0) * R_F32((u32)(0x980ac0u));
    /* 00814780: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00814784: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00814789: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0081478e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00814792: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00814796: fistp dword ptr [0xab5a08] */ W32((u32)(0xab5a08u), (u32)fx_int32(ST(0))); FPOP();
    /* 0081479c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 008147a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008147a1: call 0x814e94 */ r_esp -= 4; W32(r_esp, 0x8147a6u); f_00814e94();
    /* 008147a6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008147a9: ret  */ FN_RET(0x00814734); r_esp += 4; return;
}

void f_0081476f(void)
{
    FN_ENTER(0x0081476f);
    /* 0081476f: adc eax, 0xab5a0c */ { u32 c = fC; u32 a = r_eax; u32 b = 0xab5a0cu; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 00814774: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00814777: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0081477a: fmul dword ptr [0x980ac0] */ ST(0) = ST(0) * R_F32((u32)(0x980ac0u));
    /* 00814780: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00814784: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00814789: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0081478e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00814792: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00814796: fistp dword ptr [0xab5a08] */ W32((u32)(0xab5a08u), (u32)fx_int32(ST(0))); FPOP();
    /* 0081479c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 008147a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008147a1: call 0x814e94 */ r_esp -= 4; W32(r_esp, 0x8147a6u); f_00814e94();
    /* 008147a6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008147a9: ret  */ FN_RET(0x0081476f); r_esp += 4; return;
}

void f_008147ac(void) /* sub_8147AC */
{
    FN_ENTER(0x008147ac);
    /* 008147ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008147ad: mov eax, dword ptr [0xab5a00] */ r_eax = R32((u32)(0xab5a00u));
    /* 008147b2: mov dword ptr [0xab59fc], 0 */ W32((u32)(0xab59fcu), 0x0u);
    /* 008147bc: call 0x8147c8 */ r_esp -= 4; W32(r_esp, 0x8147c1u); f_008147c8();
    /* 008147c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008147c2: ret  */ FN_RET(0x008147ac); r_esp += 4; return;
}

void f_008147c4(void) /* sub_8147C4 */
{
    FN_ENTER(0x008147c4);
    /* 008147c4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008147c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008147c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008147ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008147cb: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008147ce: mov ebx, eax */ r_ebx = r_eax;
    /* 008147d0: mov ebp, dword ptr [0xab5a04] */ r_ebp = R32((u32)(0xab5a04u));
    /* 008147d6: mov edi, dword ptr [0xab59fc] */ r_edi = R32((u32)(0xab59fcu));
    /* 008147dc: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 008147df: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008147e1: mov dword ptr [0xab5a00], ebx */ W32((u32)(0xab5a00u), r_ebx);
    /* 008147e7: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 008147ea: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 008147ed: fmul dword ptr [0x980abc] */ ST(0) = ST(0) * R_F32((u32)(0x980abcu));
    /* 008147f3: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008147f5: lea ecx, [ebx + edx*8] */ r_ecx = (u32)(r_ebx+r_edx*8);
    /* 008147f8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008147fa: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008147fc: mov eax, 0xd20d20d3 */ r_eax = 0xd20d20d3u;
    /* 00814801: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00814803: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00814807: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0081480c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00814811: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00814815: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00814819: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0081481d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00814821: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00814825: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814827: mov dword ptr [0xab59f0], eax */ W32((u32)(0xab59f0u), r_eax);
    /* 0081482c: sar edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0081482f: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00814832: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00814834: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814836: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814838: mov dword ptr [0xab59f8], edx */ W32((u32)(0xab59f8u), r_edx);
    /* 0081483e: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00814840: mov dword ptr [0xab59f4], ebp */ W32((u32)(0xab59f4u), r_ebp);
    /* 00814846: cmp eax, 0xffffff15 */ {  u32 a = r_eax; u32 b = 0xffffff15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081484b: jge 0x814859 */ if ((fS==fO)) goto L_00814859;
L_0081484d:; BB(0x0081484d);
    /* 0081484d: mov dword ptr [0xab59ec], 0xfffffc19 */ W32((u32)(0xab59ecu), 0xfffffc19u);
    /* 00814857: jmp 0x814875 */ goto L_00814875;
L_00814859:; BB(0x00814859);
    /* 00814859: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0081485c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081485e: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814860: mov eax, edx */ r_eax = r_edx;
    /* 00814862: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00814865: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814867: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00814869: add edx, dword ptr [0xa11ee8] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa11ee8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081486f: mov dword ptr [0xab59ec], edx */ W32((u32)(0xab59ecu), r_edx);
L_00814875:; BB(0x00814875);
    /* 00814875: push dword ptr [0xab59ec] */ { u32 v = R32((u32)(0xab59ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0081487b: call 0x814ec8 */ r_esp -= 4; W32(r_esp, 0x814880u); f_00814ec8();
    /* 00814880: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00814883: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00814884: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00814885: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00814886: ret  */ FN_RET(0x008147c4); r_esp += 4; return;
}

void f_008147c8(void) /* sub_8147C8 */
{
    FN_ENTER(0x008147c8);
    /* 008147c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008147c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008147ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008147cb: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008147ce: mov ebx, eax */ r_ebx = r_eax;
    /* 008147d0: mov ebp, dword ptr [0xab5a04] */ r_ebp = R32((u32)(0xab5a04u));
    /* 008147d6: mov edi, dword ptr [0xab59fc] */ r_edi = R32((u32)(0xab59fcu));
    /* 008147dc: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 008147df: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008147e1: mov dword ptr [0xab5a00], ebx */ W32((u32)(0xab5a00u), r_ebx);
    /* 008147e7: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 008147ea: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 008147ed: fmul dword ptr [0x980abc] */ ST(0) = ST(0) * R_F32((u32)(0x980abcu));
    /* 008147f3: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008147f5: lea ecx, [ebx + edx*8] */ r_ecx = (u32)(r_ebx+r_edx*8);
    /* 008147f8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008147fa: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008147fc: mov eax, 0xd20d20d3 */ r_eax = 0xd20d20d3u;
    /* 00814801: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00814803: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00814807: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0081480c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00814811: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00814815: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00814819: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0081481d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00814821: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00814825: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814827: mov dword ptr [0xab59f0], eax */ W32((u32)(0xab59f0u), r_eax);
    /* 0081482c: sar edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0081482f: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00814832: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00814834: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814836: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814838: mov dword ptr [0xab59f8], edx */ W32((u32)(0xab59f8u), r_edx);
    /* 0081483e: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00814840: mov dword ptr [0xab59f4], ebp */ W32((u32)(0xab59f4u), r_ebp);
    /* 00814846: cmp eax, 0xffffff15 */ {  u32 a = r_eax; u32 b = 0xffffff15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081484b: jge 0x814859 */ if ((fS==fO)) goto L_00814859;
L_0081484d:; BB(0x0081484d);
    /* 0081484d: mov dword ptr [0xab59ec], 0xfffffc19 */ W32((u32)(0xab59ecu), 0xfffffc19u);
    /* 00814857: jmp 0x814875 */ goto L_00814875;
L_00814859:; BB(0x00814859);
    /* 00814859: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0081485c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081485e: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814860: mov eax, edx */ r_eax = r_edx;
    /* 00814862: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00814865: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814867: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00814869: add edx, dword ptr [0xa11ee8] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa11ee8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081486f: mov dword ptr [0xab59ec], edx */ W32((u32)(0xab59ecu), r_edx);
L_00814875:; BB(0x00814875);
    /* 00814875: push dword ptr [0xab59ec] */ { u32 v = R32((u32)(0xab59ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0081487b: call 0x814ec8 */ r_esp -= 4; W32(r_esp, 0x814880u); f_00814ec8();
    /* 00814880: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00814883: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00814884: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00814885: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00814886: ret  */ FN_RET(0x008147c8); r_esp += 4; return;
}

void f_00814888(void) /* sub_814888 */
{
    FN_ENTER(0x00814888);
    /* 00814888: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00814889: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0081488d: mov eax, dword ptr [0xa11ee4] */ r_eax = R32((u32)(0xa11ee4u));
    /* 00814892: mov dword ptr [0xab5a10], edx */ W32((u32)(0xab5a10u), r_edx);
    /* 00814898: call 0x814734 */ r_esp -= 4; W32(r_esp, 0x81489du); f_00814734();
    /* 0081489d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081489e: ret  */ FN_RET(0x00814888); r_esp += 4; return;
}

void f_008148a0(void) /* sub_8148A0 */
{
    FN_ENTER(0x008148a0);
    /* 008148a0: call 0x829934 */ r_esp -= 4; W32(r_esp, 0x8148a5u); f_00829934();
    /* 008148a5: ret  */ FN_RET(0x008148a0); r_esp += 4; return;
}

void f_008148a8(void) /* sub_8148A8 */
{
    FN_ENTER(0x008148a8);
    /* 008148a8: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008148ac: call 0x82994c */ r_esp -= 4; W32(r_esp, 0x8148b1u); f_0082994c();
    /* 008148b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008148b2: ret  */ FN_RET(0x008148a8); r_esp += 4; return;
}

void f_008148b4(void) /* sub_8148B4 */
{
    FN_ENTER(0x008148b4);
    /* 008148b4: mov dword ptr [0xab59d8], 0x3f800000 */ W32((u32)(0xab59d8u), 0x3f800000u);
    /* 008148be: mov dword ptr [0xab59dc], 0x41000000 */ W32((u32)(0xab59dcu), 0x41000000u);
    /* 008148c8: mov dword ptr [0xab59e0], 0x3fc00000 */ W32((u32)(0xab59e0u), 0x3fc00000u);
    /* 008148d2: ret  */ FN_RET(0x008148b4); r_esp += 4; return;
}

void f_008148d4(void) /* sub_8148D4 */
{
    FN_ENTER(0x008148d4);
    /* 008148d4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008148d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008148da: jl 0x8148e3 */ if ((fS!=fO)) goto L_008148e3;
L_008148dc:; BB(0x008148dc);
    /* 008148dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008148dd: call 0x829af8 */ r_esp -= 4; W32(r_esp, 0x8148e2u); f_00829af8();
    /* 008148e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008148e3:; BB(0x008148e3);
    /* 008148e3: ret  */ FN_RET(0x008148d4); r_esp += 4; return;
}

void f_008148e4(void) /* sub_8148E4 */
{
    FN_ENTER(0x008148e4);
    /* 008148e4: call 0x829ad0 */ r_esp -= 4; W32(r_esp, 0x8148e9u); f_00829ad0();
    /* 008148e9: ret  */ FN_RET(0x008148e4); r_esp += 4; return;
}

void f_00814948(void) /* sub_814948 */
{
    FN_ENTER(0x00814948);
    /* 00814948: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00814949: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x81494eu); f_00483748();
    /* 0081494e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00814950: je 0x814985 */ if (fZ) goto L_00814985;
L_00814952:; BB(0x00814952);
    /* 00814952: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00814955: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00814957: mov ebx, eax */ r_ebx = r_eax;
L_00814959:; BB(0x00814959);
    /* 00814959: push dword ptr [ebx + 0xac9ca0] */ { u32 v = R32((u32)(r_ebx+0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0081495f: call 0x86def8 */ r_esp -= 4; W32(r_esp, 0x814964u); f_0086def8();
    /* 00814964: mov dword ptr [ebx + 0xac9ca0], 0 */ W32((u32)(r_ebx+0xac9ca0u), 0x0u);
    /* 0081496e: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00814971: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00814974: jl 0x814959 */ if ((fS!=fO)) goto L_00814959;
L_00814976:; BB(0x00814976);
    /* 00814976: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00814979: push dword ptr [0xac9d10] */ { u32 v = R32((u32)(0xac9d10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0081497f: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x814984u); f_0082e960();
    /* 00814984: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00814985:; BB(0x00814985);
    /* 00814985: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00814986: ret  */ FN_RET(0x00814948); r_esp += 4; return;
}

void f_00814988(void) /* sub_814988 */
{
    FN_ENTER(0x00814988);
    /* 00814988: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0081498b: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x814990u); f_00483748();
    /* 00814990: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814992: je 0x814aa8 */ if (fZ) goto L_00814aa8;
L_00814998:; BB(0x00814998);
    /* 00814998: mov eax, dword ptr [0xac9cb0] */ r_eax = R32((u32)(0xac9cb0u));
    /* 0081499d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081499f: jne 0x814aa8 */ if (!fZ) goto L_00814aa8;
L_008149a5:; BB(0x008149a5);
    /* 008149a5: mov eax, dword ptr [0xab59e8] */ r_eax = R32((u32)(0xab59e8u));
    /* 008149aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008149ac: je 0x8149b9 */ if (fZ) goto L_008149b9;
L_008149ae:; BB(0x008149ae);
    /* 008149ae: push 0xfffffc19 */ { u32 v = 0xfffffc19u; r_esp -= 4; W32(r_esp, v); }
    /* 008149b3: call 0x814888 */ r_esp -= 4; W32(r_esp, 0x8149b8u); f_00814888();
    /* 008149b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008149b9:; BB(0x008149b9);
    /* 008149b9: mov eax, dword ptr [0xac9cb4] */ r_eax = R32((u32)(0xac9cb4u));
    /* 008149be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008149c0: jle 0x814a5e */ if ((fZ||fS!=fO)) goto L_00814a5e;
L_008149c6:; BB(0x008149c6);
    /* 008149c6: mov eax, dword ptr [0xac9d1c] */ r_eax = R32((u32)(0xac9d1cu));
    /* 008149cb: fld dword ptr [0xac9cc0] */ FPUSH(R_F32((u32)(0xac9cc0u)));
    /* 008149d1: fld dword ptr [eax*4 + 0xac9cb8] */ FPUSH(R_F32((u32)(r_eax*4+0xac9cb8u)));
    /* 008149d8: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008149da: fstp dword ptr [eax*4 + 0xac9cb8] */ W_F32((u32)(r_eax*4+0xac9cb8u), ST(0)); FPOP();
    /* 008149e1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008149e3: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 008149e7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008149e9: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008149eb: fld dword ptr [eax + 0xac9cbc] */ FPUSH(R_F32((u32)(r_eax+0xac9cbcu)));
    /* 008149f1: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 008149f3: fstp dword ptr [eax + 0xac9cbc] */ W_F32((u32)(r_eax+0xac9cbcu), ST(0)); FPOP();
    /* 008149f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008149fb: mov ebx, eax */ r_ebx = r_eax;
L_008149fd:; BB(0x008149fd);
    /* 008149fd: fld dword ptr [ebx + 0xac9cb8] */ FPUSH(R_F32((u32)(r_ebx+0xac9cb8u)));
    /* 00814a03: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00814a06: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00814a0a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00814a0f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00814a13: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00814a17: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00814a1b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00814a1e: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00814a22: add edx, dword ptr [0xab5a0c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xab5a0cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814a28: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00814a2b: cmp edx, 0xfffffc19 */ {  u32 a = r_edx; u32 b = 0xfffffc19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00814a31: jg 0x814a38 */ if ((!fZ&&fS==fO)) goto L_00814a38;
L_00814a33:; BB(0x00814a33);
    /* 00814a33: mov edx, 0xfffffc19 */ r_edx = 0xfffffc19u;
L_00814a38:; BB(0x00814a38);
    /* 00814a38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00814a39: push dword ptr [ebx + 0xac9c9c] */ { u32 v = R32((u32)(r_ebx+0xac9c9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00814a3f: call 0x86e078 */ r_esp -= 4; W32(r_esp, 0x814a44u); f_0086e078();
    /* 00814a44: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00814a47: jl 0x8149fd */ if ((fS!=fO)) goto L_008149fd;
L_00814a49:; BB(0x00814a49);
    /* 00814a49: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00814a4d: mov eax, dword ptr [0xac9cb4] */ r_eax = R32((u32)(0xac9cb4u));
    /* 00814a52: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00814a55: mov dword ptr [0xac9cb4], eax */ W32((u32)(0xac9cb4u), r_eax);
    /* 00814a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00814a5c: jle 0x814ab9 */ if ((fZ||fS!=fO)) goto L_00814ab9;
L_00814a5e:; BB(0x00814a5e);
    /* 00814a5e: mov eax, dword ptr [0xac9cc4] */ r_eax = R32((u32)(0xac9cc4u));
    /* 00814a63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00814a65: jle 0x814aa8 */ if ((fZ||fS!=fO)) goto L_00814aa8;
L_00814a67:; BB(0x00814a67);
    /* 00814a67: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00814a6a: mov dword ptr [0xac9cc4], eax */ W32((u32)(0xac9cc4u), r_eax);
    /* 00814a6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00814a71: jle 0x814aac */ if ((fZ||fS!=fO)) goto L_00814aac;
L_00814a73:; BB(0x00814a73);
    /* 00814a73: push dword ptr [0xac9cac] */ { u32 v = R32((u32)(0xac9cacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00814a79: call 0x86dfd0 */ r_esp -= 4; W32(r_esp, 0x814a7eu); f_0086dfd0();
    /* 00814a7e: mov edx, dword ptr [0xa1575c] */ r_edx = R32((u32)(0xa1575cu));
    /* 00814a84: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00814a86: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00814a88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00814a8a: mov edx, 0xfffffc19 */ r_edx = 0xfffffc19u;
    /* 00814a8f: jl 0x814a93 */ if ((fS!=fO)) goto L_00814a93;
L_00814a91:; BB(0x00814a91);
    /* 00814a91: mov eax, ecx */ r_eax = r_ecx;
L_00814a93:; BB(0x00814a93);
    /* 00814a93: cmp eax, 0xfffffc19 */ {  u32 a = r_eax; u32 b = 0xfffffc19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00814a98: jg 0x814a9c */ if ((!fZ&&fS==fO)) goto L_00814a9c;
L_00814a9a:; BB(0x00814a9a);
    /* 00814a9a: mov eax, edx */ r_eax = r_edx;
L_00814a9c:; BB(0x00814a9c);
    /* 00814a9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00814a9d: push dword ptr [0xac9cac] */ { u32 v = R32((u32)(0xac9cacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00814aa3: call 0x86e078 */ r_esp -= 4; W32(r_esp, 0x814aa8u); f_0086e078();
L_00814aa8:; BB(0x00814aa8);
    /* 00814aa8: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00814aab: ret  */ FN_RET(0x00814988); r_esp += 4; return;
L_00814aac:; BB(0x00814aac);
    /* 00814aac: push dword ptr [0xac9cac] */ { u32 v = R32((u32)(0xac9cacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00814ab2: call 0x86e130 */ r_esp -= 4; W32(r_esp, 0x814ab7u); f_0086e130();
    /* 00814ab7: jmp 0x814aa8 */ goto L_00814aa8;
L_00814ab9:; BB(0x00814ab9);
    /* 00814ab9: mov eax, dword ptr [0xac9d1c] */ r_eax = R32((u32)(0xac9d1cu));
    /* 00814abe: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00814ac0: push dword ptr [eax*4 + 0xac9ca4] */ { u32 v = R32((u32)(r_eax*4+0xac9ca4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814ac7: call 0x86e130 */ r_esp -= 4; W32(r_esp, 0x814accu); f_0086e130();
    /* 00814acc: mov eax, dword ptr [0xac9d1c] */ r_eax = R32((u32)(0xac9d1cu));
    /* 00814ad1: push dword ptr [eax*4 + 0xac9ca0] */ { u32 v = R32((u32)(r_eax*4+0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814ad8: call 0x86df78 */ r_esp -= 4; W32(r_esp, 0x814addu); f_0086df78();
    /* 00814add: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814ae0: je 0x814aeb */ if (fZ) goto L_00814aeb;
L_00814ae2:; BB(0x00814ae2);
    /* 00814ae2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814ae5: jne 0x814a5e */ if (!fZ) goto L_00814a5e;
L_00814aeb:; BB(0x00814aeb);
    /* 00814aeb: mov dword ptr [0xac9d20], 0 */ W32((u32)(0xac9d20u), 0x0u);
    /* 00814af5: jmp 0x814a5e */ goto L_00814a5e;
}

void f_00814a48(void)
{
    FN_ENTER(0x00814a48);
    /* 00814a48: mov ah, 0x8b */ r_eax = (r_eax & 0xffff00ffu) | (((0x8bu) & 0xffu) << 8);
    /* 00814a4a: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 00814a4b: and al, 0x18 */ {  u32 a = (u8)r_eax; u32 b = 0x18u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00814a4d: mov eax, dword ptr [0xac9cb4] */ r_eax = R32((u32)(0xac9cb4u));
    /* 00814a52: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00814a55: mov dword ptr [0xac9cb4], eax */ W32((u32)(0xac9cb4u), r_eax);
    /* 00814a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00814a5c: jle 0x814ab9 */ if ((fZ||fS!=fO)) goto L_00814ab9;
L_00814a5e:; BB(0x00814a5e);
    /* 00814a5e: mov eax, dword ptr [0xac9cc4] */ r_eax = R32((u32)(0xac9cc4u));
    /* 00814a63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00814a65: jle 0x814aa8 */ if ((fZ||fS!=fO)) goto L_00814aa8;
L_00814a67:; BB(0x00814a67);
    /* 00814a67: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00814a6a: mov dword ptr [0xac9cc4], eax */ W32((u32)(0xac9cc4u), r_eax);
    /* 00814a6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00814a71: jle 0x814aac */ if ((fZ||fS!=fO)) goto L_00814aac;
L_00814a73:; BB(0x00814a73);
    /* 00814a73: push dword ptr [0xac9cac] */ { u32 v = R32((u32)(0xac9cacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00814a79: call 0x86dfd0 */ r_esp -= 4; W32(r_esp, 0x814a7eu); f_0086dfd0();
    /* 00814a7e: mov edx, dword ptr [0xa1575c] */ r_edx = R32((u32)(0xa1575cu));
    /* 00814a84: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00814a86: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00814a88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00814a8a: mov edx, 0xfffffc19 */ r_edx = 0xfffffc19u;
    /* 00814a8f: jl 0x814a93 */ if ((fS!=fO)) goto L_00814a93;
L_00814a91:; BB(0x00814a91);
    /* 00814a91: mov eax, ecx */ r_eax = r_ecx;
L_00814a93:; BB(0x00814a93);
    /* 00814a93: cmp eax, 0xfffffc19 */ {  u32 a = r_eax; u32 b = 0xfffffc19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00814a98: jg 0x814a9c */ if ((!fZ&&fS==fO)) goto L_00814a9c;
L_00814a9a:; BB(0x00814a9a);
    /* 00814a9a: mov eax, edx */ r_eax = r_edx;
L_00814a9c:; BB(0x00814a9c);
    /* 00814a9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00814a9d: push dword ptr [0xac9cac] */ { u32 v = R32((u32)(0xac9cacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00814aa3: call 0x86e078 */ r_esp -= 4; W32(r_esp, 0x814aa8u); f_0086e078();
L_00814aa8:; BB(0x00814aa8);
    /* 00814aa8: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00814aab: ret  */ FN_RET(0x00814a48); r_esp += 4; return;
L_00814aac:; BB(0x00814aac);
    /* 00814aac: push dword ptr [0xac9cac] */ { u32 v = R32((u32)(0xac9cacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00814ab2: call 0x86e130 */ r_esp -= 4; W32(r_esp, 0x814ab7u); f_0086e130();
    /* 00814ab7: jmp 0x814aa8 */ goto L_00814aa8;
L_00814ab9:; BB(0x00814ab9);
    /* 00814ab9: mov eax, dword ptr [0xac9d1c] */ r_eax = R32((u32)(0xac9d1cu));
    /* 00814abe: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00814ac0: push dword ptr [eax*4 + 0xac9ca4] */ { u32 v = R32((u32)(r_eax*4+0xac9ca4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814ac7: call 0x86e130 */ r_esp -= 4; W32(r_esp, 0x814accu); f_0086e130();
    /* 00814acc: mov eax, dword ptr [0xac9d1c] */ r_eax = R32((u32)(0xac9d1cu));
    /* 00814ad1: push dword ptr [eax*4 + 0xac9ca0] */ { u32 v = R32((u32)(r_eax*4+0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814ad8: call 0x86df78 */ r_esp -= 4; W32(r_esp, 0x814addu); f_0086df78();
    /* 00814add: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814ae0: je 0x814aeb */ if (fZ) goto L_00814aeb;
L_00814ae2:; BB(0x00814ae2);
    /* 00814ae2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814ae5: jne 0x814a5e */ if (!fZ) goto L_00814a5e;
L_00814aeb:; BB(0x00814aeb);
    /* 00814aeb: mov dword ptr [0xac9d20], 0 */ W32((u32)(0xac9d20u), 0x0u);
    /* 00814af5: jmp 0x814a5e */ goto L_00814a5e;
}

void f_00814afc(void) /* sub_814AFC */
{
    FN_ENTER(0x00814afc);
    /* 00814afc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00814afd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00814afe: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00814b02: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x814b07u); f_00483748();
    /* 00814b07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00814b09: jne 0x814b0e */ if (!fZ) goto L_00814b0e;
L_00814b0b:; BB(0x00814b0b);
    /* 00814b0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00814b0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00814b0d: ret  */ FN_RET(0x00814afc); r_esp += 4; return;
L_00814b0e:; BB(0x00814b0e);
    /* 00814b0e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00814b0f: call 0x77bcdc */ r_esp -= 4; W32(r_esp, 0x814b14u); f_0077bcdc();
    /* 00814b14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00814b15: call 0x815344 */ r_esp -= 4; W32(r_esp, 0x814b1au); f_00815344();
    /* 00814b1a: mov eax, dword ptr [0xac9d20] */ r_eax = R32((u32)(0xac9d20u));
    /* 00814b1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814b21: je 0x814b81 */ if (fZ) goto L_00814b81;
L_00814b23:; BB(0x00814b23);
    /* 00814b23: mov eax, dword ptr [0xac9d24] */ r_eax = R32((u32)(0xac9d24u));
    /* 00814b28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814b2a: jne 0x814bf5 */ if (!fZ) goto L_00814bf5;
L_00814b30:; BB(0x00814b30);
    /* 00814b30: mov edx, dword ptr [0xac9d1c] */ r_edx = R32((u32)(0xac9d1cu));
    /* 00814b36: mov eax, dword ptr [0x989390] */ r_eax = R32((u32)(0x989390u));
    /* 00814b3b: fld dword ptr [0xa15758] */ FPUSH(R_F32((u32)(0xa15758u)));
    /* 00814b41: fld dword ptr [0x989394] */ FPUSH(R_F32((u32)(0x989394u)));
    /* 00814b47: fld dword ptr [0xa15758] */ FPUSH(R_F32((u32)(0xa15758u)));
    /* 00814b4d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00814b4f: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 00814b51: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00814b53: fstp dword ptr [0xac9cc0] */ W_F32((u32)(0xac9cc0u), ST(0)); FPOP();
    /* 00814b59: fchs  */ ST(0) = -ST(0);
    /* 00814b5b: mov dword ptr [0xac9cb4], eax */ W32((u32)(0xac9cb4u), r_eax);
    /* 00814b60: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00814b62: fstp dword ptr [edx*4 + 0xac9cbc] */ W_F32((u32)(r_edx*4+0xac9cbcu), ST(0)); FPOP();
    /* 00814b69: lea ecx, [edx + 1] */ r_ecx = (u32)(r_edx+0x1u);
    /* 00814b6c: mov dword ptr [0xac9d1c], ecx */ W32((u32)(0xac9d1cu), r_ecx);
    /* 00814b72: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00814b74: mov dword ptr [ecx*4 + 0xac9cbc], 0 */ W32((u32)(r_ecx*4+0xac9cbcu), 0x0u);
    /* 00814b7f: jmp 0x814b8b */ goto L_00814b8b;
L_00814b81:; BB(0x00814b81);
    /* 00814b81: mov dword ptr [0xac9d1c], 0 */ W32((u32)(0xac9d1cu), 0x0u);
L_00814b8b:; BB(0x00814b8b);
    /* 00814b8b: mov eax, edi */ r_eax = r_edi;
    /* 00814b8d: call 0x814c00 */ r_esp -= 4; W32(r_esp, 0x814b92u); f_00814c00();
    /* 00814b92: mov edx, dword ptr [0xac9d1c] */ r_edx = R32((u32)(0xac9d1cu));
    /* 00814b98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00814b99: push dword ptr [edx*4 + 0xac9ca0] */ { u32 v = R32((u32)(r_edx*4+0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814ba0: call 0x86df38 */ r_esp -= 4; W32(r_esp, 0x814ba5u); f_0086df38();
    /* 00814ba5: mov edx, dword ptr [0xac9d1c] */ r_edx = R32((u32)(0xac9d1cu));
    /* 00814bab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00814bad: push dword ptr [edx*4 + 0xac9ca0] */ { u32 v = R32((u32)(r_edx*4+0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814bb4: call 0x86e09c */ r_esp -= 4; W32(r_esp, 0x814bb9u); f_0086e09c();
    /* 00814bb9: call 0x814718 */ r_esp -= 4; W32(r_esp, 0x814bbeu); f_00814718();
    /* 00814bbe: mov edx, dword ptr [0xac9d1c] */ r_edx = R32((u32)(0xac9d1cu));
    /* 00814bc4: mov dword ptr [0xac9d24], 0 */ W32((u32)(0xac9d24u), 0x0u);
    /* 00814bce: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814bd0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814bd2: mov dword ptr [0xac9d20], 1 */ W32((u32)(0xac9d20u), 0x1u);
    /* 00814bdc: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00814bde: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814be0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00814be1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814be3: lea ecx, [edx + edx + 0xab5b60] */ r_ecx = (u32)(r_edx+r_edx+0xab5b60u);
    /* 00814bea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00814beb: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x814bf0u); f_00858900();
    /* 00814bf0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00814bf3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00814bf4: ret  */ FN_RET(0x00814afc); r_esp += 4; return;
L_00814bf5:; BB(0x00814bf5);
    /* 00814bf5: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x814bfau); f_00815434();
    /* 00814bfa: jmp 0x814b81 */ goto L_00814b81;
}

void f_00814c00(void) /* sub_814C00 */
{
    FN_ENTER(0x00814c00);
    /* 00814c00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00814c01: mov edi, eax */ r_edi = r_eax;
    /* 00814c03: call 0x82d3b0 */ r_esp -= 4; W32(r_esp, 0x814c08u); f_0082d3b0();
    /* 00814c08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00814c09: push 0xa15760 */ { u32 v = 0xa15760u; r_esp -= 4; W32(r_esp, v); }
    /* 00814c0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00814c0f: push 0x9893cc */ { u32 v = 0x9893ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00814c14: push 0xab5a60 */ { u32 v = 0xab5a60u; r_esp -= 4; W32(r_esp, v); }
    /* 00814c19: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x814c1eu); f_00858bf5();
    /* 00814c1e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00814c21: mov edi, 0xab5a60 */ r_edi = 0xab5a60u;
    /* 00814c26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00814c28: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 00814c2a: mov ecx, edi */ r_ecx = r_edi;
    /* 00814c2c: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00814c2e: je 0x814c3c */ if (fZ) goto L_00814c3c;
L_00814c30:; BB(0x00814c30);
    /* 00814c30: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00814c33: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00814c36: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00814c38: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00814c3a: jne 0x814c30 */ if (!fZ) goto L_00814c30;
L_00814c3c:; BB(0x00814c3c);
    /* 00814c3c: mov byte ptr [eax + 0xab5a5d], 0x6f */ W8((u32)(r_eax+0xab5a5du), 0x6fu);
    /* 00814c43: mov edx, 0x67 */ r_edx = 0x67u;
    /* 00814c48: mov byte ptr [eax + 0xab5a5e], dl */ W8((u32)(r_eax+0xab5a5eu), (u8)r_edx);
    /* 00814c4e: mov byte ptr [eax + 0xab5a5f], dl */ W8((u32)(r_eax+0xab5a5fu), (u8)r_edx);
    /* 00814c54: mov eax, 0xab5a60 */ r_eax = 0xab5a60u;
    /* 00814c59: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00814c5a: ret  */ FN_RET(0x00814c00); r_esp += 4; return;
}

void f_00814c5c(void) /* sub_814C5C */
{
    FN_ENTER(0x00814c5c);
    /* 00814c5c: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x814c61u); f_00483748();
    /* 00814c61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00814c63: je 0x814c78 */ if (fZ) goto L_00814c78;
L_00814c65:; BB(0x00814c65);
    /* 00814c65: mov eax, dword ptr [0xac9cf8] */ r_eax = R32((u32)(0xac9cf8u));
    /* 00814c6a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00814c6d: je 0x814c78 */ if (fZ) goto L_00814c78;
L_00814c6f:; BB(0x00814c6f);
    /* 00814c6f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00814c73: mov dword ptr [0xac9cc8], eax */ W32((u32)(0xac9cc8u), r_eax);
L_00814c78:; BB(0x00814c78);
    /* 00814c78: ret  */ FN_RET(0x00814c5c); r_esp += 4; return;
}

void f_00814c7c(void) /* sub_814C7C */
{
    FN_ENTER(0x00814c7c);
    /* 00814c7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00814c7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00814c7e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00814c7f: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00814c82: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00814c86: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 00814c8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00814c90: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00814c94: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00814c98: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00814c9c: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x814ca1u); f_00483748();
    /* 00814ca1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814ca3: jne 0x814cac */ if (!fZ) goto L_00814cac;
L_00814ca5:; BB(0x00814ca5);
    /* 00814ca5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00814ca8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00814ca9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00814caa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00814cab: ret  */ FN_RET(0x00814c7c); r_esp += 4; return;
L_00814cac:; BB(0x00814cac);
    /* 00814cac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00814cad: call 0x77be98 */ r_esp -= 4; W32(r_esp, 0x814cb2u); f_0077be98();
    /* 00814cb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00814cb3: call 0x815344 */ r_esp -= 4; W32(r_esp, 0x814cb8u); f_00815344();
    /* 00814cb8: mov eax, dword ptr [ebx*4 + 0xa16088] */ r_eax = R32((u32)(r_ebx*4+0xa16088u));
    /* 00814cbf: mov dword ptr [0xac9cf0], 0 */ W32((u32)(0xac9cf0u), 0x0u);
    /* 00814cc9: mov dword ptr [0xac9cf8], ebx */ W32((u32)(0xac9cf8u), r_ebx);
    /* 00814ccf: mov dword ptr [0xac9cf4], eax */ W32((u32)(0xac9cf4u), r_eax);
    /* 00814cd4: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x814cd9u); f_00815434();
    /* 00814cd9: mov eax, 1 */ r_eax = 0x1u;
    /* 00814cde: mov dword ptr [0xac9d24], eax */ W32((u32)(0xac9d24u), r_eax);
    /* 00814ce3: mov dword ptr [0xac9d20], eax */ W32((u32)(0xac9d20u), r_eax);
    /* 00814ce8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00814cea: mov eax, dword ptr [0xac9cf4] */ r_eax = R32((u32)(0xac9cf4u));
    /* 00814cef: mov dword ptr [0xac9d1c], edx */ W32((u32)(0xac9d1cu), r_edx);
    /* 00814cf5: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00814cf8: movsx ebx, word ptr [ecx] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 00814cfb: mov dword ptr [0xac9ccc], edx */ W32((u32)(0xac9cccu), r_edx);
    /* 00814d01: mov dword ptr [0xac9cc8], edx */ W32((u32)(0xac9cc8u), r_edx);
    /* 00814d07: mov dword ptr [0xac9cd0], edx */ W32((u32)(0xac9cd0u), r_edx);
    /* 00814d0d: mov dword ptr [0xac9cd4], ebx */ W32((u32)(0xac9cd4u), r_ebx);
    /* 00814d13: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00814d16: movsx esi, word ptr [edx + 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 00814d1a: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814d1d: je 0x814dd3 */ if (fZ) goto L_00814dd3;
L_00814d23:; BB(0x00814d23);
    /* 00814d23: lea ebx, [esp + 8] */ r_ebx = (u32)(r_esp+0x8u);
    /* 00814d27: lea esi, [esp + 0x10] */ r_esi = (u32)(r_esp+0x10u);
    /* 00814d2b: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00814d2e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00814d31: mov dword ptr [0xac9cd8], edx */ W32((u32)(0xac9cd8u), r_edx);
L_00814d37:; BB(0x00814d37);
    /* 00814d37: mov dword ptr [0xac9cec], 0 */ W32((u32)(0xac9cecu), 0x0u);
    /* 00814d41: mov dword ptr [0xac9ce8], 1 */ W32((u32)(0xac9ce8u), 0x1u);
    /* 00814d4b: call 0x814c00 */ r_esp -= 4; W32(r_esp, 0x814d50u); f_00814c00();
    /* 00814d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00814d51: push dword ptr [0xac9ca0] */ { u32 v = R32((u32)(0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814d57: call 0x86df1c */ r_esp -= 4; W32(r_esp, 0x814d5cu); f_0086df1c();
    /* 00814d5c: mov dword ptr [0xac9d28], 0 */ W32((u32)(0xac9d28u), 0x0u);
    /* 00814d66: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00814d68: push dword ptr [0xac9cf4] */ { u32 v = R32((u32)(0xac9cf4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814d6e: push 0xab5b60 */ { u32 v = 0xab5b60u; r_esp -= 4; W32(r_esp, v); }
    /* 00814d73: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x814d78u); f_00858900();
    /* 00814d78: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00814d7a: push dword ptr [0xac9cf4] */ { u32 v = R32((u32)(0xac9cf4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814d80: push 0xab5b80 */ { u32 v = 0xab5b80u; r_esp -= 4; W32(r_esp, v); }
    /* 00814d85: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x814d8au); f_00858900();
    /* 00814d8a: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00814d8e: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00814d92: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 00814d94: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 00814d96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00814d98: mov word ptr [0xac9d2c], ax */ W16((u32)(0xac9d2cu), (u16)r_eax);
    /* 00814d9e: mov word ptr [0xac9d2e], dx */ W16((u32)(0xac9d2eu), (u16)r_edx);
    /* 00814da5: mov word ptr [0xac9d30], cx */ W16((u32)(0xac9d30u), (u16)r_ecx);
    /* 00814dac: mov word ptr [0xac9d32], ax */ W16((u32)(0xac9d32u), (u16)r_eax);
    /* 00814db2: mov word ptr [0xac9d34], ax */ W16((u32)(0xac9d34u), (u16)r_eax);
    /* 00814db8: mov word ptr [0xac9d36], bx */ W16((u32)(0xac9d36u), (u16)r_ebx);
    /* 00814dbf: mov word ptr [0xac9d38], si */ W16((u32)(0xac9d38u), (u16)r_esi);
    /* 00814dc6: mov word ptr [0xac9d3a], ax */ W16((u32)(0xac9d3au), (u16)r_eax);
    /* 00814dcc: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00814dcf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00814dd0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00814dd1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00814dd2: ret  */ FN_RET(0x00814c7c); r_esp += 4; return;
L_00814dd3:; BB(0x00814dd3);
    /* 00814dd3: lea ebx, [esp + 8] */ r_ebx = (u32)(r_esp+0x8u);
    /* 00814dd7: lea esi, [esp + 0x10] */ r_esi = (u32)(r_esp+0x10u);
    /* 00814ddb: movsx ecx, word ptr [edx + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00814ddf: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 00814de1: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 00814de4: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00814de6: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 00814dec: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00814dee: movsx edx, word ptr [edx + edi*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+r_edi*2));
    /* 00814df2: mov dword ptr [0xac9cd8], edx */ W32((u32)(0xac9cd8u), r_edx);
    /* 00814df8: jmp 0x814d37 */ goto L_00814d37;
}

void f_00814e00(void) /* sub_814E00 */
{
    FN_ENTER(0x00814e00);
    /* 00814e00: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x814e05u); f_00483748();
    /* 00814e05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00814e07: jne 0x814e0a */ if (!fZ) goto L_00814e0a;
L_00814e09:; BB(0x00814e09);
    /* 00814e09: ret  */ FN_RET(0x00814e00); r_esp += 4; return;
L_00814e0a:; BB(0x00814e0a);
    /* 00814e0a: mov eax, dword ptr [0xac9d1c] */ r_eax = R32((u32)(0xac9d1cu));
    /* 00814e0f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00814e11: push dword ptr [eax*4 + 0xac9ca0] */ { u32 v = R32((u32)(r_eax*4+0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814e18: call 0x86e09c */ r_esp -= 4; W32(r_esp, 0x814e1du); f_0086e09c();
    /* 00814e1d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00814e1f: push dword ptr [0xac9ca8] */ { u32 v = R32((u32)(0xac9ca8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814e25: call 0x86e09c */ r_esp -= 4; W32(r_esp, 0x814e2au); f_0086e09c();
    /* 00814e2a: mov dword ptr [0xac9d20], 2 */ W32((u32)(0xac9d20u), 0x2u);
    /* 00814e34: ret  */ FN_RET(0x00814e00); r_esp += 4; return;
}

void f_00814e38(void) /* sub_814E38 */
{
    FN_ENTER(0x00814e38);
    /* 00814e38: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x814e3du); f_00483748();
    /* 00814e3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00814e3f: jne 0x814e42 */ if (!fZ) goto L_00814e42;
L_00814e41:; BB(0x00814e41);
    /* 00814e41: ret  */ FN_RET(0x00814e38); r_esp += 4; return;
L_00814e42:; BB(0x00814e42);
    /* 00814e42: mov eax, dword ptr [0xac9d1c] */ r_eax = R32((u32)(0xac9d1cu));
    /* 00814e47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00814e49: push dword ptr [eax*4 + 0xac9ca0] */ { u32 v = R32((u32)(r_eax*4+0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814e50: call 0x86e09c */ r_esp -= 4; W32(r_esp, 0x814e55u); f_0086e09c();
    /* 00814e55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00814e57: push dword ptr [0xac9ca8] */ { u32 v = R32((u32)(0xac9ca8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814e5d: call 0x86e09c */ r_esp -= 4; W32(r_esp, 0x814e62u); f_0086e09c();
    /* 00814e62: mov eax, dword ptr [0xac9d1c] */ r_eax = R32((u32)(0xac9d1cu));
    /* 00814e67: push dword ptr [eax*4 + 0xac9ca0] */ { u32 v = R32((u32)(r_eax*4+0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814e6e: call 0x86df78 */ r_esp -= 4; W32(r_esp, 0x814e73u); f_0086df78();
    /* 00814e73: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00814e76: je 0x814e88 */ if (fZ) goto L_00814e88;
L_00814e78:; BB(0x00814e78);
    /* 00814e78: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00814e7b: je 0x814e88 */ if (fZ) goto L_00814e88;
L_00814e7d:; BB(0x00814e7d);
    /* 00814e7d: mov dword ptr [0xac9d20], 1 */ W32((u32)(0xac9d20u), 0x1u);
    /* 00814e87: ret  */ FN_RET(0x00814e38); r_esp += 4; return;
L_00814e88:; BB(0x00814e88);
    /* 00814e88: mov dword ptr [0xac9d20], 0 */ W32((u32)(0xac9d20u), 0x0u);
    /* 00814e92: ret  */ FN_RET(0x00814e38); r_esp += 4; return;
}

void f_00814e94(void) /* sub_814E94 */
{
    FN_ENTER(0x00814e94);
    /* 00814e94: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x814e99u); f_00483748();
    /* 00814e99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00814e9b: je 0x814ec6 */ if (fZ) goto L_00814ec6;
L_00814e9d:; BB(0x00814e9d);
    /* 00814e9d: mov eax, dword ptr [0xac9cb0] */ r_eax = R32((u32)(0xac9cb0u));
    /* 00814ea2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814ea4: jne 0x814eb6 */ if (!fZ) goto L_00814eb6;
L_00814ea6:; BB(0x00814ea6);
    /* 00814ea6: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00814eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00814eab: push dword ptr [0xac9ca0] */ { u32 v = R32((u32)(0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814eb1: call 0x86e078 */ r_esp -= 4; W32(r_esp, 0x814eb6u); f_0086e078();
L_00814eb6:; BB(0x00814eb6);
    /* 00814eb6: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00814eba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00814ebb: push dword ptr [0xac9ca4] */ { u32 v = R32((u32)(0xac9ca4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814ec1: call 0x86e078 */ r_esp -= 4; W32(r_esp, 0x814ec6u); f_0086e078();
L_00814ec6:; BB(0x00814ec6);
    /* 00814ec6: ret  */ FN_RET(0x00814e94); r_esp += 4; return;
}

void f_00814ec8(void) /* sub_814EC8 */
{
    FN_ENTER(0x00814ec8);
    /* 00814ec8: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x814ecdu); f_00483748();
    /* 00814ecd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00814ecf: jne 0x814ed2 */ if (!fZ) goto L_00814ed2;
L_00814ed1:; BB(0x00814ed1);
    /* 00814ed1: ret  */ FN_RET(0x00814ec8); r_esp += 4; return;
L_00814ed2:; BB(0x00814ed2);
    /* 00814ed2: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814ed6: push dword ptr [0xac9ca8] */ { u32 v = R32((u32)(0xac9ca8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814edc: call 0x86e078 */ r_esp -= 4; W32(r_esp, 0x814ee1u); f_0086e078();
    /* 00814ee1: ret  */ FN_RET(0x00814ec8); r_esp += 4; return;
}

void f_00814ee4(void) /* sub_814EE4 */
{
    FN_ENTER(0x00814ee4);
    /* 00814ee4: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x814ee9u); f_00483748();
    /* 00814ee9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00814eeb: jne 0x814eee */ if (!fZ) goto L_00814eee;
L_00814eed:; BB(0x00814eed);
    /* 00814eed: ret  */ FN_RET(0x00814ee4); r_esp += 4; return;
L_00814eee:; BB(0x00814eee);
    /* 00814eee: push -0x1e */ { u32 v = 0xffffffe2u; r_esp -= 4; W32(r_esp, v); }
    /* 00814ef0: call 0x814888 */ r_esp -= 4; W32(r_esp, 0x814ef5u); f_00814888();
    /* 00814ef5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00814ef6: ret  */ FN_RET(0x00814ee4); r_esp += 4; return;
}

void f_00814ef8(void) /* sub_814EF8 */
{
    FN_ENTER(0x00814ef8);
    /* 00814ef8: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x814efdu); f_00483748();
    /* 00814efd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00814eff: jne 0x814f02 */ if (!fZ) goto L_00814f02;
L_00814f01:; BB(0x00814f01);
    /* 00814f01: ret  */ FN_RET(0x00814ef8); r_esp += 4; return;
L_00814f02:; BB(0x00814f02);
    /* 00814f02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00814f04: call 0x814888 */ r_esp -= 4; W32(r_esp, 0x814f09u); f_00814888();
    /* 00814f09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00814f0a: ret  */ FN_RET(0x00814ef8); r_esp += 4; return;
}

void f_00814f0c(void) /* sub_814F0C */
{
    FN_ENTER(0x00814f0c);
    /* 00814f0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00814f0d: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x814f12u); f_00483748();
    /* 00814f12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00814f14: jne 0x814f18 */ if (!fZ) goto L_00814f18;
L_00814f16:; BB(0x00814f16);
    /* 00814f16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00814f17: ret  */ FN_RET(0x00814f0c); r_esp += 4; return;
L_00814f18:; BB(0x00814f18);
    /* 00814f18: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00814f1c: call 0x814c00 */ r_esp -= 4; W32(r_esp, 0x814f21u); f_00814c00();
    /* 00814f21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00814f22: push dword ptr [0xac9ca8] */ { u32 v = R32((u32)(0xac9ca8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814f28: call 0x86df38 */ r_esp -= 4; W32(r_esp, 0x814f2du); f_0086df38();
    /* 00814f2d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00814f2e: ret  */ FN_RET(0x00814f0c); r_esp += 4; return;
}

void f_00814f30(void) /* sub_814F30 */
{
    FN_ENTER(0x00814f30);
    /* 00814f30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00814f31: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00814f32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00814f33: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00814f34: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x814f39u); f_00483748();
    /* 00814f39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00814f3b: je 0x814fd2 */ if (fZ) goto L_00814fd2;
L_00814f41:; BB(0x00814f41);
    /* 00814f41: mov eax, dword ptr [0xac9d24] */ r_eax = R32((u32)(0xac9d24u));
    /* 00814f46: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00814f49: je 0x814f50 */ if (fZ) goto L_00814f50;
L_00814f4b:; BB(0x00814f4b);
    /* 00814f4b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00814f4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00814f4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00814f4e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00814f4f: ret  */ FN_RET(0x00814f30); r_esp += 4; return;
L_00814f50:; BB(0x00814f50);
    /* 00814f50: mov eax, dword ptr [0xac9d20] */ r_eax = R32((u32)(0xac9d20u));
    /* 00814f55: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00814f58: jne 0x814fd2 */ if (!fZ) goto L_00814fd2;
L_00814f5a:; BB(0x00814f5a);
    /* 00814f5a: mov eax, dword ptr [0xac9d28] */ r_eax = R32((u32)(0xac9d28u));
    /* 00814f5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814f61: jne 0x814fb4 */ if (!fZ) goto L_00814fb4;
L_00814f63:; BB(0x00814f63);
    /* 00814f63: push dword ptr [0xac9ca0] */ { u32 v = R32((u32)(0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814f69: call 0x86df78 */ r_esp -= 4; W32(r_esp, 0x814f6eu); f_0086df78();
    /* 00814f6e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00814f71: je 0x814fd2 */ if (fZ) goto L_00814fd2;
L_00814f73:; BB(0x00814f73);
    /* 00814f73: push dword ptr [0xac9cd4] */ { u32 v = R32((u32)(0xac9cd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814f79: push dword ptr [0xac9ca0] */ { u32 v = R32((u32)(0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814f7f: call 0x86e114 */ r_esp -= 4; W32(r_esp, 0x814f84u); f_0086e114();
    /* 00814f84: push dword ptr [0xac9cd8] */ { u32 v = R32((u32)(0xac9cd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814f8a: push dword ptr [0xac9ca0] */ { u32 v = R32((u32)(0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814f90: call 0x86e114 */ r_esp -= 4; W32(r_esp, 0x814f95u); f_0086e114();
    /* 00814f95: push dword ptr [0xac9ca0] */ { u32 v = R32((u32)(0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814f9b: call 0x86e0e0 */ r_esp -= 4; W32(r_esp, 0x814fa0u); f_0086e0e0();
    /* 00814fa0: call 0x814718 */ r_esp -= 4; W32(r_esp, 0x814fa5u); f_00814718();
    /* 00814fa5: mov dword ptr [0xac9d28], 1 */ W32((u32)(0xac9d28u), 0x1u);
    /* 00814faf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00814fb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00814fb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00814fb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00814fb3: ret  */ FN_RET(0x00814f30); r_esp += 4; return;
L_00814fb4:; BB(0x00814fb4);
    /* 00814fb4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00814fb7: jb 0x814fd2 */ if (fC) goto L_00814fd2;
L_00814fb9:; BB(0x00814fb9);
    /* 00814fb9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00814fbc: ja 0x814fd2 */ if ((!fC&&!fZ)) goto L_00814fd2;
L_00814fbe:; BB(0x00814fbe);
    /* 00814fbe: push dword ptr [0xac9ca0] */ { u32 v = R32((u32)(0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00814fc4: call 0x86e0f8 */ r_esp -= 4; W32(r_esp, 0x814fc9u); f_0086e0f8();
    /* 00814fc9: mov dword ptr [0xac9cdc], eax */ W32((u32)(0xac9cdcu), r_eax);
    /* 00814fce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00814fd0: jle 0x814fd7 */ if ((fZ||fS!=fO)) goto L_00814fd7;
L_00814fd2:; BB(0x00814fd2);
    /* 00814fd2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00814fd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00814fd4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00814fd5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00814fd6: ret  */ FN_RET(0x00814f30); r_esp += 4; return;
L_00814fd7:; BB(0x00814fd7);
    /* 00814fd7: mov eax, dword ptr [0xac9d1c] */ r_eax = R32((u32)(0xac9d1cu));
    /* 00814fdc: mov edx, dword ptr [0xac9d28] */ r_edx = R32((u32)(0xac9d28u));
    /* 00814fe2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00814fe4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00814fe7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00814fea: mov dword ptr [0xac9d1c], eax */ W32((u32)(0xac9d1cu), r_eax);
    /* 00814fef: je 0x81514f */ if (fZ) goto L_0081514f;
L_00814ff5:; BB(0x00814ff5);
    /* 00814ff5: mov eax, dword ptr [0xac9cc8] */ r_eax = R32((u32)(0xac9cc8u));
    /* 00814ffa: cmp eax, dword ptr [0xac9cd0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xac9cd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815000: jne 0x8150c0 */ if (!fZ) goto L_008150c0;
L_00815006:; BB(0x00815006);
    /* 00815006: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x81500bu); f_00483748();
    /* 0081500b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081500d: je 0x814fd2 */ if (fZ) goto L_00814fd2;
L_0081500f:; BB(0x0081500f);
    /* 0081500f: mov eax, dword ptr [0xac9d1c] */ r_eax = R32((u32)(0xac9d1cu));
    /* 00815014: movsx ebp, word ptr [eax*8 + 0xac9d2c] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax*8+0xac9d2cu));
    /* 0081501c: movsx ebx, word ptr [eax*8 + 0xac9d2e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax*8+0xac9d2eu));
    /* 00815024: movsx eax, word ptr [eax*8 + 0xac9d30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax*8+0xac9d30u));
    /* 0081502c: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 0081502f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00815031: mov edx, dword ptr [0xac9cf4] */ r_edx = R32((u32)(0xac9cf4u));
    /* 00815037: mov edx, dword ptr [edx + ebp*4 + 0x2c] */ r_edx = R32((u32)(r_edx+r_ebp*4+0x2cu));
    /* 0081503b: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0081503d: movsx ecx, word ptr [edx + edi*2 + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+r_edi*2+0x4u));
    /* 00815042: lea esi, [eax + 1] */ r_esi = (u32)(r_eax+0x1u);
    /* 00815045: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00815047: jb 0x815077 */ if (fC) goto L_00815077;
L_00815049:; BB(0x00815049);
    /* 00815049: mov eax, dword ptr [0xac9cf0] */ r_eax = R32((u32)(0xac9cf0u));
    /* 0081504e: movsx ebx, word ptr [edx + edi*2 + 8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+r_edi*2+0x8u));
    /* 00815053: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00815055: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00815058: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081505a: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081505c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081505e: je 0x815067 */ if (fZ) goto L_00815067;
L_00815060:; BB(0x00815060);
    /* 00815060: movsx edi, word ptr [edx + ecx*2 + 2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2+0x2u));
    /* 00815065: jmp 0x81507f */ goto L_0081507f;
L_00815067:; BB(0x00815067);
    /* 00815067: movsx edi, word ptr [edx + ecx*2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2));
    /* 0081506b: mov dword ptr [0xac9cf0], 1 */ W32((u32)(0xac9cf0u), 0x1u);
    /* 00815075: jmp 0x81507f */ goto L_0081507f;
L_00815077:; BB(0x00815077);
    /* 00815077: movsx edx, word ptr [edx + edi*2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+r_edi*2));
    /* 0081507b: lea edi, [edx + eax + 1] */ r_edi = (u32)(r_edx+r_eax+0x1u);
L_0081507f:; BB(0x0081507f);
    /* 0081507f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00815080: push dword ptr [0xac9ca0] */ { u32 v = R32((u32)(0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00815086: call 0x86e114 */ r_esp -= 4; W32(r_esp, 0x81508bu); f_0086e114();
    /* 0081508b: mov eax, dword ptr [0xac9d1c] */ r_eax = R32((u32)(0xac9d1cu));
    /* 00815090: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00815092: mov word ptr [eax*8 + 0xac9d34], bp */ W16((u32)(r_eax*8+0xac9d34u), (u16)r_ebp);
    /* 0081509a: mov word ptr [eax*8 + 0xac9d36], bx */ W16((u32)(r_eax*8+0xac9d36u), (u16)r_ebx);
    /* 008150a2: mov word ptr [eax*8 + 0xac9d38], si */ W16((u32)(r_eax*8+0xac9d38u), (u16)r_esi);
    /* 008150aa: mov dword ptr [eax*4 + 0xac9cd8], edi */ W32((u32)(r_eax*4+0xac9cd8u), r_edi);
    /* 008150b1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008150b3: mov word ptr [eax*8 + 0xac9d3a], bx */ W16((u32)(r_eax*8+0xac9d3au), (u16)r_ebx);
    /* 008150bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008150bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008150bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008150be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008150bf: ret  */ FN_RET(0x00814f30); r_esp += 4; return;
L_008150c0:; BB(0x008150c0);
    /* 008150c0: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x8150c5u); f_00483748();
    /* 008150c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008150c7: je 0x815140 */ if (fZ) goto L_00815140;
L_008150c9:; BB(0x008150c9);
    /* 008150c9: mov ebp, dword ptr [0xac9d1c] */ r_ebp = R32((u32)(0xac9d1cu));
    /* 008150cf: movsx esi, word ptr [ebp*8 + 0xac9d2c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp*8+0xac9d2cu));
    /* 008150d7: movsx ebp, word ptr [ebp*8 + 0xac9d2e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebp*8+0xac9d2eu));
    /* 008150df: mov eax, dword ptr [0xac9cf4] */ r_eax = R32((u32)(0xac9cf4u));
    /* 008150e4: mov edx, dword ptr [eax + esi*4 + 0x2c] */ r_edx = R32((u32)(r_eax+r_esi*4+0x2cu));
    /* 008150e8: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 008150ec: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008150ee: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008150f0: movsx ebx, word ptr [edx + ecx*2 + 6] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2+0x6u));
    /* 008150f5: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008150f8: je 0x815163 */ if (fZ) goto L_00815163;
L_008150fa:; BB(0x008150fa);
    /* 008150fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008150fb: push dword ptr [0xac9ca0] */ { u32 v = R32((u32)(0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00815101: call 0x86e114 */ r_esp -= 4; W32(r_esp, 0x815106u); f_0086e114();
    /* 00815106: mov eax, dword ptr [0xac9d1c] */ r_eax = R32((u32)(0xac9d1cu));
    /* 0081510b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0081510d: mov word ptr [eax*8 + 0xac9d34], si */ W16((u32)(r_eax*8+0xac9d34u), (u16)r_esi);
    /* 00815115: mov esi, 1 */ r_esi = 0x1u;
    /* 0081511a: mov word ptr [eax*8 + 0xac9d36], bp */ W16((u32)(r_eax*8+0xac9d36u), (u16)r_ebp);
    /* 00815122: mov word ptr [eax*8 + 0xac9d3a], si */ W16((u32)(r_eax*8+0xac9d3au), (u16)r_esi);
    /* 0081512a: mov dword ptr [eax*4 + 0xac9cd8], ebx */ W32((u32)(r_eax*4+0xac9cd8u), r_ebx);
    /* 00815131: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00815133: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00815136: mov word ptr [eax*8 + 0xac9d38], bp */ W16((u32)(r_eax*8+0xac9d38u), (u16)r_ebp);
    /* 0081513e: je 0x815163 */ if (fZ) goto L_00815163;
L_00815140:; BB(0x00815140);
    /* 00815140: mov dword ptr [0xac9d28], 2 */ W32((u32)(0xac9d28u), 0x2u);
    /* 0081514a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081514b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081514c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081514d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081514e: ret  */ FN_RET(0x00814f30); r_esp += 4; return;
L_0081514f:; BB(0x0081514f);
    /* 0081514f: call 0x815170 */ r_esp -= 4; W32(r_esp, 0x815154u); f_00815170();
    /* 00815154: mov dword ptr [0xac9d28], 1 */ W32((u32)(0xac9d28u), 0x1u);
    /* 0081515e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0081515f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00815160: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00815161: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00815162: ret  */ FN_RET(0x00814f30); r_esp += 4; return;
L_00815163:; BB(0x00815163);
    /* 00815163: call 0x815170 */ r_esp -= 4; W32(r_esp, 0x815168u); f_00815170();
    /* 00815168: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00815169: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081516a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081516b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081516c: ret  */ FN_RET(0x00814f30); r_esp += 4; return;
}

