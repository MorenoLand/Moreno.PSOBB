#include "protos.h"

void f_0057e2e4(void) /* sub_57E2E4 */
{
    FN_ENTER(0x0057e2e4);
    /* 0057e2e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e2e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057e2e7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0057e2ec: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x57e2f1u); f_0082d990();
    /* 0057e2f1: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0057e2f4: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0057e2f7: fadd dword ptr [ebx + 0x3ec] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3ecu));
    /* 0057e2fd: fadd dword ptr [ebx + 0x40c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40cu));
    /* 0057e303: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0057e306: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057e309: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0057e30d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0057e310: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057e312: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0057e316: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x57e31bu); f_00830b74();
    /* 0057e31b: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0057e31e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057e320: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x57e325u); f_0082d8bc();
    /* 0057e325: mov eax, dword ptr [ebx + 0x68] */ r_eax = R32((u32)(r_ebx+0x68u));
    /* 0057e328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e329: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e32a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057e32c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e32d: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x57e332u); f_0082fa0c();
    /* 0057e332: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057e338: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057e33a: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x57e33fu); f_007aaab8();
    /* 0057e33f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x57e344u); f_0082da80();
    /* 0057e344: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0057e346: lea eax, [ebx + 0x3a4] */ r_eax = (u32)(r_ebx+0x3a4u);
    /* 0057e34c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e34d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057e34f: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e351: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x57e357u); call_ind(t); }
    /* 0057e357: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0057e359: lea eax, [ebx + 0x3b0] */ r_eax = (u32)(r_ebx+0x3b0u);
    /* 0057e35f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e360: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057e362: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e364: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x57e36au); call_ind(t); }
    /* 0057e36a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057e36b: ret  */ FN_RET(0x0057e2e4); r_esp += 4; return;
}

void f_0057e36c(void) /* sub_57E36C */
{
    FN_ENTER(0x0057e36c);
    /* 0057e36c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057e36d: mov ebp, esp */ r_ebp = r_esp;
    /* 0057e36f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057e371: push 0x8d7a64 */ { u32 v = 0x8d7a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e376: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057e37c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e37d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057e384: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057e387: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057e38a: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0057e38d: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0057e390: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0057e393: mov eax, dword ptr [ecx + 0x384] */ r_eax = R32((u32)(r_ecx+0x384u));
    /* 0057e399: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0057e39c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057e39e: je 0x57e6d7 */ if (fZ) goto L_0057e6d7;
L_0057e3a4:; BB(0x0057e3a4);
    /* 0057e3a4: jle 0x57e65f */ if ((fZ||fS!=fO)) goto L_0057e65f;
L_0057e3aa:; BB(0x0057e3aa);
    /* 0057e3aa: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057e3ad: jg 0x57e582 */ if ((!fZ&&fS==fO)) goto L_0057e582;
L_0057e3b3:; BB(0x0057e3b3);
    /* 0057e3b3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e3b6: jne 0x57e411 */ if (!fZ) goto L_0057e411;
L_0057e3b8:; BB(0x0057e3b8);
    /* 0057e3b8: mov edx, ecx */ r_edx = r_ecx;
    /* 0057e3ba: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 0057e3c0: fcomp dword ptr [0x927968] */ fx_compare(ST(0), R_F32((u32)(0x927968u))); FPOP();
    /* 0057e3c6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057e3c8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057e3c9: jb 0x57e544 */ if (fC) goto L_0057e544;
L_0057e3cf:; BB(0x0057e3cf);
    /* 0057e3cf: call 0x57e2e4 */ r_esp -= 4; W32(r_esp, 0x57e3d4u); f_0057e2e4();
    /* 0057e3d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e3d7: push 0xf7 */ { u32 v = 0xf7u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e3dc: lea edx, [eax + 0x3a4] */ r_edx = (u32)(r_eax+0x3a4u);
    /* 0057e3e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e3e3: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57e3e8u); f_0050b510();
    /* 0057e3e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e3eb: push 0xf7 */ { u32 v = 0xf7u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e3f0: lea edx, [eax + 0x3b0] */ r_edx = (u32)(r_eax+0x3b0u);
    /* 0057e3f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e3f7: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57e3fcu); f_0050b510();
    /* 0057e3fc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057e3ff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e402: mov dword ptr [eax + 0x384], 2 */ W32((u32)(r_eax+0x384u), 0x2u);
    /* 0057e40c: jmp 0x57e544 */ goto L_0057e544;
L_0057e411:; BB(0x0057e411);
    /* 0057e411: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e414: jne 0x57e544 */ if (!fZ) goto L_0057e544;
L_0057e41a:; BB(0x0057e41a);
    /* 0057e41a: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 0057e41d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057e41f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e421: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e422: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e423: push 0x10b */ { u32 v = 0x10bu; r_esp -= 4; W32(r_esp, v); }
    /* 0057e428: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x57e42du); f_008144b0();
    /* 0057e42d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057e430: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e433: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 0057e439: fcomp dword ptr [0x92796c] */ fx_compare(ST(0), R_F32((u32)(0x92796cu))); FPOP();
    /* 0057e43f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057e441: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057e442: jb 0x57e544 */ if (fC) goto L_0057e544;
L_0057e448:; BB(0x0057e448);
    /* 0057e448: mov ecx, edx */ r_ecx = r_edx;
    /* 0057e44a: call 0x57e2e4 */ r_esp -= 4; W32(r_esp, 0x57e44fu); f_0057e2e4();
    /* 0057e44f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e452: mov ecx, dword ptr [edx + 0x3bc] */ r_ecx = R32((u32)(r_edx+0x3bcu));
    /* 0057e458: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057e45a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0057e45d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057e45f: jle 0x57e676 */ if ((fZ||fS!=fO)) goto L_0057e676;
L_0057e465:; BB(0x0057e465);
    /* 0057e465: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e468: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e46b: movzx ebx, word ptr [edx + ecx*2 + 0x3c0] */ r_ebx = (u32)R16((u32)(r_edx+r_ecx*2+0x3c0u));
    /* 0057e473: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e474: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0057e477: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0057e47a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x57e47fu); f_007b4d18();
    /* 0057e47f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057e480: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e482: je 0x57e527 */ if (fZ) goto L_0057e527;
L_0057e488:; BB(0x0057e488);
    /* 0057e488: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e48b: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 0057e492: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0057e495: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0057e498: je 0x57e4a1 */ if (fZ) goto L_0057e4a1;
L_0057e49a:; BB(0x0057e49a);
    /* 0057e49a: mov edx, 0xffffe000 */ r_edx = 0xffffe000u;
    /* 0057e49f: jmp 0x57e4a6 */ goto L_0057e4a6;
L_0057e4a1:; BB(0x0057e4a1);
    /* 0057e4a1: mov edx, 0x2000 */ r_edx = 0x2000u;
L_0057e4a6:; BB(0x0057e4a6);
    /* 0057e4a6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e4a9: add edx, dword ptr [eax + 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x60u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057e4ac: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0057e4af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057e4b1: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0057e4b4: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0057e4b7: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e4bc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x57e4c1u); f_005caba4();
    /* 0057e4c1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057e4c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057e4c7: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0057e4ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e4cc: je 0x57e520 */ if (fZ) goto L_0057e520;
L_0057e4ce:; BB(0x0057e4ce);
    /* 0057e4ce: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 0057e4d5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057e4dc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057e4df: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e4e2: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 0057e4e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057e4e7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057e4e9: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0057e4ec: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057e4ee: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e4f1: lea esi, [edi + eax + 0x3a4] */ r_esi = (u32)(r_edi+r_eax+0x3a4u);
    /* 0057e4f8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e4fb: movzx ebx, word ptr [edi + eax + 0x3c0] */ r_ebx = (u32)R16((u32)(r_edi+r_eax+0x3c0u));
    /* 0057e503: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0057e506: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057e508: movzx ecx, word ptr [edi + 0x1c] */ r_ecx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0057e50c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e50d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057e510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e511: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e512: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e513: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057e514: call 0x580544 */ r_esp -= 4; W32(r_esp, 0x57e519u); f_00580544();
    /* 0057e519: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0057e520:; BB(0x0057e520);
    /* 0057e520: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0057e527:; BB(0x0057e527);
    /* 0057e527: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e52a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e52d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057e530: cmp eax, dword ptr [edx + 0x3bc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x3bcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057e536: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0057e539: jl 0x57e465 */ if ((fS!=fO)) goto L_0057e465;
L_0057e53f:; BB(0x0057e53f);
    /* 0057e53f: jmp 0x57e676 */ goto L_0057e676;
L_0057e544:; BB(0x0057e544);
    /* 0057e544: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e547: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57e54cu); f_007aa094();
    /* 0057e54c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e54f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e551: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e553: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x57e558u); f_00772b44();
    /* 0057e558: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e55b: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x57e560u); f_007b6880();
    /* 0057e560: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e563: mov eax, dword ptr [eax + 0x38c] */ r_eax = R32((u32)(r_eax+0x38cu));
    /* 0057e569: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057e56c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057e56e: jle 0x57e687 */ if ((fZ||fS!=fO)) goto L_0057e687;
L_0057e574:; BB(0x0057e574);
    /* 0057e574: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e577: mov dword ptr [edx + 0x38c], eax */ W32((u32)(r_edx+0x38cu), r_eax);
    /* 0057e57d: jmp 0x57e65f */ goto L_0057e65f;
L_0057e582:; BB(0x0057e582);
    /* 0057e582: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057e585: jne 0x57e65f */ if (!fZ) goto L_0057e65f;
L_0057e58b:; BB(0x0057e58b);
    /* 0057e58b: mov edx, dword ptr [ecx + 0x358] */ r_edx = R32((u32)(r_ecx+0x358u));
    /* 0057e591: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057e594: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e599: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e59e: push dword ptr [ecx + 0x3e0] */ { u32 v = R32((u32)(r_ecx+0x3e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057e5a4: call 0x772054 */ r_esp -= 4; W32(r_esp, 0x57e5a9u); f_00772054();
    /* 0057e5a9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057e5ab: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e5ae: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57e5b3u); f_007aa094();
    /* 0057e5b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e5b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e5b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e5ba: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x57e5bfu); f_00772b44();
    /* 0057e5bf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e5c2: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x57e5c7u); f_007b6880();
    /* 0057e5c7: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e5cc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e5cf: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x57e5d4u); f_007aaa30();
    /* 0057e5d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e5d6: jne 0x57e5e9 */ if (!fZ) goto L_0057e5e9;
L_0057e5d8:; BB(0x0057e5d8);
    /* 0057e5d8: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e5dd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e5e0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x57e5e5u); f_007aaa30();
    /* 0057e5e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e5e7: je 0x57e601 */ if (fZ) goto L_0057e601;
L_0057e5e9:; BB(0x0057e5e9);
    /* 0057e5e9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e5ec: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 0057e5ef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057e5f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e5f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e5f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e5f4: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e5f9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57e5feu); f_00814298();
    /* 0057e5fe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057e601:; BB(0x0057e601);
    /* 0057e601: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e604: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e606: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e60b: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x57e610u); f_007714cc();
    /* 0057e610: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0057e613: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e618: je 0x57e649 */ if (fZ) goto L_0057e649;
L_0057e61a:; BB(0x0057e61a);
    /* 0057e61a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e61d: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 0057e623: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057e626: jne 0x57e65f */ if (!fZ) goto L_0057e65f;
L_0057e628:; BB(0x0057e628);
    /* 0057e628: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0057e62f: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057e632: je 0x57e65f */ if (fZ) goto L_0057e65f;
L_0057e634:; BB(0x0057e634);
    /* 0057e634: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e637: mov dword ptr [edx + 0x37c], 0xb */ W32((u32)(r_edx+0x37cu), 0xbu);
    /* 0057e641: mov dword ptr [edx + 0x388], eax */ W32((u32)(r_edx+0x388u), r_eax);
    /* 0057e647: jmp 0x57e65f */ goto L_0057e65f;
L_0057e649:; BB(0x0057e649);
    /* 0057e649: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e64c: mov edx, dword ptr [eax + 0x38c] */ r_edx = R32((u32)(r_eax+0x38cu));
    /* 0057e652: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057e655: mov dword ptr [eax + 0x38c], edx */ W32((u32)(r_eax+0x38cu), r_edx);
    /* 0057e65b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057e65d: jle 0x57e6ac */ if ((fZ||fS!=fO)) goto L_0057e6ac;
L_0057e65f:; BB(0x0057e65f);
    /* 0057e65f: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057e662: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057e665: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057e668: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057e66b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057e672: mov esp, ebp */ r_esp = r_ebp;
    /* 0057e674: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057e675: ret  */ FN_RET(0x0057e36c); r_esp += 4; return;
L_0057e676:; BB(0x0057e676);
    /* 0057e676: mov eax, edx */ r_eax = r_edx;
    /* 0057e678: mov dword ptr [eax + 0x384], 3 */ W32((u32)(r_eax+0x384u), 0x3u);
    /* 0057e682: jmp 0x57e544 */ goto L_0057e544;
L_0057e687:; BB(0x0057e687);
    /* 0057e687: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e68a: mov dword ptr [edx + 0x38c], 0x2d */ W32((u32)(r_edx+0x38cu), 0x2du);
    /* 0057e694: mov eax, 1 */ r_eax = 0x1u;
    /* 0057e699: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 0057e6a0: mov dword ptr [edx + 0x384], 4 */ W32((u32)(r_edx+0x384u), 0x4u);
    /* 0057e6aa: jmp 0x57e65f */ goto L_0057e65f;
L_0057e6ac:; BB(0x0057e6ac);
    /* 0057e6ac: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 0057e6b2: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057e6b5: jne 0x57e65f */ if (!fZ) goto L_0057e65f;
L_0057e6b7:; BB(0x0057e6b7);
    /* 0057e6b7: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0057e6be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057e6c0: je 0x57e65f */ if (fZ) goto L_0057e65f;
L_0057e6c2:; BB(0x0057e6c2);
    /* 0057e6c2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e6c5: mov dword ptr [edx + 0x37c], 0 */ W32((u32)(r_edx+0x37cu), 0x0u);
    /* 0057e6cf: mov dword ptr [edx + 0x388], eax */ W32((u32)(r_edx+0x388u), r_eax);
    /* 0057e6d5: jmp 0x57e65f */ goto L_0057e65f;
L_0057e6d7:; BB(0x0057e6d7);
    /* 0057e6d7: mov eax, ecx */ r_eax = r_ecx;
    /* 0057e6d9: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0057e6dc: and edx, 0xfbfbffff */ {  u32 a = r_edx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057e6e2: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0057e6e5: and edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0057e6eb: je 0x57e75d */ if (fZ) goto L_0057e75d;
L_0057e6ed:; BB(0x0057e6ed);
    /* 0057e6ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e6ef: je 0x57e71f */ if (fZ) goto L_0057e71f;
L_0057e6f1:; BB(0x0057e6f1);
    /* 0057e6f1: mov eax, dword ptr [eax + 0x390] */ r_eax = R32((u32)(r_eax+0x390u));
    /* 0057e6f7: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057e6f9: jne 0x57e74a */ if (!fZ) goto L_0057e74a;
L_0057e6fb:; BB(0x0057e6fb);
    /* 0057e6fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e6fe: movsx edx, word ptr [edx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x32eu));
    /* 0057e705: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e708: je 0x57e74a */ if (fZ) goto L_0057e74a;
L_0057e70a:; BB(0x0057e70a);
    /* 0057e70a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e70d: mov dword ptr [ecx + 0x37c], 0xb */ W32((u32)(r_ecx+0x37cu), 0xbu);
    /* 0057e717: mov dword ptr [ecx + 0x388], edx */ W32((u32)(r_ecx+0x388u), r_edx);
    /* 0057e71d: jmp 0x57e74a */ goto L_0057e74a;
L_0057e71f:; BB(0x0057e71f);
    /* 0057e71f: mov eax, dword ptr [eax + 0x390] */ r_eax = R32((u32)(r_eax+0x390u));
    /* 0057e725: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057e727: jne 0x57e74a */ if (!fZ) goto L_0057e74a;
L_0057e729:; BB(0x0057e729);
    /* 0057e729: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e72c: movsx edx, word ptr [edx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x32eu));
    /* 0057e733: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e735: je 0x57e74a */ if (fZ) goto L_0057e74a;
L_0057e737:; BB(0x0057e737);
    /* 0057e737: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e73a: mov dword ptr [ecx + 0x37c], 0 */ W32((u32)(r_ecx+0x37cu), 0x0u);
    /* 0057e744: mov dword ptr [ecx + 0x388], edx */ W32((u32)(r_ecx+0x388u), r_edx);
L_0057e74a:; BB(0x0057e74a);
    /* 0057e74a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e74d: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057e752: mov dword ptr [edx + 0x390], eax */ W32((u32)(r_edx+0x390u), r_eax);
    /* 0057e758: jmp 0x57e65f */ goto L_0057e65f;
L_0057e75d:; BB(0x0057e75d);
    /* 0057e75d: mov esi, eax */ r_esi = r_eax;
    /* 0057e75f: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0057e764: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057e76a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057e76c: mov dword ptr [esi + 0x3bc], 0 */ W32((u32)(r_esi+0x3bcu), 0x0u);
    /* 0057e776: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0057e778: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057e77a: jle 0x57e891 */ if ((fZ||fS!=fO)) goto L_0057e891;
L_0057e780:; BB(0x0057e780);
    /* 0057e780: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 0057e787: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e788: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x57e78du); f_006ea71c();
    /* 0057e78d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057e78e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e790: je 0x57e872 */ if (fZ) goto L_0057e872;
L_0057e796:; BB(0x0057e796);
    /* 0057e796: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e799: mov edx, dword ptr [eax + 0x3bc] */ r_edx = R32((u32)(r_eax+0x3bcu));
    /* 0057e79f: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057e7a2: jge 0x57e872 */ if ((fS==fO)) goto L_0057e872;
L_0057e7a8:; BB(0x0057e7a8);
    /* 0057e7a8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e7aa: je 0x57e872 */ if (fZ) goto L_0057e872;
L_0057e7b0:; BB(0x0057e7b0);
    /* 0057e7b0: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e7b2: je 0x57e872 */ if (fZ) goto L_0057e872;
L_0057e7b8:; BB(0x0057e7b8);
    /* 0057e7b8: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0057e7bb: test eax, 0x6000800 */ {  u32 a = r_eax; u32 b = 0x6000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e7c0: jne 0x57e872 */ if (!fZ) goto L_0057e872;
L_0057e7c6:; BB(0x0057e7c6);
    /* 0057e7c6: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 0057e7c9: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0057e7cc: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 0057e7cf: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0057e7d2: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0057e7d5: mov dword ptr [ebp - 0x50], edi */ W32((u32)(r_ebp+0xffffffb0u), r_edi);
    /* 0057e7d8: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0057e7db: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e7de: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0057e7e1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x57e7e6u); f_0082f9c4();
    /* 0057e7e6: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 0057e7e9: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 0057e7ec: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0057e7ee: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 0057e7f1: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 0057e7f4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0057e7f6: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0057e7f8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057e7fa: fcomp dword ptr [0x927954] */ fx_compare(ST(0), R_F32((u32)(0x927954u))); FPOP();
    /* 0057e800: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057e802: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057e803: jbe 0x57e80b */ if ((fC||fZ)) goto L_0057e80b;
L_0057e805:; BB(0x0057e805);
    /* 0057e805: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057e807: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057e809: jmp 0x57e872 */ goto L_0057e872;
L_0057e80b:; BB(0x0057e80b);
    /* 0057e80b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057e80d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0057e80f: fmul qword ptr [0x927878] */ ST(0) = ST(0) * R_F64((u32)(0x927878u));
    /* 0057e815: fdiv qword ptr [0x927870] */ ST(0) = ST(0) / R_F64((u32)(0x927870u));
    /* 0057e81b: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0057e81e: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 0057e822: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057e827: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0057e82a: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0057e82d: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0057e830: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 0057e833: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e836: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057e839: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057e83c: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0057e83e: add edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057e844: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e845: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x57e84au); f_007a9018();
    /* 0057e84a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057e84d: cmp eax, 0xaaa */ {  u32 a = r_eax; u32 b = 0xaaau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057e852: jg 0x57e872 */ if ((!fZ&&fS==fO)) goto L_0057e872;
L_0057e854:; BB(0x0057e854);
    /* 0057e854: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e857: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0057e85b: mov ebx, dword ptr [ecx + 0x3bc] */ r_ebx = R32((u32)(r_ecx+0x3bcu));
    /* 0057e861: lea eax, [ebx + 1] */ r_eax = (u32)(r_ebx+0x1u);
    /* 0057e864: mov dword ptr [ecx + 0x3bc], eax */ W32((u32)(r_ecx+0x3bcu), r_eax);
    /* 0057e86a: mov word ptr [ecx + ebx*2 + 0x3c0], dx */ W16((u32)(r_ecx+r_ebx*2+0x3c0u), (u16)r_edx);
L_0057e872:; BB(0x0057e872);
    /* 0057e872: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0057e877: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057e87d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0057e880: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057e882: jl 0x57e780 */ if ((fS!=fO)) goto L_0057e780;
L_0057e888:; BB(0x0057e888);
    /* 0057e888: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e88b: mov edx, dword ptr [eax + 0x3bc] */ r_edx = R32((u32)(r_eax+0x3bcu));
L_0057e891:; BB(0x0057e891);
    /* 0057e891: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057e893: jle 0x57e8c3 */ if ((fZ||fS!=fO)) goto L_0057e8c3;
L_0057e895:; BB(0x0057e895);
    /* 0057e895: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e898: mov dword ptr [edx + 0x38c], 0x5a */ W32((u32)(r_edx+0x38cu), 0x5au);
    /* 0057e8a2: mov eax, 2 */ r_eax = 0x2u;
    /* 0057e8a7: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 0057e8ae: mov eax, dword ptr [edx + 0x390] */ r_eax = R32((u32)(r_edx+0x390u));
    /* 0057e8b4: mov dword ptr [edx + 0x384], 1 */ W32((u32)(r_edx+0x384u), 0x1u);
    /* 0057e8be: jmp 0x57e74a */ goto L_0057e74a;
L_0057e8c3:; BB(0x0057e8c3);
    /* 0057e8c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e8c6: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0057e8c9: and edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057e8cf: jmp 0x57e6ed */ goto L_0057e6ed;
}

void f_0057e8d4(void) /* sub_57E8D4 */
{
    FN_ENTER(0x0057e8d4);
    /* 0057e8d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057e8d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e8d6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0057e8d8: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 0057e8de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e8e0: je 0x57e93d */ if (fZ) goto L_0057e93d;
L_0057e8e2:; BB(0x0057e8e2);
    /* 0057e8e2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e8e5: je 0x57e935 */ if (fZ) goto L_0057e935;
L_0057e8e7:; BB(0x0057e8e7);
    /* 0057e8e7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057e8ea: jne 0x57e9a9 */ if (!fZ) goto L_0057e9a9;
L_0057e8f0:; BB(0x0057e8f0);
    /* 0057e8f0: mov edx, dword ptr [ebp + 0x390] */ r_edx = R32((u32)(r_ebp+0x390u));
    /* 0057e8f6: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0057e8f9: and edx, 0xfffffffa */ {  u32 a = r_edx; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057e8fc: mov dword ptr [ebp + 0x390], edx */ W32((u32)(r_ebp+0x390u), r_edx);
    /* 0057e902: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057e907: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0057e90a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057e90d: jne 0x57e9a9 */ if (!fZ) goto L_0057e9a9;
L_0057e913:; BB(0x0057e913);
    /* 0057e913: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0057e91a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057e91c: je 0x57e9a9 */ if (fZ) goto L_0057e9a9;
L_0057e922:; BB(0x0057e922);
    /* 0057e922: mov dword ptr [ebp + 0x37c], 0 */ W32((u32)(r_ebp+0x37cu), 0x0u);
    /* 0057e92c: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 0057e932: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057e933: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057e934: ret  */ FN_RET(0x0057e8d4); r_esp += 4; return;
L_0057e935:; BB(0x0057e935);
    /* 0057e935: lea ebx, [ebp + 0x3f0] */ r_ebx = (u32)(r_ebp+0x3f0u);
    /* 0057e93b: jmp 0x57e985 */ goto L_0057e985;
L_0057e93d:; BB(0x0057e93d);
    /* 0057e93d: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 0057e943: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0057e946: or edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0057e94c: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057e94f: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 0057e955: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0057e958: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0057e95a: mov word ptr [ebp + 0xb8], bx */ W16((u32)(r_ebp+0xb8u), (u16)r_ebx);
    /* 0057e961: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 0057e967: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e968: call 0x57895c */ r_esp -= 4; W32(r_esp, 0x57e96du); f_0057895c();
    /* 0057e96d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057e96e: lea ebx, [ebp + 0x3f0] */ r_ebx = (u32)(r_ebp+0x3f0u);
    /* 0057e974: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057e976: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x57e97bu); f_00576c48();
    /* 0057e97b: mov dword ptr [ebp + 0x384], 1 */ W32((u32)(r_ebp+0x384u), 0x1u);
L_0057e985:; BB(0x0057e985);
    /* 0057e985: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057e987: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57e98cu); f_007aa094();
    /* 0057e98c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0057e98e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057e990: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x57e993u); call_ind(t); }
    /* 0057e993: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e996: jne 0x57e9a2 */ if (!fZ) goto L_0057e9a2;
L_0057e998:; BB(0x0057e998);
    /* 0057e998: mov dword ptr [ebp + 0x384], 0xffffffff */ W32((u32)(r_ebp+0x384u), 0xffffffffu);
L_0057e9a2:; BB(0x0057e9a2);
    /* 0057e9a2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057e9a4: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x57e9a9u); f_007b6880();
L_0057e9a9:; BB(0x0057e9a9);
    /* 0057e9a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057e9aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057e9ab: ret  */ FN_RET(0x0057e8d4); r_esp += 4; return;
}

void f_0057e9ac(void) /* sub_57E9AC */
{
    FN_ENTER(0x0057e9ac);
    /* 0057e9ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057e9ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057e9ae: mov edi, ecx */ r_edi = r_ecx;
    /* 0057e9b0: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 0057e9b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e9b8: je 0x57eafb */ if (fZ) goto L_0057eafb;
L_0057e9be:; BB(0x0057e9be);
    /* 0057e9be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e9c1: je 0x57eab6 */ if (fZ) goto L_0057eab6;
L_0057e9c7:; BB(0x0057e9c7);
    /* 0057e9c7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e9ca: je 0x57ea41 */ if (fZ) goto L_0057ea41;
L_0057e9cc:; BB(0x0057e9cc);
    /* 0057e9cc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e9cf: je 0x57ea03 */ if (fZ) goto L_0057ea03;
L_0057e9d1:; BB(0x0057e9d1);
    /* 0057e9d1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057e9d4: jne 0x57ea1b */ if (!fZ) goto L_0057ea1b;
L_0057e9d6:; BB(0x0057e9d6);
    /* 0057e9d6: fld dword ptr [edi + 0x3ec] */ FPUSH(R_F32((u32)(r_edi+0x3ecu)));
    /* 0057e9dc: fsub dword ptr [0x927944] */ ST(0) = ST(0) - R_F32((u32)(0x927944u));
    /* 0057e9e2: fcom dword ptr [0x927940] */ fx_compare(ST(0), R_F32((u32)(0x927940u))); 
    /* 0057e9e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057e9ea: fstp dword ptr [edi + 0x3ec] */ W_F32((u32)(r_edi+0x3ecu), ST(0)); FPOP();
    /* 0057e9f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057e9f1: jae 0x57ea1b */ if (!fC) goto L_0057ea1b;
L_0057e9f3:; BB(0x0057e9f3);
    /* 0057e9f3: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0057e9f7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057e9fc: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0057ea00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057ea01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057ea02: ret  */ FN_RET(0x0057e9ac); r_esp += 4; return;
L_0057ea03:; BB(0x0057ea03);
    /* 0057ea03: movsx eax, word ptr [edi + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x344u));
    /* 0057ea0a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057ea0d: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 0057ea14: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0057ea17: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057ea19: jle 0x57ea1e */ if ((fZ||fS!=fO)) goto L_0057ea1e;
L_0057ea1b:; BB(0x0057ea1b);
    /* 0057ea1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057ea1c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057ea1d: ret  */ FN_RET(0x0057e9ac); r_esp += 4; return;
L_0057ea1e:; BB(0x0057ea1e);
    /* 0057ea1e: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea20: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0057ea23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea24: call 0x5787a4 */ r_esp -= 4; W32(r_esp, 0x57ea29u); f_005787a4();
    /* 0057ea29: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea2b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea2c: call 0x578538 */ r_esp -= 4; W32(r_esp, 0x57ea31u); f_00578538();
    /* 0057ea31: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057ea34: mov dword ptr [edi + 0x384], 4 */ W32((u32)(r_edi+0x384u), 0x4u);
    /* 0057ea3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057ea3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057ea40: ret  */ FN_RET(0x0057e9ac); r_esp += 4; return;
L_0057ea41:; BB(0x0057ea41);
    /* 0057ea41: mov ecx, edi */ r_ecx = r_edi;
    /* 0057ea43: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57ea48u); f_007aa094();
    /* 0057ea48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea4c: mov ecx, edi */ r_ecx = r_edi;
    /* 0057ea4e: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x57ea53u); f_00772b44();
    /* 0057ea53: fld dword ptr [0x927950] */ FPUSH(R_F32((u32)(0x927950u)));
    /* 0057ea59: fld dword ptr [edi + 0x40c] */ FPUSH(R_F32((u32)(r_edi+0x40cu)));
    /* 0057ea5f: fadd dword ptr [edi + 0x410] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x410u));
    /* 0057ea65: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0057ea67: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057ea69: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 0057ea6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057ea70: fcomp dword ptr [0x92794c] */ fx_compare(ST(0), R_F32((u32)(0x92794cu))); FPOP();
    /* 0057ea76: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057ea78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057ea7a: ja 0x57ea7e */ if ((!fC&&!fZ)) goto L_0057ea7e;
L_0057ea7c:; BB(0x0057ea7c);
    /* 0057ea7c: fst st(1) */ ST(1) = ST(0);
L_0057ea7e:; BB(0x0057ea7e);
    /* 0057ea7e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057ea80: fstp dword ptr [edi + 0x40c] */ W_F32((u32)(r_edi+0x40cu), ST(0)); FPOP();
    /* 0057ea86: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057ea87: jb 0x57ea1b */ if (fC) goto L_0057ea1b;
L_0057ea89:; BB(0x0057ea89);
    /* 0057ea89: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea8e: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0057ea91: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea92: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57ea97u); f_0050b510();
    /* 0057ea97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057ea99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea9b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea9c: push 0x10f */ { u32 v = 0x10fu; r_esp -= 4; W32(r_esp, v); }
    /* 0057eaa1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57eaa6u); f_00814298();
    /* 0057eaa6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057eaa9: mov dword ptr [edi + 0x384], 3 */ W32((u32)(r_edi+0x384u), 0x3u);
    /* 0057eab3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057eab4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057eab5: ret  */ FN_RET(0x0057e9ac); r_esp += 4; return;
L_0057eab6:; BB(0x0057eab6);
    /* 0057eab6: mov ecx, edi */ r_ecx = r_edi;
    /* 0057eab8: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57eabdu); f_007aa094();
    /* 0057eabd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057eabf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057eac1: mov ecx, edi */ r_ecx = r_edi;
    /* 0057eac3: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x57eac8u); f_00772b44();
    /* 0057eac8: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 0057eace: fcomp dword ptr [0x92794c] */ fx_compare(ST(0), R_F32((u32)(0x92794cu))); FPOP();
    /* 0057ead4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057ead6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057ead7: jb 0x57ea1b */ if (fC) goto L_0057ea1b;
L_0057eadd:; BB(0x0057eadd);
    /* 0057eadd: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057eae2: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0057eae5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057eae6: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57eaebu); f_0050b510();
    /* 0057eaeb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057eaee: mov dword ptr [edi + 0x384], 3 */ W32((u32)(r_edi+0x384u), 0x3u);
    /* 0057eaf8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057eaf9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057eafa: ret  */ FN_RET(0x0057e9ac); r_esp += 4; return;
L_0057eafb:; BB(0x0057eafb);
    /* 0057eafb: mov ecx, edi */ r_ecx = r_edi;
    /* 0057eafd: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x57eb02u); f_00787534();
    /* 0057eb02: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057eb03: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x57eb08u); f_008113e4();
    /* 0057eb08: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 0057eb0d: mov word ptr [edi + 0x344], ax */ W16((u32)(r_edi+0x344u), (u16)r_eax);
    /* 0057eb14: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0057eb17: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057eb19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057eb1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057eb1b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057eb1c: push 0x112 */ { u32 v = 0x112u; r_esp -= 4; W32(r_esp, v); }
    /* 0057eb21: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57eb26u); f_00814298();
    /* 0057eb26: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057eb29: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0057eb2c: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057eb31: je 0x57eb60 */ if (fZ) goto L_0057eb60;
L_0057eb33:; BB(0x0057eb33);
    /* 0057eb33: fld dword ptr [edi + 0x40c] */ FPUSH(R_F32((u32)(r_edi+0x40cu)));
    /* 0057eb39: mov dword ptr [edi + 0x384], 2 */ W32((u32)(r_edi+0x384u), 0x2u);
    /* 0057eb43: fchs  */ ST(0) = -ST(0);
    /* 0057eb45: fmul dword ptr [0x927948] */ ST(0) = ST(0) * R_F32((u32)(0x927948u));
    /* 0057eb4b: fstp dword ptr [edi + 0x410] */ W_F32((u32)(r_edi+0x410u), ST(0)); FPOP();
    /* 0057eb51: mov eax, 0xb */ r_eax = 0xbu;
    /* 0057eb56: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0057eb5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057eb5e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057eb5f: ret  */ FN_RET(0x0057e9ac); r_esp += 4; return;
L_0057eb60:; BB(0x0057eb60);
    /* 0057eb60: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 0057eb6a: mov eax, 4 */ r_eax = 0x4u;
    /* 0057eb6f: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0057eb76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057eb77: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057eb78: ret  */ FN_RET(0x0057e9ac); r_esp += 4; return;
}

void f_0057eb7c(void) /* sub_57EB7C */
{
    FN_ENTER(0x0057eb7c);
    /* 0057eb7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057eb7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057eb7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057eb7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057eb80: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057eb83: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057eb85: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 0057eb8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057eb8d: je 0x57ecad */ if (fZ) goto L_0057ecad;
L_0057eb93:; BB(0x0057eb93);
    /* 0057eb93: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057eb96: je 0x57ed02 */ if (fZ) goto L_0057ed02;
L_0057eb9c:; BB(0x0057eb9c);
    /* 0057eb9c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057eb9f: jne 0x57eddc */ if (!fZ) goto L_0057eddc;
L_0057eba5:; BB(0x0057eba5);
    /* 0057eba5: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0057eba8: mov edi, dword ptr [ebx + 0x390] */ r_edi = R32((u32)(r_ebx+0x390u));
    /* 0057ebae: movsx edx, word ptr [ebx + 0x346] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x346u));
    /* 0057ebb5: movsx eax, word ptr [ebx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0057ebbc: and ecx, 0xfffffdff */ {  u32 a = r_ecx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0057ebc2: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 0057ebc5: mov dword ptr [ebx + 0x380], 1 */ W32((u32)(r_ebx+0x380u), 0x1u);
    /* 0057ebcf: and edi, 0xfffffffe */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0057ebd2: mov dword ptr [ebx + 0x390], edi */ W32((u32)(r_ebx+0x390u), r_edi);
    /* 0057ebd8: mov ebp, edx */ r_ebp = r_edx;
    /* 0057ebda: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0057ebdc: mov esi, edx */ r_esi = r_edx;
    /* 0057ebde: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0057ebe0: shr esi, 0x1e */ { u32 c = (30u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0057ebe3: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0057ebe5: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0057ebe8: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057ebea: jle 0x57ec37 */ if ((fZ||fS!=fO)) goto L_0057ec37;
L_0057ebec:; BB(0x0057ebec);
    /* 0057ebec: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057ebef: jne 0x57ec37 */ if (!fZ) goto L_0057ec37;
L_0057ebf1:; BB(0x0057ebf1);
    /* 0057ebf1: movzx eax, word ptr [ebx + 0x2d8] */ r_eax = (u32)R16((u32)(r_ebx+0x2d8u));
    /* 0057ebf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ebf9: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x57ebfeu); f_007b4d18();
    /* 0057ebfe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057ebff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ec01: je 0x57ee18 */ if (fZ) goto L_0057ee18;
L_0057ec07:; BB(0x0057ec07);
    /* 0057ec07: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0057ec0a: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ec10: jne 0x57ede4 */ if (!fZ) goto L_0057ede4;
L_0057ec16:; BB(0x0057ec16);
    /* 0057ec16: movzx eax, word ptr [ebx + 0x2d8] */ r_eax = (u32)R16((u32)(r_ebx+0x2d8u));
    /* 0057ec1d: mov dword ptr [ebx + 0x37c], 0xa */ W32((u32)(r_ebx+0x37cu), 0xau);
    /* 0057ec27: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 0057ec2e: movsx eax, word ptr [ebx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0057ec35: jmp 0x57ec9e */ goto L_0057ec9e;
L_0057ec37:; BB(0x0057ec37);
    /* 0057ec37: test ecx, 0x1000000 */ {  u32 a = r_ecx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ec3d: je 0x57ec7b */ if (fZ) goto L_0057ec7b;
L_0057ec3f:; BB(0x0057ec3f);
    /* 0057ec3f: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ec45: je 0x57ec4f */ if (fZ) goto L_0057ec4f;
L_0057ec47:; BB(0x0057ec47);
    /* 0057ec47: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 0057ec4d: jmp 0x57ec73 */ goto L_0057ec73;
L_0057ec4f:; BB(0x0057ec4f);
    /* 0057ec4f: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0057ec56: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ec59: je 0x57ec6d */ if (fZ) goto L_0057ec6d;
L_0057ec5b:; BB(0x0057ec5b);
    /* 0057ec5b: mov dword ptr [ebx + 0x37c], 0xb */ W32((u32)(r_ebx+0x37cu), 0xbu);
    /* 0057ec65: mov dword ptr [ebx + 0x388], edx */ W32((u32)(r_ebx+0x388u), r_edx);
    /* 0057ec6b: jmp 0x57ec73 */ goto L_0057ec73;
L_0057ec6d:; BB(0x0057ec6d);
    /* 0057ec6d: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
L_0057ec73:; BB(0x0057ec73);
    /* 0057ec73: mov dword ptr [ebx + 0x380], edx */ W32((u32)(r_ebx+0x380u), r_edx);
    /* 0057ec79: jmp 0x57ec9e */ goto L_0057ec9e;
L_0057ec7b:; BB(0x0057ec7b);
    /* 0057ec7b: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ec81: jne 0x57ec9e */ if (!fZ) goto L_0057ec9e;
L_0057ec83:; BB(0x0057ec83);
    /* 0057ec83: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0057ec8a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ec8c: je 0x57ec9e */ if (fZ) goto L_0057ec9e;
L_0057ec8e:; BB(0x0057ec8e);
    /* 0057ec8e: mov dword ptr [ebx + 0x37c], 0 */ W32((u32)(r_ebx+0x37cu), 0x0u);
    /* 0057ec98: mov dword ptr [ebx + 0x388], edx */ W32((u32)(r_ebx+0x388u), r_edx);
L_0057ec9e:; BB(0x0057ec9e);
    /* 0057ec9e: mov word ptr [ebx + 0x346], ax */ W16((u32)(r_ebx+0x346u), (u16)r_eax);
    /* 0057eca5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057eca8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057eca9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057ecaa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057ecab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057ecac: ret  */ FN_RET(0x0057eb7c); r_esp += 4; return;
L_0057ecad:; BB(0x0057ecad);
    /* 0057ecad: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0057ecb0: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057ecb5: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ecba: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0057ecbd: je 0x57ecc6 */ if (fZ) goto L_0057ecc6;
L_0057ecbf:; BB(0x0057ecbf);
    /* 0057ecbf: mov eax, 0xa */ r_eax = 0xau;
    /* 0057ecc4: jmp 0x57eccb */ goto L_0057eccb;
L_0057ecc6:; BB(0x0057ecc6);
    /* 0057ecc6: mov eax, 3 */ r_eax = 0x3u;
L_0057eccb:; BB(0x0057eccb);
    /* 0057eccb: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ecd0: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0057ecd7: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 0057ecdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ecde: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57ece3u); f_0050b510();
    /* 0057ece3: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0057ece6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057ece8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ece9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ecea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057eceb: push 0x10f */ { u32 v = 0x10fu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ecf0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57ecf5u); f_00814298();
    /* 0057ecf5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057ecf8: mov dword ptr [ebx + 0x384], 1 */ W32((u32)(r_ebx+0x384u), 0x1u);
L_0057ed02:; BB(0x0057ed02);
    /* 0057ed02: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057ed04: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57ed09u); f_007aa094();
    /* 0057ed09: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0057ed0c: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ed11: je 0x57ed1e */ if (fZ) goto L_0057ed1e;
L_0057ed13:; BB(0x0057ed13);
    /* 0057ed13: fld dword ptr [0x927938] */ FPUSH(R_F32((u32)(0x927938u)));
    /* 0057ed19: jmp 0x57edab */ goto L_0057edab;
L_0057ed1e:; BB(0x0057ed1e);
    /* 0057ed1e: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 0057ed21: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 0057ed27: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 0057ed2d: mov ebp, dword ptr [ebx + 0x308] */ r_ebp = R32((u32)(r_ebx+0x308u));
    /* 0057ed33: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0057ed36: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0057ed39: fadd dword ptr [ebx + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x30cu));
    /* 0057ed3f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0057ed42: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057ed44: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0057ed48: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0057ed4c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0057ed50: fadd dword ptr [ebx + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x314u));
    /* 0057ed56: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0057ed5a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057ed5b: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x57ed60u); f_00771e14();
    /* 0057ed60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ed62: je 0x57ed7a */ if (fZ) goto L_0057ed7a;
L_0057ed64:; BB(0x0057ed64);
    /* 0057ed64: fld dword ptr [0x927938] */ FPUSH(R_F32((u32)(0x927938u)));
    /* 0057ed6a: fld dword ptr [0x927938] */ FPUSH(R_F32((u32)(0x927938u)));
    /* 0057ed70: fld dword ptr [0x927938] */ FPUSH(R_F32((u32)(0x927938u)));
    /* 0057ed76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057ed78: jmp 0x57ed93 */ goto L_0057ed93;
L_0057ed7a:; BB(0x0057ed7a);
    /* 0057ed7a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0057ed7c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057ed7e: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x57ed81u); call_ind(t); }
    /* 0057ed81: fld dword ptr [0x927938] */ FPUSH(R_F32((u32)(0x927938u)));
    /* 0057ed87: fld dword ptr [ebx + 0x30c] */ FPUSH(R_F32((u32)(r_ebx+0x30cu)));
    /* 0057ed8d: fld dword ptr [ebx + 0x314] */ FPUSH(R_F32((u32)(r_ebx+0x314u)));
L_0057ed93:; BB(0x0057ed93);
    /* 0057ed93: fld dword ptr [0x927934] */ FPUSH(R_F32((u32)(0x927934u)));
    /* 0057ed99: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0057ed9b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0057ed9d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057ed9f: fstp dword ptr [ebx + 0x30c] */ W_F32((u32)(r_ebx+0x30cu), ST(0)); FPOP();
    /* 0057eda5: fstp dword ptr [ebx + 0x314] */ W_F32((u32)(r_ebx+0x314u), ST(0)); FPOP();
L_0057edab:; BB(0x0057edab);
    /* 0057edab: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057edae: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0057edb1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057edb3: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0057edbb: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x57edc0u); f_00772b44();
    /* 0057edc0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057edc2: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x57edc7u); f_007b6880();
    /* 0057edc7: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 0057edcd: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057edd0: je 0x57eddc */ if (fZ) goto L_0057eddc;
L_0057edd2:; BB(0x0057edd2);
    /* 0057edd2: mov dword ptr [ebx + 0x384], 0xffffffff */ W32((u32)(r_ebx+0x384u), 0xffffffffu);
L_0057eddc:; BB(0x0057eddc);
    /* 0057eddc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057eddf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057ede0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057ede1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057ede2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057ede3: ret  */ FN_RET(0x0057eb7c); r_esp += 4; return;
L_0057ede4:; BB(0x0057ede4);
    /* 0057ede4: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0057ede7: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057edea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057edeb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057edec: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x57edf1u); f_0078ea50();
    /* 0057edf1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057edf4: fcomp dword ptr [0x92793c] */ fx_compare(ST(0), R_F32((u32)(0x92793cu))); FPOP();
    /* 0057edfa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057edfc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057edfd: jbe 0x57ec16 */ if ((fC||fZ)) goto L_0057ec16;
L_0057ee03:; BB(0x0057ee03);
    /* 0057ee03: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0057ee06: mov edi, dword ptr [ebx + 0x390] */ r_edi = R32((u32)(r_ebx+0x390u));
    /* 0057ee0c: movsx eax, word ptr [ebx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0057ee13: jmp 0x57ec37 */ goto L_0057ec37;
L_0057ee18:; BB(0x0057ee18);
    /* 0057ee18: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0057ee1b: mov edi, dword ptr [ebx + 0x390] */ r_edi = R32((u32)(r_ebx+0x390u));
    /* 0057ee21: movsx eax, word ptr [ebx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0057ee28: jmp 0x57ec37 */ goto L_0057ec37;
}

void f_0057ee30(void) /* sub_57EE30 */
{
    FN_ENTER(0x0057ee30);
    /* 0057ee30: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057ee31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057ee32: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057ee35: mov esi, ecx */ r_esi = r_ecx;
    /* 0057ee37: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ee39: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x57ee3eu); f_00770738();
    /* 0057ee3e: mov ebp, eax */ r_ebp = r_eax;
    /* 0057ee40: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0057ee43: mov edx, dword ptr [esi + 0x384] */ r_edx = R32((u32)(r_esi+0x384u));
    /* 0057ee49: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057ee4e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ee50: je 0x57f124 */ if (fZ) goto L_0057f124;
L_0057ee56:; BB(0x0057ee56);
    /* 0057ee56: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0057ee59: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ee5c: je 0x57ef53 */ if (fZ) goto L_0057ef53;
L_0057ee62:; BB(0x0057ee62);
    /* 0057ee62: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ee65: jne 0x57f11e */ if (!fZ) goto L_0057f11e;
L_0057ee6b:; BB(0x0057ee6b);
    /* 0057ee6b: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 0057ee71: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057ee74: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ee76: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ee7b: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ee80: push dword ptr [esi + 0x3e0] */ { u32 v = R32((u32)(r_esi+0x3e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057ee86: call 0x772054 */ r_esp -= 4; W32(r_esp, 0x57ee8bu); f_00772054();
    /* 0057ee8b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057ee8d: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ee8f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57ee94u); f_007aa094();
    /* 0057ee94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ee96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ee98: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ee9a: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x57ee9fu); f_00772b44();
    /* 0057ee9f: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057eea4: mov ecx, esi */ r_ecx = r_esi;
    /* 0057eea6: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x57eeabu); f_007aaa30();
    /* 0057eeab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057eead: jne 0x57eebf */ if (!fZ) goto L_0057eebf;
L_0057eeaf:; BB(0x0057eeaf);
    /* 0057eeaf: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057eeb4: mov ecx, esi */ r_ecx = r_esi;
    /* 0057eeb6: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x57eebbu); f_007aaa30();
    /* 0057eebb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057eebd: je 0x57eed4 */ if (fZ) goto L_0057eed4;
L_0057eebf:; BB(0x0057eebf);
    /* 0057eebf: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0057eec2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057eec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057eec5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057eec6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057eec7: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 0057eecc: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57eed1u); f_00814298();
    /* 0057eed1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057eed4:; BB(0x0057eed4);
    /* 0057eed4: fld dword ptr [esi + 0x3dc] */ FPUSH(R_F32((u32)(r_esi+0x3dcu)));
    /* 0057eeda: fadd dword ptr [esi + 0x3e0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3e0u));
    /* 0057eee0: fcom dword ptr [0x92792c] */ fx_compare(ST(0), R_F32((u32)(0x92792cu))); 
    /* 0057eee6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057eee8: fstp dword ptr [esi + 0x3dc] */ W_F32((u32)(r_esi+0x3dcu), ST(0)); FPOP();
    /* 0057eeee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057eeef: jbe 0x57ef3f */ if ((fC||fZ)) goto L_0057ef3f;
L_0057eef1:; BB(0x0057eef1);
    /* 0057eef1: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0057eef7: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0057eef9: mov ecx, esi */ r_ecx = r_esi;
    /* 0057eefb: call 0x52cd2c */ r_esp -= 4; W32(r_esp, 0x57ef00u); f_0052cd2c();
    /* 0057ef00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ef02: je 0x57ef1a */ if (fZ) goto L_0057ef1a;
L_0057ef04:; BB(0x0057ef04);
    /* 0057ef04: mov dword ptr [esi + 0x3d8], 0 */ W32((u32)(r_esi+0x3d8u), 0x0u);
    /* 0057ef0e: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 0057ef18: jmp 0x57ef3f */ goto L_0057ef3f;
L_0057ef1a:; BB(0x0057ef1a);
    /* 0057ef1a: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0057ef20: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057ef22: jne 0x57ef3f */ if (!fZ) goto L_0057ef3f;
L_0057ef24:; BB(0x0057ef24);
    /* 0057ef24: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0057ef2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ef2d: je 0x57ef3f */ if (fZ) goto L_0057ef3f;
L_0057ef2f:; BB(0x0057ef2f);
    /* 0057ef2f: mov dword ptr [esi + 0x37c], 0 */ W32((u32)(r_esi+0x37cu), 0x0u);
    /* 0057ef39: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
L_0057ef3f:; BB(0x0057ef3f);
    /* 0057ef3f: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ef41: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x57ef46u); f_007b6894();
    /* 0057ef46: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ef48: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x57ef4du); f_007b798c();
    /* 0057ef4d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057ef50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057ef51: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057ef52: ret  */ FN_RET(0x0057ee30); r_esp += 4; return;
L_0057ef53:; BB(0x0057ef53);
    /* 0057ef53: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ef55: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57ef5au); f_007aa094();
    /* 0057ef5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ef5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ef5e: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ef60: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x57ef65u); f_00772b44();
    /* 0057ef65: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ef6a: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ef6c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x57ef71u); f_007aaa30();
    /* 0057ef71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ef73: jne 0x57ef85 */ if (!fZ) goto L_0057ef85;
L_0057ef75:; BB(0x0057ef75);
    /* 0057ef75: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ef7a: mov ecx, esi */ r_ecx = r_esi;
    /* 0057ef7c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x57ef81u); f_007aaa30();
    /* 0057ef81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ef83: je 0x57ef9a */ if (fZ) goto L_0057ef9a;
L_0057ef85:; BB(0x0057ef85);
    /* 0057ef85: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0057ef88: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057ef8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ef8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ef8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ef8d: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ef92: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57ef97u); f_00814298();
    /* 0057ef97: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057ef9a:; BB(0x0057ef9a);
    /* 0057ef9a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ef9c: je 0x57f0a9 */ if (fZ) goto L_0057f0a9;
L_0057efa2:; BB(0x0057efa2);
    /* 0057efa2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0057efa5: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 0057efa8: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0057efab: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0057efae: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0057efb1: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0057efb5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0057efb9: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0057efbc: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x57efc1u); f_0082f9c4();
    /* 0057efc1: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0057efc4: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0057efc7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0057efc9: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0057efcd: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0057efd1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0057efd3: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0057efd5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057efd7: fcomp dword ptr [0x92791c] */ fx_compare(ST(0), R_F32((u32)(0x92791cu))); FPOP();
    /* 0057efdd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057efdf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057efe0: ja 0x57f0a5 */ if ((!fC&&!fZ)) goto L_0057f0a5;
L_0057efe6:; BB(0x0057efe6);
    /* 0057efe6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057efe8: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0057efea: fmul qword ptr [0x927868] */ ST(0) = ST(0) * R_F64((u32)(0x927868u));
    /* 0057eff0: fdiv qword ptr [0x927860] */ ST(0) = ST(0) / R_F64((u32)(0x927860u));
    /* 0057eff6: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0057effa: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0057efff: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057f004: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0057f008: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0057f00c: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0057f010: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0057f014: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0057f018: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057f01a: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057f01f: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057f022: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057f023: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x57f028u); f_007a9018();
    /* 0057f028: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057f02b: cmp eax, 0xaaa */ {  u32 a = r_eax; u32 b = 0xaaau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057f030: jge 0x57f0a9 */ if ((fS==fO)) goto L_0057f0a9;
L_0057f032:; BB(0x0057f032);
    /* 0057f032: movsx edx, word ptr [esi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 0057f039: movsx eax, word ptr [esi + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2bcu));
    /* 0057f040: mov ebp, eax */ r_ebp = r_eax;
    /* 0057f042: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0057f044: shr ebp, 0x1e */ { u32 c = (30u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 0057f047: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0057f049: sar ebp, 2 */ { u32 c = (2u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0057f04c: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057f04e: jg 0x57f057 */ if ((!fZ&&fS==fO)) goto L_0057f057;
L_0057f050:; BB(0x0057f050);
    /* 0057f050: mov edx, 0xa */ r_edx = 0xau;
    /* 0057f055: jmp 0x57f076 */ goto L_0057f076;
L_0057f057:; BB(0x0057f057);
    /* 0057f057: mov eax, dword ptr [esi + 0x3e8] */ r_eax = R32((u32)(r_esi+0x3e8u));
    /* 0057f05d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f05f: je 0x57f068 */ if (fZ) goto L_0057f068;
L_0057f061:; BB(0x0057f061);
    /* 0057f061: mov edx, 0xa */ r_edx = 0xau;
    /* 0057f066: jmp 0x57f06d */ goto L_0057f06d;
L_0057f068:; BB(0x0057f068);
    /* 0057f068: mov edx, 9 */ r_edx = 0x9u;
L_0057f06d:; BB(0x0057f06d);
    /* 0057f06d: xor eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057f070: mov dword ptr [esi + 0x3e8], eax */ W32((u32)(r_esi+0x3e8u), r_eax);
L_0057f076:; BB(0x0057f076);
    /* 0057f076: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0057f07c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057f07e: jne 0x57f11e */ if (!fZ) goto L_0057f11e;
L_0057f084:; BB(0x0057f084);
    /* 0057f084: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0057f08b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f08d: je 0x57f11e */ if (fZ) goto L_0057f11e;
L_0057f093:; BB(0x0057f093);
    /* 0057f093: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
    /* 0057f099: mov dword ptr [esi + 0x37c], edx */ W32((u32)(r_esi+0x37cu), r_edx);
    /* 0057f09f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057f0a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057f0a3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057f0a4: ret  */ FN_RET(0x0057ee30); r_esp += 4; return;
L_0057f0a5:; BB(0x0057f0a5);
    /* 0057f0a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057f0a7: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0057f0a9:; BB(0x0057f0a9);
    /* 0057f0a9: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0057f0af: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 0057f0b2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0057f0b4: mov edx, ebp */ r_edx = r_ebp;
    /* 0057f0b6: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0057f0b9: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0057f0bb: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0057f0bd: add ebp, dword ptr [esi + 0x60] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x60u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0057f0c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057f0c1: push dword ptr [esi + 0x3e0] */ { u32 v = R32((u32)(r_esi+0x3e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057f0c7: mov dword ptr [esi + 0x60], ebp */ W32((u32)(r_esi+0x60u), r_ebp);
    /* 0057f0ca: mov ecx, esi */ r_ecx = r_esi;
    /* 0057f0cc: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x57f0cfu); call_ind(t); }
    /* 0057f0cf: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0057f0d1: mov ecx, esi */ r_ecx = r_esi;
    /* 0057f0d3: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x57f0d6u); call_ind(t); }
    /* 0057f0d6: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0057f0dc: mov ebp, dword ptr [eax + 8] */ r_ebp = R32((u32)(r_eax+0x8u));
    /* 0057f0df: mov edx, ebp */ r_edx = r_ebp;
    /* 0057f0e1: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0057f0e4: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0057f0e6: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0057f0e8: add ebp, dword ptr [esi + 0x3d8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x3d8u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0057f0ee: cmp ebp, 0x10000 */ {  u32 a = r_ebp; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057f0f4: mov dword ptr [esi + 0x3d8], ebp */ W32((u32)(r_esi+0x3d8u), r_ebp);
    /* 0057f0fa: jle 0x57f110 */ if ((fZ||fS!=fO)) goto L_0057f110;
L_0057f0fc:; BB(0x0057f0fc);
    /* 0057f0fc: mov dword ptr [esi + 0x3dc], 0 */ W32((u32)(r_esi+0x3dcu), 0x0u);
    /* 0057f106: mov dword ptr [esi + 0x384], 2 */ W32((u32)(r_esi+0x384u), 0x2u);
L_0057f110:; BB(0x0057f110);
    /* 0057f110: mov ecx, esi */ r_ecx = r_esi;
    /* 0057f112: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x57f117u); f_007b6894();
    /* 0057f117: mov ecx, esi */ r_ecx = r_esi;
    /* 0057f119: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x57f11eu); f_007b798c();
L_0057f11e:; BB(0x0057f11e);
    /* 0057f11e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057f121: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057f122: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057f123: ret  */ FN_RET(0x0057ee30); r_esp += 4; return;
L_0057f124:; BB(0x0057f124);
    /* 0057f124: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 0057f12a: mov dword ptr [esi + 0x3d8], 0 */ W32((u32)(r_esi+0x3d8u), 0x0u);
    /* 0057f134: and edx, 0xfffbffff */ {  u32 a = r_edx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057f13a: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 0057f140: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057f145: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0057f148: mov edx, 1 */ r_edx = 0x1u;
    /* 0057f14d: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 0057f154: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057f156: je 0x57f17c */ if (fZ) goto L_0057f17c;
L_0057f158:; BB(0x0057f158);
    /* 0057f158: mov edx, dword ptr [ebp + 0x300] */ r_edx = R32((u32)(r_ebp+0x300u));
    /* 0057f15e: mov dword ptr [esi + 0x2a4], edx */ W32((u32)(r_esi+0x2a4u), r_edx);
    /* 0057f164: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0057f16a: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0057f170: mov edx, dword ptr [ebp + 0x308] */ r_edx = R32((u32)(r_ebp+0x308u));
    /* 0057f176: mov dword ptr [esi + 0x2ac], edx */ W32((u32)(r_esi+0x2acu), r_edx);
L_0057f17c:; BB(0x0057f17c);
    /* 0057f17c: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 0057f186: jmp 0x57ef53 */ goto L_0057ef53;
}

