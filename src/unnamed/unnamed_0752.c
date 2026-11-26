#include "protos.h"

void f_0075201c(void) /* sub_75201C */
{
    FN_ENTER(0x0075201c);
    /* 0075201c: mov dword ptr [0xa9ac24], 0x3f800000 */ W32((u32)(0xa9ac24u), 0x3f800000u);
    /* 00752026: mov dword ptr [0xa9ac28], 0x41000000 */ W32((u32)(0xa9ac28u), 0x41000000u);
    /* 00752030: mov dword ptr [0xa9ac2c], 0x3fc00000 */ W32((u32)(0xa9ac2cu), 0x3fc00000u);
    /* 0075203a: ret  */ FN_RET(0x0075201c); r_esp += 4; return;
}

void f_0075203c(void) /* sub_75203C */
{
    FN_ENTER(0x0075203c);
    /* 0075203c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075203d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075203f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00752041: call 0x752060 */ r_esp -= 4; W32(r_esp, 0x752046u); f_00752060();
    /* 00752046: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0075204a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075204c: jne 0x752052 */ if (!fZ) goto L_00752052;
L_0075204e:; BB(0x0075204e);
    /* 0075204e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075204f: ret 4 */ FN_RET(0x0075203c); r_esp += 8; return;
L_00752052:; BB(0x00752052);
    /* 00752052: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00752053: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x752058u); f_005c2f74();
    /* 00752058: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00752059: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075205a: ret 4 */ FN_RET(0x0075203c); r_esp += 8; return;
}

void f_00752060(void) /* sub_752060 */
{
    FN_ENTER(0x00752060);
    /* 00752060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00752061: mov ebp, esp */ r_ebp = r_esp;
    /* 00752063: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00752065: push 0x8f2d04 */ { u32 v = 0x8f2d04u; r_esp -= 4; W32(r_esp, v); }
    /* 0075206a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00752070: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752071: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00752078: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075207b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075207e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00752081: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00752084: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00752087: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075208a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00752091: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752094: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00752097: mov dword ptr [eax], 0xb42448 */ W32((u32)(r_eax), 0xb42448u);
    /* 0075209d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075209f: je 0x7520b8 */ if (fZ) goto L_007520b8;
L_007520a1:; BB(0x007520a1);
    /* 007520a1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007520a5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007520aa: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007520ae: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007520b1: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_007520b8:; BB(0x007520b8);
    /* 007520b8: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007520bb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007520bd: je 0x7520ce */ if (fZ) goto L_007520ce;
L_007520bf:; BB(0x007520bf);
    /* 007520bf: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7520c4u); f_007127b0();
    /* 007520c4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007520c7: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_007520ce:; BB(0x007520ce);
    /* 007520ce: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 007520d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007520d3: je 0x7520ec */ if (fZ) goto L_007520ec;
L_007520d5:; BB(0x007520d5);
    /* 007520d5: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 007520d8: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007520db: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 007520de: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007520e1: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 007520e4: call 0x73340c */ r_esp -= 4; W32(r_esp, 0x7520e9u); f_0073340c();
    /* 007520e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_007520ec:; BB(0x007520ec);
    /* 007520ec: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007520ef: call 0x717fb0 */ r_esp -= 4; W32(r_esp, 0x7520f4u); f_00717fb0();
    /* 007520f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007520f5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007520fc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007520ff: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x752104u); f_008171e8();
    /* 00752104: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752107: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075210e: mov esp, ebp */ r_esp = r_ebp;
    /* 00752110: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752111: ret  */ FN_RET(0x00752060); r_esp += 4; return;
}

void f_00752114(void) /* sub_752114 */
{
    FN_ENTER(0x00752114);
    /* 00752114: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00752115: mov ebp, esp */ r_ebp = r_esp;
    /* 00752117: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00752119: push 0x8f2d3a */ { u32 v = 0x8f2d3au; r_esp -= 4; W32(r_esp, v); }
    /* 0075211e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00752124: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752125: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075212c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075212f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00752132: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00752135: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00752138: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0075213b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0075213e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00752141: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00752144: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00752145: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00752148: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075214b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x752150u); f_008193cc();
    /* 00752150: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00752157: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075215a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075215d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00752160: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00752161: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00752164: mov dword ptr [ecx], 0xb42448 */ W32((u32)(r_ecx), 0xb42448u);
    /* 0075216a: mov eax, dword ptr [0x9f4410] */ r_eax = R32((u32)(0x9f4410u));
    /* 0075216f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00752172: mov dword ptr [ecx + 0x1c], ebx */ W32((u32)(r_ecx+0x1cu), r_ebx);
    /* 00752175: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 0075217c: call 0x717fe0 */ r_esp -= 4; W32(r_esp, 0x752181u); f_00717fe0();
    /* 00752181: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00752182: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00752185: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00752188: call 0x732950 */ r_esp -= 4; W32(r_esp, 0x75218du); f_00732950();
    /* 0075218d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00752190: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00752193: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00752196: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00752199: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075219c: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 0075219f: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007521a2: push 0x973d80 */ { u32 v = 0x973d80u; r_esp -= 4; W32(r_esp, v); }
    /* 007521a7: push 0x973d78 */ { u32 v = 0x973d78u; r_esp -= 4; W32(r_esp, v); }
    /* 007521ac: call 0x73b698 */ r_esp -= 4; W32(r_esp, 0x7521b1u); f_0073b698();
    /* 007521b1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007521b4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007521b7: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 007521ba: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7521bfu); f_006dc358();
    /* 007521bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007521c1: jne 0x752219 */ if (!fZ) goto L_00752219;
L_007521c3:; BB(0x007521c3);
    /* 007521c3: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 007521ca: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 007521cc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7521d1u); f_005caba4();
    /* 007521d1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007521d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007521d7: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007521da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007521dc: je 0x75222f */ if (fZ) goto L_0075222f;
L_007521de:; BB(0x007521de);
    /* 007521de: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 007521e5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007521ec: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007521ef: mov ecx, eax */ r_ecx = r_eax;
    /* 007521f1: lea eax, [edx + 0x2c] */ r_eax = (u32)(r_edx+0x2cu);
    /* 007521f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007521f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007521f6: call 0x713540 */ r_esp -= 4; W32(r_esp, 0x7521fbu); f_00713540();
    /* 007521fb: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00752202:; BB(0x00752202);
    /* 00752202: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00752205: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00752208: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 0075220b: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075220f: or edx, 0xffff0200 */ {  u32 a = r_edx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752215: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
L_00752219:; BB(0x00752219);
    /* 00752219: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075221c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075221f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752222: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752229: mov esp, ebp */ r_esp = r_ebp;
    /* 0075222b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075222c: ret 8 */ FN_RET(0x00752114); r_esp += 12; return;
L_0075222f:; BB(0x0075222f);
    /* 0075222f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00752231: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00752234: jmp 0x752202 */ goto L_00752202;
}

void f_00752238(void) /* sub_752238 */
{
    FN_ENTER(0x00752238);
    /* 00752238: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00752239: mov edi, ecx */ r_edi = r_ecx;
    /* 0075223b: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0075223e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752240: je 0x7523bd */ if (fZ) goto L_007523bd;
L_00752246:; BB(0x00752246);
    /* 00752246: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075224a: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075224d: je 0x752288 */ if (fZ) goto L_00752288;
L_0075224f:; BB(0x0075224f);
    /* 0075224f: lea eax, [edi + 0x2c] */ r_eax = (u32)(r_edi+0x2cu);
    /* 00752252: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752253: call 0x77d6e4 */ r_esp -= 4; W32(r_esp, 0x752258u); f_0077d6e4();
    /* 00752258: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00752259: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075225b: jne 0x752266 */ if (!fZ) goto L_00752266;
L_0075225d:; BB(0x0075225d);
    /* 0075225d: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 00752260: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 00752264: jmp 0x752288 */ goto L_00752288;
L_00752266:; BB(0x00752266);
    /* 00752266: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 00752269: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075226d: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00752270: je 0x752288 */ if (fZ) goto L_00752288;
L_00752272:; BB(0x00752272);
    /* 00752272: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00752278: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0075227c: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x752281u); f_007138e0();
    /* 00752281: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 00752284: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
L_00752288:; BB(0x00752288);
    /* 00752288: mov eax, edx */ r_eax = r_edx;
    /* 0075228a: and eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0075228d: je 0x7522a5 */ if (fZ) goto L_007522a5;
L_0075228f:; BB(0x0075228f);
    /* 0075228f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752291: je 0x7522a5 */ if (fZ) goto L_007522a5;
L_00752293:; BB(0x00752293);
    /* 00752293: and edx, 0xffdf */ {  u32 a = r_edx; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00752299: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0075229d: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x7522a2u); f_007138e0();
    /* 007522a2: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
L_007522a5:; BB(0x007522a5);
    /* 007522a5: call 0x714090 */ r_esp -= 4; W32(r_esp, 0x7522aau); f_00714090();
    /* 007522aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007522ac: je 0x7522bd */ if (fZ) goto L_007522bd;
L_007522ae:; BB(0x007522ae);
    /* 007522ae: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 007522b3: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 007522b6: call 0x73c534 */ r_esp -= 4; W32(r_esp, 0x7522bbu); f_0073c534();
    /* 007522bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007522bc: ret  */ FN_RET(0x00752238); r_esp += 4; return;
L_007522bd:; BB(0x007522bd);
    /* 007522bd: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 007522c2: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 007522c5: call 0x73c534 */ r_esp -= 4; W32(r_esp, 0x7522cau); f_0073c534();
    /* 007522ca: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7522cfu); f_00694c6c();
    /* 007522cf: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 007522d5: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007522d8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007522da: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007522dc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007522de: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007522e5: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x7522eau); f_007c1100();
    /* 007522ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007522ec: je 0x7522fb */ if (fZ) goto L_007522fb;
L_007522ee:; BB(0x007522ee);
    /* 007522ee: push 0xc0c00000 */ { u32 v = 0xc0c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 007522f3: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 007522f6: call 0x73c554 */ r_esp -= 4; W32(r_esp, 0x7522fbu); f_0073c554();
L_007522fb:; BB(0x007522fb);
    /* 007522fb: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x752300u); f_00694c6c();
    /* 00752300: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00752306: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00752309: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075230b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075230d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075230f: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00752316: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x75231bu); f_007c1100();
    /* 0075231b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075231d: je 0x75232c */ if (fZ) goto L_0075232c;
L_0075231f:; BB(0x0075231f);
    /* 0075231f: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00752324: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00752327: call 0x73c554 */ r_esp -= 4; W32(r_esp, 0x75232cu); f_0073c554();
L_0075232c:; BB(0x0075232c);
    /* 0075232c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0075232e: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x752333u); f_007bfe60();
    /* 00752333: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00752334: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752336: je 0x752345 */ if (fZ) goto L_00752345;
L_00752338:; BB(0x00752338);
    /* 00752338: push 0xc3be0000 */ { u32 v = 0xc3be0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075233d: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00752340: call 0x73c554 */ r_esp -= 4; W32(r_esp, 0x752345u); f_0073c554();
L_00752345:; BB(0x00752345);
    /* 00752345: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00752347: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x75234cu); f_007bfe60();
    /* 0075234c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075234d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0075234f: je 0x75235e */ if (fZ) goto L_0075235e;
L_00752351:; BB(0x00752351);
    /* 00752351: push 0x43be0000 */ { u32 v = 0x43be0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00752356: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00752359: call 0x73c554 */ r_esp -= 4; W32(r_esp, 0x75235eu); f_0073c554();
L_0075235e:; BB(0x0075235e);
    /* 0075235e: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00752361: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 00752364: fcomp dword ptr [edx + 0x4c] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x4cu))); FPOP();
    /* 00752367: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00752369: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0075236a: je 0x75236e */ if (fZ) goto L_0075236e;
L_0075236c:; BB(0x0075236c);
    /* 0075236c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075236d: ret  */ FN_RET(0x00752238); r_esp += 4; return;
L_0075236e:; BB(0x0075236e);
    /* 0075236e: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x752373u); f_00694c6c();
    /* 00752373: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 00752379: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075237c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075237e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00752380: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00752382: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00752384: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075238b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075238c: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x752391u); f_007c1160();
    /* 00752391: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752393: je 0x75236c */ if (fZ) goto L_0075236c;
L_00752395:; BB(0x00752395);
    /* 00752395: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00752397: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752399: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075239a: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075239f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7523a4u); f_00814298();
    /* 007523a4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007523a7: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 007523aa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007523ac: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x7523afu); call_ind(t); }
    /* 007523af: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 007523b2: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 007523b5: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007523b8: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 007523bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007523bc: ret  */ FN_RET(0x00752238); r_esp += 4; return;
L_007523bd:; BB(0x007523bd);
    /* 007523bd: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7523c2u); f_00694c6c();
    /* 007523c2: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 007523c8: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007523cb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007523cd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007523cf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007523d1: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007523d8: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x7523ddu); f_007c1100();
    /* 007523dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007523df: je 0x7523ee */ if (fZ) goto L_007523ee;
L_007523e1:; BB(0x007523e1);
    /* 007523e1: push 0xc0c00000 */ { u32 v = 0xc0c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 007523e6: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 007523e9: call 0x73c554 */ r_esp -= 4; W32(r_esp, 0x7523eeu); f_0073c554();
L_007523ee:; BB(0x007523ee);
    /* 007523ee: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7523f3u); f_00694c6c();
    /* 007523f3: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 007523f9: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007523fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007523fe: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00752400: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00752402: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00752409: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x75240eu); f_007c1100();
    /* 0075240e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752410: je 0x75241f */ if (fZ) goto L_0075241f;
L_00752412:; BB(0x00752412);
    /* 00752412: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00752417: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0075241a: call 0x73c554 */ r_esp -= 4; W32(r_esp, 0x75241fu); f_0073c554();
L_0075241f:; BB(0x0075241f);
    /* 0075241f: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x752424u); f_00694c6c();
    /* 00752424: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0075242a: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075242d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075242f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00752431: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00752433: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00752435: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075243c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075243d: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x752442u); f_007c1160();
    /* 00752442: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752444: je 0x75236c */ if (fZ) goto L_0075236c;
L_0075244a:; BB(0x0075244a);
    /* 0075244a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075244c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075244d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075244e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075244f: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00752454: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x752459u); f_00814298();
    /* 00752459: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075245c: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 0075245f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00752461: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x752464u); call_ind(t); }
    /* 00752464: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00752467: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0075246a: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075246d: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00752470: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00752471: ret  */ FN_RET(0x00752238); r_esp += 4; return;
}

void f_00752474(void) /* sub_752474 */
{
    FN_ENTER(0x00752474);
    /* 00752474: mov dword ptr [0xa9ac34], 0x3f800000 */ W32((u32)(0xa9ac34u), 0x3f800000u);
    /* 0075247e: mov dword ptr [0xa9ac38], 0x41000000 */ W32((u32)(0xa9ac38u), 0x41000000u);
    /* 00752488: mov dword ptr [0xa9ac3c], 0x3fc00000 */ W32((u32)(0xa9ac3cu), 0x3fc00000u);
    /* 00752492: ret  */ FN_RET(0x00752474); r_esp += 4; return;
}

void f_00752494(void) /* sub_752494 */
{
    FN_ENTER(0x00752494);
    /* 00752494: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00752495: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00752497: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00752499: call 0x7524b8 */ r_esp -= 4; W32(r_esp, 0x75249eu); f_007524b8();
    /* 0075249e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007524a2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007524a4: jne 0x7524aa */ if (!fZ) goto L_007524aa;
L_007524a6:; BB(0x007524a6);
    /* 007524a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007524a7: ret 4 */ FN_RET(0x00752494); r_esp += 8; return;
L_007524aa:; BB(0x007524aa);
    /* 007524aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007524ab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7524b0u); f_005c2f74();
    /* 007524b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007524b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007524b2: ret 4 */ FN_RET(0x00752494); r_esp += 8; return;
}

void f_007524b8(void) /* sub_7524B8 */
{
    FN_ENTER(0x007524b8);
    /* 007524b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007524b9: mov ebp, esp */ r_ebp = r_esp;
    /* 007524bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007524bd: push 0x8f2d54 */ { u32 v = 0x8f2d54u; r_esp -= 4; W32(r_esp, v); }
    /* 007524c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007524c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007524c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007524d0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007524d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007524d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007524d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007524dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007524df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007524e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007524e9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007524ec: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 007524ef: mov dword ptr [ecx], 0xb424d8 */ W32((u32)(r_ecx), 0xb424d8u);
    /* 007524f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007524f7: je 0x752510 */ if (fZ) goto L_00752510;
L_007524f9:; BB(0x007524f9);
    /* 007524f9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007524fc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00752500: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00752505: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00752509: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
L_00752510:; BB(0x00752510);
    /* 00752510: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 00752513: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752515: je 0x752528 */ if (fZ) goto L_00752528;
L_00752517:; BB(0x00752517);
    /* 00752517: mov ecx, eax */ r_ecx = r_eax;
    /* 00752519: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75251eu); f_007127b0();
    /* 0075251e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752521: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
L_00752528:; BB(0x00752528);
    /* 00752528: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0075252b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075252d: je 0x752540 */ if (fZ) goto L_00752540;
L_0075252f:; BB(0x0075252f);
    /* 0075252f: mov ecx, eax */ r_ecx = r_eax;
    /* 00752531: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x752536u); f_007127b0();
    /* 00752536: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752539: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
L_00752540:; BB(0x00752540);
    /* 00752540: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 00752543: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752545: je 0x752558 */ if (fZ) goto L_00752558;
L_00752547:; BB(0x00752547);
    /* 00752547: mov ecx, eax */ r_ecx = r_eax;
    /* 00752549: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75254eu); f_007127b0();
    /* 0075254e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752551: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_00752558:; BB(0x00752558);
    /* 00752558: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 0075255b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075255d: je 0x752570 */ if (fZ) goto L_00752570;
L_0075255f:; BB(0x0075255f);
    /* 0075255f: mov ecx, eax */ r_ecx = r_eax;
    /* 00752561: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x752566u); f_007127b0();
    /* 00752566: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752569: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_00752570:; BB(0x00752570);
    /* 00752570: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 00752573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752575: je 0x752588 */ if (fZ) goto L_00752588;
L_00752577:; BB(0x00752577);
    /* 00752577: mov ecx, eax */ r_ecx = r_eax;
    /* 00752579: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75257eu); f_007127b0();
    /* 0075257e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752581: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_00752588:; BB(0x00752588);
    /* 00752588: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 0075258b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075258d: je 0x7525a0 */ if (fZ) goto L_007525a0;
L_0075258f:; BB(0x0075258f);
    /* 0075258f: mov ecx, eax */ r_ecx = r_eax;
    /* 00752591: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x752596u); f_007127b0();
    /* 00752596: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752599: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_007525a0:; BB(0x007525a0);
    /* 007525a0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007525a7: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7525acu); f_008171e8();
    /* 007525ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007525af: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007525b6: mov esp, ebp */ r_esp = r_ebp;
    /* 007525b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007525b9: ret  */ FN_RET(0x007524b8); r_esp += 4; return;
}

void f_00752520(void)
{
    FN_ENTER(0x00752520);
    goto L_00752520;
L_007524e9:; BB(0x007524e9);
    /* 007524e9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007524ec: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 007524ef: mov dword ptr [ecx], 0xb424d8 */ W32((u32)(r_ecx), 0xb424d8u);
    /* 007524f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007524f7: je 0x752510 */ if (fZ) goto L_00752510;
L_007524f9:; BB(0x007524f9);
    /* 007524f9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007524fc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00752500: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00752505: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00752509: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
L_00752510:; BB(0x00752510);
    /* 00752510: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 00752513: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752515: je 0x752528 */ if (fZ) goto L_00752528;
L_00752517:; BB(0x00752517);
    /* 00752517: mov ecx, eax */ r_ecx = r_eax;
    /* 00752519: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75251eu); f_007127b0();
    /* 0075251e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00752520:; BB(0x00752520);
    /* 00752520: loopne 0x7524e9 */ r_ecx--; if (r_ecx && !fZ) goto L_007524e9;
    /* 00752521: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 00752522: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00752523: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00752524: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00752526: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00752528:; BB(0x00752528);
    /* 00752528: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0075252b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075252d: je 0x752540 */ if (fZ) goto L_00752540;
L_0075252f:; BB(0x0075252f);
    /* 0075252f: mov ecx, eax */ r_ecx = r_eax;
    /* 00752531: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x752536u); f_007127b0();
    /* 00752536: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752539: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
L_00752540:; BB(0x00752540);
    /* 00752540: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 00752543: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752545: je 0x752558 */ if (fZ) goto L_00752558;
L_00752547:; BB(0x00752547);
    /* 00752547: mov ecx, eax */ r_ecx = r_eax;
    /* 00752549: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75254eu); f_007127b0();
    /* 0075254e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752551: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_00752558:; BB(0x00752558);
    /* 00752558: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 0075255b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075255d: je 0x752570 */ if (fZ) goto L_00752570;
L_0075255f:; BB(0x0075255f);
    /* 0075255f: mov ecx, eax */ r_ecx = r_eax;
    /* 00752561: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x752566u); f_007127b0();
    /* 00752566: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752569: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_00752570:; BB(0x00752570);
    /* 00752570: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 00752573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752575: je 0x752588 */ if (fZ) goto L_00752588;
L_00752577:; BB(0x00752577);
    /* 00752577: mov ecx, eax */ r_ecx = r_eax;
    /* 00752579: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75257eu); f_007127b0();
    /* 0075257e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752581: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_00752588:; BB(0x00752588);
    /* 00752588: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 0075258b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075258d: je 0x7525a0 */ if (fZ) goto L_007525a0;
L_0075258f:; BB(0x0075258f);
    /* 0075258f: mov ecx, eax */ r_ecx = r_eax;
    /* 00752591: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x752596u); f_007127b0();
    /* 00752596: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752599: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_007525a0:; BB(0x007525a0);
    /* 007525a0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007525a7: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7525acu); f_008171e8();
    /* 007525ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007525af: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007525b6: mov esp, ebp */ r_esp = r_ebp;
    /* 007525b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007525b9: ret  */ FN_RET(0x00752520); r_esp += 4; return;
}

void f_007525bc(void) /* sub_7525BC */
{
    FN_ENTER(0x007525bc);
    /* 007525bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007525bd: mov ebp, esp */ r_ebp = r_esp;
    /* 007525bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007525c1: push 0x8f2d70 */ { u32 v = 0x8f2d70u; r_esp -= 4; W32(r_esp, v); }
    /* 007525c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007525cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007525cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007525d4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007525d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007525da: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 007525dd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 007525e0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007525e3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007525e6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007525e9: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 007525ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007525ed: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 007525f0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007525f3: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7525f8u); f_008193cc();
    /* 007525f8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007525ff: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00752602: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752605: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00752608: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0075260b: mov dword ptr [ecx + 0x28], ebx */ W32((u32)(r_ecx+0x28u), r_ebx);
    /* 0075260e: mov dword ptr [ecx], 0xb424d8 */ W32((u32)(r_ecx), 0xb424d8u);
    /* 00752614: mov eax, dword ptr [0x9f4414] */ r_eax = R32((u32)(0x9f4414u));
    /* 00752619: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0075261c: call 0x752664 */ r_esp -= 4; W32(r_esp, 0x752621u); f_00752664();
    /* 00752621: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00752624: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752627: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0075262a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075262c: mov dword ptr [ecx + 0x24], 0xffffffff */ W32((u32)(r_ecx+0x24u), 0xffffffffu);
    /* 00752633: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 00752636: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 00752639: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0075263c: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0075263f: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00752642: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 00752645: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 00752648: mov byte ptr [ecx + 0x1c], dl */ W8((u32)(r_ecx+0x1cu), (u8)r_edx);
    /* 0075264b: mov word ptr [ecx + 0x20], dx */ W16((u32)(r_ecx+0x20u), (u16)r_edx);
    /* 0075264f: mov eax, ecx */ r_eax = r_ecx;
    /* 00752651: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752654: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075265b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075265d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075265e: ret 8 */ FN_RET(0x007525bc); r_esp += 12; return;
}

void f_00752664(void) /* sub_752664 */
{
    FN_ENTER(0x00752664);
    /* 00752664: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00752665: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00752666: mov edi, ecx */ r_edi = r_ecx;
    /* 00752668: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075266a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75266fu); f_0073ec50();
    /* 0075266f: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00752672: push 0x973dc0 */ { u32 v = 0x973dc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00752677: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752678: call 0x74aff8 */ r_esp -= 4; W32(r_esp, 0x75267du); f_0074aff8();
    /* 0075267d: mov ebx, eax */ r_ebx = r_eax;
    /* 0075267f: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00752681: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x752686u); f_0079317c();
    /* 00752686: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00752689: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075268a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075268c: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x752691u); f_00737ae4();
    /* 00752691: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00752693: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00752696: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x75269bu); f_007336fc();
    /* 0075269b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075269c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075269f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007526a1: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7526a6u); f_00712624();
    /* 007526a6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007526a8: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 007526af: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007526b5: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 007526bc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007526be: call 0x74b340 */ r_esp -= 4; W32(r_esp, 0x7526c3u); f_0074b340();
    /* 007526c3: mov eax, ebx */ r_eax = r_ebx;
    /* 007526c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007526c6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007526c7: ret  */ FN_RET(0x00752664); r_esp += 4; return;
}

void f_007526c8(void) /* sub_7526C8 */
{
    FN_ENTER(0x007526c8);
    /* 007526c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007526c9: mov ebp, esp */ r_ebp = r_esp;
    /* 007526cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007526cd: push 0x8f2db2 */ { u32 v = 0x8f2db2u; r_esp -= 4; W32(r_esp, v); }
    /* 007526d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007526d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007526d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007526e0: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007526e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007526e6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 007526e9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 007526ec: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007526ef: push dword ptr [ecx + 0x28] */ { u32 v = R32((u32)(r_ecx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007526f2: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007526f5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7526fau); f_0068d5a8();
    /* 007526fa: mov esi, eax */ r_esi = r_eax;
    /* 007526fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007526ff: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752701: je 0x752a31 */ if (fZ) goto L_00752a31;
L_00752707:; BB(0x00752707);
    /* 00752707: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075270a: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075270d: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x752712u); f_00719140();
    /* 00752712: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00752713: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752716: movzx edx, byte ptr [edx + 0x1c] */ r_edx = (u32)R8((u32)(r_edx+0x1cu));
    /* 0075271a: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075271d: ja 0x752dc2 */ if ((!fC&&!fZ)) goto L_00752dc2;
L_00752723:; BB(0x00752723);
    /* 00752723: mov edx, dword ptr [edx*4 + 0x973de0] */ r_edx = R32((u32)(r_edx*4+0x973de0u));
    /* 0075272a: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00752a31:; BB(0x00752a31);
    /* 00752a31: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752a34: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752a37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752a3a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752a41: mov esp, ebp */ r_esp = r_ebp;
    /* 00752a43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752a44: ret  */ FN_RET(0x007526c8); r_esp += 4; return;
L_00752dc2:; BB(0x00752dc2);
    /* 00752dc2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752dc5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752dc8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00752dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752dd8: ret  */ FN_RET(0x007526c8); r_esp += 4; return;
}

void f_0075272c(void)
{
    FN_ENTER(0x0075272c);
    /* 0075272c: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 00752732: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752734: jne 0x752dc2 */ if (!fZ) goto L_00752dc2;
L_0075273a:; BB(0x0075273a);
    /* 0075273a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075273d: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00752741: jmp 0x752dc2 */ goto L_00752dc2;
L_00752dc2:; BB(0x00752dc2);
    /* 00752dc2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752dc5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752dc8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00752dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752dd8: ret  */ FN_RET(0x0075272c); r_esp += 4; return;
}

void f_00752746(void)
{
    FN_ENTER(0x00752746);
    /* 00752746: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752749: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075274c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075274e: je 0x75275f */ if (fZ) goto L_0075275f;
L_00752750:; BB(0x00752750);
    /* 00752750: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x752755u); f_007127b0();
    /* 00752755: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752758: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0075275f:; BB(0x0075275f);
    /* 0075275f: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00752762: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752764: je 0x75278d */ if (fZ) goto L_0075278d;
L_00752766:; BB(0x00752766);
    /* 00752766: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x75276bu); f_007127c8();
    /* 0075276b: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0075276e: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
    /* 00752771: movzx eax, byte ptr [esi + 0x60] */ r_eax = (u32)R8((u32)(r_esi+0x60u));
    /* 00752775: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075277a: mov byte ptr [esi + 0x60], al */ W8((u32)(r_esi+0x60u), (u8)r_eax);
    /* 0075277d: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 00752780: movzx edx, byte ptr [ecx + 0x60] */ r_edx = (u32)R8((u32)(r_ecx+0x60u));
    /* 00752784: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075278a: mov byte ptr [ecx + 0x60], dl */ W8((u32)(r_ecx+0x60u), (u8)r_edx);
L_0075278d:; BB(0x0075278d);
    /* 0075278d: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00752794: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 00752796: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x75279bu); f_005caba4();
    /* 0075279b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075279e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007527a1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 007527a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007527a6: je 0x752dd9 */ if (fZ) goto L_00752dd9;
L_007527ac:; BB(0x007527ac);
    /* 007527ac: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 007527b3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007527ba: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 007527bc: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7527c1u); f_0073ec50();
    /* 007527c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007527c2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007527c5: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007527c8: push dword ptr [edx + 0x2c] */ { u32 v = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007527cb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007527ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007527cf: call 0x75330c */ r_esp -= 4; W32(r_esp, 0x7527d4u); f_0075330c();
    /* 007527d4: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_007527db:; BB(0x007527db);
    /* 007527db: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007527de: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007527e1: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 007527e4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007527eb: mov eax, edx */ r_eax = r_edx;
    /* 007527ed: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007527ef: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007527f2: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7527f7u); f_007336fc();
    /* 007527f7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007527fa: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 007527fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007527fe: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00752801: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x752806u); f_00712624();
    /* 00752806: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752809: call 0x7531a4 */ r_esp -= 4; W32(r_esp, 0x75280eu); f_007531a4();
    /* 0075280e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752811: mov byte ptr [edx + 0x1d], 0xff */ W8((u32)(r_edx+0x1du), 0xffu);
    /* 00752815: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00752818: mov byte ptr [edx + 0x1c], 0xf */ W8((u32)(r_edx+0x1cu), 0xfu);
    /* 0075281c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075281f: call 0x7531f4 */ r_esp -= 4; W32(r_esp, 0x752824u); f_007531f4();
    /* 00752824: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752827: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075282a: movsx eax, byte ptr [edx + 0x60] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x60u));
    /* 0075282e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752830: je 0x75284d */ if (fZ) goto L_0075284d;
L_00752832:; BB(0x00752832);
    /* 00752832: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752835: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752838: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075283b: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 0075283f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752842: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752849: mov esp, ebp */ r_esp = r_ebp;
    /* 0075284b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075284c: ret  */ FN_RET(0x00752746); r_esp += 4; return;
L_0075284d:; BB(0x0075284d);
    /* 0075284d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075284f: je 0x752dc2 */ if (fZ) goto L_00752dc2;
L_00752855:; BB(0x00752855);
    /* 00752855: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752858: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 0075285c: jmp 0x752dc2 */ goto L_00752dc2;
L_00752dc2:; BB(0x00752dc2);
    /* 00752dc2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752dc5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752dc8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00752dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752dd8: ret  */ FN_RET(0x00752746); r_esp += 4; return;
L_00752dd9:; BB(0x00752dd9);
    /* 00752dd9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00752ddb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00752dde: jmp 0x7527db */ goto L_007527db;
}

void f_0075281c(void)
{
    FN_ENTER(0x0075281c);
    /* 0075281c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075281f: call 0x7531f4 */ r_esp -= 4; W32(r_esp, 0x752824u); f_007531f4();
    /* 00752824: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752827: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075282a: movsx eax, byte ptr [edx + 0x60] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x60u));
    /* 0075282e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752830: je 0x75284d */ if (fZ) goto L_0075284d;
L_00752832:; BB(0x00752832);
    /* 00752832: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752835: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752838: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075283b: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 0075283f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752842: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752849: mov esp, ebp */ r_esp = r_ebp;
    /* 0075284b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075284c: ret  */ FN_RET(0x0075281c); r_esp += 4; return;
L_0075284d:; BB(0x0075284d);
    /* 0075284d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075284f: je 0x752dc2 */ if (fZ) goto L_00752dc2;
L_00752855:; BB(0x00752855);
    /* 00752855: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752858: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 0075285c: jmp 0x752dc2 */ goto L_00752dc2;
L_00752dc2:; BB(0x00752dc2);
    /* 00752dc2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752dc5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752dc8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00752dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752dd8: ret  */ FN_RET(0x0075281c); r_esp += 4; return;
}

void f_00752861(void)
{
    FN_ENTER(0x00752861);
    /* 00752861: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 00752864: call 0x5dc1e0 */ r_esp -= 4; W32(r_esp, 0x752869u); f_005dc1e0();
    /* 00752869: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075286c: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 0075286f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752870: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00752873: call 0x5d4108 */ r_esp -= 4; W32(r_esp, 0x752878u); f_005d4108();
    /* 00752878: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0075287a:; BB(0x0075287a);
    /* 0075287a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075287b: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 0075287e: call 0x5dbc08 */ r_esp -= 4; W32(r_esp, 0x752883u); f_005dbc08();
    /* 00752883: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752886: je 0x752890 */ if (fZ) goto L_00752890;
L_00752888:; BB(0x00752888);
    /* 00752888: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0075288b: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075288e: jl 0x75287a */ if ((fS!=fO)) goto L_0075287a;
L_00752890:; BB(0x00752890);
    /* 00752890: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752893: movsx edx, byte ptr [eax + 0x1e] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x1eu));
    /* 00752897: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00752899: je 0x752907 */ if (fZ) goto L_00752907;
L_0075289b:; BB(0x0075289b);
    /* 0075289b: mov edx, eax */ r_edx = r_eax;
    /* 0075289d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075289f: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 007528a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007528a4: mov word ptr [edx + 0x20], ax */ W16((u32)(r_edx+0x20u), (u16)r_eax);
    /* 007528a8: call 0x7260e8 */ r_esp -= 4; W32(r_esp, 0x7528adu); f_007260e8();
    /* 007528ad: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007528b0: call 0x753060 */ r_esp -= 4; W32(r_esp, 0x7528b5u); f_00753060();
    /* 007528b5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007528b8: mov byte ptr [edx + 0x1c], 0xd */ W8((u32)(r_edx+0x1cu), 0xdu);
    /* 007528bc: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 007528bf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007528c2: movsx ebx, word ptr [ecx + 0x20] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 007528c6: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 007528c9: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 007528cc: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 007528cf: fcomp dword ptr [0x973e68] */ fx_compare(ST(0), R_F32((u32)(0x973e68u))); FPOP();
    /* 007528d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007528d7: mov word ptr [ecx + 0x20], dx */ W16((u32)(r_ecx+0x20u), (u16)r_edx);
    /* 007528db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007528dc: jbe 0x752dc2 */ if ((fC||fZ)) goto L_00752dc2;
L_007528e2:; BB(0x007528e2);
    /* 007528e2: mov eax, ecx */ r_eax = r_ecx;
    /* 007528e4: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007528e7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007528e9: je 0x752dc2 */ if (fZ) goto L_00752dc2;
L_007528ef:; BB(0x007528ef);
    /* 007528ef: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7528f4u); f_007127b0();
    /* 007528f4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007528f7: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 007528fe: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00752902: jmp 0x752dc2 */ goto L_00752dc2;
L_00752907:; BB(0x00752907);
    /* 00752907: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075290a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075290d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752910: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00752914: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752917: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075291e: mov esp, ebp */ r_esp = r_ebp;
    /* 00752920: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752921: ret  */ FN_RET(0x00752861); r_esp += 4; return;
L_00752dc2:; BB(0x00752dc2);
    /* 00752dc2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752dc5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752dc8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00752dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752dd8: ret  */ FN_RET(0x00752861); r_esp += 4; return;
}

void f_007528bf(void)
{
    FN_ENTER(0x007528bf);
    /* 007528bf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007528c2: movsx ebx, word ptr [ecx + 0x20] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 007528c6: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 007528c9: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 007528cc: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 007528cf: fcomp dword ptr [0x973e68] */ fx_compare(ST(0), R_F32((u32)(0x973e68u))); FPOP();
    /* 007528d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007528d7: mov word ptr [ecx + 0x20], dx */ W16((u32)(r_ecx+0x20u), (u16)r_edx);
    /* 007528db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007528dc: jbe 0x752dc2 */ if ((fC||fZ)) goto L_00752dc2;
L_007528e2:; BB(0x007528e2);
    /* 007528e2: mov eax, ecx */ r_eax = r_ecx;
    /* 007528e4: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007528e7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007528e9: je 0x752dc2 */ if (fZ) goto L_00752dc2;
L_007528ef:; BB(0x007528ef);
    /* 007528ef: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7528f4u); f_007127b0();
    /* 007528f4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007528f7: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 007528fe: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00752902: jmp 0x752dc2 */ goto L_00752dc2;
L_00752dc2:; BB(0x00752dc2);
    /* 00752dc2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752dc5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752dc8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00752dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752dd8: ret  */ FN_RET(0x007528bf); r_esp += 4; return;
}

void f_00752922(void)
{
    FN_ENTER(0x00752922);
    /* 00752922: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752925: movsx eax, word ptr [eax + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 00752929: jmp 0x752955 */ goto L_00752955;
L_00752955:; BB(0x00752955);
    /* 00752955: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752958: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0075295b: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 0075295e: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 00752961: fcomp dword ptr [0x973e6c] */ fx_compare(ST(0), R_F32((u32)(0x973e6cu))); FPOP();
    /* 00752967: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00752969: mov word ptr [ecx + 0x20], dx */ W16((u32)(r_ecx+0x20u), (u16)r_edx);
    /* 0075296d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0075296e: jbe 0x752dc2 */ if ((fC||fZ)) goto L_00752dc2;
L_00752974:; BB(0x00752974);
    /* 00752974: mov eax, ecx */ r_eax = r_ecx;
    /* 00752976: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00752979: call 0x7264c4 */ r_esp -= 4; W32(r_esp, 0x75297eu); f_007264c4();
    /* 0075297e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752980: je 0x752dc2 */ if (fZ) goto L_00752dc2;
L_00752986:; BB(0x00752986);
    /* 00752986: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752989: mov byte ptr [eax + 0x1c], 0xa */ W8((u32)(r_eax+0x1cu), 0xau);
    /* 0075298d: jmp 0x752dc2 */ goto L_00752dc2;
L_00752dc2:; BB(0x00752dc2);
    /* 00752dc2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752dc5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752dc8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00752dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752dd8: ret  */ FN_RET(0x00752922); r_esp += 4; return;
}

void f_0075292b(void)
{
    FN_ENTER(0x0075292b);
    /* 0075292b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075292e: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00752931: call 0x72610c */ r_esp -= 4; W32(r_esp, 0x752936u); f_0072610c();
    /* 00752936: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752938: je 0x752992 */ if (fZ) goto L_00752992;
L_0075293a:; BB(0x0075293a);
    /* 0075293a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075293c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075293d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075293e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075293f: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 00752944: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x752949u); f_00814298();
    /* 00752949: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075294c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075294f: mov byte ptr [edx + 0x1c], 0xb */ W8((u32)(r_edx+0x1cu), 0xbu);
    /* 00752953: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 00752955: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752958: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0075295b: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 0075295e: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 00752961: fcomp dword ptr [0x973e6c] */ fx_compare(ST(0), R_F32((u32)(0x973e6cu))); FPOP();
    /* 00752967: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00752969: mov word ptr [ecx + 0x20], dx */ W16((u32)(r_ecx+0x20u), (u16)r_edx);
    /* 0075296d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0075296e: jbe 0x752dc2 */ if ((fC||fZ)) goto L_00752dc2;
L_00752974:; BB(0x00752974);
    /* 00752974: mov eax, ecx */ r_eax = r_ecx;
    /* 00752976: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00752979: call 0x7264c4 */ r_esp -= 4; W32(r_esp, 0x75297eu); f_007264c4();
    /* 0075297e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752980: je 0x752dc2 */ if (fZ) goto L_00752dc2;
L_00752986:; BB(0x00752986);
    /* 00752986: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752989: mov byte ptr [eax + 0x1c], 0xa */ W8((u32)(r_eax+0x1cu), 0xau);
    /* 0075298d: jmp 0x752dc2 */ goto L_00752dc2;
L_00752992:; BB(0x00752992);
    /* 00752992: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752995: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752998: mov byte ptr [eax + 0x1c], 0xc */ W8((u32)(r_eax+0x1cu), 0xcu);
    /* 0075299c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075299f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007529a6: mov esp, ebp */ r_esp = r_ebp;
    /* 007529a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007529a9: ret  */ FN_RET(0x0075292b); r_esp += 4; return;
L_00752dc2:; BB(0x00752dc2);
    /* 00752dc2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752dc5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752dc8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00752dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752dd8: ret  */ FN_RET(0x0075292b); r_esp += 4; return;
}

void f_007529aa(void)
{
    FN_ENTER(0x007529aa);
    /* 007529aa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007529ad: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 007529b0: call 0x7264c4 */ r_esp -= 4; W32(r_esp, 0x7529b5u); f_007264c4();
    /* 007529b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007529b7: je 0x752dc2 */ if (fZ) goto L_00752dc2;
L_007529bd:; BB(0x007529bd);
    /* 007529bd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007529c0: mov byte ptr [eax + 0x1c], 0xa */ W8((u32)(r_eax+0x1cu), 0xau);
    /* 007529c4: jmp 0x752dc2 */ goto L_00752dc2;
L_00752dc2:; BB(0x00752dc2);
    /* 00752dc2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752dc5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752dc8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00752dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752dd8: ret  */ FN_RET(0x007529aa); r_esp += 4; return;
}

void f_007529c9(void)
{
    FN_ENTER(0x007529c9);
    /* 007529c9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007529cc: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 007529cf: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x7529d4u); f_00712714();
    /* 007529d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007529d7: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 007529da: call 0x712780 */ r_esp -= 4; W32(r_esp, 0x7529dfu); f_00712780();
    /* 007529df: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007529e2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 007529e5: movzx eax, byte ptr [edx + 0x60] */ r_eax = (u32)R8((u32)(r_edx+0x60u));
    /* 007529e9: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007529ee: mov byte ptr [edx + 0x60], al */ W8((u32)(r_edx+0x60u), (u8)r_eax);
    /* 007529f1: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 007529f4: call 0x726510 */ r_esp -= 4; W32(r_esp, 0x7529f9u); f_00726510();
    /* 007529f9: mov eax, ebx */ r_eax = r_ebx;
    /* 007529fb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007529fd: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00752a00: call 0x74b340 */ r_esp -= 4; W32(r_esp, 0x752a05u); f_0074b340();
    /* 00752a05: mov edx, ebx */ r_edx = r_ebx;
    /* 00752a07: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00752a0a: push dword ptr [eax + 0x68] */ { u32 v = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00752a0d: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 00752a10: call 0x73175c */ r_esp -= 4; W32(r_esp, 0x752a15u); f_0073175c();
    /* 00752a15: mov eax, ebx */ r_eax = r_ebx;
    /* 00752a17: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00752a1a: call 0x726294 */ r_esp -= 4; W32(r_esp, 0x752a1fu); f_00726294();
    /* 00752a1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752a21: je 0x752a2b */ if (fZ) goto L_00752a2b;
L_00752a23:; BB(0x00752a23);
    /* 00752a23: mov eax, ebx */ r_eax = r_ebx;
    /* 00752a25: mov byte ptr [eax + 0x1c], 9 */ W8((u32)(r_eax+0x1cu), 0x9u);
    /* 00752a29: jmp 0x752a31 */ goto L_00752a31;
L_00752a2b:; BB(0x00752a2b);
    /* 00752a2b: mov eax, ebx */ r_eax = r_ebx;
    /* 00752a2d: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
L_00752a31:; BB(0x00752a31);
    /* 00752a31: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752a34: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752a37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752a3a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752a41: mov esp, ebp */ r_esp = r_ebp;
    /* 00752a43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752a44: ret  */ FN_RET(0x007529c9); r_esp += 4; return;
}

void f_00752a45(void)
{
    FN_ENTER(0x00752a45);
    /* 00752a45: mov ebx, dword ptr [0xa0f678] */ r_ebx = R32((u32)(0xa0f678u));
    /* 00752a4b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00752a4e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00752a50: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00752a52: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00752a54: or ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00752a56: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00752a5d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00752a5e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x752a63u); f_007c1160();
    /* 00752a63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752a65: je 0x752a94 */ if (fZ) goto L_00752a94;
L_00752a67:; BB(0x00752a67);
    /* 00752a67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00752a69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752a6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752a6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752a6c: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00752a71: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x752a76u); f_00814298();
    /* 00752a76: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00752a79: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752a7c: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752a7f: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752a82: mov byte ptr [eax + 0x1c], 5 */ W8((u32)(r_eax+0x1cu), 0x5u);
    /* 00752a86: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752a89: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752a90: mov esp, ebp */ r_esp = r_ebp;
    /* 00752a92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752a93: ret  */ FN_RET(0x00752a45); r_esp += 4; return;
L_00752a94:; BB(0x00752a94);
    /* 00752a94: mov ecx, esi */ r_ecx = r_esi;
    /* 00752a96: call 0x68fb00 */ r_esp -= 4; W32(r_esp, 0x752a9bu); f_0068fb00();
    /* 00752a9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752a9d: je 0x752dc2 */ if (fZ) goto L_00752dc2;
L_00752aa3:; BB(0x00752aa3);
    /* 00752aa3: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 00752aa6: call 0x5dc1e0 */ r_esp -= 4; W32(r_esp, 0x752aabu); f_005dc1e0();
    /* 00752aab: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752aae: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 00752ab1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00752ab2: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00752ab5: call 0x5d4108 */ r_esp -= 4; W32(r_esp, 0x752abau); f_005d4108();
    /* 00752aba: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00752abc:; BB(0x00752abc);
    /* 00752abc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00752abd: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 00752ac0: call 0x5dbc08 */ r_esp -= 4; W32(r_esp, 0x752ac5u); f_005dbc08();
    /* 00752ac5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752ac8: je 0x752ad2 */ if (fZ) goto L_00752ad2;
L_00752aca:; BB(0x00752aca);
    /* 00752aca: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00752acd: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00752ad0: jl 0x752abc */ if ((fS!=fO)) goto L_00752abc;
L_00752ad2:; BB(0x00752ad2);
    /* 00752ad2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752ad5: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 00752ad8: mov byte ptr [edx + 0x1e], bl */ W8((u32)(r_edx+0x1eu), (u8)r_ebx);
    /* 00752adb: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x752ae0u); f_00737d90();
    /* 00752ae0: mov ebx, eax */ r_ebx = r_eax;
    /* 00752ae2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752ae5: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00752ae8: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x752aedu); f_00737d90();
    /* 00752aed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752aee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00752aef: mov ecx, esi */ r_ecx = r_esi;
    /* 00752af1: call 0x68dcc8 */ r_esp -= 4; W32(r_esp, 0x752af6u); f_0068dcc8();
    /* 00752af6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752af9: mov byte ptr [eax + 0x1c], 8 */ W8((u32)(r_eax+0x1cu), 0x8u);
    /* 00752afd: jmp 0x752dc2 */ goto L_00752dc2;
L_00752dc2:; BB(0x00752dc2);
    /* 00752dc2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752dc5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752dc8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00752dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752dd8: ret  */ FN_RET(0x00752a45); r_esp += 4; return;
}

void f_00752b02(void)
{
    FN_ENTER(0x00752b02);
    /* 00752b02: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752b05: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00752b08: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752b0a: je 0x752b1b */ if (fZ) goto L_00752b1b;
L_00752b0c:; BB(0x00752b0c);
    /* 00752b0c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x752b11u); f_007127b0();
    /* 00752b11: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752b14: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_00752b1b:; BB(0x00752b1b);
    /* 00752b1b: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00752b1e: call 0x737a68 */ r_esp -= 4; W32(r_esp, 0x752b23u); f_00737a68();
    /* 00752b23: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752b26: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00752b28: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00752b2b: call 0x7260e8 */ r_esp -= 4; W32(r_esp, 0x752b30u); f_007260e8();
    /* 00752b30: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752b33: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00752b36: movzx eax, byte ptr [edx + 0x60] */ r_eax = (u32)R8((u32)(r_edx+0x60u));
    /* 00752b3a: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00752b3f: mov byte ptr [edx + 0x60], al */ W8((u32)(r_edx+0x60u), (u8)r_eax);
    /* 00752b42: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 00752b45: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752b47: je 0x752de3 */ if (fZ) goto L_00752de3;
L_00752b4d:; BB(0x00752b4d);
    /* 00752b4d: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00752b54: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00752b59: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00752b5c: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00752b63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752b65: je 0x752b6e */ if (fZ) goto L_00752b6e;
L_00752b67:; BB(0x00752b67);
    /* 00752b67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00752b69: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x752b6eu); f_00760acc();
L_00752b6e:; BB(0x00752b6e);
    /* 00752b6e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752b71: mov byte ptr [eax + 0x1c], 6 */ W8((u32)(r_eax+0x1cu), 0x6u);
    /* 00752b75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752b78: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00752b7b: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00752b82: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752b84: je 0x752b9e */ if (fZ) goto L_00752b9e;
L_00752b86:; BB(0x00752b86);
    /* 00752b86: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752b89: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752b8c: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00752b90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752b93: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752b9a: mov esp, ebp */ r_esp = r_ebp;
    /* 00752b9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752b9d: ret  */ FN_RET(0x00752b02); r_esp += 4; return;
L_00752b9e:; BB(0x00752b9e);
    /* 00752b9e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752ba0: je 0x752dc2 */ if (fZ) goto L_00752dc2;
L_00752ba6:; BB(0x00752ba6);
    /* 00752ba6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752ba9: mov byte ptr [eax + 0x1c], 7 */ W8((u32)(r_eax+0x1cu), 0x7u);
    /* 00752bad: jmp 0x752dc2 */ goto L_00752dc2;
L_00752dc2:; BB(0x00752dc2);
    /* 00752dc2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752dc5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752dc8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00752dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752dd8: ret  */ FN_RET(0x00752b02); r_esp += 4; return;
L_00752de3:; BB(0x00752de3);
    /* 00752de3: call 0x752ffc */ r_esp -= 4; W32(r_esp, 0x752de8u); f_00752ffc();
    /* 00752de8: mov edx, eax */ r_edx = r_eax;
    /* 00752dea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752ded: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 00752df0: jmp 0x752b4d */ goto L_00752b4d;
}

void f_00752b75(void)
{
    FN_ENTER(0x00752b75);
    /* 00752b75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752b78: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00752b7b: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00752b82: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752b84: je 0x752b9e */ if (fZ) goto L_00752b9e;
L_00752b86:; BB(0x00752b86);
    /* 00752b86: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752b89: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752b8c: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00752b90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752b93: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752b9a: mov esp, ebp */ r_esp = r_ebp;
    /* 00752b9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752b9d: ret  */ FN_RET(0x00752b75); r_esp += 4; return;
L_00752b9e:; BB(0x00752b9e);
    /* 00752b9e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752ba0: je 0x752dc2 */ if (fZ) goto L_00752dc2;
L_00752ba6:; BB(0x00752ba6);
    /* 00752ba6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752ba9: mov byte ptr [eax + 0x1c], 7 */ W8((u32)(r_eax+0x1cu), 0x7u);
    /* 00752bad: jmp 0x752dc2 */ goto L_00752dc2;
L_00752dc2:; BB(0x00752dc2);
    /* 00752dc2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752dc5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752dc8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00752dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752dd8: ret  */ FN_RET(0x00752b75); r_esp += 4; return;
}

void f_00752bb2(void)
{
    FN_ENTER(0x00752bb2);
    /* 00752bb2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752bb5: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00752bb8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752bba: je 0x752bd3 */ if (fZ) goto L_00752bd3;
L_00752bbc:; BB(0x00752bbc);
    /* 00752bbc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00752bc0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00752bc5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00752bc9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752bcc: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
L_00752bd3:; BB(0x00752bd3);
    /* 00752bd3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752bd6: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00752bd9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752bdb: je 0x752bec */ if (fZ) goto L_00752bec;
L_00752bdd:; BB(0x00752bdd);
    /* 00752bdd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x752be2u); f_007127b0();
    /* 00752be2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752be5: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_00752bec:; BB(0x00752bec);
    /* 00752bec: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00752bef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752bf1: je 0x752c02 */ if (fZ) goto L_00752c02;
L_00752bf3:; BB(0x00752bf3);
    /* 00752bf3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x752bf8u); f_007127b0();
    /* 00752bf8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752bfb: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_00752c02:; BB(0x00752c02);
    /* 00752c02: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00752c05: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752c07: je 0x752c47 */ if (fZ) goto L_00752c47;
L_00752c09:; BB(0x00752c09);
    /* 00752c09: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x752c0eu); f_00712714();
    /* 00752c0e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752c11: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00752c14: movzx eax, byte ptr [edx + 0x60] */ r_eax = (u32)R8((u32)(r_edx+0x60u));
    /* 00752c18: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00752c1a: je 0x752c2e */ if (fZ) goto L_00752c2e;
L_00752c1c:; BB(0x00752c1c);
    /* 00752c1c: and eax, 0xfb */ {  u32 a = r_eax; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00752c21: mov byte ptr [edx + 0x60], al */ W8((u32)(r_edx+0x60u), (u8)r_eax);
    /* 00752c24: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752c27: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00752c2a: movzx eax, byte ptr [edx + 0x60] */ r_eax = (u32)R8((u32)(r_edx+0x60u));
L_00752c2e:; BB(0x00752c2e);
    /* 00752c2e: and eax, 0xf7 */ {  u32 a = r_eax; u32 b = 0xf7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00752c33: mov byte ptr [edx + 0x60], al */ W8((u32)(r_edx+0x60u), (u8)r_eax);
    /* 00752c36: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752c39: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00752c3c: push dword ptr [eax + 0x40] */ { u32 v = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00752c3f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x752c44u); f_0061cdb0();
    /* 00752c44: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00752c47:; BB(0x00752c47);
    /* 00752c47: push 0x433c0000 */ { u32 v = 0x433c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00752c4c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752c4f: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00752c52: call 0x737ab8 */ r_esp -= 4; W32(r_esp, 0x752c57u); f_00737ab8();
    /* 00752c57: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752c5a: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00752c5d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752c5f: je 0x752df5 */ if (fZ) goto L_00752df5;
L_00752c65:; BB(0x00752c65);
    /* 00752c65: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00752c6c: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00752c71: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00752c74: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00752c7b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752c7d: je 0x752c86 */ if (fZ) goto L_00752c86;
L_00752c7f:; BB(0x00752c7f);
    /* 00752c7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00752c81: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x752c86u); f_00760acc();
L_00752c86:; BB(0x00752c86);
    /* 00752c86: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752c89: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00752c8d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752c90: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00752c93: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00752c9a: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752c9c: je 0x752cb6 */ if (fZ) goto L_00752cb6;
L_00752c9e:; BB(0x00752c9e);
    /* 00752c9e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752ca1: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752ca4: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00752ca8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752cab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752cb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00752cb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752cb5: ret  */ FN_RET(0x00752bb2); r_esp += 4; return;
L_00752cb6:; BB(0x00752cb6);
    /* 00752cb6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752cb8: je 0x752dc2 */ if (fZ) goto L_00752dc2;
L_00752cbe:; BB(0x00752cbe);
    /* 00752cbe: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x752cc3u); f_007365f4();
    /* 00752cc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752cc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752cc7: call 0x752fe0 */ r_esp -= 4; W32(r_esp, 0x752cccu); f_00752fe0();
    /* 00752ccc: jmp 0x752dc2 */ goto L_00752dc2;
L_00752dc2:; BB(0x00752dc2);
    /* 00752dc2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752dc5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752dc8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00752dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752dd8: ret  */ FN_RET(0x00752bb2); r_esp += 4; return;
L_00752df5:; BB(0x00752df5);
    /* 00752df5: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00752df8: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x752dfdu); f_00737d90();
    /* 00752dfd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752e00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752e01: call 0x752edc */ r_esp -= 4; W32(r_esp, 0x752e06u); f_00752edc();
    /* 00752e06: mov edx, eax */ r_edx = r_eax;
    /* 00752e08: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752e0b: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 00752e0e: jmp 0x752c65 */ goto L_00752c65;
}

void f_00752c8d(void)
{
    FN_ENTER(0x00752c8d);
    /* 00752c8d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752c90: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00752c93: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00752c9a: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752c9c: je 0x752cb6 */ if (fZ) goto L_00752cb6;
L_00752c9e:; BB(0x00752c9e);
    /* 00752c9e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752ca1: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752ca4: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00752ca8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752cab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752cb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00752cb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752cb5: ret  */ FN_RET(0x00752c8d); r_esp += 4; return;
L_00752cb6:; BB(0x00752cb6);
    /* 00752cb6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752cb8: je 0x752dc2 */ if (fZ) goto L_00752dc2;
L_00752cbe:; BB(0x00752cbe);
    /* 00752cbe: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x752cc3u); f_007365f4();
    /* 00752cc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752cc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752cc7: call 0x752fe0 */ r_esp -= 4; W32(r_esp, 0x752cccu); f_00752fe0();
    /* 00752ccc: jmp 0x752dc2 */ goto L_00752dc2;
L_00752dc2:; BB(0x00752dc2);
    /* 00752dc2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752dc5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752dc8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00752dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752dd8: ret  */ FN_RET(0x00752c8d); r_esp += 4; return;
}

void f_00752cd1(void)
{
    FN_ENTER(0x00752cd1);
    /* 00752cd1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752cd4: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00752cd7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752cd9: je 0x752cea */ if (fZ) goto L_00752cea;
L_00752cdb:; BB(0x00752cdb);
    /* 00752cdb: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x752ce0u); f_007127b0();
    /* 00752ce0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752ce3: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_00752cea:; BB(0x00752cea);
    /* 00752cea: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00752ced: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752cef: je 0x752e39 */ if (fZ) goto L_00752e39;
L_00752cf5:; BB(0x00752cf5);
    /* 00752cf5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752cf8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00752cfb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752cfd: je 0x752e13 */ if (fZ) goto L_00752e13;
L_00752d03:; BB(0x00752d03);
    /* 00752d03: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752d06: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00752d09: movzx eax, byte ptr [edx + 0x60] */ r_eax = (u32)R8((u32)(r_edx+0x60u));
    /* 00752d0d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00752d0f: je 0x752d19 */ if (fZ) goto L_00752d19;
L_00752d11:; BB(0x00752d11);
    /* 00752d11: and eax, 0xfb */ {  u32 a = r_eax; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00752d16: mov byte ptr [edx + 0x60], al */ W8((u32)(r_edx+0x60u), (u8)r_eax);
L_00752d19:; BB(0x00752d19);
    /* 00752d19: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752d1c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00752d1e: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00752d21: call 0x74b340 */ r_esp -= 4; W32(r_esp, 0x752d26u); f_0074b340();
    /* 00752d26: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752d29: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00752d2c: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00752d33: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00752d39: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 00752d40: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00752d43: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752d45: je 0x752d4e */ if (fZ) goto L_00752d4e;
L_00752d47:; BB(0x00752d47);
    /* 00752d47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00752d49: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x752d4eu); f_00760acc();
L_00752d4e:; BB(0x00752d4e);
    /* 00752d4e: push 0x433c0000 */ { u32 v = 0x433c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00752d53: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752d56: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00752d59: call 0x737ab8 */ r_esp -= 4; W32(r_esp, 0x752d5eu); f_00737ab8();
    /* 00752d5e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752d61: mov byte ptr [eax + 0x1c], 2 */ W8((u32)(r_eax+0x1cu), 0x2u);
    /* 00752d65: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752d68: call 0x752ebc */ r_esp -= 4; W32(r_esp, 0x752d6du); f_00752ebc();
    /* 00752d6d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752d70: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00752d73: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 00752d76: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 00752d79: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 00752d7c: push dword ptr [edx + 0x68] */ { u32 v = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00752d7f: call 0x73175c */ r_esp -= 4; W32(r_esp, 0x752d84u); f_0073175c();
    /* 00752d84: mov eax, ebx */ r_eax = r_ebx;
    /* 00752d86: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00752d89: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00752d90: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00752d92: je 0x752db8 */ if (fZ) goto L_00752db8;
L_00752d94:; BB(0x00752d94);
    /* 00752d94: mov eax, ebx */ r_eax = r_ebx;
    /* 00752d96: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00752d99: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00752d9b: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x752d9eu); call_ind(t); }
    /* 00752d9e: mov eax, ebx */ r_eax = r_ebx;
    /* 00752da0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752da3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752da6: mov byte ptr [eax + 0x1c], 0x11 */ W8((u32)(r_eax+0x1cu), 0x11u);
    /* 00752daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752db4: mov esp, ebp */ r_esp = r_ebp;
    /* 00752db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752db7: ret  */ FN_RET(0x00752cd1); r_esp += 4; return;
L_00752db8:; BB(0x00752db8);
    /* 00752db8: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752dba: je 0x752dc2 */ if (fZ) goto L_00752dc2;
L_00752dbc:; BB(0x00752dbc);
    /* 00752dbc: mov eax, ebx */ r_eax = r_ebx;
    /* 00752dbe: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
L_00752dc2:; BB(0x00752dc2);
    /* 00752dc2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752dc5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752dc8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00752dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752dd8: ret  */ FN_RET(0x00752cd1); r_esp += 4; return;
L_00752e13:; BB(0x00752e13);
    /* 00752e13: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00752e15: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x752e1au); f_0073ec50();
    /* 00752e1a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752e1d: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00752e20: push 0x973e24 */ { u32 v = 0x973e24u; r_esp -= 4; W32(r_esp, v); }
    /* 00752e25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752e26: call 0x731604 */ r_esp -= 4; W32(r_esp, 0x752e2bu); f_00731604();
    /* 00752e2b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00752e2e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752e31: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00752e34: jmp 0x752d03 */ goto L_00752d03;
L_00752e39:; BB(0x00752e39);
    /* 00752e39: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00752e40: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00752e45: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x752e4au); f_005caba4();
    /* 00752e4a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00752e4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00752e50: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00752e53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752e55: je 0x752eb3 */ if (fZ) goto L_00752eb3;
L_00752e57:; BB(0x00752e57);
    /* 00752e57: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 00752e5e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00752e65: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00752e67: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x752e6cu); f_0073ec50();
    /* 00752e6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00752e6d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752e70: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00752e73: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00752e76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752e77: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x752e7cu); f_00725d18();
    /* 00752e7c: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00752e83:; BB(0x00752e83);
    /* 00752e83: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00752e86: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752e89: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00752e8c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00752e93: mov eax, edx */ r_eax = r_edx;
    /* 00752e95: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00752e97: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00752e9a: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x752e9fu); f_007336fc();
    /* 00752e9f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752ea2: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00752ea5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00752ea6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00752ea9: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x752eaeu); f_00712624();
    /* 00752eae: jmp 0x752cf5 */ goto L_00752cf5;
L_00752eb3:; BB(0x00752eb3);
    /* 00752eb3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00752eb5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00752eb8: jmp 0x752e83 */ goto L_00752e83;
}

void f_00752d1c(void)
{
    FN_ENTER(0x00752d1c);
    /* 00752d1c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00752d1e: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00752d21: call 0x74b340 */ r_esp -= 4; W32(r_esp, 0x752d26u); f_0074b340();
    /* 00752d26: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752d29: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00752d2c: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00752d33: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00752d39: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 00752d40: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00752d43: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752d45: je 0x752d4e */ if (fZ) goto L_00752d4e;
L_00752d47:; BB(0x00752d47);
    /* 00752d47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00752d49: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x752d4eu); f_00760acc();
L_00752d4e:; BB(0x00752d4e);
    /* 00752d4e: push 0x433c0000 */ { u32 v = 0x433c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00752d53: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752d56: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00752d59: call 0x737ab8 */ r_esp -= 4; W32(r_esp, 0x752d5eu); f_00737ab8();
    /* 00752d5e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00752d61: mov byte ptr [eax + 0x1c], 2 */ W8((u32)(r_eax+0x1cu), 0x2u);
    /* 00752d65: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752d68: call 0x752ebc */ r_esp -= 4; W32(r_esp, 0x752d6du); f_00752ebc();
    /* 00752d6d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752d70: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00752d73: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 00752d76: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 00752d79: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 00752d7c: push dword ptr [edx + 0x68] */ { u32 v = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00752d7f: call 0x73175c */ r_esp -= 4; W32(r_esp, 0x752d84u); f_0073175c();
    /* 00752d84: mov eax, ebx */ r_eax = r_ebx;
    /* 00752d86: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00752d89: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00752d90: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00752d92: je 0x752db8 */ if (fZ) goto L_00752db8;
L_00752d94:; BB(0x00752d94);
    /* 00752d94: mov eax, ebx */ r_eax = r_ebx;
    /* 00752d96: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00752d99: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00752d9b: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x752d9eu); call_ind(t); }
    /* 00752d9e: mov eax, ebx */ r_eax = r_ebx;
    /* 00752da0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752da3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752da6: mov byte ptr [eax + 0x1c], 0x11 */ W8((u32)(r_eax+0x1cu), 0x11u);
    /* 00752daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752db4: mov esp, ebp */ r_esp = r_ebp;
    /* 00752db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752db7: ret  */ FN_RET(0x00752d1c); r_esp += 4; return;
L_00752db8:; BB(0x00752db8);
    /* 00752db8: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752dba: je 0x752dc2 */ if (fZ) goto L_00752dc2;
L_00752dbc:; BB(0x00752dbc);
    /* 00752dbc: mov eax, ebx */ r_eax = r_ebx;
    /* 00752dbe: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
L_00752dc2:; BB(0x00752dc2);
    /* 00752dc2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752dc5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752dc8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00752dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752dd8: ret  */ FN_RET(0x00752d1c); r_esp += 4; return;
}

void f_00752d65(void)
{
    FN_ENTER(0x00752d65);
    /* 00752d65: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752d68: call 0x752ebc */ r_esp -= 4; W32(r_esp, 0x752d6du); f_00752ebc();
    /* 00752d6d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00752d70: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00752d73: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 00752d76: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 00752d79: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 00752d7c: push dword ptr [edx + 0x68] */ { u32 v = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00752d7f: call 0x73175c */ r_esp -= 4; W32(r_esp, 0x752d84u); f_0073175c();
    /* 00752d84: mov eax, ebx */ r_eax = r_ebx;
    /* 00752d86: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00752d89: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00752d90: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00752d92: je 0x752db8 */ if (fZ) goto L_00752db8;
L_00752d94:; BB(0x00752d94);
    /* 00752d94: mov eax, ebx */ r_eax = r_ebx;
    /* 00752d96: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00752d99: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00752d9b: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x752d9eu); call_ind(t); }
    /* 00752d9e: mov eax, ebx */ r_eax = r_ebx;
    /* 00752da0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752da3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752da6: mov byte ptr [eax + 0x1c], 0x11 */ W8((u32)(r_eax+0x1cu), 0x11u);
    /* 00752daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752db4: mov esp, ebp */ r_esp = r_ebp;
    /* 00752db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752db7: ret  */ FN_RET(0x00752d65); r_esp += 4; return;
L_00752db8:; BB(0x00752db8);
    /* 00752db8: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752dba: je 0x752dc2 */ if (fZ) goto L_00752dc2;
L_00752dbc:; BB(0x00752dbc);
    /* 00752dbc: mov eax, ebx */ r_eax = r_ebx;
    /* 00752dbe: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
L_00752dc2:; BB(0x00752dc2);
    /* 00752dc2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00752dc5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00752dc8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00752dcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00752dce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00752dd5: mov esp, ebp */ r_esp = r_ebp;
    /* 00752dd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752dd8: ret  */ FN_RET(0x00752d65); r_esp += 4; return;
}

void f_00752ebc(void) /* sub_752EBC */
{
    FN_ENTER(0x00752ebc);
    /* 00752ebc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00752ebd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00752ebf: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00752ec2: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x752ec7u); f_00737d90();
    /* 00752ec7: cmp eax, dword ptr [ebx + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00752eca: jne 0x752ece */ if (!fZ) goto L_00752ece;
L_00752ecc:; BB(0x00752ecc);
    /* 00752ecc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00752ecd: ret  */ FN_RET(0x00752ebc); r_esp += 4; return;
L_00752ece:; BB(0x00752ece);
    /* 00752ece: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 00752ed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752ed2: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 00752ed5: call 0x72606c */ r_esp -= 4; W32(r_esp, 0x752edau); f_0072606c();
    /* 00752eda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00752edb: ret  */ FN_RET(0x00752ebc); r_esp += 4; return;
}

void f_00752edc(void) /* sub_752EDC */
{
    FN_ENTER(0x00752edc);
    /* 00752edc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00752edd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00752ede: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00752edf: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00752ee2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00752ee4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00752ee7: call 0x5dc1e0 */ r_esp -= 4; W32(r_esp, 0x752eecu); f_005dc1e0();
    /* 00752eec: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00752ef0: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x752ef5u); f_005c5528();
    /* 00752ef5: mov ebx, eax */ r_ebx = r_eax;
    /* 00752ef7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00752ef9: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x752efeu); f_0073ec50();
    /* 00752efe: mov edi, eax */ r_edi = r_eax;
    /* 00752f00: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00752f02: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x752f07u); f_0079317c();
    /* 00752f07: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00752f0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752f0b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00752f0d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00752f0e: call 0x73566c */ r_esp -= 4; W32(r_esp, 0x752f13u); f_0073566c();
    /* 00752f13: mov edi, eax */ r_edi = r_eax;
    /* 00752f15: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00752f18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00752f1a: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 00752f1d: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x752f22u); f_007336fc();
    /* 00752f22: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00752f23: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00752f26: mov ecx, edi */ r_ecx = r_edi;
    /* 00752f28: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x752f2du); f_00712624();
    /* 00752f2d: fld dword ptr [ebx + 0x1b8] */ FPUSH(R_F32((u32)(r_ebx+0x1b8u)));
    /* 00752f33: fcomp dword ptr [0x973e64] */ fx_compare(ST(0), R_F32((u32)(0x973e64u))); FPOP();
    /* 00752f39: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00752f3b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00752f3c: jae 0x752f54 */ if (!fC) goto L_00752f54;
L_00752f3e:; BB(0x00752f3e);
    /* 00752f3e: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00752f40: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x752f45u); f_0079317c();
    /* 00752f45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00752f46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00752f48: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00752f4a: mov ecx, edi */ r_ecx = r_edi;
    /* 00752f4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752f4d: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x752f52u); f_00735c90();
    /* 00752f52: jmp 0x752f68 */ goto L_00752f68;
L_00752f54:; BB(0x00752f54);
    /* 00752f54: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00752f56: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x752f5bu); f_0079317c();
    /* 00752f5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00752f5c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00752f5e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00752f60: mov ecx, edi */ r_ecx = r_edi;
    /* 00752f62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752f63: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x752f68u); f_00735ee0();
L_00752f68:; BB(0x00752f68);
    /* 00752f68: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00752f6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00752f6c: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 00752f6f: call 0x5d4108 */ r_esp -= 4; W32(r_esp, 0x752f74u); f_005d4108();
    /* 00752f74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00752f76: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00752f7a: call 0x5dbc08 */ r_esp -= 4; W32(r_esp, 0x752f7fu); f_005dbc08();
    /* 00752f7f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00752f82: je 0x752fca */ if (fZ) goto L_00752fca;
L_00752f84:; BB(0x00752f84);
    /* 00752f84: push 0x77 */ { u32 v = 0x77u; r_esp -= 4; W32(r_esp, v); }
    /* 00752f86: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x752f8bu); f_0079317c();
    /* 00752f8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00752f8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00752f8e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00752f90: mov ecx, edi */ r_ecx = r_edi;
    /* 00752f92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752f93: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x752f98u); f_00735c90();
L_00752f98:; BB(0x00752f98);
    /* 00752f98: push 0x432c0000 */ { u32 v = 0x432c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00752f9d: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 00752fa4: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00752faa: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 00752fb1: mov ecx, edi */ r_ecx = r_edi;
    /* 00752fb3: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x752fb8u); f_00736138();
    /* 00752fb8: mov ecx, edi */ r_ecx = r_edi;
    /* 00752fba: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x752fbfu); f_00736458();
    /* 00752fbf: mov eax, edi */ r_eax = r_edi;
    /* 00752fc1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00752fc4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00752fc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00752fc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00752fc7: ret 4 */ FN_RET(0x00752edc); r_esp += 8; return;
L_00752fca:; BB(0x00752fca);
    /* 00752fca: push 0x77 */ { u32 v = 0x77u; r_esp -= 4; W32(r_esp, v); }
    /* 00752fcc: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x752fd1u); f_0079317c();
    /* 00752fd1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00752fd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00752fd4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00752fd6: mov ecx, edi */ r_ecx = r_edi;
    /* 00752fd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00752fd9: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x752fdeu); f_00735ee0();
    /* 00752fde: jmp 0x752f98 */ goto L_00752f98;
}

void f_00752fe0(void) /* sub_752FE0 */
{
    FN_ENTER(0x00752fe0);
    /* 00752fe0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00752fe4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00752fe7: jne 0x752ff0 */ if (!fZ) goto L_00752ff0;
L_00752fe9:; BB(0x00752fe9);
    /* 00752fe9: mov byte ptr [ecx + 0x1c], 5 */ W8((u32)(r_ecx+0x1cu), 0x5u);
    /* 00752fed: ret 4 */ FN_RET(0x00752fe0); r_esp += 8; return;
L_00752ff0:; BB(0x00752ff0);
    /* 00752ff0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00752ff2: jne 0x752ff8 */ if (!fZ) goto L_00752ff8;
L_00752ff4:; BB(0x00752ff4);
    /* 00752ff4: mov byte ptr [ecx + 0x1c], 0xe */ W8((u32)(r_ecx+0x1cu), 0xeu);
L_00752ff8:; BB(0x00752ff8);
    /* 00752ff8: ret 4 */ FN_RET(0x00752fe0); r_esp += 8; return;
}

void f_00752ffc(void) /* sub_752FFC */
{
    FN_ENTER(0x00752ffc);
    /* 00752ffc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00752ffd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00752ffe: mov edi, ecx */ r_edi = r_ecx;
    /* 00753000: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00753002: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x753007u); f_0073ec50();
    /* 00753007: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075300a: push 0x973e2c */ { u32 v = 0x973e2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075300f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753010: call 0x74aff8 */ r_esp -= 4; W32(r_esp, 0x753015u); f_0074aff8();
    /* 00753015: mov ebx, eax */ r_ebx = r_eax;
    /* 00753017: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00753019: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75301eu); f_0079317c();
    /* 0075301e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753021: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753022: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753024: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x753029u); f_00737ae4();
    /* 00753029: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075302b: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0075302e: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x753033u); f_007336fc();
    /* 00753033: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00753034: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00753037: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753039: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x75303eu); f_00712624();
    /* 0075303e: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 00753045: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075304b: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00753052: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753054: call 0x74b6f4 */ r_esp -= 4; W32(r_esp, 0x753059u); f_0074b6f4();
    /* 00753059: mov eax, ebx */ r_eax = r_ebx;
    /* 0075305b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075305c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075305d: ret  */ FN_RET(0x00752ffc); r_esp += 4; return;
}

