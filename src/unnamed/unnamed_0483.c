#include "protos.h"

void f_0048301c(void) /* sub_48301C */
{
    FN_ENTER(0x0048301c);
    /* 0048301c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048301d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048301f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00483021: push 0x8cf818 */ { u32 v = 0x8cf818u; r_esp -= 4; W32(r_esp, v); }
    /* 00483026: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048302c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048302d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00483034: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00483037: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048303a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048303d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00483040: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00483043: mov eax, dword ptr [0xa46c7c] */ r_eax = R32((u32)(0xa46c7cu));
    /* 00483048: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048304a: je 0x48305c */ if (fZ) goto L_0048305c;
L_0048304c:; BB(0x0048304c);
    /* 0048304c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048304e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00483051: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00483058: mov esp, ebp */ r_esp = r_ebp;
    /* 0048305a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048305b: ret  */ FN_RET(0x0048301c); r_esp += 4; return;
L_0048305c:; BB(0x0048305c);
    /* 0048305c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00483063: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00483065: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x48306au); f_005caba4();
    /* 0048306a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048306b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0048306e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483070: je 0x4830ab */ if (fZ) goto L_004830ab;
L_00483072:; BB(0x00483072);
    /* 00483072: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00483079: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00483080: push dword ptr [0xaca340] */ { u32 v = R32((u32)(0xaca340u)); r_esp -= 4; W32(r_esp, v); }
    /* 00483086: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00483089: call 0x4830b0 */ r_esp -= 4; W32(r_esp, 0x48308eu); f_004830b0();
    /* 0048308e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00483091: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00483098:; BB(0x00483098);
    /* 00483098: mov dword ptr [0xa46c7c], eax */ W32((u32)(0xa46c7cu), r_eax);
    /* 0048309d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004830a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004830a7: mov esp, ebp */ r_esp = r_ebp;
    /* 004830a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004830aa: ret  */ FN_RET(0x0048301c); r_esp += 4; return;
L_004830ab:; BB(0x004830ab);
    /* 004830ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004830ad: jmp 0x483098 */ goto L_00483098;
}

void f_004830b0(void) /* sub_4830B0 */
{
    FN_ENTER(0x004830b0);
    /* 004830b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004830b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004830b3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004830b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004830b9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4830beu); f_008193cc();
    /* 004830be: mov dword ptr [ebx], 0xaf8498 */ W32((u32)(r_ebx), 0xaf8498u);
    /* 004830c4: mov edx, dword ptr [0x9a6880] */ r_edx = R32((u32)(0x9a6880u));
    /* 004830ca: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 004830cd: mov eax, ebx */ r_eax = r_ebx;
    /* 004830cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004830d0: ret 4 */ FN_RET(0x004830b0); r_esp += 8; return;
}

void f_004830d4(void) /* sub_4830D4 */
{
    FN_ENTER(0x004830d4);
    /* 004830d4: mov ecx, dword ptr [0xa46c7c] */ r_ecx = R32((u32)(0xa46c7cu));
    /* 004830da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004830dc: je 0x4830ec */ if (fZ) goto L_004830ec;
L_004830de:; BB(0x004830de);
    /* 004830de: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004830e2: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004830e6: call 0x4830f0 */ r_esp -= 4; W32(r_esp, 0x4830ebu); f_004830f0();
    /* 004830eb: ret  */ FN_RET(0x004830d4); r_esp += 4; return;
L_004830ec:; BB(0x004830ec);
    /* 004830ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004830ee: ret  */ FN_RET(0x004830d4); r_esp += 4; return;
}

void f_004830f0(void) /* sub_4830F0 */
{
    FN_ENTER(0x004830f0);
    /* 004830f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004830f1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004830f5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004830f8: jne 0x48313e */ if (!fZ) goto L_0048313e;
L_004830fa:; BB(0x004830fa);
    /* 004830fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004830fb: call 0x483144 */ r_esp -= 4; W32(r_esp, 0x483100u); f_00483144();
    /* 00483100: mov ebp, eax */ r_ebp = r_eax;
    /* 00483102: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00483105: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00483107: je 0x483135 */ if (fZ) goto L_00483135;
L_00483109:; BB(0x00483109);
    /* 00483109: mov edx, dword ptr [ebp + 0x1034] */ r_edx = R32((u32)(r_ebp+0x1034u));
    /* 0048310f: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483112: jne 0x483122 */ if (!fZ) goto L_00483122;
L_00483114:; BB(0x00483114);
    /* 00483114: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00483118: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00483119: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0048311b: call 0x48334c */ r_esp -= 4; W32(r_esp, 0x483120u); f_0048334c();
    /* 00483120: jmp 0x483135 */ goto L_00483135;
L_00483122:; BB(0x00483122);
    /* 00483122: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00483126: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00483127: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00483129: call 0x4832b0 */ r_esp -= 4; W32(r_esp, 0x48312eu); f_004832b0();
    /* 0048312e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00483130: call 0x483308 */ r_esp -= 4; W32(r_esp, 0x483135u); f_00483308();
L_00483135:; BB(0x00483135);
    /* 00483135: mov eax, 1 */ r_eax = 0x1u;
    /* 0048313a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048313b: ret 8 */ FN_RET(0x004830f0); r_esp += 12; return;
L_0048313e:; BB(0x0048313e);
    /* 0048313e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00483140: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00483141: ret 8 */ FN_RET(0x004830f0); r_esp += 12; return;
}

void f_00483144(void) /* sub_483144 */
{
    FN_ENTER(0x00483144);
    /* 00483144: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00483145: mov ebp, esp */ r_ebp = r_esp;
    /* 00483147: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00483149: push 0x8cf840 */ { u32 v = 0x8cf840u; r_esp -= 4; W32(r_esp, v); }
    /* 0048314e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00483154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483155: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048315c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048315f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00483162: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00483165: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00483168: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0048316b: mov eax, dword ptr [0xa46c78] */ r_eax = R32((u32)(0xa46c78u));
    /* 00483170: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00483172: je 0x483182 */ if (fZ) goto L_00483182;
L_00483174:; BB(0x00483174);
    /* 00483174: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00483177: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048317e: mov esp, ebp */ r_esp = r_ebp;
    /* 00483180: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00483181: ret  */ FN_RET(0x00483144); r_esp += 4; return;
L_00483182:; BB(0x00483182);
    /* 00483182: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00483189: push 0x1044 */ { u32 v = 0x1044u; r_esp -= 4; W32(r_esp, v); }
    /* 0048318e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x483193u); f_005caba4();
    /* 00483193: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00483194: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00483197: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483199: je 0x4831cc */ if (fZ) goto L_004831cc;
L_0048319b:; BB(0x0048319b);
    /* 0048319b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004831a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004831a9: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004831ac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004831af: call 0x4831d0 */ r_esp -= 4; W32(r_esp, 0x4831b4u); f_004831d0();
    /* 004831b4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004831b7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004831be:; BB(0x004831be);
    /* 004831be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004831c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004831c8: mov esp, ebp */ r_esp = r_ebp;
    /* 004831ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004831cb: ret  */ FN_RET(0x00483144); r_esp += 4; return;
L_004831cc:; BB(0x004831cc);
    /* 004831cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004831ce: jmp 0x4831be */ goto L_004831be;
}

void f_004831d0(void) /* sub_4831D0 */
{
    FN_ENTER(0x004831d0);
    /* 004831d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004831d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004831d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004831d5: push 0x8cf85c */ { u32 v = 0x8cf85cu; r_esp -= 4; W32(r_esp, v); }
    /* 004831da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004831e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004831e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004831e8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004831eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004831ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004831f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004831f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004831f7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004831fa: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004831fd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x483202u); f_008193cc();
    /* 00483202: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00483209: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048320c: mov dword ptr [ecx], 0xaf84a8 */ W32((u32)(r_ecx), 0xaf84a8u);
    /* 00483212: mov eax, dword ptr [0x9a6884] */ r_eax = R32((u32)(0x9a6884u));
    /* 00483217: mov dword ptr [ecx + 0x103c], 0 */ W32((u32)(r_ecx+0x103cu), 0x0u);
    /* 00483221: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00483223: mov dword ptr [ecx + 0x1030], edx */ W32((u32)(r_ecx+0x1030u), r_edx);
    /* 00483229: mov dword ptr [ecx + 0x1034], edx */ W32((u32)(r_ecx+0x1034u), r_edx);
    /* 0048322f: mov dword ptr [ecx + 0x101c], 0 */ W32((u32)(r_ecx+0x101cu), 0x0u);
    /* 00483239: mov dword ptr [ecx + 0x1038], edx */ W32((u32)(r_ecx+0x1038u), r_edx);
    /* 0048323f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00483242: mov eax, dword ptr [0x9a688c] */ r_eax = R32((u32)(0x9a688cu));
    /* 00483247: mov dword ptr [ecx + 0x1020], 0 */ W32((u32)(r_ecx+0x1020u), 0x0u);
    /* 00483251: mov word ptr [ecx + 0x1c], dx */ W16((u32)(r_ecx+0x1cu), (u16)r_edx);
    /* 00483255: mov word ptr [ecx + 0x81c], dx */ W16((u32)(r_ecx+0x81cu), (u16)r_edx);
    /* 0048325c: mov dword ptr [ecx + 0x1024], 0x41000000 */ W32((u32)(r_ecx+0x1024u), 0x41000000u);
    /* 00483266: mov dword ptr [0xa46c78], ecx */ W32((u32)(0xa46c78u), r_ecx);
    /* 0048326c: mov dword ptr [ecx + 0x1040], eax */ W32((u32)(r_ecx+0x1040u), r_eax);
    /* 00483272: mov dword ptr [ecx + 0x1028], 0x44200000 */ W32((u32)(r_ecx+0x1028u), 0x44200000u);
    /* 0048327c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048327e: mov dword ptr [ecx + 0x102c], 0x41e00000 */ W32((u32)(r_ecx+0x102cu), 0x41e00000u);
    /* 00483288: je 0x483291 */ if (fZ) goto L_00483291;
L_0048328a:; BB(0x0048328a);
    /* 0048328a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048328c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x48328eu); call_ind(t); }
    /* 0048328e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00483291:; BB(0x00483291);
    /* 00483291: mov eax, ecx */ r_eax = r_ecx;
    /* 00483293: mov dword ptr [ecx + 0x1034], 1 */ W32((u32)(r_ecx+0x1034u), 0x1u);
    /* 0048329d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004832a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004832a7: mov esp, ebp */ r_esp = r_ebp;
    /* 004832a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004832aa: ret 4 */ FN_RET(0x004831d0); r_esp += 8; return;
}

void f_004832b0(void) /* sub_4832B0 */
{
    FN_ENTER(0x004832b0);
    /* 004832b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004832b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004832b2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004832b5: mov esi, ecx */ r_esi = r_ecx;
    /* 004832b7: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 004832bc: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004832c0: lea edi, [esi + 0x1c] */ r_edi = (u32)(r_esi+0x1cu);
    /* 004832c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004832c4: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4832c9u); f_00857dec();
    /* 004832c9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004832ca: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x4832cfu); f_00858009();
    /* 004832cf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004832d1: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004832d4: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004832d6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004832d8: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004832da: mov eax, dword ptr [esi + 0x1028] */ r_eax = R32((u32)(r_esi+0x1028u));
    /* 004832e0: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004832e4: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 004832e8: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004832eb: fadd dword ptr [edx*4 + 0x9007a0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9007a0u));
    /* 004832f2: fstp dword ptr [esi + 0x101c] */ W_F32((u32)(r_esi+0x101cu), ST(0)); FPOP();
    /* 004832f8: mov dword ptr [esi + 0x103c], eax */ W32((u32)(r_esi+0x103cu), r_eax);
    /* 004832fe: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00483301: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00483302: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00483303: ret 4 */ FN_RET(0x004832b0); r_esp += 8; return;
}

void f_00483308(void) /* sub_483308 */
{
    FN_ENTER(0x00483308);
    /* 00483308: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00483309: mov edi, ecx */ r_edi = r_ecx;
    /* 0048330b: mov eax, dword ptr [edi + 0x1034] */ r_eax = R32((u32)(r_edi+0x1034u));
    /* 00483311: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483314: je 0x48331b */ if (fZ) goto L_0048331b;
L_00483316:; BB(0x00483316);
    /* 00483316: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00483319: jne 0x48334a */ if (!fZ) goto L_0048334a;
L_0048331b:; BB(0x0048331b);
    /* 0048331b: mov eax, dword ptr [edi + 0x1040] */ r_eax = R32((u32)(r_edi+0x1040u));
    /* 00483321: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483323: je 0x48332b */ if (fZ) goto L_0048332b;
L_00483325:; BB(0x00483325);
    /* 00483325: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00483327: mov ecx, edi */ r_ecx = r_edi;
    /* 00483329: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x48332bu); call_ind(t); }
L_0048332b:; BB(0x0048332b);
    /* 0048332b: mov eax, dword ptr [0x9a6890] */ r_eax = R32((u32)(0x9a6890u));
    /* 00483330: mov dword ptr [edi + 0x1040], eax */ W32((u32)(r_edi+0x1040u), r_eax);
    /* 00483336: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00483338: je 0x483340 */ if (fZ) goto L_00483340;
L_0048333a:; BB(0x0048333a);
    /* 0048333a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048333c: mov ecx, edi */ r_ecx = r_edi;
    /* 0048333e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x483340u); call_ind(t); }
L_00483340:; BB(0x00483340);
    /* 00483340: mov dword ptr [edi + 0x1034], 2 */ W32((u32)(r_edi+0x1034u), 0x2u);
L_0048334a:; BB(0x0048334a);
    /* 0048334a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048334b: ret  */ FN_RET(0x00483308); r_esp += 4; return;
}

void f_0048334c(void) /* sub_48334C */
{
    FN_ENTER(0x0048334c);
    /* 0048334c: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 00483351: add ecx, 0x81c */ {  u32 a = r_ecx; u32 b = 0x81cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00483357: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048335b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048335c: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x483361u); f_00857dec();
    /* 00483361: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00483364: ret 4 */ FN_RET(0x0048334c); r_esp += 8; return;
}

void f_00483368(void) /* sub_483368 */
{
    FN_ENTER(0x00483368);
    /* 00483368: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0048336a: call dword ptr [ecx + 0x1040] */ { u32 t = R32((u32)(r_ecx+0x1040u)); r_esp -= 4; W32(r_esp, 0x483370u); call_ind(t); }
    /* 00483370: ret  */ FN_RET(0x00483368); r_esp += 4; return;
}

void f_00483374(void) /* sub_483374 */
{
    FN_ENTER(0x00483374);
    /* 00483374: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00483375: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00483376: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00483379: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048337b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048337d: call 0x483470 */ r_esp -= 4; W32(r_esp, 0x483382u); f_00483470();
    /* 00483382: mov eax, dword ptr [ebx + 0x1038] */ r_eax = R32((u32)(r_ebx+0x1038u));
    /* 00483388: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048338d: jge 0x483394 */ if ((fS==fO)) goto L_00483394;
L_0048338f:; BB(0x0048338f);
    /* 0048338f: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00483392: jmp 0x483399 */ goto L_00483399;
L_00483394:; BB(0x00483394);
    /* 00483394: mov eax, 0x80000000 */ r_eax = 0x80000000u;
L_00483399:; BB(0x00483399);
    /* 00483399: fld dword ptr [ebx + 0x1020] */ FPUSH(R_F32((u32)(r_ebx+0x1020u)));
    /* 0048339f: mov edx, dword ptr [ebx + 0x1024] */ r_edx = R32((u32)(r_ebx+0x1024u));
    /* 004833a5: fld dword ptr [ebx + 0x1028] */ FPUSH(R_F32((u32)(r_ebx+0x1028u)));
    /* 004833ab: fld dword ptr [ebx + 0x102c] */ FPUSH(R_F32((u32)(r_ebx+0x102cu)));
    /* 004833b1: fsub dword ptr [ebx + 0x1024] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x1024u));
    /* 004833b7: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004833bb: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004833bd: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004833c1: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004833c5: call 0x483490 */ r_esp -= 4; W32(r_esp, 0x4833cau); f_00483490();
    /* 004833ca: mov eax, dword ptr [ebx + 0x1034] */ r_eax = R32((u32)(r_ebx+0x1034u));
    /* 004833d0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004833d3: je 0x4833db */ if (fZ) goto L_004833db;
L_004833d5:; BB(0x004833d5);
    /* 004833d5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004833d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004833d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004833da: ret  */ FN_RET(0x00483374); r_esp += 4; return;
L_004833db:; BB(0x004833db);
    /* 004833db: fld dword ptr [0x9007b0] */ FPUSH(R_F32((u32)(0x9007b0u)));
    /* 004833e1: fadd dword ptr [ebx + 0x102c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x102cu));
    /* 004833e7: mov ebp, dword ptr [ebx + 0x103c] */ r_ebp = R32((u32)(r_ebx+0x103cu));
    /* 004833ed: fld dword ptr [ebx + 0x1024] */ FPUSH(R_F32((u32)(r_ebx+0x1024u)));
    /* 004833f3: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004833f5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004833f7: fmul dword ptr [0x9007ac] */ ST(0) = ST(0) * R_F32((u32)(0x9007acu));
    /* 004833fd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004833ff: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00483403: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00483405: call 0x7ac620 */ r_esp -= 4; W32(r_esp, 0x48340au); f_007ac620();
    /* 0048340a: push dword ptr [ebx + 0x102c] */ { u32 v = R32((u32)(r_ebx+0x102cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00483410: push dword ptr [ebx + 0x1028] */ { u32 v = R32((u32)(r_ebx+0x1028u)); r_esp -= 4; W32(r_esp, v); }
    /* 00483416: push dword ptr [ebx + 0x1024] */ { u32 v = R32((u32)(r_ebx+0x1024u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048341c: push dword ptr [ebx + 0x1020] */ { u32 v = R32((u32)(r_ebx+0x1020u)); r_esp -= 4; W32(r_esp, v); }
    /* 00483422: call 0x7ac62c */ r_esp -= 4; W32(r_esp, 0x483427u); f_007ac62c();
    /* 00483427: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048342a: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0048342e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00483432: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00483435: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00483438: mov dword ptr [esp + 0xc], 0xffffffff */ W32((u32)(r_esp+0xcu), 0xffffffffu);
    /* 00483440: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00483444: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 0048344c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00483454: mov dword ptr [esp + 0x18], 1 */ W32((u32)(r_esp+0x18u), 0x1u);
    /* 0048345c: call 0x7ab554 */ r_esp -= 4; W32(r_esp, 0x483461u); f_007ab554();
    /* 00483461: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483463: call 0x7ac620 */ r_esp -= 4; W32(r_esp, 0x483468u); f_007ac620();
    /* 00483468: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00483469: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048346c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048346d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048346e: ret  */ FN_RET(0x00483374); r_esp += 4; return;
}

void f_00483470(void) /* sub_483470 */
{
    FN_ENTER(0x00483470);
    /* 00483470: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x483475u); f_004d28a4();
    /* 00483475: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x48347au); f_0082dbac();
    /* 0048347a: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x48347fu); f_007a9044();
    /* 0048347f: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x483484u); f_007a93d8();
    /* 00483484: ret  */ FN_RET(0x00483470); r_esp += 4; return;
}

void f_00483490(void) /* sub_483490 */
{
    FN_ENTER(0x00483490);
    /* 00483490: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00483491: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00483494: mov ecx, eax */ r_ecx = r_eax;
    /* 00483496: mov edx, 0x900760 */ r_edx = 0x900760u;
    /* 0048349b: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0048349f: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 004834a3: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 004834a7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004834ab: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 004834ad: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004834b0: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004834b3: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004834b7: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 004834ba: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 004834be: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 004834c1: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 004834c5: mov ebx, dword ptr [edx + 0x10] */ r_ebx = R32((u32)(r_edx+0x10u));
    /* 004834c8: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 004834cc: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 004834cf: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 004834d3: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 004834d6: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 004834da: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 004834dd: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 004834e1: mov ebx, dword ptr [edx + 0x20] */ r_ebx = R32((u32)(r_edx+0x20u));
    /* 004834e4: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 004834e8: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 004834eb: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 004834ef: mov ebx, dword ptr [edx + 0x28] */ r_ebx = R32((u32)(r_edx+0x28u));
    /* 004834f2: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 004834f6: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 004834f9: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 004834fd: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 00483500: mov dword ptr [esp + 0x30], ebx */ W32((u32)(r_esp+0x30u), r_ebx);
    /* 00483504: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 00483507: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 0048350b: mov ebx, dword ptr [edx + 0x38] */ r_ebx = R32((u32)(r_edx+0x38u));
    /* 0048350e: mov edx, dword ptr [edx + 0x3c] */ r_edx = R32((u32)(r_edx+0x3cu));
    /* 00483511: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 00483515: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00483519: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0048351b: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0048351e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00483520: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00483522: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00483526: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0048352a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0048352c: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 00483530: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00483532: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 00483536: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0048353a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0048353c: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00483540: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00483544: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00483548: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0048354c: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00483550: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00483554: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00483557: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00483559: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048355b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048355c: call 0x82b1a0 */ r_esp -= 4; W32(r_esp, 0x483561u); f_0082b1a0();
    /* 00483561: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00483564: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00483565: ret  */ FN_RET(0x00483490); r_esp += 4; return;
}

void f_00483568(void) /* sub_483568 */
{
    FN_ENTER(0x00483568);
    /* 00483568: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00483569: mov edi, ecx */ r_edi = r_ecx;
    /* 0048356b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0048356f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00483571: je 0x4835d0 */ if (fZ) goto L_004835d0;
L_00483573:; BB(0x00483573);
    /* 00483573: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00483576: je 0x4835d0 */ if (fZ) goto L_004835d0;
L_00483578:; BB(0x00483578);
    /* 00483578: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048357b: jne 0x4835d0 */ if (!fZ) goto L_004835d0;
L_0048357d:; BB(0x0048357d);
    /* 0048357d: mov eax, dword ptr [edi + 0x1038] */ r_eax = R32((u32)(r_edi+0x1038u));
    /* 00483583: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00483586: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048358b: jg 0x483597 */ if ((!fZ&&fS==fO)) goto L_00483597;
L_0048358d:; BB(0x0048358d);
    /* 0048358d: mov dword ptr [edi + 0x1038], eax */ W32((u32)(r_edi+0x1038u), r_eax);
    /* 00483593: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00483594: ret 4 */ FN_RET(0x00483568); r_esp += 8; return;
L_00483597:; BB(0x00483597);
    /* 00483597: mov eax, dword ptr [edi + 0x1040] */ r_eax = R32((u32)(r_edi+0x1040u));
    /* 0048359d: mov dword ptr [edi + 0x1038], 0xff */ W32((u32)(r_edi+0x1038u), 0xffu);
    /* 004835a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004835a9: je 0x4835b1 */ if (fZ) goto L_004835b1;
L_004835ab:; BB(0x004835ab);
    /* 004835ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004835ad: mov ecx, edi */ r_ecx = r_edi;
    /* 004835af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4835b1u); call_ind(t); }
L_004835b1:; BB(0x004835b1);
    /* 004835b1: mov eax, dword ptr [0x9a6894] */ r_eax = R32((u32)(0x9a6894u));
    /* 004835b6: mov dword ptr [edi + 0x1040], eax */ W32((u32)(r_edi+0x1040u), r_eax);
    /* 004835bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004835be: je 0x4835c6 */ if (fZ) goto L_004835c6;
L_004835c0:; BB(0x004835c0);
    /* 004835c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004835c2: mov ecx, edi */ r_ecx = r_edi;
    /* 004835c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4835c6u); call_ind(t); }
L_004835c6:; BB(0x004835c6);
    /* 004835c6: mov dword ptr [edi + 0x1034], 3 */ W32((u32)(r_edi+0x1034u), 0x3u);
L_004835d0:; BB(0x004835d0);
    /* 004835d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004835d1: ret 4 */ FN_RET(0x00483568); r_esp += 8; return;
}

void f_004835d4(void) /* sub_4835D4 */
{
    FN_ENTER(0x004835d4);
    /* 004835d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004835d5: mov edi, ecx */ r_edi = r_ecx;
    /* 004835d7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004835db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004835dd: je 0x48364e */ if (fZ) goto L_0048364e;
L_004835df:; BB(0x004835df);
    /* 004835df: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004835e2: je 0x48364e */ if (fZ) goto L_0048364e;
L_004835e4:; BB(0x004835e4);
    /* 004835e4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004835e7: jne 0x48364e */ if (!fZ) goto L_0048364e;
L_004835e9:; BB(0x004835e9);
    /* 004835e9: fld dword ptr [0x9007a8] */ FPUSH(R_F32((u32)(0x9007a8u)));
    /* 004835ef: fadd dword ptr [edi + 0x103c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x103cu));
    /* 004835f5: fld dword ptr [edi + 0x1020] */ FPUSH(R_F32((u32)(r_edi+0x1020u)));
    /* 004835fb: fsub dword ptr [edi + 0x101c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x101cu));
    /* 00483601: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00483603: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00483605: fstp dword ptr [edi + 0x103c] */ W_F32((u32)(r_edi+0x103cu), ST(0)); FPOP();
    /* 0048360b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048360c: jbe 0x48364e */ if ((fC||fZ)) goto L_0048364e;
L_0048360e:; BB(0x0048360e);
    /* 0048360e: movzx eax, word ptr [edi + 0x81c] */ r_eax = (u32)R16((u32)(r_edi+0x81cu));
    /* 00483615: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483617: je 0x483647 */ if (fZ) goto L_00483647;
L_00483619:; BB(0x00483619);
    /* 00483619: lea eax, [edi + 0x81c] */ r_eax = (u32)(r_edi+0x81cu);
    /* 0048361f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483620: mov ecx, edi */ r_ecx = r_edi;
    /* 00483622: call 0x4832b0 */ r_esp -= 4; W32(r_esp, 0x483627u); f_004832b0();
    /* 00483627: mov edx, dword ptr [edi + 0x1028] */ r_edx = R32((u32)(r_edi+0x1028u));
    /* 0048362d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048362f: mov word ptr [edi + 0x81c], ax */ W16((u32)(r_edi+0x81cu), (u16)r_eax);
    /* 00483636: mov dword ptr [edi + 0x103c], edx */ W32((u32)(r_edi+0x103cu), r_edx);
    /* 0048363c: mov ecx, edi */ r_ecx = r_edi;
    /* 0048363e: call 0x483308 */ r_esp -= 4; W32(r_esp, 0x483643u); f_00483308();
    /* 00483643: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00483644: ret 4 */ FN_RET(0x004835d4); r_esp += 8; return;
L_00483647:; BB(0x00483647);
    /* 00483647: mov ecx, edi */ r_ecx = r_edi;
    /* 00483649: call 0x483654 */ r_esp -= 4; W32(r_esp, 0x48364eu); f_00483654();
L_0048364e:; BB(0x0048364e);
    /* 0048364e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048364f: ret 4 */ FN_RET(0x004835d4); r_esp += 8; return;
}

void f_00483654(void) /* sub_483654 */
{
    FN_ENTER(0x00483654);
    /* 00483654: mov eax, dword ptr [ecx + 0x1030] */ r_eax = R32((u32)(r_ecx+0x1030u));
    /* 0048365a: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048365d: mov dword ptr [ecx + 0x1030], eax */ W32((u32)(r_ecx+0x1030u), r_eax);
    /* 00483663: call 0x48366c */ r_esp -= 4; W32(r_esp, 0x483668u); f_0048366c();
    /* 00483668: ret  */ FN_RET(0x00483654); r_esp += 4; return;
}

void f_0048366c(void) /* sub_48366C */
{
    FN_ENTER(0x0048366c);
    /* 0048366c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048366d: mov edi, ecx */ r_edi = r_ecx;
    /* 0048366f: mov eax, dword ptr [edi + 0x1034] */ r_eax = R32((u32)(r_edi+0x1034u));
    /* 00483675: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00483678: jl 0x4836ae */ if ((fS!=fO)) goto L_004836ae;
L_0048367a:; BB(0x0048367a);
    /* 0048367a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048367d: jg 0x4836ae */ if ((!fZ&&fS==fO)) goto L_004836ae;
L_0048367f:; BB(0x0048367f);
    /* 0048367f: mov eax, dword ptr [edi + 0x1040] */ r_eax = R32((u32)(r_edi+0x1040u));
    /* 00483685: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483687: je 0x48368f */ if (fZ) goto L_0048368f;
L_00483689:; BB(0x00483689);
    /* 00483689: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048368b: mov ecx, edi */ r_ecx = r_edi;
    /* 0048368d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x48368fu); call_ind(t); }
L_0048368f:; BB(0x0048368f);
    /* 0048368f: mov eax, dword ptr [0x9a6898] */ r_eax = R32((u32)(0x9a6898u));
    /* 00483694: mov dword ptr [edi + 0x1040], eax */ W32((u32)(r_edi+0x1040u), r_eax);
    /* 0048369a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048369c: je 0x4836a4 */ if (fZ) goto L_004836a4;
L_0048369e:; BB(0x0048369e);
    /* 0048369e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004836a0: mov ecx, edi */ r_ecx = r_edi;
    /* 004836a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4836a4u); call_ind(t); }
L_004836a4:; BB(0x004836a4);
    /* 004836a4: mov dword ptr [edi + 0x1034], 4 */ W32((u32)(r_edi+0x1034u), 0x4u);
L_004836ae:; BB(0x004836ae);
    /* 004836ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004836af: ret  */ FN_RET(0x0048366c); r_esp += 4; return;
}

void f_004836b0(void) /* sub_4836B0 */
{
    FN_ENTER(0x004836b0);
    /* 004836b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004836b1: mov edi, ecx */ r_edi = r_ecx;
    /* 004836b3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004836b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004836b9: je 0x4836d8 */ if (fZ) goto L_004836d8;
L_004836bb:; BB(0x004836bb);
    /* 004836bb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004836be: je 0x4836d8 */ if (fZ) goto L_004836d8;
L_004836c0:; BB(0x004836c0);
    /* 004836c0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004836c3: jne 0x4836d8 */ if (!fZ) goto L_004836d8;
L_004836c5:; BB(0x004836c5);
    /* 004836c5: mov eax, dword ptr [edi + 0x1038] */ r_eax = R32((u32)(r_edi+0x1038u));
    /* 004836cb: add eax, -5 */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004836ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004836d0: jl 0x4836dc */ if ((fS!=fO)) goto L_004836dc;
L_004836d2:; BB(0x004836d2);
    /* 004836d2: mov dword ptr [edi + 0x1038], eax */ W32((u32)(r_edi+0x1038u), r_eax);
L_004836d8:; BB(0x004836d8);
    /* 004836d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004836d9: ret 4 */ FN_RET(0x004836b0); r_esp += 8; return;
L_004836dc:; BB(0x004836dc);
    /* 004836dc: mov eax, dword ptr [edi + 0x1030] */ r_eax = R32((u32)(r_edi+0x1030u));
    /* 004836e2: mov dword ptr [edi + 0x1038], 0 */ W32((u32)(r_edi+0x1038u), 0x0u);
    /* 004836ec: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004836ee: je 0x48370b */ if (fZ) goto L_0048370b;
L_004836f0:; BB(0x004836f0);
    /* 004836f0: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004836f4: mov dword ptr [0xa46c78], 0 */ W32((u32)(0xa46c78u), 0x0u);
    /* 004836fe: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00483703: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00483707: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00483708: ret 4 */ FN_RET(0x004836b0); r_esp += 8; return;
L_0048370b:; BB(0x0048370b);
    /* 0048370b: mov eax, dword ptr [edi + 0x1040] */ r_eax = R32((u32)(r_edi+0x1040u));
    /* 00483711: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483713: je 0x48371b */ if (fZ) goto L_0048371b;
L_00483715:; BB(0x00483715);
    /* 00483715: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00483717: mov ecx, edi */ r_ecx = r_edi;
    /* 00483719: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x48371bu); call_ind(t); }
L_0048371b:; BB(0x0048371b);
    /* 0048371b: mov eax, dword ptr [0x9a688c] */ r_eax = R32((u32)(0x9a688cu));
    /* 00483720: mov dword ptr [edi + 0x1040], eax */ W32((u32)(r_edi+0x1040u), r_eax);
    /* 00483726: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00483728: je 0x483730 */ if (fZ) goto L_00483730;
L_0048372a:; BB(0x0048372a);
    /* 0048372a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048372c: mov ecx, edi */ r_ecx = r_edi;
    /* 0048372e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x483730u); call_ind(t); }
L_00483730:; BB(0x00483730);
    /* 00483730: mov dword ptr [edi + 0x1034], 1 */ W32((u32)(r_edi+0x1034u), 0x1u);
    /* 0048373a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048373b: ret 4 */ FN_RET(0x004836b0); r_esp += 8; return;
}

void f_00483740(void) /* sub_483740 */
{
    FN_ENTER(0x00483740);
    /* 00483740: mov eax, dword ptr [0xa46c8c] */ r_eax = R32((u32)(0xa46c8cu));
    /* 00483745: ret  */ FN_RET(0x00483740); r_esp += 4; return;
}

void f_00483748(void) /* sub_483748 */
{
    FN_ENTER(0x00483748);
    /* 00483748: mov eax, dword ptr [0xa46c90] */ r_eax = R32((u32)(0xa46c90u));
    /* 0048374d: ret  */ FN_RET(0x00483748); r_esp += 4; return;
}

void f_00483750(void) /* sub_483750 */
{
    FN_ENTER(0x00483750);
    /* 00483750: mov eax, dword ptr [0xa46c94] */ r_eax = R32((u32)(0xa46c94u));
    /* 00483755: ret  */ FN_RET(0x00483750); r_esp += 4; return;
}

void f_00483758(void) /* sub_483758 */
{
    FN_ENTER(0x00483758);
    /* 00483758: mov eax, dword ptr [0xa46c88] */ r_eax = R32((u32)(0xa46c88u));
    /* 0048375d: ret  */ FN_RET(0x00483758); r_esp += 4; return;
}

void f_00483760(void) /* sub_483760 */
{
    FN_ENTER(0x00483760);
    /* 00483760: mov eax, 1 */ r_eax = 0x1u;
    /* 00483765: mov dword ptr [0xa46c88], eax */ W32((u32)(0xa46c88u), r_eax);
    /* 0048376a: mov dword ptr [0xa46c8c], eax */ W32((u32)(0xa46c8cu), r_eax);
    /* 0048376f: mov dword ptr [0xa46c90], eax */ W32((u32)(0xa46c90u), r_eax);
    /* 00483774: mov dword ptr [0xa46c94], eax */ W32((u32)(0xa46c94u), r_eax);
    /* 00483779: ret  */ FN_RET(0x00483760); r_esp += 4; return;
}

void f_0048377c(void) /* sub_48377C */
{
    FN_ENTER(0x0048377c);
    /* 0048377c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048377f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00483782: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483783: push 0x9007e0 */ { u32 v = 0x9007e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483788: call 0x82d3c0 */ r_esp -= 4; W32(r_esp, 0x48378du); f_0082d3c0();
    /* 0048378d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00483790: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00483794: mov dword ptr [0xa46c88], 1 */ W32((u32)(0xa46c88u), 0x1u);
    /* 0048379e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004837a1: je 0x4837c5 */ if (fZ) goto L_004837c5;
L_004837a3:; BB(0x004837a3);
    /* 004837a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004837a5:; BB(0x004837a5);
    /* 004837a5: mov dword ptr [0xa46c8c], eax */ W32((u32)(0xa46c8cu), r_eax);
    /* 004837aa: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004837ae: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004837b1: je 0x4837be */ if (fZ) goto L_004837be;
L_004837b3:; BB(0x004837b3);
    /* 004837b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004837b5:; BB(0x004837b5);
    /* 004837b5: mov dword ptr [0xa46c90], eax */ W32((u32)(0xa46c90u), r_eax);
    /* 004837ba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004837bd: ret  */ FN_RET(0x0048377c); r_esp += 4; return;
L_004837be:; BB(0x004837be);
    /* 004837be: mov eax, 1 */ r_eax = 0x1u;
    /* 004837c3: jmp 0x4837b5 */ goto L_004837b5;
L_004837c5:; BB(0x004837c5);
    /* 004837c5: mov eax, 1 */ r_eax = 0x1u;
    /* 004837ca: jmp 0x4837a5 */ goto L_004837a5;
}

void f_004837cc(void) /* sub_4837CC */
{
    FN_ENTER(0x004837cc);
    /* 004837cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004837cd: push 0x9007e0 */ { u32 v = 0x9007e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004837d2: call 0x82d40c */ r_esp -= 4; W32(r_esp, 0x4837d7u); f_0082d40c();
    /* 004837d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004837d8: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004837db: je 0x48383e */ if (fZ) goto L_0048383e;
L_004837dd:; BB(0x004837dd);
    /* 004837dd: call 0x483760 */ r_esp -= 4; W32(r_esp, 0x4837e2u); f_00483760();
L_004837e2:; BB(0x004837e2);
    /* 004837e2: push 0x9007ec */ { u32 v = 0x9007ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004837e7: call 0x82d40c */ r_esp -= 4; W32(r_esp, 0x4837ecu); f_0082d40c();
    /* 004837ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004837ed: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004837f0: je 0x4837fe */ if (fZ) goto L_004837fe;
L_004837f2:; BB(0x004837f2);
    /* 004837f2: mov dword ptr [0xa46c94], 1 */ W32((u32)(0xa46c94u), 0x1u);
    /* 004837fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004837fd: ret  */ FN_RET(0x004837cc); r_esp += 4; return;
L_004837fe:; BB(0x004837fe);
    /* 004837fe: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00483801: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483802: push 0x9007ec */ { u32 v = 0x9007ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00483807: call 0x82d3c0 */ r_esp -= 4; W32(r_esp, 0x48380cu); f_0082d3c0();
    /* 0048380c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048380f: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00483812: mov eax, 1 */ r_eax = 0x1u;
    /* 00483817: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0048381a: mov edx, 0 */ r_edx = 0x0u;
    /* 0048381f: jbe 0x483823 */ if ((fC||fZ)) goto L_00483823;
L_00483821:; BB(0x00483821);
    /* 00483821: mov ecx, eax */ r_ecx = r_eax;
L_00483823:; BB(0x00483823);
    /* 00483823: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00483825: ja 0x483829 */ if ((!fC&&!fZ)) goto L_00483829;
L_00483827:; BB(0x00483827);
    /* 00483827: mov ecx, edx */ r_ecx = r_edx;
L_00483829:; BB(0x00483829);
    /* 00483829: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048382c: jne 0x483835 */ if (!fZ) goto L_00483835;
L_0048382e:; BB(0x0048382e);
    /* 0048382e: mov eax, 1 */ r_eax = 0x1u;
    /* 00483833: jmp 0x483837 */ goto L_00483837;
L_00483835:; BB(0x00483835);
    /* 00483835: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00483837:; BB(0x00483837);
    /* 00483837: mov dword ptr [0xa46c94], eax */ W32((u32)(0xa46c94u), r_eax);
    /* 0048383c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048383d: ret  */ FN_RET(0x004837cc); r_esp += 4; return;
L_0048383e:; BB(0x0048383e);
    /* 0048383e: call 0x48377c */ r_esp -= 4; W32(r_esp, 0x483843u); f_0048377c();
    /* 00483843: jmp 0x4837e2 */ goto L_004837e2;
}

void f_00483848(void) /* sub_483848 */
{
    FN_ENTER(0x00483848);
    /* 00483848: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00483849: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048384b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048384d: call 0x48386c */ r_esp -= 4; W32(r_esp, 0x483852u); f_0048386c();
    /* 00483852: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00483856: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00483858: jne 0x48385e */ if (!fZ) goto L_0048385e;
L_0048385a:; BB(0x0048385a);
    /* 0048385a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048385b: ret 4 */ FN_RET(0x00483848); r_esp += 8; return;
L_0048385e:; BB(0x0048385e);
    /* 0048385e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048385f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x483864u); f_005c2f74();
    /* 00483864: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00483865: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00483866: ret 4 */ FN_RET(0x00483848); r_esp += 8; return;
}

void f_0048386c(void) /* sub_48386C */
{
    FN_ENTER(0x0048386c);
    /* 0048386c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048386d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048386f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00483871: push 0x8cf878 */ { u32 v = 0x8cf878u; r_esp -= 4; W32(r_esp, v); }
    /* 00483876: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048387c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048387d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00483884: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00483887: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048388a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048388d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00483890: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00483893: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00483896: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00483899: mov dword ptr [ecx], 0xaf8588 */ W32((u32)(r_ecx), 0xaf8588u);
    /* 0048389f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004838a6: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4838abu); f_008171e8();
    /* 004838ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004838ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004838b5: mov esp, ebp */ r_esp = r_ebp;
    /* 004838b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004838b8: ret  */ FN_RET(0x0048386c); r_esp += 4; return;
}

void f_004838bc(void) /* sub_4838BC */
{
    FN_ENTER(0x004838bc);
    /* 004838bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004838bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004838bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004838c1: call 0x4838e0 */ r_esp -= 4; W32(r_esp, 0x4838c6u); f_004838e0();
    /* 004838c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004838ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004838cc: jne 0x4838d2 */ if (!fZ) goto L_004838d2;
L_004838ce:; BB(0x004838ce);
    /* 004838ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004838cf: ret 4 */ FN_RET(0x004838bc); r_esp += 8; return;
L_004838d2:; BB(0x004838d2);
    /* 004838d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004838d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4838d8u); f_005c2f74();
    /* 004838d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004838d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004838da: ret 4 */ FN_RET(0x004838bc); r_esp += 8; return;
}

void f_004838e0(void) /* sub_4838E0 */
{
    FN_ENTER(0x004838e0);
    /* 004838e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004838e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004838e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004838e5: push 0x8cf894 */ { u32 v = 0x8cf894u; r_esp -= 4; W32(r_esp, v); }
    /* 004838ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004838f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004838f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004838f8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004838fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004838fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00483901: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00483904: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00483907: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0048390a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048390d: mov dword ptr [ecx], 0xaf8598 */ W32((u32)(r_ecx), 0xaf8598u);
    /* 00483913: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0048391a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x48391fu); f_008171e8();
    /* 0048391f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00483922: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00483929: mov esp, ebp */ r_esp = r_ebp;
    /* 0048392b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048392c: ret  */ FN_RET(0x004838e0); r_esp += 4; return;
}

void f_00483930(void) /* sub_483930 */
{
    FN_ENTER(0x00483930);
    /* 00483930: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00483931: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00483932: mov edi, ecx */ r_edi = r_ecx;
    /* 00483934: call 0x4839d4 */ r_esp -= 4; W32(r_esp, 0x483939u); f_004839d4();
    /* 00483939: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048393b: jne 0x48394d */ if (!fZ) goto L_0048394d;
L_0048393d:; BB(0x0048393d);
    /* 0048393d: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00483941: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00483946: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0048394a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048394b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048394c: ret  */ FN_RET(0x00483930); r_esp += 4; return;
L_0048394d:; BB(0x0048394d);
    /* 0048394d: fld dword ptr [0x900804] */ FPUSH(R_F32((u32)(0x900804u)));
    /* 00483953: fadd dword ptr [edi + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x34u));
    /* 00483956: mov ebx, dword ptr [edi + 0x48] */ r_ebx = R32((u32)(r_edi+0x48u));
    /* 00483959: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 0048395c: fstp dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0)); FPOP();
    /* 0048395f: add dword ptr [edi + 0x3c], ebx */ { u32 ad = (u32)(r_edi+0x3cu);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00483962: lea ebx, [edi + 0x30] */ r_ebx = (u32)(r_edi+0x30u);
    /* 00483965: lea ecx, [edi + 0x24] */ r_ecx = (u32)(r_edi+0x24u);
    /* 00483968: add dword ptr [edi + 0x40], eax */ { u32 ad = (u32)(r_edi+0x40u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0048396b: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 0048396e: mov edx, ebx */ r_edx = r_ebx;
    /* 00483970: add dword ptr [edi + 0x44], eax */ { u32 ad = (u32)(r_edi+0x44u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00483973: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x483978u); f_0082ebac();
    /* 00483978: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 0048397b: fcomp dword ptr [0x900844] */ fx_compare(ST(0), R_F32((u32)(0x900844u))); FPOP();
    /* 00483981: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00483983: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00483984: jae 0x4839d1 */ if (!fC) goto L_004839d1;
L_00483986:; BB(0x00483986);
    /* 00483986: fld dword ptr [0x900800] */ FPUSH(R_F32((u32)(0x900800u)));
    /* 0048398c: fld dword ptr [edi + 0x30] */ FPUSH(R_F32((u32)(r_edi+0x30u)));
    /* 0048398f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00483991: fld dword ptr [edi + 0x34] */ FPUSH(R_F32((u32)(r_edi+0x34u)));
    /* 00483994: fmul dword ptr [0x900840] */ ST(0) = ST(0) * R_F32((u32)(0x900840u));
    /* 0048399a: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 0048399d: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0048399f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004839a1: fstp dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0)); FPOP();
    /* 004839a4: fstp dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0)); FPOP();
    /* 004839a7: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 004839aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004839ac: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 004839af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004839b1: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4839b6u); f_0083173c();
    /* 004839b6: fcomp dword ptr [0x9007fc] */ fx_compare(ST(0), R_F32((u32)(0x9007fcu))); FPOP();
    /* 004839bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004839be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004839bf: jae 0x4839d1 */ if (!fC) goto L_004839d1;
L_004839c1:; BB(0x004839c1);
    /* 004839c1: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004839c5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004839ca: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 004839ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004839cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004839d0: ret  */ FN_RET(0x00483930); r_esp += 4; return;
L_004839d1:; BB(0x004839d1);
    /* 004839d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004839d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004839d3: ret  */ FN_RET(0x00483930); r_esp += 4; return;
}

void f_004839d4(void) /* sub_4839D4 */
{
    FN_ENTER(0x004839d4);
    /* 004839d4: mov eax, dword ptr [0xa46f9c] */ r_eax = R32((u32)(0xa46f9cu));
    /* 004839d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004839db: je 0x4839e3 */ if (fZ) goto L_004839e3;
L_004839dd:; BB(0x004839dd);
    /* 004839dd: mov eax, 1 */ r_eax = 0x1u;
    /* 004839e2: ret  */ FN_RET(0x004839d4); r_esp += 4; return;
L_004839e3:; BB(0x004839e3);
    /* 004839e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004839e5: ret  */ FN_RET(0x004839d4); r_esp += 4; return;
}

void f_004839e8(void) /* sub_4839E8 */
{
    FN_ENTER(0x004839e8);
    /* 004839e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004839e9: mov edi, ecx */ r_edi = r_ecx;
    /* 004839eb: call 0x4839d4 */ r_esp -= 4; W32(r_esp, 0x4839f0u); f_004839d4();
    /* 004839f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004839f2: jne 0x4839f6 */ if (!fZ) goto L_004839f6;
L_004839f4:; BB(0x004839f4);
    /* 004839f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004839f5: ret  */ FN_RET(0x004839e8); r_esp += 4; return;
L_004839f6:; BB(0x004839f6);
    /* 004839f6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4839fbu); f_0082d7b0();
    /* 004839fb: lea ecx, [edi + 0x24] */ r_ecx = (u32)(r_edi+0x24u);
    /* 004839fe: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x483a03u); f_0082d838();
    /* 00483a03: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00483a06: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00483a08: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x483a0du); f_0082d8bc();
    /* 00483a0d: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00483a10: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00483a12: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x483a17u); f_0082e9e4();
    /* 00483a17: mov edx, dword ptr [edi + 0x44] */ r_edx = R32((u32)(r_edi+0x44u));
    /* 00483a1a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00483a1c: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x483a21u); f_00830c04();
    /* 00483a21: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00483a24: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x483a29u); f_00829cc8();
    /* 00483a29: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00483a2c: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x483a31u); f_00831758();
    /* 00483a31: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x483a36u); f_0082da80();
    /* 00483a36: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00483a37: ret  */ FN_RET(0x004839e8); r_esp += 4; return;
}

void f_00483a38(void) /* sub_483A38 */
{
    FN_ENTER(0x00483a38);
    /* 00483a38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00483a39: mov ebp, esp */ r_ebp = r_esp;
    /* 00483a3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00483a3d: push 0x8cf8ce */ { u32 v = 0x8cf8ceu; r_esp -= 4; W32(r_esp, v); }
    /* 00483a42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00483a48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483a49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00483a50: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00483a53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00483a56: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 00483a59: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 00483a5c: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 00483a5f: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00483a62: call 0x4839d4 */ r_esp -= 4; W32(r_esp, 0x483a67u); f_004839d4();
    /* 00483a67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00483a69: jne 0x483a7c */ if (!fZ) goto L_00483a7c;
L_00483a6b:; BB(0x00483a6b);
    /* 00483a6b: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00483a6e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00483a71: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00483a78: mov esp, ebp */ r_esp = r_ebp;
    /* 00483a7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00483a7b: ret  */ FN_RET(0x00483a38); r_esp += 4; return;
L_00483a7c:; BB(0x00483a7c);
    /* 00483a7c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00483a7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483a80: call 0x483e1c */ r_esp -= 4; W32(r_esp, 0x483a85u); f_00483e1c();
    /* 00483a85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00483a86: mov eax, dword ptr [0xa46f9c] */ r_eax = R32((u32)(0xa46f9cu));
    /* 00483a8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00483a8d: je 0x483e03 */ if (fZ) goto L_00483e03;
L_00483a93:; BB(0x00483a93);
    /* 00483a93: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483a95: jne 0x483ab2 */ if (!fZ) goto L_00483ab2;
L_00483a97:; BB(0x00483a97);
    /* 00483a97: fld dword ptr [0x900838] */ FPUSH(R_F32((u32)(0x900838u)));
    /* 00483a9d: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00483aa0: mov eax, 0x900810 */ r_eax = 0x900810u;
    /* 00483aa5: mov edx, 2 */ r_edx = 0x2u;
    /* 00483aaa: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00483aad: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00483ab0: jmp 0x483ad4 */ goto L_00483ad4;
L_00483ab2:; BB(0x00483ab2);
    /* 00483ab2: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00483ab5: jne 0x483e03 */ if (!fZ) goto L_00483e03;
L_00483abb:; BB(0x00483abb);
    /* 00483abb: fld dword ptr [0x90083c] */ FPUSH(R_F32((u32)(0x90083cu)));
    /* 00483ac1: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00483ac4: mov eax, 0x900818 */ r_eax = 0x900818u;
    /* 00483ac9: mov edx, 3 */ r_edx = 0x3u;
    /* 00483ace: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00483ad1: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_00483ad4:; BB(0x00483ad4);
    /* 00483ad4: mov ebx, edx */ r_ebx = r_edx;
    /* 00483ad6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00483ad8: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00483adb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00483add: mov eax, 0x12 */ r_eax = 0x12u;
    /* 00483ae2: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x00483ae2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00483ae2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00483ae4: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00483ae7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00483ae9: jle 0x483e03 */ if ((fZ||fS!=fO)) goto L_00483e03;
L_00483aef:; BB(0x00483aef);
    /* 00483aef: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00483af2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00483af4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00483af7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00483af9: jle 0x483def */ if ((fZ||fS!=fO)) goto L_00483def;
L_00483aff:; BB(0x00483aff);
    /* 00483aff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00483b02: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00483b04: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00483b07: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00483b0a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00483b0c: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00483b0f: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00483b12: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00483b15: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x483b1au); f_008587a5();
    /* 00483b1a: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00483b1d: fild dword ptr [ebp - 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff94u)));
    /* 00483b20: fdiv dword ptr [0x900830] */ ST(0) = ST(0) / R_F32((u32)(0x900830u));
    /* 00483b26: fmul dword ptr [0x900834] */ ST(0) = ST(0) * R_F32((u32)(0x900834u));
    /* 00483b2c: fnstcw word ptr [ebp - 0x64] */ W16((u32)(r_ebp+0xffffff9cu), fcw);
    /* 00483b2f: movzx eax, word ptr [ebp - 0x64] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff9cu));
    /* 00483b33: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00483b38: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00483b3b: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00483b3e: fistp dword ptr [ebp - 0x54] */ W32((u32)(r_ebp+0xffffffacu), (u32)fx_int32(ST(0))); FPOP();
    /* 00483b41: fldcw word ptr [ebp - 0x64] */ fcw = R16((u32)(r_ebp+0xffffff9cu));
    /* 00483b44: mov ebx, dword ptr [ebp - 0x54] */ r_ebx = R32((u32)(r_ebp+0xffffffacu));
    /* 00483b47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00483b49: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x483b4eu); f_0082dcbc();
    /* 00483b4e: fmul dword ptr [ebp - 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd4u));
    /* 00483b51: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00483b54: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00483b56: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00483b59: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x483b5eu); f_008587a5();
    /* 00483b5e: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00483b61: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00483b64: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00483b67: fdiv dword ptr [0x900830] */ ST(0) = ST(0) / R_F32((u32)(0x900830u));
    /* 00483b6d: fmul dword ptr [0x90080c] */ ST(0) = ST(0) * R_F32((u32)(0x90080cu));
    /* 00483b73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00483b75: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00483b77: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00483b7a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x483b7fu); f_0082ddd8();
    /* 00483b7f: fmul dword ptr [ebp - 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd4u));
    /* 00483b82: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00483b85: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00483b87: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00483b8a: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 00483b91: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00483b93: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x483b98u); f_005caba4();
    /* 00483b98: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00483b9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00483b9e: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00483ba1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483ba3: je 0x483dd4 */ if (fZ) goto L_00483dd4;
L_00483ba9:; BB(0x00483ba9);
    /* 00483ba9: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 00483bb0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00483bb7: mov ecx, eax */ r_ecx = r_eax;
    /* 00483bb9: mov esi, dword ptr [0xaca378] */ r_esi = R32((u32)(0xaca378u));
    /* 00483bbf: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00483bc2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00483bc5: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 00483bcb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00483bcc: mov dword ptr [ebp - 0x80], esi */ W32((u32)(r_ebp+0xffffff80u), r_esi);
    /* 00483bcf: mov ebx, dword ptr [eax + edx*4] */ r_ebx = R32((u32)(r_eax+r_edx*4));
    /* 00483bd2: mov dword ptr [ebp - 0x78], ebx */ W32((u32)(r_ebp+0xffffff88u), r_ebx);
    /* 00483bd5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x483bdau); f_008193cc();
    /* 00483bda: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00483be1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00483be4: mov dword ptr [edx], 0xaf8588 */ W32((u32)(r_edx), 0xaf8588u);
    /* 00483bea: mov eax, dword ptr [0x9a689c] */ r_eax = R32((u32)(0x9a689cu));
    /* 00483bef: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00483bf2: call 0x490338 */ r_esp -= 4; W32(r_esp, 0x483bf7u); f_00490338();
    /* 00483bf7: push dword ptr [ebp - 0x78] */ { u32 v = R32((u32)(r_ebp+0xffffff88u)); r_esp -= 4; W32(r_esp, v); }
    /* 00483bfa: mov ecx, eax */ r_ecx = r_eax;
    /* 00483bfc: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x483c01u); f_005b8610();
    /* 00483c01: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00483c04: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00483c07: call 0x490340 */ r_esp -= 4; W32(r_esp, 0x483c0cu); f_00490340();
    /* 00483c0c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00483c0f: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00483c12: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00483c15: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00483c18: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00483c1a: fstp dword ptr [edx + 0x24] */ W_F32((u32)(r_edx+0x24u), ST(0)); FPOP();
    /* 00483c1d: fstp dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0)); FPOP();
    /* 00483c20: fstp dword ptr [edx + 0x2c] */ W_F32((u32)(r_edx+0x2cu), ST(0)); FPOP();
    /* 00483c23: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00483c26: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x483c2bu); f_008587a5();
    /* 00483c2b: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00483c2e: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00483c31: fdiv dword ptr [0x900830] */ ST(0) = ST(0) / R_F32((u32)(0x900830u));
    /* 00483c37: fadd dword ptr [0x90082c] */ ST(0) = ST(0) + R_F32((u32)(0x90082cu));
    /* 00483c3d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00483c40: fmul dword ptr [0x900808] */ ST(0) = ST(0) * R_F32((u32)(0x900808u));
    /* 00483c46: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00483c49: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x483c4eu); f_008587a5();
    /* 00483c4e: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00483c51: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00483c54: fdiv dword ptr [0x900830] */ ST(0) = ST(0) / R_F32((u32)(0x900830u));
    /* 00483c5a: fadd dword ptr [0x90082c] */ ST(0) = ST(0) + R_F32((u32)(0x90082cu));
    /* 00483c60: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00483c63: fmul dword ptr [0x900808] */ ST(0) = ST(0) * R_F32((u32)(0x900808u));
    /* 00483c69: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 00483c6c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x483c71u); f_008587a5();
    /* 00483c71: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00483c74: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00483c77: fdiv dword ptr [0x900830] */ ST(0) = ST(0) / R_F32((u32)(0x900830u));
    /* 00483c7d: fadd dword ptr [0x90082c] */ ST(0) = ST(0) + R_F32((u32)(0x90082cu));
    /* 00483c83: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00483c86: fmul dword ptr [0x900808] */ ST(0) = ST(0) * R_F32((u32)(0x900808u));
    /* 00483c8c: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00483c8f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x483c94u); f_008587a5();
    /* 00483c94: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00483c97: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00483c9a: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00483c9d: fdiv dword ptr [0x900830] */ ST(0) = ST(0) / R_F32((u32)(0x900830u));
    /* 00483ca3: fmul dword ptr [0x900834] */ ST(0) = ST(0) * R_F32((u32)(0x900834u));
    /* 00483ca9: fnstcw word ptr [ebp - 0x64] */ W16((u32)(r_ebp+0xffffff9cu), fcw);
    /* 00483cac: movzx eax, word ptr [ebp - 0x64] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff9cu));
    /* 00483cb0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00483cb5: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00483cb8: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00483cbb: fistp dword ptr [edx + 0x3c] */ W32((u32)(r_edx+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00483cbe: fldcw word ptr [ebp - 0x64] */ fcw = R16((u32)(r_ebp+0xffffff9cu));
    /* 00483cc1: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x483cc6u); f_008587a5();
    /* 00483cc6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00483cc9: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00483ccc: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00483ccf: fdiv dword ptr [0x900830] */ ST(0) = ST(0) / R_F32((u32)(0x900830u));
    /* 00483cd5: fmul dword ptr [0x900834] */ ST(0) = ST(0) * R_F32((u32)(0x900834u));
    /* 00483cdb: fnstcw word ptr [ebp - 0x64] */ W16((u32)(r_ebp+0xffffff9cu), fcw);
    /* 00483cde: movzx eax, word ptr [ebp - 0x64] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff9cu));
    /* 00483ce2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00483ce7: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00483cea: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00483ced: fistp dword ptr [edx + 0x40] */ W32((u32)(r_edx+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 00483cf0: fldcw word ptr [ebp - 0x64] */ fcw = R16((u32)(r_ebp+0xffffff9cu));
    /* 00483cf3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x483cf8u); f_008587a5();
    /* 00483cf8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00483cfb: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00483cfe: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00483d01: fdiv dword ptr [0x900830] */ ST(0) = ST(0) / R_F32((u32)(0x900830u));
    /* 00483d07: fmul dword ptr [0x900834] */ ST(0) = ST(0) * R_F32((u32)(0x900834u));
    /* 00483d0d: fnstcw word ptr [ebp - 0x64] */ W16((u32)(r_ebp+0xffffff9cu), fcw);
    /* 00483d10: movzx eax, word ptr [ebp - 0x64] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff9cu));
    /* 00483d14: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00483d19: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00483d1c: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00483d1f: fistp dword ptr [edx + 0x44] */ W32((u32)(r_edx+0x44u), (u32)fx_int32(ST(0))); FPOP();
    /* 00483d22: fldcw word ptr [ebp - 0x64] */ fcw = R16((u32)(r_ebp+0xffffff9cu));
    /* 00483d25: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x483d2au); f_008587a5();
    /* 00483d2a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00483d2d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00483d30: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00483d33: fdiv dword ptr [0x900830] */ ST(0) = ST(0) / R_F32((u32)(0x900830u));
    /* 00483d39: fadd dword ptr [0x90082c] */ ST(0) = ST(0) + R_F32((u32)(0x90082cu));
    /* 00483d3f: fmul dword ptr [0x900828] */ ST(0) = ST(0) * R_F32((u32)(0x900828u));
    /* 00483d45: fnstcw word ptr [ebp - 0x64] */ W16((u32)(r_ebp+0xffffff9cu), fcw);
    /* 00483d48: movzx eax, word ptr [ebp - 0x64] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff9cu));
    /* 00483d4c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00483d51: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00483d54: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00483d57: fistp dword ptr [edx + 0x48] */ W32((u32)(r_edx+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 00483d5a: fldcw word ptr [ebp - 0x64] */ fcw = R16((u32)(r_ebp+0xffffff9cu));
    /* 00483d5d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x483d62u); f_008587a5();
    /* 00483d62: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00483d65: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00483d68: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00483d6b: fdiv dword ptr [0x900830] */ ST(0) = ST(0) / R_F32((u32)(0x900830u));
    /* 00483d71: fadd dword ptr [0x90082c] */ ST(0) = ST(0) + R_F32((u32)(0x90082cu));
    /* 00483d77: fmul dword ptr [0x900828] */ ST(0) = ST(0) * R_F32((u32)(0x900828u));
    /* 00483d7d: fnstcw word ptr [ebp - 0x64] */ W16((u32)(r_ebp+0xffffff9cu), fcw);
    /* 00483d80: movzx eax, word ptr [ebp - 0x64] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff9cu));
    /* 00483d84: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00483d89: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00483d8c: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00483d8f: fistp dword ptr [edx + 0x4c] */ W32((u32)(r_edx+0x4cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00483d92: fldcw word ptr [ebp - 0x64] */ fcw = R16((u32)(r_ebp+0xffffff9cu));
    /* 00483d95: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x483d9au); f_008587a5();
    /* 00483d9a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00483d9d: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 00483da4: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00483da7: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00483daa: fdiv dword ptr [0x900830] */ ST(0) = ST(0) / R_F32((u32)(0x900830u));
    /* 00483db0: fadd dword ptr [0x90082c] */ ST(0) = ST(0) + R_F32((u32)(0x90082cu));
    /* 00483db6: fmul dword ptr [0x900828] */ ST(0) = ST(0) * R_F32((u32)(0x900828u));
    /* 00483dbc: fnstcw word ptr [ebp - 0x64] */ W16((u32)(r_ebp+0xffffff9cu), fcw);
    /* 00483dbf: movzx eax, word ptr [ebp - 0x64] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff9cu));
    /* 00483dc3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00483dc8: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00483dcb: fldcw word ptr [ebp - 0x5c] */ fcw = R16((u32)(r_ebp+0xffffffa4u));
    /* 00483dce: fistp dword ptr [edx + 0x50] */ W32((u32)(r_edx+0x50u), (u32)fx_int32(ST(0))); FPOP();
    /* 00483dd1: fldcw word ptr [ebp - 0x64] */ fcw = R16((u32)(r_ebp+0xffffff9cu));
L_00483dd4:; BB(0x00483dd4);
    /* 00483dd4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00483ddb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00483dde: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00483de1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00483de4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00483de7: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483de9: jl 0x483aff */ if ((fS!=fO)) goto L_00483aff;
L_00483def:; BB(0x00483def);
    /* 00483def: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00483df2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00483df5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00483df8: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00483dfb: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00483dfd: jl 0x483aef */ if ((fS!=fO)) goto L_00483aef;
L_00483e03:; BB(0x00483e03);
    /* 00483e03: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00483e06: mov esi, dword ptr [ebp - 0x40] */ r_esi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00483e09: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00483e0c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00483e0f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00483e16: mov esp, ebp */ r_esp = r_ebp;
    /* 00483e18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00483e19: ret  */ FN_RET(0x00483a38); r_esp += 4; return;
}

void f_00483e1c(void) /* sub_483E1C */
{
    FN_ENTER(0x00483e1c);
    /* 00483e1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00483e1d: mov ebp, esp */ r_ebp = r_esp;
    /* 00483e1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00483e21: push 0x8cf8f4 */ { u32 v = 0x8cf8f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00483e26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00483e2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483e2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00483e34: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00483e37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00483e3a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00483e3d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00483e40: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00483e43: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00483e45: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00483e4c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x483e51u); f_005caba4();
    /* 00483e51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00483e52: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00483e55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483e57: je 0x483e90 */ if (fZ) goto L_00483e90;
L_00483e59:; BB(0x00483e59);
    /* 00483e59: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00483e60: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00483e67: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00483e6a: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 00483e70: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00483e73: call 0x483e94 */ r_esp -= 4; W32(r_esp, 0x483e78u); f_00483e94();
    /* 00483e78: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00483e7b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00483e82:; BB(0x00483e82);
    /* 00483e82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00483e85: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00483e8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00483e8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00483e8f: ret  */ FN_RET(0x00483e1c); r_esp += 4; return;
L_00483e90:; BB(0x00483e90);
    /* 00483e90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00483e92: jmp 0x483e82 */ goto L_00483e82;
}

void f_00483e94(void) /* sub_483E94 */
{
    FN_ENTER(0x00483e94);
    /* 00483e94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00483e95: mov ebp, esp */ r_ebp = r_esp;
    /* 00483e97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00483e99: push 0x8cf910 */ { u32 v = 0x8cf910u; r_esp -= 4; W32(r_esp, v); }
    /* 00483e9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00483ea4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483ea5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00483eac: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00483eaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00483eb2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00483eb5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00483eb8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00483ebb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00483ebe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00483ec1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00483ec4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00483ec7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x483eccu); f_008193cc();
    /* 00483ecc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00483ed3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00483ed6: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00483ed9: mov dword ptr [edx], 0xaf8598 */ W32((u32)(r_edx), 0xaf8598u);
    /* 00483edf: mov eax, dword ptr [0x9a68a0] */ r_eax = R32((u32)(0x9a68a0u));
    /* 00483ee4: push 0x203 */ { u32 v = 0x203u; r_esp -= 4; W32(r_esp, v); }
    /* 00483ee9: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00483eec: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00483eee: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00483ef1: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 00483ef4: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00483ef7: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 00483efa: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00483efd: fadd dword ptr [0x900824] */ ST(0) = ST(0) + R_F32((u32)(0x900824u));
    /* 00483f03: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00483f06: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00483f09: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00483f0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483f0d: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x483f12u); f_00509590();
    /* 00483f12: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00483f15: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 00483f1a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00483f1d: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00483f20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483f21: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x483f26u); f_00509590();
    /* 00483f26: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00483f29: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00483f2c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00483f2f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00483f32: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00483f35: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00483f38: mov eax, edx */ r_eax = r_edx;
    /* 00483f3a: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 00483f41: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00483f44: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00483f4b: mov esp, ebp */ r_esp = r_ebp;
    /* 00483f4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00483f4e: ret 8 */ FN_RET(0x00483e94); r_esp += 12; return;
}

void f_00483f54(void) /* sub_483F54 */
{
    FN_ENTER(0x00483f54);
    /* 00483f54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00483f55: mov edi, ecx */ r_edi = r_ecx;
    /* 00483f57: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00483f5a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00483f5d: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00483f60: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00483f63: jl 0x483f9e */ if ((fS!=fO)) goto L_00483f9e;
L_00483f65:; BB(0x00483f65);
    /* 00483f65: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00483f68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483f6a: je 0x483f7a */ if (fZ) goto L_00483f7a;
L_00483f6c:; BB(0x00483f6c);
    /* 00483f6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483f6d: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x483f72u); f_005cdcc0();
    /* 00483f72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00483f73: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
L_00483f7a:; BB(0x00483f7a);
    /* 00483f7a: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 00483f7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483f7f: je 0x483f8f */ if (fZ) goto L_00483f8f;
L_00483f81:; BB(0x00483f81);
    /* 00483f81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483f82: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x483f87u); f_005cdcc0();
    /* 00483f87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00483f88: mov dword ptr [edi + 0x24], 0 */ W32((u32)(r_edi+0x24u), 0x0u);
L_00483f8f:; BB(0x00483f8f);
    /* 00483f8f: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00483f93: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00483f98: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00483f9c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00483f9d: ret  */ FN_RET(0x00483f54); r_esp += 4; return;
L_00483f9e:; BB(0x00483f9e);
    /* 00483f9e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00483f9f: ret  */ FN_RET(0x00483f54); r_esp += 4; return;
}

void f_00483fa0(void) /* sub_483FA0 */
{
    FN_ENTER(0x00483fa0);
    /* 00483fa0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00483fa1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00483fa3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00483fa5: call 0x483fc4 */ r_esp -= 4; W32(r_esp, 0x483faau); f_00483fc4();
    /* 00483faa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00483fae: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00483fb0: jne 0x483fb6 */ if (!fZ) goto L_00483fb6;
L_00483fb2:; BB(0x00483fb2);
    /* 00483fb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00483fb3: ret 4 */ FN_RET(0x00483fa0); r_esp += 8; return;
L_00483fb6:; BB(0x00483fb6);
    /* 00483fb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00483fb7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x483fbcu); f_005c2f74();
    /* 00483fbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00483fbd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00483fbe: ret 4 */ FN_RET(0x00483fa0); r_esp += 8; return;
}

void f_00483fc4(void) /* sub_483FC4 */
{
    FN_ENTER(0x00483fc4);
    /* 00483fc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00483fc5: mov ebp, esp */ r_ebp = r_esp;
    /* 00483fc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00483fc9: push 0x8cf92c */ { u32 v = 0x8cf92cu; r_esp -= 4; W32(r_esp, v); }
    /* 00483fce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00483fd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483fd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00483fdc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00483fdf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00483fe2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00483fe5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00483fe8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00483feb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00483fee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00483ff5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00483ff8: mov dword ptr [eax], 0xaf8600 */ W32((u32)(r_eax), 0xaf8600u);
    /* 00483ffe: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x484003u); f_004d3250();
    /* 00484003: call 0x48ea5c */ r_esp -= 4; W32(r_esp, 0x484008u); f_0048ea5c();
    /* 00484008: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048400b: add ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048400e: call 0x48ead0 */ r_esp -= 4; W32(r_esp, 0x484013u); f_0048ead0();
    /* 00484013: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484016: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00484019: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048401b: je 0x48402c */ if (fZ) goto L_0048402c;
L_0048401d:; BB(0x0048401d);
    /* 0048401d: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x484022u); f_005883f0();
    /* 00484022: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00484025: mov dword ptr [edx + 0x60], 0 */ W32((u32)(r_edx+0x60u), 0x0u);
L_0048402c:; BB(0x0048402c);
    /* 0048402c: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0048402f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00484031: je 0x484044 */ if (fZ) goto L_00484044;
L_00484033:; BB(0x00484033);
    /* 00484033: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00484034: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x484039u); f_005cdcc0();
    /* 00484039: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048403a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048403d: mov dword ptr [edx + 0x64], 0 */ W32((u32)(r_edx+0x64u), 0x0u);
L_00484044:; BB(0x00484044);
    /* 00484044: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0048404b: mov ecx, edx */ r_ecx = r_edx;
    /* 0048404d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x484052u); f_008171e8();
    /* 00484052: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00484055: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048405c: mov esp, ebp */ r_esp = r_ebp;
    /* 0048405e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048405f: ret  */ FN_RET(0x00483fc4); r_esp += 4; return;
}

