#include "protos.h"

void f_0060c034(void) /* sub_60C034 */
{
    FN_ENTER(0x0060c034);
    /* 0060c034: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c035: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c037: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c039: push 0x8dfc68 */ { u32 v = 0x8dfc68u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c03e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060c044: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c045: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060c04c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c04f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060c052: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060c055: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060c058: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060c05b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060c05e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060c061: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060c064: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060c067: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60c06cu); f_0060c858();
    /* 0060c06c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060c073: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c076: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c079: mov dword ptr [ecx], 0xb21180 */ W32((u32)(r_ecx), 0xb21180u);
    /* 0060c07f: mov eax, dword ptr [0x9c426c] */ r_eax = R32((u32)(0x9c426cu));
    /* 0060c084: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c085: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060c088: call dword ptr [0xb212cc] */ { u32 t = R32((u32)(0xb212ccu)); r_esp -= 4; W32(r_esp, 0x60c08eu); call_ind(t); }
    /* 0060c08e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c091: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c093: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060c096: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060c099: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060c09c: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060c0a2: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060c0a8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c0ab: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060c0b1: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060c0b7: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060c0bd: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060c0c3: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060c0c9: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060c0cf: mov ecx, dword ptr [0xa8e874] */ r_ecx = R32((u32)(0xa8e874u));
    /* 0060c0d5: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060c0db: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c0de: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060c0e4: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060c0e7: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060c0ed: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060c0f0: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060c0f6: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060c0f9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x60c0feu); f_005b8610();
    /* 0060c0fe: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c101: mov ecx, dword ptr [0xa8e874] */ r_ecx = R32((u32)(0xa8e874u));
    /* 0060c107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c109: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0060c10c: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x60c111u); f_005b8624();
    /* 0060c111: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c114: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060c117: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60c11cu); f_00606bc8();
    /* 0060c11c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c11f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060c122: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060c125: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c128: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c12b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060c132: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c134: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c135: ret 8 */ FN_RET(0x0060c034); r_esp += 12; return;
}

void f_0060c138(void)
{
    FN_ENTER(0x0060c138);
    /* 0060c138: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c139: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c13b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c13d: push 0x8dfc90 */ { u32 v = 0x8dfc90u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c142: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060c148: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c149: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060c150: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c153: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060c156: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060c159: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060c15c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060c15f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c164: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060c16b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60c170u); f_008581c5();
    /* 0060c170: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060c171: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060c174: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c176: je 0x60c1b7 */ if (fZ) goto L_0060c1b7;
L_0060c178:; BB(0x0060c178);
    /* 0060c178: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060c17f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060c186: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060c189: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060c18b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c18c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c18d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c18e: push 0x9c425c */ { u32 v = 0x9c425cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c193: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c195: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60c19au); f_005b7a84();
    /* 0060c19a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060c19d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060c1a4:; BB(0x0060c1a4);
    /* 0060c1a4: mov dword ptr [0xa8e874], eax */ W32((u32)(0xa8e874u), r_eax);
    /* 0060c1a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c1ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060c1b3: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c1b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c1b6: ret  */ FN_RET(0x0060c138); r_esp += 4; return;
L_0060c1b7:; BB(0x0060c1b7);
    /* 0060c1b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060c1b9: jmp 0x60c1a4 */ goto L_0060c1a4;
}

void f_0060c1bc(void) /* sub_60C1BC */
{
    FN_ENTER(0x0060c1bc);
    /* 0060c1bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c1bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060c1bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060c1c1: call 0x60c1e0 */ r_esp -= 4; W32(r_esp, 0x60c1c6u); f_0060c1e0();
    /* 0060c1c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060c1ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060c1cc: jne 0x60c1d2 */ if (!fZ) goto L_0060c1d2;
L_0060c1ce:; BB(0x0060c1ce);
    /* 0060c1ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060c1cf: ret 4 */ FN_RET(0x0060c1bc); r_esp += 8; return;
L_0060c1d2:; BB(0x0060c1d2);
    /* 0060c1d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c1d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60c1d8u); f_005c2f74();
    /* 0060c1d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060c1d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060c1da: ret 4 */ FN_RET(0x0060c1bc); r_esp += 8; return;
}

void f_0060c1e0(void) /* sub_60C1E0 */
{
    FN_ENTER(0x0060c1e0);
    /* 0060c1e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c1e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c1e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c1e5: push 0x8dfcac */ { u32 v = 0x8dfcacu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c1ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060c1f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c1f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060c1f8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c1fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060c1fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060c201: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060c204: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060c207: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060c20a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060c20d: mov dword ptr [ecx], 0xb213c0 */ W32((u32)(r_ecx), 0xb213c0u);
    /* 0060c213: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060c21a: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60c21fu); f_0060c7e4();
    /* 0060c21f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c222: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060c229: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c22b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c22c: ret  */ FN_RET(0x0060c1e0); r_esp += 4; return;
}

void f_0060c230(void)
{
    FN_ENTER(0x0060c230);
    /* 0060c230: mov ecx, dword ptr [0xa8e880] */ r_ecx = R32((u32)(0xa8e880u));
    /* 0060c236: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060c238: je 0x60c24d */ if (fZ) goto L_0060c24d;
L_0060c23a:; BB(0x0060c23a);
    /* 0060c23a: je 0x60c243 */ if (fZ) goto L_0060c243;
L_0060c23c:; BB(0x0060c23c);
    /* 0060c23c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c23e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60c243u); f_004066a8();
L_0060c243:; BB(0x0060c243);
    /* 0060c243: mov dword ptr [0xa8e880], 0 */ W32((u32)(0xa8e880u), 0x0u);
L_0060c24d:; BB(0x0060c24d);
    /* 0060c24d: ret  */ FN_RET(0x0060c230); r_esp += 4; return;
}

void f_0060c250(void)
{
    FN_ENTER(0x0060c250);
    /* 0060c250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c251: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c253: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c255: push 0x8dfcee */ { u32 v = 0x8dfceeu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c25a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060c260: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c261: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060c268: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c26b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060c26e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060c271: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060c274: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060c277: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c279: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060c280: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60c285u); f_005caba4();
    /* 0060c285: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060c286: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060c289: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c28b: je 0x60c313 */ if (fZ) goto L_0060c313;
L_0060c291:; BB(0x0060c291);
    /* 0060c291: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060c298: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060c29f: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060c2a5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060c2a8: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60c2adu); f_00787a4c();
    /* 0060c2ad: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060c2b0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060c2b7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060c2ba:; BB(0x0060c2ba);
    /* 0060c2ba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060c2c1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060c2c8: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c2cd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60c2d2u); f_005caba4();
    /* 0060c2d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060c2d3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060c2d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c2d8: je 0x60c30f */ if (fZ) goto L_0060c30f;
L_0060c2da:; BB(0x0060c2da);
    /* 0060c2da: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060c2e1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060c2e8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060c2eb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c2ee: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c2f2: call 0x60c31c */ r_esp -= 4; W32(r_esp, 0x60c2f7u); f_0060c31c();
    /* 0060c2f7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c2fa: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060c301:; BB(0x0060c301);
    /* 0060c301: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c304: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060c30b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c30d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c30e: ret  */ FN_RET(0x0060c250); r_esp += 4; return;
L_0060c30f:; BB(0x0060c30f);
    /* 0060c30f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060c311: jmp 0x60c301 */ goto L_0060c301;
L_0060c313:; BB(0x0060c313);
    /* 0060c313: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060c315: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060c318: jmp 0x60c2ba */ goto L_0060c2ba;
}

void f_0060c31c(void) /* sub_60C31C */
{
    FN_ENTER(0x0060c31c);
    /* 0060c31c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c31d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c31f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c321: push 0x8dfd08 */ { u32 v = 0x8dfd08u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c326: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060c32c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c32d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060c334: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c337: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060c33a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060c33d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060c340: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060c343: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060c346: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060c349: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060c34c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060c34f: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60c354u); f_0060c858();
    /* 0060c354: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060c35b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c35e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c361: mov dword ptr [ecx], 0xb213c0 */ W32((u32)(r_ecx), 0xb213c0u);
    /* 0060c367: mov eax, dword ptr [0x9c4288] */ r_eax = R32((u32)(0x9c4288u));
    /* 0060c36c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c36d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060c370: call dword ptr [0xb2150c] */ { u32 t = R32((u32)(0xb2150cu)); r_esp -= 4; W32(r_esp, 0x60c376u); call_ind(t); }
    /* 0060c376: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c379: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c37b: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060c37e: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060c381: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060c384: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060c38a: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060c390: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c393: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060c399: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060c39f: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060c3a5: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060c3ab: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060c3b1: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060c3b7: mov ecx, dword ptr [0xa8e880] */ r_ecx = R32((u32)(0xa8e880u));
    /* 0060c3bd: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060c3c3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c3c6: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060c3cc: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060c3cf: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060c3d5: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060c3d8: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060c3de: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060c3e1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x60c3e6u); f_005b8610();
    /* 0060c3e6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c3e9: mov ecx, dword ptr [0xa8e880] */ r_ecx = R32((u32)(0xa8e880u));
    /* 0060c3ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c3f1: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0060c3f4: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x60c3f9u); f_005b8624();
    /* 0060c3f9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c3fc: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060c3ff: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60c404u); f_00606bc8();
    /* 0060c404: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c407: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060c40a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060c40d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c410: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c413: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060c41a: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c41c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c41d: ret 8 */ FN_RET(0x0060c31c); r_esp += 12; return;
}

void f_0060c420(void)
{
    FN_ENTER(0x0060c420);
    /* 0060c420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c421: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c423: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c425: push 0x8dfd30 */ { u32 v = 0x8dfd30u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c42a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060c430: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c431: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060c438: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c43b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060c43e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060c441: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060c444: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060c447: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c44c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060c453: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60c458u); f_008581c5();
    /* 0060c458: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060c459: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060c45c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c45e: je 0x60c49f */ if (fZ) goto L_0060c49f;
L_0060c460:; BB(0x0060c460);
    /* 0060c460: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060c467: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060c46e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060c471: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060c473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c474: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c475: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c476: push 0x9c4278 */ { u32 v = 0x9c4278u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c47b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c47d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60c482u); f_005b7a84();
    /* 0060c482: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060c485: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060c48c:; BB(0x0060c48c);
    /* 0060c48c: mov dword ptr [0xa8e880], eax */ W32((u32)(0xa8e880u), r_eax);
    /* 0060c491: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c494: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060c49b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c49d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c49e: ret  */ FN_RET(0x0060c420); r_esp += 4; return;
L_0060c49f:; BB(0x0060c49f);
    /* 0060c49f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060c4a1: jmp 0x60c48c */ goto L_0060c48c;
}

void f_0060c4a4(void) /* sub_60C4A4 */
{
    FN_ENTER(0x0060c4a4);
    /* 0060c4a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c4a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060c4a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060c4a9: call 0x60c4c8 */ r_esp -= 4; W32(r_esp, 0x60c4aeu); f_0060c4c8();
    /* 0060c4ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060c4b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060c4b4: jne 0x60c4ba */ if (!fZ) goto L_0060c4ba;
L_0060c4b6:; BB(0x0060c4b6);
    /* 0060c4b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060c4b7: ret 4 */ FN_RET(0x0060c4a4); r_esp += 8; return;
L_0060c4ba:; BB(0x0060c4ba);
    /* 0060c4ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c4bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60c4c0u); f_005c2f74();
    /* 0060c4c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060c4c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060c4c2: ret 4 */ FN_RET(0x0060c4a4); r_esp += 8; return;
}

void f_0060c4c8(void) /* sub_60C4C8 */
{
    FN_ENTER(0x0060c4c8);
    /* 0060c4c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c4c9: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c4cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c4cd: push 0x8dfd4c */ { u32 v = 0x8dfd4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c4d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060c4d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c4d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060c4e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c4e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060c4e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060c4e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060c4ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060c4ef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060c4f2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060c4f5: mov dword ptr [ecx], 0xb215c0 */ W32((u32)(r_ecx), 0xb215c0u);
    /* 0060c4fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060c502: call 0x606190 */ r_esp -= 4; W32(r_esp, 0x60c507u); f_00606190();
    /* 0060c507: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c50a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060c511: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c513: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c514: ret  */ FN_RET(0x0060c4c8); r_esp += 4; return;
}

void f_0060c518(void)
{
    FN_ENTER(0x0060c518);
    /* 0060c518: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c519: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c51b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c51d: push 0x8dfd8e */ { u32 v = 0x8dfd8eu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c522: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060c528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c529: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060c530: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c533: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060c536: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060c539: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060c53c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060c53f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c541: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060c548: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60c54du); f_005caba4();
    /* 0060c54d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060c54e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060c551: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c553: je 0x60c5db */ if (fZ) goto L_0060c5db;
L_0060c559:; BB(0x0060c559);
    /* 0060c559: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060c560: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060c567: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060c56d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060c570: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60c575u); f_00787a4c();
    /* 0060c575: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060c578: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060c57f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060c582:; BB(0x0060c582);
    /* 0060c582: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060c589: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060c590: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c595: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60c59au); f_005caba4();
    /* 0060c59a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060c59b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060c59e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c5a0: je 0x60c5d7 */ if (fZ) goto L_0060c5d7;
L_0060c5a2:; BB(0x0060c5a2);
    /* 0060c5a2: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060c5a9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060c5b0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060c5b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c5b6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c5b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c5ba: call 0x60c5e4 */ r_esp -= 4; W32(r_esp, 0x60c5bfu); f_0060c5e4();
    /* 0060c5bf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c5c2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060c5c9:; BB(0x0060c5c9);
    /* 0060c5c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c5cc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060c5d3: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c5d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c5d6: ret  */ FN_RET(0x0060c518); r_esp += 4; return;
L_0060c5d7:; BB(0x0060c5d7);
    /* 0060c5d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060c5d9: jmp 0x60c5c9 */ goto L_0060c5c9;
L_0060c5db:; BB(0x0060c5db);
    /* 0060c5db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060c5dd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060c5e0: jmp 0x60c582 */ goto L_0060c582;
}

void f_0060c5e4(void) /* sub_60C5E4 */
{
    FN_ENTER(0x0060c5e4);
    /* 0060c5e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c5e5: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c5e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c5e9: push 0x8dfda8 */ { u32 v = 0x8dfda8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c5ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060c5f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c5f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060c5fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c5ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060c602: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060c605: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060c608: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060c60b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060c60e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060c611: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060c614: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060c617: call 0x606c28 */ r_esp -= 4; W32(r_esp, 0x60c61cu); f_00606c28();
    /* 0060c61c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060c623: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c626: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c629: mov dword ptr [ecx], 0xb215c0 */ W32((u32)(r_ecx), 0xb215c0u);
    /* 0060c62f: mov eax, dword ptr [0x9c4340] */ r_eax = R32((u32)(0x9c4340u));
    /* 0060c634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c635: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060c638: call dword ptr [0xb2170c] */ { u32 t = R32((u32)(0xb2170cu)); r_esp -= 4; W32(r_esp, 0x60c63eu); call_ind(t); }
    /* 0060c63e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c641: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c644: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c646: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060c649: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060c64c: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060c64f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c651: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060c657: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060c65d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c660: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060c666: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060c66c: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 0060c672: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060c678: mov dword ptr [edx + 0x29c], eax */ W32((u32)(r_edx+0x29cu), r_eax);
    /* 0060c67e: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060c684: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060c68a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c68d: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060c693: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060c696: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060c69c: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060c69f: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060c6a5: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060c6a8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0060c6aa: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x60c6b0u); call_ind(t); }
    /* 0060c6b0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c6b3: mov eax, dword ptr [0xa72f48] */ r_eax = R32((u32)(0xa72f48u));
    /* 0060c6b8: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0060c6be: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 0060c6c1: movsx edx, word ptr [ecx + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xb8u));
    /* 0060c6c8: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 0060c6cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c6cc: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 0060c6d2: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 0060c6d5: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 0060c6d8: push dword ptr [eax + 0x430] */ { u32 v = R32((u32)(r_eax+0x430u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060c6de: push 0x9c42a0 */ { u32 v = 0x9c42a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c6e3: call 0x7aa624 */ r_esp -= 4; W32(r_esp, 0x60c6e8u); f_007aa624();
    /* 0060c6e8: push 0x9c3e8c */ { u32 v = 0x9c3e8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c6ed: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c6f0: mov dword ptr [ecx + 0x358], 0x9c3eb0 */ W32((u32)(r_ecx+0x358u), 0x9c3eb0u);
    /* 0060c6fa: call 0x771160 */ r_esp -= 4; W32(r_esp, 0x60c6ffu); f_00771160();
    /* 0060c6ff: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c702: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c704: push 0x9c4344 */ { u32 v = 0x9c4344u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c709: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x60c70eu); f_007b9a88();
    /* 0060c70e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c711: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x60c716u); f_007b4f54();
    /* 0060c716: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c719: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x60c71eu); f_0078730c();
    /* 0060c71e: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c721: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060c724: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c727: mov edx, dword ptr [edi + 0x300] */ r_edx = R32((u32)(r_edi+0x300u));
    /* 0060c72d: mov ecx, dword ptr [edi + 0x304] */ r_ecx = R32((u32)(r_edi+0x304u));
    /* 0060c733: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 0060c739: mov dword ptr [edi + 0x74], edx */ W32((u32)(r_edi+0x74u), r_edx);
    /* 0060c73c: mov dword ptr [edi + 0x78], ecx */ W32((u32)(r_edi+0x78u), r_ecx);
    /* 0060c73f: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 0060c742: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060c745: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060c748: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c74b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060c752: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c754: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c755: ret 8 */ FN_RET(0x0060c5e4); r_esp += 12; return;
}

void f_0060c7c0(void) /* sub_60C7C0 */
{
    FN_ENTER(0x0060c7c0);
    /* 0060c7c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c7c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060c7c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060c7c5: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60c7cau); f_0060c7e4();
    /* 0060c7ca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060c7ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060c7d0: jne 0x60c7d6 */ if (!fZ) goto L_0060c7d6;
L_0060c7d2:; BB(0x0060c7d2);
    /* 0060c7d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060c7d3: ret 4 */ FN_RET(0x0060c7c0); r_esp += 8; return;
L_0060c7d6:; BB(0x0060c7d6);
    /* 0060c7d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c7d7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60c7dcu); f_005c2f74();
    /* 0060c7dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060c7dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060c7de: ret 4 */ FN_RET(0x0060c7c0); r_esp += 8; return;
}

void f_0060c7e4(void) /* sub_60C7E4 */
{
    FN_ENTER(0x0060c7e4);
    /* 0060c7e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c7e5: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c7e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c7e9: push 0x8dfdc4 */ { u32 v = 0x8dfdc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c7ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060c7f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c7f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060c7fc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c7ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060c802: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060c805: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060c808: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060c80b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060c80e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060c811: mov dword ptr [ecx], 0xb217a0 */ W32((u32)(r_ecx), 0xb217a0u);
    /* 0060c817: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060c81e: call 0x606190 */ r_esp -= 4; W32(r_esp, 0x60c823u); f_00606190();
    /* 0060c823: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c826: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060c82d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c82f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c830: ret  */ FN_RET(0x0060c7e4); r_esp += 4; return;
}

void f_0060c834(void) /* sub_60C834 */
{
    FN_ENTER(0x0060c834);
    /* 0060c834: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0060c838: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0060c83b: jne 0x60c84c */ if (!fZ) goto L_0060c84c;
L_0060c83d:; BB(0x0060c83d);
    /* 0060c83d: mov eax, 1 */ r_eax = 0x1u;
    /* 0060c842: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0060c849: ret 4 */ FN_RET(0x0060c834); r_esp += 8; return;
L_0060c84c:; BB(0x0060c84c);
    /* 0060c84c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060c84e: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0060c855: ret 4 */ FN_RET(0x0060c834); r_esp += 8; return;
}

void f_0060c858(void) /* sub_60C858 */
{
    FN_ENTER(0x0060c858);
    /* 0060c858: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c859: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c85b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c85d: push 0x8dfde0 */ { u32 v = 0x8dfde0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c862: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060c868: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c869: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060c870: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c873: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060c876: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060c879: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060c87c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060c87f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060c882: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060c885: call 0x606c28 */ r_esp -= 4; W32(r_esp, 0x60c88au); f_00606c28();
    /* 0060c88a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060c891: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060c894: mov dword ptr [ecx], 0xb217a0 */ W32((u32)(r_ecx), 0xb217a0u);
    /* 0060c89a: mov eax, dword ptr [0xa8e4c4] */ r_eax = R32((u32)(0xa8e4c4u));
    /* 0060c89f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c8a1: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0060c8a3: push 0x92f79c */ { u32 v = 0x92f79cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c8a8: call 0x7aa624 */ r_esp -= 4; W32(r_esp, 0x60c8adu); f_007aa624();
    /* 0060c8ad: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060c8b0: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 0060c8b6: movzx ecx, word ptr [eax + 0xa] */ r_ecx = (u32)R16((u32)(r_eax+0xau));
    /* 0060c8ba: or ecx, 0xffff0080 */ {  u32 a = r_ecx; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060c8c0: mov word ptr [eax + 0xa], cx */ W16((u32)(r_eax+0xau), (u16)r_ecx);
    /* 0060c8c4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060c8c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c8ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060c8d1: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c8d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c8d4: ret 4 */ FN_RET(0x0060c858); r_esp += 8; return;
}

void f_0060c8d8(void) /* sub_60C8D8 */
{
    FN_ENTER(0x0060c8d8);
    /* 0060c8d8: mov eax, dword ptr [0xa8e89c] */ r_eax = R32((u32)(0xa8e89cu));
    /* 0060c8dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060c8df: je 0x60c8eb */ if (fZ) goto L_0060c8eb;
L_0060c8e1:; BB(0x0060c8e1);
    /* 0060c8e1: mov dword ptr [0xa8e89c], 0 */ W32((u32)(0xa8e89cu), 0x0u);
L_0060c8eb:; BB(0x0060c8eb);
    /* 0060c8eb: ret  */ FN_RET(0x0060c8d8); r_esp += 4; return;
}

void f_0060c8ec(void) /* sub_60C8EC */
{
    FN_ENTER(0x0060c8ec);
    /* 0060c8ec: mov dword ptr [0xa8e890], 0x3f800000 */ W32((u32)(0xa8e890u), 0x3f800000u);
    /* 0060c8f6: mov dword ptr [0xa8e894], 0x41000000 */ W32((u32)(0xa8e894u), 0x41000000u);
    /* 0060c900: mov dword ptr [0xa8e898], 0x3fc00000 */ W32((u32)(0xa8e898u), 0x3fc00000u);
    /* 0060c90a: ret  */ FN_RET(0x0060c8ec); r_esp += 4; return;
}

void f_0060c90c(void) /* sub_60C90C */
{
    FN_ENTER(0x0060c90c);
    /* 0060c90c: mov eax, dword ptr [0xa9428c] */ r_eax = R32((u32)(0xa9428cu));
    /* 0060c911: mov dword ptr [0xa8e89c], eax */ W32((u32)(0xa8e89cu), r_eax);
    /* 0060c916: ret  */ FN_RET(0x0060c90c); r_esp += 4; return;
}

void f_0060c918(void) /* sub_60C918 */
{
    FN_ENTER(0x0060c918);
    /* 0060c918: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c919: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060c91b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060c91d: call 0x60c93c */ r_esp -= 4; W32(r_esp, 0x60c922u); f_0060c93c();
    /* 0060c922: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060c926: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060c928: jne 0x60c92e */ if (!fZ) goto L_0060c92e;
L_0060c92a:; BB(0x0060c92a);
    /* 0060c92a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060c92b: ret 4 */ FN_RET(0x0060c918); r_esp += 8; return;
L_0060c92e:; BB(0x0060c92e);
    /* 0060c92e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c92f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60c934u); f_005c2f74();
    /* 0060c934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060c935: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060c936: ret 4 */ FN_RET(0x0060c918); r_esp += 8; return;
}

void f_0060c93c(void) /* sub_60C93C */
{
    FN_ENTER(0x0060c93c);
    /* 0060c93c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c93d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c93f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c941: push 0x8dfdfc */ { u32 v = 0x8dfdfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c946: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060c94c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c94d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060c954: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c957: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060c95a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060c95d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060c960: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060c963: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060c966: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060c969: mov dword ptr [ecx], 0xb219e0 */ W32((u32)(r_ecx), 0xb219e0u);
    /* 0060c96f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060c976: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60c97bu); f_0060c7e4();
    /* 0060c97b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c97e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060c985: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c987: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c988: ret  */ FN_RET(0x0060c93c); r_esp += 4; return;
}

void f_0060c98c(void) /* sub_60C98C */
{
    FN_ENTER(0x0060c98c);
    /* 0060c98c: mov ecx, dword ptr [0xa8e8a4] */ r_ecx = R32((u32)(0xa8e8a4u));
    /* 0060c992: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060c994: je 0x60c9a9 */ if (fZ) goto L_0060c9a9;
L_0060c996:; BB(0x0060c996);
    /* 0060c996: je 0x60c99f */ if (fZ) goto L_0060c99f;
L_0060c998:; BB(0x0060c998);
    /* 0060c998: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c99a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60c99fu); f_004066a8();
L_0060c99f:; BB(0x0060c99f);
    /* 0060c99f: mov dword ptr [0xa8e8a4], 0 */ W32((u32)(0xa8e8a4u), 0x0u);
L_0060c9a9:; BB(0x0060c9a9);
    /* 0060c9a9: ret  */ FN_RET(0x0060c98c); r_esp += 4; return;
}

void f_0060c9ac(void)
{
    FN_ENTER(0x0060c9ac);
    /* 0060c9ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c9ad: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c9af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c9b1: push 0x8dfe3e */ { u32 v = 0x8dfe3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c9b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060c9bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c9bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060c9c4: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c9c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060c9ca: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060c9cd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060c9d0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060c9d3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c9d5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060c9dc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60c9e1u); f_005caba4();
    /* 0060c9e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060c9e2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060c9e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c9e7: je 0x60ca6f */ if (fZ) goto L_0060ca6f;
L_0060c9ed:; BB(0x0060c9ed);
    /* 0060c9ed: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060c9f4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060c9fb: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060ca01: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060ca04: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60ca09u); f_00787a4c();
    /* 0060ca09: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060ca0c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060ca13: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060ca16:; BB(0x0060ca16);
    /* 0060ca16: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060ca1d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060ca24: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ca29: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60ca2eu); f_005caba4();
    /* 0060ca2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060ca2f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060ca32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ca34: je 0x60ca6b */ if (fZ) goto L_0060ca6b;
L_0060ca36:; BB(0x0060ca36);
    /* 0060ca36: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060ca3d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060ca44: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060ca47: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060ca4a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ca4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ca4e: call 0x60ca78 */ r_esp -= 4; W32(r_esp, 0x60ca53u); f_0060ca78();
    /* 0060ca53: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ca56: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060ca5d:; BB(0x0060ca5d);
    /* 0060ca5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ca60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060ca67: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ca69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ca6a: ret  */ FN_RET(0x0060c9ac); r_esp += 4; return;
L_0060ca6b:; BB(0x0060ca6b);
    /* 0060ca6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060ca6d: jmp 0x60ca5d */ goto L_0060ca5d;
L_0060ca6f:; BB(0x0060ca6f);
    /* 0060ca6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060ca71: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060ca74: jmp 0x60ca16 */ goto L_0060ca16;
}

void f_0060ca78(void) /* sub_60CA78 */
{
    FN_ENTER(0x0060ca78);
    /* 0060ca78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ca79: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ca7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ca7d: push 0x8dfe58 */ { u32 v = 0x8dfe58u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ca82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060ca88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ca89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060ca90: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060ca93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060ca96: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060ca99: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060ca9c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060ca9f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060caa2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060caa5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060caa8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060caab: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60cab0u); f_0060c858();
    /* 0060cab0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060cab7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060caba: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060cabd: mov dword ptr [ecx], 0xb219e0 */ W32((u32)(r_ecx), 0xb219e0u);
    /* 0060cac3: mov eax, dword ptr [0x9c439c] */ r_eax = R32((u32)(0x9c439cu));
    /* 0060cac8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cac9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060cacc: call dword ptr [0xb21b2c] */ { u32 t = R32((u32)(0xb21b2cu)); r_esp -= 4; W32(r_esp, 0x60cad2u); call_ind(t); }
    /* 0060cad2: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060cad5: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060cad8: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060cadb: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060cade: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060cae4: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060caea: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060caed: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060caf3: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060caf9: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060caff: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060cb05: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060cb0b: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060cb11: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060cb14: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060cb1a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060cb1d: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060cb23: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060cb26: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060cb2c: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060cb2f: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060cb35: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060cb38: mov edx, dword ptr [0xa8e8a4] */ r_edx = R32((u32)(0xa8e8a4u));
    /* 0060cb3e: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060cb44: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0060cb47: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060cb4a: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060cb50: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0060cb53: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060cb56: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60cb5bu); f_00606bc8();
    /* 0060cb5b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060cb5e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060cb61: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060cb64: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060cb67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060cb6a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060cb71: mov esp, ebp */ r_esp = r_ebp;
    /* 0060cb73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060cb74: ret 8 */ FN_RET(0x0060ca78); r_esp += 12; return;
}

void f_0060cb78(void) /* sub_60CB78 */
{
    FN_ENTER(0x0060cb78);
    /* 0060cb78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060cb79: mov ebp, esp */ r_ebp = r_esp;
    /* 0060cb7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060cb7d: push 0x8dfe80 */ { u32 v = 0x8dfe80u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cb82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060cb88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cb89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060cb90: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060cb93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060cb96: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060cb99: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060cb9c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060cb9f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cba4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060cbab: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60cbb0u); f_008581c5();
    /* 0060cbb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060cbb1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060cbb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060cbb6: je 0x60cbf7 */ if (fZ) goto L_0060cbf7;
L_0060cbb8:; BB(0x0060cbb8);
    /* 0060cbb8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060cbbf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060cbc6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060cbc9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060cbcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cbcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cbcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cbce: push 0x9c438c */ { u32 v = 0x9c438cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060cbd3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cbd5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60cbdau); f_005b7a84();
    /* 0060cbda: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060cbdd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060cbe4:; BB(0x0060cbe4);
    /* 0060cbe4: mov dword ptr [0xa8e8a4], eax */ W32((u32)(0xa8e8a4u), r_eax);
    /* 0060cbe9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060cbec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060cbf3: mov esp, ebp */ r_esp = r_ebp;
    /* 0060cbf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060cbf6: ret  */ FN_RET(0x0060cb78); r_esp += 4; return;
L_0060cbf7:; BB(0x0060cbf7);
    /* 0060cbf7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060cbf9: jmp 0x60cbe4 */ goto L_0060cbe4;
}

void f_0060cbfc(void) /* sub_60CBFC */
{
    FN_ENTER(0x0060cbfc);
    /* 0060cbfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cbfd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060cbff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060cc01: call 0x60cc20 */ r_esp -= 4; W32(r_esp, 0x60cc06u); f_0060cc20();
    /* 0060cc06: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060cc0a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060cc0c: jne 0x60cc12 */ if (!fZ) goto L_0060cc12;
L_0060cc0e:; BB(0x0060cc0e);
    /* 0060cc0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060cc0f: ret 4 */ FN_RET(0x0060cbfc); r_esp += 8; return;
L_0060cc12:; BB(0x0060cc12);
    /* 0060cc12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc13: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60cc18u); f_005c2f74();
    /* 0060cc18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060cc19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060cc1a: ret 4 */ FN_RET(0x0060cbfc); r_esp += 8; return;
}

void f_0060cc20(void) /* sub_60CC20 */
{
    FN_ENTER(0x0060cc20);
    /* 0060cc20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc21: mov ebp, esp */ r_ebp = r_esp;
    /* 0060cc23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc25: push 0x8dfe9c */ { u32 v = 0x8dfe9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060cc30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060cc38: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060cc3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060cc3e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060cc41: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060cc44: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060cc47: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060cc4a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060cc4d: mov dword ptr [ecx], 0xb21c20 */ W32((u32)(r_ecx), 0xb21c20u);
    /* 0060cc53: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060cc5a: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60cc5fu); f_0060c7e4();
    /* 0060cc5f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060cc62: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060cc69: mov esp, ebp */ r_esp = r_ebp;
    /* 0060cc6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060cc6c: ret  */ FN_RET(0x0060cc20); r_esp += 4; return;
}

void f_0060cc70(void) /* sub_60CC70 */
{
    FN_ENTER(0x0060cc70);
    /* 0060cc70: mov ecx, dword ptr [0xa8e8b0] */ r_ecx = R32((u32)(0xa8e8b0u));
    /* 0060cc76: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060cc78: je 0x60cc8d */ if (fZ) goto L_0060cc8d;
L_0060cc7a:; BB(0x0060cc7a);
    /* 0060cc7a: je 0x60cc83 */ if (fZ) goto L_0060cc83;
L_0060cc7c:; BB(0x0060cc7c);
    /* 0060cc7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc7e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60cc83u); f_004066a8();
L_0060cc83:; BB(0x0060cc83);
    /* 0060cc83: mov dword ptr [0xa8e8b0], 0 */ W32((u32)(0xa8e8b0u), 0x0u);
L_0060cc8d:; BB(0x0060cc8d);
    /* 0060cc8d: ret  */ FN_RET(0x0060cc70); r_esp += 4; return;
}

void f_0060cc90(void)
{
    FN_ENTER(0x0060cc90);
    /* 0060cc90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc91: mov ebp, esp */ r_ebp = r_esp;
    /* 0060cc93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc95: push 0x8dfede */ { u32 v = 0x8dfedeu; r_esp -= 4; W32(r_esp, v); }
    /* 0060cc9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060cca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cca1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060cca8: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060ccab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060ccae: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060ccb1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060ccb4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060ccb7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ccb9: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060ccc0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60ccc5u); f_005caba4();
    /* 0060ccc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060ccc6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060ccc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060cccb: je 0x60cd53 */ if (fZ) goto L_0060cd53;
L_0060ccd1:; BB(0x0060ccd1);
    /* 0060ccd1: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060ccd8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060ccdf: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060cce5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060cce8: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60ccedu); f_00787a4c();
    /* 0060cced: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060ccf0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060ccf7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060ccfa:; BB(0x0060ccfa);
    /* 0060ccfa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060cd01: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060cd08: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd0d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60cd12u); f_005caba4();
    /* 0060cd12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060cd13: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060cd16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060cd18: je 0x60cd4f */ if (fZ) goto L_0060cd4f;
L_0060cd1a:; BB(0x0060cd1a);
    /* 0060cd1a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060cd21: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060cd28: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060cd2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060cd2e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060cd31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd32: call 0x60cd5c */ r_esp -= 4; W32(r_esp, 0x60cd37u); f_0060cd5c();
    /* 0060cd37: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060cd3a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060cd41:; BB(0x0060cd41);
    /* 0060cd41: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060cd44: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060cd4b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060cd4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060cd4e: ret  */ FN_RET(0x0060cc90); r_esp += 4; return;
L_0060cd4f:; BB(0x0060cd4f);
    /* 0060cd4f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060cd51: jmp 0x60cd41 */ goto L_0060cd41;
L_0060cd53:; BB(0x0060cd53);
    /* 0060cd53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060cd55: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060cd58: jmp 0x60ccfa */ goto L_0060ccfa;
}

void f_0060cd5c(void) /* sub_60CD5C */
{
    FN_ENTER(0x0060cd5c);
    /* 0060cd5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd5d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060cd5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd61: push 0x8dfef8 */ { u32 v = 0x8dfef8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060cd6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cd6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060cd74: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060cd77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060cd7a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060cd7d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060cd80: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060cd83: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060cd86: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060cd89: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060cd8c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060cd8f: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60cd94u); f_0060c858();
    /* 0060cd94: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060cd9b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060cd9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060cda1: mov dword ptr [ecx], 0xb21c20 */ W32((u32)(r_ecx), 0xb21c20u);
    /* 0060cda7: mov eax, dword ptr [0x9c43b8] */ r_eax = R32((u32)(0x9c43b8u));
    /* 0060cdac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cdad: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060cdb0: call dword ptr [0xb21d6c] */ { u32 t = R32((u32)(0xb21d6cu)); r_esp -= 4; W32(r_esp, 0x60cdb6u); call_ind(t); }
    /* 0060cdb6: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060cdb9: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060cdbc: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060cdbf: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060cdc2: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060cdc8: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060cdce: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060cdd1: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060cdd7: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060cddd: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060cde3: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060cde9: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060cdef: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060cdf5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060cdf8: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060cdfe: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ce01: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060ce07: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060ce0a: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060ce10: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060ce13: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060ce19: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060ce1c: mov edx, dword ptr [0xa8e8b0] */ r_edx = R32((u32)(0xa8e8b0u));
    /* 0060ce22: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060ce28: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0060ce2b: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060ce2e: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060ce34: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0060ce37: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060ce3a: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60ce3fu); f_00606bc8();
    /* 0060ce3f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ce42: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060ce45: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060ce48: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060ce4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ce4e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060ce55: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ce57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ce58: ret 8 */ FN_RET(0x0060cd5c); r_esp += 12; return;
}

void f_0060ce5c(void) /* sub_60CE5C */
{
    FN_ENTER(0x0060ce5c);
    /* 0060ce5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ce5d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ce5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060ce61: push 0x8dff20 */ { u32 v = 0x8dff20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ce66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060ce6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ce6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060ce74: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060ce77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060ce7a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060ce7d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060ce80: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060ce83: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ce88: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060ce8f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60ce94u); f_008581c5();
    /* 0060ce94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060ce95: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060ce98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ce9a: je 0x60cedb */ if (fZ) goto L_0060cedb;
L_0060ce9c:; BB(0x0060ce9c);
    /* 0060ce9c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060cea3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060ceaa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060cead: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060ceaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ceb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ceb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ceb2: push 0x9c43a8 */ { u32 v = 0x9c43a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ceb7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ceb9: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60cebeu); f_005b7a84();
    /* 0060cebe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060cec1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060cec8:; BB(0x0060cec8);
    /* 0060cec8: mov dword ptr [0xa8e8b0], eax */ W32((u32)(0xa8e8b0u), r_eax);
    /* 0060cecd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ced0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060ced7: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ced9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ceda: ret  */ FN_RET(0x0060ce5c); r_esp += 4; return;
L_0060cedb:; BB(0x0060cedb);
    /* 0060cedb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060cedd: jmp 0x60cec8 */ goto L_0060cec8;
}

void f_0060cee0(void) /* sub_60CEE0 */
{
    FN_ENTER(0x0060cee0);
    /* 0060cee0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cee1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060cee3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060cee5: call 0x60cf04 */ r_esp -= 4; W32(r_esp, 0x60ceeau); f_0060cf04();
    /* 0060ceea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060ceee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060cef0: jne 0x60cef6 */ if (!fZ) goto L_0060cef6;
L_0060cef2:; BB(0x0060cef2);
    /* 0060cef2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060cef3: ret 4 */ FN_RET(0x0060cee0); r_esp += 8; return;
L_0060cef6:; BB(0x0060cef6);
    /* 0060cef6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060cef7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60cefcu); f_005c2f74();
    /* 0060cefc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060cefd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060cefe: ret 4 */ FN_RET(0x0060cee0); r_esp += 8; return;
}

void f_0060cf04(void) /* sub_60CF04 */
{
    FN_ENTER(0x0060cf04);
    /* 0060cf04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060cf05: mov ebp, esp */ r_ebp = r_esp;
    /* 0060cf07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060cf09: push 0x8dff3c */ { u32 v = 0x8dff3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060cf0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060cf14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cf15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060cf1c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060cf1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060cf22: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060cf25: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060cf28: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060cf2b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060cf2e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060cf31: mov dword ptr [ecx], 0xb21e60 */ W32((u32)(r_ecx), 0xb21e60u);
    /* 0060cf37: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060cf3e: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60cf43u); f_0060c7e4();
    /* 0060cf43: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060cf46: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060cf4d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060cf4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060cf50: ret  */ FN_RET(0x0060cf04); r_esp += 4; return;
}

void f_0060cf54(void) /* sub_60CF54 */
{
    FN_ENTER(0x0060cf54);
    /* 0060cf54: mov ecx, dword ptr [0xa8e8bc] */ r_ecx = R32((u32)(0xa8e8bcu));
    /* 0060cf5a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060cf5c: je 0x60cf71 */ if (fZ) goto L_0060cf71;
L_0060cf5e:; BB(0x0060cf5e);
    /* 0060cf5e: je 0x60cf67 */ if (fZ) goto L_0060cf67;
L_0060cf60:; BB(0x0060cf60);
    /* 0060cf60: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cf62: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60cf67u); f_004066a8();
L_0060cf67:; BB(0x0060cf67);
    /* 0060cf67: mov dword ptr [0xa8e8bc], 0 */ W32((u32)(0xa8e8bcu), 0x0u);
L_0060cf71:; BB(0x0060cf71);
    /* 0060cf71: ret  */ FN_RET(0x0060cf54); r_esp += 4; return;
}

void f_0060cf74(void)
{
    FN_ENTER(0x0060cf74);
    /* 0060cf74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060cf75: mov ebp, esp */ r_ebp = r_esp;
    /* 0060cf77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060cf79: push 0x8dff7e */ { u32 v = 0x8dff7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0060cf7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060cf84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060cf85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060cf8c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060cf8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060cf92: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060cf95: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060cf98: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060cf9b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cf9d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060cfa4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60cfa9u); f_005caba4();
    /* 0060cfa9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060cfaa: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060cfad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060cfaf: je 0x60d037 */ if (fZ) goto L_0060d037;
L_0060cfb5:; BB(0x0060cfb5);
    /* 0060cfb5: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060cfbc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060cfc3: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060cfc9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060cfcc: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60cfd1u); f_00787a4c();
    /* 0060cfd1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060cfd4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060cfdb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060cfde:; BB(0x0060cfde);
    /* 0060cfde: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060cfe5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060cfec: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060cff1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60cff6u); f_005caba4();
    /* 0060cff6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060cff7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060cffa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060cffc: je 0x60d033 */ if (fZ) goto L_0060d033;
L_0060cffe:; BB(0x0060cffe);
    /* 0060cffe: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060d005: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060d00c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060d00f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060d012: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d015: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d016: call 0x60d040 */ r_esp -= 4; W32(r_esp, 0x60d01bu); f_0060d040();
    /* 0060d01b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d01e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060d025:; BB(0x0060d025);
    /* 0060d025: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d028: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060d02f: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d031: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d032: ret  */ FN_RET(0x0060cf74); r_esp += 4; return;
L_0060d033:; BB(0x0060d033);
    /* 0060d033: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060d035: jmp 0x60d025 */ goto L_0060d025;
L_0060d037:; BB(0x0060d037);
    /* 0060d037: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060d039: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060d03c: jmp 0x60cfde */ goto L_0060cfde;
}

