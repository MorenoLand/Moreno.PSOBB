#include "protos.h"

void f_005df020(void) /* sub_5DF020 */
{
    FN_ENTER(0x005df020);
    /* 005df020: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005df021: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df024: mov edi, ecx */ r_edi = r_ecx;
    /* 005df026: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005df02d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df02f: jne 0x5df03e */ if (!fZ) goto L_005df03e;
L_005df031:; BB(0x005df031);
    /* 005df031: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 005df037: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df03c: jne 0x5df043 */ if (!fZ) goto L_005df043;
L_005df03e:; BB(0x005df03e);
    /* 005df03e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005df041: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005df042: ret  */ FN_RET(0x005df020); r_esp += 4; return;
L_005df043:; BB(0x005df043);
    /* 005df043: mov byte ptr [esp], 3 */ W8((u32)(r_esp), 0x3u);
    /* 005df047: mov ecx, edi */ r_ecx = r_edi;
    /* 005df049: mov byte ptr [esp + 1], 0x17 */ W8((u32)(r_esp+0x1u), 0x17u);
    /* 005df04e: call 0x5c37bc */ r_esp -= 4; W32(r_esp, 0x5df053u); f_005c37bc();
    /* 005df053: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 005df057: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005df05a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005df05b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df05c: call 0x5c4600 */ r_esp -= 4; W32(r_esp, 0x5df061u); f_005c4600();
    /* 005df061: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df064: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005df067: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005df068: ret  */ FN_RET(0x005df020); r_esp += 4; return;
}

void f_005df06c(void) /* sub_5DF06C */
{
    FN_ENTER(0x005df06c);
    /* 005df06c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df06d: mov ebp, esp */ r_ebp = r_esp;
    /* 005df06f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df071: push 0x8daef0 */ { u32 v = 0x8daef0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df076: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005df07c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df07d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005df084: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df087: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005df08a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005df08d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005df090: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005df093: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df096: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df098: je 0x5df0ef */ if (fZ) goto L_005df0ef;
L_005df09a:; BB(0x005df09a);
    /* 005df09a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005df0a1: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005df0a6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5df0abu); f_005caba4();
    /* 005df0ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005df0ac: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005df0af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df0b1: je 0x5df0eb */ if (fZ) goto L_005df0eb;
L_005df0b3:; BB(0x005df0b3);
    /* 005df0b3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005df0ba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005df0c1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df0c4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df0c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df0c8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df0ce: call 0x5df100 */ r_esp -= 4; W32(r_esp, 0x5df0d3u); f_005df100();
    /* 005df0d3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df0d6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005df0dd:; BB(0x005df0dd);
    /* 005df0dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df0e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df0e7: mov esp, ebp */ r_esp = r_ebp;
    /* 005df0e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df0ea: ret  */ FN_RET(0x005df06c); r_esp += 4; return;
L_005df0eb:; BB(0x005df0eb);
    /* 005df0eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df0ed: jmp 0x5df0dd */ goto L_005df0dd;
L_005df0ef:; BB(0x005df0ef);
    /* 005df0ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df0f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df0f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df0fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005df0fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df0fe: ret  */ FN_RET(0x005df06c); r_esp += 4; return;
}

void f_005df100(void) /* sub_5DF100 */
{
    FN_ENTER(0x005df100);
    /* 005df100: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005df101: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005df103: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df107: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df10b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005df10d: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5df112u); f_005de2d8();
    /* 005df112: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 005df118: mov dword ptr [ebx], 0xb0e700 */ W32((u32)(r_ebx), 0xb0e700u);
    /* 005df11e: and edx, 0xffffffef */ {  u32 a = r_edx; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df121: mov dword ptr [ebx + 0xdc], edx */ W32((u32)(r_ebx+0xdcu), r_edx);
    /* 005df127: mov eax, ebx */ r_eax = r_ebx;
    /* 005df129: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005df12a: ret 8 */ FN_RET(0x005df100); r_esp += 12; return;
}

void f_005df130(void) /* sub_5DF130 */
{
    FN_ENTER(0x005df130);
    /* 005df130: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005df131: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005df133: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005df135: call 0x5df154 */ r_esp -= 4; W32(r_esp, 0x5df13au); f_005df154();
    /* 005df13a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005df13e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df140: jne 0x5df146 */ if (!fZ) goto L_005df146;
L_005df142:; BB(0x005df142);
    /* 005df142: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005df143: ret 4 */ FN_RET(0x005df130); r_esp += 8; return;
L_005df146:; BB(0x005df146);
    /* 005df146: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005df147: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5df14cu); f_005c2f74();
    /* 005df14c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005df14d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005df14e: ret 4 */ FN_RET(0x005df130); r_esp += 8; return;
}

void f_005df154(void) /* sub_5DF154 */
{
    FN_ENTER(0x005df154);
    /* 005df154: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df155: mov ebp, esp */ r_ebp = r_esp;
    /* 005df157: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df159: push 0x8daf1a */ { u32 v = 0x8daf1au; r_esp -= 4; W32(r_esp, v); }
    /* 005df15e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005df164: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df165: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005df16c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df16f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005df172: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005df175: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005df178: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005df17b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005df17e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df181: mov dword ptr [eax], 0xb0e820 */ W32((u32)(r_eax), 0xb0e820u);
    /* 005df187: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005df18a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df18d: mov dword ptr [ecx], 0xb0dc40 */ W32((u32)(r_ecx), 0xb0dc40u);
    /* 005df193: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005df19a: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5df19fu); f_005c2e50();
    /* 005df19f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df1a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df1a9: mov esp, ebp */ r_esp = r_ebp;
    /* 005df1ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df1ac: ret  */ FN_RET(0x005df154); r_esp += 4; return;
}

void f_005df1b0(void) /* sub_5DF1B0 */
{
    FN_ENTER(0x005df1b0);
    /* 005df1b0: mov ecx, dword ptr [ecx + 0xf8] */ r_ecx = R32((u32)(r_ecx+0xf8u));
    /* 005df1b6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005df1b8: call dword ptr [eax + 0xd0] */ { u32 t = R32((u32)(r_eax+0xd0u)); r_esp -= 4; W32(r_esp, 0x5df1beu); call_ind(t); }
    /* 005df1be: ret  */ FN_RET(0x005df1b0); r_esp += 4; return;
}

void f_005df1c0(void) /* sub_5DF1C0 */
{
    FN_ENTER(0x005df1c0);
    /* 005df1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df1c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df1c5: push 0x8daf40 */ { u32 v = 0x8daf40u; r_esp -= 4; W32(r_esp, v); }
    /* 005df1ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005df1d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df1d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005df1d8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df1db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005df1de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005df1e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005df1e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005df1e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df1ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df1ec: je 0x5df243 */ if (fZ) goto L_005df243;
L_005df1ee:; BB(0x005df1ee);
    /* 005df1ee: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005df1f5: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005df1fa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5df1ffu); f_005caba4();
    /* 005df1ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005df200: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005df203: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df205: je 0x5df23f */ if (fZ) goto L_005df23f;
L_005df207:; BB(0x005df207);
    /* 005df207: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005df20e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005df215: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df218: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df21c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df222: call 0x5df254 */ r_esp -= 4; W32(r_esp, 0x5df227u); f_005df254();
    /* 005df227: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df22a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005df231:; BB(0x005df231);
    /* 005df231: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df234: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df23b: mov esp, ebp */ r_esp = r_ebp;
    /* 005df23d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df23e: ret  */ FN_RET(0x005df1c0); r_esp += 4; return;
L_005df23f:; BB(0x005df23f);
    /* 005df23f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df241: jmp 0x5df231 */ goto L_005df231;
L_005df243:; BB(0x005df243);
    /* 005df243: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df245: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df248: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df24f: mov esp, ebp */ r_esp = r_ebp;
    /* 005df251: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df252: ret  */ FN_RET(0x005df1c0); r_esp += 4; return;
}

void f_005df254(void) /* sub_5DF254 */
{
    FN_ENTER(0x005df254);
    /* 005df254: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df255: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005df257: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df25b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df25f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005df261: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5df266u); f_005de2d8();
    /* 005df266: mov dword ptr [ebp], 0xb0e820 */ W32((u32)(r_ebp), 0xb0e820u);
    /* 005df26d: mov eax, ebp */ r_eax = r_ebp;
    /* 005df26f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df270: ret 8 */ FN_RET(0x005df254); r_esp += 12; return;
}

void f_005df274(void) /* sub_5DF274 */
{
    FN_ENTER(0x005df274);
    /* 005df274: mov dword ptr [0xa8db78], 0x3f800000 */ W32((u32)(0xa8db78u), 0x3f800000u);
    /* 005df27e: mov dword ptr [0xa8db7c], 0x41000000 */ W32((u32)(0xa8db7cu), 0x41000000u);
    /* 005df288: mov dword ptr [0xa8db80], 0x3fc00000 */ W32((u32)(0xa8db80u), 0x3fc00000u);
    /* 005df292: ret  */ FN_RET(0x005df274); r_esp += 4; return;
}

void f_005df294(void) /* sub_5DF294 */
{
    FN_ENTER(0x005df294);
    /* 005df294: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005df295: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005df297: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005df299: call 0x5df2b8 */ r_esp -= 4; W32(r_esp, 0x5df29eu); f_005df2b8();
    /* 005df29e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005df2a2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df2a4: jne 0x5df2aa */ if (!fZ) goto L_005df2aa;
L_005df2a6:; BB(0x005df2a6);
    /* 005df2a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005df2a7: ret 4 */ FN_RET(0x005df294); r_esp += 8; return;
L_005df2aa:; BB(0x005df2aa);
    /* 005df2aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005df2ab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5df2b0u); f_005c2f74();
    /* 005df2b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005df2b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005df2b2: ret 4 */ FN_RET(0x005df294); r_esp += 8; return;
}

void f_005df2b8(void) /* sub_5DF2B8 */
{
    FN_ENTER(0x005df2b8);
    /* 005df2b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df2b9: mov ebp, esp */ r_ebp = r_esp;
    /* 005df2bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df2bd: push 0x8daf6a */ { u32 v = 0x8daf6au; r_esp -= 4; W32(r_esp, v); }
    /* 005df2c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005df2c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df2c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005df2d0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df2d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005df2d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005df2d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005df2dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005df2df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005df2e2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df2e5: mov dword ptr [eax], 0xb0e940 */ W32((u32)(r_eax), 0xb0e940u);
    /* 005df2eb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005df2ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df2f1: mov dword ptr [ecx], 0xb0dc40 */ W32((u32)(r_ecx), 0xb0dc40u);
    /* 005df2f7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005df2fe: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5df303u); f_005c2e50();
    /* 005df303: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df306: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df30d: mov esp, ebp */ r_esp = r_ebp;
    /* 005df30f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df310: ret  */ FN_RET(0x005df2b8); r_esp += 4; return;
}

void f_005df314(void) /* sub_5DF314 */
{
    FN_ENTER(0x005df314);
    /* 005df314: push dword ptr [ecx + 0xf8] */ { u32 v = R32((u32)(r_ecx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005df31a: call 0x5de664 */ r_esp -= 4; W32(r_esp, 0x5df31fu); f_005de664();
    /* 005df31f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005df320: ret  */ FN_RET(0x005df314); r_esp += 4; return;
}

void f_005df324(void) /* sub_5DF324 */
{
    FN_ENTER(0x005df324);
    /* 005df324: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df325: mov ebp, esp */ r_ebp = r_esp;
    /* 005df327: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df329: push 0x8daf90 */ { u32 v = 0x8daf90u; r_esp -= 4; W32(r_esp, v); }
    /* 005df32e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005df334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df335: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005df33c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df33f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005df342: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005df345: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005df348: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005df34b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df34e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df350: je 0x5df3a7 */ if (fZ) goto L_005df3a7;
L_005df352:; BB(0x005df352);
    /* 005df352: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005df359: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005df35e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5df363u); f_005caba4();
    /* 005df363: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005df364: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005df367: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df369: je 0x5df3a3 */ if (fZ) goto L_005df3a3;
L_005df36b:; BB(0x005df36b);
    /* 005df36b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005df372: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005df379: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df37c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df37f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df380: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df386: call 0x5df3b8 */ r_esp -= 4; W32(r_esp, 0x5df38bu); f_005df3b8();
    /* 005df38b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df38e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005df395:; BB(0x005df395);
    /* 005df395: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df398: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df39f: mov esp, ebp */ r_esp = r_ebp;
    /* 005df3a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df3a2: ret  */ FN_RET(0x005df324); r_esp += 4; return;
L_005df3a3:; BB(0x005df3a3);
    /* 005df3a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df3a5: jmp 0x5df395 */ goto L_005df395;
L_005df3a7:; BB(0x005df3a7);
    /* 005df3a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df3a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df3ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df3b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005df3b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df3b6: ret  */ FN_RET(0x005df324); r_esp += 4; return;
}

void f_005df3b8(void) /* sub_5DF3B8 */
{
    FN_ENTER(0x005df3b8);
    /* 005df3b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df3b9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005df3bb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df3bf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df3c3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005df3c5: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5df3cau); f_005de2d8();
    /* 005df3ca: mov dword ptr [ebp], 0xb0e940 */ W32((u32)(r_ebp), 0xb0e940u);
    /* 005df3d1: mov eax, ebp */ r_eax = r_ebp;
    /* 005df3d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df3d4: ret 8 */ FN_RET(0x005df3b8); r_esp += 12; return;
}

void f_005df3d8(void) /* sub_5DF3D8 */
{
    FN_ENTER(0x005df3d8);
    /* 005df3d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005df3d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005df3db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005df3dd: call 0x5df3fc */ r_esp -= 4; W32(r_esp, 0x5df3e2u); f_005df3fc();
    /* 005df3e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005df3e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df3e8: jne 0x5df3ee */ if (!fZ) goto L_005df3ee;
L_005df3ea:; BB(0x005df3ea);
    /* 005df3ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005df3eb: ret 4 */ FN_RET(0x005df3d8); r_esp += 8; return;
L_005df3ee:; BB(0x005df3ee);
    /* 005df3ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005df3ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5df3f4u); f_005c2f74();
    /* 005df3f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005df3f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005df3f6: ret 4 */ FN_RET(0x005df3d8); r_esp += 8; return;
}

void f_005df3fc(void) /* sub_5DF3FC */
{
    FN_ENTER(0x005df3fc);
    /* 005df3fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df3fd: mov ebp, esp */ r_ebp = r_esp;
    /* 005df3ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df401: push 0x8dafba */ { u32 v = 0x8dafbau; r_esp -= 4; W32(r_esp, v); }
    /* 005df406: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005df40c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df40d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005df414: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df417: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005df41a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005df41d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005df420: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005df423: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005df426: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df429: mov dword ptr [eax], 0xb0ea60 */ W32((u32)(r_eax), 0xb0ea60u);
    /* 005df42f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005df432: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df435: mov dword ptr [ecx], 0xb0dc40 */ W32((u32)(r_ecx), 0xb0dc40u);
    /* 005df43b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005df442: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5df447u); f_005c2e50();
    /* 005df447: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df44a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df451: mov esp, ebp */ r_esp = r_ebp;
    /* 005df453: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df454: ret  */ FN_RET(0x005df3fc); r_esp += 4; return;
}

void f_005df458(void) /* sub_5DF458 */
{
    FN_ENTER(0x005df458);
    /* 005df458: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005df459: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005df45b: movzx eax, byte ptr [ebx + 0xf4] */ r_eax = (u32)R8((u32)(r_ebx+0xf4u));
    /* 005df462: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df464: je 0x5df55c */ if (fZ) goto L_005df55c;
L_005df46a:; BB(0x005df46a);
    /* 005df46a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df46d: je 0x5df536 */ if (fZ) goto L_005df536;
L_005df473:; BB(0x005df473);
    /* 005df473: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df476: je 0x5df527 */ if (fZ) goto L_005df527;
L_005df47c:; BB(0x005df47c);
    /* 005df47c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df47f: je 0x5df4fd */ if (fZ) goto L_005df4fd;
L_005df481:; BB(0x005df481);
    /* 005df481: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df484: je 0x5df4ae */ if (fZ) goto L_005df4ae;
L_005df486:; BB(0x005df486);
    /* 005df486: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df489: jne 0x5df49a */ if (!fZ) goto L_005df49a;
L_005df48b:; BB(0x005df48b);
    /* 005df48b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005df48d: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005df493: call 0x691cc4 */ r_esp -= 4; W32(r_esp, 0x5df498u); f_00691cc4();
    /* 005df498: jmp 0x5df4ed */ goto L_005df4ed;
L_005df49a:; BB(0x005df49a);
    /* 005df49a: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df49d: jne 0x5df4ed */ if (!fZ) goto L_005df4ed;
L_005df49f:; BB(0x005df49f);
    /* 005df49f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005df4a1: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005df4a7: call 0x691d34 */ r_esp -= 4; W32(r_esp, 0x5df4acu); f_00691d34();
    /* 005df4ac: jmp 0x5df4ed */ goto L_005df4ed;
L_005df4ae:; BB(0x005df4ae);
    /* 005df4ae: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005df4b4: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005df4b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005df4b9: call 0x5c5630 */ r_esp -= 4; W32(r_esp, 0x5df4beu); f_005c5630();
    /* 005df4be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005df4bf: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005df4c2: cmp eax, 0xfa */ {  u32 a = r_eax; u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df4c7: jge 0x5df4ed */ if ((fS==fO)) goto L_005df4ed;
L_005df4c9:; BB(0x005df4c9);
    /* 005df4c9: push 0xd7 */ { u32 v = 0xd7u; r_esp -= 4; W32(r_esp, v); }
    /* 005df4ce: push dword ptr [ebx + 0xf8] */ { u32 v = R32((u32)(r_ebx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005df4d4: call 0x5ca3d0 */ r_esp -= 4; W32(r_esp, 0x5df4d9u); f_005ca3d0();
    /* 005df4d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df4dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df4de: jne 0x5df4ed */ if (!fZ) goto L_005df4ed;
L_005df4e0:; BB(0x005df4e0);
    /* 005df4e0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005df4e2: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005df4e8: call 0x691dd0 */ r_esp -= 4; W32(r_esp, 0x5df4edu); f_00691dd0();
L_005df4ed:; BB(0x005df4ed);
    /* 005df4ed: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005df4f3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005df4f5: call dword ptr [eax + 0x12c] */ { u32 t = R32((u32)(r_eax+0x12cu)); r_esp -= 4; W32(r_esp, 0x5df4fbu); call_ind(t); }
    /* 005df4fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005df4fc: ret  */ FN_RET(0x005df458); r_esp += 4; return;
L_005df4fd:; BB(0x005df4fd);
    /* 005df4fd: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005df503: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005df507: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005df508: call 0x5c55b0 */ r_esp -= 4; W32(r_esp, 0x5df50du); f_005c55b0();
    /* 005df50d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005df50e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005df511: cmp eax, 0xfa */ {  u32 a = r_eax; u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df516: jge 0x5df4ed */ if ((fS==fO)) goto L_005df4ed;
L_005df518:; BB(0x005df518);
    /* 005df518: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005df51a: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005df520: call 0x691da4 */ r_esp -= 4; W32(r_esp, 0x5df525u); f_00691da4();
    /* 005df525: jmp 0x5df4ed */ goto L_005df4ed;
L_005df527:; BB(0x005df527);
    /* 005df527: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005df529: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005df52f: call 0x691c54 */ r_esp -= 4; W32(r_esp, 0x5df534u); f_00691c54();
    /* 005df534: jmp 0x5df4ed */ goto L_005df4ed;
L_005df536:; BB(0x005df536);
    /* 005df536: push 0xd7 */ { u32 v = 0xd7u; r_esp -= 4; W32(r_esp, v); }
    /* 005df53b: push dword ptr [ebx + 0xf8] */ { u32 v = R32((u32)(r_ebx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005df541: call 0x5ca3d0 */ r_esp -= 4; W32(r_esp, 0x5df546u); f_005ca3d0();
    /* 005df546: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df549: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df54b: jne 0x5df4ed */ if (!fZ) goto L_005df4ed;
L_005df54d:; BB(0x005df54d);
    /* 005df54d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005df54f: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005df555: call 0x691be0 */ r_esp -= 4; W32(r_esp, 0x5df55au); f_00691be0();
    /* 005df55a: jmp 0x5df4ed */ goto L_005df4ed;
L_005df55c:; BB(0x005df55c);
    /* 005df55c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005df55e: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005df564: call 0x691b74 */ r_esp -= 4; W32(r_esp, 0x5df569u); f_00691b74();
    /* 005df569: jmp 0x5df4ed */ goto L_005df4ed;
}

void f_005df56c(void) /* sub_5DF56C */
{
    FN_ENTER(0x005df56c);
    /* 005df56c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df56d: mov ebp, esp */ r_ebp = r_esp;
    /* 005df56f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df571: push 0x8dafe0 */ { u32 v = 0x8dafe0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df576: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005df57c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df57d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005df584: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df587: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005df58a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005df58d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005df590: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005df593: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df596: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df598: je 0x5df5ef */ if (fZ) goto L_005df5ef;
L_005df59a:; BB(0x005df59a);
    /* 005df59a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005df5a1: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005df5a6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5df5abu); f_005caba4();
    /* 005df5ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005df5ac: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005df5af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df5b1: je 0x5df5eb */ if (fZ) goto L_005df5eb;
L_005df5b3:; BB(0x005df5b3);
    /* 005df5b3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005df5ba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005df5c1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df5c4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df5c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df5c8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df5ce: call 0x5df600 */ r_esp -= 4; W32(r_esp, 0x5df5d3u); f_005df600();
    /* 005df5d3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df5d6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005df5dd:; BB(0x005df5dd);
    /* 005df5dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df5e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df5e7: mov esp, ebp */ r_esp = r_ebp;
    /* 005df5e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df5ea: ret  */ FN_RET(0x005df56c); r_esp += 4; return;
L_005df5eb:; BB(0x005df5eb);
    /* 005df5eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df5ed: jmp 0x5df5dd */ goto L_005df5dd;
L_005df5ef:; BB(0x005df5ef);
    /* 005df5ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df5f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df5f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df5fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005df5fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df5fe: ret  */ FN_RET(0x005df56c); r_esp += 4; return;
}

void f_005df600(void) /* sub_5DF600 */
{
    FN_ENTER(0x005df600);
    /* 005df600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df601: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005df603: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df607: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df60b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005df60d: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5df612u); f_005de2d8();
    /* 005df612: mov dword ptr [ebp], 0xb0ea60 */ W32((u32)(r_ebp), 0xb0ea60u);
    /* 005df619: mov eax, ebp */ r_eax = r_ebp;
    /* 005df61b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df61c: ret 8 */ FN_RET(0x005df600); r_esp += 12; return;
}

void f_005df620(void) /* sub_5DF620 */
{
    FN_ENTER(0x005df620);
    /* 005df620: mov dword ptr [0xa8db84], 0x3f800000 */ W32((u32)(0xa8db84u), 0x3f800000u);
    /* 005df62a: mov dword ptr [0xa8db88], 0x41000000 */ W32((u32)(0xa8db88u), 0x41000000u);
    /* 005df634: mov dword ptr [0xa8db8c], 0x3fc00000 */ W32((u32)(0xa8db8cu), 0x3fc00000u);
    /* 005df63e: ret  */ FN_RET(0x005df620); r_esp += 4; return;
}

void f_005df640(void) /* sub_5DF640 */
{
    FN_ENTER(0x005df640);
    /* 005df640: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005df641: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005df643: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005df645: call 0x5df664 */ r_esp -= 4; W32(r_esp, 0x5df64au); f_005df664();
    /* 005df64a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005df64e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df650: jne 0x5df656 */ if (!fZ) goto L_005df656;
L_005df652:; BB(0x005df652);
    /* 005df652: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005df653: ret 4 */ FN_RET(0x005df640); r_esp += 8; return;
L_005df656:; BB(0x005df656);
    /* 005df656: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005df657: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5df65cu); f_005c2f74();
    /* 005df65c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005df65d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005df65e: ret 4 */ FN_RET(0x005df640); r_esp += 8; return;
}

void f_005df664(void) /* sub_5DF664 */
{
    FN_ENTER(0x005df664);
    /* 005df664: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df665: mov ebp, esp */ r_ebp = r_esp;
    /* 005df667: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df669: push 0x8db00a */ { u32 v = 0x8db00au; r_esp -= 4; W32(r_esp, v); }
    /* 005df66e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005df674: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df675: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005df67c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df67f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005df682: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005df685: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005df688: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005df68b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005df68e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df691: mov dword ptr [eax], 0xb0eb80 */ W32((u32)(r_eax), 0xb0eb80u);
    /* 005df697: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005df69a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df69d: mov dword ptr [ecx], 0xb0dc40 */ W32((u32)(r_ecx), 0xb0dc40u);
    /* 005df6a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005df6aa: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5df6afu); f_005c2e50();
    /* 005df6af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df6b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df6b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005df6bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df6bc: ret  */ FN_RET(0x005df664); r_esp += 4; return;
}

void f_005df6c0(void) /* sub_5DF6C0 */
{
    FN_ENTER(0x005df6c0);
    /* 005df6c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005df6c1: mov esi, ecx */ r_esi = r_ecx;
    /* 005df6c3: mov ecx, esi */ r_ecx = r_esi;
    /* 005df6c5: call 0x5de588 */ r_esp -= 4; W32(r_esp, 0x5df6cau); f_005de588();
    /* 005df6ca: movzx edx, byte ptr [esi + 0xf4] */ r_edx = (u32)R8((u32)(r_esi+0xf4u));
    /* 005df6d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005df6d2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005df6d5: mov ecx, esi */ r_ecx = r_esi;
    /* 005df6d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df6d8: call 0x5c56b4 */ r_esp -= 4; W32(r_esp, 0x5df6ddu); f_005c56b4();
    /* 005df6dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005df6de: ret  */ FN_RET(0x005df6c0); r_esp += 4; return;
}

void f_005df6e0(void) /* sub_5DF6E0 */
{
    FN_ENTER(0x005df6e0);
    /* 005df6e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df6e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df6e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df6e5: push 0x8db030 */ { u32 v = 0x8db030u; r_esp -= 4; W32(r_esp, v); }
    /* 005df6ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005df6f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df6f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005df6f8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df6fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005df6fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005df701: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005df704: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005df707: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df70a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df70c: je 0x5df763 */ if (fZ) goto L_005df763;
L_005df70e:; BB(0x005df70e);
    /* 005df70e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005df715: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005df71a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5df71fu); f_005caba4();
    /* 005df71f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005df720: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005df723: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df725: je 0x5df75f */ if (fZ) goto L_005df75f;
L_005df727:; BB(0x005df727);
    /* 005df727: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005df72e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005df735: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df738: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df73b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df73c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df742: call 0x5df774 */ r_esp -= 4; W32(r_esp, 0x5df747u); f_005df774();
    /* 005df747: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df74a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005df751:; BB(0x005df751);
    /* 005df751: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df754: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df75b: mov esp, ebp */ r_esp = r_ebp;
    /* 005df75d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df75e: ret  */ FN_RET(0x005df6e0); r_esp += 4; return;
L_005df75f:; BB(0x005df75f);
    /* 005df75f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df761: jmp 0x5df751 */ goto L_005df751;
L_005df763:; BB(0x005df763);
    /* 005df763: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df765: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df768: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df76f: mov esp, ebp */ r_esp = r_ebp;
    /* 005df771: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df772: ret  */ FN_RET(0x005df6e0); r_esp += 4; return;
}

void f_005df774(void) /* sub_5DF774 */
{
    FN_ENTER(0x005df774);
    /* 005df774: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df775: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005df777: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df77b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df77f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005df781: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5df786u); f_005de2d8();
    /* 005df786: mov dword ptr [ebp], 0xb0eb80 */ W32((u32)(r_ebp), 0xb0eb80u);
    /* 005df78d: mov eax, ebp */ r_eax = r_ebp;
    /* 005df78f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df790: ret 8 */ FN_RET(0x005df774); r_esp += 12; return;
}

void f_005df794(void) /* sub_5DF794 */
{
    FN_ENTER(0x005df794);
    /* 005df794: mov dword ptr [0xa8db90], 0x3f800000 */ W32((u32)(0xa8db90u), 0x3f800000u);
    /* 005df79e: mov dword ptr [0xa8db94], 0x41000000 */ W32((u32)(0xa8db94u), 0x41000000u);
    /* 005df7a8: mov dword ptr [0xa8db98], 0x3fc00000 */ W32((u32)(0xa8db98u), 0x3fc00000u);
    /* 005df7b2: ret  */ FN_RET(0x005df794); r_esp += 4; return;
}

void f_005df7b4(void) /* sub_5DF7B4 */
{
    FN_ENTER(0x005df7b4);
    /* 005df7b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005df7b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005df7b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005df7b9: call 0x5df7d8 */ r_esp -= 4; W32(r_esp, 0x5df7beu); f_005df7d8();
    /* 005df7be: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005df7c2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df7c4: jne 0x5df7ca */ if (!fZ) goto L_005df7ca;
L_005df7c6:; BB(0x005df7c6);
    /* 005df7c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005df7c7: ret 4 */ FN_RET(0x005df7b4); r_esp += 8; return;
L_005df7ca:; BB(0x005df7ca);
    /* 005df7ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005df7cb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5df7d0u); f_005c2f74();
    /* 005df7d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005df7d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005df7d2: ret 4 */ FN_RET(0x005df7b4); r_esp += 8; return;
}

void f_005df7d8(void) /* sub_5DF7D8 */
{
    FN_ENTER(0x005df7d8);
    /* 005df7d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df7d9: mov ebp, esp */ r_ebp = r_esp;
    /* 005df7db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df7dd: push 0x8db05a */ { u32 v = 0x8db05au; r_esp -= 4; W32(r_esp, v); }
    /* 005df7e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005df7e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df7e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005df7f0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df7f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005df7f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005df7f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005df7fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005df7ff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005df802: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df805: mov dword ptr [eax], 0xb0eca0 */ W32((u32)(r_eax), 0xb0eca0u);
    /* 005df80b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005df80e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df811: mov dword ptr [ecx], 0xb0dc40 */ W32((u32)(r_ecx), 0xb0dc40u);
    /* 005df817: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005df81e: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5df823u); f_005c2e50();
    /* 005df823: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df826: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df82d: mov esp, ebp */ r_esp = r_ebp;
    /* 005df82f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df830: ret  */ FN_RET(0x005df7d8); r_esp += 4; return;
}

void f_005df834(void) /* sub_5DF834 */
{
    FN_ENTER(0x005df834);
    /* 005df834: push dword ptr [ecx + 0xf8] */ { u32 v = R32((u32)(r_ecx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005df83a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df83c: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005df83e: call 0x6e0780 */ r_esp -= 4; W32(r_esp, 0x5df843u); f_006e0780();
    /* 005df843: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005df846: ret  */ FN_RET(0x005df834); r_esp += 4; return;
}

void f_005df848(void) /* sub_5DF848 */
{
    FN_ENTER(0x005df848);
    /* 005df848: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df849: mov ebp, esp */ r_ebp = r_esp;
    /* 005df84b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df84d: push 0x8db080 */ { u32 v = 0x8db080u; r_esp -= 4; W32(r_esp, v); }
    /* 005df852: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005df858: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df859: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005df860: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df863: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005df866: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005df869: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005df86c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005df86f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df872: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df874: je 0x5df8cb */ if (fZ) goto L_005df8cb;
L_005df876:; BB(0x005df876);
    /* 005df876: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005df87d: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005df882: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5df887u); f_005caba4();
    /* 005df887: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005df888: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005df88b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df88d: je 0x5df8c7 */ if (fZ) goto L_005df8c7;
L_005df88f:; BB(0x005df88f);
    /* 005df88f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005df896: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005df89d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df8a0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df8a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df8a4: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df8aa: call 0x5df8dc */ r_esp -= 4; W32(r_esp, 0x5df8afu); f_005df8dc();
    /* 005df8af: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df8b2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005df8b9:; BB(0x005df8b9);
    /* 005df8b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df8bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df8c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005df8c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df8c6: ret  */ FN_RET(0x005df848); r_esp += 4; return;
L_005df8c7:; BB(0x005df8c7);
    /* 005df8c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df8c9: jmp 0x5df8b9 */ goto L_005df8b9;
L_005df8cb:; BB(0x005df8cb);
    /* 005df8cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df8cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df8d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df8d7: mov esp, ebp */ r_esp = r_ebp;
    /* 005df8d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df8da: ret  */ FN_RET(0x005df848); r_esp += 4; return;
}

void f_005df8dc(void) /* sub_5DF8DC */
{
    FN_ENTER(0x005df8dc);
    /* 005df8dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df8dd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005df8df: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df8e3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005df8e7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005df8e9: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5df8eeu); f_005de2d8();
    /* 005df8ee: mov dword ptr [ebp], 0xb0eca0 */ W32((u32)(r_ebp), 0xb0eca0u);
    /* 005df8f5: mov eax, ebp */ r_eax = r_ebp;
    /* 005df8f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df8f8: ret 8 */ FN_RET(0x005df8dc); r_esp += 12; return;
}

void f_005df8fc(void) /* sub_5DF8FC */
{
    FN_ENTER(0x005df8fc);
    /* 005df8fc: mov dword ptr [0xa8db9c], 0x3f800000 */ W32((u32)(0xa8db9cu), 0x3f800000u);
    /* 005df906: mov dword ptr [0xa8dba0], 0x41000000 */ W32((u32)(0xa8dba0u), 0x41000000u);
    /* 005df910: mov dword ptr [0xa8dba4], 0x3fc00000 */ W32((u32)(0xa8dba4u), 0x3fc00000u);
    /* 005df91a: ret  */ FN_RET(0x005df8fc); r_esp += 4; return;
}

void f_005df91c(void) /* sub_5DF91C */
{
    FN_ENTER(0x005df91c);
    /* 005df91c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005df91d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005df91f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005df921: call 0x5df940 */ r_esp -= 4; W32(r_esp, 0x5df926u); f_005df940();
    /* 005df926: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005df92a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005df92c: jne 0x5df932 */ if (!fZ) goto L_005df932;
L_005df92e:; BB(0x005df92e);
    /* 005df92e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005df92f: ret 4 */ FN_RET(0x005df91c); r_esp += 8; return;
L_005df932:; BB(0x005df932);
    /* 005df932: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005df933: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5df938u); f_005c2f74();
    /* 005df938: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005df939: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005df93a: ret 4 */ FN_RET(0x005df91c); r_esp += 8; return;
}

void f_005df940(void) /* sub_5DF940 */
{
    FN_ENTER(0x005df940);
    /* 005df940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df941: mov ebp, esp */ r_ebp = r_esp;
    /* 005df943: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df945: push 0x8db0aa */ { u32 v = 0x8db0aau; r_esp -= 4; W32(r_esp, v); }
    /* 005df94a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005df950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df951: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005df958: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df95b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005df95e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005df961: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005df964: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005df967: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005df96a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df96d: mov dword ptr [eax], 0xb0edc0 */ W32((u32)(r_eax), 0xb0edc0u);
    /* 005df973: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005df976: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005df979: mov dword ptr [ecx], 0xb0dc40 */ W32((u32)(r_ecx), 0xb0dc40u);
    /* 005df97f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005df986: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5df98bu); f_005c2e50();
    /* 005df98b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df98e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005df995: mov esp, ebp */ r_esp = r_ebp;
    /* 005df997: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df998: ret  */ FN_RET(0x005df940); r_esp += 4; return;
}

void f_005df99c(void) /* sub_5DF99C */
{
    FN_ENTER(0x005df99c);
    /* 005df99c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005df99d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005df99f: movzx edx, byte ptr [ebx + 0xf4] */ r_edx = (u32)R8((u32)(r_ebx+0xf4u));
    /* 005df9a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005df9a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df9aa: je 0x5df9df */ if (fZ) goto L_005df9df;
L_005df9ac:; BB(0x005df9ac);
    /* 005df9ac: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df9af: jne 0x5df9d1 */ if (!fZ) goto L_005df9d1;
L_005df9b1:; BB(0x005df9b1);
    /* 005df9b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005df9b3: call 0x5de578 */ r_esp -= 4; W32(r_esp, 0x5df9b8u); f_005de578();
    /* 005df9b8: mov ecx, dword ptr [0xa9cd68] */ r_ecx = R32((u32)(0xa9cd68u));
    /* 005df9be: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 005df9c1: lea edx, [edx + ecx*8] */ r_edx = (u32)(r_edx+r_ecx*8);
    /* 005df9c4: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 005df9c7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005df9ca: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005df9cc: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005df9cf: jmp 0x5df9fe */ goto L_005df9fe;
L_005df9d1:; BB(0x005df9d1);
    /* 005df9d1: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df9d4: jne 0x5df9fe */ if (!fZ) goto L_005df9fe;
L_005df9d6:; BB(0x005df9d6);
    /* 005df9d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005df9d8: call 0x5dfa0c */ r_esp -= 4; W32(r_esp, 0x5df9ddu); f_005dfa0c();
    /* 005df9dd: jmp 0x5df9fe */ goto L_005df9fe;
L_005df9df:; BB(0x005df9df);
    /* 005df9df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005df9e1: call 0x5de578 */ r_esp -= 4; W32(r_esp, 0x5df9e6u); f_005de578();
    /* 005df9e6: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 005df9ec: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005df9ef: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005df9f1: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005df9f3: lea edx, [edx + ecx*8] */ r_edx = (u32)(r_edx+r_ecx*8);
    /* 005df9f6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005df9f9: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005df9fb: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
L_005df9fe:; BB(0x005df9fe);
    /* 005df9fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df9ff: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005dfa05: call 0x777368 */ r_esp -= 4; W32(r_esp, 0x5dfa0au); f_00777368();
    /* 005dfa0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dfa0b: ret  */ FN_RET(0x005df99c); r_esp += 4; return;
}

void f_005dfa0c(void) /* sub_5DFA0C */
{
    FN_ENTER(0x005dfa0c);
    /* 005dfa0c: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 005dfa12: movsx eax, word ptr [edx + 0x2be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2beu));
    /* 005dfa19: ret  */ FN_RET(0x005dfa0c); r_esp += 4; return;
}

void f_005dfa1c(void) /* sub_5DFA1C */
{
    FN_ENTER(0x005dfa1c);
    /* 005dfa1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa1d: mov ebp, esp */ r_ebp = r_esp;
    /* 005dfa1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa21: push 0x8db0d0 */ { u32 v = 0x8db0d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dfa2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dfa34: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dfa37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dfa3a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dfa3d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dfa40: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dfa43: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dfa46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfa48: je 0x5dfa9f */ if (fZ) goto L_005dfa9f;
L_005dfa4a:; BB(0x005dfa4a);
    /* 005dfa4a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005dfa51: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa56: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5dfa5bu); f_005caba4();
    /* 005dfa5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dfa5c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dfa5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfa61: je 0x5dfa9b */ if (fZ) goto L_005dfa9b;
L_005dfa63:; BB(0x005dfa63);
    /* 005dfa63: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005dfa6a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dfa71: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dfa74: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dfa77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa78: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dfa7e: call 0x5dfab0 */ r_esp -= 4; W32(r_esp, 0x5dfa83u); f_005dfab0();
    /* 005dfa83: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dfa86: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005dfa8d:; BB(0x005dfa8d);
    /* 005dfa8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfa90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dfa97: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfa99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfa9a: ret  */ FN_RET(0x005dfa1c); r_esp += 4; return;
L_005dfa9b:; BB(0x005dfa9b);
    /* 005dfa9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dfa9d: jmp 0x5dfa8d */ goto L_005dfa8d;
L_005dfa9f:; BB(0x005dfa9f);
    /* 005dfa9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dfaa1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfaa4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dfaab: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfaad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfaae: ret  */ FN_RET(0x005dfa1c); r_esp += 4; return;
}

void f_005dfab0(void) /* sub_5DFAB0 */
{
    FN_ENTER(0x005dfab0);
    /* 005dfab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfab1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005dfab3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dfab7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dfabb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005dfabd: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5dfac2u); f_005de2d8();
    /* 005dfac2: mov dword ptr [ebp], 0xb0edc0 */ W32((u32)(r_ebp), 0xb0edc0u);
    /* 005dfac9: mov eax, ebp */ r_eax = r_ebp;
    /* 005dfacb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfacc: ret 8 */ FN_RET(0x005dfab0); r_esp += 12; return;
}

void f_005dfad0(void) /* sub_5DFAD0 */
{
    FN_ENTER(0x005dfad0);
    /* 005dfad0: mov dword ptr [0xa8dba8], 0x3f800000 */ W32((u32)(0xa8dba8u), 0x3f800000u);
    /* 005dfada: mov dword ptr [0xa8dbac], 0x41000000 */ W32((u32)(0xa8dbacu), 0x41000000u);
    /* 005dfae4: mov dword ptr [0xa8dbb0], 0x3fc00000 */ W32((u32)(0xa8dbb0u), 0x3fc00000u);
    /* 005dfaee: ret  */ FN_RET(0x005dfad0); r_esp += 4; return;
}

void f_005dfaf0(void) /* sub_5DFAF0 */
{
    FN_ENTER(0x005dfaf0);
    /* 005dfaf0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfaf1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005dfaf3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005dfaf5: call 0x5dfb14 */ r_esp -= 4; W32(r_esp, 0x5dfafau); f_005dfb14();
    /* 005dfafa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005dfafe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dfb00: jne 0x5dfb06 */ if (!fZ) goto L_005dfb06;
L_005dfb02:; BB(0x005dfb02);
    /* 005dfb02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dfb03: ret 4 */ FN_RET(0x005dfaf0); r_esp += 8; return;
L_005dfb06:; BB(0x005dfb06);
    /* 005dfb06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb07: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5dfb0cu); f_005c2f74();
    /* 005dfb0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dfb0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dfb0e: ret 4 */ FN_RET(0x005dfaf0); r_esp += 8; return;
}

void f_005dfb14(void) /* sub_5DFB14 */
{
    FN_ENTER(0x005dfb14);
    /* 005dfb14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb15: mov ebp, esp */ r_ebp = r_esp;
    /* 005dfb17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb19: push 0x8db0ec */ { u32 v = 0x8db0ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dfb24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dfb2c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dfb2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dfb32: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dfb35: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dfb38: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dfb3b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005dfb3e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dfb45: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dfb48: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005dfb4c: mov dword ptr [eax], 0xb0f020 */ W32((u32)(r_eax), 0xb0f020u);
    /* 005dfb52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb53: call 0x5e6078 */ r_esp -= 4; W32(r_esp, 0x5dfb58u); f_005e6078();
    /* 005dfb58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dfb59: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dfb60: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dfb63: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5dfb68u); f_008171e8();
    /* 005dfb68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfb6b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dfb72: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfb74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfb75: ret  */ FN_RET(0x005dfb14); r_esp += 4; return;
}

void f_005dfb78(void) /* sub_5DFB78 */
{
    FN_ENTER(0x005dfb78);
    /* 005dfb78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb79: mov esi, ecx */ r_esi = r_ecx;
    /* 005dfb7b: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 005dfb7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb80: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5dfb85u); f_0068d5a8();
    /* 005dfb85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dfb86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfb88: je 0x5dfbaa */ if (fZ) goto L_005dfbaa;
L_005dfb8a:; BB(0x005dfb8a);
    /* 005dfb8a: movsx eax, word ptr [esi + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x1eu));
    /* 005dfb8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfb90: jne 0x5dfba1 */ if (!fZ) goto L_005dfba1;
L_005dfb92:; BB(0x005dfb92);
    /* 005dfb92: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005dfb96: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dfb9b: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 005dfb9f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dfba0: ret  */ FN_RET(0x005dfb78); r_esp += 4; return;
L_005dfba1:; BB(0x005dfba1);
    /* 005dfba1: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dfba4: mov word ptr [esi + 0x1e], ax */ W16((u32)(r_esi+0x1eu), (u16)r_eax);
    /* 005dfba8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dfba9: ret  */ FN_RET(0x005dfb78); r_esp += 4; return;
L_005dfbaa:; BB(0x005dfbaa);
    /* 005dfbaa: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005dfbae: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dfbb3: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 005dfbb7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dfbb8: ret  */ FN_RET(0x005dfb78); r_esp += 4; return;
}

void f_005dfbbc(void) /* sub_5DFBBC */
{
    FN_ENTER(0x005dfbbc);
    /* 005dfbbc: mov dword ptr [0xa8dbb4], 0x3f800000 */ W32((u32)(0xa8dbb4u), 0x3f800000u);
    /* 005dfbc6: mov dword ptr [0xa8dbb8], 0x41000000 */ W32((u32)(0xa8dbb8u), 0x41000000u);
    /* 005dfbd0: mov dword ptr [0xa8dbbc], 0x3fc00000 */ W32((u32)(0xa8dbbcu), 0x3fc00000u);
    /* 005dfbda: ret  */ FN_RET(0x005dfbbc); r_esp += 4; return;
}

void f_005dfbdc(void) /* sub_5DFBDC */
{
    FN_ENTER(0x005dfbdc);
    /* 005dfbdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbdd: mov ebp, esp */ r_ebp = r_esp;
    /* 005dfbdf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbe1: push 0x8db108 */ { u32 v = 0x8db108u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbe6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dfbec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dfbf4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dfbf7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dfbfa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005dfbfd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005dfc00: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005dfc03: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005dfc06: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dfc09: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005dfc0c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dfc0f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5dfc14u); f_008193cc();
    /* 005dfc14: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dfc1b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005dfc1e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dfc21: mov dword ptr [edx], 0xb0f020 */ W32((u32)(r_edx), 0xb0f020u);
    /* 005dfc27: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005dfc2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc2c: mov word ptr [edx + 0x1c], cx */ W16((u32)(r_edx+0x1cu), (u16)r_ecx);
    /* 005dfc30: call 0x5e6094 */ r_esp -= 4; W32(r_esp, 0x5dfc35u); f_005e6094();
    /* 005dfc35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dfc36: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005dfc39: mov edx, 3 */ r_edx = 0x3u;
    /* 005dfc3e: mov word ptr [eax + 0x1e], dx */ W16((u32)(r_eax+0x1eu), (u16)r_edx);
    /* 005dfc42: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfc45: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dfc4c: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfc4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfc4f: ret 8 */ FN_RET(0x005dfbdc); r_esp += 12; return;
}

void f_005dfc54(void) /* sub_5DFC54 */
{
    FN_ENTER(0x005dfc54);
    /* 005dfc54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc55: mov ebp, esp */ r_ebp = r_esp;
    /* 005dfc57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc59: push 0x8db130 */ { u32 v = 0x8db130u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc5e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dfc64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc65: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dfc6c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dfc6f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dfc72: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dfc75: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dfc78: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dfc7b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dfc7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dfc80: je 0x5dfcc4 */ if (fZ) goto L_005dfcc4;
L_005dfc82:; BB(0x005dfc82);
    /* 005dfc82: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005dfc85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dfc87: je 0x5dfcc4 */ if (fZ) goto L_005dfcc4;
L_005dfc89:; BB(0x005dfc89);
    /* 005dfc89: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005dfc90: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc92: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5dfc97u); f_005caba4();
    /* 005dfc97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dfc98: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dfc9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dfc9d: je 0x5dfcc4 */ if (fZ) goto L_005dfcc4;
L_005dfc9f:; BB(0x005dfc9f);
    /* 005dfc9f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005dfca6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dfcad: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005dfcb0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dfcb3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dfcb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcb8: call 0x5dfbdc */ r_esp -= 4; W32(r_esp, 0x5dfcbdu); f_005dfbdc();
    /* 005dfcbd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005dfcc4:; BB(0x005dfcc4);
    /* 005dfcc4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfcc7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dfcce: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfcd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfcd1: ret  */ FN_RET(0x005dfc54); r_esp += 4; return;
}

void f_005dfcd4(void) /* sub_5DFCD4 */
{
    FN_ENTER(0x005dfcd4);
    /* 005dfcd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcd5: mov ebp, esp */ r_ebp = r_esp;
    /* 005dfcd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcd9: push 0x8db15a */ { u32 v = 0x8db15au; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dfce4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfce5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dfcec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dfcef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dfcf2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dfcf5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dfcf8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dfcfb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005dfcfe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dfd01: mov dword ptr [eax], 0xb0ef60 */ W32((u32)(r_eax), 0xb0ef60u);
    /* 005dfd07: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005dfd0a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dfd0d: mov dword ptr [ecx], 0xb0dc40 */ W32((u32)(r_ecx), 0xb0dc40u);
    /* 005dfd13: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dfd1a: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5dfd1fu); f_005c2e50();
    /* 005dfd1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfd22: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dfd29: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfd2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfd2c: ret  */ FN_RET(0x005dfcd4); r_esp += 4; return;
}

void f_005dfd30(void) /* sub_5DFD30 */
{
    FN_ENTER(0x005dfd30);
    /* 005dfd30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd31: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005dfd33: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dfd37: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dfd3b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005dfd3d: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5dfd42u); f_005de2d8();
    /* 005dfd42: mov dword ptr [ebp], 0xb0ef60 */ W32((u32)(r_ebp), 0xb0ef60u);
    /* 005dfd49: mov eax, ebp */ r_eax = r_ebp;
    /* 005dfd4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfd4c: ret 8 */ FN_RET(0x005dfd30); r_esp += 12; return;
}

void f_005dfd50(void) /* sub_5DFD50 */
{
    FN_ENTER(0x005dfd50);
    /* 005dfd50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd51: mov ebp, esp */ r_ebp = r_esp;
    /* 005dfd53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd55: push 0x8db180 */ { u32 v = 0x8db180u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dfd60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dfd68: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dfd6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dfd6e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dfd71: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dfd74: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dfd77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dfd7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfd7c: je 0x5dfdd3 */ if (fZ) goto L_005dfdd3;
L_005dfd7e:; BB(0x005dfd7e);
    /* 005dfd7e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005dfd85: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd8a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5dfd8fu); f_005caba4();
    /* 005dfd8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dfd90: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dfd93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfd95: je 0x5dfdcf */ if (fZ) goto L_005dfdcf;
L_005dfd97:; BB(0x005dfd97);
    /* 005dfd97: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005dfd9e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dfda5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dfda8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dfdab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdac: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dfdb2: call 0x5dfd30 */ r_esp -= 4; W32(r_esp, 0x5dfdb7u); f_005dfd30();
    /* 005dfdb7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dfdba: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005dfdc1:; BB(0x005dfdc1);
    /* 005dfdc1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfdc4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dfdcb: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfdcd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfdce: ret  */ FN_RET(0x005dfd50); r_esp += 4; return;
L_005dfdcf:; BB(0x005dfdcf);
    /* 005dfdcf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dfdd1: jmp 0x5dfdc1 */ goto L_005dfdc1;
L_005dfdd3:; BB(0x005dfdd3);
    /* 005dfdd3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dfdd5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfdd8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dfddf: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfde1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfde2: ret  */ FN_RET(0x005dfd50); r_esp += 4; return;
}

void f_005dfde4(void) /* sub_5DFDE4 */
{
    FN_ENTER(0x005dfde4);
    /* 005dfde4: push dword ptr [ecx + 0xf8] */ { u32 v = R32((u32)(r_ecx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dfdea: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dfdf0: call 0x5dfc54 */ r_esp -= 4; W32(r_esp, 0x5dfdf5u); f_005dfc54();
    /* 005dfdf5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dfdf8: ret  */ FN_RET(0x005dfde4); r_esp += 4; return;
}

void f_005dfdfc(void) /* sub_5DFDFC */
{
    FN_ENTER(0x005dfdfc);
    /* 005dfdfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdfd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005dfdff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005dfe01: call 0x5dfcd4 */ r_esp -= 4; W32(r_esp, 0x5dfe06u); f_005dfcd4();
    /* 005dfe06: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005dfe0a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dfe0c: jne 0x5dfe12 */ if (!fZ) goto L_005dfe12;
L_005dfe0e:; BB(0x005dfe0e);
    /* 005dfe0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dfe0f: ret 4 */ FN_RET(0x005dfdfc); r_esp += 8; return;
L_005dfe12:; BB(0x005dfe12);
    /* 005dfe12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe13: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5dfe18u); f_005c2f74();
    /* 005dfe18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dfe19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dfe1a: ret 4 */ FN_RET(0x005dfdfc); r_esp += 8; return;
}

void f_005dfe20(void) /* sub_5DFE20 */
{
    FN_ENTER(0x005dfe20);
    /* 005dfe20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005dfe23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005dfe25: call 0x5dfe44 */ r_esp -= 4; W32(r_esp, 0x5dfe2au); f_005dfe44();
    /* 005dfe2a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005dfe2e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dfe30: jne 0x5dfe36 */ if (!fZ) goto L_005dfe36;
L_005dfe32:; BB(0x005dfe32);
    /* 005dfe32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dfe33: ret 4 */ FN_RET(0x005dfe20); r_esp += 8; return;
L_005dfe36:; BB(0x005dfe36);
    /* 005dfe36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe37: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5dfe3cu); f_005c2f74();
    /* 005dfe3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dfe3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dfe3e: ret 4 */ FN_RET(0x005dfe20); r_esp += 8; return;
}

void f_005dfe44(void) /* sub_5DFE44 */
{
    FN_ENTER(0x005dfe44);
    /* 005dfe44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe45: mov ebp, esp */ r_ebp = r_esp;
    /* 005dfe47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe49: push 0x8db1aa */ { u32 v = 0x8db1aau; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dfe54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dfe5c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dfe5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dfe62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dfe65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dfe68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dfe6b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005dfe6e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dfe71: mov dword ptr [eax], 0xb0f0a0 */ W32((u32)(r_eax), 0xb0f0a0u);
    /* 005dfe77: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005dfe7a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dfe7d: mov dword ptr [ecx], 0xb0dc40 */ W32((u32)(r_ecx), 0xb0dc40u);
    /* 005dfe83: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dfe8a: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5dfe8fu); f_005c2e50();
    /* 005dfe8f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfe92: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dfe99: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfe9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfe9c: ret  */ FN_RET(0x005dfe44); r_esp += 4; return;
}

void f_005dfea0(void) /* sub_5DFEA0 */
{
    FN_ENTER(0x005dfea0);
    /* 005dfea0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dfea1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dfea2: mov edi, ecx */ r_edi = r_ecx;
    /* 005dfea4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfea6: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005dfeac: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dfeb2: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5dfeb7u); f_0069792c();
    /* 005dfeb7: mov esi, eax */ r_esi = r_eax;
    /* 005dfeb9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dfebb: je 0x5dfecc */ if (fZ) goto L_005dfecc;
L_005dfebd:; BB(0x005dfebd);
    /* 005dfebd: mov ecx, edi */ r_ecx = r_edi;
    /* 005dfebf: call 0x5de578 */ r_esp -= 4; W32(r_esp, 0x5dfec4u); f_005de578();
    /* 005dfec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfec5: mov ecx, esi */ r_ecx = r_esi;
    /* 005dfec7: call 0x5e93e4 */ r_esp -= 4; W32(r_esp, 0x5dfeccu); f_005e93e4();
L_005dfecc:; BB(0x005dfecc);
    /* 005dfecc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dfecd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dfece: ret  */ FN_RET(0x005dfea0); r_esp += 4; return;
}

void f_005dfed0(void) /* sub_5DFED0 */
{
    FN_ENTER(0x005dfed0);
    /* 005dfed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfed1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dfed3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfed5: push 0x8db1d0 */ { u32 v = 0x8db1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfeda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dfee0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfee1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dfee8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dfeeb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dfeee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dfef1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dfef4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dfef7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dfefa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfefc: je 0x5dff53 */ if (fZ) goto L_005dff53;
L_005dfefe:; BB(0x005dfefe);
    /* 005dfefe: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005dff05: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dff0a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5dff0fu); f_005caba4();
    /* 005dff0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dff10: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dff13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dff15: je 0x5dff4f */ if (fZ) goto L_005dff4f;
L_005dff17:; BB(0x005dff17);
    /* 005dff17: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005dff1e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dff25: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dff28: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dff2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dff2c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dff32: call 0x5dff64 */ r_esp -= 4; W32(r_esp, 0x5dff37u); f_005dff64();
    /* 005dff37: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dff3a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005dff41:; BB(0x005dff41);
    /* 005dff41: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dff44: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dff4b: mov esp, ebp */ r_esp = r_ebp;
    /* 005dff4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dff4e: ret  */ FN_RET(0x005dfed0); r_esp += 4; return;
L_005dff4f:; BB(0x005dff4f);
    /* 005dff4f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dff51: jmp 0x5dff41 */ goto L_005dff41;
L_005dff53:; BB(0x005dff53);
    /* 005dff53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dff55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dff58: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dff5f: mov esp, ebp */ r_esp = r_ebp;
    /* 005dff61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dff62: ret  */ FN_RET(0x005dfed0); r_esp += 4; return;
}

void f_005dff64(void) /* sub_5DFF64 */
{
    FN_ENTER(0x005dff64);
    /* 005dff64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dff65: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005dff67: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dff6b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dff6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005dff71: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5dff76u); f_005de2d8();
    /* 005dff76: mov dword ptr [ebp], 0xb0f0a0 */ W32((u32)(r_ebp), 0xb0f0a0u);
    /* 005dff7d: mov eax, ebp */ r_eax = r_ebp;
    /* 005dff7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dff80: ret 8 */ FN_RET(0x005dff64); r_esp += 12; return;
}

void f_005dff84(void) /* sub_5DFF84 */
{
    FN_ENTER(0x005dff84);
    /* 005dff84: mov dword ptr [0xa8dbc0], 0x3f800000 */ W32((u32)(0xa8dbc0u), 0x3f800000u);
    /* 005dff8e: mov dword ptr [0xa8dbc4], 0x41000000 */ W32((u32)(0xa8dbc4u), 0x41000000u);
    /* 005dff98: mov dword ptr [0xa8dbc8], 0x3fc00000 */ W32((u32)(0xa8dbc8u), 0x3fc00000u);
    /* 005dffa2: ret  */ FN_RET(0x005dff84); r_esp += 4; return;
}

void f_005dffa4(void) /* sub_5DFFA4 */
{
    FN_ENTER(0x005dffa4);
    /* 005dffa4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dffa5: mov ebp, esp */ r_ebp = r_esp;
    /* 005dffa7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dffa9: push 0x8db1ec */ { u32 v = 0x8db1ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005dffae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dffb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dffb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dffbc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dffbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dffc2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005dffc5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005dffc8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005dffcb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005dffce: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005dffd1: mov eax, ecx */ r_eax = r_ecx;
    /* 005dffd3: mov dword ptr [eax], 0xb0f2c0 */ W32((u32)(r_eax), 0xb0f2c0u);
    /* 005dffd9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dffe0: call 0x5e5c50 */ r_esp -= 4; W32(r_esp, 0x5dffe5u); f_005e5c50();
    /* 005dffe5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dffe8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dffea: jne 0x5dfffc */ if (!fZ) goto L_005dfffc;
L_005dffec:; BB(0x005dffec);
    /* 005dffec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dffef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dfff6: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfff8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfff9: ret 4 */ FN_RET(0x005dffa4); r_esp += 8; return;
L_005dfffc:; BB(0x005dfffc);
    /* 005dfffc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dffff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0000: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e0005u); f_005c2f74();
    /* 005e0005: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e0006: jmp 0x5dffec */ goto L_005dffec;
}

void f_005dffff(void)
{
    FN_ENTER(0x005dffff);
    goto L_005dffff;
L_005dffec:; BB(0x005dffec);
    /* 005dffec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dffef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dfff6: mov esp, ebp */ r_esp = r_ebp;
    /* 005dfff8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dfff9: ret 4 */ FN_RET(0x005dffff); r_esp += 8; return;
L_005dffff:; BB(0x005dffff);
    /* 005dffff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0000: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e0005u); f_005c2f74();
    /* 005e0005: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e0006: jmp 0x5dffec */ goto L_005dffec;
}

