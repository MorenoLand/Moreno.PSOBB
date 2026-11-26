#include "protos.h"

void f_00614318(void)
{
    FN_ENTER(0x00614318);
    /* 00614318: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614319: mov ebp, esp */ r_ebp = r_esp;
    /* 0061431b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061431d: push 0x8e1174 */ { u32 v = 0x8e1174u; r_esp -= 4; W32(r_esp, v); }
    /* 00614322: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00614328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614329: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00614330: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00614333: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00614336: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00614339: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061433c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061433f: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00614344: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061434b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x614350u); f_005caba4();
    /* 00614350: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00614351: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00614354: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00614356: je 0x614389 */ if (fZ) goto L_00614389;
L_00614358:; BB(0x00614358);
    /* 00614358: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061435f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00614366: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00614369: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061436c: call 0x614390 */ r_esp -= 4; W32(r_esp, 0x614371u); f_00614390();
    /* 00614371: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00614374: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061437b:; BB(0x0061437b);
    /* 0061437b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061437e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00614385: mov esp, ebp */ r_esp = r_ebp;
    /* 00614387: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00614388: ret  */ FN_RET(0x00614318); r_esp += 4; return;
L_00614389:; BB(0x00614389);
    /* 00614389: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061438b: jmp 0x61437b */ goto L_0061437b;
}

void f_00614390(void) /* sub_614390 */
{
    FN_ENTER(0x00614390);
    /* 00614390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614391: mov ebp, esp */ r_ebp = r_esp;
    /* 00614393: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00614395: push 0x8e1190 */ { u32 v = 0x8e1190u; r_esp -= 4; W32(r_esp, v); }
    /* 0061439a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006143a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006143a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006143a8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006143ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006143ae: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006143b1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006143b4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006143b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006143ba: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006143bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006143c0: call 0x613bfc */ r_esp -= 4; W32(r_esp, 0x6143c5u); f_00613bfc();
    /* 006143c5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006143cc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006143cf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006143d2: mov dword ptr [ecx], 0xb25338 */ W32((u32)(r_ecx), 0xb25338u);
    /* 006143d8: mov eax, dword ptr [0x9c495c] */ r_eax = R32((u32)(0x9c495cu));
    /* 006143dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006143de: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006143e1: call dword ptr [0xb2534c] */ { u32 t = R32((u32)(0xb2534cu)); r_esp -= 4; W32(r_esp, 0x6143e7u); call_ind(t); }
    /* 006143e7: mov ecx, dword ptr [0xa8ea78] */ r_ecx = R32((u32)(0xa8ea78u));
    /* 006143ed: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006143ef: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6143f4u); f_005b8610();
    /* 006143f4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006143f7: mov ecx, dword ptr [0xa8ea78] */ r_ecx = R32((u32)(0xa8ea78u));
    /* 006143fd: mov dword ptr [edx + 0x94], 0x42700000 */ W32((u32)(r_edx+0x94u), 0x42700000u);
    /* 00614407: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0061440a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0061440c: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x614411u); f_005b8624();
    /* 00614411: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00614414: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00614417: mov eax, edx */ r_eax = r_edx;
    /* 00614419: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061441c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00614423: mov esp, ebp */ r_esp = r_ebp;
    /* 00614425: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00614426: ret 4 */ FN_RET(0x00614390); r_esp += 8; return;
}

void f_0061442c(void) /* sub_61442C */
{
    FN_ENTER(0x0061442c);
    /* 0061442c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061442d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00614430: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00614432: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00614434: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00614436: push dword ptr [ebx + 0x94] */ { u32 v = R32((u32)(r_ebx+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061443c: push dword ptr [ebx + 0x90] */ { u32 v = R32((u32)(r_ebx+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 00614442: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x614445u); call_ind(t); }
    /* 00614445: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00614447: je 0x614500 */ if (fZ) goto L_00614500;
L_0061444d:; BB(0x0061444d);
    /* 0061444d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x614452u); f_0082d7b0();
    /* 00614452: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00614455: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61445au); f_0082d838();
    /* 0061445a: mov edx, dword ptr [ebx + 0x9c] */ r_edx = R32((u32)(r_ebx+0x9cu));
    /* 00614460: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00614462: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00614464: jle 0x6144fb */ if ((fZ||fS!=fO)) goto L_006144fb;
L_0061446a:; BB(0x0061446a);
    /* 0061446a: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0061446e: mov esi, eax */ r_esi = r_eax;
    /* 00614470: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00614473: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00614476: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00614478: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0061447b: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061447d: mov edi, ebx */ r_edi = r_ebx;
    /* 0061447f: mov ebx, edx */ r_ebx = r_edx;
L_00614481:; BB(0x00614481);
    /* 00614481: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 00614487: mov ecx, dword ptr [eax + esi*4] */ r_ecx = R32((u32)(r_eax+r_esi*4));
    /* 0061448a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61448fu); f_00829cc8();
    /* 0061448f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x614494u); f_0082d7b0();
    /* 00614494: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00614496: add ecx, dword ptr [edi + 0xa8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0xa8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061449c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6144a1u); f_0082d838();
    /* 006144a1: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006144a7: mov edx, dword ptr [ebx + eax + 8] */ r_edx = R32((u32)(r_ebx+r_eax+0x8u));
    /* 006144ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006144ad: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x6144b2u); f_00830c04();
    /* 006144b2: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006144b8: mov edx, dword ptr [ebx + eax] */ r_edx = R32((u32)(r_ebx+r_eax));
    /* 006144bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006144bd: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x6144c2u); f_0082e9e4();
    /* 006144c2: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006144c8: mov edx, dword ptr [ebx + eax + 4] */ r_edx = R32((u32)(r_ebx+r_eax+0x4u));
    /* 006144cc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006144ce: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6144d3u); f_0082d8bc();
    /* 006144d3: mov eax, dword ptr [edi + 0xa0] */ r_eax = R32((u32)(r_edi+0xa0u));
    /* 006144d9: mov ecx, dword ptr [eax + esi*4] */ r_ecx = R32((u32)(r_eax+r_esi*4));
    /* 006144dc: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x6144e1u); f_00831758();
    /* 006144e1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6144e6u); f_0082da80();
    /* 006144e6: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006144e9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006144ec: cmp esi, dword ptr [edi + 0x9c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x9cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006144f2: jl 0x614481 */ if ((fS!=fO)) goto L_00614481;
L_006144f4:; BB(0x006144f4);
    /* 006144f4: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006144f8: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_006144fb:; BB(0x006144fb);
    /* 006144fb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x614500u); f_0082da80();
L_00614500:; BB(0x00614500);
    /* 00614500: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00614503: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00614504: ret  */ FN_RET(0x0061442c); r_esp += 4; return;
}

void f_00614508(void) /* sub_614508 */
{
    FN_ENTER(0x00614508);
    /* 00614508: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00614509: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061450c: mov edx, ecx */ r_edx = r_ecx;
    /* 0061450e: mov ebx, dword ptr [edx + 0x9c] */ r_ebx = R32((u32)(r_edx+0x9cu));
    /* 00614514: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00614516: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00614518: jle 0x61483b */ if ((fZ||fS!=fO)) goto L_0061483b;
L_0061451e:; BB(0x0061451e);
    /* 0061451e: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00614522: mov esi, eax */ r_esi = r_eax;
    /* 00614524: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00614528: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0061452c: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0061452f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00614531: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 00614534: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00614536: mov edi, edx */ r_edi = r_edx;
L_00614538:; BB(0x00614538);
    /* 00614538: fld dword ptr [0x930104] */ FPUSH(R_F32((u32)(0x930104u)));
    /* 0061453e: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 00614544: mov ecx, dword ptr [edi + 0xb4] */ r_ecx = R32((u32)(r_edi+0xb4u));
    /* 0061454a: mov ebp, dword ptr [ebx + ecx] */ r_ebp = R32((u32)(r_ebx+r_ecx));
    /* 0061454d: add dword ptr [ebx + eax], ebp */ { u32 ad = (u32)(r_ebx+r_eax);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00614550: mov ebp, dword ptr [edi + 0xb0] */ r_ebp = R32((u32)(r_edi+0xb0u));
    /* 00614556: mov ecx, dword ptr [edi + 0xb4] */ r_ecx = R32((u32)(r_edi+0xb4u));
    /* 0061455c: mov ecx, dword ptr [ebx + ecx + 4] */ r_ecx = R32((u32)(r_ebx+r_ecx+0x4u));
    /* 00614560: add dword ptr [ebx + ebp + 4], ecx */ { u32 ad = (u32)(r_ebx+r_ebp+0x4u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00614564: mov ebp, dword ptr [edi + 0xb0] */ r_ebp = R32((u32)(r_edi+0xb0u));
    /* 0061456a: mov ecx, dword ptr [edi + 0xb4] */ r_ecx = R32((u32)(r_edi+0xb4u));
    /* 00614570: mov ecx, dword ptr [ebx + ecx + 8] */ r_ecx = R32((u32)(r_ebx+r_ecx+0x8u));
    /* 00614574: add dword ptr [ebx + ebp + 8], ecx */ { u32 ad = (u32)(r_ebx+r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00614578: mov ebp, dword ptr [edi + 0xa8] */ r_ebp = R32((u32)(r_edi+0xa8u));
    /* 0061457e: mov ecx, dword ptr [edi + 0xac] */ r_ecx = R32((u32)(r_edi+0xacu));
    /* 00614584: fld dword ptr [ebp + ebx + 4] */ FPUSH(R_F32((u32)(r_ebp+r_ebx+0x4u)));
    /* 00614588: fadd dword ptr [ecx + esi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_esi*4));
    /* 0061458b: fstp dword ptr [ebp + ebx + 4] */ W_F32((u32)(r_ebp+r_ebx+0x4u), ST(0)); FPOP();
    /* 0061458f: mov ecx, dword ptr [edi + 0xa8] */ r_ecx = R32((u32)(r_edi+0xa8u));
    /* 00614595: fcomp dword ptr [ebx + ecx + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebx+r_ecx+0x4u))); FPOP();
    /* 00614599: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061459b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061459c: jae 0x61481d */ if (!fC) goto L_0061481d;
L_006145a2:; BB(0x006145a2);
    /* 006145a2: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6145a7u); f_008587a5();
    /* 006145a7: mov ecx, dword ptr [0xa8ea78] */ r_ecx = R32((u32)(0xa8ea78u));
    /* 006145ad: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006145b0: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006145b3: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 006145b9: fmul dword ptr [0x930118] */ ST(0) = ST(0) * R_F32((u32)(0x930118u));
    /* 006145bf: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006145c3: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006145c8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006145cd: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006145d1: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006145d5: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 006145d9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006145dd: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 006145e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006145e2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6145e7u); f_005b8610();
    /* 006145e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006145e8: mov ecx, dword ptr [edi + 0xa0] */ r_ecx = R32((u32)(r_edi+0xa0u));
    /* 006145ee: mov dword ptr [ecx + esi*4], eax */ W32((u32)(r_ecx+r_esi*4), r_eax);
    /* 006145f1: mov ecx, dword ptr [0xa8ea78] */ r_ecx = R32((u32)(0xa8ea78u));
    /* 006145f7: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6145fcu); f_005b8624();
    /* 006145fc: mov ecx, dword ptr [edi + 0xa4] */ r_ecx = R32((u32)(r_edi+0xa4u));
    /* 00614602: mov dword ptr [ecx + esi*4], eax */ W32((u32)(r_ecx+r_esi*4), r_eax);
    /* 00614605: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x61460au); f_008587a5();
    /* 0061460a: mov ecx, dword ptr [edi + 0xa8] */ r_ecx = R32((u32)(r_edi+0xa8u));
    /* 00614610: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00614614: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00614618: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 0061461e: fmul dword ptr [edi + 0x98] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x98u));
    /* 00614624: fstp dword ptr [ebx + ecx] */ W_F32((u32)(r_ebx+r_ecx), ST(0)); FPOP();
    /* 00614627: mov ebp, dword ptr [edi + 0xa8] */ r_ebp = R32((u32)(r_edi+0xa8u));
    /* 0061462d: mov dword ptr [ebx + ebp + 4], 0 */ W32((u32)(r_ebx+r_ebp+0x4u), 0x0u);
    /* 00614635: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x61463au); f_008587a5();
    /* 0061463a: mov ecx, dword ptr [edi + 0xa8] */ r_ecx = R32((u32)(r_edi+0xa8u));
    /* 00614640: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00614644: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00614648: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 0061464e: fmul dword ptr [edi + 0x98] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x98u));
    /* 00614654: fstp dword ptr [ebx + ecx + 8] */ W_F32((u32)(r_ebx+r_ecx+0x8u), ST(0)); FPOP();
    /* 00614658: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x61465du); f_008587a5();
    /* 0061465d: fld dword ptr [edi + 0x6c] */ FPUSH(R_F32((u32)(r_edi+0x6cu)));
    /* 00614660: fmul dword ptr [0x930110] */ ST(0) = ST(0) * R_F32((u32)(0x930110u));
    /* 00614666: mov ecx, dword ptr [edi + 0xac] */ r_ecx = R32((u32)(r_edi+0xacu));
    /* 0061466c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00614670: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00614674: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 0061467a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0061467c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0061467e: fstp dword ptr [ecx + esi*4] */ W_F32((u32)(r_ecx+r_esi*4), ST(0)); FPOP();
    /* 00614681: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614686u); f_008587a5();
    /* 00614686: mov ebp, dword ptr [edi + 0xb0] */ r_ebp = R32((u32)(r_edi+0xb0u));
    /* 0061468c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00614690: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00614694: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 0061469a: fmul dword ptr [0x93010c] */ ST(0) = ST(0) * R_F32((u32)(0x93010cu));
    /* 006146a0: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006146a4: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006146a9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006146ae: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006146b2: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006146b6: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 006146ba: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006146be: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006146c2: mov dword ptr [ebx + ebp], ecx */ W32((u32)(r_ebx+r_ebp), r_ecx);
    /* 006146c5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6146cau); f_008587a5();
    /* 006146ca: mov ebp, dword ptr [edi + 0xb0] */ r_ebp = R32((u32)(r_edi+0xb0u));
    /* 006146d0: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006146d4: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 006146d8: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 006146de: fmul dword ptr [0x93010c] */ ST(0) = ST(0) * R_F32((u32)(0x93010cu));
    /* 006146e4: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006146e8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006146ed: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006146f2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006146f6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006146fa: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 006146fe: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00614702: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00614706: mov dword ptr [ebx + ebp + 4], ecx */ W32((u32)(r_ebx+r_ebp+0x4u), r_ecx);
    /* 0061470a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x61470fu); f_008587a5();
    /* 0061470f: mov ebp, dword ptr [edi + 0xb0] */ r_ebp = R32((u32)(r_edi+0xb0u));
    /* 00614715: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00614719: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0061471d: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 00614723: fmul dword ptr [0x93010c] */ ST(0) = ST(0) * R_F32((u32)(0x93010cu));
    /* 00614729: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0061472d: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00614732: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00614737: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0061473b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0061473f: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00614743: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00614747: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0061474b: mov dword ptr [ebx + ebp + 8], ecx */ W32((u32)(r_ebx+r_ebp+0x8u), r_ecx);
    /* 0061474f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614754u); f_008587a5();
    /* 00614754: mov ebp, dword ptr [edi + 0xb4] */ r_ebp = R32((u32)(r_edi+0xb4u));
    /* 0061475a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0061475e: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00614762: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 00614768: fmul dword ptr [0x930108] */ ST(0) = ST(0) * R_F32((u32)(0x930108u));
    /* 0061476e: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00614772: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00614777: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061477c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00614780: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00614784: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00614788: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0061478c: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00614790: mov dword ptr [ebx + ebp], ecx */ W32((u32)(r_ebx+r_ebp), r_ecx);
    /* 00614793: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614798u); f_008587a5();
    /* 00614798: mov ebp, dword ptr [edi + 0xb4] */ r_ebp = R32((u32)(r_edi+0xb4u));
    /* 0061479e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006147a2: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 006147a6: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 006147ac: fmul dword ptr [0x930108] */ ST(0) = ST(0) * R_F32((u32)(0x930108u));
    /* 006147b2: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006147b6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006147bb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006147c0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006147c4: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006147c8: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 006147cc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006147d0: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006147d4: mov dword ptr [ebx + ebp + 4], ecx */ W32((u32)(r_ebx+r_ebp+0x4u), r_ecx);
    /* 006147d8: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6147ddu); f_008587a5();
    /* 006147dd: mov ebp, dword ptr [edi + 0xb4] */ r_ebp = R32((u32)(r_edi+0xb4u));
    /* 006147e3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006147e7: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 006147eb: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 006147f1: fmul dword ptr [0x930108] */ ST(0) = ST(0) * R_F32((u32)(0x930108u));
    /* 006147f7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006147fb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00614800: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00614805: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00614809: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0061480d: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00614811: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00614815: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00614819: mov dword ptr [ebx + ebp + 8], ecx */ W32((u32)(r_ebx+r_ebp+0x8u), r_ecx);
L_0061481d:; BB(0x0061481d);
    /* 0061481d: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00614820: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00614823: cmp esi, dword ptr [edi + 0x9c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x9cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00614829: jl 0x614538 */ if ((fS!=fO)) goto L_00614538;
L_0061482f:; BB(0x0061482f);
    /* 0061482f: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00614833: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00614837: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_0061483b:; BB(0x0061483b);
    /* 0061483b: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061483e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061483f: ret  */ FN_RET(0x00614508); r_esp += 4; return;
}

void f_00614800(void)
{
    FN_ENTER(0x00614800);
    goto L_00614800;
L_00614538:; BB(0x00614538);
    /* 00614538: fld dword ptr [0x930104] */ FPUSH(R_F32((u32)(0x930104u)));
    /* 0061453e: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 00614544: mov ecx, dword ptr [edi + 0xb4] */ r_ecx = R32((u32)(r_edi+0xb4u));
    /* 0061454a: mov ebp, dword ptr [ebx + ecx] */ r_ebp = R32((u32)(r_ebx+r_ecx));
    /* 0061454d: add dword ptr [ebx + eax], ebp */ { u32 ad = (u32)(r_ebx+r_eax);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00614550: mov ebp, dword ptr [edi + 0xb0] */ r_ebp = R32((u32)(r_edi+0xb0u));
    /* 00614556: mov ecx, dword ptr [edi + 0xb4] */ r_ecx = R32((u32)(r_edi+0xb4u));
    /* 0061455c: mov ecx, dword ptr [ebx + ecx + 4] */ r_ecx = R32((u32)(r_ebx+r_ecx+0x4u));
    /* 00614560: add dword ptr [ebx + ebp + 4], ecx */ { u32 ad = (u32)(r_ebx+r_ebp+0x4u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00614564: mov ebp, dword ptr [edi + 0xb0] */ r_ebp = R32((u32)(r_edi+0xb0u));
    /* 0061456a: mov ecx, dword ptr [edi + 0xb4] */ r_ecx = R32((u32)(r_edi+0xb4u));
    /* 00614570: mov ecx, dword ptr [ebx + ecx + 8] */ r_ecx = R32((u32)(r_ebx+r_ecx+0x8u));
    /* 00614574: add dword ptr [ebx + ebp + 8], ecx */ { u32 ad = (u32)(r_ebx+r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00614578: mov ebp, dword ptr [edi + 0xa8] */ r_ebp = R32((u32)(r_edi+0xa8u));
    /* 0061457e: mov ecx, dword ptr [edi + 0xac] */ r_ecx = R32((u32)(r_edi+0xacu));
    /* 00614584: fld dword ptr [ebp + ebx + 4] */ FPUSH(R_F32((u32)(r_ebp+r_ebx+0x4u)));
    /* 00614588: fadd dword ptr [ecx + esi*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_esi*4));
    /* 0061458b: fstp dword ptr [ebp + ebx + 4] */ W_F32((u32)(r_ebp+r_ebx+0x4u), ST(0)); FPOP();
    /* 0061458f: mov ecx, dword ptr [edi + 0xa8] */ r_ecx = R32((u32)(r_edi+0xa8u));
    /* 00614595: fcomp dword ptr [ebx + ecx + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebx+r_ecx+0x4u))); FPOP();
    /* 00614599: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061459b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061459c: jae 0x61481d */ if (!fC) goto L_0061481d;
L_006145a2:; BB(0x006145a2);
    /* 006145a2: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6145a7u); f_008587a5();
    /* 006145a7: mov ecx, dword ptr [0xa8ea78] */ r_ecx = R32((u32)(0xa8ea78u));
    /* 006145ad: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006145b0: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006145b3: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 006145b9: fmul dword ptr [0x930118] */ ST(0) = ST(0) * R_F32((u32)(0x930118u));
    /* 006145bf: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006145c3: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006145c8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006145cd: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006145d1: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006145d5: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 006145d9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006145dd: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 006145e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006145e2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6145e7u); f_005b8610();
    /* 006145e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006145e8: mov ecx, dword ptr [edi + 0xa0] */ r_ecx = R32((u32)(r_edi+0xa0u));
    /* 006145ee: mov dword ptr [ecx + esi*4], eax */ W32((u32)(r_ecx+r_esi*4), r_eax);
    /* 006145f1: mov ecx, dword ptr [0xa8ea78] */ r_ecx = R32((u32)(0xa8ea78u));
    /* 006145f7: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6145fcu); f_005b8624();
    /* 006145fc: mov ecx, dword ptr [edi + 0xa4] */ r_ecx = R32((u32)(r_edi+0xa4u));
    /* 00614602: mov dword ptr [ecx + esi*4], eax */ W32((u32)(r_ecx+r_esi*4), r_eax);
    /* 00614605: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x61460au); f_008587a5();
    /* 0061460a: mov ecx, dword ptr [edi + 0xa8] */ r_ecx = R32((u32)(r_edi+0xa8u));
    /* 00614610: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00614614: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00614618: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 0061461e: fmul dword ptr [edi + 0x98] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x98u));
    /* 00614624: fstp dword ptr [ebx + ecx] */ W_F32((u32)(r_ebx+r_ecx), ST(0)); FPOP();
    /* 00614627: mov ebp, dword ptr [edi + 0xa8] */ r_ebp = R32((u32)(r_edi+0xa8u));
    /* 0061462d: mov dword ptr [ebx + ebp + 4], 0 */ W32((u32)(r_ebx+r_ebp+0x4u), 0x0u);
    /* 00614635: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x61463au); f_008587a5();
    /* 0061463a: mov ecx, dword ptr [edi + 0xa8] */ r_ecx = R32((u32)(r_edi+0xa8u));
    /* 00614640: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00614644: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00614648: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 0061464e: fmul dword ptr [edi + 0x98] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x98u));
    /* 00614654: fstp dword ptr [ebx + ecx + 8] */ W_F32((u32)(r_ebx+r_ecx+0x8u), ST(0)); FPOP();
    /* 00614658: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x61465du); f_008587a5();
    /* 0061465d: fld dword ptr [edi + 0x6c] */ FPUSH(R_F32((u32)(r_edi+0x6cu)));
    /* 00614660: fmul dword ptr [0x930110] */ ST(0) = ST(0) * R_F32((u32)(0x930110u));
    /* 00614666: mov ecx, dword ptr [edi + 0xac] */ r_ecx = R32((u32)(r_edi+0xacu));
    /* 0061466c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00614670: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00614674: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 0061467a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0061467c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0061467e: fstp dword ptr [ecx + esi*4] */ W_F32((u32)(r_ecx+r_esi*4), ST(0)); FPOP();
    /* 00614681: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614686u); f_008587a5();
    /* 00614686: mov ebp, dword ptr [edi + 0xb0] */ r_ebp = R32((u32)(r_edi+0xb0u));
    /* 0061468c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00614690: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00614694: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 0061469a: fmul dword ptr [0x93010c] */ ST(0) = ST(0) * R_F32((u32)(0x93010cu));
    /* 006146a0: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006146a4: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006146a9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006146ae: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006146b2: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006146b6: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 006146ba: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006146be: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006146c2: mov dword ptr [ebx + ebp], ecx */ W32((u32)(r_ebx+r_ebp), r_ecx);
    /* 006146c5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6146cau); f_008587a5();
    /* 006146ca: mov ebp, dword ptr [edi + 0xb0] */ r_ebp = R32((u32)(r_edi+0xb0u));
    /* 006146d0: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006146d4: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 006146d8: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 006146de: fmul dword ptr [0x93010c] */ ST(0) = ST(0) * R_F32((u32)(0x93010cu));
    /* 006146e4: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006146e8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006146ed: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006146f2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006146f6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006146fa: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 006146fe: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00614702: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00614706: mov dword ptr [ebx + ebp + 4], ecx */ W32((u32)(r_ebx+r_ebp+0x4u), r_ecx);
    /* 0061470a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x61470fu); f_008587a5();
    /* 0061470f: mov ebp, dword ptr [edi + 0xb0] */ r_ebp = R32((u32)(r_edi+0xb0u));
    /* 00614715: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00614719: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0061471d: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 00614723: fmul dword ptr [0x93010c] */ ST(0) = ST(0) * R_F32((u32)(0x93010cu));
    /* 00614729: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0061472d: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00614732: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00614737: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0061473b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0061473f: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00614743: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00614747: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0061474b: mov dword ptr [ebx + ebp + 8], ecx */ W32((u32)(r_ebx+r_ebp+0x8u), r_ecx);
    /* 0061474f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614754u); f_008587a5();
    /* 00614754: mov ebp, dword ptr [edi + 0xb4] */ r_ebp = R32((u32)(r_edi+0xb4u));
    /* 0061475a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0061475e: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00614762: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 00614768: fmul dword ptr [0x930108] */ ST(0) = ST(0) * R_F32((u32)(0x930108u));
    /* 0061476e: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00614772: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00614777: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061477c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00614780: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00614784: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00614788: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0061478c: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00614790: mov dword ptr [ebx + ebp], ecx */ W32((u32)(r_ebx+r_ebp), r_ecx);
    /* 00614793: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614798u); f_008587a5();
    /* 00614798: mov ebp, dword ptr [edi + 0xb4] */ r_ebp = R32((u32)(r_edi+0xb4u));
    /* 0061479e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006147a2: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 006147a6: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 006147ac: fmul dword ptr [0x930108] */ ST(0) = ST(0) * R_F32((u32)(0x930108u));
    /* 006147b2: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006147b6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006147bb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006147c0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006147c4: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006147c8: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 006147cc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006147d0: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006147d4: mov dword ptr [ebx + ebp + 4], ecx */ W32((u32)(r_ebx+r_ebp+0x4u), r_ecx);
    /* 006147d8: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x6147ddu); f_008587a5();
    /* 006147dd: mov ebp, dword ptr [edi + 0xb4] */ r_ebp = R32((u32)(r_edi+0xb4u));
    /* 006147e3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006147e7: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 006147eb: fdiv dword ptr [0x93011c] */ ST(0) = ST(0) / R_F32((u32)(0x93011cu));
    /* 006147f1: fmul dword ptr [0x930108] */ ST(0) = ST(0) * R_F32((u32)(0x930108u));
    /* 006147f7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006147fb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
L_00614800:; BB(0x00614800);
    /* 00614800: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00614805: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00614809: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0061480d: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00614811: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00614815: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00614819: mov dword ptr [ebx + ebp + 8], ecx */ W32((u32)(r_ebx+r_ebp+0x8u), r_ecx);
L_0061481d:; BB(0x0061481d);
    /* 0061481d: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00614820: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00614823: cmp esi, dword ptr [edi + 0x9c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x9cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00614829: jl 0x614538 */ if ((fS!=fO)) goto L_00614538;
L_0061482f:; BB(0x0061482f);
    /* 0061482f: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00614833: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00614837: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0061483b: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061483e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061483f: ret  */ FN_RET(0x00614800); r_esp += 4; return;
}

void f_00614840(void)
{
    FN_ENTER(0x00614840);
    /* 00614840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614841: mov ebp, esp */ r_ebp = r_esp;
    /* 00614843: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00614845: push 0x8e11b8 */ { u32 v = 0x8e11b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061484a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00614850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614851: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00614858: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061485b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061485e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00614861: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00614864: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00614867: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061486c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00614873: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x614878u); f_005caba4();
    /* 00614878: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00614879: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061487c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061487e: je 0x6148b1 */ if (fZ) goto L_006148b1;
L_00614880:; BB(0x00614880);
    /* 00614880: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00614887: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061488e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00614891: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00614894: call 0x6148b8 */ r_esp -= 4; W32(r_esp, 0x614899u); f_006148b8();
    /* 00614899: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061489c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006148a3:; BB(0x006148a3);
    /* 006148a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006148a6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006148ad: mov esp, ebp */ r_esp = r_ebp;
    /* 006148af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006148b0: ret  */ FN_RET(0x00614840); r_esp += 4; return;
L_006148b1:; BB(0x006148b1);
    /* 006148b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006148b3: jmp 0x6148a3 */ goto L_006148a3;
}

void f_006148b8(void) /* sub_6148B8 */
{
    FN_ENTER(0x006148b8);
    /* 006148b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006148b9: mov ebp, esp */ r_ebp = r_esp;
    /* 006148bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006148bd: push 0x8e11d4 */ { u32 v = 0x8e11d4u; r_esp -= 4; W32(r_esp, v); }
    /* 006148c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006148c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006148c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006148d0: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006148d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006148d6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006148d9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006148dc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006148df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006148e2: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 006148e5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006148e8: call 0x613bfc */ r_esp -= 4; W32(r_esp, 0x6148edu); f_00613bfc();
    /* 006148ed: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006148f4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006148f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006148fa: mov dword ptr [ecx], 0xb25364 */ W32((u32)(r_ecx), 0xb25364u);
    /* 00614900: mov eax, dword ptr [0x9c4960] */ r_eax = R32((u32)(0x9c4960u));
    /* 00614905: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00614906: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00614909: call dword ptr [0xb25378] */ { u32 t = R32((u32)(0xb25378u)); r_esp -= 4; W32(r_esp, 0x61490fu); call_ind(t); }
    /* 0061490f: mov ecx, dword ptr [0xa8ea78] */ r_ecx = R32((u32)(0xa8ea78u));
    /* 00614915: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00614917: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x61491cu); f_005b8610();
    /* 0061491c: mov ebx, dword ptr [ebp - 0x4c] */ r_ebx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0061491f: mov ecx, dword ptr [0xa8ea78] */ r_ecx = R32((u32)(0xa8ea78u));
    /* 00614925: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00614927: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 0061492a: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0061492d: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00614930: mov dword ptr [ebx + 0x94], edx */ W32((u32)(r_ebx+0x94u), r_edx);
    /* 00614936: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x61493bu); f_005b8624();
    /* 0061493b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0061493e: fld dword ptr [0x9300e8] */ FPUSH(R_F32((u32)(0x9300e8u)));
    /* 00614944: fadd dword ptr [ecx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x68u));
    /* 00614947: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 0061494a: mov ebx, dword ptr [ecx + 0x84] */ r_ebx = R32((u32)(r_ecx+0x84u));
    /* 00614950: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00614952: fstp dword ptr [ecx + 0x98] */ W_F32((u32)(r_ecx+0x98u), ST(0)); FPOP();
    /* 00614958: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0061495b: fabs  */ ST(0) = fabsl(ST(0));
    /* 0061495d: fstp dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0)); FPOP();
    /* 00614960: mov eax, 8 */ r_eax = 0x8u;
    /* 00614965: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00614968: mov edx, 1 */ r_edx = 0x1u;
    /* 0061496d: jl 0x614971 */ if ((fS!=fO)) goto L_00614971;
L_0061496f:; BB(0x0061496f);
    /* 0061496f: mov ebx, eax */ r_ebx = r_eax;
L_00614971:; BB(0x00614971);
    /* 00614971: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00614974: jg 0x614978 */ if ((!fZ&&fS==fO)) goto L_00614978;
L_00614976:; BB(0x00614976);
    /* 00614976: mov ebx, edx */ r_ebx = r_edx;
L_00614978:; BB(0x00614978);
    /* 00614978: mov dword ptr [ecx + 0x9c], ebx */ W32((u32)(r_ecx+0x9cu), r_ebx);
    /* 0061497e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00614980: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00614982: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00614983: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x614988u); f_008581c5();
    /* 00614988: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0061498b: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 00614991: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00614997: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614999: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061499b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061499c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6149a1u); f_008581c5();
    /* 006149a1: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006149a4: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 006149aa: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 006149b0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006149b2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006149b4: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 006149b7: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006149b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006149ba: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6149bfu); f_008581c5();
    /* 006149bf: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006149c2: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 006149c8: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 006149ce: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006149d0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006149d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006149d3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6149d8u); f_008581c5();
    /* 006149d8: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006149db: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 006149e1: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 006149e7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006149e9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006149eb: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 006149ee: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006149f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006149f1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6149f6u); f_008581c5();
    /* 006149f6: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006149f9: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 006149ff: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00614a05: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614a07: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614a09: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00614a0c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00614a0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614a0f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x614a14u); f_008581c5();
    /* 00614a14: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00614a17: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00614a1a: mov dword ptr [edx + 0xb4], eax */ W32((u32)(r_edx+0xb4u), r_eax);
    /* 00614a20: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00614a26: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00614a28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00614a2a: jle 0x614cab */ if ((fZ||fS!=fO)) goto L_00614cab;
L_00614a30:; BB(0x00614a30);
    /* 00614a30: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614a35u); f_008587a5();
    /* 00614a35: mov ecx, dword ptr [0xa8ea78] */ r_ecx = R32((u32)(0xa8ea78u));
    /* 00614a3b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00614a3e: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 00614a41: fdiv dword ptr [0x930100] */ ST(0) = ST(0) / R_F32((u32)(0x930100u));
    /* 00614a47: fmul dword ptr [0x9300fc] */ ST(0) = ST(0) * R_F32((u32)(0x9300fcu));
    /* 00614a4d: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00614a50: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00614a54: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00614a59: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00614a5c: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00614a5f: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00614a62: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00614a65: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00614a68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00614a69: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x614a6eu); f_005b8610();
    /* 00614a6e: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00614a71: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00614a72: mov edx, dword ptr [edx + 0xa0] */ r_edx = R32((u32)(r_edx+0xa0u));
    /* 00614a78: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00614a7b: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
    /* 00614a7e: mov ecx, dword ptr [0xa8ea78] */ r_ecx = R32((u32)(0xa8ea78u));
    /* 00614a84: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x614a89u); f_005b8624();
    /* 00614a89: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00614a8c: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 00614a92: mov dword ptr [ecx + esi*2], eax */ W32((u32)(r_ecx+r_esi*2), r_eax);
    /* 00614a95: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614a9au); f_008587a5();
    /* 00614a9a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00614a9d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00614aa0: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00614aa3: fdiv dword ptr [0x930100] */ ST(0) = ST(0) / R_F32((u32)(0x930100u));
    /* 00614aa9: fmul dword ptr [ecx + 0x98] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x98u));
    /* 00614aaf: mov eax, dword ptr [ecx + 0xa8] */ r_eax = R32((u32)(r_ecx+0xa8u));
    /* 00614ab5: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 00614ab8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00614aba: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00614abd: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00614abf: fstp dword ptr [edi + eax] */ W_F32((u32)(r_edi+r_eax), ST(0)); FPOP();
    /* 00614ac2: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00614ac5: mov eax, dword ptr [eax + 0xa8] */ r_eax = R32((u32)(r_eax+0xa8u));
    /* 00614acb: mov dword ptr [edi + eax + 4], 0 */ W32((u32)(r_edi+r_eax+0x4u), 0x0u);
    /* 00614ad3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614ad8u); f_008587a5();
    /* 00614ad8: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00614adb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00614ade: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00614ae1: fdiv dword ptr [0x930100] */ ST(0) = ST(0) / R_F32((u32)(0x930100u));
    /* 00614ae7: fmul dword ptr [edx + 0x98] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x98u));
    /* 00614aed: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00614af3: fstp dword ptr [edi + eax + 8] */ W_F32((u32)(r_edi+r_eax+0x8u), ST(0)); FPOP();
    /* 00614af7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614afcu); f_008587a5();
    /* 00614afc: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00614aff: fld dword ptr [edx + 0x6c] */ FPUSH(R_F32((u32)(r_edx+0x6cu)));
    /* 00614b02: fmul dword ptr [0x9300f4] */ ST(0) = ST(0) * R_F32((u32)(0x9300f4u));
    /* 00614b08: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00614b0b: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00614b0e: fdiv dword ptr [0x930100] */ ST(0) = ST(0) / R_F32((u32)(0x930100u));
    /* 00614b14: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00614b16: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 00614b1c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00614b1e: fstp dword ptr [eax + esi*2] */ W_F32((u32)(r_eax+r_esi*2), ST(0)); FPOP();
    /* 00614b21: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614b26u); f_008587a5();
    /* 00614b26: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00614b29: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00614b2c: fdiv dword ptr [0x930100] */ ST(0) = ST(0) / R_F32((u32)(0x930100u));
    /* 00614b32: fmul dword ptr [0x9300f0] */ ST(0) = ST(0) * R_F32((u32)(0x9300f0u));
    /* 00614b38: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00614b3b: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00614b3f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00614b44: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00614b47: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00614b4a: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00614b4d: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00614b50: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00614b53: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00614b56: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00614b5c: mov dword ptr [edi + ecx], edx */ W32((u32)(r_edi+r_ecx), r_edx);
    /* 00614b5f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614b64u); f_008587a5();
    /* 00614b64: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00614b67: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00614b6a: fdiv dword ptr [0x930100] */ ST(0) = ST(0) / R_F32((u32)(0x930100u));
    /* 00614b70: fmul dword ptr [0x9300f0] */ ST(0) = ST(0) * R_F32((u32)(0x9300f0u));
    /* 00614b76: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00614b79: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00614b7d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00614b82: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00614b85: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00614b88: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00614b8b: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00614b8e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00614b91: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00614b94: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00614b9a: mov dword ptr [edi + ecx + 4], edx */ W32((u32)(r_edi+r_ecx+0x4u), r_edx);
    /* 00614b9e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614ba3u); f_008587a5();
    /* 00614ba3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00614ba6: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00614ba9: fdiv dword ptr [0x930100] */ ST(0) = ST(0) / R_F32((u32)(0x930100u));
    /* 00614baf: fmul dword ptr [0x9300f0] */ ST(0) = ST(0) * R_F32((u32)(0x9300f0u));
    /* 00614bb5: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00614bb8: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00614bbc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00614bc1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00614bc4: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00614bc7: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00614bca: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00614bcd: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00614bd0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00614bd3: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00614bd9: mov dword ptr [edi + ecx + 8], edx */ W32((u32)(r_edi+r_ecx+0x8u), r_edx);
    /* 00614bdd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614be2u); f_008587a5();
    /* 00614be2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00614be5: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00614be8: fdiv dword ptr [0x930100] */ ST(0) = ST(0) / R_F32((u32)(0x930100u));
    /* 00614bee: fmul dword ptr [0x9300ec] */ ST(0) = ST(0) * R_F32((u32)(0x9300ecu));
    /* 00614bf4: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00614bf7: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00614bfb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00614c00: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00614c03: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00614c06: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00614c09: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00614c0c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00614c0f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00614c12: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00614c18: mov dword ptr [edi + ecx], edx */ W32((u32)(r_edi+r_ecx), r_edx);
    /* 00614c1b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614c20u); f_008587a5();
    /* 00614c20: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00614c23: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00614c26: fdiv dword ptr [0x930100] */ ST(0) = ST(0) / R_F32((u32)(0x930100u));
    /* 00614c2c: fmul dword ptr [0x9300ec] */ ST(0) = ST(0) * R_F32((u32)(0x9300ecu));
    /* 00614c32: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00614c35: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00614c39: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00614c3e: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00614c41: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00614c44: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00614c47: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00614c4a: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00614c4d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00614c50: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00614c56: mov dword ptr [edi + ecx + 4], edx */ W32((u32)(r_edi+r_ecx+0x4u), r_edx);
    /* 00614c5a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614c5fu); f_008587a5();
    /* 00614c5f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00614c62: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00614c65: fdiv dword ptr [0x930100] */ ST(0) = ST(0) / R_F32((u32)(0x930100u));
    /* 00614c6b: fmul dword ptr [0x9300ec] */ ST(0) = ST(0) * R_F32((u32)(0x9300ecu));
    /* 00614c71: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00614c74: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00614c77: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00614c7b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00614c80: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00614c83: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00614c86: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00614c89: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00614c8c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00614c8f: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00614c95: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00614c98: mov dword ptr [edi + ecx + 8], edx */ W32((u32)(r_edi+r_ecx+0x8u), r_edx);
    /* 00614c9c: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00614c9f: cmp ebx, dword ptr [edx + 0x9c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0x9cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00614ca5: jl 0x614a30 */ if ((fS!=fO)) goto L_00614a30;
L_00614cab:; BB(0x00614cab);
    /* 00614cab: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00614cae: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00614cb1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00614cb4: mov eax, edx */ r_eax = r_edx;
    /* 00614cb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614cb9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00614cc0: mov esp, ebp */ r_esp = r_ebp;
    /* 00614cc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00614cc3: ret 4 */ FN_RET(0x006148b8); r_esp += 8; return;
}

void f_00614cc8(void) /* sub_614CC8 */
{
    FN_ENTER(0x00614cc8);
    /* 00614cc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614cc9: mov ebp, esp */ r_ebp = r_esp;
    /* 00614ccb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00614ccd: push 0x8e11fc */ { u32 v = 0x8e11fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00614cd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00614cd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614cd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00614ce0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00614ce3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00614ce6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00614ce9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00614cec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00614cef: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00614cf4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00614cfb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x614d00u); f_008581c5();
    /* 00614d00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00614d01: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00614d04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00614d06: je 0x614d47 */ if (fZ) goto L_00614d47;
L_00614d08:; BB(0x00614d08);
    /* 00614d08: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00614d0f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00614d16: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00614d19: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00614d1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614d1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614d1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614d1e: push 0x9c4944 */ { u32 v = 0x9c4944u; r_esp -= 4; W32(r_esp, v); }
    /* 00614d23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00614d25: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x614d2au); f_005b7a84();
    /* 00614d2a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00614d2d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00614d34:; BB(0x00614d34);
    /* 00614d34: mov dword ptr [0xa8ea78], eax */ W32((u32)(0xa8ea78u), r_eax);
    /* 00614d39: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614d3c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00614d43: mov esp, ebp */ r_esp = r_ebp;
    /* 00614d45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00614d46: ret  */ FN_RET(0x00614cc8); r_esp += 4; return;
L_00614d47:; BB(0x00614d47);
    /* 00614d47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00614d49: jmp 0x614d34 */ goto L_00614d34;
}

void f_00614d4c(void) /* sub_614D4C */
{
    FN_ENTER(0x00614d4c);
    /* 00614d4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00614d4d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00614d4f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00614d51: call 0x614d70 */ r_esp -= 4; W32(r_esp, 0x614d56u); f_00614d70();
    /* 00614d56: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00614d5a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00614d5c: jne 0x614d62 */ if (!fZ) goto L_00614d62;
L_00614d5e:; BB(0x00614d5e);
    /* 00614d5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00614d5f: ret 4 */ FN_RET(0x00614d4c); r_esp += 8; return;
L_00614d62:; BB(0x00614d62);
    /* 00614d62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00614d63: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x614d68u); f_005c2f74();
    /* 00614d68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00614d69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00614d6a: ret 4 */ FN_RET(0x00614d4c); r_esp += 8; return;
}

void f_00614d70(void) /* sub_614D70 */
{
    FN_ENTER(0x00614d70);
    /* 00614d70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614d71: mov ebp, esp */ r_ebp = r_esp;
    /* 00614d73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00614d75: push 0x8e1218 */ { u32 v = 0x8e1218u; r_esp -= 4; W32(r_esp, v); }
    /* 00614d7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00614d80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614d81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00614d88: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00614d8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00614d8e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00614d91: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00614d94: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00614d97: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00614d9a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00614da1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00614da4: mov dword ptr [ecx], 0xb25410 */ W32((u32)(r_ecx), 0xb25410u);
    /* 00614daa: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x614dafu); f_007b9c8c();
    /* 00614daf: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00614db2: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x614db7u); f_007b4e84();
    /* 00614db7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00614db8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00614dbf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00614dc2: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x614dc7u); f_006131f4();
    /* 00614dc7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614dca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00614dd1: mov esp, ebp */ r_esp = r_ebp;
    /* 00614dd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00614dd4: ret  */ FN_RET(0x00614d70); r_esp += 4; return;
}

void f_00614dd8(void) /* sub_614DD8 */
{
    FN_ENTER(0x00614dd8);
    /* 00614dd8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00614dd9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00614dda: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00614ddb: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00614ddd: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00614de3: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00614de9: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00614deb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00614ded: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x614df0u); call_ind(t); }
    /* 00614df0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00614df2: je 0x614ea6 */ if (fZ) goto L_00614ea6;
L_00614df8:; BB(0x00614df8);
    /* 00614df8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x614dfdu); f_0082d7b0();
    /* 00614dfd: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00614e00: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x614e05u); f_0082d838();
    /* 00614e05: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00614e08: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00614e0a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x614e0fu); f_0082d8bc();
    /* 00614e0f: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00614e12: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x614e17u); f_00829cc8();
    /* 00614e17: mov esi, dword ptr [ebx + 0x34] */ r_esi = R32((u32)(r_ebx+0x34u));
    /* 00614e1a: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00614e1d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x614e22u); f_0082d838();
    /* 00614e22: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00614e25: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x614e2au); f_008321d8();
    /* 00614e2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00614e2b: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 00614e2e: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x614e33u); f_0082dbac();
    /* 00614e33: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00614e36: lea eax, [ebx + 0xcc] */ r_eax = (u32)(r_ebx+0xccu);
    /* 00614e3c: add ebx, 0xec */ {  u32 a = r_ebx; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00614e42: mov edi, esi */ r_edi = r_esi;
    /* 00614e44: mov esi, eax */ r_esi = r_eax;
L_00614e46:; BB(0x00614e46);
    /* 00614e46: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00614e48: fcomp dword ptr [0x930260] */ fx_compare(ST(0), R_F32((u32)(0x930260u))); FPOP();
    /* 00614e4e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00614e50: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00614e51: jae 0x614e8f */ if (!fC) goto L_00614e8f;
L_00614e53:; BB(0x00614e53);
    /* 00614e53: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x614e58u); f_0082d7b0();
    /* 00614e58: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 00614e5b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x614e60u); f_0082d838();
    /* 00614e60: fld dword ptr [0x93025c] */ FPUSH(R_F32((u32)(0x93025cu)));
    /* 00614e66: fsub dword ptr [esi] */ ST(0) = ST(0) - R_F32((u32)(r_esi));
    /* 00614e68: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00614e6b: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00614e6e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00614e72: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00614e7a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00614e7c: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x614e81u); f_0082fa0c();
    /* 00614e81: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00614e84: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x614e89u); f_008321d8();
    /* 00614e89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00614e8a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x614e8fu); f_0082da80();
L_00614e8f:; BB(0x00614e8f);
    /* 00614e8f: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 00614e92: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00614e95: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00614e97: ja 0x614e46 */ if ((!fC&&!fZ)) goto L_00614e46;
L_00614e99:; BB(0x00614e99);
    /* 00614e99: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00614e9c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x614ea1u); f_0082dab0();
    /* 00614ea1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x614ea6u); f_0082da80();
L_00614ea6:; BB(0x00614ea6);
    /* 00614ea6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00614ea7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00614ea8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00614ea9: ret  */ FN_RET(0x00614dd8); r_esp += 4; return;
}

void f_00614eac(void) /* sub_614EAC */
{
    FN_ENTER(0x00614eac);
    /* 00614eac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00614ead: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00614eae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614eaf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00614eb0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00614eb3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00614eb5: mov eax, ecx */ r_eax = r_ecx;
    /* 00614eb7: mov ebp, eax */ r_ebp = r_eax;
    /* 00614eb9: mov esi, edx */ r_esi = r_edx;
    /* 00614ebb: mov edi, ecx */ r_edi = r_ecx;
L_00614ebd:; BB(0x00614ebd);
    /* 00614ebd: movzx ebx, byte ptr [esi + edi + 0xec] */ r_ebx = (u32)R8((u32)(r_esi+r_edi+0xecu));
    /* 00614ec5: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00614ec8: jne 0x614f08 */ if (!fZ) goto L_00614f08;
L_00614eca:; BB(0x00614eca);
    /* 00614eca: fld dword ptr [edi + esi*4 + 0xcc] */ FPUSH(R_F32((u32)(r_edi+r_esi*4+0xccu)));
    /* 00614ed1: fsub dword ptr [0x930270] */ ST(0) = ST(0) - R_F32((u32)(0x930270u));
    /* 00614ed7: fcom dword ptr [0x930250] */ fx_compare(ST(0), R_F32((u32)(0x930250u))); 
    /* 00614edd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00614edf: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00614ee2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00614ee3: ja 0x614eff */ if ((!fC&&!fZ)) goto L_00614eff;
L_00614ee5:; BB(0x00614ee5);
    /* 00614ee5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00614ee7: mov byte ptr [ebp + 0xec], 2 */ W8((u32)(r_ebp+0xecu), 0x2u);
    /* 00614eee: mov ebx, 0xbf800000 */ r_ebx = 0xbf800000u;
    /* 00614ef3: mov dword ptr [edi + edx*2 + 0xcc], ebx */ W32((u32)(r_edi+r_edx*2+0xccu), r_ebx);
    /* 00614efa: jmp 0x614f7b */ goto L_00614f7b;
L_00614eff:; BB(0x00614eff);
    /* 00614eff: fstp dword ptr [edi + edx*2 + 0xcc] */ W_F32((u32)(r_edi+r_edx*2+0xccu), ST(0)); FPOP();
    /* 00614f06: jmp 0x614f7b */ goto L_00614f7b;
L_00614f08:; BB(0x00614f08);
    /* 00614f08: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00614f0b: jne 0x614f35 */ if (!fZ) goto L_00614f35;
L_00614f0d:; BB(0x00614f0d);
    /* 00614f0d: fld dword ptr [0x930270] */ FPUSH(R_F32((u32)(0x930270u)));
    /* 00614f13: fadd dword ptr [edi + esi*4 + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_esi*4+0xccu));
    /* 00614f1a: fcom dword ptr [0x930254] */ fx_compare(ST(0), R_F32((u32)(0x930254u))); 
    /* 00614f20: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00614f22: fstp dword ptr [edi + esi*4 + 0xcc] */ W_F32((u32)(r_edi+r_esi*4+0xccu), ST(0)); FPOP();
    /* 00614f29: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00614f2a: jbe 0x614f7b */ if ((fC||fZ)) goto L_00614f7b;
L_00614f2c:; BB(0x00614f2c);
    /* 00614f2c: mov byte ptr [ebp + 0xec], 0 */ W8((u32)(r_ebp+0xecu), 0x0u);
    /* 00614f33: jmp 0x614f7b */ goto L_00614f7b;
L_00614f35:; BB(0x00614f35);
    /* 00614f35: fld dword ptr [0x930270] */ FPUSH(R_F32((u32)(0x930270u)));
    /* 00614f3b: fadd dword ptr [edi + esi*4 + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_esi*4+0xccu));
    /* 00614f42: fstp dword ptr [edi + esi*4 + 0xcc] */ W_F32((u32)(r_edi+r_esi*4+0xccu), ST(0)); FPOP();
    /* 00614f49: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00614f4c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614f51u); f_008587a5();
    /* 00614f51: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00614f54: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00614f57: fdiv dword ptr [0x930258] */ ST(0) = ST(0) / R_F32((u32)(0x930258u));
    /* 00614f5d: fcomp dword ptr [edi + ebx*2 + 0xcc] */ fx_compare(ST(0), R_F32((u32)(r_edi+r_ebx*2+0xccu))); FPOP();
    /* 00614f64: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00614f66: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00614f67: jae 0x614f7b */ if (!fC) goto L_00614f7b;
L_00614f69:; BB(0x00614f69);
    /* 00614f69: mov byte ptr [ebp + 0xec], 1 */ W8((u32)(r_ebp+0xecu), 0x1u);
    /* 00614f70: mov dword ptr [edi + ebx*2 + 0xcc], 0 */ W32((u32)(r_edi+r_ebx*2+0xccu), 0x0u);
L_00614f7b:; BB(0x00614f7b);
    /* 00614f7b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00614f7e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00614f81: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00614f84: jl 0x614ebd */ if ((fS!=fO)) goto L_00614ebd;
L_00614f8a:; BB(0x00614f8a);
    /* 00614f8a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00614f8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00614f8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00614f8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00614f90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00614f91: ret  */ FN_RET(0x00614eac); r_esp += 4; return;
}

void f_00614f94(void) /* sub_614F94 */
{
    FN_ENTER(0x00614f94);
    /* 00614f94: mov ecx, dword ptr [0xa8ea98] */ r_ecx = R32((u32)(0xa8ea98u));
    /* 00614f9a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00614f9c: je 0x614fb1 */ if (fZ) goto L_00614fb1;
L_00614f9e:; BB(0x00614f9e);
    /* 00614f9e: je 0x614fa7 */ if (fZ) goto L_00614fa7;
L_00614fa0:; BB(0x00614fa0);
    /* 00614fa0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00614fa2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x614fa7u); f_004066a8();
L_00614fa7:; BB(0x00614fa7);
    /* 00614fa7: mov dword ptr [0xa8ea98], 0 */ W32((u32)(0xa8ea98u), 0x0u);
L_00614fb1:; BB(0x00614fb1);
    /* 00614fb1: ret  */ FN_RET(0x00614f94); r_esp += 4; return;
}

void f_00614fb4(void)
{
    FN_ENTER(0x00614fb4);
    /* 00614fb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614fb5: mov ebp, esp */ r_ebp = r_esp;
    /* 00614fb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00614fb9: push 0x8e124e */ { u32 v = 0x8e124eu; r_esp -= 4; W32(r_esp, v); }
    /* 00614fbe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00614fc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614fc5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00614fcc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00614fcf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00614fd2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00614fd5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00614fd8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00614fdb: push 0xf4 */ { u32 v = 0xf4u; r_esp -= 4; W32(r_esp, v); }
    /* 00614fe0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00614fe7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x614fecu); f_005caba4();
    /* 00614fec: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00614fef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00614ff2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00614ff5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00614ff7: je 0x61513f */ if (fZ) goto L_0061513f;
L_00614ffd:; BB(0x00614ffd);
    /* 00614ffd: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00615004: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061500b: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00615011: mov ecx, eax */ r_ecx = r_eax;
    /* 00615013: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00615016: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x61501bu); f_006132e4();
    /* 0061501b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00615022: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00615025: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00615028: mov dword ptr [ecx], 0xb25410 */ W32((u32)(r_ecx), 0xb25410u);
    /* 0061502e: mov eax, dword ptr [0x9c4980] */ r_eax = R32((u32)(0x9c4980u));
    /* 00615033: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00615036: call dword ptr [0xb25424] */ { u32 t = R32((u32)(0xb25424u)); r_esp -= 4; W32(r_esp, 0x61503cu); call_ind(t); }
    /* 0061503c: mov ebx, dword ptr [0xa8ea98] */ r_ebx = R32((u32)(0xa8ea98u));
    /* 00615042: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00615044: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 0061504a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061504d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00615050: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00615053: push 0x9c4984 */ { u32 v = 0x9c4984u; r_esp -= 4; W32(r_esp, v); }
    /* 00615058: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0061505b: or ecx, 0x40000000 */ {  u32 a = r_ecx; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00615061: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 00615067: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 0061506a: mov dword ptr [eax + 0x24], edi */ W32((u32)(r_eax+0x24u), r_edi);
    /* 0061506d: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00615070: mov dword ptr [eax + 0xc0], 0x43fa0000 */ W32((u32)(r_eax+0xc0u), 0x43fa0000u);
    /* 0061507a: mov ecx, eax */ r_ecx = r_eax;
    /* 0061507c: mov dword ptr [eax + 0xc4], 0x42700000 */ W32((u32)(r_eax+0xc4u), 0x42700000u);
    /* 00615086: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61508bu); f_007b9a88();
    /* 0061508b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061508e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061508f: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x615094u); f_007b999c();
    /* 00615094: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00615095: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00615098: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61509du); f_007b4f54();
    /* 0061509d: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006150a0: mov dword ptr [esi + 0xcc], 0 */ W32((u32)(r_esi+0xccu), 0x0u);
    /* 006150aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006150ac: mov byte ptr [esi + 0xec], al */ W8((u32)(r_esi+0xecu), (u8)r_eax);
    /* 006150b2: mov dword ptr [esi + 0xd0], 0 */ W32((u32)(r_esi+0xd0u), 0x0u);
    /* 006150bc: mov byte ptr [esi + 0xed], al */ W8((u32)(r_esi+0xedu), (u8)r_eax);
    /* 006150c2: mov byte ptr [esi + 0xee], al */ W8((u32)(r_esi+0xeeu), (u8)r_eax);
    /* 006150c8: mov byte ptr [esi + 0xef], al */ W8((u32)(r_esi+0xefu), (u8)r_eax);
    /* 006150ce: mov dword ptr [esi + 0xd4], 0 */ W32((u32)(r_esi+0xd4u), 0x0u);
    /* 006150d8: mov byte ptr [esi + 0xf0], al */ W8((u32)(r_esi+0xf0u), (u8)r_eax);
    /* 006150de: mov byte ptr [esi + 0xf1], al */ W8((u32)(r_esi+0xf1u), (u8)r_eax);
    /* 006150e4: mov byte ptr [esi + 0xf2], al */ W8((u32)(r_esi+0xf2u), (u8)r_eax);
    /* 006150ea: mov dword ptr [esi + 0xd8], 0 */ W32((u32)(r_esi+0xd8u), 0x0u);
    /* 006150f4: mov byte ptr [esi + 0xf3], al */ W8((u32)(r_esi+0xf3u), (u8)r_eax);
    /* 006150fa: mov dword ptr [esi + 0xdc], 0 */ W32((u32)(r_esi+0xdcu), 0x0u);
    /* 00615104: mov dword ptr [esi + 0xe0], 0 */ W32((u32)(r_esi+0xe0u), 0x0u);
    /* 0061510e: mov dword ptr [esi + 0xe4], 0 */ W32((u32)(r_esi+0xe4u), 0x0u);
    /* 00615118: mov dword ptr [esi + 0xe8], 0 */ W32((u32)(r_esi+0xe8u), 0x0u);
    /* 00615122: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_00615125:; BB(0x00615125);
    /* 00615125: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00615128: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061512b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061512e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00615131: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615134: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061513b: mov esp, ebp */ r_esp = r_ebp;
    /* 0061513d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061513e: ret  */ FN_RET(0x00614fb4); r_esp += 4; return;
L_0061513f:; BB(0x0061513f);
    /* 0061513f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00615141: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00615144: jmp 0x615125 */ goto L_00615125;
}

