#include "protos.h"

void f_00724000(void) /* sub_724000 */
{
    FN_ENTER(0x00724000);
    /* 00724000: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00724001: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00724003: call 0x73824c */ r_esp -= 4; W32(r_esp, 0x724008u); f_0073824c();
    /* 00724008: mov edi, eax */ r_edi = r_eax;
    /* 0072400a: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 0072400c: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x724011u); f_00793168();
    /* 00724011: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00724014: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00724016: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00724017: mov ecx, edi */ r_ecx = r_edi;
    /* 00724019: call 0x7389cc */ r_esp -= 4; W32(r_esp, 0x72401eu); f_007389cc();
    /* 0072401e: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 00724020: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x724025u); f_00793168();
    /* 00724025: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00724026: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00724028: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072402a: mov ecx, edi */ r_ecx = r_edi;
    /* 0072402c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072402d: call 0x738a04 */ r_esp -= 4; W32(r_esp, 0x724032u); f_00738a04();
    /* 00724032: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00724034: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x724039u); f_00793168();
    /* 00724039: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072403a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0072403c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072403d: mov ecx, edi */ r_ecx = r_edi;
    /* 0072403f: call 0x7389cc */ r_esp -= 4; W32(r_esp, 0x724044u); f_007389cc();
    /* 00724044: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00724046: mov ecx, edi */ r_ecx = r_edi;
    /* 00724048: call 0x738a9c */ r_esp -= 4; W32(r_esp, 0x72404du); f_00738a9c();
    /* 0072404d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0072404f: mov ecx, edi */ r_ecx = r_edi;
    /* 00724051: call 0x738bbc */ r_esp -= 4; W32(r_esp, 0x724056u); f_00738bbc();
    /* 00724056: mov dword ptr [edi + 0x4c], 0x42c80000 */ W32((u32)(r_edi+0x4cu), 0x42c80000u);
    /* 0072405d: mov eax, edi */ r_eax = r_edi;
    /* 0072405f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00724060: ret  */ FN_RET(0x00724000); r_esp += 4; return;
}

void f_00724064(void) /* sub_724064 */
{
    FN_ENTER(0x00724064);
    /* 00724064: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00724065: mov ebp, esp */ r_ebp = r_esp;
    /* 00724067: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00724069: push 0x8f0ee4 */ { u32 v = 0x8f0ee4u; r_esp -= 4; W32(r_esp, v); }
    /* 0072406e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00724074: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00724075: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0072407c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072407f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00724082: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00724085: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00724088: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0072408b: movzx eax, byte ptr [ecx + 0x1c] */ r_eax = (u32)R8((u32)(r_ecx+0x1cu));
    /* 0072408f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00724092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00724094: jge 0x7240ad */ if ((fS==fO)) goto L_007240ad;
L_00724096:; BB(0x00724096);
    /* 00724096: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00724099: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072409c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072409f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007240a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007240a9: mov esp, ebp */ r_esp = r_ebp;
    /* 007240ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007240ac: ret  */ FN_RET(0x00724064); r_esp += 4; return;
L_007240ad:; BB(0x007240ad);
    /* 007240ad: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007240b0: jg 0x724109 */ if ((!fZ&&fS==fO)) goto L_00724109;
L_007240b2:; BB(0x007240b2);
    /* 007240b2: mov eax, ecx */ r_eax = r_ecx;
    /* 007240b4: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 007240b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007240b9: je 0x7240d1 */ if (fZ) goto L_007240d1;
L_007240bb:; BB(0x007240bb);
    /* 007240bb: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007240bf: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007240c4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007240c8: mov edx, ecx */ r_edx = r_ecx;
    /* 007240ca: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
L_007240d1:; BB(0x007240d1);
    /* 007240d1: mov eax, ecx */ r_eax = r_ecx;
    /* 007240d3: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007240d6: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 007240dd: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007240e3: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 007240ea: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 007240ed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007240ef: je 0x7240f8 */ if (fZ) goto L_007240f8;
L_007240f1:; BB(0x007240f1);
    /* 007240f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007240f3: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x7240f8u); f_00760acc();
L_007240f8:; BB(0x007240f8);
    /* 007240f8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007240fb: call 0x724314 */ r_esp -= 4; W32(r_esp, 0x724100u); f_00724314();
    /* 00724100: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00724103: mov byte ptr [eax + 0x1c], 2 */ W8((u32)(r_eax+0x1cu), 0x2u);
    /* 00724107: jmp 0x72410e */ goto L_0072410e;
L_00724109:; BB(0x00724109);
    /* 00724109: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072410c: jne 0x72415b */ if (!fZ) goto L_0072415b;
L_0072410e:; BB(0x0072410e);
    /* 0072410e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00724111: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00724114: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0072411b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072411d: je 0x724140 */ if (fZ) goto L_00724140;
L_0072411f:; BB(0x0072411f);
    /* 0072411f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00724122: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 00724126: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072412b: mov byte ptr [edx + 0x1c], 5 */ W8((u32)(r_edx+0x1cu), 0x5u);
    /* 0072412f: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 00724132: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00724135: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072413c: mov esp, ebp */ r_esp = r_ebp;
    /* 0072413e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072413f: ret  */ FN_RET(0x00724064); r_esp += 4; return;
L_00724140:; BB(0x00724140);
    /* 00724140: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00724142: je 0x724096 */ if (fZ) goto L_00724096;
L_00724148:; BB(0x00724148);
    /* 00724148: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x72414du); f_00737d90();
    /* 0072414d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00724150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00724151: call 0x723e8c */ r_esp -= 4; W32(r_esp, 0x724156u); f_00723e8c();
    /* 00724156: jmp 0x724096 */ goto L_00724096;
L_0072415b:; BB(0x0072415b);
    /* 0072415b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072415e: jne 0x724223 */ if (!fZ) goto L_00724223;
L_00724164:; BB(0x00724164);
    /* 00724164: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0072416b: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0072416d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x724172u); f_005caba4();
    /* 00724172: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00724175: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00724178: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0072417b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072417d: je 0x724309 */ if (fZ) goto L_00724309;
L_00724183:; BB(0x00724183);
    /* 00724183: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0072418a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00724191: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00724197: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072419a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0072419d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0072419f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007241a1: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007241a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007241a4: call 0x78eba4 */ r_esp -= 4; W32(r_esp, 0x7241a9u); f_0078eba4();
    /* 007241a9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_007241b0:; BB(0x007241b0);
    /* 007241b0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007241b3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007241b6: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 007241b9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007241c0: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 007241c5: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7241cau); f_0073ec50();
    /* 007241ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007241cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007241cc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007241cf: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007241d2: call 0x78ed84 */ r_esp -= 4; W32(r_esp, 0x7241d7u); f_0078ed84();
    /* 007241d7: push 0x47166400 */ { u32 v = 0x47166400u; r_esp -= 4; W32(r_esp, v); }
    /* 007241dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007241df: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007241e2: call 0x78ee24 */ r_esp -= 4; W32(r_esp, 0x7241e7u); f_0078ee24();
    /* 007241e7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007241ea: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007241ed: call 0x78ed3c */ r_esp -= 4; W32(r_esp, 0x7241f2u); f_0078ed3c();
    /* 007241f2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007241f5: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007241f8: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007241fb: call 0x78ed74 */ r_esp -= 4; W32(r_esp, 0x724200u); f_0078ed74();
    /* 00724200: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00724203: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00724206: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x72420bu); f_0078ee74();
    /* 0072420b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072420e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00724210: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00724212: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00724215: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x72421au); f_00738a40();
    /* 0072421a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072421d: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00724221: jmp 0x72422c */ goto L_0072422c;
L_00724223:; BB(0x00724223);
    /* 00724223: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00724226: jne 0x724096 */ if (!fZ) goto L_00724096;
L_0072422c:; BB(0x0072422c);
    /* 0072422c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072422f: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00724232: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x724237u); f_0078ed20();
    /* 00724237: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724239: je 0x724252 */ if (fZ) goto L_00724252;
L_0072423b:; BB(0x0072423b);
    /* 0072423b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072423e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00724240: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00724243: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00724246: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x72424bu); f_00738a40();
    /* 0072424b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0072424e: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_00724252:; BB(0x00724252);
    /* 00724252: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00724255: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00724258: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x72425du); f_0078ed14();
    /* 0072425d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072425f: je 0x724096 */ if (fZ) goto L_00724096;
L_00724265:; BB(0x00724265);
    /* 00724265: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00724268: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072426b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x724270u); f_00857e98();
    /* 00724270: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00724271: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00724274: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00724277: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x72427cu); f_0078ed4c();
    /* 0072427c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0072427f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00724280: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00724283: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x724288u); f_00858009();
    /* 00724288: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00724289: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0072428c: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0072428f: mov esi, ecx */ r_esi = r_ecx;
    /* 00724291: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00724293: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00724295: jle 0x7242b9 */ if ((fZ||fS!=fO)) goto L_007242b9;
L_00724297:; BB(0x00724297);
    /* 00724297: movzx edx, word ptr [ecx + ebx*2] */ r_edx = (u32)R16((u32)(r_ecx+r_ebx*2));
    /* 0072429b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072429d: je 0x7242b9 */ if (fZ) goto L_007242b9;
L_0072429f:; BB(0x0072429f);
    /* 0072429f: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007242a2: je 0x7242b2 */ if (fZ) goto L_007242b2;
L_007242a4:; BB(0x007242a4);
    /* 007242a4: cmp edx, 0x3000 */ {  u32 a = r_edx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007242aa: je 0x7242b2 */ if (fZ) goto L_007242b2;
L_007242ac:; BB(0x007242ac);
    /* 007242ac: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 007242af: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_007242b2:; BB(0x007242b2);
    /* 007242b2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007242b5: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007242b7: jl 0x724297 */ if ((fS!=fO)) goto L_00724297;
L_007242b9:; BB(0x007242b9);
    /* 007242b9: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 007242be: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007242c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007242c3: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 007242c6: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007242c9: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x7242ceu); f_00813a78();
    /* 007242ce: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007242d1: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007242d4: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7242d9u); f_00858009();
    /* 007242d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007242da: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 007242df: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007242e2: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007242e5: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7242eau); f_00857dec();
    /* 007242ea: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007242ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007242f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007242f2: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007242f5: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007242f8: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x7242fdu); f_00738a40();
    /* 007242fd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00724300: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00724304: jmp 0x724096 */ goto L_00724096;
L_00724309:; BB(0x00724309);
    /* 00724309: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072430b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0072430e: jmp 0x7241b0 */ goto L_007241b0;
}

void f_00724314(void) /* sub_724314 */
{
    FN_ENTER(0x00724314);
    /* 00724314: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00724317: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724319: je 0x72432d */ if (fZ) goto L_0072432d;
L_0072431b:; BB(0x0072431b);
    /* 0072431b: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 0072431e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724320: je 0x72432d */ if (fZ) goto L_0072432d;
L_00724322:; BB(0x00724322);
    /* 00724322: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00724324: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00724327: call 0x738b08 */ r_esp -= 4; W32(r_esp, 0x72432cu); f_00738b08();
    /* 0072432c: ret  */ FN_RET(0x00724314); r_esp += 4; return;
L_0072432d:; BB(0x0072432d);
    /* 0072432d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0072432f: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00724332: call 0x738a9c */ r_esp -= 4; W32(r_esp, 0x724337u); f_00738a9c();
    /* 00724337: ret  */ FN_RET(0x00724314); r_esp += 4; return;
}

void f_00724338(void) /* sub_724338 */
{
    FN_ENTER(0x00724338);
    /* 00724338: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00724339: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072433b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072433d: call 0x72435c */ r_esp -= 4; W32(r_esp, 0x724342u); f_0072435c();
    /* 00724342: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00724346: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00724348: jne 0x72434e */ if (!fZ) goto L_0072434e;
L_0072434a:; BB(0x0072434a);
    /* 0072434a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072434b: ret 4 */ FN_RET(0x00724338); r_esp += 8; return;
L_0072434e:; BB(0x0072434e);
    /* 0072434e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072434f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x724354u); f_005c2f74();
    /* 00724354: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00724355: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00724356: ret 4 */ FN_RET(0x00724338); r_esp += 8; return;
}

void f_0072435c(void) /* sub_72435C */
{
    FN_ENTER(0x0072435c);
    /* 0072435c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072435d: mov ebp, esp */ r_ebp = r_esp;
    /* 0072435f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00724361: push 0x8f0f00 */ { u32 v = 0x8f0f00u; r_esp -= 4; W32(r_esp, v); }
    /* 00724366: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072436c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072436d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00724374: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00724377: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072437a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0072437d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00724380: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00724383: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00724386: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0072438d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00724390: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00724393: mov dword ptr [eax], 0xb3ff88 */ W32((u32)(r_eax), 0xb3ff88u);
    /* 00724399: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072439b: je 0x7243ac */ if (fZ) goto L_007243ac;
L_0072439d:; BB(0x0072439d);
    /* 0072439d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7243a2u); f_007127b0();
    /* 007243a2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007243a5: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_007243ac:; BB(0x007243ac);
    /* 007243ac: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 007243af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007243b1: je 0x7243c2 */ if (fZ) goto L_007243c2;
L_007243b3:; BB(0x007243b3);
    /* 007243b3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7243b8u); f_007127b0();
    /* 007243b8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007243bb: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
L_007243c2:; BB(0x007243c2);
    /* 007243c2: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007243c8: call 0x7180a8 */ r_esp -= 4; W32(r_esp, 0x7243cdu); f_007180a8();
    /* 007243cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007243d3: call 0x718108 */ r_esp -= 4; W32(r_esp, 0x7243d8u); f_00718108();
    /* 007243d8: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007243de: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7243e3u); f_0068d5a8();
    /* 007243e3: mov ebx, eax */ r_ebx = r_eax;
    /* 007243e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007243e8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007243ea: je 0x7243fa */ if (fZ) goto L_007243fa;
L_007243ec:; BB(0x007243ec);
    /* 007243ec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007243ee: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x7243f3u); f_00693728();
    /* 007243f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007243f5: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x7243fau); f_00685514();
L_007243fa:; BB(0x007243fa);
    /* 007243fa: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x7243ffu); f_007917b8();
    /* 007243ff: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00724402: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724404: jne 0x72440e */ if (!fZ) goto L_0072440e;
L_00724406:; BB(0x00724406);
    /* 00724406: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00724408: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x72440du); f_00791748();
    /* 0072440d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072440e:; BB(0x0072440e);
    /* 0072440e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00724415: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00724418: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x72441du); f_008171e8();
    /* 0072441d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00724420: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00724423: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072442a: mov esp, ebp */ r_esp = r_ebp;
    /* 0072442c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072442d: ret  */ FN_RET(0x0072435c); r_esp += 4; return;
}

void f_00724362(void)
{
    FN_ENTER(0x00724362);
    /* 00724362: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00724364: pop dword ptr [eax] */ { u32 v = R32(r_esp); r_esp += 4; W32((u32)(r_eax), v); }
    /* 00724366: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072436c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072436d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00724374: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00724377: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072437a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0072437d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00724380: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00724383: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00724386: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0072438d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00724390: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00724393: mov dword ptr [eax], 0xb3ff88 */ W32((u32)(r_eax), 0xb3ff88u);
    /* 00724399: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072439b: je 0x7243ac */ if (fZ) goto L_007243ac;
L_0072439d:; BB(0x0072439d);
    /* 0072439d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7243a2u); f_007127b0();
    /* 007243a2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007243a5: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_007243ac:; BB(0x007243ac);
    /* 007243ac: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 007243af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007243b1: je 0x7243c2 */ if (fZ) goto L_007243c2;
L_007243b3:; BB(0x007243b3);
    /* 007243b3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7243b8u); f_007127b0();
    /* 007243b8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007243bb: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
L_007243c2:; BB(0x007243c2);
    /* 007243c2: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007243c8: call 0x7180a8 */ r_esp -= 4; W32(r_esp, 0x7243cdu); f_007180a8();
    /* 007243cd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007243d3: call 0x718108 */ r_esp -= 4; W32(r_esp, 0x7243d8u); f_00718108();
    /* 007243d8: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007243de: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7243e3u); f_0068d5a8();
    /* 007243e3: mov ebx, eax */ r_ebx = r_eax;
    /* 007243e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007243e8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007243ea: je 0x7243fa */ if (fZ) goto L_007243fa;
L_007243ec:; BB(0x007243ec);
    /* 007243ec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007243ee: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x7243f3u); f_00693728();
    /* 007243f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007243f5: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x7243fau); f_00685514();
L_007243fa:; BB(0x007243fa);
    /* 007243fa: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x7243ffu); f_007917b8();
    /* 007243ff: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00724402: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724404: jne 0x72440e */ if (!fZ) goto L_0072440e;
L_00724406:; BB(0x00724406);
    /* 00724406: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00724408: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x72440du); f_00791748();
    /* 0072440d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072440e:; BB(0x0072440e);
    /* 0072440e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00724415: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00724418: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x72441du); f_008171e8();
    /* 0072441d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00724420: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00724423: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072442a: mov esp, ebp */ r_esp = r_ebp;
    /* 0072442c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072442d: ret  */ FN_RET(0x00724362); r_esp += 4; return;
}

void f_00724430(void) /* sub_724430 */
{
    FN_ENTER(0x00724430);
    /* 00724430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00724431: mov ebp, esp */ r_ebp = r_esp;
    /* 00724433: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00724435: push 0x8f0f1c */ { u32 v = 0x8f0f1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0072443a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00724440: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00724441: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00724448: sub esp, 0x114 */ {  u32 a = r_esp; u32 b = 0x114u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072444e: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00724451: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00724454: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00724457: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0072445a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072445d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00724460: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x724465u); f_008193cc();
    /* 00724465: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0072446c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072446f: mov dword ptr [edx], 0xb3ff88 */ W32((u32)(r_edx), 0xb3ff88u);
    /* 00724475: mov eax, dword ptr [0x9f2508] */ r_eax = R32((u32)(0x9f2508u));
    /* 0072447a: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 00724481: push 0xed */ { u32 v = 0xedu; r_esp -= 4; W32(r_esp, v); }
    /* 00724486: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00724489: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x72448eu); f_0073ec50();
    /* 0072448e: mov ebx, eax */ r_ebx = r_eax;
    /* 00724490: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 00724495: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x72449au); f_0073ec50();
    /* 0072449a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0072449c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072449d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072449e: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x7244a3u); f_0073a8dc();
    /* 007244a3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007244a6: push 0x17a */ { u32 v = 0x17au; r_esp -= 4; W32(r_esp, v); }
    /* 007244ab: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 007244ae: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7244b3u); f_0079317c();
    /* 007244b3: mov esi, eax */ r_esi = r_eax;
    /* 007244b5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007244b8: call 0x78c098 */ r_esp -= 4; W32(r_esp, 0x7244bdu); f_0078c098();
    /* 007244bd: mov ebx, eax */ r_ebx = r_eax;
    /* 007244bf: call 0x78c0a0 */ r_esp -= 4; W32(r_esp, 0x7244c4u); f_0078c0a0();
    /* 007244c4: lea edx, [ebp - 0x120] */ r_edx = (u32)(r_ebp+0xfffffee0u);
    /* 007244ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007244cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007244cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007244cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007244ce: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7244d3u); f_00857e29();
    /* 007244d3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007244d6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007244d9: lea eax, [ebp - 0x120] */ r_eax = (u32)(r_ebp+0xfffffee0u);
    /* 007244df: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007244e1: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 007244e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007244e5: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7244eau); f_0073ae38();
    /* 007244ea: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007244f0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7244f5u); f_0068d5a8();
    /* 007244f5: mov ebx, eax */ r_ebx = r_eax;
    /* 007244f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007244fa: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007244fc: je 0x72450e */ if (fZ) goto L_0072450e;
L_007244fe:; BB(0x007244fe);
    /* 007244fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00724500: call 0x6936ec */ r_esp -= 4; W32(r_esp, 0x724505u); f_006936ec();
    /* 00724505: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00724507: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00724509: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x72450eu); f_006854a8();
L_0072450e:; BB(0x0072450e);
    /* 0072450e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00724514: call 0x7181b8 */ r_esp -= 4; W32(r_esp, 0x724519u); f_007181b8();
    /* 00724519: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072451f: call 0x7180d8 */ r_esp -= 4; W32(r_esp, 0x724524u); f_007180d8();
    /* 00724524: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00724527: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 0072452e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00724531: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00724534: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00724536: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00724539: and edx, 0xff7f */ {  u32 a = r_edx; u32 b = 0xff7fu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072453f: mov word ptr [0xa98474], dx */ W16((u32)(0xa98474u), (u16)r_edx);
    /* 00724546: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 00724549: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 0072454c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072454f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00724556: mov esp, ebp */ r_esp = r_ebp;
    /* 00724558: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00724559: ret 4 */ FN_RET(0x00724430); r_esp += 8; return;
}

void f_0072455c(void) /* sub_72455C */
{
    FN_ENTER(0x0072455c);
    /* 0072455c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072455d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072455e: sub esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00724564: mov esi, ecx */ r_esi = r_ecx;
    /* 00724566: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00724569: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072456c: je 0x724739 */ if (fZ) goto L_00724739;
L_00724572:; BB(0x00724572);
    /* 00724572: call 0x78c0a8 */ r_esp -= 4; W32(r_esp, 0x724577u); f_0078c0a8();
    /* 00724577: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072457a: jne 0x7245ea */ if (!fZ) goto L_007245ea;
L_0072457c:; BB(0x0072457c);
    /* 0072457c: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 0072457f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724581: je 0x72458f */ if (fZ) goto L_0072458f;
L_00724583:; BB(0x00724583);
    /* 00724583: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x724588u); f_007127b0();
    /* 00724588: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
L_0072458f:; BB(0x0072458f);
    /* 0072458f: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 00724592: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724594: je 0x7245a2 */ if (fZ) goto L_007245a2;
L_00724596:; BB(0x00724596);
    /* 00724596: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x72459bu); f_007127b0();
    /* 0072459b: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
L_007245a2:; BB(0x007245a2);
    /* 007245a2: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 007245a7: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7245acu); f_0073ec50();
    /* 007245ac: mov edi, eax */ r_edi = r_eax;
    /* 007245ae: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 007245b3: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7245b8u); f_0073ec50();
    /* 007245b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007245b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007245ba: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7245bfu); f_0073a888();
    /* 007245bf: push 0x17e */ { u32 v = 0x17eu; r_esp -= 4; W32(r_esp, v); }
    /* 007245c4: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 007245c7: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7245ccu); f_0079317c();
    /* 007245cc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007245cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007245d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007245d2: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 007245d5: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7245dau); f_0073ae38();
    /* 007245da: mov dword ptr [esi + 0x24], 7 */ W32((u32)(r_esi+0x24u), 0x7u);
    /* 007245e1: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007245e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007245e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007245e9: ret  */ FN_RET(0x0072455c); r_esp += 4; return;
L_007245ea:; BB(0x007245ea);
    /* 007245ea: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007245f0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7245f5u); f_0068d5a8();
    /* 007245f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007245f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007245f8: je 0x724d40 */ if (fZ) goto L_00724d40;
L_007245fe:; BB(0x007245fe);
    /* 007245fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00724600: mov ecx, eax */ r_ecx = r_eax;
    /* 00724602: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x724608u); call_ind(t); }
    /* 00724608: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072460a: je 0x724739 */ if (fZ) goto L_00724739;
L_00724610:; BB(0x00724610);
    /* 00724610: mov byte ptr [esp], 0xce */ W8((u32)(r_esp), 0xceu);
    /* 00724614: mov byte ptr [esp + 1], 0x17 */ W8((u32)(r_esp+0x1u), 0x17u);
    /* 00724619: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072461f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x724624u); f_0068d5a8();
    /* 00724624: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00724625: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724627: je 0x724703 */ if (fZ) goto L_00724703;
L_0072462d:; BB(0x0072462d);
    /* 0072462d: mov edx, 0xa9c940 */ r_edx = 0xa9c940u;
    /* 00724632: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00724634: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00724638: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0072463b: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0072463f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 00724642: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00724646: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 00724649: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0072464d: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 00724650: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00724654: mov edi, dword ptr [edx + 0x14] */ r_edi = R32((u32)(r_edx+0x14u));
    /* 00724657: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0072465b: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 0072465e: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00724662: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 00724665: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00724669: mov edi, dword ptr [edx + 0x20] */ r_edi = R32((u32)(r_edx+0x20u));
    /* 0072466c: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00724670: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 00724673: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 00724677: mov edi, dword ptr [edx + 0x28] */ r_edi = R32((u32)(r_edx+0x28u));
    /* 0072467a: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0072467e: mov edi, dword ptr [edx + 0x2c] */ r_edi = R32((u32)(r_edx+0x2cu));
    /* 00724681: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00724685: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 00724688: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 0072468c: mov edi, dword ptr [edx + 0x34] */ r_edi = R32((u32)(r_edx+0x34u));
    /* 0072468f: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 00724693: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 00724696: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 0072469a: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 0072469d: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 007246a1: mov edi, dword ptr [edx + 0x40] */ r_edi = R32((u32)(r_edx+0x40u));
    /* 007246a4: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007246a8: mov edi, dword ptr [edx + 0x44] */ r_edi = R32((u32)(r_edx+0x44u));
    /* 007246ab: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 007246af: mov edi, dword ptr [edx + 0x48] */ r_edi = R32((u32)(r_edx+0x48u));
    /* 007246b2: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 007246b6: mov edi, dword ptr [edx + 0x4c] */ r_edi = R32((u32)(r_edx+0x4cu));
    /* 007246b9: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 007246bd: mov edi, dword ptr [edx + 0x50] */ r_edi = R32((u32)(r_edx+0x50u));
    /* 007246c0: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 007246c3: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 007246c7: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 007246cb: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 007246d1: mov dword ptr [esp + 8], 1 */ W32((u32)(r_esp+0x8u), 0x1u);
    /* 007246d9: mov ecx, eax */ r_ecx = r_eax;
    /* 007246db: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007246df: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x7246e4u); f_006936b4();
    /* 007246e4: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007246e8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007246ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007246eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007246ec: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7246f1u); f_00857dec();
    /* 007246f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007246f4: call 0x78c0b0 */ r_esp -= 4; W32(r_esp, 0x7246f9u); f_0078c0b0();
    /* 007246f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007246fa: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 007246fe: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x724703u); f_00800464();
L_00724703:; BB(0x00724703);
    /* 00724703: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00724706: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724708: je 0x724716 */ if (fZ) goto L_00724716;
L_0072470a:; BB(0x0072470a);
    /* 0072470a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x72470fu); f_007127b0();
    /* 0072470f: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
L_00724716:; BB(0x00724716);
    /* 00724716: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 00724719: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072471b: je 0x724729 */ if (fZ) goto L_00724729;
L_0072471d:; BB(0x0072471d);
    /* 0072471d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x724722u); f_007127b0();
    /* 00724722: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
L_00724729:; BB(0x00724729);
    /* 00724729: mov dword ptr [esi + 0x24], 7 */ W32((u32)(r_esi+0x24u), 0x7u);
    /* 00724730: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00724736: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00724737: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00724738: ret  */ FN_RET(0x0072455c); r_esp += 4; return;
L_00724739:; BB(0x00724739);
    /* 00724739: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072473f: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x724744u); f_00719140();
    /* 00724744: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00724745: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00724748: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072474a: je 0x7256e3 */ if (fZ) goto L_007256e3;
L_00724750:; BB(0x00724750);
    /* 00724750: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724753: je 0x72568c */ if (fZ) goto L_0072568c;
L_00724759:; BB(0x00724759);
    /* 00724759: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072475c: je 0x7250c1 */ if (fZ) goto L_007250c1;
L_00724762:; BB(0x00724762);
    /* 00724762: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724765: je 0x72507e */ if (fZ) goto L_0072507e;
L_0072476b:; BB(0x0072476b);
    /* 0072476b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072476e: je 0x7247d7 */ if (fZ) goto L_007247d7;
L_00724770:; BB(0x00724770);
    /* 00724770: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724773: je 0x724811 */ if (fZ) goto L_00724811;
L_00724779:; BB(0x00724779);
    /* 00724779: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072477c: jne 0x724b81 */ if (!fZ) goto L_00724b81;
L_00724782:; BB(0x00724782);
    /* 00724782: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00724785: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724787: je 0x724e94 */ if (fZ) goto L_00724e94;
L_0072478d:; BB(0x0072478d);
    /* 0072478d: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 00724793: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00724798: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x72479du); f_007c1160();
    /* 0072479d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072479f: je 0x724b81 */ if (fZ) goto L_00724b81;
L_007247a5:; BB(0x007247a5);
    /* 007247a5: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 007247a8: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x7247adu); f_0073b170();
    /* 007247ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007247af: je 0x7247c6 */ if (fZ) goto L_007247c6;
L_007247b1:; BB(0x007247b1);
    /* 007247b1: call 0x71631c */ r_esp -= 4; W32(r_esp, 0x7247b6u); f_0071631c();
    /* 007247b6: mov dword ptr [esi + 0x24], 8 */ W32((u32)(r_esi+0x24u), 0x8u);
    /* 007247bd: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007247c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007247c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007247c5: ret  */ FN_RET(0x0072455c); r_esp += 4; return;
L_007247c6:; BB(0x007247c6);
    /* 007247c6: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 007247c9: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x7247ceu); f_0073b0f0();
    /* 007247ce: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007247d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007247d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007247d6: ret  */ FN_RET(0x0072455c); r_esp += 4; return;
L_007247d7:; BB(0x007247d7);
    /* 007247d7: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 007247da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007247dc: je 0x72505f */ if (fZ) goto L_0072505f;
L_007247e2:; BB(0x007247e2);
    /* 007247e2: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007247e9: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007247ee: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 007247f1: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 007247f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007247fa: je 0x724803 */ if (fZ) goto L_00724803;
L_007247fc:; BB(0x007247fc);
    /* 007247fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007247fe: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x724803u); f_00760acc();
L_00724803:; BB(0x00724803);
    /* 00724803: mov dword ptr [esi + 0x28], 0x1c2 */ W32((u32)(r_esi+0x28u), 0x1c2u);
    /* 0072480a: mov dword ptr [esi + 0x24], 6 */ W32((u32)(r_esi+0x24u), 0x6u);
L_00724811:; BB(0x00724811);
    /* 00724811: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 00724814: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0072481b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072481d: je 0x7249d9 */ if (fZ) goto L_007249d9;
L_00724823:; BB(0x00724823);
    /* 00724823: mov byte ptr [esp + 0xb8], 0xce */ W8((u32)(r_esp+0xb8u), 0xceu);
    /* 0072482b: mov byte ptr [esp + 0xb9], 0x17 */ W8((u32)(r_esp+0xb9u), 0x17u);
    /* 00724833: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00724839: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x72483eu); f_0068d5a8();
    /* 0072483e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072483f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724841: je 0x72496b */ if (fZ) goto L_0072496b;
L_00724847:; BB(0x00724847);
    /* 00724847: mov edx, 0xa9c940 */ r_edx = 0xa9c940u;
    /* 0072484c: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0072484e: mov dword ptr [esp + 0xbc], edi */ W32((u32)(r_esp+0xbcu), r_edi);
    /* 00724855: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00724858: mov dword ptr [esp + 0xc0], edi */ W32((u32)(r_esp+0xc0u), r_edi);
    /* 0072485f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 00724862: mov dword ptr [esp + 0xc4], edi */ W32((u32)(r_esp+0xc4u), r_edi);
    /* 00724869: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 0072486c: mov dword ptr [esp + 0xc8], edi */ W32((u32)(r_esp+0xc8u), r_edi);
    /* 00724873: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 00724876: mov dword ptr [esp + 0xcc], edi */ W32((u32)(r_esp+0xccu), r_edi);
    /* 0072487d: mov edi, dword ptr [edx + 0x14] */ r_edi = R32((u32)(r_edx+0x14u));
    /* 00724880: mov dword ptr [esp + 0xd0], edi */ W32((u32)(r_esp+0xd0u), r_edi);
    /* 00724887: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 0072488a: mov dword ptr [esp + 0xd4], edi */ W32((u32)(r_esp+0xd4u), r_edi);
    /* 00724891: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 00724894: mov dword ptr [esp + 0xd8], edi */ W32((u32)(r_esp+0xd8u), r_edi);
    /* 0072489b: mov edi, dword ptr [edx + 0x20] */ r_edi = R32((u32)(r_edx+0x20u));
    /* 0072489e: mov dword ptr [esp + 0xdc], edi */ W32((u32)(r_esp+0xdcu), r_edi);
    /* 007248a5: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 007248a8: mov dword ptr [esp + 0xe0], edi */ W32((u32)(r_esp+0xe0u), r_edi);
    /* 007248af: mov edi, dword ptr [edx + 0x28] */ r_edi = R32((u32)(r_edx+0x28u));
    /* 007248b2: mov dword ptr [esp + 0xe4], edi */ W32((u32)(r_esp+0xe4u), r_edi);
    /* 007248b9: mov edi, dword ptr [edx + 0x2c] */ r_edi = R32((u32)(r_edx+0x2cu));
    /* 007248bc: mov dword ptr [esp + 0xe8], edi */ W32((u32)(r_esp+0xe8u), r_edi);
    /* 007248c3: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 007248c6: mov dword ptr [esp + 0xec], edi */ W32((u32)(r_esp+0xecu), r_edi);
    /* 007248cd: mov edi, dword ptr [edx + 0x34] */ r_edi = R32((u32)(r_edx+0x34u));
    /* 007248d0: mov dword ptr [esp + 0xf0], edi */ W32((u32)(r_esp+0xf0u), r_edi);
    /* 007248d7: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 007248da: mov dword ptr [esp + 0xf4], edi */ W32((u32)(r_esp+0xf4u), r_edi);
    /* 007248e1: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 007248e4: mov dword ptr [esp + 0xf8], edi */ W32((u32)(r_esp+0xf8u), r_edi);
    /* 007248eb: mov edi, dword ptr [edx + 0x40] */ r_edi = R32((u32)(r_edx+0x40u));
    /* 007248ee: mov dword ptr [esp + 0xfc], edi */ W32((u32)(r_esp+0xfcu), r_edi);
    /* 007248f5: mov edi, dword ptr [edx + 0x44] */ r_edi = R32((u32)(r_edx+0x44u));
    /* 007248f8: mov dword ptr [esp + 0x100], edi */ W32((u32)(r_esp+0x100u), r_edi);
    /* 007248ff: mov edi, dword ptr [edx + 0x48] */ r_edi = R32((u32)(r_edx+0x48u));
    /* 00724902: mov dword ptr [esp + 0x104], edi */ W32((u32)(r_esp+0x104u), r_edi);
    /* 00724909: mov edi, dword ptr [edx + 0x4c] */ r_edi = R32((u32)(r_edx+0x4cu));
    /* 0072490c: mov dword ptr [esp + 0x108], edi */ W32((u32)(r_esp+0x108u), r_edi);
    /* 00724913: mov edi, dword ptr [edx + 0x50] */ r_edi = R32((u32)(r_edx+0x50u));
    /* 00724916: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 00724919: mov dword ptr [esp + 0x10c], edi */ W32((u32)(r_esp+0x10cu), r_edi);
    /* 00724920: mov dword ptr [esp + 0x110], edx */ W32((u32)(r_esp+0x110u), r_edx);
    /* 00724927: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 0072492d: mov dword ptr [esp + 0xc0], 3 */ W32((u32)(r_esp+0xc0u), 0x3u);
    /* 00724938: mov ecx, eax */ r_ecx = r_eax;
    /* 0072493a: mov dword ptr [esp + 0xbc], edx */ W32((u32)(r_esp+0xbcu), r_edx);
    /* 00724941: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x724946u); f_006936b4();
    /* 00724946: lea edx, [esp + 0xc4] */ r_edx = (u32)(r_esp+0xc4u);
    /* 0072494d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0072494f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00724950: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00724951: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x724956u); f_00857dec();
    /* 00724956: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00724959: call 0x78c0b0 */ r_esp -= 4; W32(r_esp, 0x72495eu); f_0078c0b0();
    /* 0072495e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072495f: lea ecx, [esp + 0xbc] */ r_ecx = (u32)(r_esp+0xbcu);
    /* 00724966: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x72496bu); f_00800464();
L_0072496b:; BB(0x0072496b);
    /* 0072496b: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 0072496e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724970: je 0x72497e */ if (fZ) goto L_0072497e;
L_00724972:; BB(0x00724972);
    /* 00724972: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x724977u); f_007127b0();
    /* 00724977: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
L_0072497e:; BB(0x0072497e);
    /* 0072497e: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 00724981: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724983: je 0x724991 */ if (fZ) goto L_00724991;
L_00724985:; BB(0x00724985);
    /* 00724985: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x72498au); f_007127b0();
    /* 0072498a: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
L_00724991:; BB(0x00724991);
    /* 00724991: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00724996: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x72499bu); f_0073ec50();
    /* 0072499b: mov edi, eax */ r_edi = r_eax;
    /* 0072499d: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 007249a2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7249a7u); f_0073ec50();
    /* 007249a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007249a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007249a9: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7249aeu); f_0073a888();
    /* 007249ae: push 0x17d */ { u32 v = 0x17du; r_esp -= 4; W32(r_esp, v); }
    /* 007249b3: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 007249b6: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7249bbu); f_0079317c();
    /* 007249bb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007249be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007249c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007249c1: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 007249c4: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7249c9u); f_0073ae38();
    /* 007249c9: mov dword ptr [esi + 0x24], 7 */ W32((u32)(r_esi+0x24u), 0x7u);
    /* 007249d0: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007249d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007249d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007249d8: ret  */ FN_RET(0x0072455c); r_esp += 4; return;
L_007249d9:; BB(0x007249d9);
    /* 007249d9: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007249db: je 0x724b76 */ if (fZ) goto L_00724b76;
L_007249e1:; BB(0x007249e1);
    /* 007249e1: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7249e6u); f_007365f4();
    /* 007249e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007249e8: je 0x7249f8 */ if (fZ) goto L_007249f8;
L_007249ea:; BB(0x007249ea);
    /* 007249ea: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007249ed: je 0x724ea9 */ if (fZ) goto L_00724ea9;
L_007249f3:; BB(0x007249f3);
    /* 007249f3: jmp 0x724b76 */ goto L_00724b76;
L_007249f8:; BB(0x007249f8);
    /* 007249f8: mov byte ptr [esp + 0x170], 0xce */ W8((u32)(r_esp+0x170u), 0xceu);
    /* 00724a00: mov byte ptr [esp + 0x171], 0x17 */ W8((u32)(r_esp+0x171u), 0x17u);
    /* 00724a08: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00724a0e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x724a13u); f_0068d5a8();
    /* 00724a13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00724a14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724a16: je 0x724b40 */ if (fZ) goto L_00724b40;
L_00724a1c:; BB(0x00724a1c);
    /* 00724a1c: mov edx, 0xa9c940 */ r_edx = 0xa9c940u;
    /* 00724a21: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00724a23: mov dword ptr [esp + 0x174], edi */ W32((u32)(r_esp+0x174u), r_edi);
    /* 00724a2a: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00724a2d: mov dword ptr [esp + 0x178], edi */ W32((u32)(r_esp+0x178u), r_edi);
    /* 00724a34: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 00724a37: mov dword ptr [esp + 0x17c], edi */ W32((u32)(r_esp+0x17cu), r_edi);
    /* 00724a3e: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 00724a41: mov dword ptr [esp + 0x180], edi */ W32((u32)(r_esp+0x180u), r_edi);
    /* 00724a48: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 00724a4b: mov dword ptr [esp + 0x184], edi */ W32((u32)(r_esp+0x184u), r_edi);
    /* 00724a52: mov edi, dword ptr [edx + 0x14] */ r_edi = R32((u32)(r_edx+0x14u));
    /* 00724a55: mov dword ptr [esp + 0x188], edi */ W32((u32)(r_esp+0x188u), r_edi);
    /* 00724a5c: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 00724a5f: mov dword ptr [esp + 0x18c], edi */ W32((u32)(r_esp+0x18cu), r_edi);
    /* 00724a66: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 00724a69: mov dword ptr [esp + 0x190], edi */ W32((u32)(r_esp+0x190u), r_edi);
    /* 00724a70: mov edi, dword ptr [edx + 0x20] */ r_edi = R32((u32)(r_edx+0x20u));
    /* 00724a73: mov dword ptr [esp + 0x194], edi */ W32((u32)(r_esp+0x194u), r_edi);
    /* 00724a7a: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 00724a7d: mov dword ptr [esp + 0x198], edi */ W32((u32)(r_esp+0x198u), r_edi);
    /* 00724a84: mov edi, dword ptr [edx + 0x28] */ r_edi = R32((u32)(r_edx+0x28u));
    /* 00724a87: mov dword ptr [esp + 0x19c], edi */ W32((u32)(r_esp+0x19cu), r_edi);
    /* 00724a8e: mov edi, dword ptr [edx + 0x2c] */ r_edi = R32((u32)(r_edx+0x2cu));
    /* 00724a91: mov dword ptr [esp + 0x1a0], edi */ W32((u32)(r_esp+0x1a0u), r_edi);
    /* 00724a98: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 00724a9b: mov dword ptr [esp + 0x1a4], edi */ W32((u32)(r_esp+0x1a4u), r_edi);
    /* 00724aa2: mov edi, dword ptr [edx + 0x34] */ r_edi = R32((u32)(r_edx+0x34u));
    /* 00724aa5: mov dword ptr [esp + 0x1a8], edi */ W32((u32)(r_esp+0x1a8u), r_edi);
    /* 00724aac: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 00724aaf: mov dword ptr [esp + 0x1ac], edi */ W32((u32)(r_esp+0x1acu), r_edi);
    /* 00724ab6: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 00724ab9: mov dword ptr [esp + 0x1b0], edi */ W32((u32)(r_esp+0x1b0u), r_edi);
    /* 00724ac0: mov edi, dword ptr [edx + 0x40] */ r_edi = R32((u32)(r_edx+0x40u));
    /* 00724ac3: mov dword ptr [esp + 0x1b4], edi */ W32((u32)(r_esp+0x1b4u), r_edi);
    /* 00724aca: mov edi, dword ptr [edx + 0x44] */ r_edi = R32((u32)(r_edx+0x44u));
    /* 00724acd: mov dword ptr [esp + 0x1b8], edi */ W32((u32)(r_esp+0x1b8u), r_edi);
    /* 00724ad4: mov edi, dword ptr [edx + 0x48] */ r_edi = R32((u32)(r_edx+0x48u));
    /* 00724ad7: mov dword ptr [esp + 0x1bc], edi */ W32((u32)(r_esp+0x1bcu), r_edi);
    /* 00724ade: mov edi, dword ptr [edx + 0x4c] */ r_edi = R32((u32)(r_edx+0x4cu));
    /* 00724ae1: mov dword ptr [esp + 0x1c0], edi */ W32((u32)(r_esp+0x1c0u), r_edi);
    /* 00724ae8: mov edi, dword ptr [edx + 0x50] */ r_edi = R32((u32)(r_edx+0x50u));
    /* 00724aeb: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 00724aee: mov dword ptr [esp + 0x1c4], edi */ W32((u32)(r_esp+0x1c4u), r_edi);
    /* 00724af5: mov dword ptr [esp + 0x1c8], edx */ W32((u32)(r_esp+0x1c8u), r_edx);
    /* 00724afc: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 00724b02: mov dword ptr [esp + 0x178], 2 */ W32((u32)(r_esp+0x178u), 0x2u);
    /* 00724b0d: mov ecx, eax */ r_ecx = r_eax;
    /* 00724b0f: mov dword ptr [esp + 0x174], edx */ W32((u32)(r_esp+0x174u), r_edx);
    /* 00724b16: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x724b1bu); f_006936b4();
    /* 00724b1b: lea edx, [esp + 0x17c] */ r_edx = (u32)(r_esp+0x17cu);
    /* 00724b22: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00724b24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00724b25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00724b26: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x724b2bu); f_00857dec();
    /* 00724b2b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00724b2e: call 0x78c0b0 */ r_esp -= 4; W32(r_esp, 0x724b33u); f_0078c0b0();
    /* 00724b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00724b34: lea ecx, [esp + 0x174] */ r_ecx = (u32)(r_esp+0x174u);
    /* 00724b3b: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x724b40u); f_00800464();
L_00724b40:; BB(0x00724b40);
    /* 00724b40: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00724b43: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724b45: je 0x724b53 */ if (fZ) goto L_00724b53;
L_00724b47:; BB(0x00724b47);
    /* 00724b47: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x724b4cu); f_007127b0();
    /* 00724b4c: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
L_00724b53:; BB(0x00724b53);
    /* 00724b53: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 00724b56: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724b58: je 0x724b66 */ if (fZ) goto L_00724b66;
L_00724b5a:; BB(0x00724b5a);
    /* 00724b5a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x724b5fu); f_007127b0();
    /* 00724b5f: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
L_00724b66:; BB(0x00724b66);
    /* 00724b66: mov dword ptr [esi + 0x24], 7 */ W32((u32)(r_esi+0x24u), 0x7u);
    /* 00724b6d: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00724b73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00724b74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00724b75: ret  */ FN_RET(0x0072455c); r_esp += 4; return;
L_00724b76:; BB(0x00724b76);
    /* 00724b76: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00724b79: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00724b7c: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 00724b7f: je 0x724b8a */ if (fZ) goto L_00724b8a;
L_00724b81:; BB(0x00724b81);
    /* 00724b81: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00724b87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00724b88: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00724b89: ret  */ FN_RET(0x0072455c); r_esp += 4; return;
L_00724b8a:; BB(0x00724b8a);
    /* 00724b8a: mov byte ptr [esp + 0x1cc], 0xce */ W8((u32)(r_esp+0x1ccu), 0xceu);
    /* 00724b92: mov byte ptr [esp + 0x1cd], 0x17 */ W8((u32)(r_esp+0x1cdu), 0x17u);
    /* 00724b9a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00724ba0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x724ba5u); f_0068d5a8();
    /* 00724ba5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00724ba6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724ba8: je 0x724cd2 */ if (fZ) goto L_00724cd2;
L_00724bae:; BB(0x00724bae);
    /* 00724bae: mov edx, 0xa9c940 */ r_edx = 0xa9c940u;
    /* 00724bb3: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00724bb5: mov dword ptr [esp + 0x1d0], edi */ W32((u32)(r_esp+0x1d0u), r_edi);
    /* 00724bbc: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00724bbf: mov dword ptr [esp + 0x1d4], edi */ W32((u32)(r_esp+0x1d4u), r_edi);
    /* 00724bc6: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 00724bc9: mov dword ptr [esp + 0x1d8], edi */ W32((u32)(r_esp+0x1d8u), r_edi);
    /* 00724bd0: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 00724bd3: mov dword ptr [esp + 0x1dc], edi */ W32((u32)(r_esp+0x1dcu), r_edi);
    /* 00724bda: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 00724bdd: mov dword ptr [esp + 0x1e0], edi */ W32((u32)(r_esp+0x1e0u), r_edi);
    /* 00724be4: mov edi, dword ptr [edx + 0x14] */ r_edi = R32((u32)(r_edx+0x14u));
    /* 00724be7: mov dword ptr [esp + 0x1e4], edi */ W32((u32)(r_esp+0x1e4u), r_edi);
    /* 00724bee: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 00724bf1: mov dword ptr [esp + 0x1e8], edi */ W32((u32)(r_esp+0x1e8u), r_edi);
    /* 00724bf8: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 00724bfb: mov dword ptr [esp + 0x1ec], edi */ W32((u32)(r_esp+0x1ecu), r_edi);
    /* 00724c02: mov edi, dword ptr [edx + 0x20] */ r_edi = R32((u32)(r_edx+0x20u));
    /* 00724c05: mov dword ptr [esp + 0x1f0], edi */ W32((u32)(r_esp+0x1f0u), r_edi);
    /* 00724c0c: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 00724c0f: mov dword ptr [esp + 0x1f4], edi */ W32((u32)(r_esp+0x1f4u), r_edi);
    /* 00724c16: mov edi, dword ptr [edx + 0x28] */ r_edi = R32((u32)(r_edx+0x28u));
    /* 00724c19: mov dword ptr [esp + 0x1f8], edi */ W32((u32)(r_esp+0x1f8u), r_edi);
    /* 00724c20: mov edi, dword ptr [edx + 0x2c] */ r_edi = R32((u32)(r_edx+0x2cu));
    /* 00724c23: mov dword ptr [esp + 0x1fc], edi */ W32((u32)(r_esp+0x1fcu), r_edi);
    /* 00724c2a: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 00724c2d: mov dword ptr [esp + 0x200], edi */ W32((u32)(r_esp+0x200u), r_edi);
    /* 00724c34: mov edi, dword ptr [edx + 0x34] */ r_edi = R32((u32)(r_edx+0x34u));
    /* 00724c37: mov dword ptr [esp + 0x204], edi */ W32((u32)(r_esp+0x204u), r_edi);
    /* 00724c3e: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 00724c41: mov dword ptr [esp + 0x208], edi */ W32((u32)(r_esp+0x208u), r_edi);
    /* 00724c48: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 00724c4b: mov dword ptr [esp + 0x20c], edi */ W32((u32)(r_esp+0x20cu), r_edi);
    /* 00724c52: mov edi, dword ptr [edx + 0x40] */ r_edi = R32((u32)(r_edx+0x40u));
    /* 00724c55: mov dword ptr [esp + 0x210], edi */ W32((u32)(r_esp+0x210u), r_edi);
    /* 00724c5c: mov edi, dword ptr [edx + 0x44] */ r_edi = R32((u32)(r_edx+0x44u));
    /* 00724c5f: mov dword ptr [esp + 0x214], edi */ W32((u32)(r_esp+0x214u), r_edi);
    /* 00724c66: mov edi, dword ptr [edx + 0x48] */ r_edi = R32((u32)(r_edx+0x48u));
    /* 00724c69: mov dword ptr [esp + 0x218], edi */ W32((u32)(r_esp+0x218u), r_edi);
    /* 00724c70: mov edi, dword ptr [edx + 0x4c] */ r_edi = R32((u32)(r_edx+0x4cu));
    /* 00724c73: mov dword ptr [esp + 0x21c], edi */ W32((u32)(r_esp+0x21cu), r_edi);
    /* 00724c7a: mov edi, dword ptr [edx + 0x50] */ r_edi = R32((u32)(r_edx+0x50u));
    /* 00724c7d: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 00724c80: mov dword ptr [esp + 0x220], edi */ W32((u32)(r_esp+0x220u), r_edi);
    /* 00724c87: mov dword ptr [esp + 0x224], edx */ W32((u32)(r_esp+0x224u), r_edx);
    /* 00724c8e: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 00724c94: mov dword ptr [esp + 0x1d4], 1 */ W32((u32)(r_esp+0x1d4u), 0x1u);
    /* 00724c9f: mov ecx, eax */ r_ecx = r_eax;
    /* 00724ca1: mov dword ptr [esp + 0x1d0], edx */ W32((u32)(r_esp+0x1d0u), r_edx);
    /* 00724ca8: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x724cadu); f_006936b4();
    /* 00724cad: lea edx, [esp + 0x1d8] */ r_edx = (u32)(r_esp+0x1d8u);
    /* 00724cb4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00724cb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00724cb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00724cb8: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x724cbdu); f_00857dec();
    /* 00724cbd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00724cc0: call 0x78c0b0 */ r_esp -= 4; W32(r_esp, 0x724cc5u); f_0078c0b0();
    /* 00724cc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00724cc6: lea ecx, [esp + 0x1d0] */ r_ecx = (u32)(r_esp+0x1d0u);
    /* 00724ccd: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x724cd2u); f_00800464();
L_00724cd2:; BB(0x00724cd2);
    /* 00724cd2: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00724cd5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724cd7: je 0x724ce5 */ if (fZ) goto L_00724ce5;
L_00724cd9:; BB(0x00724cd9);
    /* 00724cd9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x724cdeu); f_007127b0();
    /* 00724cde: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
L_00724ce5:; BB(0x00724ce5);
    /* 00724ce5: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 00724ce8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724cea: je 0x724cf8 */ if (fZ) goto L_00724cf8;
L_00724cec:; BB(0x00724cec);
    /* 00724cec: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x724cf1u); f_007127b0();
    /* 00724cf1: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
L_00724cf8:; BB(0x00724cf8);
    /* 00724cf8: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00724cfd: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x724d02u); f_0073ec50();
    /* 00724d02: mov edi, eax */ r_edi = r_eax;
    /* 00724d04: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00724d09: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x724d0eu); f_0073ec50();
    /* 00724d0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00724d0f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00724d10: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x724d15u); f_0073a888();
    /* 00724d15: push 0x17e */ { u32 v = 0x17eu; r_esp -= 4; W32(r_esp, v); }
    /* 00724d1a: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00724d1d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x724d22u); f_0079317c();
    /* 00724d22: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00724d25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00724d27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00724d28: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00724d2b: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x724d30u); f_0073ae38();
    /* 00724d30: mov dword ptr [esi + 0x24], 7 */ W32((u32)(r_esi+0x24u), 0x7u);
    /* 00724d37: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00724d3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00724d3e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00724d3f: ret  */ FN_RET(0x0072455c); r_esp += 4; return;
L_00724d40:; BB(0x00724d40);
    /* 00724d40: mov byte ptr [esp + 0x5c], 0xce */ W8((u32)(r_esp+0x5cu), 0xceu);
    /* 00724d45: mov byte ptr [esp + 0x5d], 0x17 */ W8((u32)(r_esp+0x5du), 0x17u);
    /* 00724d4a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00724d50: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x724d55u); f_0068d5a8();
    /* 00724d55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00724d56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724d58: je 0x724e5e */ if (fZ) goto L_00724e5e;
L_00724d5e:; BB(0x00724d5e);
    /* 00724d5e: mov edx, 0xa9c940 */ r_edx = 0xa9c940u;
    /* 00724d63: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00724d65: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 00724d69: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00724d6c: mov dword ptr [esp + 0x64], edi */ W32((u32)(r_esp+0x64u), r_edi);
    /* 00724d70: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 00724d73: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 00724d77: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 00724d7a: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 00724d7e: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 00724d81: mov dword ptr [esp + 0x70], edi */ W32((u32)(r_esp+0x70u), r_edi);
    /* 00724d85: mov edi, dword ptr [edx + 0x14] */ r_edi = R32((u32)(r_edx+0x14u));
    /* 00724d88: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 00724d8c: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 00724d8f: mov dword ptr [esp + 0x78], edi */ W32((u32)(r_esp+0x78u), r_edi);
    /* 00724d93: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 00724d96: mov dword ptr [esp + 0x7c], edi */ W32((u32)(r_esp+0x7cu), r_edi);
    /* 00724d9a: mov edi, dword ptr [edx + 0x20] */ r_edi = R32((u32)(r_edx+0x20u));
    /* 00724d9d: mov dword ptr [esp + 0x80], edi */ W32((u32)(r_esp+0x80u), r_edi);
    /* 00724da4: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 00724da7: mov dword ptr [esp + 0x84], edi */ W32((u32)(r_esp+0x84u), r_edi);
    /* 00724dae: mov edi, dword ptr [edx + 0x28] */ r_edi = R32((u32)(r_edx+0x28u));
    /* 00724db1: mov dword ptr [esp + 0x88], edi */ W32((u32)(r_esp+0x88u), r_edi);
    /* 00724db8: mov edi, dword ptr [edx + 0x2c] */ r_edi = R32((u32)(r_edx+0x2cu));
    /* 00724dbb: mov dword ptr [esp + 0x8c], edi */ W32((u32)(r_esp+0x8cu), r_edi);
    /* 00724dc2: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 00724dc5: mov dword ptr [esp + 0x90], edi */ W32((u32)(r_esp+0x90u), r_edi);
    /* 00724dcc: mov edi, dword ptr [edx + 0x34] */ r_edi = R32((u32)(r_edx+0x34u));
    /* 00724dcf: mov dword ptr [esp + 0x94], edi */ W32((u32)(r_esp+0x94u), r_edi);
    /* 00724dd6: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 00724dd9: mov dword ptr [esp + 0x98], edi */ W32((u32)(r_esp+0x98u), r_edi);
    /* 00724de0: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 00724de3: mov dword ptr [esp + 0x9c], edi */ W32((u32)(r_esp+0x9cu), r_edi);
    /* 00724dea: mov edi, dword ptr [edx + 0x40] */ r_edi = R32((u32)(r_edx+0x40u));
    /* 00724ded: mov dword ptr [esp + 0xa0], edi */ W32((u32)(r_esp+0xa0u), r_edi);
    /* 00724df4: mov edi, dword ptr [edx + 0x44] */ r_edi = R32((u32)(r_edx+0x44u));
    /* 00724df7: mov dword ptr [esp + 0xa4], edi */ W32((u32)(r_esp+0xa4u), r_edi);
    /* 00724dfe: mov edi, dword ptr [edx + 0x48] */ r_edi = R32((u32)(r_edx+0x48u));
    /* 00724e01: mov dword ptr [esp + 0xa8], edi */ W32((u32)(r_esp+0xa8u), r_edi);
    /* 00724e08: mov edi, dword ptr [edx + 0x4c] */ r_edi = R32((u32)(r_edx+0x4cu));
    /* 00724e0b: mov dword ptr [esp + 0xac], edi */ W32((u32)(r_esp+0xacu), r_edi);
    /* 00724e12: mov edi, dword ptr [edx + 0x50] */ r_edi = R32((u32)(r_edx+0x50u));
    /* 00724e15: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 00724e18: mov dword ptr [esp + 0xb0], edi */ W32((u32)(r_esp+0xb0u), r_edi);
    /* 00724e1f: mov dword ptr [esp + 0xb4], edx */ W32((u32)(r_esp+0xb4u), r_edx);
    /* 00724e26: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 00724e2c: mov dword ptr [esp + 0x64], 1 */ W32((u32)(r_esp+0x64u), 0x1u);
    /* 00724e34: mov ecx, eax */ r_ecx = r_eax;
    /* 00724e36: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 00724e3a: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x724e3fu); f_006936b4();
    /* 00724e3f: lea edx, [esp + 0x68] */ r_edx = (u32)(r_esp+0x68u);
    /* 00724e43: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00724e45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00724e46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00724e47: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x724e4cu); f_00857dec();
    /* 00724e4c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00724e4f: call 0x78c0b0 */ r_esp -= 4; W32(r_esp, 0x724e54u); f_0078c0b0();
    /* 00724e54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00724e55: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00724e59: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x724e5eu); f_00800464();
L_00724e5e:; BB(0x00724e5e);
    /* 00724e5e: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00724e61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724e63: je 0x724e71 */ if (fZ) goto L_00724e71;
L_00724e65:; BB(0x00724e65);
    /* 00724e65: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x724e6au); f_007127b0();
    /* 00724e6a: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
L_00724e71:; BB(0x00724e71);
    /* 00724e71: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 00724e74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724e76: je 0x724e84 */ if (fZ) goto L_00724e84;
L_00724e78:; BB(0x00724e78);
    /* 00724e78: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x724e7du); f_007127b0();
    /* 00724e7d: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
L_00724e84:; BB(0x00724e84);
    /* 00724e84: mov dword ptr [esi + 0x24], 7 */ W32((u32)(r_esi+0x24u), 0x7u);
    /* 00724e8b: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00724e91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00724e92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00724e93: ret  */ FN_RET(0x0072455c); r_esp += 4; return;
L_00724e94:; BB(0x00724e94);
    /* 00724e94: call 0x71631c */ r_esp -= 4; W32(r_esp, 0x724e99u); f_0071631c();
    /* 00724e99: mov dword ptr [esi + 0x24], 8 */ W32((u32)(r_esi+0x24u), 0x8u);
    /* 00724ea0: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00724ea6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00724ea7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00724ea8: ret  */ FN_RET(0x0072455c); r_esp += 4; return;
L_00724ea9:; BB(0x00724ea9);
    /* 00724ea9: mov byte ptr [esp + 0x114], 0xce */ W8((u32)(r_esp+0x114u), 0xceu);
    /* 00724eb1: mov byte ptr [esp + 0x115], 0x17 */ W8((u32)(r_esp+0x115u), 0x17u);
    /* 00724eb9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00724ebf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x724ec4u); f_0068d5a8();
    /* 00724ec4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00724ec5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724ec7: je 0x724ff1 */ if (fZ) goto L_00724ff1;
L_00724ecd:; BB(0x00724ecd);
    /* 00724ecd: mov edx, 0xa9c940 */ r_edx = 0xa9c940u;
    /* 00724ed2: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00724ed4: mov dword ptr [esp + 0x118], edi */ W32((u32)(r_esp+0x118u), r_edi);
    /* 00724edb: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00724ede: mov dword ptr [esp + 0x11c], edi */ W32((u32)(r_esp+0x11cu), r_edi);
    /* 00724ee5: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 00724ee8: mov dword ptr [esp + 0x120], edi */ W32((u32)(r_esp+0x120u), r_edi);
    /* 00724eef: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 00724ef2: mov dword ptr [esp + 0x124], edi */ W32((u32)(r_esp+0x124u), r_edi);
    /* 00724ef9: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 00724efc: mov dword ptr [esp + 0x128], edi */ W32((u32)(r_esp+0x128u), r_edi);
    /* 00724f03: mov edi, dword ptr [edx + 0x14] */ r_edi = R32((u32)(r_edx+0x14u));
    /* 00724f06: mov dword ptr [esp + 0x12c], edi */ W32((u32)(r_esp+0x12cu), r_edi);
    /* 00724f0d: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 00724f10: mov dword ptr [esp + 0x130], edi */ W32((u32)(r_esp+0x130u), r_edi);
    /* 00724f17: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 00724f1a: mov dword ptr [esp + 0x134], edi */ W32((u32)(r_esp+0x134u), r_edi);
    /* 00724f21: mov edi, dword ptr [edx + 0x20] */ r_edi = R32((u32)(r_edx+0x20u));
    /* 00724f24: mov dword ptr [esp + 0x138], edi */ W32((u32)(r_esp+0x138u), r_edi);
    /* 00724f2b: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 00724f2e: mov dword ptr [esp + 0x13c], edi */ W32((u32)(r_esp+0x13cu), r_edi);
    /* 00724f35: mov edi, dword ptr [edx + 0x28] */ r_edi = R32((u32)(r_edx+0x28u));
    /* 00724f38: mov dword ptr [esp + 0x140], edi */ W32((u32)(r_esp+0x140u), r_edi);
    /* 00724f3f: mov edi, dword ptr [edx + 0x2c] */ r_edi = R32((u32)(r_edx+0x2cu));
    /* 00724f42: mov dword ptr [esp + 0x144], edi */ W32((u32)(r_esp+0x144u), r_edi);
    /* 00724f49: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 00724f4c: mov dword ptr [esp + 0x148], edi */ W32((u32)(r_esp+0x148u), r_edi);
    /* 00724f53: mov edi, dword ptr [edx + 0x34] */ r_edi = R32((u32)(r_edx+0x34u));
    /* 00724f56: mov dword ptr [esp + 0x14c], edi */ W32((u32)(r_esp+0x14cu), r_edi);
    /* 00724f5d: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 00724f60: mov dword ptr [esp + 0x150], edi */ W32((u32)(r_esp+0x150u), r_edi);
    /* 00724f67: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 00724f6a: mov dword ptr [esp + 0x154], edi */ W32((u32)(r_esp+0x154u), r_edi);
    /* 00724f71: mov edi, dword ptr [edx + 0x40] */ r_edi = R32((u32)(r_edx+0x40u));
    /* 00724f74: mov dword ptr [esp + 0x158], edi */ W32((u32)(r_esp+0x158u), r_edi);
    /* 00724f7b: mov edi, dword ptr [edx + 0x44] */ r_edi = R32((u32)(r_edx+0x44u));
    /* 00724f7e: mov dword ptr [esp + 0x15c], edi */ W32((u32)(r_esp+0x15cu), r_edi);
    /* 00724f85: mov edi, dword ptr [edx + 0x48] */ r_edi = R32((u32)(r_edx+0x48u));
    /* 00724f88: mov dword ptr [esp + 0x160], edi */ W32((u32)(r_esp+0x160u), r_edi);
    /* 00724f8f: mov edi, dword ptr [edx + 0x4c] */ r_edi = R32((u32)(r_edx+0x4cu));
    /* 00724f92: mov dword ptr [esp + 0x164], edi */ W32((u32)(r_esp+0x164u), r_edi);
    /* 00724f99: mov edi, dword ptr [edx + 0x50] */ r_edi = R32((u32)(r_edx+0x50u));
    /* 00724f9c: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 00724f9f: mov dword ptr [esp + 0x168], edi */ W32((u32)(r_esp+0x168u), r_edi);
    /* 00724fa6: mov dword ptr [esp + 0x16c], edx */ W32((u32)(r_esp+0x16cu), r_edx);
    /* 00724fad: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 00724fb3: mov dword ptr [esp + 0x11c], 3 */ W32((u32)(r_esp+0x11cu), 0x3u);
    /* 00724fbe: mov ecx, eax */ r_ecx = r_eax;
    /* 00724fc0: mov dword ptr [esp + 0x118], edx */ W32((u32)(r_esp+0x118u), r_edx);
    /* 00724fc7: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x724fccu); f_006936b4();
    /* 00724fcc: lea edx, [esp + 0x120] */ r_edx = (u32)(r_esp+0x120u);
    /* 00724fd3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00724fd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00724fd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00724fd7: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x724fdcu); f_00857dec();
    /* 00724fdc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00724fdf: call 0x78c0b0 */ r_esp -= 4; W32(r_esp, 0x724fe4u); f_0078c0b0();
    /* 00724fe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00724fe5: lea ecx, [esp + 0x118] */ r_ecx = (u32)(r_esp+0x118u);
    /* 00724fec: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x724ff1u); f_00800464();
L_00724ff1:; BB(0x00724ff1);
    /* 00724ff1: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00724ff4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724ff6: je 0x725004 */ if (fZ) goto L_00725004;
L_00724ff8:; BB(0x00724ff8);
    /* 00724ff8: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x724ffdu); f_007127b0();
    /* 00724ffd: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
L_00725004:; BB(0x00725004);
    /* 00725004: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 00725007: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725009: je 0x725017 */ if (fZ) goto L_00725017;
L_0072500b:; BB(0x0072500b);
    /* 0072500b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x725010u); f_007127b0();
    /* 00725010: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
L_00725017:; BB(0x00725017);
    /* 00725017: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0072501c: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x725021u); f_0073ec50();
    /* 00725021: mov edi, eax */ r_edi = r_eax;
    /* 00725023: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00725028: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x72502du); f_0073ec50();
    /* 0072502d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072502e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072502f: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x725034u); f_0073a888();
    /* 00725034: push 0x17d */ { u32 v = 0x17du; r_esp -= 4; W32(r_esp, v); }
    /* 00725039: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 0072503c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x725041u); f_0079317c();
    /* 00725041: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00725044: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00725046: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725047: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 0072504a: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x72504fu); f_0073ae38();
    /* 0072504f: mov dword ptr [esi + 0x24], 7 */ W32((u32)(r_esi+0x24u), 0x7u);
    /* 00725056: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072505c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072505d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072505e: ret  */ FN_RET(0x0072455c); r_esp += 4; return;
L_0072505f:; BB(0x0072505f);
    /* 0072505f: push 0x9f2500 */ { u32 v = 0x9f2500u; r_esp -= 4; W32(r_esp, v); }
    /* 00725064: call 0x735874 */ r_esp -= 4; W32(r_esp, 0x725069u); f_00735874();
    /* 00725069: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072506a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0072506c: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0072506f: mov ecx, eax */ r_ecx = r_eax;
    /* 00725071: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x725076u); f_00736510();
    /* 00725076: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00725079: jmp 0x7247e2 */ goto L_007247e2;
L_0072507e:; BB(0x0072507e);
    /* 0072507e: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00725081: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x725086u); f_0073b170();
    /* 00725086: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725088: je 0x725091 */ if (fZ) goto L_00725091;
L_0072508a:; BB(0x0072508a);
    /* 0072508a: mov dword ptr [esi + 0x24], 5 */ W32((u32)(r_esi+0x24u), 0x5u);
L_00725091:; BB(0x00725091);
    /* 00725091: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 00725097: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0072509c: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7250a1u); f_007c1160();
    /* 007250a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007250a3: je 0x724b81 */ if (fZ) goto L_00724b81;
L_007250a9:; BB(0x007250a9);
    /* 007250a9: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 007250ac: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x7250b1u); f_0073b0f0();
    /* 007250b1: mov dword ptr [esi + 0x24], 5 */ W32((u32)(r_esi+0x24u), 0x5u);
    /* 007250b8: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007250be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007250bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007250c0: ret  */ FN_RET(0x0072455c); r_esp += 4; return;
L_007250c1:; BB(0x007250c1);
    /* 007250c1: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 007250c4: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007250cb: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007250cd: je 0x725289 */ if (fZ) goto L_00725289;
L_007250d3:; BB(0x007250d3);
    /* 007250d3: mov byte ptr [esp + 0x228], 0xce */ W8((u32)(r_esp+0x228u), 0xceu);
    /* 007250db: mov byte ptr [esp + 0x229], 0x17 */ W8((u32)(r_esp+0x229u), 0x17u);
    /* 007250e3: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007250e9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7250eeu); f_0068d5a8();
    /* 007250ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007250ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007250f1: je 0x72521b */ if (fZ) goto L_0072521b;
L_007250f7:; BB(0x007250f7);
    /* 007250f7: mov edx, 0xa9c940 */ r_edx = 0xa9c940u;
    /* 007250fc: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007250fe: mov dword ptr [esp + 0x22c], edi */ W32((u32)(r_esp+0x22cu), r_edi);
    /* 00725105: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00725108: mov dword ptr [esp + 0x230], edi */ W32((u32)(r_esp+0x230u), r_edi);
    /* 0072510f: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 00725112: mov dword ptr [esp + 0x234], edi */ W32((u32)(r_esp+0x234u), r_edi);
    /* 00725119: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 0072511c: mov dword ptr [esp + 0x238], edi */ W32((u32)(r_esp+0x238u), r_edi);
    /* 00725123: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 00725126: mov dword ptr [esp + 0x23c], edi */ W32((u32)(r_esp+0x23cu), r_edi);
    /* 0072512d: mov edi, dword ptr [edx + 0x14] */ r_edi = R32((u32)(r_edx+0x14u));
    /* 00725130: mov dword ptr [esp + 0x240], edi */ W32((u32)(r_esp+0x240u), r_edi);
    /* 00725137: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 0072513a: mov dword ptr [esp + 0x244], edi */ W32((u32)(r_esp+0x244u), r_edi);
    /* 00725141: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 00725144: mov dword ptr [esp + 0x248], edi */ W32((u32)(r_esp+0x248u), r_edi);
    /* 0072514b: mov edi, dword ptr [edx + 0x20] */ r_edi = R32((u32)(r_edx+0x20u));
    /* 0072514e: mov dword ptr [esp + 0x24c], edi */ W32((u32)(r_esp+0x24cu), r_edi);
    /* 00725155: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 00725158: mov dword ptr [esp + 0x250], edi */ W32((u32)(r_esp+0x250u), r_edi);
    /* 0072515f: mov edi, dword ptr [edx + 0x28] */ r_edi = R32((u32)(r_edx+0x28u));
    /* 00725162: mov dword ptr [esp + 0x254], edi */ W32((u32)(r_esp+0x254u), r_edi);
    /* 00725169: mov edi, dword ptr [edx + 0x2c] */ r_edi = R32((u32)(r_edx+0x2cu));
    /* 0072516c: mov dword ptr [esp + 0x258], edi */ W32((u32)(r_esp+0x258u), r_edi);
    /* 00725173: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 00725176: mov dword ptr [esp + 0x25c], edi */ W32((u32)(r_esp+0x25cu), r_edi);
    /* 0072517d: mov edi, dword ptr [edx + 0x34] */ r_edi = R32((u32)(r_edx+0x34u));
    /* 00725180: mov dword ptr [esp + 0x260], edi */ W32((u32)(r_esp+0x260u), r_edi);
    /* 00725187: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 0072518a: mov dword ptr [esp + 0x264], edi */ W32((u32)(r_esp+0x264u), r_edi);
    /* 00725191: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 00725194: mov dword ptr [esp + 0x268], edi */ W32((u32)(r_esp+0x268u), r_edi);
    /* 0072519b: mov edi, dword ptr [edx + 0x40] */ r_edi = R32((u32)(r_edx+0x40u));
    /* 0072519e: mov dword ptr [esp + 0x26c], edi */ W32((u32)(r_esp+0x26cu), r_edi);
    /* 007251a5: mov edi, dword ptr [edx + 0x44] */ r_edi = R32((u32)(r_edx+0x44u));
    /* 007251a8: mov dword ptr [esp + 0x270], edi */ W32((u32)(r_esp+0x270u), r_edi);
    /* 007251af: mov edi, dword ptr [edx + 0x48] */ r_edi = R32((u32)(r_edx+0x48u));
    /* 007251b2: mov dword ptr [esp + 0x274], edi */ W32((u32)(r_esp+0x274u), r_edi);
    /* 007251b9: mov edi, dword ptr [edx + 0x4c] */ r_edi = R32((u32)(r_edx+0x4cu));
    /* 007251bc: mov dword ptr [esp + 0x278], edi */ W32((u32)(r_esp+0x278u), r_edi);
    /* 007251c3: mov edi, dword ptr [edx + 0x50] */ r_edi = R32((u32)(r_edx+0x50u));
    /* 007251c6: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 007251c9: mov dword ptr [esp + 0x27c], edi */ W32((u32)(r_esp+0x27cu), r_edi);
    /* 007251d0: mov dword ptr [esp + 0x280], edx */ W32((u32)(r_esp+0x280u), r_edx);
    /* 007251d7: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 007251dd: mov dword ptr [esp + 0x230], 3 */ W32((u32)(r_esp+0x230u), 0x3u);
    /* 007251e8: mov ecx, eax */ r_ecx = r_eax;
    /* 007251ea: mov dword ptr [esp + 0x22c], edx */ W32((u32)(r_esp+0x22cu), r_edx);
    /* 007251f1: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x7251f6u); f_006936b4();
    /* 007251f6: lea edx, [esp + 0x234] */ r_edx = (u32)(r_esp+0x234u);
    /* 007251fd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007251ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725200: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725201: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x725206u); f_00857dec();
    /* 00725206: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00725209: call 0x78c0b0 */ r_esp -= 4; W32(r_esp, 0x72520eu); f_0078c0b0();
    /* 0072520e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072520f: lea ecx, [esp + 0x22c] */ r_ecx = (u32)(r_esp+0x22cu);
    /* 00725216: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x72521bu); f_00800464();
L_0072521b:; BB(0x0072521b);
    /* 0072521b: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 0072521e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725220: je 0x72522e */ if (fZ) goto L_0072522e;
L_00725222:; BB(0x00725222);
    /* 00725222: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x725227u); f_007127b0();
    /* 00725227: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
L_0072522e:; BB(0x0072522e);
    /* 0072522e: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 00725231: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725233: je 0x725241 */ if (fZ) goto L_00725241;
L_00725235:; BB(0x00725235);
    /* 00725235: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x72523au); f_007127b0();
    /* 0072523a: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
L_00725241:; BB(0x00725241);
    /* 00725241: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00725246: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x72524bu); f_0073ec50();
    /* 0072524b: mov edi, eax */ r_edi = r_eax;
    /* 0072524d: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00725252: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x725257u); f_0073ec50();
    /* 00725257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725258: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00725259: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x72525eu); f_0073a888();
    /* 0072525e: push 0x17d */ { u32 v = 0x17du; r_esp -= 4; W32(r_esp, v); }
    /* 00725263: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00725266: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x72526bu); f_0079317c();
    /* 0072526b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072526e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00725270: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725271: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00725274: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x725279u); f_0073ae38();
    /* 00725279: mov dword ptr [esi + 0x24], 7 */ W32((u32)(r_esi+0x24u), 0x7u);
    /* 00725280: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00725286: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00725287: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00725288: ret  */ FN_RET(0x0072455c); r_esp += 4; return;
L_00725289:; BB(0x00725289);
    /* 00725289: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072528b: je 0x725311 */ if (fZ) goto L_00725311;
L_00725291:; BB(0x00725291);
    /* 00725291: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x725296u); f_007365f4();
    /* 00725296: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725298: jne 0x725308 */ if (!fZ) goto L_00725308;
L_0072529a:; BB(0x0072529a);
    /* 0072529a: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 0072529d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072529f: je 0x7252ad */ if (fZ) goto L_007252ad;
L_007252a1:; BB(0x007252a1);
    /* 007252a1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7252a6u); f_007127b0();
    /* 007252a6: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
L_007252ad:; BB(0x007252ad);
    /* 007252ad: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 007252b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007252b2: je 0x7252c0 */ if (fZ) goto L_007252c0;
L_007252b4:; BB(0x007252b4);
    /* 007252b4: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7252b9u); f_007127b0();
    /* 007252b9: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
L_007252c0:; BB(0x007252c0);
    /* 007252c0: push 0xe9 */ { u32 v = 0xe9u; r_esp -= 4; W32(r_esp, v); }
    /* 007252c5: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7252cau); f_0073ec50();
    /* 007252ca: mov edi, eax */ r_edi = r_eax;
    /* 007252cc: push 0xea */ { u32 v = 0xeau; r_esp -= 4; W32(r_esp, v); }
    /* 007252d1: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7252d6u); f_0073ec50();
    /* 007252d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007252d7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007252d8: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7252ddu); f_0073a888();
    /* 007252dd: push 0x17b */ { u32 v = 0x17bu; r_esp -= 4; W32(r_esp, v); }
    /* 007252e2: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 007252e5: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7252eau); f_0079317c();
    /* 007252ea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007252ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007252ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007252f0: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 007252f3: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7252f8u); f_0073ae38();
    /* 007252f8: mov dword ptr [esi + 0x24], 4 */ W32((u32)(r_esi+0x24u), 0x4u);
    /* 007252ff: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00725305: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00725306: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00725307: ret  */ FN_RET(0x0072455c); r_esp += 4; return;
L_00725308:; BB(0x00725308);
    /* 00725308: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072530b: je 0x7254d6 */ if (fZ) goto L_007254d6;
L_00725311:; BB(0x00725311);
    /* 00725311: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00725314: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00725317: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 0072531a: jne 0x724b81 */ if (!fZ) goto L_00724b81;
L_00725320:; BB(0x00725320);
    /* 00725320: mov byte ptr [esp + 0x2e0], 0xce */ W8((u32)(r_esp+0x2e0u), 0xceu);
    /* 00725328: mov byte ptr [esp + 0x2e1], 0x17 */ W8((u32)(r_esp+0x2e1u), 0x17u);
    /* 00725330: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00725336: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x72533bu); f_0068d5a8();
    /* 0072533b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072533c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072533e: je 0x725468 */ if (fZ) goto L_00725468;
L_00725344:; BB(0x00725344);
    /* 00725344: mov edx, 0xa9c940 */ r_edx = 0xa9c940u;
    /* 00725349: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0072534b: mov dword ptr [esp + 0x2e4], edi */ W32((u32)(r_esp+0x2e4u), r_edi);
    /* 00725352: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00725355: mov dword ptr [esp + 0x2e8], edi */ W32((u32)(r_esp+0x2e8u), r_edi);
    /* 0072535c: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0072535f: mov dword ptr [esp + 0x2ec], edi */ W32((u32)(r_esp+0x2ecu), r_edi);
    /* 00725366: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 00725369: mov dword ptr [esp + 0x2f0], edi */ W32((u32)(r_esp+0x2f0u), r_edi);
    /* 00725370: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 00725373: mov dword ptr [esp + 0x2f4], edi */ W32((u32)(r_esp+0x2f4u), r_edi);
    /* 0072537a: mov edi, dword ptr [edx + 0x14] */ r_edi = R32((u32)(r_edx+0x14u));
    /* 0072537d: mov dword ptr [esp + 0x2f8], edi */ W32((u32)(r_esp+0x2f8u), r_edi);
    /* 00725384: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 00725387: mov dword ptr [esp + 0x2fc], edi */ W32((u32)(r_esp+0x2fcu), r_edi);
    /* 0072538e: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 00725391: mov dword ptr [esp + 0x300], edi */ W32((u32)(r_esp+0x300u), r_edi);
    /* 00725398: mov edi, dword ptr [edx + 0x20] */ r_edi = R32((u32)(r_edx+0x20u));
    /* 0072539b: mov dword ptr [esp + 0x304], edi */ W32((u32)(r_esp+0x304u), r_edi);
    /* 007253a2: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 007253a5: mov dword ptr [esp + 0x308], edi */ W32((u32)(r_esp+0x308u), r_edi);
    /* 007253ac: mov edi, dword ptr [edx + 0x28] */ r_edi = R32((u32)(r_edx+0x28u));
    /* 007253af: mov dword ptr [esp + 0x30c], edi */ W32((u32)(r_esp+0x30cu), r_edi);
    /* 007253b6: mov edi, dword ptr [edx + 0x2c] */ r_edi = R32((u32)(r_edx+0x2cu));
    /* 007253b9: mov dword ptr [esp + 0x310], edi */ W32((u32)(r_esp+0x310u), r_edi);
    /* 007253c0: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 007253c3: mov dword ptr [esp + 0x314], edi */ W32((u32)(r_esp+0x314u), r_edi);
    /* 007253ca: mov edi, dword ptr [edx + 0x34] */ r_edi = R32((u32)(r_edx+0x34u));
    /* 007253cd: mov dword ptr [esp + 0x318], edi */ W32((u32)(r_esp+0x318u), r_edi);
    /* 007253d4: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 007253d7: mov dword ptr [esp + 0x31c], edi */ W32((u32)(r_esp+0x31cu), r_edi);
    /* 007253de: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 007253e1: mov dword ptr [esp + 0x320], edi */ W32((u32)(r_esp+0x320u), r_edi);
    /* 007253e8: mov edi, dword ptr [edx + 0x40] */ r_edi = R32((u32)(r_edx+0x40u));
    /* 007253eb: mov dword ptr [esp + 0x324], edi */ W32((u32)(r_esp+0x324u), r_edi);
    /* 007253f2: mov edi, dword ptr [edx + 0x44] */ r_edi = R32((u32)(r_edx+0x44u));
    /* 007253f5: mov dword ptr [esp + 0x328], edi */ W32((u32)(r_esp+0x328u), r_edi);
    /* 007253fc: mov edi, dword ptr [edx + 0x48] */ r_edi = R32((u32)(r_edx+0x48u));
    /* 007253ff: mov dword ptr [esp + 0x32c], edi */ W32((u32)(r_esp+0x32cu), r_edi);
    /* 00725406: mov edi, dword ptr [edx + 0x4c] */ r_edi = R32((u32)(r_edx+0x4cu));
    /* 00725409: mov dword ptr [esp + 0x330], edi */ W32((u32)(r_esp+0x330u), r_edi);
    /* 00725410: mov edi, dword ptr [edx + 0x50] */ r_edi = R32((u32)(r_edx+0x50u));
    /* 00725413: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 00725416: mov dword ptr [esp + 0x334], edi */ W32((u32)(r_esp+0x334u), r_edi);
    /* 0072541d: mov dword ptr [esp + 0x338], edx */ W32((u32)(r_esp+0x338u), r_edx);
    /* 00725424: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 0072542a: mov dword ptr [esp + 0x2e8], 1 */ W32((u32)(r_esp+0x2e8u), 0x1u);
    /* 00725435: mov ecx, eax */ r_ecx = r_eax;
    /* 00725437: mov dword ptr [esp + 0x2e4], edx */ W32((u32)(r_esp+0x2e4u), r_edx);
    /* 0072543e: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x725443u); f_006936b4();
    /* 00725443: lea edx, [esp + 0x2ec] */ r_edx = (u32)(r_esp+0x2ecu);
    /* 0072544a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0072544c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072544d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072544e: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x725453u); f_00857dec();
    /* 00725453: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00725456: call 0x78c0b0 */ r_esp -= 4; W32(r_esp, 0x72545bu); f_0078c0b0();
    /* 0072545b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072545c: lea ecx, [esp + 0x2e4] */ r_ecx = (u32)(r_esp+0x2e4u);
    /* 00725463: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x725468u); f_00800464();
L_00725468:; BB(0x00725468);
    /* 00725468: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 0072546b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072546d: je 0x72547b */ if (fZ) goto L_0072547b;
L_0072546f:; BB(0x0072546f);
    /* 0072546f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x725474u); f_007127b0();
    /* 00725474: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
L_0072547b:; BB(0x0072547b);
    /* 0072547b: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0072547e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725480: je 0x72548e */ if (fZ) goto L_0072548e;
L_00725482:; BB(0x00725482);
    /* 00725482: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x725487u); f_007127b0();
    /* 00725487: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
L_0072548e:; BB(0x0072548e);
    /* 0072548e: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00725493: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x725498u); f_0073ec50();
    /* 00725498: mov edi, eax */ r_edi = r_eax;
    /* 0072549a: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0072549f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7254a4u); f_0073ec50();
    /* 007254a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007254a5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007254a6: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x7254abu); f_0073a888();
    /* 007254ab: push 0x17e */ { u32 v = 0x17eu; r_esp -= 4; W32(r_esp, v); }
    /* 007254b0: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 007254b3: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7254b8u); f_0079317c();
    /* 007254b8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007254bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007254bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007254be: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 007254c1: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7254c6u); f_0073ae38();
    /* 007254c6: mov dword ptr [esi + 0x24], 7 */ W32((u32)(r_esi+0x24u), 0x7u);
    /* 007254cd: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007254d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007254d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007254d5: ret  */ FN_RET(0x0072455c); r_esp += 4; return;
L_007254d6:; BB(0x007254d6);
    /* 007254d6: mov byte ptr [esp + 0x284], 0xce */ W8((u32)(r_esp+0x284u), 0xceu);
    /* 007254de: mov byte ptr [esp + 0x285], 0x17 */ W8((u32)(r_esp+0x285u), 0x17u);
    /* 007254e6: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007254ec: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7254f1u); f_0068d5a8();
    /* 007254f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007254f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007254f4: je 0x72561e */ if (fZ) goto L_0072561e;
L_007254fa:; BB(0x007254fa);
    /* 007254fa: mov edx, 0xa9c940 */ r_edx = 0xa9c940u;
    /* 007254ff: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00725501: mov dword ptr [esp + 0x288], edi */ W32((u32)(r_esp+0x288u), r_edi);
    /* 00725508: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0072550b: mov dword ptr [esp + 0x28c], edi */ W32((u32)(r_esp+0x28cu), r_edi);
    /* 00725512: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 00725515: mov dword ptr [esp + 0x290], edi */ W32((u32)(r_esp+0x290u), r_edi);
    /* 0072551c: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 0072551f: mov dword ptr [esp + 0x294], edi */ W32((u32)(r_esp+0x294u), r_edi);
    /* 00725526: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 00725529: mov dword ptr [esp + 0x298], edi */ W32((u32)(r_esp+0x298u), r_edi);
    /* 00725530: mov edi, dword ptr [edx + 0x14] */ r_edi = R32((u32)(r_edx+0x14u));
    /* 00725533: mov dword ptr [esp + 0x29c], edi */ W32((u32)(r_esp+0x29cu), r_edi);
    /* 0072553a: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 0072553d: mov dword ptr [esp + 0x2a0], edi */ W32((u32)(r_esp+0x2a0u), r_edi);
    /* 00725544: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 00725547: mov dword ptr [esp + 0x2a4], edi */ W32((u32)(r_esp+0x2a4u), r_edi);
    /* 0072554e: mov edi, dword ptr [edx + 0x20] */ r_edi = R32((u32)(r_edx+0x20u));
    /* 00725551: mov dword ptr [esp + 0x2a8], edi */ W32((u32)(r_esp+0x2a8u), r_edi);
    /* 00725558: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 0072555b: mov dword ptr [esp + 0x2ac], edi */ W32((u32)(r_esp+0x2acu), r_edi);
    /* 00725562: mov edi, dword ptr [edx + 0x28] */ r_edi = R32((u32)(r_edx+0x28u));
    /* 00725565: mov dword ptr [esp + 0x2b0], edi */ W32((u32)(r_esp+0x2b0u), r_edi);
    /* 0072556c: mov edi, dword ptr [edx + 0x2c] */ r_edi = R32((u32)(r_edx+0x2cu));
    /* 0072556f: mov dword ptr [esp + 0x2b4], edi */ W32((u32)(r_esp+0x2b4u), r_edi);
    /* 00725576: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 00725579: mov dword ptr [esp + 0x2b8], edi */ W32((u32)(r_esp+0x2b8u), r_edi);
    /* 00725580: mov edi, dword ptr [edx + 0x34] */ r_edi = R32((u32)(r_edx+0x34u));
    /* 00725583: mov dword ptr [esp + 0x2bc], edi */ W32((u32)(r_esp+0x2bcu), r_edi);
    /* 0072558a: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 0072558d: mov dword ptr [esp + 0x2c0], edi */ W32((u32)(r_esp+0x2c0u), r_edi);
    /* 00725594: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 00725597: mov dword ptr [esp + 0x2c4], edi */ W32((u32)(r_esp+0x2c4u), r_edi);
    /* 0072559e: mov edi, dword ptr [edx + 0x40] */ r_edi = R32((u32)(r_edx+0x40u));
    /* 007255a1: mov dword ptr [esp + 0x2c8], edi */ W32((u32)(r_esp+0x2c8u), r_edi);
    /* 007255a8: mov edi, dword ptr [edx + 0x44] */ r_edi = R32((u32)(r_edx+0x44u));
    /* 007255ab: mov dword ptr [esp + 0x2cc], edi */ W32((u32)(r_esp+0x2ccu), r_edi);
    /* 007255b2: mov edi, dword ptr [edx + 0x48] */ r_edi = R32((u32)(r_edx+0x48u));
    /* 007255b5: mov dword ptr [esp + 0x2d0], edi */ W32((u32)(r_esp+0x2d0u), r_edi);
    /* 007255bc: mov edi, dword ptr [edx + 0x4c] */ r_edi = R32((u32)(r_edx+0x4cu));
    /* 007255bf: mov dword ptr [esp + 0x2d4], edi */ W32((u32)(r_esp+0x2d4u), r_edi);
    /* 007255c6: mov edi, dword ptr [edx + 0x50] */ r_edi = R32((u32)(r_edx+0x50u));
    /* 007255c9: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 007255cc: mov dword ptr [esp + 0x2d8], edi */ W32((u32)(r_esp+0x2d8u), r_edi);
    /* 007255d3: mov dword ptr [esp + 0x2dc], edx */ W32((u32)(r_esp+0x2dcu), r_edx);
    /* 007255da: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 007255e0: mov dword ptr [esp + 0x28c], 3 */ W32((u32)(r_esp+0x28cu), 0x3u);
    /* 007255eb: mov ecx, eax */ r_ecx = r_eax;
    /* 007255ed: mov dword ptr [esp + 0x288], edx */ W32((u32)(r_esp+0x288u), r_edx);
    /* 007255f4: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x7255f9u); f_006936b4();
    /* 007255f9: lea edx, [esp + 0x290] */ r_edx = (u32)(r_esp+0x290u);
    /* 00725600: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00725602: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725603: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00725604: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x725609u); f_00857dec();
    /* 00725609: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072560c: call 0x78c0b0 */ r_esp -= 4; W32(r_esp, 0x725611u); f_0078c0b0();
    /* 00725611: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725612: lea ecx, [esp + 0x288] */ r_ecx = (u32)(r_esp+0x288u);
    /* 00725619: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x72561eu); f_00800464();
L_0072561e:; BB(0x0072561e);
    /* 0072561e: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00725621: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725623: je 0x725631 */ if (fZ) goto L_00725631;
L_00725625:; BB(0x00725625);
    /* 00725625: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x72562au); f_007127b0();
    /* 0072562a: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
L_00725631:; BB(0x00725631);
    /* 00725631: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 00725634: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725636: je 0x725644 */ if (fZ) goto L_00725644;
L_00725638:; BB(0x00725638);
    /* 00725638: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x72563du); f_007127b0();
    /* 0072563d: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
L_00725644:; BB(0x00725644);
    /* 00725644: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00725649: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x72564eu); f_0073ec50();
    /* 0072564e: mov edi, eax */ r_edi = r_eax;
    /* 00725650: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00725655: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x72565au); f_0073ec50();
    /* 0072565a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072565b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072565c: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x725661u); f_0073a888();
    /* 00725661: push 0x17d */ { u32 v = 0x17du; r_esp -= 4; W32(r_esp, v); }
    /* 00725666: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00725669: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x72566eu); f_0079317c();
    /* 0072566e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00725671: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00725673: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00725674: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00725677: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x72567cu); f_0073ae38();
    /* 0072567c: mov dword ptr [esi + 0x24], 7 */ W32((u32)(r_esi+0x24u), 0x7u);
    /* 00725683: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00725689: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072568a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072568b: ret  */ FN_RET(0x0072455c); r_esp += 4; return;
L_0072568c:; BB(0x0072568c);
    /* 0072568c: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 0072568f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725691: je 0x7256c7 */ if (fZ) goto L_007256c7;
L_00725693:; BB(0x00725693);
    /* 00725693: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0072569a: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072569f: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 007256a2: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 007256a9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007256ab: je 0x7256b4 */ if (fZ) goto L_007256b4;
L_007256ad:; BB(0x007256ad);
    /* 007256ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007256af: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x7256b4u); f_00760acc();
L_007256b4:; BB(0x007256b4);
    /* 007256b4: mov dword ptr [esi + 0x28], 0x1c2 */ W32((u32)(r_esi+0x28u), 0x1c2u);
    /* 007256bb: mov dword ptr [esi + 0x24], 3 */ W32((u32)(r_esi+0x24u), 0x3u);
    /* 007256c2: jmp 0x7250c1 */ goto L_007250c1;
L_007256c7:; BB(0x007256c7);
    /* 007256c7: push 0x9f24f8 */ { u32 v = 0x9f24f8u; r_esp -= 4; W32(r_esp, v); }
    /* 007256cc: call 0x735874 */ r_esp -= 4; W32(r_esp, 0x7256d1u); f_00735874();
    /* 007256d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007256d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007256d4: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 007256d7: mov ecx, eax */ r_ecx = r_eax;
    /* 007256d9: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7256deu); f_00736510();
    /* 007256de: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 007256e1: jmp 0x725693 */ goto L_00725693;
L_007256e3:; BB(0x007256e3);
    /* 007256e3: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 007256e6: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x7256ebu); f_0073b170();
    /* 007256eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007256ed: je 0x7256f6 */ if (fZ) goto L_007256f6;
L_007256ef:; BB(0x007256ef);
    /* 007256ef: mov dword ptr [esi + 0x24], 2 */ W32((u32)(r_esi+0x24u), 0x2u);
L_007256f6:; BB(0x007256f6);
    /* 007256f6: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 007256fc: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00725701: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x725706u); f_007c1160();
    /* 00725706: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00725708: je 0x724b81 */ if (fZ) goto L_00724b81;
L_0072570e:; BB(0x0072570e);
    /* 0072570e: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00725711: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x725716u); f_0073b0f0();
    /* 00725716: mov dword ptr [esi + 0x24], 2 */ W32((u32)(r_esi+0x24u), 0x2u);
    /* 0072571d: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00725723: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00725724: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00725725: ret  */ FN_RET(0x0072455c); r_esp += 4; return;
}

void f_0072465a(void)
{
    FN_ENTER(0x0072465a);
    /* 0072465a: sbb byte ptr [ebx + 0x7c89187a], cl */ { u32 ad = (u32)(r_ebx+0x7c89187au); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a - b - c) & 0xffu; W8(ad, r);  }
    /* 00724660: and al, 0x1c */ {  u32 a = (u8)r_eax; u32 b = 0x1cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00724662: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 00724665: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00724669: mov edi, dword ptr [edx + 0x20] */ r_edi = R32((u32)(r_edx+0x20u));
    /* 0072466c: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00724670: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 00724673: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 00724677: mov edi, dword ptr [edx + 0x28] */ r_edi = R32((u32)(r_edx+0x28u));
    /* 0072467a: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0072467e: mov edi, dword ptr [edx + 0x2c] */ r_edi = R32((u32)(r_edx+0x2cu));
    /* 00724681: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00724685: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 00724688: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 0072468c: mov edi, dword ptr [edx + 0x34] */ r_edi = R32((u32)(r_edx+0x34u));
    /* 0072468f: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 00724693: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 00724696: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 0072469a: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 0072469d: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 007246a1: mov edi, dword ptr [edx + 0x40] */ r_edi = R32((u32)(r_edx+0x40u));
    /* 007246a4: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007246a8: mov edi, dword ptr [edx + 0x44] */ r_edi = R32((u32)(r_edx+0x44u));
    /* 007246ab: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 007246af: mov edi, dword ptr [edx + 0x48] */ r_edi = R32((u32)(r_edx+0x48u));
    /* 007246b2: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 007246b6: mov edi, dword ptr [edx + 0x4c] */ r_edi = R32((u32)(r_edx+0x4cu));
    /* 007246b9: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 007246bd: mov edi, dword ptr [edx + 0x50] */ r_edi = R32((u32)(r_edx+0x50u));
    /* 007246c0: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 007246c3: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 007246c7: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 007246cb: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 007246d1: mov dword ptr [esp + 8], 1 */ W32((u32)(r_esp+0x8u), 0x1u);
    /* 007246d9: mov ecx, eax */ r_ecx = r_eax;
    /* 007246db: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007246df: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x7246e4u); f_006936b4();
    /* 007246e4: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007246e8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007246ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007246eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007246ec: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7246f1u); f_00857dec();
    /* 007246f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007246f4: call 0x78c0b0 */ r_esp -= 4; W32(r_esp, 0x7246f9u); f_0078c0b0();
    /* 007246f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007246fa: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 007246fe: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x724703u); f_00800464();
    /* 00724703: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00724706: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00724708: je 0x724716 */ if (fZ) goto L_00724716;
L_0072470a:; BB(0x0072470a);
    /* 0072470a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x72470fu); f_007127b0();
    /* 0072470f: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
L_00724716:; BB(0x00724716);
    /* 00724716: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 00724719: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072471b: je 0x724729 */ if (fZ) goto L_00724729;
L_0072471d:; BB(0x0072471d);
    /* 0072471d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x724722u); f_007127b0();
    /* 00724722: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
L_00724729:; BB(0x00724729);
    /* 00724729: mov dword ptr [esi + 0x24], 7 */ W32((u32)(r_esi+0x24u), 0x7u);
    /* 00724730: add esp, 0x33c */ {  u32 a = r_esp; u32 b = 0x33cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00724736: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00724737: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00724738: ret  */ FN_RET(0x0072465a); r_esp += 4; return;
}

