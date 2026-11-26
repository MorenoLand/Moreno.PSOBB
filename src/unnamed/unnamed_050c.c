#include "protos.h"

void f_0050c08c(void) /* sub_50C08C */
{
    FN_ENTER(0x0050c08c);
    /* 0050c08c: mov eax, dword ptr [0xa72cc4] */ r_eax = R32((u32)(0xa72cc4u));
    /* 0050c091: ret  */ FN_RET(0x0050c08c); r_esp += 4; return;
}

void f_0050c094(void) /* sub_50C094 */
{
    FN_ENTER(0x0050c094);
    /* 0050c094: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0050c098: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050c09b: jge 0x50c0aa */ if ((fS==fO)) goto L_0050c0aa;
L_0050c09d:; BB(0x0050c09d);
    /* 0050c09d: mov ecx, dword ptr [0xa72cc8] */ r_ecx = R32((u32)(0xa72cc8u));
    /* 0050c0a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c0a4: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x50c0a9u); f_005b8610();
    /* 0050c0a9: ret  */ FN_RET(0x0050c094); r_esp += 4; return;
L_0050c0aa:; BB(0x0050c0aa);
    /* 0050c0aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050c0ac: ret  */ FN_RET(0x0050c094); r_esp += 4; return;
}

void f_0050c0b0(void) /* sub_50C0B0 */
{
    FN_ENTER(0x0050c0b0);
    /* 0050c0b0: mov dword ptr [0xa72c0c], 0x3f800000 */ W32((u32)(0xa72c0cu), 0x3f800000u);
    /* 0050c0ba: mov dword ptr [0xa72c10], 0x41000000 */ W32((u32)(0xa72c10u), 0x41000000u);
    /* 0050c0c4: mov dword ptr [0xa72c14], 0x3fc00000 */ W32((u32)(0xa72c14u), 0x3fc00000u);
    /* 0050c0ce: ret  */ FN_RET(0x0050c0b0); r_esp += 4; return;
}

void f_0050c0d0(void) /* sub_50C0D0 */
{
    FN_ENTER(0x0050c0d0);
    /* 0050c0d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c0d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0050c0d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0050c0d5: call 0x50c0f4 */ r_esp -= 4; W32(r_esp, 0x50c0dau); f_0050c0f4();
    /* 0050c0da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0050c0de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050c0e0: jne 0x50c0e6 */ if (!fZ) goto L_0050c0e6;
L_0050c0e2:; BB(0x0050c0e2);
    /* 0050c0e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050c0e3: ret 4 */ FN_RET(0x0050c0d0); r_esp += 8; return;
L_0050c0e6:; BB(0x0050c0e6);
    /* 0050c0e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c0e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x50c0ecu); f_005c2f74();
    /* 0050c0ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050c0ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050c0ee: ret 4 */ FN_RET(0x0050c0d0); r_esp += 8; return;
}

void f_0050c0f4(void) /* sub_50C0F4 */
{
    FN_ENTER(0x0050c0f4);
    /* 0050c0f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c0f5: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c0f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050c0f9: push 0x8d3f5c */ { u32 v = 0x8d3f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050c0fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050c104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c105: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050c10c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c10f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050c112: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0050c115: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0050c118: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0050c11b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0050c11e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050c121: mov dword ptr [ecx], 0xaff3b8 */ W32((u32)(r_ecx), 0xaff3b8u);
    /* 0050c127: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050c12e: call 0x4f7078 */ r_esp -= 4; W32(r_esp, 0x50c133u); f_004f7078();
    /* 0050c133: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050c136: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050c13d: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c13f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c140: ret  */ FN_RET(0x0050c0f4); r_esp += 4; return;
}

void f_0050c144(void) /* sub_50C144 */
{
    FN_ENTER(0x0050c144);
    /* 0050c144: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050c145: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050c146: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c147: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0050c149: mov eax, dword ptr [0xa72c20] */ r_eax = R32((u32)(0xa72c20u));
    /* 0050c14e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c150: je 0x50c18c */ if (fZ) goto L_0050c18c;
L_0050c152:; BB(0x0050c152);
    /* 0050c152: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c155: jne 0x50c1ac */ if (!fZ) goto L_0050c1ac;
L_0050c157:; BB(0x0050c157);
    /* 0050c157: mov eax, dword ptr [0xa72c24] */ r_eax = R32((u32)(0xa72c24u));
    /* 0050c15c: mov ecx, dword ptr [ebp + 0x68] */ r_ecx = R32((u32)(r_ebp+0x68u));
    /* 0050c15f: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0050c162: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c164: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c166: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050c168: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c16a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c16c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c16e: add edx, dword ptr [0xa72cd0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c174: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c175: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
    /* 0050c17b: call 0x508d2c */ r_esp -= 4; W32(r_esp, 0x50c180u); f_00508d2c();
    /* 0050c180: mov dword ptr [0xa72c20], 0 */ W32((u32)(0xa72c20u), 0x0u);
    /* 0050c18a: jmp 0x50c1ac */ goto L_0050c1ac;
L_0050c18c:; BB(0x0050c18c);
    /* 0050c18c: mov eax, dword ptr [0xa72c24] */ r_eax = R32((u32)(0xa72c24u));
    /* 0050c191: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0050c194: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c196: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c198: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050c19a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c19c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c19e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c1a0: add edx, dword ptr [0xa72cd0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c1a6: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
L_0050c1ac:; BB(0x0050c1ac);
    /* 0050c1ac: mov eax, dword ptr [0xa72c24] */ r_eax = R32((u32)(0xa72c24u));
    /* 0050c1b1: mov dword ptr [ebp + 0x70], eax */ W32((u32)(r_ebp+0x70u), r_eax);
    /* 0050c1b4: push dword ptr [0xa72c3c] */ { u32 v = R32((u32)(0xa72c3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c1ba: call 0x501804 */ r_esp -= 4; W32(r_esp, 0x50c1bfu); f_00501804();
    /* 0050c1bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050c1c0: mov ecx, dword ptr [ebp + 0x80] */ r_ecx = R32((u32)(r_ebp+0x80u));
    /* 0050c1c6: mov dword ptr [ebp + 0x78], eax */ W32((u32)(r_ebp+0x78u), r_eax);
    /* 0050c1c9: mov esi, ecx */ r_esi = r_ecx;
    /* 0050c1cb: mov edi, 0xa72c28 */ r_edi = 0xa72c28u;
L_0050c1d0:; BB(0x0050c1d0);
    /* 0050c1d0: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0050c1d2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050c1d5: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0050c1d7: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050c1da: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050c1dc: jne 0x50c1d0 */ if (!fZ) goto L_0050c1d0;
L_0050c1de:; BB(0x0050c1de);
    /* 0050c1de: mov eax, dword ptr [0xa72c38] */ r_eax = R32((u32)(0xa72c38u));
    /* 0050c1e3: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0050c1e6: mov edx, dword ptr [0xa72c3c] */ r_edx = R32((u32)(0xa72c3cu));
    /* 0050c1ec: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0050c1ef: mov edi, dword ptr [0xa72c40] */ r_edi = R32((u32)(0xa72c40u));
    /* 0050c1f5: mov dword ptr [ecx + 0x18], edi */ W32((u32)(r_ecx+0x18u), r_edi);
    /* 0050c1f8: mov eax, dword ptr [0xa72c44] */ r_eax = R32((u32)(0xa72c44u));
    /* 0050c1fd: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0050c200: mov eax, dword ptr [0xa72c48] */ r_eax = R32((u32)(0xa72c48u));
    /* 0050c205: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0050c208: mov eax, dword ptr [0xa72c4c] */ r_eax = R32((u32)(0xa72c4cu));
    /* 0050c20d: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0050c210: mov eax, dword ptr [0xa72c50] */ r_eax = R32((u32)(0xa72c50u));
    /* 0050c215: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0050c218: mov eax, dword ptr [0xa72c54] */ r_eax = R32((u32)(0xa72c54u));
    /* 0050c21d: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0050c220: mov eax, dword ptr [0xa72c58] */ r_eax = R32((u32)(0xa72c58u));
    /* 0050c225: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0050c228: mov eax, dword ptr [0xa72c5c] */ r_eax = R32((u32)(0xa72c5cu));
    /* 0050c22d: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0050c230: mov eax, dword ptr [0xa72c60] */ r_eax = R32((u32)(0xa72c60u));
    /* 0050c235: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 0050c238: mov eax, dword ptr [0xa72c64] */ r_eax = R32((u32)(0xa72c64u));
    /* 0050c23d: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 0050c240: mov eax, dword ptr [0xa72c68] */ r_eax = R32((u32)(0xa72c68u));
    /* 0050c245: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0050c248: mov eax, dword ptr [0xa72c6c] */ r_eax = R32((u32)(0xa72c6cu));
    /* 0050c24d: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 0050c250: mov eax, dword ptr [0xa72c70] */ r_eax = R32((u32)(0xa72c70u));
    /* 0050c255: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 0050c258: mov eax, dword ptr [0xa72c74] */ r_eax = R32((u32)(0xa72c74u));
    /* 0050c25d: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 0050c260: mov eax, dword ptr [0xa72c78] */ r_eax = R32((u32)(0xa72c78u));
    /* 0050c265: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 0050c268: mov eax, dword ptr [0xa72c7c] */ r_eax = R32((u32)(0xa72c7cu));
    /* 0050c26d: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 0050c270: mov eax, dword ptr [0xa72c80] */ r_eax = R32((u32)(0xa72c80u));
    /* 0050c275: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 0050c278: mov eax, dword ptr [0xa72c84] */ r_eax = R32((u32)(0xa72c84u));
    /* 0050c27d: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 0050c280: mov eax, dword ptr [0xa72c88] */ r_eax = R32((u32)(0xa72c88u));
    /* 0050c285: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 0050c288: mov eax, dword ptr [0xa72c8c] */ r_eax = R32((u32)(0xa72c8cu));
    /* 0050c28d: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 0050c290: mov eax, dword ptr [0xa72c90] */ r_eax = R32((u32)(0xa72c90u));
    /* 0050c295: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 0050c298: mov eax, dword ptr [0xa72c94] */ r_eax = R32((u32)(0xa72c94u));
    /* 0050c29d: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
    /* 0050c2a0: mov eax, dword ptr [0xa72c98] */ r_eax = R32((u32)(0xa72c98u));
    /* 0050c2a5: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
    /* 0050c2a8: mov eax, dword ptr [0xa72c9c] */ r_eax = R32((u32)(0xa72c9cu));
    /* 0050c2ad: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 0050c2b0: mov eax, dword ptr [0xa72ca0] */ r_eax = R32((u32)(0xa72ca0u));
    /* 0050c2b5: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
    /* 0050c2b8: mov eax, dword ptr [0xa72ca4] */ r_eax = R32((u32)(0xa72ca4u));
    /* 0050c2bd: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 0050c2c0: mov eax, dword ptr [0xa72ca8] */ r_eax = R32((u32)(0xa72ca8u));
    /* 0050c2c5: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 0050c2cb: mov eax, dword ptr [0xa72cac] */ r_eax = R32((u32)(0xa72cacu));
    /* 0050c2d0: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 0050c2d6: movzx eax, byte ptr [0xa72cb0] */ r_eax = (u32)R8((u32)(0xa72cb0u));
    /* 0050c2dd: mov byte ptr [ecx + 0x88], al */ W8((u32)(r_ecx+0x88u), (u8)r_eax);
    /* 0050c2e3: movzx eax, byte ptr [0xa72cb1] */ r_eax = (u32)R8((u32)(0xa72cb1u));
    /* 0050c2ea: mov byte ptr [ecx + 0x89], al */ W8((u32)(r_ecx+0x89u), (u8)r_eax);
    /* 0050c2f0: movzx eax, byte ptr [0xa72cb2] */ r_eax = (u32)R8((u32)(0xa72cb2u));
    /* 0050c2f7: mov byte ptr [ecx + 0x8a], al */ W8((u32)(r_ecx+0x8au), (u8)r_eax);
    /* 0050c2fd: movzx eax, byte ptr [0xa72cb3] */ r_eax = (u32)R8((u32)(0xa72cb3u));
    /* 0050c304: mov byte ptr [ecx + 0x8b], al */ W8((u32)(r_ecx+0x8bu), (u8)r_eax);
    /* 0050c30a: movzx eax, byte ptr [0xa72cb4] */ r_eax = (u32)R8((u32)(0xa72cb4u));
    /* 0050c311: mov byte ptr [ecx + 0x8c], al */ W8((u32)(r_ecx+0x8cu), (u8)r_eax);
    /* 0050c317: movzx eax, byte ptr [0xa72cb5] */ r_eax = (u32)R8((u32)(0xa72cb5u));
    /* 0050c31e: mov byte ptr [ecx + 0x8d], al */ W8((u32)(r_ecx+0x8du), (u8)r_eax);
    /* 0050c324: movzx eax, byte ptr [0xa72cb6] */ r_eax = (u32)R8((u32)(0xa72cb6u));
    /* 0050c32b: mov byte ptr [ecx + 0x8e], al */ W8((u32)(r_ecx+0x8eu), (u8)r_eax);
    /* 0050c331: movzx eax, byte ptr [0xa72cb7] */ r_eax = (u32)R8((u32)(0xa72cb7u));
    /* 0050c338: mov byte ptr [ecx + 0x8f], al */ W8((u32)(r_ecx+0x8fu), (u8)r_eax);
    /* 0050c33e: movzx eax, byte ptr [0xa72cb8] */ r_eax = (u32)R8((u32)(0xa72cb8u));
    /* 0050c345: mov byte ptr [ecx + 0x90], al */ W8((u32)(r_ecx+0x90u), (u8)r_eax);
    /* 0050c34b: movzx eax, byte ptr [0xa72cb9] */ r_eax = (u32)R8((u32)(0xa72cb9u));
    /* 0050c352: mov byte ptr [ecx + 0x91], al */ W8((u32)(r_ecx+0x91u), (u8)r_eax);
    /* 0050c358: movzx eax, byte ptr [0xa72cba] */ r_eax = (u32)R8((u32)(0xa72cbau));
    /* 0050c35f: mov byte ptr [ecx + 0x92], al */ W8((u32)(r_ecx+0x92u), (u8)r_eax);
    /* 0050c365: movzx eax, byte ptr [0xa72cbb] */ r_eax = (u32)R8((u32)(0xa72cbbu));
    /* 0050c36c: mov byte ptr [ecx + 0x93], al */ W8((u32)(r_ecx+0x93u), (u8)r_eax);
    /* 0050c372: movzx eax, byte ptr [0xa72cbc] */ r_eax = (u32)R8((u32)(0xa72cbcu));
    /* 0050c379: mov byte ptr [ecx + 0x94], al */ W8((u32)(r_ecx+0x94u), (u8)r_eax);
    /* 0050c37f: movzx eax, byte ptr [0xa72cbd] */ r_eax = (u32)R8((u32)(0xa72cbdu));
    /* 0050c386: mov byte ptr [ecx + 0x95], al */ W8((u32)(r_ecx+0x95u), (u8)r_eax);
    /* 0050c38c: movzx eax, byte ptr [0xa72cbe] */ r_eax = (u32)R8((u32)(0xa72cbeu));
    /* 0050c393: mov byte ptr [ecx + 0x96], al */ W8((u32)(r_ecx+0x96u), (u8)r_eax);
    /* 0050c399: movzx eax, byte ptr [0xa72cbf] */ r_eax = (u32)R8((u32)(0xa72cbfu));
    /* 0050c3a0: mov byte ptr [ecx + 0x97], al */ W8((u32)(r_ecx+0x97u), (u8)r_eax);
    /* 0050c3a6: mov esi, dword ptr [0xa72c38] */ r_esi = R32((u32)(0xa72c38u));
    /* 0050c3ac: mov dword ptr [ebp + 0x74], esi */ W32((u32)(r_ebp+0x74u), r_esi);
    /* 0050c3af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c3b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050c3b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050c3b2: ret  */ FN_RET(0x0050c144); r_esp += 4; return;
}

void f_0050c3b4(void) /* sub_50C3B4 */
{
    FN_ENTER(0x0050c3b4);
    /* 0050c3b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050c3b5: mov esi, ecx */ r_esi = r_ecx;
    /* 0050c3b7: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c3bd: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c3c0: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c3c6: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c3c9: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050c3cb: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c3cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c3ce: push 0x9ba920 */ { u32 v = 0x9ba920u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c3d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c3d4: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c3d9u); f_0050c420();
    /* 0050c3d9: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c3df: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c3e5: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c3e8: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c3eb: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050c3ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c3ee: push 0x9ba94c */ { u32 v = 0x9ba94cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050c3f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c3f4: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c3f6: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c3fbu); f_0050c420();
    /* 0050c3fb: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c401: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c407: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c40a: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c40d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050c40f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c410: push 0x9ba978 */ { u32 v = 0x9ba978u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c415: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c416: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c418: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c41du); f_0050c420();
    /* 0050c41d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050c41e: ret  */ FN_RET(0x0050c3b4); r_esp += 4; return;
}

void f_0050c420(void) /* sub_50C420 */
{
    FN_ENTER(0x0050c420);
    /* 0050c420: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050c421: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c422: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c423: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c426: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 0050c42a: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 0050c42e: fld dword ptr [0x9201dc] */ FPUSH(R_F32((u32)(0x9201dcu)));
    /* 0050c434: movsx eax, byte ptr [ebp + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x1cu));
    /* 0050c438: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0050c43c: cmp eax, 0x25 */ {  u32 a = r_eax; u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c43f: je 0x50c464 */ if (fZ) goto L_0050c464;
L_0050c441:; BB(0x0050c441);
    /* 0050c441: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0050c444: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c445: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0050c448: lea ebx, [ebp + 0x1c] */ r_ebx = (u32)(r_ebp+0x1cu);
    /* 0050c44b: lea ecx, [eax + edx + 1] */ r_ecx = (u32)(r_eax+r_edx+0x1u);
    /* 0050c44f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c450: push 0x91e7b0 */ { u32 v = 0x91e7b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c455: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c456: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x50c45bu); f_00858bf5();
    /* 0050c45b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c45e: mov byte ptr [ebp + 0x1c], 0x25 */ W8((u32)(r_ebp+0x1cu), 0x25u);
    /* 0050c462: jmp 0x50c467 */ goto L_0050c467;
L_0050c464:; BB(0x0050c464);
    /* 0050c464: lea ebx, [ebp + 0x1c] */ r_ebx = (u32)(r_ebp+0x1cu);
L_0050c467:; BB(0x0050c467);
    /* 0050c467: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0050c46a: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0050c46c: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0050c470: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0050c473: or eax, dword ptr [ebp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050c476: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0050c479: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0050c47d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50c482u); f_0061cdb0();
    /* 0050c482: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0050c486: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c488: jne 0x50c49c */ if (!fZ) goto L_0050c49c;
L_0050c48a:; BB(0x0050c48a);
    /* 0050c48a: push dword ptr [esp + 0x48] */ { u32 v = R32((u32)(r_esp+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c48e: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050c493: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x50c498u); f_007c1100();
    /* 0050c498: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c49a: jne 0x50c4a5 */ if (!fZ) goto L_0050c4a5;
L_0050c49c:; BB(0x0050c49c);
    /* 0050c49c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050c49f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050c4a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c4a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050c4a2: ret 0x10 */ FN_RET(0x0050c420); r_esp += 20; return;
L_0050c4a5:; BB(0x0050c4a5);
    /* 0050c4a5: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c4ab: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050c4b0: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50c4b5u); f_007c1160();
    /* 0050c4b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c4b7: je 0x50c4c1 */ if (fZ) goto L_0050c4c1;
L_0050c4b9:; BB(0x0050c4b9);
    /* 0050c4b9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050c4bc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c4bf: jmp 0x50c4e0 */ goto L_0050c4e0;
L_0050c4c1:; BB(0x0050c4c1);
    /* 0050c4c1: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c4c7: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050c4cc: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50c4d1u); f_007c1160();
    /* 0050c4d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c4d3: je 0x50c4dd */ if (fZ) goto L_0050c4dd;
L_0050c4d5:; BB(0x0050c4d5);
    /* 0050c4d5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050c4d8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c4db: jmp 0x50c4e0 */ goto L_0050c4e0;
L_0050c4dd:; BB(0x0050c4dd);
    /* 0050c4dd: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
L_0050c4e0:; BB(0x0050c4e0);
    /* 0050c4e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050c4e2: jl 0x50c5e1 */ if ((fS!=fO)) goto L_0050c5e1;
L_0050c4e8:; BB(0x0050c4e8);
    /* 0050c4e8: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0050c4eb: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0050c4ee: lea edx, [edx + ecx - 1] */ r_edx = (u32)(r_edx+r_ecx+0xffffffffu);
    /* 0050c4f2: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050c4f4: jl 0x50c4f8 */ if ((fS!=fO)) goto L_0050c4f8;
L_0050c4f6:; BB(0x0050c4f6);
    /* 0050c4f6: mov edx, eax */ r_edx = r_eax;
L_0050c4f8:; BB(0x0050c4f8);
    /* 0050c4f8: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c4fe: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 0050c501: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050c506: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50c50bu); f_007c1160();
    /* 0050c50b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c50d: je 0x50c51b */ if (fZ) goto L_0050c51b;
L_0050c50f:; BB(0x0050c50f);
    /* 0050c50f: fld dword ptr [0x9201d4] */ FPUSH(R_F32((u32)(0x9201d4u)));
    /* 0050c515: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0050c519: jmp 0x50c539 */ goto L_0050c539;
L_0050c51b:; BB(0x0050c51b);
    /* 0050c51b: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c521: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050c526: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50c52bu); f_007c1160();
    /* 0050c52b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c52d: je 0x50c539 */ if (fZ) goto L_0050c539;
L_0050c52f:; BB(0x0050c52f);
    /* 0050c52f: fld dword ptr [0x9201d8] */ FPUSH(R_F32((u32)(0x9201d8u)));
    /* 0050c535: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_0050c539:; BB(0x0050c539);
    /* 0050c539: fld qword ptr [0x9201c8] */ FPUSH(R_F64((u32)(0x9201c8u)));
    /* 0050c53f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0050c542: sub eax, dword ptr [ebp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050c545: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0050c548: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0050c54c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0050c550: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0050c554: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x50c559u); f_0084d1d4();
    /* 0050c559: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0050c55d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0050c55f: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 0050c561: fst dword ptr [edi] */ W_F32((u32)(r_edi), ST(0));
    /* 0050c563: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0050c566: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050c568: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050c56a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050c56c: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0050c570: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050c571: ja 0x50c589 */ if ((!fC&&!fZ)) goto L_0050c589;
L_0050c573:; BB(0x0050c573);
    /* 0050c573: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050c575: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0050c579: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0050c57c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050c57e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050c580: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050c581: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050c583: jbe 0x50c587 */ if ((fC||fZ)) goto L_0050c587;
L_0050c585:; BB(0x0050c585);
    /* 0050c585: fst st(1) */ ST(1) = ST(0);
L_0050c587:; BB(0x0050c587);
    /* 0050c587: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0050c589:; BB(0x0050c589);
    /* 0050c589: fst dword ptr [edi] */ W_F32((u32)(r_edi), ST(0));
    /* 0050c58b: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0050c58f: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0050c593: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0050c596: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0050c59a: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x50c59fu); f_00858bf5();
    /* 0050c59f: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0050c5a2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0050c5a5: add eax, dword ptr [ebp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c5a8: cmp edi, dword ptr [ebp + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050c5ab: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0050c5ae: mov edx, 0 */ r_edx = 0x0u;
    /* 0050c5b3: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0050c5b6: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050c5b8: sub eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050c5bb: lea eax, [eax + edx + 1] */ r_eax = (u32)(r_eax+r_edx+0x1u);
    /* 0050c5bf: movsx ebx, byte ptr [esp + eax + 0x10] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_esp+r_eax+0x10u));
    /* 0050c5c4: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c5c6: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0050c5c9: or eax, dword ptr [ebp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050c5cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c5cd: push 0x91e7bc */ { u32 v = 0x91e7bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0050c5d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c5d3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50c5d8u); f_0061cdb0();
    /* 0050c5d8: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050c5db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050c5dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c5dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050c5de: ret 0x10 */ FN_RET(0x0050c420); r_esp += 20; return;
L_0050c5e1:; BB(0x0050c5e1);
    /* 0050c5e1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050c5e3: jmp 0x50c4f8 */ goto L_0050c4f8;
}

void f_0050c5e8(void) /* sub_50C5E8 */
{
    FN_ENTER(0x0050c5e8);
    /* 0050c5e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050c5e9: mov esi, ecx */ r_esi = r_ecx;
    /* 0050c5eb: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c5f1: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c5f4: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c5fa: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c5fd: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c600: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c602: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c603: push 0x9ba9c0 */ { u32 v = 0x9ba9c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c608: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c609: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c60eu); f_0050c420();
    /* 0050c60e: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c614: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c61a: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c61d: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c620: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c624: push 0x9ba9ec */ { u32 v = 0x9ba9ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0050c629: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c62a: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c62c: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c631u); f_0050c420();
    /* 0050c631: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c637: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c63d: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c640: add edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c643: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c646: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c647: push 0x9baa18 */ { u32 v = 0x9baa18u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c64c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c64d: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c64f: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c654u); f_0050c420();
    /* 0050c654: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050c655: ret  */ FN_RET(0x0050c5e8); r_esp += 4; return;
}

void f_0050c658(void) /* sub_50C658 */
{
    FN_ENTER(0x0050c658);
    /* 0050c658: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050c659: mov esi, ecx */ r_esi = r_ecx;
    /* 0050c65b: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c661: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c664: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c66a: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c66d: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c670: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c672: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c673: push 0x9baa60 */ { u32 v = 0x9baa60u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c678: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c679: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c67eu); f_0050c420();
    /* 0050c67e: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c684: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c68a: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c68d: add edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c690: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c693: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c694: push 0x9baa8c */ { u32 v = 0x9baa8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050c699: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c69a: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c69c: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c6a1u); f_0050c420();
    /* 0050c6a1: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c6a7: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c6ad: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c6b0: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c6b3: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c6b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c6b7: push 0x9baab8 */ { u32 v = 0x9baab8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c6bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c6bd: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c6bf: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c6c4u); f_0050c420();
    /* 0050c6c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050c6c5: ret  */ FN_RET(0x0050c658); r_esp += 4; return;
}

void f_0050c6c8(void) /* sub_50C6C8 */
{
    FN_ENTER(0x0050c6c8);
    /* 0050c6c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050c6c9: mov esi, ecx */ r_esi = r_ecx;
    /* 0050c6cb: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c6d1: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c6d4: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c6da: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c6dd: add eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c6e0: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c6e3: push 0x9bab34 */ { u32 v = 0x9bab34u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c6e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c6e9: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c6eeu); f_0050c420();
    /* 0050c6ee: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c6f4: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c6fa: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c6fd: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c700: add eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c703: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c704: push 0x9bab0c */ { u32 v = 0x9bab0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050c709: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c70a: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c70c: call 0x50cb90 */ r_esp -= 4; W32(r_esp, 0x50c711u); f_0050cb90();
    /* 0050c711: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c717: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c71d: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c720: add edx, 0x4c */ {  u32 a = r_edx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c723: add eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c726: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c727: push 0x9baae4 */ { u32 v = 0x9baae4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c72c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c72d: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c72f: call 0x50cb90 */ r_esp -= 4; W32(r_esp, 0x50c734u); f_0050cb90();
    /* 0050c734: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050c735: ret  */ FN_RET(0x0050c6c8); r_esp += 4; return;
}

void f_0050c738(void) /* sub_50C738 */
{
    FN_ENTER(0x0050c738);
    /* 0050c738: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050c739: mov esi, ecx */ r_esi = r_ecx;
    /* 0050c73b: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c741: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c744: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c74a: add edx, 0x54 */ {  u32 a = r_edx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c74d: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c750: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c752: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c753: push 0x9bab60 */ { u32 v = 0x9bab60u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c759: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c75eu); f_0050c420();
    /* 0050c75e: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c764: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c76a: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c76d: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c770: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c774: push 0x9bab8c */ { u32 v = 0x9bab8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050c779: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c77a: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c77c: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c781u); f_0050c420();
    /* 0050c781: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c787: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c78d: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c790: add edx, 0x5c */ {  u32 a = r_edx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c793: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c796: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c797: push 0x9babb8 */ { u32 v = 0x9babb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c79c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c79d: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c79f: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c7a4u); f_0050c420();
    /* 0050c7a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050c7a5: ret  */ FN_RET(0x0050c738); r_esp += 4; return;
}

void f_0050c7a8(void) /* sub_50C7A8 */
{
    FN_ENTER(0x0050c7a8);
    /* 0050c7a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050c7a9: mov esi, ecx */ r_esi = r_ecx;
    /* 0050c7ab: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c7b1: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c7b4: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c7ba: add edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c7bd: add eax, -5 */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c7c0: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c7c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c7c3: push 0x9bac00 */ { u32 v = 0x9bac00u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c7c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c7c9: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c7ceu); f_0050c420();
    /* 0050c7ce: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c7d4: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c7da: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c7dd: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c7e0: add eax, -5 */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c7e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c7e4: push 0x9bac2c */ { u32 v = 0x9bac2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050c7e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c7ea: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c7ec: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c7f1u); f_0050c420();
    /* 0050c7f1: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c7f7: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c7fd: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c800: add edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c803: add eax, -5 */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c806: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c807: push 0x9bac58 */ { u32 v = 0x9bac58u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c80c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c80d: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c80f: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c814u); f_0050c420();
    /* 0050c814: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050c815: ret  */ FN_RET(0x0050c7a8); r_esp += 4; return;
}

void f_0050c818(void) /* sub_50C818 */
{
    FN_ENTER(0x0050c818);
    /* 0050c818: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050c819: mov esi, ecx */ r_esi = r_ecx;
    /* 0050c81b: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c821: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c824: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c82a: add edx, 0x60 */ {  u32 a = r_edx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c82d: add eax, -6 */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c830: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c832: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c833: push 0x9baca0 */ { u32 v = 0x9baca0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c838: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c839: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c83eu); f_0050c420();
    /* 0050c83e: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c844: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c84a: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c84d: add edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c850: add eax, -6 */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c853: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c854: push 0x9baccc */ { u32 v = 0x9bacccu; r_esp -= 4; W32(r_esp, v); }
    /* 0050c859: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c85a: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c85c: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c861u); f_0050c420();
    /* 0050c861: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c867: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c86d: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c870: add edx, 0x68 */ {  u32 a = r_edx; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c873: add eax, -6 */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c876: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c877: push 0x9bacf8 */ { u32 v = 0x9bacf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c87c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c87d: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c87f: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c884u); f_0050c420();
    /* 0050c884: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050c885: ret  */ FN_RET(0x0050c818); r_esp += 4; return;
}

void f_0050c85c(void)
{
    FN_ENTER(0x0050c85c);
    /* 0050c85c: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c861u); f_0050c420();
    /* 0050c861: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c867: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c86d: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c870: add edx, 0x68 */ {  u32 a = r_edx; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c873: add eax, -6 */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c876: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c877: push 0x9bacf8 */ { u32 v = 0x9bacf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c87c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c87d: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c87f: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c884u); f_0050c420();
    /* 0050c884: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050c885: ret  */ FN_RET(0x0050c85c); r_esp += 4; return;
}

void f_0050c888(void) /* sub_50C888 */
{
    FN_ENTER(0x0050c888);
    /* 0050c888: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050c889: mov esi, ecx */ r_esi = r_ecx;
    /* 0050c88b: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c891: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c894: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c89a: add edx, 0x6c */ {  u32 a = r_edx; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c89d: add eax, -7 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c8a0: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c8a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c8a3: push 0x9bad40 */ { u32 v = 0x9bad40u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c8a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c8a9: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c8aeu); f_0050c420();
    /* 0050c8ae: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c8b4: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c8ba: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c8bd: add edx, 0x70 */ {  u32 a = r_edx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c8c0: add eax, -7 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c8c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c8c4: push 0x9bad6c */ { u32 v = 0x9bad6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050c8c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c8ca: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c8cc: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c8d1u); f_0050c420();
    /* 0050c8d1: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c8d7: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c8dd: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c8e0: add edx, 0x74 */ {  u32 a = r_edx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c8e3: add eax, -7 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c8e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c8e7: push 0x9bad98 */ { u32 v = 0x9bad98u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c8ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c8ed: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c8ef: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c8f4u); f_0050c420();
    /* 0050c8f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050c8f5: ret  */ FN_RET(0x0050c888); r_esp += 4; return;
}

void f_0050c8f8(void) /* sub_50C8F8 */
{
    FN_ENTER(0x0050c8f8);
    /* 0050c8f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050c8f9: mov esi, ecx */ r_esi = r_ecx;
    /* 0050c8fb: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c901: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c904: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c90a: add edx, 0x7c */ {  u32 a = r_edx; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c90d: add eax, -8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c910: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c912: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c913: push 0x9bade0 */ { u32 v = 0x9bade0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c918: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c919: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c91eu); f_0050c420();
    /* 0050c91e: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c924: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c92a: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c92d: add edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c933: add eax, -8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c936: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c937: push 0x9bae0c */ { u32 v = 0x9bae0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050c93c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c93d: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c93f: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c944u); f_0050c420();
    /* 0050c944: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c94a: mov edx, dword ptr [esi + 0x80] */ r_edx = R32((u32)(r_esi+0x80u));
    /* 0050c950: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 0050c953: add edx, 0x84 */ {  u32 a = r_edx; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050c959: add eax, -8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c95c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c95d: push 0x9bae38 */ { u32 v = 0x9bae38u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c962: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c963: mov ecx, esi */ r_ecx = r_esi;
    /* 0050c965: call 0x50c420 */ r_esp -= 4; W32(r_esp, 0x50c96au); f_0050c420();
    /* 0050c96a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050c96b: ret  */ FN_RET(0x0050c8f8); r_esp += 4; return;
}

void f_0050c96c(void) /* sub_50C96C */
{
    FN_ENTER(0x0050c96c);
    /* 0050c96c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c96d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0050c96f: mov eax, dword ptr [ebp + 0x7c] */ r_eax = R32((u32)(r_ebp+0x7cu));
    /* 0050c972: lea edx, [ebp + 0x78] */ r_edx = (u32)(r_ebp+0x78u);
    /* 0050c975: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c97b: add eax, -9 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c97e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0050c980: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c981: push 0x9bae64 */ { u32 v = 0x9bae64u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c986: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c987: call 0x50cb90 */ r_esp -= 4; W32(r_esp, 0x50c98cu); f_0050cb90();
    /* 0050c98c: push dword ptr [ebp + 0x78] */ { u32 v = R32((u32)(r_ebp+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050c98f: call 0x501824 */ r_esp -= 4; W32(r_esp, 0x50c994u); f_00501824();
    /* 0050c994: mov edx, dword ptr [ebp + 0x80] */ r_edx = R32((u32)(r_ebp+0x80u));
    /* 0050c99a: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0050c99d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050c99e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c99f: ret  */ FN_RET(0x0050c96c); r_esp += 4; return;
}

void f_0050c9a0(void) /* sub_50C9A0 */
{
    FN_ENTER(0x0050c9a0);
    /* 0050c9a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050c9a1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c9a2: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c9a5: mov edi, ecx */ r_edi = r_ecx;
    /* 0050c9a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c9a9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0050c9ac: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0050c9b0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0050c9b4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0050c9b6: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0050c9ba: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0050c9be: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0050c9c2: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0050c9c6: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 0050c9cc: movzx edx, byte ptr [eax + 0x88] */ r_edx = (u32)R8((u32)(r_eax+0x88u));
    /* 0050c9d3: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050c9d6: je 0x50c9e6 */ if (fZ) goto L_0050c9e6;
L_0050c9d8:; BB(0x0050c9d8);
    /* 0050c9d8: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 0050c9df: movzx edx, byte ptr [eax + 0x88] */ r_edx = (u32)R8((u32)(r_eax+0x88u));
L_0050c9e6:; BB(0x0050c9e6);
    /* 0050c9e6: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050c9e9: je 0x50c9fa */ if (fZ) goto L_0050c9fa;
L_0050c9eb:; BB(0x0050c9eb);
    /* 0050c9eb: mov dword ptr [esp + 4], 1 */ W32((u32)(r_esp+0x4u), 0x1u);
    /* 0050c9f3: movzx edx, byte ptr [eax + 0x88] */ r_edx = (u32)R8((u32)(r_eax+0x88u));
L_0050c9fa:; BB(0x0050c9fa);
    /* 0050c9fa: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050c9fd: je 0x50ca0e */ if (fZ) goto L_0050ca0e;
L_0050c9ff:; BB(0x0050c9ff);
    /* 0050c9ff: mov dword ptr [esp + 8], 1 */ W32((u32)(r_esp+0x8u), 0x1u);
    /* 0050ca07: movzx edx, byte ptr [eax + 0x88] */ r_edx = (u32)R8((u32)(r_eax+0x88u));
L_0050ca0e:; BB(0x0050ca0e);
    /* 0050ca0e: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050ca11: je 0x50ca22 */ if (fZ) goto L_0050ca22;
L_0050ca13:; BB(0x0050ca13);
    /* 0050ca13: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 0050ca1b: movzx edx, byte ptr [eax + 0x88] */ r_edx = (u32)R8((u32)(r_eax+0x88u));
L_0050ca22:; BB(0x0050ca22);
    /* 0050ca22: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050ca25: je 0x50ca36 */ if (fZ) goto L_0050ca36;
L_0050ca27:; BB(0x0050ca27);
    /* 0050ca27: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 0050ca2f: movzx edx, byte ptr [eax + 0x88] */ r_edx = (u32)R8((u32)(r_eax+0x88u));
L_0050ca36:; BB(0x0050ca36);
    /* 0050ca36: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050ca39: je 0x50ca4a */ if (fZ) goto L_0050ca4a;
L_0050ca3b:; BB(0x0050ca3b);
    /* 0050ca3b: mov dword ptr [esp + 0x14], 1 */ W32((u32)(r_esp+0x14u), 0x1u);
    /* 0050ca43: movzx edx, byte ptr [eax + 0x88] */ r_edx = (u32)R8((u32)(r_eax+0x88u));
L_0050ca4a:; BB(0x0050ca4a);
    /* 0050ca4a: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050ca4d: je 0x50ca57 */ if (fZ) goto L_0050ca57;
L_0050ca4f:; BB(0x0050ca4f);
    /* 0050ca4f: mov dword ptr [esp + 0x18], 1 */ W32((u32)(r_esp+0x18u), 0x1u);
L_0050ca57:; BB(0x0050ca57);
    /* 0050ca57: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0050ca5a: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050ca60: mov eax, dword ptr [edi + 0x7c] */ r_eax = R32((u32)(r_edi+0x7cu));
    /* 0050ca63: add eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050ca66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ca67: push 0x9baea0 */ { u32 v = 0x9baea0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ca6c: mov ecx, edi */ r_ecx = r_edi;
    /* 0050ca6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ca6f: call 0x50cb90 */ r_esp -= 4; W32(r_esp, 0x50ca74u); f_0050cb90();
    /* 0050ca74: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050ca7a: mov eax, dword ptr [edi + 0x7c] */ r_eax = R32((u32)(r_edi+0x7cu));
    /* 0050ca7d: add eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050ca80: mov ecx, edi */ r_ecx = r_edi;
    /* 0050ca82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ca83: push 0x9baec8 */ { u32 v = 0x9baec8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ca88: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0050ca8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ca8d: call 0x50cb90 */ r_esp -= 4; W32(r_esp, 0x50ca92u); f_0050cb90();
    /* 0050ca92: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050ca98: mov eax, dword ptr [edi + 0x7c] */ r_eax = R32((u32)(r_edi+0x7cu));
    /* 0050ca9b: add eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050ca9e: mov ecx, edi */ r_ecx = r_edi;
    /* 0050caa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050caa1: push 0x9baef0 */ { u32 v = 0x9baef0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050caa6: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0050caaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050caab: call 0x50cb90 */ r_esp -= 4; W32(r_esp, 0x50cab0u); f_0050cb90();
    /* 0050cab0: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cab6: mov eax, dword ptr [edi + 0x7c] */ r_eax = R32((u32)(r_edi+0x7cu));
    /* 0050cab9: add eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050cabc: mov ecx, edi */ r_ecx = r_edi;
    /* 0050cabe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050cabf: push 0x9baf18 */ { u32 v = 0x9baf18u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cac4: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0050cac8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cac9: call 0x50cb90 */ r_esp -= 4; W32(r_esp, 0x50caceu); f_0050cb90();
    /* 0050cace: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cad4: mov eax, dword ptr [edi + 0x7c] */ r_eax = R32((u32)(r_edi+0x7cu));
    /* 0050cad7: add eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050cada: mov ecx, edi */ r_ecx = r_edi;
    /* 0050cadc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050cadd: push 0x9baf40 */ { u32 v = 0x9baf40u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cae2: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0050cae6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cae7: call 0x50cb90 */ r_esp -= 4; W32(r_esp, 0x50caecu); f_0050cb90();
    /* 0050caec: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050caf2: mov eax, dword ptr [edi + 0x7c] */ r_eax = R32((u32)(r_edi+0x7cu));
    /* 0050caf5: add eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050caf8: mov ecx, edi */ r_ecx = r_edi;
    /* 0050cafa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050cafb: push 0x9baf68 */ { u32 v = 0x9baf68u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cb00: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0050cb04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cb05: call 0x50cb90 */ r_esp -= 4; W32(r_esp, 0x50cb0au); f_0050cb90();
    /* 0050cb0a: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cb10: mov eax, dword ptr [edi + 0x7c] */ r_eax = R32((u32)(r_edi+0x7cu));
    /* 0050cb13: add eax, -0xa */ {  u32 a = r_eax; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050cb16: mov ecx, edi */ r_ecx = r_edi;
    /* 0050cb18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050cb19: push 0x9baf90 */ { u32 v = 0x9baf90u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cb1e: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0050cb22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cb23: call 0x50cb90 */ r_esp -= 4; W32(r_esp, 0x50cb28u); f_0050cb90();
    /* 0050cb28: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0050cb2c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cb2f: jne 0x50cb36 */ if (!fZ) goto L_0050cb36;
L_0050cb31:; BB(0x0050cb31);
    /* 0050cb31: mov ebx, 0x40 */ r_ebx = 0x40u;
L_0050cb36:; BB(0x0050cb36);
    /* 0050cb36: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0050cb3a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cb3d: jne 0x50cb42 */ if (!fZ) goto L_0050cb42;
L_0050cb3f:; BB(0x0050cb3f);
    /* 0050cb3f: or ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_0050cb42:; BB(0x0050cb42);
    /* 0050cb42: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0050cb46: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cb49: jne 0x50cb4e */ if (!fZ) goto L_0050cb4e;
L_0050cb4b:; BB(0x0050cb4b);
    /* 0050cb4b: or ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_0050cb4e:; BB(0x0050cb4e);
    /* 0050cb4e: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0050cb52: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cb55: jne 0x50cb5d */ if (!fZ) goto L_0050cb5d;
L_0050cb57:; BB(0x0050cb57);
    /* 0050cb57: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 0050cb5a: or ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_0050cb5d:; BB(0x0050cb5d);
    /* 0050cb5d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0050cb61: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cb64: jne 0x50cb6c */ if (!fZ) goto L_0050cb6c;
L_0050cb66:; BB(0x0050cb66);
    /* 0050cb66: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 0050cb69: or ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_0050cb6c:; BB(0x0050cb6c);
    /* 0050cb6c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0050cb70: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cb73: jne 0x50cb7b */ if (!fZ) goto L_0050cb7b;
L_0050cb75:; BB(0x0050cb75);
    /* 0050cb75: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 0050cb78: or ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_0050cb7b:; BB(0x0050cb7b);
    /* 0050cb7b: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 0050cb81: mov byte ptr [eax + 0x88], bl */ W8((u32)(r_eax+0x88u), (u8)r_ebx);
    /* 0050cb87: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050cb8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050cb8b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050cb8c: ret  */ FN_RET(0x0050c9a0); r_esp += 4; return;
}

void f_0050cb90(void) /* sub_50CB90 */
{
    FN_ENTER(0x0050cb90);
    /* 0050cb90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050cb91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050cb92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050cb93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cb94: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050cb97: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 0050cb9b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0050cb9d: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 0050cba1: movsx eax, byte ptr [esi + 0x18] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x18u));
    /* 0050cba5: cmp eax, 0x25 */ {  u32 a = r_eax; u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cba8: je 0x50cbc7 */ if (fZ) goto L_0050cbc7;
L_0050cbaa:; BB(0x0050cbaa);
    /* 0050cbaa: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0050cbac: lea ebx, [esi + 0x18] */ r_ebx = (u32)(r_esi+0x18u);
    /* 0050cbaf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050cbb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050cbb3: push 0x91e7c0 */ { u32 v = 0x91e7c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cbb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cbb9: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x50cbbeu); f_00858bf5();
    /* 0050cbbe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050cbc1: mov byte ptr [esi + 0x18], 0x25 */ W8((u32)(r_esi+0x18u), 0x25u);
    /* 0050cbc5: jmp 0x50cbca */ goto L_0050cbca;
L_0050cbc7:; BB(0x0050cbc7);
    /* 0050cbc7: lea ebx, [esi + 0x18] */ r_ebx = (u32)(r_esi+0x18u);
L_0050cbca:; BB(0x0050cbca);
    /* 0050cbca: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cbcc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cbcd: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0050cbd0: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0050cbd3: or eax, dword ptr [esi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x14u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050cbd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050cbd7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50cbdcu); f_0061cdb0();
    /* 0050cbdc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050cbdf: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 0050cbe3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cbe5: jne 0x50cbf9 */ if (!fZ) goto L_0050cbf9;
L_0050cbe7:; BB(0x0050cbe7);
    /* 0050cbe7: push dword ptr [esp + 0x58] */ { u32 v = R32((u32)(r_esp+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cbeb: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050cbf0: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x50cbf5u); f_007c1100();
    /* 0050cbf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cbf7: jne 0x50cc03 */ if (!fZ) goto L_0050cc03;
L_0050cbf9:; BB(0x0050cbf9);
    /* 0050cbf9: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050cbfc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050cbfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050cbfe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050cbff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050cc00: ret 0x10 */ FN_RET(0x0050cb90); r_esp += 20; return;
L_0050cc03:; BB(0x0050cc03);
    /* 0050cc03: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cc09: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050cc0e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50cc13u); f_007c1160();
    /* 0050cc13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cc15: je 0x50cc1f */ if (fZ) goto L_0050cc1f;
L_0050cc17:; BB(0x0050cc17);
    /* 0050cc17: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0050cc1a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050cc1d: jmp 0x50cc3e */ goto L_0050cc3e;
L_0050cc1f:; BB(0x0050cc1f);
    /* 0050cc1f: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cc25: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050cc2a: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50cc2fu); f_007c1160();
    /* 0050cc2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cc31: je 0x50cc3b */ if (fZ) goto L_0050cc3b;
L_0050cc33:; BB(0x0050cc33);
    /* 0050cc33: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0050cc36: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050cc39: jmp 0x50cc3e */ goto L_0050cc3e;
L_0050cc3b:; BB(0x0050cc3b);
    /* 0050cc3b: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
L_0050cc3e:; BB(0x0050cc3e);
    /* 0050cc3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050cc40: jl 0x50cd15 */ if ((fS!=fO)) goto L_0050cd15;
L_0050cc46:; BB(0x0050cc46);
    /* 0050cc46: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0050cc48: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050cc4b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050cc4d: jl 0x50cc51 */ if ((fS!=fO)) goto L_0050cc51;
L_0050cc4f:; BB(0x0050cc4f);
    /* 0050cc4f: mov edx, eax */ r_edx = r_eax;
L_0050cc51:; BB(0x0050cc51);
    /* 0050cc51: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cc57: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 0050cc5a: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050cc5f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50cc64u); f_007c1160();
    /* 0050cc64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cc66: je 0x50cc6f */ if (fZ) goto L_0050cc6f;
L_0050cc68:; BB(0x0050cc68);
    /* 0050cc68: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0050cc6d: jmp 0x50cc88 */ goto L_0050cc88;
L_0050cc6f:; BB(0x0050cc6f);
    /* 0050cc6f: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cc75: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050cc7a: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50cc7fu); f_007c1160();
    /* 0050cc7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cc81: je 0x50cc88 */ if (fZ) goto L_0050cc88;
L_0050cc83:; BB(0x0050cc83);
    /* 0050cc83: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
L_0050cc88:; BB(0x0050cc88);
    /* 0050cc88: fild dword ptr [esi + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esi+0xcu)));
    /* 0050cc8b: fld qword ptr [0x9201c0] */ FPUSH(R_F64((u32)(0x9201c0u)));
    /* 0050cc91: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0050cc94: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0050cc98: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x50cc9du); f_0084d1d4();
    /* 0050cc9d: fadd dword ptr [0x9201d0] */ ST(0) = ST(0) + R_F32((u32)(0x9201d0u));
    /* 0050cca3: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0050cca7: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0050ccac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050ccb1: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0050ccb5: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0050ccb9: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050ccbd: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0050ccc1: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0050ccc5: imul eax, ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050ccc8: add eax, dword ptr [edi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050ccca: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0050cccc: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0050cccf: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ccd1: jl 0x50ccdc */ if ((fS!=fO)) goto L_0050ccdc;
L_0050ccd3:; BB(0x0050ccd3);
    /* 0050ccd3: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 0050ccd6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ccd8: jge 0x50ccdc */ if ((fS==fO)) goto L_0050ccdc;
L_0050ccda:; BB(0x0050ccda);
    /* 0050ccda: mov edx, eax */ r_edx = r_eax;
L_0050ccdc:; BB(0x0050ccdc);
    /* 0050ccdc: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0050cce0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cce1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cce2: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0050cce4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050cce5: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x50cceau); f_00858bf5();
    /* 0050ccea: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0050ccec: sub ecx, dword ptr [esi + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0050ccef: movsx edx, byte ptr [esp + ecx + 0x1c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+r_ecx+0x1cu));
    /* 0050ccf4: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0050ccf7: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050ccf9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ccfa: push 0x91e7bc */ { u32 v = 0x91e7bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ccff: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0050cd02: or ecx, dword ptr [esi + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x14u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0050cd05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd06: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50cd0bu); f_0061cdb0();
    /* 0050cd0b: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050cd0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050cd0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050cd10: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050cd11: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050cd12: ret 0x10 */ FN_RET(0x0050cb90); r_esp += 20; return;
L_0050cd15:; BB(0x0050cd15);
    /* 0050cd15: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050cd17: jmp 0x50cc51 */ goto L_0050cc51;
}

void f_0050cd1c(void) /* sub_50CD1C */
{
    FN_ENTER(0x0050cd1c);
    /* 0050cd1c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0050cd20: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050cd22: jl 0x50cd67 */ if ((fS!=fO)) goto L_0050cd67;
L_0050cd24:; BB(0x0050cd24);
    /* 0050cd24: cmp edx, 0x23f */ {  u32 a = r_edx; u32 b = 0x23fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050cd2a: jg 0x50cd67 */ if ((!fZ&&fS==fO)) goto L_0050cd67;
L_0050cd2c:; BB(0x0050cd2c);
    /* 0050cd2c: cmp edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050cd32: jge 0x50cd4a */ if ((fS==fO)) goto L_0050cd4a;
L_0050cd34:; BB(0x0050cd34);
    /* 0050cd34: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 0050cd37: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050cd39: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050cd3b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050cd3d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050cd3f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050cd41: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050cd43: add eax, dword ptr [0xa72cd0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050cd49: ret  */ FN_RET(0x0050cd1c); r_esp += 4; return;
L_0050cd4a:; BB(0x0050cd4a);
    /* 0050cd4a: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 0050cd4d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050cd4f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050cd51: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0050cd53: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050cd55: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050cd57: mov edx, dword ptr [0xa72ccc] */ r_edx = R32((u32)(0xa72cccu));
    /* 0050cd5d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050cd5f: lea eax, [edx + ecx - 0x13000] */ r_eax = (u32)(r_edx+r_ecx+0xfffed000u);
    /* 0050cd66: ret  */ FN_RET(0x0050cd1c); r_esp += 4; return;
L_0050cd67:; BB(0x0050cd67);
    /* 0050cd67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050cd69: ret  */ FN_RET(0x0050cd1c); r_esp += 4; return;
}

void f_0050cd6c(void) /* sub_50CD6C */
{
    FN_ENTER(0x0050cd6c);
    /* 0050cd6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd6e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd70: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050cd73: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0050cd75: mov eax, dword ptr [ebx + 0x6c] */ r_eax = R32((u32)(r_ebx+0x6cu));
    /* 0050cd78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cd7a: jne 0x50cff5 */ if (!fZ) goto L_0050cff5;
L_0050cd80:; BB(0x0050cd80);
    /* 0050cd80: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd82: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x50cd87u); f_007bfe50();
    /* 0050cd87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050cd88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cd8a: je 0x50cda0 */ if (fZ) goto L_0050cda0;
L_0050cd8c:; BB(0x0050cd8c);
    /* 0050cd8c: mov eax, dword ptr [0x9bb1c8] */ r_eax = R32((u32)(0x9bb1c8u));
    /* 0050cd91: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050cd96: jge 0x50cda0 */ if ((fS==fO)) goto L_0050cda0;
L_0050cd98:; BB(0x0050cd98);
    /* 0050cd98: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050cd9b: mov dword ptr [0x9bb1c8], eax */ W32((u32)(0x9bb1c8u), r_eax);
L_0050cda0:; BB(0x0050cda0);
    /* 0050cda0: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cda6: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050cdab: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x50cdb0u); f_007c1100();
    /* 0050cdb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cdb2: je 0x50ce18 */ if (fZ) goto L_0050ce18;
L_0050cdb4:; BB(0x0050cdb4);
    /* 0050cdb4: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cdba: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050cdbf: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50cdc4u); f_007c1160();
    /* 0050cdc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cdc6: je 0x50cdec */ if (fZ) goto L_0050cdec;
L_0050cdc8:; BB(0x0050cdc8);
    /* 0050cdc8: mov eax, dword ptr [ebx + 0x70] */ r_eax = R32((u32)(r_ebx+0x70u));
    /* 0050cdcb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050cdce: cmp eax, dword ptr [0x9bb1c8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9bb1c8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050cdd4: jl 0x50cde4 */ if ((fS!=fO)) goto L_0050cde4;
L_0050cdd6:; BB(0x0050cdd6);
    /* 0050cdd6: mov dword ptr [ebx + 0x70], 0 */ W32((u32)(r_ebx+0x70u), 0x0u);
    /* 0050cddd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050cddf: jmp 0x50ce74 */ goto L_0050ce74;
L_0050cde4:; BB(0x0050cde4);
    /* 0050cde4: mov dword ptr [ebx + 0x70], eax */ W32((u32)(r_ebx+0x70u), r_eax);
    /* 0050cde7: jmp 0x50ce74 */ goto L_0050ce74;
L_0050cdec:; BB(0x0050cdec);
    /* 0050cdec: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cdf2: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050cdf7: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50cdfcu); f_007c1160();
    /* 0050cdfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cdfe: je 0x50ce13 */ if (fZ) goto L_0050ce13;
L_0050ce00:; BB(0x0050ce00);
    /* 0050ce00: mov eax, dword ptr [ebx + 0x70] */ r_eax = R32((u32)(r_ebx+0x70u));
    /* 0050ce03: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050ce06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050ce08: jl 0x50d47c */ if ((fS!=fO)) goto L_0050d47c;
L_0050ce0e:; BB(0x0050ce0e);
    /* 0050ce0e: mov dword ptr [ebx + 0x70], eax */ W32((u32)(r_ebx+0x70u), r_eax);
    /* 0050ce11: jmp 0x50ce74 */ goto L_0050ce74;
L_0050ce13:; BB(0x0050ce13);
    /* 0050ce13: mov eax, dword ptr [ebx + 0x70] */ r_eax = R32((u32)(r_ebx+0x70u));
    /* 0050ce16: jmp 0x50ce74 */ goto L_0050ce74;
L_0050ce18:; BB(0x0050ce18);
    /* 0050ce18: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050ce1e: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050ce23: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x50ce28u); f_007c1100();
    /* 0050ce28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ce2a: je 0x50ce4a */ if (fZ) goto L_0050ce4a;
L_0050ce2c:; BB(0x0050ce2c);
    /* 0050ce2c: mov eax, dword ptr [ebx + 0x70] */ r_eax = R32((u32)(r_ebx+0x70u));
    /* 0050ce2f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050ce32: cmp eax, dword ptr [0x9bb1c8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9bb1c8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ce38: jl 0x50ce45 */ if ((fS!=fO)) goto L_0050ce45;
L_0050ce3a:; BB(0x0050ce3a);
    /* 0050ce3a: mov dword ptr [ebx + 0x70], 0 */ W32((u32)(r_ebx+0x70u), 0x0u);
    /* 0050ce41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050ce43: jmp 0x50ce74 */ goto L_0050ce74;
L_0050ce45:; BB(0x0050ce45);
    /* 0050ce45: mov dword ptr [ebx + 0x70], eax */ W32((u32)(r_ebx+0x70u), r_eax);
    /* 0050ce48: jmp 0x50ce74 */ goto L_0050ce74;
L_0050ce4a:; BB(0x0050ce4a);
    /* 0050ce4a: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050ce50: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050ce55: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x50ce5au); f_007c1100();
    /* 0050ce5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ce5c: je 0x50ce71 */ if (fZ) goto L_0050ce71;
L_0050ce5e:; BB(0x0050ce5e);
    /* 0050ce5e: mov eax, dword ptr [ebx + 0x70] */ r_eax = R32((u32)(r_ebx+0x70u));
    /* 0050ce61: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050ce64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050ce66: jl 0x50d48c */ if ((fS!=fO)) goto L_0050d48c;
L_0050ce6c:; BB(0x0050ce6c);
    /* 0050ce6c: mov dword ptr [ebx + 0x70], eax */ W32((u32)(r_ebx+0x70u), r_eax);
    /* 0050ce6f: jmp 0x50ce74 */ goto L_0050ce74;
L_0050ce71:; BB(0x0050ce71);
    /* 0050ce71: mov eax, dword ptr [ebx + 0x70] */ r_eax = R32((u32)(r_ebx+0x70u));
L_0050ce74:; BB(0x0050ce74);
    /* 0050ce74: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0050ce77: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050ce79: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050ce7b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050ce7d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050ce7f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050ce81: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050ce83: add edx, dword ptr [0xa72cd0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa72cd0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050ce89: mov dword ptr [ebx + 0x80], edx */ W32((u32)(r_ebx+0x80u), r_edx);
    /* 0050ce8f: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0050ce92: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 0050ce95: push dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050ce98: call 0x501804 */ r_esp -= 4; W32(r_esp, 0x50ce9du); f_00501804();
    /* 0050ce9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050ce9e: mov dword ptr [ebx + 0x78], eax */ W32((u32)(r_ebx+0x78u), r_eax);
    /* 0050cea1: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 0050cea4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cea6: jne 0x50ceca */ if (!fZ) goto L_0050ceca;
L_0050cea8:; BB(0x0050cea8);
    /* 0050cea8: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0050ceab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ceac: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x50ceb1u); f_006a6f78();
    /* 0050ceb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050ceb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050ceb4: jl 0x50ceca */ if ((fS!=fO)) goto L_0050ceca;
L_0050ceb6:; BB(0x0050ceb6);
    /* 0050ceb6: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ceb8: lea eax, [ebx + 0x50] */ r_eax = (u32)(r_ebx+0x50u);
    /* 0050cebb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050cebc: push dword ptr [ebx + 0x80] */ { u32 v = R32((u32)(r_ebx+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cec2: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x50cec7u); f_00858900();
    /* 0050cec7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050ceca:; BB(0x0050ceca);
    /* 0050ceca: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050ced0: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050ced5: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50cedau); f_007c1160();
    /* 0050ceda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cedc: je 0x50cef9 */ if (fZ) goto L_0050cef9;
L_0050cede:; BB(0x0050cede);
    /* 0050cede: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cee0: push dword ptr [ebx + 0x80] */ { u32 v = R32((u32)(r_ebx+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cee6: lea eax, [ebx + 0x50] */ r_eax = (u32)(r_ebx+0x50u);
    /* 0050cee9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ceea: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x50ceefu); f_00858900();
    /* 0050ceef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050cef2: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
L_0050cef9:; BB(0x0050cef9);
    /* 0050cef9: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050ceff: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050cf04: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50cf09u); f_007c1160();
    /* 0050cf09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cf0b: je 0x50cf28 */ if (fZ) goto L_0050cf28;
L_0050cf0d:; BB(0x0050cf0d);
    /* 0050cf0d: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
    /* 0050cf14: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cf16: lea eax, [ebx + 0x50] */ r_eax = (u32)(r_ebx+0x50u);
    /* 0050cf19: push dword ptr [ebx + 0x80] */ { u32 v = R32((u32)(r_ebx+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cf1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050cf20: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x50cf25u); f_00858900();
    /* 0050cf25: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050cf28:; BB(0x0050cf28);
    /* 0050cf28: push 0x920264 */ { u32 v = 0x920264u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cf2d: push 0xa0005 */ { u32 v = 0xa0005u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cf32: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50cf37u); f_0061cdb0();
    /* 0050cf37: push 0x920270 */ { u32 v = 0x920270u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cf3c: push 0xf0008 */ { u32 v = 0xf0008u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cf41: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50cf46u); f_0061cdb0();
    /* 0050cf46: push 0x920288 */ { u32 v = 0x920288u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cf4b: push 0xf000a */ { u32 v = 0xf000au; r_esp -= 4; W32(r_esp, v); }
    /* 0050cf50: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50cf55u); f_0061cdb0();
    /* 0050cf55: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050cf58: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cf5e: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050cf63: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x50cf68u); f_007c1100();
    /* 0050cf68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cf6a: je 0x50cf99 */ if (fZ) goto L_0050cf99;
L_0050cf6c:; BB(0x0050cf6c);
    /* 0050cf6c: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cf72: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050cf77: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50cf7cu); f_007c1160();
    /* 0050cf7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cf7e: je 0x50cf99 */ if (fZ) goto L_0050cf99;
L_0050cf80:; BB(0x0050cf80);
    /* 0050cf80: push dword ptr [ebx + 0x80] */ { u32 v = R32((u32)(r_ebx+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cf86: mov ecx, dword ptr [ebx + 0x68] */ r_ecx = R32((u32)(r_ebx+0x68u));
    /* 0050cf89: call 0x508d2c */ r_esp -= 4; W32(r_esp, 0x50cf8eu); f_00508d2c();
    /* 0050cf8e: mov eax, 1 */ r_eax = 0x1u;
    /* 0050cf93: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0050cf96: mov dword ptr [ebx + 0x6c], eax */ W32((u32)(r_ebx+0x6cu), r_eax);
L_0050cf99:; BB(0x0050cf99);
    /* 0050cf99: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cf9f: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050cfa4: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x50cfa9u); f_007c1100();
    /* 0050cfa9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cfab: je 0x50d421 */ if (fZ) goto L_0050d421;
L_0050cfb1:; BB(0x0050cfb1);
    /* 0050cfb1: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cfb7: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050cfbc: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50cfc1u); f_007c1160();
    /* 0050cfc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cfc3: je 0x50d421 */ if (fZ) goto L_0050d421;
L_0050cfc9:; BB(0x0050cfc9);
    /* 0050cfc9: mov eax, dword ptr [0x9bb1c8] */ r_eax = R32((u32)(0x9bb1c8u));
    /* 0050cfce: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0050cfd1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050cfd3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050cfd5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050cfd7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050cfd9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050cfdb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050cfdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cfde: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0050cfe0: push 0xa72cd0 */ { u32 v = 0xa72cd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cfe5: push dword ptr [0x9bb1c0] */ { u32 v = R32((u32)(0x9bb1c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050cfeb: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x50cff0u); f_004f743c();
    /* 0050cff0: jmp 0x50d421 */ goto L_0050d421;
L_0050cff5:; BB(0x0050cff5);
    /* 0050cff5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cff8: jne 0x50d421 */ if (!fZ) goto L_0050d421;
L_0050cffe:; BB(0x0050cffe);
    /* 0050cffe: push 0x9202a0 */ { u32 v = 0x9202a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d003: push 0xa0005 */ { u32 v = 0xa0005u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d008: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50d00du); f_0061cdb0();
    /* 0050d00d: push 0x9202b0 */ { u32 v = 0x9202b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d012: push 0xf0008 */ { u32 v = 0xf0008u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d017: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50d01cu); f_0061cdb0();
    /* 0050d01c: push 0x9202cc */ { u32 v = 0x9202ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d021: push 0xf0009 */ { u32 v = 0xf0009u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d026: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50d02bu); f_0061cdb0();
    /* 0050d02b: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d02d: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x50d032u); f_007bfe50();
    /* 0050d032: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050d035: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d037: je 0x50d2a2 */ if (fZ) goto L_0050d2a2;
L_0050d03d:; BB(0x0050d03d);
    /* 0050d03d: mov eax, dword ptr [ebx + 0x74] */ r_eax = R32((u32)(r_ebx+0x74u));
    /* 0050d040: mov edi, dword ptr [eax*4 + 0x9bb1cc] */ r_edi = R32((u32)(r_eax*4+0x9bb1ccu));
    /* 0050d047: mov eax, dword ptr [0xa72cd0] */ r_eax = R32((u32)(0xa72cd0u));
    /* 0050d04c: mov edx, dword ptr [ebx + 0x70] */ r_edx = R32((u32)(r_ebx+0x70u));
    /* 0050d04f: lea ebp, [edx + edx*4] */ r_ebp = (u32)(r_edx+r_edx*4);
    /* 0050d052: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0050d054: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0050d058: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0050d05b: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0050d05d: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0050d05f: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0050d063: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 0050d067: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050d069: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050d06b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0050d06d:; BB(0x0050d06d);
    /* 0050d06d: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0050d06f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d072: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0050d074: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050d077: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050d079: jne 0x50d06d */ if (!fZ) goto L_0050d06d;
L_0050d07b:; BB(0x0050d07b);
    /* 0050d07b: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0050d07f: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0050d082: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0050d086: mov edx, edi */ r_edx = r_edi;
    /* 0050d088: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0050d08b: mov dword ptr [ebp + esi*8 + 0x10], eax */ W32((u32)(r_ebp+r_esi*8+0x10u), r_eax);
    /* 0050d08f: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0050d092: mov edx, ebp */ r_edx = r_ebp;
    /* 0050d094: mov dword ptr [ebp + esi*8 + 0x14], eax */ W32((u32)(r_ebp+r_esi*8+0x14u), r_eax);
    /* 0050d098: mov eax, edi */ r_eax = r_edi;
    /* 0050d09a: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 0050d09d: mov dword ptr [ebp + esi*8 + 0x18], eax */ W32((u32)(r_ebp+r_esi*8+0x18u), r_eax);
    /* 0050d0a1: mov eax, edi */ r_eax = r_edi;
    /* 0050d0a3: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0050d0a6: mov dword ptr [ebp + esi*8 + 0x1c], eax */ W32((u32)(r_ebp+r_esi*8+0x1cu), r_eax);
    /* 0050d0aa: mov eax, edi */ r_eax = r_edi;
    /* 0050d0ac: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 0050d0af: mov dword ptr [ebp + esi*8 + 0x20], eax */ W32((u32)(r_ebp+r_esi*8+0x20u), r_eax);
    /* 0050d0b3: mov eax, edi */ r_eax = r_edi;
    /* 0050d0b5: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 0050d0b8: mov dword ptr [ebp + esi*8 + 0x24], eax */ W32((u32)(r_ebp+r_esi*8+0x24u), r_eax);
    /* 0050d0bc: mov eax, edi */ r_eax = r_edi;
    /* 0050d0be: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 0050d0c1: mov dword ptr [ebp + esi*8 + 0x28], eax */ W32((u32)(r_ebp+r_esi*8+0x28u), r_eax);
    /* 0050d0c5: mov eax, edi */ r_eax = r_edi;
    /* 0050d0c7: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0050d0ca: mov dword ptr [ebp + esi*8 + 0x2c], eax */ W32((u32)(r_ebp+r_esi*8+0x2cu), r_eax);
    /* 0050d0ce: mov eax, edi */ r_eax = r_edi;
    /* 0050d0d0: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0050d0d3: mov dword ptr [ebp + esi*8 + 0x30], eax */ W32((u32)(r_ebp+r_esi*8+0x30u), r_eax);
    /* 0050d0d7: mov eax, edi */ r_eax = r_edi;
    /* 0050d0d9: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0050d0dc: mov dword ptr [ebp + esi*8 + 0x34], eax */ W32((u32)(r_ebp+r_esi*8+0x34u), r_eax);
    /* 0050d0e0: mov eax, edi */ r_eax = r_edi;
    /* 0050d0e2: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 0050d0e5: mov dword ptr [ebp + esi*8 + 0x38], eax */ W32((u32)(r_ebp+r_esi*8+0x38u), r_eax);
    /* 0050d0e9: mov eax, edi */ r_eax = r_edi;
    /* 0050d0eb: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 0050d0ee: mov dword ptr [ebp + esi*8 + 0x3c], eax */ W32((u32)(r_ebp+r_esi*8+0x3cu), r_eax);
    /* 0050d0f2: mov eax, edi */ r_eax = r_edi;
    /* 0050d0f4: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0050d0f7: mov dword ptr [ebp + esi*8 + 0x40], eax */ W32((u32)(r_ebp+r_esi*8+0x40u), r_eax);
    /* 0050d0fb: mov eax, edi */ r_eax = r_edi;
    /* 0050d0fd: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 0050d100: mov dword ptr [ebp + esi*8 + 0x44], eax */ W32((u32)(r_ebp+r_esi*8+0x44u), r_eax);
    /* 0050d104: mov eax, edi */ r_eax = r_edi;
    /* 0050d106: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0050d109: mov dword ptr [ebp + esi*8 + 0x48], eax */ W32((u32)(r_ebp+r_esi*8+0x48u), r_eax);
    /* 0050d10d: mov eax, edi */ r_eax = r_edi;
    /* 0050d10f: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 0050d112: mov dword ptr [ebp + esi*8 + 0x4c], eax */ W32((u32)(r_ebp+r_esi*8+0x4cu), r_eax);
    /* 0050d116: mov eax, edi */ r_eax = r_edi;
    /* 0050d118: mov eax, dword ptr [eax + 0x50] */ r_eax = R32((u32)(r_eax+0x50u));
    /* 0050d11b: mov dword ptr [ebp + esi*8 + 0x50], eax */ W32((u32)(r_ebp+r_esi*8+0x50u), r_eax);
    /* 0050d11f: mov eax, edi */ r_eax = r_edi;
    /* 0050d121: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 0050d124: mov dword ptr [ebp + esi*8 + 0x54], eax */ W32((u32)(r_ebp+r_esi*8+0x54u), r_eax);
    /* 0050d128: mov eax, edi */ r_eax = r_edi;
    /* 0050d12a: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 0050d12d: mov dword ptr [ebp + esi*8 + 0x58], eax */ W32((u32)(r_ebp+r_esi*8+0x58u), r_eax);
    /* 0050d131: mov eax, edi */ r_eax = r_edi;
    /* 0050d133: mov eax, dword ptr [eax + 0x5c] */ r_eax = R32((u32)(r_eax+0x5cu));
    /* 0050d136: mov dword ptr [ebp + esi*8 + 0x5c], eax */ W32((u32)(r_ebp+r_esi*8+0x5cu), r_eax);
    /* 0050d13a: mov eax, edi */ r_eax = r_edi;
    /* 0050d13c: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 0050d13f: mov dword ptr [ebp + esi*8 + 0x60], eax */ W32((u32)(r_ebp+r_esi*8+0x60u), r_eax);
    /* 0050d143: mov eax, edi */ r_eax = r_edi;
    /* 0050d145: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 0050d148: mov dword ptr [ebp + esi*8 + 0x64], eax */ W32((u32)(r_ebp+r_esi*8+0x64u), r_eax);
    /* 0050d14c: mov eax, edi */ r_eax = r_edi;
    /* 0050d14e: mov eax, dword ptr [eax + 0x68] */ r_eax = R32((u32)(r_eax+0x68u));
    /* 0050d151: mov dword ptr [ebp + esi*8 + 0x68], eax */ W32((u32)(r_ebp+r_esi*8+0x68u), r_eax);
    /* 0050d155: mov eax, edi */ r_eax = r_edi;
    /* 0050d157: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 0050d15a: mov dword ptr [ebp + esi*8 + 0x6c], eax */ W32((u32)(r_ebp+r_esi*8+0x6cu), r_eax);
    /* 0050d15e: mov eax, edi */ r_eax = r_edi;
    /* 0050d160: mov eax, dword ptr [eax + 0x70] */ r_eax = R32((u32)(r_eax+0x70u));
    /* 0050d163: mov dword ptr [ebp + esi*8 + 0x70], eax */ W32((u32)(r_ebp+r_esi*8+0x70u), r_eax);
    /* 0050d167: mov eax, edi */ r_eax = r_edi;
    /* 0050d169: mov eax, dword ptr [eax + 0x74] */ r_eax = R32((u32)(r_eax+0x74u));
    /* 0050d16c: mov dword ptr [ebp + esi*8 + 0x74], eax */ W32((u32)(r_ebp+r_esi*8+0x74u), r_eax);
    /* 0050d170: mov eax, edi */ r_eax = r_edi;
    /* 0050d172: mov eax, dword ptr [eax + 0x78] */ r_eax = R32((u32)(r_eax+0x78u));
    /* 0050d175: mov dword ptr [ebp + esi*8 + 0x78], eax */ W32((u32)(r_ebp+r_esi*8+0x78u), r_eax);
    /* 0050d179: mov eax, edi */ r_eax = r_edi;
    /* 0050d17b: mov eax, dword ptr [eax + 0x7c] */ r_eax = R32((u32)(r_eax+0x7cu));
    /* 0050d17e: mov dword ptr [ebp + esi*8 + 0x7c], eax */ W32((u32)(r_ebp+r_esi*8+0x7cu), r_eax);
    /* 0050d182: mov eax, edi */ r_eax = r_edi;
    /* 0050d184: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 0050d18a: mov dword ptr [ebp + esi*8 + 0x80], eax */ W32((u32)(r_ebp+r_esi*8+0x80u), r_eax);
    /* 0050d191: mov eax, edi */ r_eax = r_edi;
    /* 0050d193: mov eax, dword ptr [eax + 0x84] */ r_eax = R32((u32)(r_eax+0x84u));
    /* 0050d199: mov dword ptr [ebp + esi*8 + 0x84], eax */ W32((u32)(r_ebp+r_esi*8+0x84u), r_eax);
    /* 0050d1a0: mov eax, edi */ r_eax = r_edi;
    /* 0050d1a2: movzx eax, byte ptr [eax + 0x88] */ r_eax = (u32)R8((u32)(r_eax+0x88u));
    /* 0050d1a9: mov byte ptr [ebp + esi*8 + 0x88], al */ W8((u32)(r_ebp+r_esi*8+0x88u), (u8)r_eax);
    /* 0050d1b0: mov eax, edi */ r_eax = r_edi;
    /* 0050d1b2: movzx eax, byte ptr [eax + 0x89] */ r_eax = (u32)R8((u32)(r_eax+0x89u));
    /* 0050d1b9: mov byte ptr [ebp + esi*8 + 0x89], al */ W8((u32)(r_ebp+r_esi*8+0x89u), (u8)r_eax);
    /* 0050d1c0: mov eax, edi */ r_eax = r_edi;
    /* 0050d1c2: movzx eax, byte ptr [eax + 0x8a] */ r_eax = (u32)R8((u32)(r_eax+0x8au));
    /* 0050d1c9: mov byte ptr [ebp + esi*8 + 0x8a], al */ W8((u32)(r_ebp+r_esi*8+0x8au), (u8)r_eax);
    /* 0050d1d0: mov eax, edi */ r_eax = r_edi;
    /* 0050d1d2: movzx eax, byte ptr [eax + 0x8b] */ r_eax = (u32)R8((u32)(r_eax+0x8bu));
    /* 0050d1d9: mov byte ptr [ebp + esi*8 + 0x8b], al */ W8((u32)(r_ebp+r_esi*8+0x8bu), (u8)r_eax);
    /* 0050d1e0: mov eax, edi */ r_eax = r_edi;
    /* 0050d1e2: movzx eax, byte ptr [eax + 0x8c] */ r_eax = (u32)R8((u32)(r_eax+0x8cu));
    /* 0050d1e9: mov byte ptr [ebp + esi*8 + 0x8c], al */ W8((u32)(r_ebp+r_esi*8+0x8cu), (u8)r_eax);
    /* 0050d1f0: mov eax, edi */ r_eax = r_edi;
    /* 0050d1f2: movzx eax, byte ptr [eax + 0x8d] */ r_eax = (u32)R8((u32)(r_eax+0x8du));
    /* 0050d1f9: mov byte ptr [ebp + esi*8 + 0x8d], al */ W8((u32)(r_ebp+r_esi*8+0x8du), (u8)r_eax);
    /* 0050d200: mov eax, edi */ r_eax = r_edi;
    /* 0050d202: movzx eax, byte ptr [eax + 0x8e] */ r_eax = (u32)R8((u32)(r_eax+0x8eu));
    /* 0050d209: mov byte ptr [ebp + esi*8 + 0x8e], al */ W8((u32)(r_ebp+r_esi*8+0x8eu), (u8)r_eax);
    /* 0050d210: mov eax, edi */ r_eax = r_edi;
    /* 0050d212: movzx eax, byte ptr [eax + 0x8f] */ r_eax = (u32)R8((u32)(r_eax+0x8fu));
    /* 0050d219: mov byte ptr [ebp + esi*8 + 0x8f], al */ W8((u32)(r_ebp+r_esi*8+0x8fu), (u8)r_eax);
    /* 0050d220: mov eax, edi */ r_eax = r_edi;
    /* 0050d222: movzx eax, byte ptr [eax + 0x90] */ r_eax = (u32)R8((u32)(r_eax+0x90u));
    /* 0050d229: mov byte ptr [ebp + esi*8 + 0x90], al */ W8((u32)(r_ebp+r_esi*8+0x90u), (u8)r_eax);
    /* 0050d230: mov eax, edi */ r_eax = r_edi;
    /* 0050d232: movzx eax, byte ptr [eax + 0x91] */ r_eax = (u32)R8((u32)(r_eax+0x91u));
    /* 0050d239: mov byte ptr [ebp + esi*8 + 0x91], al */ W8((u32)(r_ebp+r_esi*8+0x91u), (u8)r_eax);
    /* 0050d240: mov eax, edi */ r_eax = r_edi;
    /* 0050d242: movzx eax, byte ptr [eax + 0x92] */ r_eax = (u32)R8((u32)(r_eax+0x92u));
    /* 0050d249: mov byte ptr [ebp + esi*8 + 0x92], al */ W8((u32)(r_ebp+r_esi*8+0x92u), (u8)r_eax);
    /* 0050d250: mov eax, edi */ r_eax = r_edi;
    /* 0050d252: movzx eax, byte ptr [eax + 0x93] */ r_eax = (u32)R8((u32)(r_eax+0x93u));
    /* 0050d259: mov byte ptr [ebp + esi*8 + 0x93], al */ W8((u32)(r_ebp+r_esi*8+0x93u), (u8)r_eax);
    /* 0050d260: mov eax, edi */ r_eax = r_edi;
    /* 0050d262: movzx eax, byte ptr [eax + 0x94] */ r_eax = (u32)R8((u32)(r_eax+0x94u));
    /* 0050d269: mov byte ptr [ebp + esi*8 + 0x94], al */ W8((u32)(r_ebp+r_esi*8+0x94u), (u8)r_eax);
    /* 0050d270: mov eax, edi */ r_eax = r_edi;
    /* 0050d272: movzx eax, byte ptr [eax + 0x95] */ r_eax = (u32)R8((u32)(r_eax+0x95u));
    /* 0050d279: mov byte ptr [ebp + esi*8 + 0x95], al */ W8((u32)(r_ebp+r_esi*8+0x95u), (u8)r_eax);
    /* 0050d280: mov eax, edi */ r_eax = r_edi;
    /* 0050d282: movzx eax, byte ptr [eax + 0x96] */ r_eax = (u32)R8((u32)(r_eax+0x96u));
    /* 0050d289: mov byte ptr [ebp + esi*8 + 0x96], al */ W8((u32)(r_ebp+r_esi*8+0x96u), (u8)r_eax);
    /* 0050d290: mov eax, edi */ r_eax = r_edi;
    /* 0050d292: mov ebp, esi */ r_ebp = r_esi;
    /* 0050d294: movzx eax, byte ptr [eax + 0x97] */ r_eax = (u32)R8((u32)(r_eax+0x97u));
    /* 0050d29b: mov byte ptr [edx + ebp*8 + 0x97], al */ W8((u32)(r_edx+r_ebp*8+0x97u), (u8)r_eax);
L_0050d2a2:; BB(0x0050d2a2);
    /* 0050d2a2: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d2a4: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x50d2a9u); f_007bfe50();
    /* 0050d2a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050d2aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d2ac: je 0x50d2b2 */ if (fZ) goto L_0050d2b2;
L_0050d2ae:; BB(0x0050d2ae);
    /* 0050d2ae: add dword ptr [ebx + 0x74], 1 */ { u32 ad = (u32)(r_ebx+0x74u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0050d2b2:; BB(0x0050d2b2);
    /* 0050d2b2: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d2b4: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x50d2b9u); f_007bfe50();
    /* 0050d2b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050d2ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d2bc: je 0x50d2c6 */ if (fZ) goto L_0050d2c6;
L_0050d2be:; BB(0x0050d2be);
    /* 0050d2be: mov ebp, dword ptr [ebx + 0x74] */ r_ebp = R32((u32)(r_ebx+0x74u));
    /* 0050d2c1: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0050d2c4: jmp 0x50d2c9 */ goto L_0050d2c9;
L_0050d2c6:; BB(0x0050d2c6);
    /* 0050d2c6: mov ebp, dword ptr [ebx + 0x74] */ r_ebp = R32((u32)(r_ebx+0x74u));
L_0050d2c9:; BB(0x0050d2c9);
    /* 0050d2c9: mov eax, 2 */ r_eax = 0x2u;
    /* 0050d2ce: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d2d1: mov edx, 0 */ r_edx = 0x0u;
    /* 0050d2d6: jl 0x50d2da */ if ((fS!=fO)) goto L_0050d2da;
L_0050d2d8:; BB(0x0050d2d8);
    /* 0050d2d8: mov ebp, eax */ r_ebp = r_eax;
L_0050d2da:; BB(0x0050d2da);
    /* 0050d2da: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 0050d2e0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d2e2: jg 0x50d2e6 */ if ((!fZ&&fS==fO)) goto L_0050d2e6;
L_0050d2e4:; BB(0x0050d2e4);
    /* 0050d2e4: mov ebp, edx */ r_ebp = r_edx;
L_0050d2e6:; BB(0x0050d2e6);
    /* 0050d2e6: mov dword ptr [ebx + 0x74], ebp */ W32((u32)(r_ebx+0x74u), r_ebp);
    /* 0050d2e9: cmp ebp, dword ptr [eax + 0x10] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d2ec: je 0x50d2f1 */ if (fZ) goto L_0050d2f1;
L_0050d2ee:; BB(0x0050d2ee);
    /* 0050d2ee: mov dword ptr [eax + 0x10], ebp */ W32((u32)(r_eax+0x10u), r_ebp);
L_0050d2f1:; BB(0x0050d2f1);
    /* 0050d2f1: mov eax, 0x920194 */ r_eax = 0x920194u;
    /* 0050d2f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050d2f8: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 0050d2fb: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 0050d2fe: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 0050d301: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0050d305: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0050d308: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0050d30c: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0050d310: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0050d314: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0050d318: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0050d31b: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0050d31f: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0050d322: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0050d326: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0050d329: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0050d32d: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0050d330: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0050d334: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0050d337: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 0050d33a: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0050d33e: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0050d342: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050d348: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050d34d: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50d352u); f_007c1160();
    /* 0050d352: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d354: jne 0x50d362 */ if (!fZ) goto L_0050d362;
L_0050d356:; BB(0x0050d356);
    /* 0050d356: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 0050d358: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x50d35du); f_007bfe50();
    /* 0050d35d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050d35e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d360: je 0x50d37b */ if (fZ) goto L_0050d37b;
L_0050d362:; BB(0x0050d362);
    /* 0050d362: mov eax, dword ptr [ebx + 0x7c] */ r_eax = R32((u32)(r_ebx+0x7cu));
    /* 0050d365: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d368: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d36b: jl 0x50d376 */ if ((fS!=fO)) goto L_0050d376;
L_0050d36d:; BB(0x0050d36d);
    /* 0050d36d: mov dword ptr [ebx + 0x7c], 0 */ W32((u32)(r_ebx+0x7cu), 0x0u);
    /* 0050d374: jmp 0x50d3ac */ goto L_0050d3ac;
L_0050d376:; BB(0x0050d376);
    /* 0050d376: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 0050d379: jmp 0x50d3ac */ goto L_0050d3ac;
L_0050d37b:; BB(0x0050d37b);
    /* 0050d37b: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050d381: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050d386: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50d38bu); f_007c1160();
    /* 0050d38b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d38d: jne 0x50d39b */ if (!fZ) goto L_0050d39b;
L_0050d38f:; BB(0x0050d38f);
    /* 0050d38f: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d391: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x50d396u); f_007bfe50();
    /* 0050d396: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050d397: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d399: je 0x50d3ac */ if (fZ) goto L_0050d3ac;
L_0050d39b:; BB(0x0050d39b);
    /* 0050d39b: mov eax, dword ptr [ebx + 0x7c] */ r_eax = R32((u32)(r_ebx+0x7cu));
    /* 0050d39e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d3a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0050d3a3: jl 0x50d49c */ if ((fS!=fO)) goto L_0050d49c;
L_0050d3a9:; BB(0x0050d3a9);
    /* 0050d3a9: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
L_0050d3ac:; BB(0x0050d3ac);
    /* 0050d3ac: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d3ae: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x50d3b3u); f_007bfe50();
    /* 0050d3b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050d3b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d3b6: je 0x50d3c3 */ if (fZ) goto L_0050d3c3;
L_0050d3b8:; BB(0x0050d3b8);
    /* 0050d3b8: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 0050d3bb: xor eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050d3be: mov dword ptr [ebx + 0x64], eax */ W32((u32)(r_ebx+0x64u), r_eax);
    /* 0050d3c1: jmp 0x50d3c6 */ goto L_0050d3c6;
L_0050d3c3:; BB(0x0050d3c3);
    /* 0050d3c3: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
L_0050d3c6:; BB(0x0050d3c6);
    /* 0050d3c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d3c8: jne 0x50d4a8 */ if (!fZ) goto L_0050d4a8;
L_0050d3ce:; BB(0x0050d3ce);
    /* 0050d3ce: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0050d3d0:; BB(0x0050d3d0);
    /* 0050d3d0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0050d3d2: call dword ptr [esp + ebp*4 + 0xc] */ { u32 t = R32((u32)(r_esp+r_ebp*4+0xcu)); r_esp -= 4; W32(r_esp, 0x50d3d6u); call_ind(t); }
    /* 0050d3d6: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0050d3d9: cmp ebp, 0xb */ {  u32 a = r_ebp; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d3dc: jl 0x50d3d0 */ if ((fS!=fO)) goto L_0050d3d0;
L_0050d3de:; BB(0x0050d3de);
    /* 0050d3de: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050d3e4: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050d3e9: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x50d3eeu); f_007c1100();
    /* 0050d3ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d3f0: je 0x50d421 */ if (fZ) goto L_0050d421;
L_0050d3f2:; BB(0x0050d3f2);
    /* 0050d3f2: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050d3f8: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050d3fd: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50d402u); f_007c1160();
    /* 0050d402: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d404: je 0x50d421 */ if (fZ) goto L_0050d421;
L_0050d406:; BB(0x0050d406);
    /* 0050d406: mov dword ptr [ebx + 0x6c], 0 */ W32((u32)(r_ebx+0x6cu), 0x0u);
    /* 0050d40d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d40f: lea eax, [ebx + 0x50] */ r_eax = (u32)(r_ebx+0x50u);
    /* 0050d412: push dword ptr [ebx + 0x80] */ { u32 v = R32((u32)(r_ebx+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050d418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d419: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x50d41eu); f_00858900();
    /* 0050d41e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050d421:; BB(0x0050d421);
    /* 0050d421: push 0x59 */ { u32 v = 0x59u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d423: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x50d428u); f_007bfe50();
    /* 0050d428: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050d429: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d42b: je 0x50d436 */ if (fZ) goto L_0050d436;
L_0050d42d:; BB(0x0050d42d);
    /* 0050d42d: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 0050d430: xor eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050d433: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
L_0050d436:; BB(0x0050d436);
    /* 0050d436: mov ecx, dword ptr [ebx + 0x68] */ r_ecx = R32((u32)(r_ebx+0x68u));
    /* 0050d439: lea eax, [ebx + 0x1c] */ r_eax = (u32)(r_ebx+0x1cu);
    /* 0050d43c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d43d: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x50d442u); f_00508db8();
    /* 0050d442: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 0050d445: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d447: jne 0x50d46d */ if (!fZ) goto L_0050d46d;
L_0050d449:; BB(0x0050d449);
    /* 0050d449: mov ecx, dword ptr [ebx + 0x68] */ r_ecx = R32((u32)(r_ebx+0x68u));
    /* 0050d44c: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x50d451u); f_00508f48();
    /* 0050d451: push dword ptr [0xa0f698] */ { u32 v = R32((u32)(0xa0f698u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050d457: mov ecx, 0xaae7fc */ r_ecx = 0xaae7fcu;
    /* 0050d45c: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x50d461u); f_007c1160();
    /* 0050d461: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d463: je 0x50d46d */ if (fZ) goto L_0050d46d;
L_0050d465:; BB(0x0050d465);
    /* 0050d465: mov ecx, dword ptr [ebx + 0x68] */ r_ecx = R32((u32)(r_ebx+0x68u));
    /* 0050d468: call 0x509580 */ r_esp -= 4; W32(r_esp, 0x50d46du); f_00509580();
L_0050d46d:; BB(0x0050d46d);
    /* 0050d46d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0050d46f: call 0x50d4b4 */ r_esp -= 4; W32(r_esp, 0x50d474u); f_0050d4b4();
    /* 0050d474: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050d477: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050d478: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d479: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050d47a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050d47b: ret  */ FN_RET(0x0050cd6c); r_esp += 4; return;
L_0050d47c:; BB(0x0050d47c);
    /* 0050d47c: mov eax, dword ptr [0x9bb1c8] */ r_eax = R32((u32)(0x9bb1c8u));
    /* 0050d481: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d484: mov dword ptr [ebx + 0x70], eax */ W32((u32)(r_ebx+0x70u), r_eax);
    /* 0050d487: jmp 0x50ce74 */ goto L_0050ce74;
L_0050d48c:; BB(0x0050d48c);
    /* 0050d48c: mov eax, dword ptr [0x9bb1c8] */ r_eax = R32((u32)(0x9bb1c8u));
    /* 0050d491: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d494: mov dword ptr [ebx + 0x70], eax */ W32((u32)(r_ebx+0x70u), r_eax);
    /* 0050d497: jmp 0x50ce74 */ goto L_0050ce74;
L_0050d49c:; BB(0x0050d49c);
    /* 0050d49c: mov dword ptr [ebx + 0x7c], 0xa */ W32((u32)(r_ebx+0x7cu), 0xau);
    /* 0050d4a3: jmp 0x50d3ac */ goto L_0050d3ac;
L_0050d4a8:; BB(0x0050d4a8);
    /* 0050d4a8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0050d4aa: call 0x50c144 */ r_esp -= 4; W32(r_esp, 0x50d4afu); f_0050c144();
    /* 0050d4af: jmp 0x50d3ce */ goto L_0050d3ce;
}

