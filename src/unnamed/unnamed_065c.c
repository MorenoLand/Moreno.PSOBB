#include "protos.h"

void f_0065c070(void) /* sub_65C070 */
{
    FN_ENTER(0x0065c070);
    /* 0065c070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c071: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c073: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c075: push 0x8e7620 */ { u32 v = 0x8e7620u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c07a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065c080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c081: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065c088: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c08b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065c08e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065c091: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065c094: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065c097: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c09c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065c0a3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x65c0a8u); f_008581c5();
    /* 0065c0a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065c0a9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065c0ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c0ae: je 0x65c0ef */ if (fZ) goto L_0065c0ef;
L_0065c0b0:; BB(0x0065c0b0);
    /* 0065c0b0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065c0b7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065c0be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c0c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065c0c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c0c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c0c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c0c6: push 0x9c80b0 */ { u32 v = 0x9c80b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c0cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c0cd: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65c0d2u); f_005b7a84();
    /* 0065c0d2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c0d5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065c0dc:; BB(0x0065c0dc);
    /* 0065c0dc: mov dword ptr [0xa8f884], eax */ W32((u32)(0xa8f884u), r_eax);
    /* 0065c0e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c0e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065c0eb: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c0ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c0ee: ret  */ FN_RET(0x0065c070); r_esp += 4; return;
L_0065c0ef:; BB(0x0065c0ef);
    /* 0065c0ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065c0f1: jmp 0x65c0dc */ goto L_0065c0dc;
}

void f_0065c0f4(void) /* sub_65C0F4 */
{
    FN_ENTER(0x0065c0f4);
    /* 0065c0f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c0f5: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c0f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c0f9: push 0x8e7648 */ { u32 v = 0x8e7648u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c0fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065c104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c105: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065c10c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c10f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065c112: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065c115: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065c118: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065c11b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c120: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065c127: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x65c12cu); f_008581c5();
    /* 0065c12c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065c12d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065c130: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c132: je 0x65c173 */ if (fZ) goto L_0065c173;
L_0065c134:; BB(0x0065c134);
    /* 0065c134: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065c13b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065c142: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c145: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065c147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c148: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c149: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c14a: push 0x9c8098 */ { u32 v = 0x9c8098u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c14f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c151: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65c156u); f_005b7a84();
    /* 0065c156: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c159: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065c160:; BB(0x0065c160);
    /* 0065c160: mov dword ptr [0xa8f888], eax */ W32((u32)(0xa8f888u), r_eax);
    /* 0065c165: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c168: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065c16f: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c171: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c172: ret  */ FN_RET(0x0065c0f4); r_esp += 4; return;
L_0065c173:; BB(0x0065c173);
    /* 0065c173: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065c175: jmp 0x65c160 */ goto L_0065c160;
}

void f_0065c178(void) /* sub_65C178 */
{
    FN_ENTER(0x0065c178);
    /* 0065c178: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c179: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c17b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c17d: push 0x8e7670 */ { u32 v = 0x8e7670u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c182: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065c188: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c189: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065c190: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c193: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065c196: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065c199: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065c19c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065c19f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c1a4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065c1ab: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x65c1b0u); f_008581c5();
    /* 0065c1b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065c1b1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065c1b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c1b6: je 0x65c1f7 */ if (fZ) goto L_0065c1f7;
L_0065c1b8:; BB(0x0065c1b8);
    /* 0065c1b8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065c1bf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065c1c6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c1c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065c1cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c1cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c1cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c1ce: push 0x9c8080 */ { u32 v = 0x9c8080u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c1d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c1d5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65c1dau); f_005b7a84();
    /* 0065c1da: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c1dd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065c1e4:; BB(0x0065c1e4);
    /* 0065c1e4: mov dword ptr [0xa8f88c], eax */ W32((u32)(0xa8f88cu), r_eax);
    /* 0065c1e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c1ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065c1f3: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c1f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c1f6: ret  */ FN_RET(0x0065c178); r_esp += 4; return;
L_0065c1f7:; BB(0x0065c1f7);
    /* 0065c1f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065c1f9: jmp 0x65c1e4 */ goto L_0065c1e4;
}

void f_0065c1fc(void)
{
    FN_ENTER(0x0065c1fc);
    /* 0065c1fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065c1fd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065c201: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 0065c205: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065c208: jge 0x65c227 */ if ((fS==fO)) goto L_0065c227;
L_0065c20a:; BB(0x0065c20a);
    /* 0065c20a: mov eax, dword ptr [edx*4 + 0xa8f8e8] */ r_eax = R32((u32)(r_edx*4+0xa8f8e8u));
    /* 0065c211: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c213: je 0x65c227 */ if (fZ) goto L_0065c227;
L_0065c215:; BB(0x0065c215);
    /* 0065c215: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065c218: jge 0x65c225 */ if ((fS==fO)) goto L_0065c225;
L_0065c21a:; BB(0x0065c21a);
    /* 0065c21a: mov dword ptr [edx*4 + 0xa8f8e8], 0 */ W32((u32)(r_edx*4+0xa8f8e8u), 0x0u);
L_0065c225:; BB(0x0065c225);
    /* 0065c225: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065c226: ret  */ FN_RET(0x0065c1fc); r_esp += 4; return;
L_0065c227:; BB(0x0065c227);
    /* 0065c227: mov eax, edx */ r_eax = r_edx;
    /* 0065c229: call 0x65c235 */ r_esp -= 4; W32(r_esp, 0x65c22eu); f_0065c235();
    /* 0065c22e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065c22f: ret  */ FN_RET(0x0065c1fc); r_esp += 4; return;
}

void f_0065c235(void) /* sub_65C235 */
{
    FN_ENTER(0x0065c235);
    /* 0065c235: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0065c238: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065c23b: jl 0x65c23e */ if ((fS!=fO)) goto L_0065c23e;
L_0065c23d:; BB(0x0065c23d);
    /* 0065c23d: ret  */ FN_RET(0x0065c235); r_esp += 4; return;
L_0065c23e:; BB(0x0065c23e);
    /* 0065c23e: mov dword ptr [eax*4 + 0xa8f8e8], 0x12c */ W32((u32)(r_eax*4+0xa8f8e8u), 0x12cu);
    /* 0065c249: ret  */ FN_RET(0x0065c235); r_esp += 4; return;
}

void f_0065c24c(void) /* sub_65C24C */
{
    FN_ENTER(0x0065c24c);
    /* 0065c24c: mov dword ptr [0xa8f8ac], 0x3f800000 */ W32((u32)(0xa8f8acu), 0x3f800000u);
    /* 0065c256: mov dword ptr [0xa8f8b0], 0x41000000 */ W32((u32)(0xa8f8b0u), 0x41000000u);
    /* 0065c260: mov dword ptr [0xa8f8b4], 0x3fc00000 */ W32((u32)(0xa8f8b4u), 0x3fc00000u);
    /* 0065c26a: ret  */ FN_RET(0x0065c24c); r_esp += 4; return;
}

void f_0065c26c(void) /* sub_65C26C */
{
    FN_ENTER(0x0065c26c);
    /* 0065c26c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c26d: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c26f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c271: push 0x8e768c */ { u32 v = 0x8e768cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c276: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065c27c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c27d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065c284: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c287: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065c28a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065c28d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065c290: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065c293: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0065c296: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0065c299: mov eax, ecx */ r_eax = r_ecx;
    /* 0065c29b: mov dword ptr [eax], 0xb32de0 */ W32((u32)(r_eax), 0xb32de0u);
    /* 0065c2a1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065c2a8: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x65c2adu); f_007b4aec();
    /* 0065c2ad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065c2b0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065c2b2: jne 0x65c2c4 */ if (!fZ) goto L_0065c2c4;
L_0065c2b4:; BB(0x0065c2b4);
    /* 0065c2b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c2b7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065c2be: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c2c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c2c1: ret 4 */ FN_RET(0x0065c26c); r_esp += 8; return;
L_0065c2c4:; BB(0x0065c2c4);
    /* 0065c2c4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065c2c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c2c8: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65c2cdu); f_005c2f74();
    /* 0065c2cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065c2ce: jmp 0x65c2b4 */ goto L_0065c2b4;
}

void f_0065c2d0(void) /* sub_65C2D0 */
{
    FN_ENTER(0x0065c2d0);
    /* 0065c2d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c2d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c2d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c2d5: push 0x8e76a8 */ { u32 v = 0x8e76a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c2da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065c2e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c2e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065c2e8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c2eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065c2ee: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065c2f1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065c2f4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065c2f7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0065c2fa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065c2fd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0065c300: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065c303: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x65c308u); f_007b4b48();
    /* 0065c308: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065c30f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c312: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065c315: mov dword ptr [ecx], 0xb32de0 */ W32((u32)(r_ecx), 0xb32de0u);
    /* 0065c31b: mov eax, dword ptr [0x9c8104] */ r_eax = R32((u32)(0x9c8104u));
    /* 0065c320: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c321: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065c324: call dword ptr [0xb32df4] */ { u32 t = R32((u32)(0xb32df4u)); r_esp -= 4; W32(r_esp, 0x65c32au); call_ind(t); }
    /* 0065c32a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c32d: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 0065c330: mov dword ptr [eax + 0xac], edx */ W32((u32)(r_eax+0xacu), r_edx);
    /* 0065c336: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c339: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065c340: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c342: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c343: ret 8 */ FN_RET(0x0065c2d0); r_esp += 12; return;
}

void f_0065c348(void) /* sub_65C348 */
{
    FN_ENTER(0x0065c348);
    /* 0065c348: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065c349: fld dword ptr [ecx + 0xac] */ FPUSH(R_F32((u32)(r_ecx+0xacu)));
    /* 0065c34f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065c351: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065c352: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0065c355: call 0x661e0c */ r_esp -= 4; W32(r_esp, 0x65c35au); f_00661e0c();
    /* 0065c35a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065c35d: je 0x65c361 */ if (fZ) goto L_0065c361;
L_0065c35f:; BB(0x0065c35f);
    /* 0065c35f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065c360: ret  */ FN_RET(0x0065c348); r_esp += 4; return;
L_0065c361:; BB(0x0065c361);
    /* 0065c361: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x65c366u); f_00694c6c();
    /* 0065c366: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065c36c: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0065c36f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065c371: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065c373: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065c375: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0065c37c: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x65c381u); f_007c1160();
    /* 0065c381: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065c383: jne 0x65c387 */ if (!fZ) goto L_0065c387;
L_0065c385:; BB(0x0065c385);
    /* 0065c385: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065c386: ret  */ FN_RET(0x0065c348); r_esp += 4; return;
L_0065c387:; BB(0x0065c387);
    /* 0065c387: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065c38d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x65c392u); f_0068d5a8();
    /* 0065c392: mov esi, eax */ r_esi = r_eax;
    /* 0065c394: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065c397: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c399: je 0x65c3b2 */ if (fZ) goto L_0065c3b2;
L_0065c39b:; BB(0x0065c39b);
    /* 0065c39b: mov ecx, esi */ r_ecx = r_esi;
    /* 0065c39d: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x65c3a2u); f_00689410();
    /* 0065c3a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065c3a4: jne 0x65c3b0 */ if (!fZ) goto L_0065c3b0;
L_0065c3a6:; BB(0x0065c3a6);
    /* 0065c3a6: mov eax, dword ptr [esi + 0xdf0] */ r_eax = R32((u32)(r_esi+0xdf0u));
    /* 0065c3ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065c3ae: je 0x65c3b2 */ if (fZ) goto L_0065c3b2;
L_0065c3b0:; BB(0x0065c3b0);
    /* 0065c3b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065c3b1: ret  */ FN_RET(0x0065c348); r_esp += 4; return;
L_0065c3b2:; BB(0x0065c3b2);
    /* 0065c3b2: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0065c3b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065c3b9: jne 0x65c35f */ if (!fZ) goto L_0065c35f;
L_0065c3bb:; BB(0x0065c3bb);
    /* 0065c3bb: call 0x79f218 */ r_esp -= 4; W32(r_esp, 0x65c3c0u); f_0079f218();
    /* 0065c3c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065c3c1: ret  */ FN_RET(0x0065c348); r_esp += 4; return;
}

void f_0065c3c4(void) /* sub_65C3C4 */
{
    FN_ENTER(0x0065c3c4);
    /* 0065c3c4: mov dword ptr [0xa8f94c], 0x3f800000 */ W32((u32)(0xa8f94cu), 0x3f800000u);
    /* 0065c3ce: mov dword ptr [0xa8f950], 0x41000000 */ W32((u32)(0xa8f950u), 0x41000000u);
    /* 0065c3d8: mov dword ptr [0xa8f954], 0x3fc00000 */ W32((u32)(0xa8f954u), 0x3fc00000u);
    /* 0065c3e2: ret  */ FN_RET(0x0065c3c4); r_esp += 4; return;
}

void f_0065c3e4(void) /* sub_65C3E4 */
{
    FN_ENTER(0x0065c3e4);
    /* 0065c3e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c3e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065c3e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065c3e9: call 0x65c408 */ r_esp -= 4; W32(r_esp, 0x65c3eeu); f_0065c408();
    /* 0065c3ee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065c3f2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065c3f4: jne 0x65c3fa */ if (!fZ) goto L_0065c3fa;
L_0065c3f6:; BB(0x0065c3f6);
    /* 0065c3f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065c3f7: ret 4 */ FN_RET(0x0065c3e4); r_esp += 8; return;
L_0065c3fa:; BB(0x0065c3fa);
    /* 0065c3fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c3fb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65c400u); f_005c2f74();
    /* 0065c400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065c401: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065c402: ret 4 */ FN_RET(0x0065c3e4); r_esp += 8; return;
}

void f_0065c408(void) /* sub_65C408 */
{
    FN_ENTER(0x0065c408);
    /* 0065c408: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c409: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c40b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c40d: push 0x8e76c4 */ { u32 v = 0x8e76c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c412: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065c418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c419: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065c420: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c423: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065c426: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065c429: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065c42c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065c42f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065c432: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065c439: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c43c: mov eax, dword ptr [ecx + 0x94] */ r_eax = R32((u32)(r_ecx+0x94u));
    /* 0065c442: mov dword ptr [ecx], 0xb32e60 */ W32((u32)(r_ecx), 0xb32e60u);
    /* 0065c448: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c44a: je 0x65c460 */ if (fZ) goto L_0065c460;
L_0065c44c:; BB(0x0065c44c);
    /* 0065c44c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c44d: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x65c452u); f_005cdcc0();
    /* 0065c452: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065c453: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c456: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
L_0065c460:; BB(0x0065c460);
    /* 0065c460: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065c467: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x65c46cu); f_007ba1f0();
    /* 0065c46c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c46f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065c476: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c478: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c479: ret  */ FN_RET(0x0065c408); r_esp += 4; return;
}

void f_0065c47c(void) /* sub_65C47C */
{
    FN_ENTER(0x0065c47c);
    /* 0065c47c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c47d: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c47f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c481: push 0x8e76e0 */ { u32 v = 0x8e76e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c486: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065c48c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c48d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065c494: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c497: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065c49a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065c49d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065c4a0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065c4a3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0065c4a6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065c4a9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0065c4ac: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065c4af: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x65c4b4u); f_007ba278();
    /* 0065c4b4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065c4bb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c4be: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065c4c1: mov dword ptr [ecx], 0xb32e60 */ W32((u32)(r_ecx), 0xb32e60u);
    /* 0065c4c7: mov eax, dword ptr [0x9c8108] */ r_eax = R32((u32)(0x9c8108u));
    /* 0065c4cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c4cd: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065c4d0: call dword ptr [0xb32e74] */ { u32 t = R32((u32)(0xb32e74u)); r_esp -= 4; W32(r_esp, 0x65c4d6u); call_ind(t); }
    /* 0065c4d6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c4d9: fld dword ptr [ecx + 0x68] */ FPUSH(R_F32((u32)(r_ecx+0x68u)));
    /* 0065c4dc: fcomp dword ptr [0x938878] */ fx_compare(ST(0), R_F32((u32)(0x938878u))); FPOP();
    /* 0065c4e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065c4e4: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 0065c4e7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065c4e8: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 0065c4f2: jae 0x65c500 */ if (!fC) goto L_0065c500;
L_0065c4f4:; BB(0x0065c4f4);
    /* 0065c4f4: mov dword ptr [ecx + 0x90], 0x41f00000 */ W32((u32)(r_ecx+0x90u), 0x41f00000u);
    /* 0065c4fe: jmp 0x65c506 */ goto L_0065c506;
L_0065c500:; BB(0x0065c500);
    /* 0065c500: mov dword ptr [ecx + 0x90], edx */ W32((u32)(r_ecx+0x90u), r_edx);
L_0065c506:; BB(0x0065c506);
    /* 0065c506: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c508: push 0x1ca */ { u32 v = 0x1cau; r_esp -= 4; W32(r_esp, v); }
    /* 0065c50d: lea eax, [ecx + 0x38] */ r_eax = (u32)(r_ecx+0x38u);
    /* 0065c510: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c514: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c515: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x65c51au); f_00509dc4();
    /* 0065c51a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065c51d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c520: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 0065c526: mov eax, edx */ r_eax = r_edx;
    /* 0065c528: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c52b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065c532: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c534: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c535: ret 8 */ FN_RET(0x0065c47c); r_esp += 12; return;
}

void f_0065c538(void) /* sub_65C538 */
{
    FN_ENTER(0x0065c538);
    /* 0065c538: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c539: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065c53a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065c53c: mov ecx, dword ptr [ebx + 0x94] */ r_ecx = R32((u32)(r_ebx+0x94u));
    /* 0065c542: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c544: je 0x65c55e */ if (fZ) goto L_0065c55e;
L_0065c546:; BB(0x0065c546);
    /* 0065c546: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0065c549: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c54a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x65c54fu); f_00508db8();
    /* 0065c54f: mov ecx, dword ptr [ebx + 0x94] */ r_ecx = R32((u32)(r_ebx+0x94u));
    /* 0065c555: lea eax, [ebx + 0x5c] */ r_eax = (u32)(r_ebx+0x5cu);
    /* 0065c558: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c559: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x65c55eu); f_00508dd0();
L_0065c55e:; BB(0x0065c55e);
    /* 0065c55e: call 0x4fbeec */ r_esp -= 4; W32(r_esp, 0x65c563u); f_004fbeec();
    /* 0065c563: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065c565: je 0x65c56a */ if (fZ) goto L_0065c56a;
L_0065c567:; BB(0x0065c567);
    /* 0065c567: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065c568: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065c569: ret  */ FN_RET(0x0065c538); r_esp += 4; return;
L_0065c56a:; BB(0x0065c56a);
    /* 0065c56a: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0065c56d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065c56f: mov esi, eax */ r_esi = r_eax;
L_0065c571:; BB(0x0065c571);
    /* 0065c571: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065c572: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x65c577u); f_0068d5a8();
    /* 0065c577: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065c578: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c57a: je 0x65c5b5 */ if (fZ) goto L_0065c5b5;
L_0065c57c:; BB(0x0065c57c);
    /* 0065c57c: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0065c582: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c588: jne 0x65c5b5 */ if (!fZ) goto L_0065c5b5;
L_0065c58a:; BB(0x0065c58a);
    /* 0065c58a: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0065c591: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c594: jne 0x65c5b5 */ if (!fZ) goto L_0065c5b5;
L_0065c596:; BB(0x0065c596);
    /* 0065c596: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065c599: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0065c59c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c59d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c59e: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x65c5a3u); f_0078ea50();
    /* 0065c5a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065c5a6: fld dword ptr [ebx + 0x90] */ FPUSH(R_F32((u32)(r_ebx+0x90u)));
    /* 0065c5ac: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0065c5ae: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0065c5b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065c5b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065c5b3: ja 0x65c5c3 */ if ((!fC&&!fZ)) goto L_0065c5c3;
L_0065c5b5:; BB(0x0065c5b5);
    /* 0065c5b5: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065c5b8: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065c5bb: jl 0x65c571 */ if ((fS!=fO)) goto L_0065c571;
L_0065c5bd:; BB(0x0065c5bd);
    /* 0065c5bd: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0065c5c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065c5c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065c5c2: ret  */ FN_RET(0x0065c538); r_esp += 4; return;
L_0065c5c3:; BB(0x0065c5c3);
    /* 0065c5c3: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0065c5c6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c5c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c5c9: call 0x81137c */ r_esp -= 4; W32(r_esp, 0x65c5ceu); f_0081137c();
    /* 0065c5ce: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0065c5d2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065c5d7: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0065c5db: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065c5de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065c5df: ret  */ FN_RET(0x0065c538); r_esp += 4; return;
}

void f_0065c5e0(void) /* sub_65C5E0 */
{
    FN_ENTER(0x0065c5e0);
    /* 0065c5e0: mov dword ptr [0xa8f95c], 0x3f800000 */ W32((u32)(0xa8f95cu), 0x3f800000u);
    /* 0065c5ea: mov dword ptr [0xa8f960], 0x41000000 */ W32((u32)(0xa8f960u), 0x41000000u);
    /* 0065c5f4: mov dword ptr [0xa8f964], 0x3fc00000 */ W32((u32)(0xa8f964u), 0x3fc00000u);
    /* 0065c5fe: ret  */ FN_RET(0x0065c5e0); r_esp += 4; return;
}

void f_0065c600(void) /* sub_65C600 */
{
    FN_ENTER(0x0065c600);
    /* 0065c600: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c601: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065c603: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065c605: call 0x65c624 */ r_esp -= 4; W32(r_esp, 0x65c60au); f_0065c624();
    /* 0065c60a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065c60e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065c610: jne 0x65c616 */ if (!fZ) goto L_0065c616;
L_0065c612:; BB(0x0065c612);
    /* 0065c612: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065c613: ret 4 */ FN_RET(0x0065c600); r_esp += 8; return;
L_0065c616:; BB(0x0065c616);
    /* 0065c616: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c617: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65c61cu); f_005c2f74();
    /* 0065c61c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065c61d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065c61e: ret 4 */ FN_RET(0x0065c600); r_esp += 8; return;
}

void f_0065c624(void) /* sub_65C624 */
{
    FN_ENTER(0x0065c624);
    /* 0065c624: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c625: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c627: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c629: push 0x8e76fc */ { u32 v = 0x8e76fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c62e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065c634: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c635: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065c63c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c63f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065c642: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065c645: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065c648: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065c64b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065c64e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c651: mov dword ptr [ecx], 0xb32f30 */ W32((u32)(r_ecx), 0xb32f30u);
    /* 0065c657: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065c65e: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x65c663u); f_007ba1f0();
    /* 0065c663: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c666: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065c66d: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c66f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c670: ret  */ FN_RET(0x0065c624); r_esp += 4; return;
}

void f_0065c674(void) /* sub_65C674 */
{
    FN_ENTER(0x0065c674);
    /* 0065c674: fld dword ptr [ecx + 0x90] */ FPUSH(R_F32((u32)(r_ecx+0x90u)));
    /* 0065c67a: fadd dword ptr [ecx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x68u));
    /* 0065c67d: fstp dword ptr [ecx + 0x90] */ W_F32((u32)(r_ecx+0x90u), ST(0)); FPOP();
    /* 0065c683: ret  */ FN_RET(0x0065c674); r_esp += 4; return;
}

void f_0065c684(void) /* sub_65C684 */
{
    FN_ENTER(0x0065c684);
    /* 0065c684: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065c685: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c686: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c689: mov edi, ecx */ r_edi = r_ecx;
    /* 0065c68b: mov eax, dword ptr [edi + 0x84] */ r_eax = R32((u32)(r_edi+0x84u));
    /* 0065c691: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065c693: jle 0x65c7bc */ if ((fZ||fS!=fO)) goto L_0065c7bc;
L_0065c699:; BB(0x0065c699);
    /* 0065c699: mov edx, 0x44bb8000 */ r_edx = 0x44bb8000u;
L_0065c69e:; BB(0x0065c69e);
    /* 0065c69e: fld dword ptr [0x938880] */ FPUSH(R_F32((u32)(0x938880u)));
    /* 0065c6a4: fmul dword ptr [edi + 0x70] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x70u));
    /* 0065c6a7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0065c6a9: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065c6ac: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0065c6b0: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0065c6b3: mov ecx, edi */ r_ecx = r_edi;
    /* 0065c6b5: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x65c6b8u); call_ind(t); }
    /* 0065c6b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c6ba: jne 0x65c6c2 */ if (!fZ) goto L_0065c6c2;
L_0065c6bc:; BB(0x0065c6bc);
    /* 0065c6bc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065c6bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c6c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065c6c1: ret  */ FN_RET(0x0065c684); r_esp += 4; return;
L_0065c6c2:; BB(0x0065c6c2);
    /* 0065c6c2: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0065c6c7: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0065c6ca: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065c6cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c6d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c6d1: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x65c6d6u); f_0078ea50();
    /* 0065c6d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065c6d9: fcomp dword ptr [0x938880] */ fx_compare(ST(0), R_F32((u32)(0x938880u))); FPOP();
    /* 0065c6df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0065c6e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0065c6e2: jb 0x65c7b6 */ if (fC) goto L_0065c7b6;
L_0065c6e8:; BB(0x0065c6e8);
    /* 0065c6e8: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0065c6ed: cmp eax, dword ptr [0xa8f974] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8f974u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c6f3: je 0x65c73a */ if (fZ) goto L_0065c73a;
L_0065c6f5:; BB(0x0065c6f5);
    /* 0065c6f5: mov ecx, dword ptr [0xa8f970] */ r_ecx = R32((u32)(0xa8f970u));
    /* 0065c6fb: mov dword ptr [0xa8f974], eax */ W32((u32)(0xa8f974u), r_eax);
    /* 0065c700: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c702: je 0x65c740 */ if (fZ) goto L_0065c740;
L_0065c704:; BB(0x0065c704);
    /* 0065c704: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065c706: fld dword ptr [edi + 0x90] */ FPUSH(R_F32((u32)(r_edi+0x90u)));
    /* 0065c70c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0065c70f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0065c713: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065c718: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065c71c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0065c720: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065c724: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0065c727: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0065c72c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c72d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c72f: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x65c732u); call_ind(t); }
    /* 0065c732: mov ecx, dword ptr [0xa8f970] */ r_ecx = R32((u32)(0xa8f970u));
    /* 0065c738: jmp 0x65c740 */ goto L_0065c740;
L_0065c73a:; BB(0x0065c73a);
    /* 0065c73a: mov ecx, dword ptr [0xa8f970] */ r_ecx = R32((u32)(0xa8f970u));
L_0065c740:; BB(0x0065c740);
    /* 0065c740: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c742: je 0x65c758 */ if (fZ) goto L_0065c758;
L_0065c744:; BB(0x0065c744);
    /* 0065c744: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c746: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x65c74bu); f_00835f78();
    /* 0065c74b: mov ecx, dword ptr [0xa8f970] */ r_ecx = R32((u32)(0xa8f970u));
    /* 0065c751: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c753: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0065c755: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x65c758u); call_ind(t); }
L_0065c758:; BB(0x0065c758);
    /* 0065c758: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x65c75du); f_0082dbac();
    /* 0065c75d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x65c762u); f_0082d7b0();
    /* 0065c762: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0065c765: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x65c76au); f_00829cc8();
    /* 0065c76a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0065c76c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x65c771u); f_0082d838();
    /* 0065c771: push dword ptr [edi + 0x64] */ { u32 v = R32((u32)(r_edi+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065c774: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065c777: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 0065c77a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c77c: call 0x83a314 */ r_esp -= 4; W32(r_esp, 0x65c781u); f_0083a314();
    /* 0065c781: mov eax, dword ptr [edi + 0x70] */ r_eax = R32((u32)(r_edi+0x70u));
    /* 0065c784: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c785: push dword ptr [edi + 0x6c] */ { u32 v = R32((u32)(r_edi+0x6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0065c788: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c78a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c78b: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x65c790u); f_0082fa0c();
    /* 0065c790: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0065c793: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x65c798u); f_00831758();
    /* 0065c798: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x65c79du); f_0082da80();
    /* 0065c79d: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x65c7a2u); f_0082dab0();
    /* 0065c7a2: mov ecx, dword ptr [0xa8f970] */ r_ecx = R32((u32)(0xa8f970u));
    /* 0065c7a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c7aa: je 0x65c7b6 */ if (fZ) goto L_0065c7b6;
L_0065c7ac:; BB(0x0065c7ac);
    /* 0065c7ac: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0065c7ae: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x65c7b1u); call_ind(t); }
    /* 0065c7b1: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x65c7b6u); f_0083603c();
L_0065c7b6:; BB(0x0065c7b6);
    /* 0065c7b6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065c7b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c7ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065c7bb: ret  */ FN_RET(0x0065c684); r_esp += 4; return;
L_0065c7bc:; BB(0x0065c7bc);
    /* 0065c7bc: mov edx, 0x43c80000 */ r_edx = 0x43c80000u;
    /* 0065c7c1: jmp 0x65c69e */ goto L_0065c69e;
}

void f_0065c7c8(void)
{
    FN_ENTER(0x0065c7c8);
    /* 0065c7c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c7c9: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c7cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c7cd: push 0x8e7724 */ { u32 v = 0x8e7724u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c7d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065c7d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c7d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065c7e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c7e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065c7e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065c7e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065c7ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065c7ef: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c7f4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065c7fb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65c800u); f_005caba4();
    /* 0065c800: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065c801: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065c804: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c806: je 0x65c83f */ if (fZ) goto L_0065c83f;
L_0065c808:; BB(0x0065c808);
    /* 0065c808: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065c80f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065c816: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065c819: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065c81f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c822: call 0x65c844 */ r_esp -= 4; W32(r_esp, 0x65c827u); f_0065c844();
    /* 0065c827: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c82a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065c831:; BB(0x0065c831);
    /* 0065c831: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c834: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065c83b: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c83d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c83e: ret  */ FN_RET(0x0065c7c8); r_esp += 4; return;
L_0065c83f:; BB(0x0065c83f);
    /* 0065c83f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065c841: jmp 0x65c831 */ goto L_0065c831;
}

void f_0065c844(void) /* sub_65C844 */
{
    FN_ENTER(0x0065c844);
    /* 0065c844: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c845: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c847: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c849: push 0x8e7740 */ { u32 v = 0x8e7740u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c84e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065c854: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c855: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065c85c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c85f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065c862: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065c865: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065c868: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065c86b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0065c86e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065c871: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0065c874: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065c877: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x65c87cu); f_007ba278();
    /* 0065c87c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065c883: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c886: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065c889: mov dword ptr [ecx], 0xb32f30 */ W32((u32)(r_ecx), 0xb32f30u);
    /* 0065c88f: mov eax, dword ptr [0x9c8124] */ r_eax = R32((u32)(0x9c8124u));
    /* 0065c894: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c895: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065c898: call dword ptr [0xb32f44] */ { u32 t = R32((u32)(0xb32f44u)); r_esp -= 4; W32(r_esp, 0x65c89eu); call_ind(t); }
    /* 0065c89e: mov ecx, dword ptr [0xa8f96c] */ r_ecx = R32((u32)(0xa8f96cu));
    /* 0065c8a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c8a6: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65c8abu); f_005b8610();
    /* 0065c8ab: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c8ae: mov ecx, dword ptr [0xa8f96c] */ r_ecx = R32((u32)(0xa8f96cu));
    /* 0065c8b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c8b6: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0065c8b9: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x65c8beu); f_005b8624();
    /* 0065c8be: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c8c1: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0065c8c4: mov eax, edx */ r_eax = r_edx;
    /* 0065c8c6: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0065c8d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c8d3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065c8da: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c8dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c8dd: ret 8 */ FN_RET(0x0065c844); r_esp += 12; return;
}

void f_0065c8e0(void) /* sub_65C8E0 */
{
    FN_ENTER(0x0065c8e0);
    /* 0065c8e0: mov ecx, dword ptr [0xa8f970] */ r_ecx = R32((u32)(0xa8f970u));
    /* 0065c8e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c8e8: je 0x65c8fc */ if (fZ) goto L_0065c8fc;
L_0065c8ea:; BB(0x0065c8ea);
    /* 0065c8ea: je 0x65c8f2 */ if (fZ) goto L_0065c8f2;
L_0065c8ec:; BB(0x0065c8ec);
    /* 0065c8ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c8ee: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0065c8f0: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x65c8f2u); call_ind(t); }
L_0065c8f2:; BB(0x0065c8f2);
    /* 0065c8f2: mov dword ptr [0xa8f970], 0 */ W32((u32)(0xa8f970u), 0x0u);
L_0065c8fc:; BB(0x0065c8fc);
    /* 0065c8fc: mov ecx, dword ptr [0xa8f96c] */ r_ecx = R32((u32)(0xa8f96cu));
    /* 0065c902: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065c904: je 0x65c919 */ if (fZ) goto L_0065c919;
L_0065c906:; BB(0x0065c906);
    /* 0065c906: je 0x65c90f */ if (fZ) goto L_0065c90f;
L_0065c908:; BB(0x0065c908);
    /* 0065c908: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c90a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x65c90fu); f_004066a8();
L_0065c90f:; BB(0x0065c90f);
    /* 0065c90f: mov dword ptr [0xa8f96c], 0 */ W32((u32)(0xa8f96cu), 0x0u);
L_0065c919:; BB(0x0065c919);
    /* 0065c919: mov dword ptr [0xa8f974], 0 */ W32((u32)(0xa8f974u), 0x0u);
    /* 0065c923: ret  */ FN_RET(0x0065c8e0); r_esp += 4; return;
}

void f_0065c924(void) /* sub_65C924 */
{
    FN_ENTER(0x0065c924);
    /* 0065c924: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c925: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c927: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c929: push 0x8e7768 */ { u32 v = 0x8e7768u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c92e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065c934: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c935: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065c93c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c93f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065c942: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065c945: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065c948: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065c94b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c950: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065c957: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x65c95cu); f_008581c5();
    /* 0065c95c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065c95d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065c960: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c962: je 0x65c9d4 */ if (fZ) goto L_0065c9d4;
L_0065c964:; BB(0x0065c964);
    /* 0065c964: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065c96b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065c972: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c975: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065c977: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c978: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c979: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c97a: push 0x9c8114 */ { u32 v = 0x9c8114u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c97f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c981: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65c986u); f_005b7a84();
    /* 0065c986: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065c989: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065c990:; BB(0x0065c990);
    /* 0065c990: mov dword ptr [0xa8f96c], eax */ W32((u32)(0xa8f96cu), r_eax);
    /* 0065c995: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065c99c: mov ecx, dword ptr [0xa8f96c] */ r_ecx = R32((u32)(0xa8f96cu));
    /* 0065c9a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065c9a4: mov dword ptr [0xa8f974], eax */ W32((u32)(0xa8f974u), r_eax);
    /* 0065c9a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c9aa: mov dword ptr [0xa8f970], eax */ W32((u32)(0xa8f970u), r_eax);
    /* 0065c9af: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x65c9b4u); f_005b8610();
    /* 0065c9b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c9b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c9b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c9b9: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x65c9beu); f_0066f3d4();
    /* 0065c9be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065c9c1: mov dword ptr [0xa8f970], eax */ W32((u32)(0xa8f970u), r_eax);
    /* 0065c9c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c9c9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065c9d0: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c9d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c9d3: ret  */ FN_RET(0x0065c924); r_esp += 4; return;
L_0065c9d4:; BB(0x0065c9d4);
    /* 0065c9d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065c9d6: jmp 0x65c990 */ goto L_0065c990;
}

void f_0065c9d8(void) /* sub_65C9D8 */
{
    FN_ENTER(0x0065c9d8);
    /* 0065c9d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c9d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065c9db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0065c9dd: call 0x65c9fc */ r_esp -= 4; W32(r_esp, 0x65c9e2u); f_0065c9fc();
    /* 0065c9e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065c9e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065c9e8: jne 0x65c9ee */ if (!fZ) goto L_0065c9ee;
L_0065c9ea:; BB(0x0065c9ea);
    /* 0065c9ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065c9eb: ret 4 */ FN_RET(0x0065c9d8); r_esp += 8; return;
L_0065c9ee:; BB(0x0065c9ee);
    /* 0065c9ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c9ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x65c9f4u); f_005c2f74();
    /* 0065c9f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065c9f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065c9f6: ret 4 */ FN_RET(0x0065c9d8); r_esp += 8; return;
}

void f_0065c9fc(void) /* sub_65C9FC */
{
    FN_ENTER(0x0065c9fc);
    /* 0065c9fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c9fd: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c9ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ca01: push 0x8e7784 */ { u32 v = 0x8e7784u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ca06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065ca0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ca0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065ca14: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ca17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065ca1a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065ca1d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0065ca20: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065ca23: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065ca26: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065ca2d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065ca30: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 0065ca36: mov dword ptr [eax], 0xb330d0 */ W32((u32)(r_eax), 0xb330d0u);
    /* 0065ca3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ca3e: je 0x65ca5a */ if (fZ) goto L_0065ca5a;
L_0065ca40:; BB(0x0065ca40);
    /* 0065ca40: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0065ca44: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065ca49: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0065ca4d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065ca50: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
L_0065ca5a:; BB(0x0065ca5a);
    /* 0065ca5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ca5b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x65ca60u); f_007b4e84();
    /* 0065ca60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065ca61: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065ca64: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x65ca69u); f_007b9c8c();
    /* 0065ca69: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065ca70: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065ca73: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x65ca78u); f_007b4aec();
    /* 0065ca78: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ca7b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065ca82: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ca84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ca85: ret  */ FN_RET(0x0065c9fc); r_esp += 4; return;
}

void f_0065ca88(void) /* sub_65CA88 */
{
    FN_ENTER(0x0065ca88);
    /* 0065ca88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ca89: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0065ca8e: mov ebx, eax */ r_ebx = r_eax;
L_0065ca90:; BB(0x0065ca90);
    /* 0065ca90: mov ecx, dword ptr [ebx + 0xa8f984] */ r_ecx = R32((u32)(r_ebx+0xa8f984u));
    /* 0065ca96: add ebx, -4 */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0065ca99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ca9b: je 0x65cab0 */ if (fZ) goto L_0065cab0;
L_0065ca9d:; BB(0x0065ca9d);
    /* 0065ca9d: je 0x65caa6 */ if (fZ) goto L_0065caa6;
L_0065ca9f:; BB(0x0065ca9f);
    /* 0065ca9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065caa1: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x65caa6u); f_004066a8();
L_0065caa6:; BB(0x0065caa6);
    /* 0065caa6: mov dword ptr [ebx + 0xa8f988], 0 */ W32((u32)(r_ebx+0xa8f988u), 0x0u);
L_0065cab0:; BB(0x0065cab0);
    /* 0065cab0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065cab2: jge 0x65ca90 */ if ((fS==fO)) goto L_0065ca90;
L_0065cab4:; BB(0x0065cab4);
    /* 0065cab4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065cab5: ret  */ FN_RET(0x0065ca88); r_esp += 4; return;
}

void f_0065cab8(void) /* sub_65CAB8 */
{
    FN_ENTER(0x0065cab8);
    /* 0065cab8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065cab9: mov edi, ecx */ r_edi = r_ecx;
    /* 0065cabb: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0065cabd: mov ecx, edi */ r_ecx = r_edi;
    /* 0065cabf: push dword ptr [edi + 0xb8] */ { u32 v = R32((u32)(r_edi+0xb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065cac5: push dword ptr [edi + 0xb4] */ { u32 v = R32((u32)(r_edi+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065cacb: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x65caceu); call_ind(t); }
    /* 0065cace: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065cad1: je 0x65cad5 */ if (fZ) goto L_0065cad5;
L_0065cad3:; BB(0x0065cad3);
    /* 0065cad3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065cad4: ret  */ FN_RET(0x0065cab8); r_esp += 4; return;
L_0065cad5:; BB(0x0065cad5);
    /* 0065cad5: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0065cadb: mov ecx, edi */ r_ecx = r_edi;
    /* 0065cadd: call dword ptr [eax*4 + 0x9c8140] */ { u32 t = R32((u32)(r_eax*4+0x9c8140u)); r_esp -= 4; W32(r_esp, 0x65cae4u); call_ind(t); }
    /* 0065cae4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065cae5: ret  */ FN_RET(0x0065cab8); r_esp += 4; return;
}

void f_0065cae8(void)
{
    FN_ENTER(0x0065cae8);
    /* 0065cae8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065cae9: mov ebp, esp */ r_ebp = r_esp;
    /* 0065caeb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065caed: push 0x8e77ba */ { u32 v = 0x8e77bau; r_esp -= 4; W32(r_esp, v); }
    /* 0065caf2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065caf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065caf9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065cb00: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065cb03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065cb06: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065cb09: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065cb0c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065cb0f: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cb14: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0065cb1b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65cb20u); f_005caba4();
    /* 0065cb20: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065cb23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065cb26: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0065cb29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065cb2b: je 0x65cc87 */ if (fZ) goto L_0065cc87;
L_0065cb31:; BB(0x0065cb31);
    /* 0065cb31: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 0065cb38: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065cb3f: mov ecx, eax */ r_ecx = r_eax;
    /* 0065cb41: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 0065cb46: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0065cb49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065cb4a: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0065cb4d: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x65cb52u); f_007b4b48();
    /* 0065cb52: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065cb59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cb5c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065cb5f: mov dword ptr [ecx], 0xb330d0 */ W32((u32)(r_ecx), 0xb330d0u);
    /* 0065cb65: mov eax, dword ptr [0x9c82f8] */ r_eax = R32((u32)(0x9c82f8u));
    /* 0065cb6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065cb6b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065cb6e: call dword ptr [0xb330e4] */ { u32 t = R32((u32)(0xb330e4u)); r_esp -= 4; W32(r_esp, 0x65cb74u); call_ind(t); }
    /* 0065cb74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cb77: mov eax, dword ptr [0xa8f984] */ r_eax = R32((u32)(0xa8f984u));
    /* 0065cb7c: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 0065cb86: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 0065cb8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cb8e: push 0x9c8160 */ { u32 v = 0x9c8160u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cb93: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x65cb98u); f_007b9a88();
    /* 0065cb98: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cb9b: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65cba0u); f_007b4f54();
    /* 0065cba0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cba3: mov dword ptr [eax + 0xb4], 0x43c80000 */ W32((u32)(r_eax+0xb4u), 0x43c80000u);
    /* 0065cbad: mov dword ptr [eax + 0xb8], 0x42480000 */ W32((u32)(r_eax+0xb8u), 0x42480000u);
    /* 0065cbb7: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 0065cbc1: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 0065cbc7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065cbca: je 0x65cbf2 */ if (fZ) goto L_0065cbf2;
L_0065cbcc:; BB(0x0065cbcc);
    /* 0065cbcc: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065cbcf: je 0x65cbf2 */ if (fZ) goto L_0065cbf2;
L_0065cbd1:; BB(0x0065cbd1);
    /* 0065cbd1: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0065cbd8:; BB(0x0065cbd8);
    /* 0065cbd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cbdb: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065cbde: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065cbe1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065cbe4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065cbe7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065cbee: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cbf0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cbf1: ret  */ FN_RET(0x0065cae8); r_esp += 4; return;
L_0065cbf2:; BB(0x0065cbf2);
    /* 0065cbf2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065cbf5: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0065cbf8: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 0065cbfc: movzx ebx, word ptr [eax + 4] */ r_ebx = (u32)R16((u32)(r_eax+0x4u));
    /* 0065cc00: movzx esi, word ptr [eax + 6] */ r_esi = (u32)R16((u32)(r_eax+0x6u));
    /* 0065cc04: movzx edi, word ptr [eax + 8] */ r_edi = (u32)R16((u32)(r_eax+0x8u));
    /* 0065cc08: mov word ptr [ebp - 0x5c], dx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_edx);
    /* 0065cc0c: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 0065cc10: mov word ptr [ebp - 0x5a], cx */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_ecx);
    /* 0065cc14: mov word ptr [ebp - 0x58], bx */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_ebx);
    /* 0065cc18: mov word ptr [ebp - 0x56], si */ W16((u32)(r_ebp+0xffffffaau), (u16)r_esi);
    /* 0065cc1c: mov word ptr [ebp - 0x54], di */ W16((u32)(r_ebp+0xffffffacu), (u16)r_edi);
    /* 0065cc20: mov word ptr [ebp - 0x52], dx */ W16((u32)(r_ebp+0xffffffaeu), (u16)r_edx);
    /* 0065cc24: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0065cc27: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0065cc2a: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0065cc2d: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0065cc30: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0065cc33: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0065cc36: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0065cc39: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0065cc3c: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0065cc3f: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0065cc42: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0065cc45: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0065cc48: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0065cc4b: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0065cc4e: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0065cc51: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 0065cc54: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0065cc57: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0065cc5a: mov dword ptr [ebp - 0x38], 0x42200000 */ W32((u32)(r_ebp+0xffffffc8u), 0x42200000u);
    /* 0065cc61: mov dword ptr [ebp - 0x34], 0x41a00000 */ W32((u32)(r_ebp+0xffffffccu), 0x41a00000u);
    /* 0065cc68: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 0065cc6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065cc6c: mov dword ptr [ebp - 0x30], 0x41200000 */ W32((u32)(r_ebp+0xffffffd0u), 0x41200000u);
    /* 0065cc73: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x65cc78u); f_0065f960();
    /* 0065cc78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065cc79: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cc7c: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0065cc82: jmp 0x65cbd1 */ f_0065cbd1(); return;
L_0065cc87:; BB(0x0065cc87);
    /* 0065cc87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065cc89: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065cc8c: jmp 0x65cbd8 */ goto L_0065cbd8;
}

void f_0065cc94(void)
{
    FN_ENTER(0x0065cc94);
    /* 0065cc94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065cc95: mov ebp, esp */ r_ebp = r_esp;
    /* 0065cc97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065cc99: push 0x8e77ee */ { u32 v = 0x8e77eeu; r_esp -= 4; W32(r_esp, v); }
    /* 0065cc9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065cca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065cca5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065ccac: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ccaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065ccb2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065ccb5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065ccb8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065ccbb: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ccc0: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0065ccc7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65ccccu); f_005caba4();
    /* 0065cccc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065cccf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ccd2: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0065ccd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ccd7: je 0x65ce33 */ if (fZ) goto L_0065ce33;
L_0065ccdd:; BB(0x0065ccdd);
    /* 0065ccdd: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 0065cce4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065cceb: mov ecx, eax */ r_ecx = r_eax;
    /* 0065cced: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 0065ccf2: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0065ccf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ccf6: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0065ccf9: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x65ccfeu); f_007b4b48();
    /* 0065ccfe: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065cd05: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cd08: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065cd0b: mov dword ptr [ecx], 0xb330d0 */ W32((u32)(r_ecx), 0xb330d0u);
    /* 0065cd11: mov eax, dword ptr [0x9c82f8] */ r_eax = R32((u32)(0x9c82f8u));
    /* 0065cd16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065cd17: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065cd1a: call dword ptr [0xb330e4] */ { u32 t = R32((u32)(0xb330e4u)); r_esp -= 4; W32(r_esp, 0x65cd20u); call_ind(t); }
    /* 0065cd20: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cd23: mov eax, dword ptr [0xa8f988] */ r_eax = R32((u32)(0xa8f988u));
    /* 0065cd28: mov edx, 1 */ r_edx = 0x1u;
    /* 0065cd2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065cd2e: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 0065cd34: push 0x9c818c */ { u32 v = 0x9c818cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065cd39: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 0065cd3f: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x65cd44u); f_007b9a88();
    /* 0065cd44: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cd47: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65cd4cu); f_007b4f54();
    /* 0065cd4c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cd4f: mov dword ptr [eax + 0xb4], 0x43c80000 */ W32((u32)(r_eax+0xb4u), 0x43c80000u);
    /* 0065cd59: mov dword ptr [eax + 0xb8], 0x42480000 */ W32((u32)(r_eax+0xb8u), 0x42480000u);
    /* 0065cd63: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 0065cd6d: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 0065cd73: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065cd76: je 0x65cd9e */ if (fZ) goto L_0065cd9e;
L_0065cd78:; BB(0x0065cd78);
    /* 0065cd78: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065cd7b: je 0x65cd9e */ if (fZ) goto L_0065cd9e;
L_0065cd7d:; BB(0x0065cd7d);
    /* 0065cd7d: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0065cd84:; BB(0x0065cd84);
    /* 0065cd84: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cd87: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065cd8a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065cd8d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065cd90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065cd93: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065cd9a: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cd9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cd9d: ret  */ FN_RET(0x0065cc94); r_esp += 4; return;
L_0065cd9e:; BB(0x0065cd9e);
    /* 0065cd9e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065cda1: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0065cda4: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 0065cda8: movzx ebx, word ptr [eax + 4] */ r_ebx = (u32)R16((u32)(r_eax+0x4u));
    /* 0065cdac: movzx esi, word ptr [eax + 6] */ r_esi = (u32)R16((u32)(r_eax+0x6u));
    /* 0065cdb0: movzx edi, word ptr [eax + 8] */ r_edi = (u32)R16((u32)(r_eax+0x8u));
    /* 0065cdb4: mov word ptr [ebp - 0x5c], dx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_edx);
    /* 0065cdb8: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 0065cdbc: mov word ptr [ebp - 0x5a], cx */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_ecx);
    /* 0065cdc0: mov word ptr [ebp - 0x58], bx */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_ebx);
    /* 0065cdc4: mov word ptr [ebp - 0x56], si */ W16((u32)(r_ebp+0xffffffaau), (u16)r_esi);
    /* 0065cdc8: mov word ptr [ebp - 0x54], di */ W16((u32)(r_ebp+0xffffffacu), (u16)r_edi);
    /* 0065cdcc: mov word ptr [ebp - 0x52], dx */ W16((u32)(r_ebp+0xffffffaeu), (u16)r_edx);
    /* 0065cdd0: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0065cdd3: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0065cdd6: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0065cdd9: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0065cddc: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0065cddf: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0065cde2: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0065cde5: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0065cde8: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0065cdeb: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0065cdee: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0065cdf1: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0065cdf4: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0065cdf7: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0065cdfa: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0065cdfd: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 0065ce00: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0065ce03: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0065ce06: mov dword ptr [ebp - 0x38], 0x42200000 */ W32((u32)(r_ebp+0xffffffc8u), 0x42200000u);
    /* 0065ce0d: mov dword ptr [ebp - 0x34], 0x41a00000 */ W32((u32)(r_ebp+0xffffffccu), 0x41a00000u);
    /* 0065ce14: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 0065ce17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ce18: mov dword ptr [ebp - 0x30], 0x41200000 */ W32((u32)(r_ebp+0xffffffd0u), 0x41200000u);
    /* 0065ce1f: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x65ce24u); f_0065f960();
    /* 0065ce24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065ce25: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ce28: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0065ce2e: jmp 0x65cd7d */ f_0065cd7d(); return;
L_0065ce33:; BB(0x0065ce33);
    /* 0065ce33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065ce35: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065ce38: jmp 0x65cd84 */ goto L_0065cd84;
}

void f_0065ce40(void)
{
    FN_ENTER(0x0065ce40);
    /* 0065ce40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ce41: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ce43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ce45: push 0x8e7822 */ { u32 v = 0x8e7822u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ce4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065ce50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ce51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065ce58: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ce5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065ce5e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065ce61: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065ce64: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065ce67: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ce6c: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0065ce73: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65ce78u); f_005caba4();
    /* 0065ce78: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065ce7b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ce7e: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0065ce81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ce83: je 0x65cfdf */ if (fZ) goto L_0065cfdf;
L_0065ce89:; BB(0x0065ce89);
    /* 0065ce89: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 0065ce90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065ce97: mov ecx, eax */ r_ecx = r_eax;
    /* 0065ce99: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 0065ce9e: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0065cea1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065cea2: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0065cea5: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x65ceaau); f_007b4b48();
    /* 0065ceaa: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065ceb1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ceb4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065ceb7: mov dword ptr [ecx], 0xb330d0 */ W32((u32)(r_ecx), 0xb330d0u);
    /* 0065cebd: mov eax, dword ptr [0x9c82f8] */ r_eax = R32((u32)(0x9c82f8u));
    /* 0065cec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065cec3: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065cec6: call dword ptr [0xb330e4] */ { u32 t = R32((u32)(0xb330e4u)); r_esp -= 4; W32(r_esp, 0x65ceccu); call_ind(t); }
    /* 0065cecc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cecf: mov eax, dword ptr [0xa8f98c] */ r_eax = R32((u32)(0xa8f98cu));
    /* 0065ced4: mov dword ptr [ecx + 0xb0], 2 */ W32((u32)(r_ecx+0xb0u), 0x2u);
    /* 0065cede: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 0065cee4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cee6: push 0x9c81b8 */ { u32 v = 0x9c81b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ceeb: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x65cef0u); f_007b9a88();
    /* 0065cef0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cef3: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65cef8u); f_007b4f54();
    /* 0065cef8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cefb: mov dword ptr [eax + 0xb4], 0x43c80000 */ W32((u32)(r_eax+0xb4u), 0x43c80000u);
    /* 0065cf05: mov dword ptr [eax + 0xb8], 0x42480000 */ W32((u32)(r_eax+0xb8u), 0x42480000u);
    /* 0065cf0f: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 0065cf19: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 0065cf1f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065cf22: je 0x65cf4a */ if (fZ) goto L_0065cf4a;
L_0065cf24:; BB(0x0065cf24);
    /* 0065cf24: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065cf27: je 0x65cf4a */ if (fZ) goto L_0065cf4a;
L_0065cf29:; BB(0x0065cf29);
    /* 0065cf29: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0065cf30:; BB(0x0065cf30);
    /* 0065cf30: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cf33: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065cf36: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065cf39: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065cf3c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065cf3f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065cf46: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cf48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cf49: ret  */ FN_RET(0x0065ce40); r_esp += 4; return;
L_0065cf4a:; BB(0x0065cf4a);
    /* 0065cf4a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065cf4d: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0065cf50: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 0065cf54: movzx ebx, word ptr [eax + 4] */ r_ebx = (u32)R16((u32)(r_eax+0x4u));
    /* 0065cf58: movzx esi, word ptr [eax + 6] */ r_esi = (u32)R16((u32)(r_eax+0x6u));
    /* 0065cf5c: movzx edi, word ptr [eax + 8] */ r_edi = (u32)R16((u32)(r_eax+0x8u));
    /* 0065cf60: mov word ptr [ebp - 0x5c], dx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_edx);
    /* 0065cf64: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 0065cf68: mov word ptr [ebp - 0x5a], cx */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_ecx);
    /* 0065cf6c: mov word ptr [ebp - 0x58], bx */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_ebx);
    /* 0065cf70: mov word ptr [ebp - 0x56], si */ W16((u32)(r_ebp+0xffffffaau), (u16)r_esi);
    /* 0065cf74: mov word ptr [ebp - 0x54], di */ W16((u32)(r_ebp+0xffffffacu), (u16)r_edi);
    /* 0065cf78: mov word ptr [ebp - 0x52], dx */ W16((u32)(r_ebp+0xffffffaeu), (u16)r_edx);
    /* 0065cf7c: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0065cf7f: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0065cf82: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0065cf85: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0065cf88: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0065cf8b: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0065cf8e: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0065cf91: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0065cf94: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0065cf97: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0065cf9a: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0065cf9d: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0065cfa0: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0065cfa3: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0065cfa6: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0065cfa9: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 0065cfac: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0065cfaf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0065cfb2: mov dword ptr [ebp - 0x38], 0x42200000 */ W32((u32)(r_ebp+0xffffffc8u), 0x42200000u);
    /* 0065cfb9: mov dword ptr [ebp - 0x34], 0x41a00000 */ W32((u32)(r_ebp+0xffffffccu), 0x41a00000u);
    /* 0065cfc0: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 0065cfc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065cfc4: mov dword ptr [ebp - 0x30], 0x41200000 */ W32((u32)(r_ebp+0xffffffd0u), 0x41200000u);
    /* 0065cfcb: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x65cfd0u); f_0065f960();
    /* 0065cfd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065cfd1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cfd4: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0065cfda: jmp 0x65cf29 */ f_0065cf29(); return;
L_0065cfdf:; BB(0x0065cfdf);
    /* 0065cfdf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065cfe1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065cfe4: jmp 0x65cf30 */ goto L_0065cf30;
}

void f_0065cfec(void)
{
    FN_ENTER(0x0065cfec);
    /* 0065cfec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065cfed: mov ebp, esp */ r_ebp = r_esp;
    /* 0065cfef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065cff1: push 0x8e7856 */ { u32 v = 0x8e7856u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cff6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065cffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065cffd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0065d004: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065d007: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065d00a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0065d00d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0065d010: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0065d013: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d018: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0065d01f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x65d024u); f_005caba4();
    /* 0065d024: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065d027: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d02a: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0065d02d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d02f: je 0x65d18b */ if (fZ) goto L_0065d18b;
L_0065d035:; BB(0x0065d035);
    /* 0065d035: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 0065d03c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065d043: mov ecx, eax */ r_ecx = r_eax;
    /* 0065d045: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 0065d04a: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0065d04d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d04e: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0065d051: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x65d056u); f_007b4b48();
    /* 0065d056: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065d05d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d060: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065d063: mov dword ptr [ecx], 0xb330d0 */ W32((u32)(r_ecx), 0xb330d0u);
    /* 0065d069: mov eax, dword ptr [0x9c82f8] */ r_eax = R32((u32)(0x9c82f8u));
    /* 0065d06e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d06f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0065d072: call dword ptr [0xb330e4] */ { u32 t = R32((u32)(0xb330e4u)); r_esp -= 4; W32(r_esp, 0x65d078u); call_ind(t); }
    /* 0065d078: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d07b: mov eax, dword ptr [0xa8f990] */ r_eax = R32((u32)(0xa8f990u));
    /* 0065d080: mov dword ptr [ecx + 0xb0], 3 */ W32((u32)(r_ecx+0xb0u), 0x3u);
    /* 0065d08a: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 0065d090: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d092: push 0x9c81e4 */ { u32 v = 0x9c81e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d097: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x65d09cu); f_007b9a88();
    /* 0065d09c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d09f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x65d0a4u); f_007b4f54();
    /* 0065d0a4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d0a7: mov dword ptr [eax + 0xb4], 0x43c80000 */ W32((u32)(r_eax+0xb4u), 0x43c80000u);
    /* 0065d0b1: mov dword ptr [eax + 0xb8], 0x42480000 */ W32((u32)(r_eax+0xb8u), 0x42480000u);
    /* 0065d0bb: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 0065d0c5: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 0065d0cb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d0ce: je 0x65d0f6 */ if (fZ) goto L_0065d0f6;
L_0065d0d0:; BB(0x0065d0d0);
    /* 0065d0d0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0065d0d3: je 0x65d0f6 */ if (fZ) goto L_0065d0f6;
L_0065d0d5:; BB(0x0065d0d5);
    /* 0065d0d5: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0065d0dc:; BB(0x0065d0dc);
    /* 0065d0dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d0df: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d0e2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065d0e5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065d0e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065d0eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065d0f2: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d0f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d0f5: ret  */ FN_RET(0x0065cfec); r_esp += 4; return;
L_0065d0f6:; BB(0x0065d0f6);
    /* 0065d0f6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065d0f9: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0065d0fc: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 0065d100: movzx ebx, word ptr [eax + 4] */ r_ebx = (u32)R16((u32)(r_eax+0x4u));
    /* 0065d104: movzx esi, word ptr [eax + 6] */ r_esi = (u32)R16((u32)(r_eax+0x6u));
    /* 0065d108: movzx edi, word ptr [eax + 8] */ r_edi = (u32)R16((u32)(r_eax+0x8u));
    /* 0065d10c: mov word ptr [ebp - 0x5c], dx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_edx);
    /* 0065d110: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 0065d114: mov word ptr [ebp - 0x5a], cx */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_ecx);
    /* 0065d118: mov word ptr [ebp - 0x58], bx */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_ebx);
    /* 0065d11c: mov word ptr [ebp - 0x56], si */ W16((u32)(r_ebp+0xffffffaau), (u16)r_esi);
    /* 0065d120: mov word ptr [ebp - 0x54], di */ W16((u32)(r_ebp+0xffffffacu), (u16)r_edi);
    /* 0065d124: mov word ptr [ebp - 0x52], dx */ W16((u32)(r_ebp+0xffffffaeu), (u16)r_edx);
    /* 0065d128: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0065d12b: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0065d12e: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0065d131: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0065d134: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0065d137: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0065d13a: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0065d13d: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0065d140: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0065d143: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0065d146: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0065d149: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0065d14c: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0065d14f: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0065d152: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0065d155: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 0065d158: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0065d15b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0065d15e: mov dword ptr [ebp - 0x38], 0x42200000 */ W32((u32)(r_ebp+0xffffffc8u), 0x42200000u);
    /* 0065d165: mov dword ptr [ebp - 0x34], 0x41a00000 */ W32((u32)(r_ebp+0xffffffccu), 0x41a00000u);
    /* 0065d16c: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 0065d16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d170: mov dword ptr [ebp - 0x30], 0x41200000 */ W32((u32)(r_ebp+0xffffffd0u), 0x41200000u);
    /* 0065d177: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x65d17cu); f_0065f960();
    /* 0065d17c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065d17d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d180: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0065d186: jmp 0x65d0d5 */ f_0065d0d5(); return;
L_0065d18b:; BB(0x0065d18b);
    /* 0065d18b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0065d18d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065d190: jmp 0x65d0dc */ goto L_0065d0dc;
}

