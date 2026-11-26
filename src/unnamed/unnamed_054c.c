#include "protos.h"

void f_0054c0a4(void) /* sub_54C0A4 */
{
    FN_ENTER(0x0054c0a4);
    /* 0054c0a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c0a5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054c0a8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054c0aa: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 0054c0b0: fcom dword ptr [0x9241f0] */ fx_compare(ST(0), R_F32((u32)(0x9241f0u))); 
    /* 0054c0b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054c0b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054c0b9: jb 0x54c1ae */ if (fC) goto L_0054c1ae;
L_0054c0bf:; BB(0x0054c0bf);
    /* 0054c0bf: fcomp dword ptr [0x9241ec] */ fx_compare(ST(0), R_F32((u32)(0x9241ecu))); FPOP();
    /* 0054c0c5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054c0c7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054c0c8: ja 0x54c1b0 */ if ((!fC&&!fZ)) goto L_0054c1b0;
L_0054c0ce:; BB(0x0054c0ce);
    /* 0054c0ce: mov eax, dword ptr [ebp + 0x49c] */ r_eax = R32((u32)(r_ebp+0x49cu));
    /* 0054c0d4: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0054c0d7: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 0054c0da: mov eax, dword ptr [ebp + 0x49c] */ r_eax = R32((u32)(r_ebp+0x49cu));
    /* 0054c0e0: mov edx, dword ptr [ebp + 0x474] */ r_edx = R32((u32)(r_ebp+0x474u));
    /* 0054c0e6: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0054c0e9: mov edx, dword ptr [ebp + 0x478] */ r_edx = R32((u32)(r_ebp+0x478u));
    /* 0054c0ef: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 0054c0f2: mov edx, dword ptr [ebp + 0x47c] */ r_edx = R32((u32)(r_ebp+0x47cu));
    /* 0054c0f8: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0054c0fb: push dword ptr [ebp + 0x49c] */ { u32 v = R32((u32)(r_ebp+0x49cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054c101: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x54c106u); f_007b999c();
    /* 0054c106: mov eax, dword ptr [ebp + 0x4a0] */ r_eax = R32((u32)(r_ebp+0x4a0u));
    /* 0054c10c: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0054c10f: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 0054c112: mov eax, dword ptr [ebp + 0x4a0] */ r_eax = R32((u32)(r_ebp+0x4a0u));
    /* 0054c118: mov edx, dword ptr [ebp + 0x474] */ r_edx = R32((u32)(r_ebp+0x474u));
    /* 0054c11e: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0054c121: mov edx, dword ptr [ebp + 0x478] */ r_edx = R32((u32)(r_ebp+0x478u));
    /* 0054c127: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 0054c12a: mov edx, dword ptr [ebp + 0x47c] */ r_edx = R32((u32)(r_ebp+0x47cu));
    /* 0054c130: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0054c133: push dword ptr [ebp + 0x4a0] */ { u32 v = R32((u32)(r_ebp+0x4a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054c139: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x54c13eu); f_007b999c();
    /* 0054c13e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c141: mov eax, dword ptr [0x924110] */ r_eax = R32((u32)(0x924110u));
    /* 0054c146: mov edx, dword ptr [0xa73918] */ r_edx = R32((u32)(0xa73918u));
    /* 0054c14c: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0054c153: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054c155: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0054c159: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0054c15c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0054c160: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0054c164: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0054c167: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0054c16a: call dword ptr [eax + 0x194] */ { u32 t = R32((u32)(r_eax+0x194u)); r_esp -= 4; W32(r_esp, 0x54c170u); call_ind(t); }
    /* 0054c170: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c172: je 0x54c17f */ if (fZ) goto L_0054c17f;
L_0054c174:; BB(0x0054c174);
    /* 0054c174: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0054c178: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054c17b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
L_0054c17f:; BB(0x0054c17f);
    /* 0054c17f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0054c182: push dword ptr [ebp + 0x4a8] */ { u32 v = R32((u32)(r_ebp+0x4a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054c188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c189: mov ecx, dword ptr [ebp + 0x49c] */ r_ecx = R32((u32)(r_ebp+0x49cu));
    /* 0054c18f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0054c191: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x54c194u); call_ind(t); }
    /* 0054c194: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0054c197: push dword ptr [ebp + 0x4a8] */ { u32 v = R32((u32)(r_ebp+0x4a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054c19d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c19e: mov ecx, dword ptr [ebp + 0x4a0] */ r_ecx = R32((u32)(r_ebp+0x4a0u));
    /* 0054c1a4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0054c1a6: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x54c1a9u); call_ind(t); }
    /* 0054c1a9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054c1ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c1ad: ret  */ FN_RET(0x0054c0a4); r_esp += 4; return;
L_0054c1ae:; BB(0x0054c1ae);
    /* 0054c1ae: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0054c1b0:; BB(0x0054c1b0);
    /* 0054c1b0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054c1b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c1b4: ret  */ FN_RET(0x0054c0a4); r_esp += 4; return;
}

void f_0054c1b8(void) /* sub_54C1B8 */
{
    FN_ENTER(0x0054c1b8);
    /* 0054c1b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c1b9: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c1bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054c1bd: push 0x8d5c6a */ { u32 v = 0x8d5c6au; r_esp -= 4; W32(r_esp, v); }
    /* 0054c1c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0054c1c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c1c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0054c1d0: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054c1d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054c1d6: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0054c1d9: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0054c1dc: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0054c1df: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0054c1e2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054c1e5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c1e8: je 0x54c926 */ if (fZ) goto L_0054c926;
L_0054c1ee:; BB(0x0054c1ee);
    /* 0054c1ee: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c1f1: je 0x54c82c */ if (fZ) goto L_0054c82c;
L_0054c1f7:; BB(0x0054c1f7);
    /* 0054c1f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c1f9: jne 0x54c7ff */ if (!fZ) goto L_0054c7ff;
L_0054c1ff:; BB(0x0054c1ff);
    /* 0054c1ff: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54c204u); f_007aa094();
    /* 0054c204: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c207: mov eax, dword ptr [eax + 0x4d4] */ r_eax = R32((u32)(r_eax+0x4d4u));
    /* 0054c20d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c20f: je 0x54c6e4 */ if (fZ) goto L_0054c6e4;
L_0054c215:; BB(0x0054c215);
    /* 0054c215: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c218: jne 0x54c546 */ if (!fZ) goto L_0054c546;
L_0054c21e:; BB(0x0054c21e);
    /* 0054c21e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c221: call 0x54c9a8 */ r_esp -= 4; W32(r_esp, 0x54c226u); f_0054c9a8();
    /* 0054c226: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c229: call 0x53c3d0 */ r_esp -= 4; W32(r_esp, 0x54c22eu); f_0053c3d0();
    /* 0054c22e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c230: je 0x54c242 */ if (fZ) goto L_0054c242;
L_0054c232:; BB(0x0054c232);
    /* 0054c232: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c235: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x54c23au); f_005213d8();
    /* 0054c23a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c23d: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x54c242u); f_00521410();
L_0054c242:; BB(0x0054c242);
    /* 0054c242: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c245: mov esi, dword ptr [0xa73910] */ r_esi = R32((u32)(0xa73910u));
    /* 0054c24b: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 0054c251: mov ebx, dword ptr [ecx + 0x3b0] */ r_ebx = R32((u32)(r_ecx+0x3b0u));
    /* 0054c257: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0054c259: fmul dword ptr [0x9241e0] */ ST(0) = ST(0) * R_F32((u32)(0x9241e0u));
    /* 0054c25f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054c261: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0054c264: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c267: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0054c26b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0054c26e: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0054c272: call 0x520940 */ r_esp -= 4; W32(r_esp, 0x54c277u); f_00520940();
    /* 0054c277: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c279: je 0x54c283 */ if (fZ) goto L_0054c283;
L_0054c27b:; BB(0x0054c27b);
    /* 0054c27b: mov eax, 1 */ r_eax = 0x1u;
    /* 0054c280: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0054c283:; BB(0x0054c283);
    /* 0054c283: mov eax, dword ptr [0xa73910] */ r_eax = R32((u32)(0xa73910u));
    /* 0054c288: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0054c28a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c28d: push dword ptr [ecx + 0x3b0] */ { u32 v = R32((u32)(r_ecx+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054c293: push dword ptr [ecx + 0x3a8] */ { u32 v = R32((u32)(r_ecx+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054c299: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x54c29eu); f_005209d4();
    /* 0054c29e: mov eax, dword ptr [0xa73910] */ r_eax = R32((u32)(0xa73910u));
    /* 0054c2a3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c2a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c2a8: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0054c2aa: fadd dword ptr [ecx + 0x4e8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4e8u));
    /* 0054c2b0: fstp dword ptr [ecx + 0x4e8] */ W_F32((u32)(r_ecx+0x4e8u), ST(0)); FPOP();
    /* 0054c2b6: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x54c2bbu); f_00520bb8();
    /* 0054c2bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c2bd: je 0x54c2c7 */ if (fZ) goto L_0054c2c7;
L_0054c2bf:; BB(0x0054c2bf);
    /* 0054c2bf: mov eax, 1 */ r_eax = 0x1u;
    /* 0054c2c4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0054c2c7:; BB(0x0054c2c7);
    /* 0054c2c7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c2ca: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x54c2cfu); f_007b7e9c();
    /* 0054c2cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c2d2: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0054c2d8: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0054c2db: test ecx, 0x200000 */ {  u32 a = r_ecx; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c2e1: je 0x54c2eb */ if (fZ) goto L_0054c2eb;
L_0054c2e3:; BB(0x0054c2e3);
    /* 0054c2e3: mov eax, 1 */ r_eax = 0x1u;
    /* 0054c2e8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0054c2eb:; BB(0x0054c2eb);
    /* 0054c2eb: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c2ee: mov edi, dword ptr [ebx + 0x4a4] */ r_edi = R32((u32)(r_ebx+0x4a4u));
    /* 0054c2f4: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0054c2f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054c2f9: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 0054c2fc: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 0054c2ff: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0054c302: mov dword ptr [edi + 0x3c], ecx */ W32((u32)(r_edi+0x3cu), r_ecx);
    /* 0054c305: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 0054c308: mov dword ptr [edi + 0x40], esi */ W32((u32)(r_edi+0x40u), r_esi);
    /* 0054c30b: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x54c310u); f_007b51c4();
    /* 0054c310: mov eax, ebx */ r_eax = r_ebx;
    /* 0054c312: mov ecx, dword ptr [eax + 0x4a4] */ r_ecx = R32((u32)(r_eax+0x4a4u));
    /* 0054c318: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54c31du); f_007b6894();
    /* 0054c31d: mov eax, ebx */ r_eax = r_ebx;
    /* 0054c31f: mov edx, dword ptr [eax + 0x4a4] */ r_edx = R32((u32)(r_eax+0x4a4u));
    /* 0054c325: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 0054c32b: mov ebx, dword ptr [ecx + 0x18] */ r_ebx = R32((u32)(r_ecx+0x18u));
    /* 0054c32e: test ebx, 0x180000 */ {  u32 a = r_ebx; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c334: je 0x54c452 */ if (fZ) goto L_0054c452;
L_0054c33a:; BB(0x0054c33a);
    /* 0054c33a: mov eax, 1 */ r_eax = 0x1u;
    /* 0054c33f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0054c342: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054c344: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0054c347:; BB(0x0054c347);
    /* 0054c347: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054c34a: mov edx, dword ptr [eax*4 + 0xaad6e0] */ r_edx = R32((u32)(r_eax*4+0xaad6e0u));
    /* 0054c351: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0054c354: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c356: je 0x54c452 */ if (fZ) goto L_0054c452;
L_0054c35c:; BB(0x0054c35c);
    /* 0054c35c: mov eax, edx */ r_eax = r_edx;
    /* 0054c35e: movzx edx, word ptr [eax + 0x96] */ r_edx = (u32)R16((u32)(r_eax+0x96u));
    /* 0054c365: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c368: jne 0x54c440 */ if (!fZ) goto L_0054c440;
L_0054c36e:; BB(0x0054c36e);
    /* 0054c36e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c371: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c372: mov ecx, dword ptr [edx + 0x4a8] */ r_ecx = R32((u32)(r_edx+0x4a8u));
    /* 0054c378: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x54c37du); f_00521b18();
    /* 0054c37d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c37f: je 0x54c440 */ if (fZ) goto L_0054c440;
L_0054c385:; BB(0x0054c385);
    /* 0054c385: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c388: mov edx, dword ptr [eax + 0x3c8] */ r_edx = R32((u32)(r_eax+0x3c8u));
    /* 0054c38e: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054c391: je 0x54c3b5 */ if (fZ) goto L_0054c3b5;
L_0054c393:; BB(0x0054c393);
    /* 0054c393: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0054c398: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c39b: je 0x54c856 */ if (fZ) goto L_0054c856;
L_0054c3a1:; BB(0x0054c3a1);
    /* 0054c3a1: mov eax, dword ptr [0xa73910] */ r_eax = R32((u32)(0xa73910u));
    /* 0054c3a6: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 0054c3a9: fstp dword ptr [ebp - 0x64] */ W_F32((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 0054c3ac: mov dword ptr [ebp - 0x68], 3 */ W32((u32)(r_ebp+0xffffff98u), 0x3u);
    /* 0054c3b3: jmp 0x54c3c7 */ goto L_0054c3c7;
L_0054c3b5:; BB(0x0054c3b5);
    /* 0054c3b5: mov eax, dword ptr [0xa73910] */ r_eax = R32((u32)(0xa73910u));
    /* 0054c3ba: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 0054c3bd: fstp dword ptr [ebp - 0x64] */ W_F32((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 0054c3c0: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0054c3c7:; BB(0x0054c3c7);
    /* 0054c3c7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054c3ca: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c3cd: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0054c3cf: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0054c3d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c3d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c3d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c3d8: push dword ptr [ebp - 0x64] */ { u32 v = R32((u32)(r_ebp+0xffffff9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054c3db: push dword ptr [ebp - 0x68] */ { u32 v = R32((u32)(r_ebp+0xffffff98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054c3de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c3df: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x54c3e2u); call_ind(t); }
    /* 0054c3e2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054c3e4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054c3e7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0054c3ea: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c3ef: jne 0x54c3fc */ if (!fZ) goto L_0054c3fc;
L_0054c3f1:; BB(0x0054c3f1);
    /* 0054c3f1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054c3f4: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054c3f9: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_0054c3fc:; BB(0x0054c3fc);
    /* 0054c3fc: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0054c403: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c405: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x54c40au); f_005caba4();
    /* 0054c40a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054c40b: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0054c40e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c410: je 0x54c439 */ if (fZ) goto L_0054c439;
L_0054c412:; BB(0x0054c412);
    /* 0054c412: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 0054c419: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0054c420: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c425: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054c428: mov ecx, eax */ r_ecx = r_eax;
    /* 0054c42a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c42b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c42c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c42d: call 0x54dda0 */ r_esp -= 4; W32(r_esp, 0x54c432u); f_0054dda0();
    /* 0054c432: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0054c439:; BB(0x0054c439);
    /* 0054c439: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0054c440:; BB(0x0054c440);
    /* 0054c440: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054c443: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054c446: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0054c449: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c44c: jl 0x54c347 */ if ((fS!=fO)) goto L_0054c347;
L_0054c452:; BB(0x0054c452);
    /* 0054c452: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054c455: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c457: je 0x54c461 */ if (fZ) goto L_0054c461;
L_0054c459:; BB(0x0054c459);
    /* 0054c459: mov eax, 1 */ r_eax = 0x1u;
    /* 0054c45e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0054c461:; BB(0x0054c461);
    /* 0054c461: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c464: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x54c469u); f_0052126c();
    /* 0054c469: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c46b: je 0x54c4d9 */ if (fZ) goto L_0054c4d9;
L_0054c46d:; BB(0x0054c46d);
    /* 0054c46d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c470: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 0054c473: mov esi, dword ptr [edx + 0x398] */ r_esi = R32((u32)(r_edx+0x398u));
    /* 0054c479: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0054c47c: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 0054c47f: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 0054c482: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0054c485: mov dword ptr [ebp - 0x54], ebx */ W32((u32)(r_ebp+0xffffffacu), r_ebx);
    /* 0054c488: mov dword ptr [ebp - 0x50], edi */ W32((u32)(r_ebp+0xffffffb0u), r_edi);
    /* 0054c48b: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 0054c48e: mov edx, ebx */ r_edx = r_ebx;
    /* 0054c490: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x54c495u); f_0082f9c4();
    /* 0054c495: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 0054c498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c499: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x54c49eu); f_007828e4();
    /* 0054c49e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054c49f: fcomp dword ptr [0x9241d0] */ fx_compare(ST(0), R_F32((u32)(0x9241d0u))); FPOP();
    /* 0054c4a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054c4a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054c4a8: jb 0x54c4d9 */ if (fC) goto L_0054c4d9;
L_0054c4aa:; BB(0x0054c4aa);
    /* 0054c4aa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c4ad: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0054c4b0: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x54c4b5u); f_0082dcbc();
    /* 0054c4b5: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0054c4b8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c4bb: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0054c4be: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x54c4c3u); f_0082ddd8();
    /* 0054c4c3: fmul dword ptr [ebp - 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffb0u));
    /* 0054c4c6: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 0054c4c9: fmul dword ptr [ebp - 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffa8u));
    /* 0054c4cc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0054c4ce: fcomp dword ptr [0x9241dc] */ fx_compare(ST(0), R_F32((u32)(0x9241dcu))); FPOP();
    /* 0054c4d4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054c4d6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054c4d7: jb 0x54c508 */ if (fC) goto L_0054c508;
L_0054c4d9:; BB(0x0054c4d9);
    /* 0054c4d9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054c4dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0054c4de: jne 0x54c502 */ if (!fZ) goto L_0054c502;
L_0054c4e0:; BB(0x0054c4e0);
    /* 0054c4e0: mov ecx, dword ptr [0xa73910] */ r_ecx = R32((u32)(0xa73910u));
    /* 0054c4e6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c4e9: fld dword ptr [edx + 0x4e8] */ FPUSH(R_F32((u32)(r_edx+0x4e8u)));
    /* 0054c4ef: fcomp dword ptr [ecx + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x10u))); FPOP();
    /* 0054c4f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054c4f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054c4f5: jb 0x54c83d */ if (fC) goto L_0054c83d;
L_0054c4fb:; BB(0x0054c4fb);
    /* 0054c4fb: mov eax, edx */ r_eax = r_edx;
    /* 0054c4fd: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 0054c500: jmp 0x54c508 */ goto L_0054c508;
L_0054c502:; BB(0x0054c502);
    /* 0054c502: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c505: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
L_0054c508:; BB(0x0054c508);
    /* 0054c508: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c50b: mov dword ptr [ecx + 0x4d4], 2 */ W32((u32)(r_ecx+0x4d4u), 0x2u);
    /* 0054c515: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c517: mov dword ptr [ecx + 0x4d8], 0 */ W32((u32)(r_ecx+0x4d8u), 0x0u);
    /* 0054c521: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x54c526u); f_0051f664();
    /* 0054c526: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c529: push 0x269 */ { u32 v = 0x269u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c52e: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54c533u); f_007879b8();
    /* 0054c533: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054c535: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c536: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c537: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c538: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c539: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54c53eu); f_00814298();
    /* 0054c53e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054c541: jmp 0x54c83d */ goto L_0054c83d;
L_0054c546:; BB(0x0054c546);
    /* 0054c546: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054c549: jne 0x54c83d */ if (!fZ) goto L_0054c83d;
L_0054c54f:; BB(0x0054c54f);
    /* 0054c54f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c552: mov edx, dword ptr [eax + 0x4d8] */ r_edx = R32((u32)(r_eax+0x4d8u));
    /* 0054c558: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054c55b: mov dword ptr [eax + 0x4d8], edx */ W32((u32)(r_eax+0x4d8u), r_edx);
    /* 0054c561: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c564: jge 0x54c884 */ if ((fS==fO)) goto L_0054c884;
L_0054c56a:; BB(0x0054c56a);
    /* 0054c56a: mov ecx, eax */ r_ecx = r_eax;
    /* 0054c56c: mov esi, dword ptr [ecx + 0x4a4] */ r_esi = R32((u32)(r_ecx+0x4a4u));
    /* 0054c572: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0054c575: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0054c578: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0054c57b: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0054c57e: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 0054c581: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 0054c584: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x54c589u); f_007b51c4();
    /* 0054c589: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c58c: mov ecx, dword ptr [eax + 0x4a4] */ r_ecx = R32((u32)(r_eax+0x4a4u));
    /* 0054c592: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54c597u); f_007b6894();
    /* 0054c597: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c59a: mov edx, dword ptr [eax + 0x4a4] */ r_edx = R32((u32)(r_eax+0x4a4u));
    /* 0054c5a0: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 0054c5a6: mov ebx, dword ptr [ecx + 0x18] */ r_ebx = R32((u32)(r_ecx+0x18u));
    /* 0054c5a9: test ebx, 0x180000 */ {  u32 a = r_ebx; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c5af: je 0x54c6c5 */ if (fZ) goto L_0054c6c5;
L_0054c5b5:; BB(0x0054c5b5);
    /* 0054c5b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054c5b7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0054c5ba:; BB(0x0054c5ba);
    /* 0054c5ba: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054c5bd: mov edx, dword ptr [eax*4 + 0xaad6e0] */ r_edx = R32((u32)(r_eax*4+0xaad6e0u));
    /* 0054c5c4: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0054c5c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c5c9: je 0x54c6c5 */ if (fZ) goto L_0054c6c5;
L_0054c5cf:; BB(0x0054c5cf);
    /* 0054c5cf: mov eax, edx */ r_eax = r_edx;
    /* 0054c5d1: movzx edx, word ptr [eax + 0x96] */ r_edx = (u32)R16((u32)(r_eax+0x96u));
    /* 0054c5d8: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c5db: jne 0x54c6b3 */ if (!fZ) goto L_0054c6b3;
L_0054c5e1:; BB(0x0054c5e1);
    /* 0054c5e1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c5e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c5e5: mov ecx, dword ptr [edx + 0x4a8] */ r_ecx = R32((u32)(r_edx+0x4a8u));
    /* 0054c5eb: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x54c5f0u); f_00521b18();
    /* 0054c5f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c5f2: je 0x54c6b3 */ if (fZ) goto L_0054c6b3;
L_0054c5f8:; BB(0x0054c5f8);
    /* 0054c5f8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c5fb: mov edx, dword ptr [eax + 0x3c8] */ r_edx = R32((u32)(r_eax+0x3c8u));
    /* 0054c601: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054c604: je 0x54c628 */ if (fZ) goto L_0054c628;
L_0054c606:; BB(0x0054c606);
    /* 0054c606: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0054c60b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c60e: je 0x54c86d */ if (fZ) goto L_0054c86d;
L_0054c614:; BB(0x0054c614);
    /* 0054c614: mov eax, dword ptr [0xa73910] */ r_eax = R32((u32)(0xa73910u));
    /* 0054c619: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 0054c61c: fstp dword ptr [ebp - 0x74] */ W_F32((u32)(r_ebp+0xffffff8cu), ST(0)); FPOP();
    /* 0054c61f: mov dword ptr [ebp - 0x78], 3 */ W32((u32)(r_ebp+0xffffff88u), 0x3u);
    /* 0054c626: jmp 0x54c63a */ goto L_0054c63a;
L_0054c628:; BB(0x0054c628);
    /* 0054c628: mov eax, dword ptr [0xa73910] */ r_eax = R32((u32)(0xa73910u));
    /* 0054c62d: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 0054c630: fstp dword ptr [ebp - 0x74] */ W_F32((u32)(r_ebp+0xffffff8cu), ST(0)); FPOP();
    /* 0054c633: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0054c63a:; BB(0x0054c63a);
    /* 0054c63a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054c63d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c640: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0054c642: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0054c647: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c648: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c649: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c64b: push dword ptr [ebp - 0x74] */ { u32 v = R32((u32)(r_ebp+0xffffff8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054c64e: push dword ptr [ebp - 0x78] */ { u32 v = R32((u32)(r_ebp+0xffffff88u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054c651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c652: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x54c655u); call_ind(t); }
    /* 0054c655: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054c657: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054c65a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0054c65d: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c662: jne 0x54c66f */ if (!fZ) goto L_0054c66f;
L_0054c664:; BB(0x0054c664);
    /* 0054c664: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054c667: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054c66c: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_0054c66f:; BB(0x0054c66f);
    /* 0054c66f: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 0054c676: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c678: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x54c67du); f_005caba4();
    /* 0054c67d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054c67e: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0054c681: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c683: je 0x54c6ac */ if (fZ) goto L_0054c6ac;
L_0054c685:; BB(0x0054c685);
    /* 0054c685: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
    /* 0054c68c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054c693: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c698: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054c69b: mov ecx, eax */ r_ecx = r_eax;
    /* 0054c69d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c69e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c69f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c6a0: call 0x54dda0 */ r_esp -= 4; W32(r_esp, 0x54c6a5u); f_0054dda0();
    /* 0054c6a5: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0054c6ac:; BB(0x0054c6ac);
    /* 0054c6ac: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0054c6b3:; BB(0x0054c6b3);
    /* 0054c6b3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054c6b6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054c6b9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0054c6bc: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c6bf: jl 0x54c5ba */ if ((fS!=fO)) goto L_0054c5ba;
L_0054c6c5:; BB(0x0054c6c5);
    /* 0054c6c5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c6c8: push dword ptr [ecx + 0x4e4] */ { u32 v = R32((u32)(r_ecx+0x4e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054c6ce: push dword ptr [ecx + 0x3b0] */ { u32 v = R32((u32)(r_ecx+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054c6d4: push dword ptr [ecx + 0x3a8] */ { u32 v = R32((u32)(r_ecx+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054c6da: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x54c6dfu); f_005209d4();
    /* 0054c6df: jmp 0x54c83d */ goto L_0054c83d;
L_0054c6e4:; BB(0x0054c6e4);
    /* 0054c6e4: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c6e9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c6ec: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54c6f1u); f_007aaa30();
    /* 0054c6f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c6f3: jne 0x54c706 */ if (!fZ) goto L_0054c706;
L_0054c6f5:; BB(0x0054c6f5);
    /* 0054c6f5: push 0x41d00000 */ { u32 v = 0x41d00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c6fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c6fd: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54c702u); f_007aaa30();
    /* 0054c702: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c704: je 0x54c72f */ if (fZ) goto L_0054c72f;
L_0054c706:; BB(0x0054c706);
    /* 0054c706: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c709: push 0x267 */ { u32 v = 0x267u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c70e: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54c713u); f_007879b8();
    /* 0054c713: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c716: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 0054c719: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054c71b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c71c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c71d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c71e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c71f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54c724u); f_00814298();
    /* 0054c724: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c727: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c72a: call 0x54be70 */ r_esp -= 4; W32(r_esp, 0x54c72fu); f_0054be70();
L_0054c72f:; BB(0x0054c72f);
    /* 0054c72f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c732: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0054c738: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054c73b: je 0x54c767 */ if (fZ) goto L_0054c767;
L_0054c73d:; BB(0x0054c73d);
    /* 0054c73d: mov edx, eax */ r_edx = r_eax;
    /* 0054c73f: mov ebx, dword ptr [edx + 0xa4] */ r_ebx = R32((u32)(r_edx+0xa4u));
    /* 0054c745: mov dword ptr [edx + 0x4d4], 1 */ W32((u32)(r_edx+0x4d4u), 0x1u);
    /* 0054c74f: mov eax, 2 */ r_eax = 0x2u;
    /* 0054c754: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 0054c75b: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 0054c75e: or ecx, 0x700 */ {  u32 a = r_ecx; u32 b = 0x700u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0054c764: mov dword ptr [ebx + 0x18], ecx */ W32((u32)(r_ebx+0x18u), r_ecx);
L_0054c767:; BB(0x0054c767);
    /* 0054c767: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c76a: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x54c76fu); f_0052126c();
    /* 0054c76f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c771: je 0x54c783 */ if (fZ) goto L_0054c783;
L_0054c773:; BB(0x0054c773);
    /* 0054c773: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c776: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x54c77bu); f_005213d8();
    /* 0054c77b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c77e: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x54c783u); f_00521410();
L_0054c783:; BB(0x0054c783);
    /* 0054c783: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c786: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 0054c78c: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 0054c792: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0054c794: fmul qword ptr [0x924150] */ ST(0) = ST(0) * R_F64((u32)(0x924150u));
    /* 0054c79a: fdiv qword ptr [0x924148] */ ST(0) = ST(0) / R_F64((u32)(0x924148u));
    /* 0054c7a0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c7a3: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 0054c7a6: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 0054c7aa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054c7af: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0054c7b2: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 0054c7b5: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0054c7b8: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 0054c7bb: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0054c7be: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c7c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c7c4: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054c7c7: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x54c7ccu); f_007a8c74();
    /* 0054c7cc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c7cf: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c7d4: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c7d9: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 0054c7dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c7dd: push dword ptr [edx + 0x48c] */ { u32 v = R32((u32)(r_edx+0x48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054c7e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c7e4: call 0x782ac0 */ r_esp -= 4; W32(r_esp, 0x54c7e9u); f_00782ac0();
    /* 0054c7e9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c7ec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c7ef: mov dword ptr [ecx + 0x48c], eax */ W32((u32)(r_ecx+0x48cu), r_eax);
    /* 0054c7f5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0054c7f7: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x54c7fdu); call_ind(t); }
    /* 0054c7fd: jmp 0x54c83d */ goto L_0054c83d;
L_0054c7ff:; BB(0x0054c7ff);
    /* 0054c7ff: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054c802: jne 0x54c83d */ if (!fZ) goto L_0054c83d;
L_0054c804:; BB(0x0054c804);
    /* 0054c804: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0054c80a: mov ebx, dword ptr [ecx + 0xa4] */ r_ebx = R32((u32)(r_ecx+0xa4u));
    /* 0054c810: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054c813: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 0054c819: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 0054c81c: and edx, 0xfffff8ff */ {  u32 a = r_edx; u32 b = 0xfffff8ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054c822: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 0054c825: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x54c82au); f_00520be8();
    /* 0054c82a: jmp 0x54c83d */ goto L_0054c83d;
L_0054c82c:; BB(0x0054c82c);
    /* 0054c82c: mov eax, ecx */ r_eax = r_ecx;
    /* 0054c82e: mov edx, dword ptr [eax + 0x4d4] */ r_edx = R32((u32)(r_eax+0x4d4u));
    /* 0054c834: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054c837: je 0x54c8da */ if (fZ) goto L_0054c8da;
L_0054c83d:; BB(0x0054c83d);
    /* 0054c83d: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0054c840: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0054c843: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054c846: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c849: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054c850: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c852: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c853: ret 4 */ FN_RET(0x0054c1b8); r_esp += 8; return;
L_0054c856:; BB(0x0054c856);
    /* 0054c856: mov eax, dword ptr [0xa73910] */ r_eax = R32((u32)(0xa73910u));
    /* 0054c85b: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 0054c85e: fstp dword ptr [ebp - 0x64] */ W_F32((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 0054c861: mov dword ptr [ebp - 0x68], 5 */ W32((u32)(r_ebp+0xffffff98u), 0x5u);
    /* 0054c868: jmp 0x54c3c7 */ goto L_0054c3c7;
L_0054c86d:; BB(0x0054c86d);
    /* 0054c86d: mov eax, dword ptr [0xa73910] */ r_eax = R32((u32)(0xa73910u));
    /* 0054c872: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 0054c875: fstp dword ptr [ebp - 0x74] */ W_F32((u32)(r_ebp+0xffffff8cu), ST(0)); FPOP();
    /* 0054c878: mov dword ptr [ebp - 0x78], 5 */ W32((u32)(r_ebp+0xffffff88u), 0x5u);
    /* 0054c87f: jmp 0x54c63a */ goto L_0054c63a;
L_0054c884:; BB(0x0054c884);
    /* 0054c884: mov ecx, eax */ r_ecx = r_eax;
    /* 0054c886: mov eax, 3 */ r_eax = 0x3u;
    /* 0054c88b: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0054c892: call 0x54d8ac */ r_esp -= 4; W32(r_esp, 0x54c897u); f_0054d8ac();
    /* 0054c897: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c89a: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0054c8a0: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054c8a3: je 0x54c8c0 */ if (fZ) goto L_0054c8c0;
L_0054c8a5:; BB(0x0054c8a5);
    /* 0054c8a5: mov edx, eax */ r_edx = r_eax;
    /* 0054c8a7: mov eax, dword ptr [edx + 0x3c8] */ r_eax = R32((u32)(r_edx+0x3c8u));
    /* 0054c8ad: mov dword ptr [edx + 0x4d4], 3 */ W32((u32)(r_edx+0x4d4u), 0x3u);
    /* 0054c8b7: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054c8ba: mov dword ptr [edx + 0x3c8], eax */ W32((u32)(r_edx+0x3c8u), r_eax);
L_0054c8c0:; BB(0x0054c8c0);
    /* 0054c8c0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c8c3: fld dword ptr [eax + 0x4e4] */ FPUSH(R_F32((u32)(r_eax+0x4e4u)));
    /* 0054c8c9: fmul dword ptr [0x9241e8] */ ST(0) = ST(0) * R_F32((u32)(0x9241e8u));
    /* 0054c8cf: fstp dword ptr [eax + 0x4e4] */ W_F32((u32)(r_eax+0x4e4u), ST(0)); FPOP();
    /* 0054c8d5: jmp 0x54c56a */ goto L_0054c56a;
L_0054c8da:; BB(0x0054c8da);
    /* 0054c8da: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0054c8e0: mov dword ptr [ecx + 0x490], 0 */ W32((u32)(r_ecx+0x490u), 0x0u);
    /* 0054c8ea: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054c8ed: add dword ptr [ecx + 0x494], 1 */ { u32 ad = (u32)(r_ecx+0x494u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0054c8f4: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 0054c8fa: call 0x54b420 */ r_esp -= 4; W32(r_esp, 0x54c8ffu); f_0054b420();
    /* 0054c8ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054c901: jne 0x54c83d */ if (!fZ) goto L_0054c83d;
L_0054c907:; BB(0x0054c907);
    /* 0054c907: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c90a: call 0x54b44c */ r_esp -= 4; W32(r_esp, 0x54c90fu); f_0054b44c();
    /* 0054c90f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054c911: jne 0x54c83d */ if (!fZ) goto L_0054c83d;
L_0054c917:; BB(0x0054c917);
    /* 0054c917: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c91a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c91c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54c921u); f_0051f62c();
    /* 0054c921: jmp 0x54c83d */ goto L_0054c83d;
L_0054c926:; BB(0x0054c926);
    /* 0054c926: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c928: mov eax, 7 */ r_eax = 0x7u;
    /* 0054c92d: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0054c934: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x54c939u); f_0051f664();
    /* 0054c939: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c93c: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0054c942: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054c945: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054c948: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0054c94e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054c950: mov dword ptr [esi + 0x4d4], edx */ W32((u32)(r_esi+0x4d4u), r_edx);
    /* 0054c956: mov dword ptr [esi + 0x4d8], edx */ W32((u32)(r_esi+0x4d8u), r_edx);
    /* 0054c95c: mov ecx, dword ptr [0xa73910] */ r_ecx = R32((u32)(0xa73910u));
    /* 0054c962: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0054c964: mov dword ptr [esi + 0x4e4], ebx */ W32((u32)(r_esi+0x4e4u), r_ebx);
    /* 0054c96a: mov ebx, dword ptr [esi + 0x4a8] */ r_ebx = R32((u32)(r_esi+0x4a8u));
    /* 0054c970: mov dword ptr [esi + 0x4e8], 0 */ W32((u32)(r_esi+0x4e8u), 0x0u);
    /* 0054c97a: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0054c97d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054c97f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054c981: jle 0x54c993 */ if ((fZ||fS!=fO)) goto L_0054c993;
L_0054c983:; BB(0x0054c983);
    /* 0054c983: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0054c985: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0054c988: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 0054c98b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054c98e: cmp ecx, dword ptr [ebx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c991: jl 0x54c983 */ if ((fS!=fO)) goto L_0054c983;
L_0054c993:; BB(0x0054c993);
    /* 0054c993: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054c996: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 0054c99d: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x54c9a2u); f_00520bdc();
    /* 0054c9a2: jmp 0x54c83d */ goto L_0054c83d;
}

void f_0054c9a8(void) /* sub_54C9A8 */
{
    FN_ENTER(0x0054c9a8);
    /* 0054c9a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054c9a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054c9aa: mov edi, ecx */ r_edi = r_ecx;
    /* 0054c9ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c9ae: mov ecx, edi */ r_ecx = r_edi;
    /* 0054c9b0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54c9b5u); f_007aaa30();
    /* 0054c9b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c9b7: jne 0x54c9c9 */ if (!fZ) goto L_0054c9c9;
L_0054c9b9:; BB(0x0054c9b9);
    /* 0054c9b9: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c9be: mov ecx, edi */ r_ecx = r_edi;
    /* 0054c9c0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54c9c5u); f_007aaa30();
    /* 0054c9c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054c9c7: je 0x54ca0b */ if (fZ) goto L_0054ca0b;
L_0054c9c9:; BB(0x0054c9c9);
    /* 0054c9c9: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0054c9cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054c9cd: mov ecx, edi */ r_ecx = r_edi;
    /* 0054c9cf: call 0x54bed4 */ r_esp -= 4; W32(r_esp, 0x54c9d4u); f_0054bed4();
    /* 0054c9d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c9d6: je 0x54c9e5 */ if (fZ) goto L_0054c9e5;
L_0054c9d8:; BB(0x0054c9d8);
    /* 0054c9d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054c9d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054c9da: call 0x578c08 */ r_esp -= 4; W32(r_esp, 0x54c9dfu); f_00578c08();
    /* 0054c9df: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054c9e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054c9e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054c9e4: ret  */ FN_RET(0x0054c9a8); r_esp += 4; return;
L_0054c9e5:; BB(0x0054c9e5);
    /* 0054c9e5: push 0x268 */ { u32 v = 0x268u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c9ea: mov ecx, edi */ r_ecx = r_edi;
    /* 0054c9ec: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54c9f1u); f_007879b8();
    /* 0054c9f1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054c9f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c9f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c9f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054c9f6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054c9f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c9f8: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x54c9fdu); f_008144b0();
    /* 0054c9fd: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ca02: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054ca03: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x54ca08u); f_0050b510();
    /* 0054ca08: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0054ca0b:; BB(0x0054ca0b);
    /* 0054ca0b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054ca0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054ca0d: ret  */ FN_RET(0x0054c9a8); r_esp += 4; return;
}

void f_0054ca10(void) /* sub_54CA10 */
{
    FN_ENTER(0x0054ca10);
    /* 0054ca10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054ca11: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ca12: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054ca15: mov esi, ecx */ r_esi = r_ecx;
    /* 0054ca17: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0054ca1b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ca1e: je 0x54cbf5 */ if (fZ) goto L_0054cbf5;
L_0054ca24:; BB(0x0054ca24);
    /* 0054ca24: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ca27: je 0x54cb8e */ if (fZ) goto L_0054cb8e;
L_0054ca2d:; BB(0x0054ca2d);
    /* 0054ca2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ca2f: jne 0x54cbdc */ if (!fZ) goto L_0054cbdc;
L_0054ca35:; BB(0x0054ca35);
    /* 0054ca35: mov ecx, esi */ r_ecx = r_esi;
    /* 0054ca37: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54ca3cu); f_007aa094();
    /* 0054ca3c: mov ecx, esi */ r_ecx = r_esi;
    /* 0054ca3e: call 0x53c3d0 */ r_esp -= 4; W32(r_esp, 0x54ca43u); f_0053c3d0();
    /* 0054ca43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ca45: je 0x54ca55 */ if (fZ) goto L_0054ca55;
L_0054ca47:; BB(0x0054ca47);
    /* 0054ca47: mov ecx, esi */ r_ecx = r_esi;
    /* 0054ca49: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x54ca4eu); f_005213d8();
    /* 0054ca4e: mov ecx, esi */ r_ecx = r_esi;
    /* 0054ca50: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x54ca55u); f_00521410();
L_0054ca55:; BB(0x0054ca55);
    /* 0054ca55: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 0054ca5b: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 0054ca61: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0054ca63: fmul qword ptr [0x924140] */ ST(0) = ST(0) * R_F64((u32)(0x924140u));
    /* 0054ca69: fdiv qword ptr [0x924138] */ ST(0) = ST(0) / R_F64((u32)(0x924138u));
    /* 0054ca6f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0054ca72: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0054ca76: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054ca7b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0054ca7f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0054ca83: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0054ca87: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0054ca8a: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0054ca8e: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ca93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ca94: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054ca97: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x54ca9cu); f_007a8c74();
    /* 0054ca9c: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054caa1: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0054caa6: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0054caa9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054caaa: push dword ptr [esi + 0x48c] */ { u32 v = R32((u32)(r_esi+0x48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054cab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054cab1: call 0x782ac0 */ r_esp -= 4; W32(r_esp, 0x54cab6u); f_00782ac0();
    /* 0054cab6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054cab9: mov edx, dword ptr [0xa73910] */ r_edx = R32((u32)(0xa73910u));
    /* 0054cabf: mov dword ptr [esi + 0x48c], eax */ W32((u32)(r_esi+0x48cu), r_eax);
    /* 0054cac5: fild dword ptr [edx + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x28u)));
    /* 0054cac8: fcomp dword ptr [esi + 0x3b4] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x3b4u))); FPOP();
    /* 0054cace: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054cad0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054cad1: jb 0x54cb20 */ if (fC) goto L_0054cb20;
L_0054cad3:; BB(0x0054cad3);
    /* 0054cad3: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0054cad6: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x54cadbu); f_0082dcbc();
    /* 0054cadb: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0054cadf: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0054cae2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x54cae7u); f_0082ddd8();
    /* 0054cae7: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 0054caed: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 0054caf1: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 0054caf7: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0054caf9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0054cafb: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0054caff: mov ecx, 0x1800 */ r_ecx = 0x1800u;
    /* 0054cb04: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x54cb09u); f_0082ddd8();
    /* 0054cb09: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0054cb0d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0054cb0f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054cb11: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054cb12: jb 0x54cb55 */ if (fC) goto L_0054cb55;
L_0054cb14:; BB(0x0054cb14);
    /* 0054cb14: mov dword ptr [esi + 0x4d4], 1 */ W32((u32)(r_esi+0x4d4u), 0x1u);
    /* 0054cb1e: jmp 0x54cb55 */ goto L_0054cb55;
L_0054cb20:; BB(0x0054cb20);
    /* 0054cb20: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0054cb23: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x54cb28u); f_0082dcbc();
    /* 0054cb28: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0054cb2c: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0054cb2f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x54cb34u); f_0082ddd8();
    /* 0054cb34: mov eax, dword ptr [0xa73910] */ r_eax = R32((u32)(0xa73910u));
    /* 0054cb39: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0054cb3c: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054cb3f: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0054cb43: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0054cb46: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0054cb4a: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0054cb4e: mov ecx, esi */ r_ecx = r_esi;
    /* 0054cb50: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x54cb55u); f_005209d4();
L_0054cb55:; BB(0x0054cb55);
    /* 0054cb55: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054cb57: mov ecx, esi */ r_ecx = r_esi;
    /* 0054cb59: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x54cb5fu); call_ind(t); }
    /* 0054cb5f: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054cb64: mov ecx, esi */ r_ecx = r_esi;
    /* 0054cb66: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54cb6bu); f_007aaa30();
    /* 0054cb6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cb6d: jne 0x54cb7f */ if (!fZ) goto L_0054cb7f;
L_0054cb6f:; BB(0x0054cb6f);
    /* 0054cb6f: push 0x41a80000 */ { u32 v = 0x41a80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054cb74: mov ecx, esi */ r_ecx = r_esi;
    /* 0054cb76: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54cb7bu); f_007aaa30();
    /* 0054cb7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cb7d: je 0x54cbdc */ if (fZ) goto L_0054cbdc;
L_0054cb7f:; BB(0x0054cb7f);
    /* 0054cb7f: mov ecx, esi */ r_ecx = r_esi;
    /* 0054cb81: call 0x54cc38 */ r_esp -= 4; W32(r_esp, 0x54cb86u); f_0054cc38();
    /* 0054cb86: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054cb89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054cb8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054cb8b: ret 4 */ FN_RET(0x0054ca10); r_esp += 8; return;
L_0054cb8e:; BB(0x0054cb8e);
    /* 0054cb8e: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 0054cb94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cb96: je 0x54cbe4 */ if (fZ) goto L_0054cbe4;
L_0054cb98:; BB(0x0054cb98);
    /* 0054cb98: mov edx, dword ptr [0xa73910] */ r_edx = R32((u32)(0xa73910u));
    /* 0054cb9e: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 0054cba4: fcomp dword ptr [edx + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x14u))); FPOP();
    /* 0054cba7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054cba9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054cbaa: jb 0x54cbc8 */ if (fC) goto L_0054cbc8;
L_0054cbac:; BB(0x0054cbac);
    /* 0054cbac: mov eax, dword ptr [esi + 0x494] */ r_eax = R32((u32)(r_esi+0x494u));
    /* 0054cbb2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054cbb5: jge 0x54cbc8 */ if ((fS==fO)) goto L_0054cbc8;
L_0054cbb7:; BB(0x0054cbb7);
    /* 0054cbb7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0054cbb9: mov ecx, esi */ r_ecx = r_esi;
    /* 0054cbbb: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54cbc0u); f_0051f62c();
    /* 0054cbc0: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054cbc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054cbc4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054cbc5: ret 4 */ FN_RET(0x0054ca10); r_esp += 8; return;
L_0054cbc8:; BB(0x0054cbc8);
    /* 0054cbc8: mov eax, dword ptr [esi + 0x4d4] */ r_eax = R32((u32)(r_esi+0x4d4u));
    /* 0054cbce: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cbd1: jne 0x54cbdc */ if (!fZ) goto L_0054cbdc;
L_0054cbd3:; BB(0x0054cbd3);
    /* 0054cbd3: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0054cbd5: mov ecx, esi */ r_ecx = r_esi;
    /* 0054cbd7: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54cbdcu); f_0051f62c();
L_0054cbdc:; BB(0x0054cbdc);
    /* 0054cbdc: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054cbdf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054cbe0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054cbe1: ret 4 */ FN_RET(0x0054ca10); r_esp += 8; return;
L_0054cbe4:; BB(0x0054cbe4);
    /* 0054cbe4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054cbe6: mov ecx, esi */ r_ecx = r_esi;
    /* 0054cbe8: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54cbedu); f_0051f62c();
    /* 0054cbed: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054cbf0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054cbf1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054cbf2: ret 4 */ FN_RET(0x0054ca10); r_esp += 8; return;
L_0054cbf5:; BB(0x0054cbf5);
    /* 0054cbf5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054cbf7: mov eax, 1 */ r_eax = 0x1u;
    /* 0054cbfc: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0054cc03: mov ecx, esi */ r_ecx = r_esi;
    /* 0054cc05: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x54cc0au); f_0051f664();
    /* 0054cc0a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054cc0c: mov ecx, esi */ r_ecx = r_esi;
    /* 0054cc0e: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x54cc14u); call_ind(t); }
    /* 0054cc14: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0054cc1a: mov dword ptr [esi + 0x4d4], 0 */ W32((u32)(r_esi+0x4d4u), 0x0u);
    /* 0054cc24: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054cc27: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0054cc2d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054cc30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054cc31: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054cc32: ret 4 */ FN_RET(0x0054ca10); r_esp += 8; return;
}

void f_0054cc38(void) /* sub_54CC38 */
{
    FN_ENTER(0x0054cc38);
    /* 0054cc38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054cc39: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054cc3a: mov edi, ecx */ r_edi = r_ecx;
    /* 0054cc3c: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0054cc3f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054cc40: mov ecx, edi */ r_ecx = r_edi;
    /* 0054cc42: call 0x54bed4 */ r_esp -= 4; W32(r_esp, 0x54cc47u); f_0054bed4();
    /* 0054cc47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cc49: je 0x54cc55 */ if (fZ) goto L_0054cc55;
L_0054cc4b:; BB(0x0054cc4b);
    /* 0054cc4b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054cc4c: call 0x578bac */ r_esp -= 4; W32(r_esp, 0x54cc51u); f_00578bac();
    /* 0054cc51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054cc52: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054cc53: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054cc54: ret  */ FN_RET(0x0054cc38); r_esp += 4; return;
L_0054cc55:; BB(0x0054cc55);
    /* 0054cc55: push 0x266 */ { u32 v = 0x266u; r_esp -= 4; W32(r_esp, v); }
    /* 0054cc5a: mov ecx, edi */ r_ecx = r_edi;
    /* 0054cc5c: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54cc61u); f_007879b8();
    /* 0054cc61: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054cc63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054cc64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054cc65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054cc66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054cc67: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54cc6cu); f_00814298();
    /* 0054cc6c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054cc6f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054cc70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054cc71: ret  */ FN_RET(0x0054cc38); r_esp += 4; return;
}

void f_0054cc74(void) /* sub_54CC74 */
{
    FN_ENTER(0x0054cc74);
    /* 0054cc74: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054cc75: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0054cc77: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054cc7b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cc7e: je 0x54cd64 */ if (fZ) goto L_0054cd64;
L_0054cc84:; BB(0x0054cc84);
    /* 0054cc84: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cc87: je 0x54cd3a */ if (fZ) goto L_0054cd3a;
L_0054cc8d:; BB(0x0054cc8d);
    /* 0054cc8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054cc8f: jne 0x54cd53 */ if (!fZ) goto L_0054cd53;
L_0054cc95:; BB(0x0054cc95);
    /* 0054cc95: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054cc97: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54cc9cu); f_007aa094();
    /* 0054cc9c: mov eax, dword ptr [ebx + 0x4d4] */ r_eax = R32((u32)(r_ebx+0x4d4u));
    /* 0054cca2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cca4: jne 0x54cd00 */ if (!fZ) goto L_0054cd00;
L_0054cca6:; BB(0x0054cca6);
    /* 0054cca6: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ccab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054ccad: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x54ccb2u); f_00520ea0();
    /* 0054ccb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ccb4: je 0x54ccc2 */ if (fZ) goto L_0054ccc2;
L_0054ccb6:; BB(0x0054ccb6);
    /* 0054ccb6: mov dword ptr [ebx + 0x4d4], 2 */ W32((u32)(r_ebx+0x4d4u), 0x2u);
    /* 0054ccc0: jmp 0x54cd22 */ goto L_0054cd22;
L_0054ccc2:; BB(0x0054ccc2);
    /* 0054ccc2: mov eax, dword ptr [ebx + 0x4d8] */ r_eax = R32((u32)(r_ebx+0x4d8u));
    /* 0054ccc8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054cccb: mov dword ptr [ebx + 0x4d8], eax */ W32((u32)(r_ebx+0x4d8u), r_eax);
    /* 0054ccd1: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ccd4: jl 0x54cd22 */ if ((fS!=fO)) goto L_0054cd22;
L_0054ccd6:; BB(0x0054ccd6);
    /* 0054ccd6: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 0054ccdc: mov dword ptr [ebx + 0x4d4], 1 */ W32((u32)(r_ebx+0x4d4u), 0x1u);
    /* 0054cce6: lea ecx, [ebx + 0x3dc] */ r_ecx = (u32)(r_ebx+0x3dcu);
    /* 0054ccec: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x54ccefu); call_ind(t); }
    /* 0054ccef: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0054ccf5: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054ccf8: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0054ccfe: jmp 0x54cd22 */ goto L_0054cd22;
L_0054cd00:; BB(0x0054cd00);
    /* 0054cd00: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cd03: jne 0x54cd22 */ if (!fZ) goto L_0054cd22;
L_0054cd05:; BB(0x0054cd05);
    /* 0054cd05: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 0054cd0b: lea ecx, [ebx + 0x3dc] */ r_ecx = (u32)(r_ebx+0x3dcu);
    /* 0054cd11: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x54cd14u); call_ind(t); }
    /* 0054cd14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cd16: je 0x54cd22 */ if (fZ) goto L_0054cd22;
L_0054cd18:; BB(0x0054cd18);
    /* 0054cd18: mov dword ptr [ebx + 0x4d4], 3 */ W32((u32)(r_ebx+0x4d4u), 0x3u);
L_0054cd22:; BB(0x0054cd22);
    /* 0054cd22: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0054cd24: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054cd26: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x54cd2cu); call_ind(t); }
    /* 0054cd2c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0054cd2e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054cd30: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x54cd36u); call_ind(t); }
    /* 0054cd36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054cd37: ret 4 */ FN_RET(0x0054cc74); r_esp += 8; return;
L_0054cd3a:; BB(0x0054cd3a);
    /* 0054cd3a: mov eax, dword ptr [ebx + 0x4d4] */ r_eax = R32((u32)(r_ebx+0x4d4u));
    /* 0054cd40: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cd43: je 0x54cd57 */ if (fZ) goto L_0054cd57;
L_0054cd45:; BB(0x0054cd45);
    /* 0054cd45: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054cd48: jne 0x54cd53 */ if (!fZ) goto L_0054cd53;
L_0054cd4a:; BB(0x0054cd4a);
    /* 0054cd4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054cd4c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054cd4e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54cd53u); f_0051f62c();
L_0054cd53:; BB(0x0054cd53);
    /* 0054cd53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054cd54: ret 4 */ FN_RET(0x0054cc74); r_esp += 8; return;
L_0054cd57:; BB(0x0054cd57);
    /* 0054cd57: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054cd59: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054cd5b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54cd60u); f_0051f62c();
    /* 0054cd60: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054cd61: ret 4 */ FN_RET(0x0054cc74); r_esp += 8; return;
L_0054cd64:; BB(0x0054cd64);
    /* 0054cd64: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054cd66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054cd68: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0054cd6f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054cd71: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x54cd76u); f_0051f664();
    /* 0054cd76: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0054cd7c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0054cd7e: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054cd81: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0054cd87: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054cd89: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x54cd8fu); call_ind(t); }
    /* 0054cd8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054cd91: mov dword ptr [ebx + 0x4d4], eax */ W32((u32)(r_ebx+0x4d4u), r_eax);
    /* 0054cd97: mov dword ptr [ebx + 0x4d8], eax */ W32((u32)(r_ebx+0x4d8u), r_eax);
    /* 0054cd9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054cd9e: ret 4 */ FN_RET(0x0054cc74); r_esp += 8; return;
}

void f_0054cda4(void) /* sub_54CDA4 */
{
    FN_ENTER(0x0054cda4);
    /* 0054cda4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054cda5: mov ebp, esp */ r_ebp = r_esp;
    /* 0054cda7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054cda9: push 0x8d5caa */ { u32 v = 0x8d5caau; r_esp -= 4; W32(r_esp, v); }
    /* 0054cdae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0054cdb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054cdb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0054cdbc: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054cdbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054cdc2: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0054cdc5: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0054cdc8: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0054cdcb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0054cdce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054cdd1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cdd4: je 0x54d2a8 */ if (fZ) goto L_0054d2a8;
L_0054cdda:; BB(0x0054cdda);
    /* 0054cdda: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cddd: je 0x54d1b8 */ if (fZ) goto L_0054d1b8;
L_0054cde3:; BB(0x0054cde3);
    /* 0054cde3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cde5: jne 0x54d18b */ if (!fZ) goto L_0054d18b;
L_0054cdeb:; BB(0x0054cdeb);
    /* 0054cdeb: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54cdf0u); f_007aa094();
    /* 0054cdf0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054cdf3: mov eax, dword ptr [eax + 0x4d8] */ r_eax = R32((u32)(r_eax+0x4d8u));
    /* 0054cdf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cdfb: jne 0x54cfc0 */ if (!fZ) goto L_0054cfc0;
L_0054ce01:; BB(0x0054ce01);
    /* 0054ce01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054ce04: call 0x54c9a8 */ r_esp -= 4; W32(r_esp, 0x54ce09u); f_0054c9a8();
    /* 0054ce09: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054ce0c: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0054ce0f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x54ce14u); f_0082dcbc();
    /* 0054ce14: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054ce17: fmul dword ptr [eax + 0x4e4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4e4u));
    /* 0054ce1d: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 0054ce20: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0054ce23: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 0054ce26: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x54ce2bu); f_0082ddd8();
    /* 0054ce2b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054ce2e: fmul dword ptr [ecx + 0x4e4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4e4u));
    /* 0054ce34: fadd dword ptr [ecx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x40u));
    /* 0054ce37: mov esi, dword ptr [ecx + 0x4a4] */ r_esi = R32((u32)(r_ecx+0x4a4u));
    /* 0054ce3d: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0054ce40: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 0054ce43: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0054ce46: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0054ce49: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0054ce4c: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 0054ce4f: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 0054ce52: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x54ce57u); f_007b51c4();
    /* 0054ce57: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054ce5a: mov ecx, dword ptr [eax + 0x4a4] */ r_ecx = R32((u32)(r_eax+0x4a4u));
    /* 0054ce60: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54ce65u); f_007b6894();
    /* 0054ce65: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054ce68: mov edx, dword ptr [eax + 0x4a4] */ r_edx = R32((u32)(r_eax+0x4a4u));
    /* 0054ce6e: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 0054ce74: mov ebx, dword ptr [ecx + 0x18] */ r_ebx = R32((u32)(r_ecx+0x18u));
    /* 0054ce77: test ebx, 0x180000 */ {  u32 a = r_ebx; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ce7d: je 0x54cf93 */ if (fZ) goto L_0054cf93;
L_0054ce83:; BB(0x0054ce83);
    /* 0054ce83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054ce85: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0054ce88:; BB(0x0054ce88);
    /* 0054ce88: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054ce8b: mov edx, dword ptr [eax*4 + 0xaad6e0] */ r_edx = R32((u32)(r_eax*4+0xaad6e0u));
    /* 0054ce92: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0054ce95: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ce97: je 0x54cf93 */ if (fZ) goto L_0054cf93;
L_0054ce9d:; BB(0x0054ce9d);
    /* 0054ce9d: mov eax, edx */ r_eax = r_edx;
    /* 0054ce9f: movzx edx, word ptr [eax + 0x96] */ r_edx = (u32)R16((u32)(r_eax+0x96u));
    /* 0054cea6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cea9: jne 0x54cf81 */ if (!fZ) goto L_0054cf81;
L_0054ceaf:; BB(0x0054ceaf);
    /* 0054ceaf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054ceb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ceb3: mov ecx, dword ptr [edx + 0x4a8] */ r_ecx = R32((u32)(r_edx+0x4a8u));
    /* 0054ceb9: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x54cebeu); f_00521b18();
    /* 0054cebe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cec0: je 0x54cf81 */ if (fZ) goto L_0054cf81;
L_0054cec6:; BB(0x0054cec6);
    /* 0054cec6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054cec9: mov edx, dword ptr [eax + 0x3c8] */ r_edx = R32((u32)(r_eax+0x3c8u));
    /* 0054cecf: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054ced2: je 0x54cef6 */ if (fZ) goto L_0054cef6;
L_0054ced4:; BB(0x0054ced4);
    /* 0054ced4: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0054ced9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cedc: je 0x54d1e5 */ if (fZ) goto L_0054d1e5;
L_0054cee2:; BB(0x0054cee2);
    /* 0054cee2: mov eax, dword ptr [0xa73910] */ r_eax = R32((u32)(0xa73910u));
    /* 0054cee7: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 0054ceea: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0054ceed: mov dword ptr [ebp - 0x44], 3 */ W32((u32)(r_ebp+0xffffffbcu), 0x3u);
    /* 0054cef4: jmp 0x54cf08 */ goto L_0054cf08;
L_0054cef6:; BB(0x0054cef6);
    /* 0054cef6: mov eax, dword ptr [0xa73910] */ r_eax = R32((u32)(0xa73910u));
    /* 0054cefb: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 0054cefe: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0054cf01: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0054cf08:; BB(0x0054cf08);
    /* 0054cf08: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054cf0b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054cf0e: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0054cf10: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0054cf15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054cf16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054cf17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054cf19: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054cf1c: push dword ptr [ebp - 0x44] */ { u32 v = R32((u32)(r_ebp+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054cf1f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054cf20: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x54cf23u); call_ind(t); }
    /* 0054cf23: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054cf25: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054cf28: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0054cf2b: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cf30: jne 0x54cf3d */ if (!fZ) goto L_0054cf3d;
L_0054cf32:; BB(0x0054cf32);
    /* 0054cf32: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054cf35: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054cf3a: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_0054cf3d:; BB(0x0054cf3d);
    /* 0054cf3d: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0054cf44: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0054cf46: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x54cf4bu); f_005caba4();
    /* 0054cf4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054cf4c: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0054cf4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cf51: je 0x54cf7a */ if (fZ) goto L_0054cf7a;
L_0054cf53:; BB(0x0054cf53);
    /* 0054cf53: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0054cf5a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0054cf61: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054cf66: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054cf69: mov ecx, eax */ r_ecx = r_eax;
    /* 0054cf6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054cf6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054cf6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054cf6e: call 0x54dda0 */ r_esp -= 4; W32(r_esp, 0x54cf73u); f_0054dda0();
    /* 0054cf73: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0054cf7a:; BB(0x0054cf7a);
    /* 0054cf7a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0054cf81:; BB(0x0054cf81);
    /* 0054cf81: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054cf84: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054cf87: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0054cf8a: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054cf8d: jl 0x54ce88 */ if ((fS!=fO)) goto L_0054ce88;
L_0054cf93:; BB(0x0054cf93);
    /* 0054cf93: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054cf96: mov eax, dword ptr [eax + 0x4d4] */ r_eax = R32((u32)(r_eax+0x4d4u));
    /* 0054cf9c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054cf9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054cfa1: jle 0x54d1fc */ if ((fZ||fS!=fO)) goto L_0054d1fc;
L_0054cfa7:; BB(0x0054cfa7);
    /* 0054cfa7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054cfaa: mov dword ptr [edx + 0x4d4], eax */ W32((u32)(r_edx+0x4d4u), r_eax);
L_0054cfb0:; BB(0x0054cfb0);
    /* 0054cfb0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054cfb3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0054cfb5: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x54cfbbu); call_ind(t); }
    /* 0054cfbb: jmp 0x54d159 */ goto L_0054d159;
L_0054cfc0:; BB(0x0054cfc0);
    /* 0054cfc0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cfc3: jne 0x54d159 */ if (!fZ) goto L_0054d159;
L_0054cfc9:; BB(0x0054cfc9);
    /* 0054cfc9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054cfcc: mov edx, dword ptr [eax + 0x4d4] */ r_edx = R32((u32)(r_eax+0x4d4u));
    /* 0054cfd2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054cfd5: mov dword ptr [eax + 0x4d4], edx */ W32((u32)(r_eax+0x4d4u), r_edx);
    /* 0054cfdb: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054cfde: jge 0x54d266 */ if ((fS==fO)) goto L_0054d266;
L_0054cfe4:; BB(0x0054cfe4);
    /* 0054cfe4: mov ecx, eax */ r_ecx = r_eax;
    /* 0054cfe6: mov esi, dword ptr [ecx + 0x4a4] */ r_esi = R32((u32)(r_ecx+0x4a4u));
    /* 0054cfec: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0054cfef: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0054cff2: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0054cff5: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0054cff8: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 0054cffb: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 0054cffe: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x54d003u); f_007b51c4();
    /* 0054d003: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d006: mov ecx, dword ptr [eax + 0x4a4] */ r_ecx = R32((u32)(r_eax+0x4a4u));
    /* 0054d00c: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54d011u); f_007b6894();
    /* 0054d011: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d014: mov edx, dword ptr [eax + 0x4a4] */ r_edx = R32((u32)(r_eax+0x4a4u));
    /* 0054d01a: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 0054d020: mov ebx, dword ptr [ecx + 0x18] */ r_ebx = R32((u32)(r_ecx+0x18u));
    /* 0054d023: test ebx, 0x180000 */ {  u32 a = r_ebx; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d029: je 0x54d13f */ if (fZ) goto L_0054d13f;
L_0054d02f:; BB(0x0054d02f);
    /* 0054d02f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054d031: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0054d034:; BB(0x0054d034);
    /* 0054d034: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054d037: mov edx, dword ptr [eax*4 + 0xaad6e0] */ r_edx = R32((u32)(r_eax*4+0xaad6e0u));
    /* 0054d03e: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0054d041: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d043: je 0x54d13f */ if (fZ) goto L_0054d13f;
L_0054d049:; BB(0x0054d049);
    /* 0054d049: mov eax, edx */ r_eax = r_edx;
    /* 0054d04b: movzx edx, word ptr [eax + 0x96] */ r_edx = (u32)R16((u32)(r_eax+0x96u));
    /* 0054d052: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d055: jne 0x54d12d */ if (!fZ) goto L_0054d12d;
L_0054d05b:; BB(0x0054d05b);
    /* 0054d05b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d05e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054d05f: mov ecx, dword ptr [edx + 0x4a8] */ r_ecx = R32((u32)(r_edx+0x4a8u));
    /* 0054d065: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x54d06au); f_00521b18();
    /* 0054d06a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d06c: je 0x54d12d */ if (fZ) goto L_0054d12d;
L_0054d072:; BB(0x0054d072);
    /* 0054d072: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d075: mov edx, dword ptr [eax + 0x3c8] */ r_edx = R32((u32)(r_eax+0x3c8u));
    /* 0054d07b: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054d07e: je 0x54d0a2 */ if (fZ) goto L_0054d0a2;
L_0054d080:; BB(0x0054d080);
    /* 0054d080: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0054d085: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d088: je 0x54d24f */ if (fZ) goto L_0054d24f;
L_0054d08e:; BB(0x0054d08e);
    /* 0054d08e: mov eax, dword ptr [0xa73910] */ r_eax = R32((u32)(0xa73910u));
    /* 0054d093: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 0054d096: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 0054d099: mov dword ptr [ebp - 0x54], 3 */ W32((u32)(r_ebp+0xffffffacu), 0x3u);
    /* 0054d0a0: jmp 0x54d0b4 */ goto L_0054d0b4;
L_0054d0a2:; BB(0x0054d0a2);
    /* 0054d0a2: mov eax, dword ptr [0xa73910] */ r_eax = R32((u32)(0xa73910u));
    /* 0054d0a7: fild dword ptr [eax + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x20u)));
    /* 0054d0aa: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 0054d0ad: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0054d0b4:; BB(0x0054d0b4);
    /* 0054d0b4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054d0b7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d0ba: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0054d0bc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0054d0c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d0c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d0c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d0c5: push dword ptr [ebp - 0x50] */ { u32 v = R32((u32)(r_ebp+0xffffffb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054d0c8: push dword ptr [ebp - 0x54] */ { u32 v = R32((u32)(r_ebp+0xffffffacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054d0cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d0cc: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x54d0cfu); call_ind(t); }
    /* 0054d0cf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054d0d1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054d0d4: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0054d0d7: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d0dc: jne 0x54d0e9 */ if (!fZ) goto L_0054d0e9;
L_0054d0de:; BB(0x0054d0de);
    /* 0054d0de: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054d0e1: or eax, 0x600 */ {  u32 a = r_eax; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054d0e6: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_0054d0e9:; BB(0x0054d0e9);
    /* 0054d0e9: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0054d0f0: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d0f2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x54d0f7u); f_005caba4();
    /* 0054d0f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054d0f8: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0054d0fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d0fd: je 0x54d126 */ if (fZ) goto L_0054d126;
L_0054d0ff:; BB(0x0054d0ff);
    /* 0054d0ff: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0054d106: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054d10d: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d112: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054d115: mov ecx, eax */ r_ecx = r_eax;
    /* 0054d117: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d118: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d119: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d11a: call 0x54dda0 */ r_esp -= 4; W32(r_esp, 0x54d11fu); f_0054dda0();
    /* 0054d11f: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0054d126:; BB(0x0054d126);
    /* 0054d126: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0054d12d:; BB(0x0054d12d);
    /* 0054d12d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054d130: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054d133: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0054d136: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054d139: jl 0x54d034 */ if ((fS!=fO)) goto L_0054d034;
L_0054d13f:; BB(0x0054d13f);
    /* 0054d13f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d142: push dword ptr [ecx + 0x4e4] */ { u32 v = R32((u32)(r_ecx+0x4e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054d148: push dword ptr [ecx + 0x3b0] */ { u32 v = R32((u32)(r_ecx+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054d14e: push dword ptr [ecx + 0x3a8] */ { u32 v = R32((u32)(r_ecx+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054d154: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x54d159u); f_005209d4();
L_0054d159:; BB(0x0054d159);
    /* 0054d159: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d15c: mov edx, dword ptr [eax + 0x3dc] */ r_edx = R32((u32)(r_eax+0x3dcu));
    /* 0054d162: lea ecx, [eax + 0x3dc] */ r_ecx = (u32)(r_eax+0x3dcu);
    /* 0054d168: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x54d16bu); call_ind(t); }
    /* 0054d16b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054d16d: je 0x54d1cc */ if (fZ) goto L_0054d1cc;
L_0054d16f:; BB(0x0054d16f);
    /* 0054d16f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d172: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0054d178: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0054d17a: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054d17d: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 0054d183: call dword ptr [edx + 0x16c] */ { u32 t = R32((u32)(r_edx+0x16cu)); r_esp -= 4; W32(r_esp, 0x54d189u); call_ind(t); }
    /* 0054d189: jmp 0x54d1cc */ goto L_0054d1cc;
L_0054d18b:; BB(0x0054d18b);
    /* 0054d18b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054d18e: jne 0x54d1cc */ if (!fZ) goto L_0054d1cc;
L_0054d190:; BB(0x0054d190);
    /* 0054d190: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0054d196: mov ebx, dword ptr [ecx + 0xa4] */ r_ebx = R32((u32)(r_ecx+0xa4u));
    /* 0054d19c: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054d19f: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 0054d1a5: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 0054d1a8: and edx, 0xfffff8ff */ {  u32 a = r_edx; u32 b = 0xfffff8ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054d1ae: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 0054d1b1: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x54d1b6u); f_00520be8();
    /* 0054d1b6: jmp 0x54d1cc */ goto L_0054d1cc;
L_0054d1b8:; BB(0x0054d1b8);
    /* 0054d1b8: mov eax, ecx */ r_eax = r_ecx;
    /* 0054d1ba: mov edx, dword ptr [eax + 0x4d8] */ r_edx = R32((u32)(r_eax+0x4d8u));
    /* 0054d1c0: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054d1c3: jne 0x54d1cc */ if (!fZ) goto L_0054d1cc;
L_0054d1c5:; BB(0x0054d1c5);
    /* 0054d1c5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d1c7: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54d1ccu); f_0051f62c();
L_0054d1cc:; BB(0x0054d1cc);
    /* 0054d1cc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0054d1cf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054d1d2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054d1d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054d1d8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054d1df: mov esp, ebp */ r_esp = r_ebp;
    /* 0054d1e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054d1e2: ret 4 */ FN_RET(0x0054cda4); r_esp += 8; return;
L_0054d1e5:; BB(0x0054d1e5);
    /* 0054d1e5: mov eax, dword ptr [0xa73910] */ r_eax = R32((u32)(0xa73910u));
    /* 0054d1ea: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 0054d1ed: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0054d1f0: mov dword ptr [ebp - 0x44], 5 */ W32((u32)(r_ebp+0xffffffbcu), 0x5u);
    /* 0054d1f7: jmp 0x54cf08 */ goto L_0054cf08;
L_0054d1fc:; BB(0x0054d1fc);
    /* 0054d1fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d1ff: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0054d205: mov dword ptr [ecx + 0x4d8], 1 */ W32((u32)(r_ecx+0x4d8u), 0x1u);
    /* 0054d20f: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054d212: mov dword ptr [ecx + 0x4d4], 0 */ W32((u32)(r_ecx+0x4d4u), 0x0u);
    /* 0054d21c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d21e: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 0054d224: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x54d229u); f_0051f664();
    /* 0054d229: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d22c: push 0x269 */ { u32 v = 0x269u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d231: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54d236u); f_007879b8();
    /* 0054d236: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d239: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 0054d23c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054d23e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d23f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d240: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d241: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054d242: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54d247u); f_00814298();
    /* 0054d247: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054d24a: jmp 0x54cfb0 */ goto L_0054cfb0;
L_0054d24f:; BB(0x0054d24f);
    /* 0054d24f: mov eax, dword ptr [0xa73910] */ r_eax = R32((u32)(0xa73910u));
    /* 0054d254: fild dword ptr [eax + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1cu)));
    /* 0054d257: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 0054d25a: mov dword ptr [ebp - 0x54], 5 */ W32((u32)(r_ebp+0xffffffacu), 0x5u);
    /* 0054d261: jmp 0x54d0b4 */ goto L_0054d0b4;
L_0054d266:; BB(0x0054d266);
    /* 0054d266: mov ecx, eax */ r_ecx = r_eax;
    /* 0054d268: mov eax, 3 */ r_eax = 0x3u;
    /* 0054d26d: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0054d274: call 0x54d8ac */ r_esp -= 4; W32(r_esp, 0x54d279u); f_0054d8ac();
    /* 0054d279: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d27c: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0054d282: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054d285: je 0x54d291 */ if (fZ) goto L_0054d291;
L_0054d287:; BB(0x0054d287);
    /* 0054d287: mov dword ptr [eax + 0x4d8], 2 */ W32((u32)(r_eax+0x4d8u), 0x2u);
L_0054d291:; BB(0x0054d291);
    /* 0054d291: fld dword ptr [eax + 0x4e4] */ FPUSH(R_F32((u32)(r_eax+0x4e4u)));
    /* 0054d297: fmul dword ptr [0x9241b4] */ ST(0) = ST(0) * R_F32((u32)(0x9241b4u));
    /* 0054d29d: fstp dword ptr [eax + 0x4e4] */ W_F32((u32)(r_eax+0x4e4u), ST(0)); FPOP();
    /* 0054d2a3: jmp 0x54cfe4 */ goto L_0054cfe4;
L_0054d2a8:; BB(0x0054d2a8);
    /* 0054d2a8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d2aa: mov eax, 2 */ r_eax = 0x2u;
    /* 0054d2af: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0054d2b6: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x54d2bbu); f_0051f664();
    /* 0054d2bb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d2be: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0054d2c4: mov ebx, dword ptr [ecx + 0xa4] */ r_ebx = R32((u32)(r_ecx+0xa4u));
    /* 0054d2ca: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054d2cd: or eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054d2d0: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 0054d2d6: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 0054d2d9: or edx, 0x700 */ {  u32 a = r_edx; u32 b = 0x700u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054d2df: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 0054d2e2: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0054d2e4: call dword ptr [esi + 0x188] */ { u32 t = R32((u32)(r_esi+0x188u)); r_esp -= 4; W32(r_esp, 0x54d2eau); call_ind(t); }
    /* 0054d2ea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d2ed: mov edx, dword ptr [eax + 0x3dc] */ r_edx = R32((u32)(r_eax+0x3dcu));
    /* 0054d2f3: lea ecx, [eax + 0x3dc] */ r_ecx = (u32)(r_eax+0x3dcu);
    /* 0054d2f9: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x54d2fcu); call_ind(t); }
    /* 0054d2fc: mov eax, dword ptr [0xa73910] */ r_eax = R32((u32)(0xa73910u));
    /* 0054d301: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d304: push 0x267 */ { u32 v = 0x267u; r_esp -= 4; W32(r_esp, v); }
    /* 0054d309: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0054d30b: mov dword ptr [ecx + 0x4e4], edx */ W32((u32)(r_ecx+0x4e4u), r_edx);
    /* 0054d311: mov dword ptr [ecx + 0x4d8], 0 */ W32((u32)(r_ecx+0x4d8u), 0x0u);
    /* 0054d31b: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54d320u); f_007879b8();
    /* 0054d320: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d323: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 0054d326: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054d328: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d329: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d32a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054d32b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054d32c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54d331u); f_00814298();
    /* 0054d331: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054d334: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0054d337: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 0054d33a: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 0054d33d: mov ebx, dword ptr [esi + 0x58] */ r_ebx = R32((u32)(r_esi+0x58u));
    /* 0054d340: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0054d343: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0054d346: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0054d349: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 0054d34c: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 0054d34f: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 0054d352: mov dword ptr [esi + 0x4c], ebx */ W32((u32)(r_esi+0x4cu), r_ebx);
    /* 0054d355: mov dword ptr [esi + 0x300], eax */ W32((u32)(r_esi+0x300u), r_eax);
    /* 0054d35b: mov dword ptr [esi + 0x304], edx */ W32((u32)(r_esi+0x304u), r_edx);
    /* 0054d361: mov dword ptr [esi + 0x308], ebx */ W32((u32)(r_esi+0x308u), r_ebx);
    /* 0054d367: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x54d36cu); f_0082dcbc();
    /* 0054d36c: fmul dword ptr [0x9241ac] */ ST(0) = ST(0) * R_F32((u32)(0x9241acu));
    /* 0054d372: mov eax, esi */ r_eax = r_esi;
    /* 0054d374: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 0054d377: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0054d37a: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 0054d37d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x54d382u); f_0082ddd8();
    /* 0054d382: fmul dword ptr [0x9241ac] */ ST(0) = ST(0) * R_F32((u32)(0x9241acu));
    /* 0054d388: mov ecx, esi */ r_ecx = r_esi;
    /* 0054d38a: fadd dword ptr [ecx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x40u));
    /* 0054d38d: mov edx, dword ptr [0xa73910] */ r_edx = R32((u32)(0xa73910u));
    /* 0054d393: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 0054d396: fld dword ptr [0x9241a8] */ FPUSH(R_F32((u32)(0x9241a8u)));
    /* 0054d39c: fdiv dword ptr [edx] */ ST(0) = ST(0) / R_F32((u32)(r_edx));
    /* 0054d39e: fnstcw word ptr [ebp - 0x34] */ W16((u32)(r_ebp+0xffffffccu), fcw);
    /* 0054d3a1: movzx eax, word ptr [ebp - 0x34] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffccu));
    /* 0054d3a5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054d3aa: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0054d3ad: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 0054d3b0: fistp dword ptr [ecx + 0x4d4] */ W32((u32)(r_ecx+0x4d4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0054d3b6: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 0054d3b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054d3bb: mov dword ptr [ecx + 0x490], eax */ W32((u32)(r_ecx+0x490u), r_eax);
    /* 0054d3c1: mov dword ptr [ecx + 0x494], eax */ W32((u32)(r_ecx+0x494u), r_eax);
    /* 0054d3c7: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x54d3ccu); f_00520bdc();
    /* 0054d3cc: jmp 0x54d1cc */ goto L_0054d1cc;
}

