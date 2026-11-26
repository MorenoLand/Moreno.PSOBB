#include "protos.h"

void f_00677034(void) /* sub_677034 */
{
    FN_ENTER(0x00677034);
    /* 00677034: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677035: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00677037: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 0067703d: fadd dword ptr [ebp + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xc8u));
    /* 00677043: fcomp dword ptr [ebp + 0xc4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xc4u))); FPOP();
    /* 00677049: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067704b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067704c: jb 0x67709d */ if (fC) goto L_0067709d;
L_0067704e:; BB(0x0067704e);
    /* 0067704e: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 00677054: mov ecx, dword ptr [edx*4 + 0xa8ff38] */ r_ecx = R32((u32)(r_edx*4+0xa8ff38u));
    /* 0067705b: mov eax, 1 */ r_eax = 0x1u;
    /* 00677060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677061: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00677068: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x67706du); f_005b8638();
    /* 0067706d: mov dword ptr [ebp + 0xc0], 0 */ W32((u32)(r_ebp+0xc0u), 0x0u);
    /* 00677077: mov dword ptr [ebp + 0xf8], eax */ W32((u32)(r_ebp+0xf8u), r_eax);
    /* 0067707d: mov dword ptr [ebp + 0xc8], 0x3f800000 */ W32((u32)(r_ebp+0xc8u), 0x3f800000u);
    /* 00677087: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0067708a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0067708d: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00677090: fadd dword ptr [edx*4 + 0x93ac48] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x93ac48u));
    /* 00677097: fstp dword ptr [ebp + 0xc4] */ W_F32((u32)(r_ebp+0xc4u), ST(0)); FPOP();
L_0067709d:; BB(0x0067709d);
    /* 0067709d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067709e: ret  */ FN_RET(0x00677034); r_esp += 4; return;
}

void f_006770a0(void) /* sub_6770A0 */
{
    FN_ENTER(0x006770a0);
    /* 006770a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006770a1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006770a3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6770a8u); f_0082d7b0();
    /* 006770a8: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 006770ab: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6770b0u); f_0082d838();
    /* 006770b0: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 006770b3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006770b5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6770bau); f_0082d8bc();
    /* 006770ba: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 006770bd: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6770c2u); f_00829cc8();
    /* 006770c2: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006770c8: push dword ptr [ebp + 0xf8] */ { u32 v = R32((u32)(r_ebp+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006770ce: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 006770d1: call 0x830a28 */ r_esp -= 4; W32(r_esp, 0x6770d6u); f_00830a28();
    /* 006770d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006770d9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6770deu); f_0082da80();
    /* 006770de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006770df: ret  */ FN_RET(0x006770a0); r_esp += 4; return;
}

void f_006770e0(void) /* sub_6770E0 */
{
    FN_ENTER(0x006770e0);
    /* 006770e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006770e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006770e3: mov ebx, eax */ r_ebx = r_eax;
L_006770e5:; BB(0x006770e5);
    /* 006770e5: mov ecx, dword ptr [ebx + 0xa8ff38] */ r_ecx = R32((u32)(r_ebx+0xa8ff38u));
    /* 006770eb: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006770ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006770f0: je 0x677105 */ if (fZ) goto L_00677105;
L_006770f2:; BB(0x006770f2);
    /* 006770f2: je 0x6770fb */ if (fZ) goto L_006770fb;
L_006770f4:; BB(0x006770f4);
    /* 006770f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006770f6: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6770fbu); f_004066a8();
L_006770fb:; BB(0x006770fb);
    /* 006770fb: mov dword ptr [ebx + 0xa8ff34], 0 */ W32((u32)(r_ebx+0xa8ff34u), 0x0u);
L_00677105:; BB(0x00677105);
    /* 00677105: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00677108: jb 0x6770e5 */ if (fC) goto L_006770e5;
L_0067710a:; BB(0x0067710a);
    /* 0067710a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067710b: ret  */ FN_RET(0x006770e0); r_esp += 4; return;
}

void f_0067710c(void) /* sub_67710C */
{
    FN_ENTER(0x0067710c);
    /* 0067710c: mov dword ptr [0xa8ff2c], 0x3f800000 */ W32((u32)(0xa8ff2cu), 0x3f800000u);
    /* 00677116: mov dword ptr [0xa8ff30], 0x41000000 */ W32((u32)(0xa8ff30u), 0x41000000u);
    /* 00677120: mov dword ptr [0xa8ff34], 0x3fc00000 */ W32((u32)(0xa8ff34u), 0x3fc00000u);
    /* 0067712a: ret  */ FN_RET(0x0067710c); r_esp += 4; return;
}

void f_0067712c(void) /* sub_67712C */
{
    FN_ENTER(0x0067712c);
    /* 0067712c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067712d: mov ebp, esp */ r_ebp = r_esp;
    /* 0067712f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677131: push 0x8e99f8 */ { u32 v = 0x8e99f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00677136: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067713c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067713d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00677144: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677147: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067714a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0067714d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00677150: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00677153: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00677155: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00677158:; BB(0x00677158);
    /* 00677158: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0067715f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00677164: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x677169u); f_008581c5();
    /* 00677169: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067716a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0067716d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067716f: je 0x6771d5 */ if (fZ) goto L_006771d5;
L_00677171:; BB(0x00677171);
    /* 00677171: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00677178: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067717f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00677182: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00677185: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00677187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677188: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677189: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067718a: push dword ptr [edx*4 + 0x9c9ca4] */ { u32 v = R32((u32)(r_edx*4+0x9c9ca4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677191: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677193: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x677198u); f_005b7a84();
    /* 00677198: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067719b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006771a2:; BB(0x006771a2);
    /* 006771a2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006771a5: mov dword ptr [eax*4 + 0xa8ff38], edx */ W32((u32)(r_eax*4+0xa8ff38u), r_edx);
    /* 006771ac: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006771b3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006771b6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006771b9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006771bc: jb 0x677158 */ if (fC) goto L_00677158;
L_006771be:; BB(0x006771be);
    /* 006771be: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006771c1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006771c4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006771c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006771ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006771d1: mov esp, ebp */ r_esp = r_ebp;
    /* 006771d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006771d4: ret  */ FN_RET(0x0067712c); r_esp += 4; return;
L_006771d5:; BB(0x006771d5);
    /* 006771d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006771d7: jmp 0x6771a2 */ goto L_006771a2;
}

void f_006771dc(void) /* sub_6771DC */
{
    FN_ENTER(0x006771dc);
    /* 006771dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006771dd: mov ebp, esp */ r_ebp = r_esp;
    /* 006771df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006771e1: push 0x8e9a20 */ { u32 v = 0x8e9a20u; r_esp -= 4; W32(r_esp, v); }
    /* 006771e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006771ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006771ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006771f4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006771f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006771fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006771fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00677200: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00677203: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00677208: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067720f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x677214u); f_008581c5();
    /* 00677214: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677215: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00677218: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067721a: je 0x67725b */ if (fZ) goto L_0067725b;
L_0067721c:; BB(0x0067721c);
    /* 0067721c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00677223: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067722a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067722d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067722f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677230: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677231: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677232: push 0x9c9c3c */ { u32 v = 0x9c9c3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00677237: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677239: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x67723eu); f_005b7a84();
    /* 0067723e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677241: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00677248:; BB(0x00677248);
    /* 00677248: mov dword ptr [0xa8ff40], eax */ W32((u32)(0xa8ff40u), r_eax);
    /* 0067724d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00677250: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00677257: mov esp, ebp */ r_esp = r_ebp;
    /* 00677259: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067725a: ret  */ FN_RET(0x006771dc); r_esp += 4; return;
L_0067725b:; BB(0x0067725b);
    /* 0067725b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067725d: jmp 0x677248 */ goto L_00677248;
}

void f_00677260(void) /* sub_677260 */
{
    FN_ENTER(0x00677260);
    /* 00677260: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00677261: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00677263: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00677265: call 0x677284 */ r_esp -= 4; W32(r_esp, 0x67726au); f_00677284();
    /* 0067726a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0067726e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00677270: jne 0x677276 */ if (!fZ) goto L_00677276;
L_00677272:; BB(0x00677272);
    /* 00677272: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00677273: ret 4 */ FN_RET(0x00677260); r_esp += 8; return;
L_00677276:; BB(0x00677276);
    /* 00677276: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00677277: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x67727cu); f_005c2f74();
    /* 0067727c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067727d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067727e: ret 4 */ FN_RET(0x00677260); r_esp += 8; return;
}

void f_00677284(void) /* sub_677284 */
{
    FN_ENTER(0x00677284);
    /* 00677284: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677285: mov ebp, esp */ r_ebp = r_esp;
    /* 00677287: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677289: push 0x8e9a4a */ { u32 v = 0x8e9a4au; r_esp -= 4; W32(r_esp, v); }
    /* 0067728e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00677294: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677295: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067729c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067729f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006772a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006772a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006772a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006772ab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006772ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006772b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006772b8: mov dword ptr [eax], 0xb37100 */ W32((u32)(r_eax), 0xb37100u);
    /* 006772be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006772bf: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6772c4u); f_007b4e84();
    /* 006772c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006772c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006772c8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6772cdu); f_007b9c8c();
    /* 006772cd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006772d0: mov dword ptr [eax], 0xb25c20 */ W32((u32)(r_eax), 0xb25c20u);
    /* 006772d6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006772d9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006772e0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006772e3: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006772e9: call 0x6111bc */ r_esp -= 4; W32(r_esp, 0x6772eeu); f_006111bc();
    /* 006772ee: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006772f5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006772f8: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x6772fdu); f_00770660();
    /* 006772fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00677300: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00677307: mov esp, ebp */ r_esp = r_ebp;
    /* 00677309: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067730a: ret  */ FN_RET(0x00677284); r_esp += 4; return;
}

void f_0067730c(void) /* sub_67730C */
{
    FN_ENTER(0x0067730c);
    /* 0067730c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067730d: mov edi, ecx */ r_edi = r_ecx;
    /* 0067730f: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00677312: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00677314: je 0x67734f */ if (fZ) goto L_0067734f;
L_00677316:; BB(0x00677316);
    /* 00677316: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0067731d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00677320: je 0x67734f */ if (fZ) goto L_0067734f;
L_00677322:; BB(0x00677322);
    /* 00677322: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x677327u); f_0082d7b0();
    /* 00677327: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0067732a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x67732fu); f_0082d838();
    /* 0067732f: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00677332: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00677334: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x677339u); f_0082d8bc();
    /* 00677339: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0067733c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x677341u); f_00829cc8();
    /* 00677341: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677344: call 0x82e760 */ r_esp -= 4; W32(r_esp, 0x677349u); f_0082e760();
    /* 00677349: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067734a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x67734fu); f_0082da80();
L_0067734f:; BB(0x0067734f);
    /* 0067734f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00677350: ret  */ FN_RET(0x0067730c); r_esp += 4; return;
}

void f_00677354(void) /* sub_677354 */
{
    FN_ENTER(0x00677354);
    /* 00677354: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00677355: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677358: mov esi, ecx */ r_esi = r_ecx;
    /* 0067735a: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0067735e: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00677361: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677364: je 0x67736d */ if (fZ) goto L_0067736d;
L_00677366:; BB(0x00677366);
    /* 00677366: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00677369: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067736a: ret 8 */ FN_RET(0x00677354); r_esp += 12; return;
L_0067736d:; BB(0x0067736d);
    /* 0067736d: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00677371: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677373: je 0x6773f1 */ if (fZ) goto L_006773f1;
L_00677375:; BB(0x00677375);
    /* 00677375: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00677377: mov ecx, esi */ r_ecx = r_esi;
    /* 00677379: call dword ptr [eax + 0x144] */ { u32 t = R32((u32)(r_eax+0x144u)); r_esp -= 4; W32(r_esp, 0x67737fu); call_ind(t); }
    /* 0067737f: mov eax, dword ptr [esi + 0x370] */ r_eax = R32((u32)(r_esi+0x370u));
    /* 00677385: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677387: je 0x6773f1 */ if (fZ) goto L_006773f1;
L_00677389:; BB(0x00677389);
    /* 00677389: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067738c: je 0x6773e2 */ if (fZ) goto L_006773e2;
L_0067738e:; BB(0x0067738e);
    /* 0067738e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677391: jne 0x6773a4 */ if (!fZ) goto L_006773a4;
L_00677393:; BB(0x00677393);
    /* 00677393: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677395: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00677398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677399: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067739a: call 0x5c9874 */ r_esp -= 4; W32(r_esp, 0x67739fu); f_005c9874();
    /* 0067739f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006773a2: jmp 0x6773f1 */ goto L_006773f1;
L_006773a4:; BB(0x006773a4);
    /* 006773a4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006773a7: jne 0x6773f1 */ if (!fZ) goto L_006773f1;
L_006773a9:; BB(0x006773a9);
    /* 006773a9: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 006773af: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 006773b3: mov byte ptr [esp], 0x67 */ W8((u32)(r_esp), 0x67u);
    /* 006773b7: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 006773bc: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006773c1: mov eax, dword ptr [esi + 0x84] */ r_eax = R32((u32)(r_esi+0x84u));
    /* 006773c7: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006773cb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006773cf: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006773d4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006773d8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006773db: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6773e0u); f_008003e0();
    /* 006773e0: jmp 0x6773f1 */ goto L_006773f1;
L_006773e2:; BB(0x006773e2);
    /* 006773e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006773e4: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 006773e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006773e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006773e9: call 0x5c9874 */ r_esp -= 4; W32(r_esp, 0x6773eeu); f_005c9874();
    /* 006773ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006773f1:; BB(0x006773f1);
    /* 006773f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006773f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006773f5: mov ecx, esi */ r_ecx = r_esi;
    /* 006773f7: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x6773fcu); f_007b52ec();
    /* 006773fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006773fd: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x677402u); f_008113bc();
    /* 00677402: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677403: movzx edx, word ptr [esi + 8] */ r_edx = (u32)R16((u32)(r_esi+0x8u));
    /* 00677407: mov eax, 1 */ r_eax = 0x1u;
    /* 0067740c: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 00677413: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00677419: mov word ptr [esi + 8], dx */ W16((u32)(r_esi+0x8u), (u16)r_edx);
    /* 0067741d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00677420: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00677421: ret 8 */ FN_RET(0x00677354); r_esp += 12; return;
}

void f_00677424(void) /* sub_677424 */
{
    FN_ENTER(0x00677424);
    /* 00677424: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677425: mov ebp, esp */ r_ebp = r_esp;
    /* 00677427: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677429: push 0x8e9a70 */ { u32 v = 0x8e9a70u; r_esp -= 4; W32(r_esp, v); }
    /* 0067742e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00677434: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677435: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067743c: sub esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677442: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00677445: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00677448: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0067744b: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0067744e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00677451: lea edi, [ebp - 0x110] */ r_edi = (u32)(r_ebp+0xfffffef0u);
    /* 00677457: mov esi, 0x93aee0 */ r_esi = 0x93aee0u;
    /* 0067745c: mov ecx, 0xe4 */ r_ecx = 0xe4u;
    /* 00677461: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00677462: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00677465: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00677467: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677468: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0067746b: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0067746d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00677470: mov ecx, dword ptr [0xa8ff4c] */ r_ecx = R32((u32)(0xa8ff4cu));
    /* 00677476: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677478: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0067747b: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 0067747e: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00677481: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 00677487: mov dword ptr [ebp - 0x100], esi */ W32((u32)(r_ebp+0xffffff00u), r_esi);
    /* 0067748d: mov dword ptr [ebp - 0xfc], ebx */ W32((u32)(r_ebp+0xffffff04u), r_ebx);
    /* 00677493: mov dword ptr [ebp - 0xd8], esi */ W32((u32)(r_ebp+0xffffff28u), r_esi);
    /* 00677499: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x67749eu); f_005b8610();
    /* 0067749e: mov ecx, dword ptr [0xa8ff4c] */ r_ecx = R32((u32)(0xa8ff4cu));
    /* 006774a4: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 006774aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006774ac: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6774b1u); f_005b8624();
    /* 006774b1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006774b4: mov ecx, dword ptr [0xa8ff4c] */ r_ecx = R32((u32)(0xa8ff4cu));
    /* 006774ba: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 006774bd: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 006774c0: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 006774c6: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 006774c9: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 006774cf: mov dword ptr [ebp - 0xb4], esi */ W32((u32)(r_ebp+0xffffff4cu), r_esi);
    /* 006774d5: mov dword ptr [ebp - 0xb0], ebx */ W32((u32)(r_ebp+0xffffff50u), r_ebx);
    /* 006774db: mov dword ptr [ebp - 0x8c], esi */ W32((u32)(r_ebp+0xffffff74u), r_esi);
    /* 006774e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006774e3: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6774e8u); f_005b8610();
    /* 006774e8: mov ecx, dword ptr [0xa8ff4c] */ r_ecx = R32((u32)(0xa8ff4cu));
    /* 006774ee: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 006774f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006774f6: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6774fbu); f_005b8624();
    /* 006774fb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006774fe: mov ecx, dword ptr [0xa8ff4c] */ r_ecx = R32((u32)(0xa8ff4cu));
    /* 00677504: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 00677507: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 0067750a: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0067750d: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00677510: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00677513: mov dword ptr [ebp - 0x68], esi */ W32((u32)(r_ebp+0xffffff98u), r_esi);
    /* 00677516: mov dword ptr [ebp - 0x64], ebx */ W32((u32)(r_ebp+0xffffff9cu), r_ebx);
    /* 00677519: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 0067751c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067751e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x677523u); f_005b8610();
    /* 00677523: mov ecx, dword ptr [0xa8ff4c] */ r_ecx = R32((u32)(0xa8ff4cu));
    /* 00677529: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0067752c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067752e: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x677533u); f_005b8624();
    /* 00677533: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00677536: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00677538: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0067753b:; BB(0x0067753b);
    /* 0067753b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00677542: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00677547: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67754cu); f_005caba4();
    /* 0067754c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067754d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00677550: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677552: je 0x677590 */ if (fZ) goto L_00677590;
L_00677554:; BB(0x00677554);
    /* 00677554: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0067755b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00677562: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00677565: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00677568: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 0067756e: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 00677571: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00677573: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00677575: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00677577: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00677579: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067757b: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067757d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067757e: push dword ptr [0xaca34c] */ { u32 v = R32((u32)(0xaca34cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00677584: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x677589u); f_006441f4();
    /* 00677589: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00677590:; BB(0x00677590);
    /* 00677590: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00677597: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067759a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067759d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006775a0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006775a3: jb 0x67753b */ if (fC) goto L_0067753b;
L_006775a5:; BB(0x006775a5);
    /* 006775a5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006775a8: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 006775aa: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006775ad: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006775b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006775b1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6775b6u); f_0050b510();
    /* 006775b6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006775b9: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 006775bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006775bc: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6775c1u); f_0050b510();
    /* 006775c1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006775c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006775c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006775c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006775c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006775c9: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 006775ce: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6775d3u); f_00814298();
    /* 006775d3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006775d6: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006775d9: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006775dc: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006775df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006775e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006775e9: mov esp, ebp */ r_esp = r_ebp;
    /* 006775eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006775ec: ret  */ FN_RET(0x00677424); r_esp += 4; return;
}

void f_00677541(void)
{
    FN_ENTER(0x00677541);
    goto L_00677541;
L_0067753b:; BB(0x0067753b);
    /* 0067753b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00677541:; BB(0x00677541);
    /* 00677541: add byte ptr [eax + 0x34], ch */ { u32 ad = (u32)(r_eax+0x34u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00677542: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00677544: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00677546: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 00677547: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67754cu); f_005caba4();
    /* 00677548: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00677549: cmc  */ fC = !fC;
    /* 0067754b: call ptr [ecx - 0x77] */ { u32 t = R32((u32)(r_ecx+0xffffff89u)); r_esp -= 4; W32(r_esp, 0x67754eu); call_ind(t); }
    /* 0067754c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067754d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0067754e: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0067754f: fadd dword ptr [ebp - 0x38c38b40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xc73c74c0u));
    /* 00677550: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677552: je 0x677590 */ if (fZ) goto L_00677590;
L_00677554:; BB(0x00677554);
    /* 00677554: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00677555: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00677556: aam 1 */ UNSUP(0x00677556, "aam 1");
    /* 00677558: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0067755a: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0067755b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067755c: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0067755d: cld  */ rt_df = 0;
    /* 0067755e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00677560: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00677562: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00677565: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00677568: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 0067756e: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 00677571: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00677573: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00677575: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00677577: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00677579: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067757b: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067757d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067757e: push dword ptr [0xaca34c] */ { u32 v = R32((u32)(0xaca34cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00677584: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x677589u); f_006441f4();
    /* 00677589: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00677590:; BB(0x00677590);
    /* 00677590: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00677597: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067759a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067759d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006775a0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006775a3: jb 0x67753b */ if (fC) goto L_0067753b;
L_006775a5:; BB(0x006775a5);
    /* 006775a5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006775a8: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 006775aa: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006775ad: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006775b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006775b1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6775b6u); f_0050b510();
    /* 006775b6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006775b9: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 006775bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006775bc: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6775c1u); f_0050b510();
    /* 006775c1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006775c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006775c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006775c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006775c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006775c9: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 006775ce: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6775d3u); f_00814298();
    /* 006775d3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006775d6: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006775d9: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006775dc: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006775df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006775e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006775e9: mov esp, ebp */ r_esp = r_ebp;
    /* 006775eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006775ec: ret  */ FN_RET(0x00677541); r_esp += 4; return;
}

void f_006775f0(void) /* sub_6775F0 */
{
    FN_ENTER(0x006775f0);
    /* 006775f0: mov ecx, dword ptr [0xa8ff4c] */ r_ecx = R32((u32)(0xa8ff4cu));
    /* 006775f6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006775f8: je 0x67760d */ if (fZ) goto L_0067760d;
L_006775fa:; BB(0x006775fa);
    /* 006775fa: je 0x677603 */ if (fZ) goto L_00677603;
L_006775fc:; BB(0x006775fc);
    /* 006775fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006775fe: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x677603u); f_004066a8();
L_00677603:; BB(0x00677603);
    /* 00677603: mov dword ptr [0xa8ff4c], 0 */ W32((u32)(0xa8ff4cu), 0x0u);
L_0067760d:; BB(0x0067760d);
    /* 0067760d: ret  */ FN_RET(0x006775f0); r_esp += 4; return;
}

void f_00677610(void)
{
    FN_ENTER(0x00677610);
    /* 00677610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677611: mov ebp, esp */ r_ebp = r_esp;
    /* 00677613: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677615: push 0x8e9a98 */ { u32 v = 0x8e9a98u; r_esp -= 4; W32(r_esp, v); }
    /* 0067761a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00677620: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677621: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00677628: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067762b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067762e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00677631: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00677634: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00677637: push 0x374 */ { u32 v = 0x374u; r_esp -= 4; W32(r_esp, v); }
    /* 0067763c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00677643: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x677648u); f_005caba4();
    /* 00677648: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677649: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067764c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067764e: je 0x677687 */ if (fZ) goto L_00677687;
L_00677650:; BB(0x00677650);
    /* 00677650: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00677657: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067765e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677661: push dword ptr [0xaca34c] */ { u32 v = R32((u32)(0xaca34cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00677667: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067766a: call 0x67768c */ r_esp -= 4; W32(r_esp, 0x67766fu); f_0067768c();
    /* 0067766f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677672: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00677679:; BB(0x00677679);
    /* 00677679: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067767c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00677683: mov esp, ebp */ r_esp = r_ebp;
    /* 00677685: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677686: ret  */ FN_RET(0x00677610); r_esp += 4; return;
L_00677687:; BB(0x00677687);
    /* 00677687: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00677689: jmp 0x677679 */ goto L_00677679;
}

void f_0067768c(void) /* sub_67768C */
{
    FN_ENTER(0x0067768c);
    /* 0067768c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067768d: mov ebp, esp */ r_ebp = r_esp;
    /* 0067768f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677691: push 0x8e9ab4 */ { u32 v = 0x8e9ab4u; r_esp -= 4; W32(r_esp, v); }
    /* 00677696: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067769c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067769d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006776a4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006776a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006776aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006776ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006776b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006776b3: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006776b6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006776b9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006776bc: call 0x64df84 */ r_esp -= 4; W32(r_esp, 0x6776c1u); f_0064df84();
    /* 006776c1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006776c8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006776cb: mov dword ptr [ecx], 0xb37100 */ W32((u32)(r_ecx), 0xb37100u);
    /* 006776d1: mov eax, dword ptr [0x9c9ce4] */ r_eax = R32((u32)(0x9c9ce4u));
    /* 006776d6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006776d9: call 0x677748 */ r_esp -= 4; W32(r_esp, 0x6776deu); f_00677748();
    /* 006776de: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006776e1: call 0x677770 */ r_esp -= 4; W32(r_esp, 0x6776e6u); f_00677770();
    /* 006776e6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006776e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006776eb: push 0x9c9ce8 */ { u32 v = 0x9c9ce8u; r_esp -= 4; W32(r_esp, v); }
    /* 006776f0: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6776f5u); f_007b9a88();
    /* 006776f5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006776f8: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6776fdu); f_007b4f54();
    /* 006776fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677700: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00677703: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00677706: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 00677709: fadd dword ptr [0x9c9cec] */ ST(0) = ST(0) + R_F32((u32)(0x9c9cecu));
    /* 0067770f: fst dword ptr [eax + 0x304] */ W_F32((u32)(r_eax+0x304u), ST(0));
    /* 00677715: fstp dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0)); FPOP();
    /* 00677718: mov dword ptr [eax + 0x308], ecx */ W32((u32)(r_eax+0x308u), r_ecx);
    /* 0067771e: mov dword ptr [eax + 0x300], edx */ W32((u32)(r_eax+0x300u), r_edx);
    /* 00677724: mov dword ptr [eax + 0x74], edx */ W32((u32)(r_eax+0x74u), r_edx);
    /* 00677727: mov dword ptr [eax + 0x7c], ecx */ W32((u32)(r_eax+0x7cu), r_ecx);
    /* 0067772a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067772d: mov dword ptr [eax + 0x364], 0x447a0000 */ W32((u32)(r_eax+0x364u), 0x447a0000u);
    /* 00677737: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067773a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00677741: mov esp, ebp */ r_esp = r_ebp;
    /* 00677743: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677744: ret 8 */ FN_RET(0x0067768c); r_esp += 12; return;
}

void f_00677748(void) /* sub_677748 */
{
    FN_ENTER(0x00677748);
    /* 00677748: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00677749: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067774b: mov ecx, dword ptr [0xa8ff4c] */ r_ecx = R32((u32)(0xa8ff4cu));
    /* 00677751: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00677753: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x677758u); f_005b8610();
    /* 00677758: mov ecx, dword ptr [0xa8ff4c] */ r_ecx = R32((u32)(0xa8ff4cu));
    /* 0067775e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00677760: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 00677763: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x677768u); f_005b8624();
    /* 00677768: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 0067776b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067776c: ret  */ FN_RET(0x00677748); r_esp += 4; return;
}

void f_00677770(void) /* sub_677770 */
{
    FN_ENTER(0x00677770);
    /* 00677770: fld dword ptr [0x93afcc] */ FPUSH(R_F32((u32)(0x93afccu)));
    /* 00677776: fld dword ptr [ecx + 0x68] */ FPUSH(R_F32((u32)(r_ecx+0x68u)));
    /* 00677779: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0067777b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067777d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067777e: jae 0x67778f */ if (!fC) goto L_0067778f;
L_00677780:; BB(0x00677780);
    /* 00677780: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00677782: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00677784: mov dword ptr [ecx + 0x370], 0 */ W32((u32)(r_ecx+0x370u), 0x0u);
    /* 0067778e: ret  */ FN_RET(0x00677770); r_esp += 4; return;
L_0067778f:; BB(0x0067778f);
    /* 0067778f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00677791: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00677793: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00677795: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00677796: ja 0x6777b4 */ if ((!fC&&!fZ)) goto L_006777b4;
L_00677798:; BB(0x00677798);
    /* 00677798: fld dword ptr [0x93afc8] */ FPUSH(R_F32((u32)(0x93afc8u)));
    /* 0067779e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006777a0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006777a2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006777a3: jbe 0x6777ba */ if ((fC||fZ)) goto L_006777ba;
L_006777a5:; BB(0x006777a5);
    /* 006777a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006777a7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006777a9: mov dword ptr [ecx + 0x370], 1 */ W32((u32)(r_ecx+0x370u), 0x1u);
    /* 006777b3: ret  */ FN_RET(0x00677770); r_esp += 4; return;
L_006777b4:; BB(0x006777b4);
    /* 006777b4: fld dword ptr [0x93afc8] */ FPUSH(R_F32((u32)(0x93afc8u)));
L_006777ba:; BB(0x006777ba);
    /* 006777ba: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 006777bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006777be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006777bf: ja 0x6777dd */ if ((!fC&&!fZ)) goto L_006777dd;
L_006777c1:; BB(0x006777c1);
    /* 006777c1: fld dword ptr [0x93afc4] */ FPUSH(R_F32((u32)(0x93afc4u)));
    /* 006777c7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006777c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006777cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006777cc: jbe 0x6777e3 */ if ((fC||fZ)) goto L_006777e3;
L_006777ce:; BB(0x006777ce);
    /* 006777ce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006777d0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006777d2: mov dword ptr [ecx + 0x370], 2 */ W32((u32)(r_ecx+0x370u), 0x2u);
    /* 006777dc: ret  */ FN_RET(0x00677770); r_esp += 4; return;
L_006777dd:; BB(0x006777dd);
    /* 006777dd: fld dword ptr [0x93afc4] */ FPUSH(R_F32((u32)(0x93afc4u)));
L_006777e3:; BB(0x006777e3);
    /* 006777e3: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006777e5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006777e7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006777e8: ja 0x6777f4 */ if ((!fC&&!fZ)) goto L_006777f4;
L_006777ea:; BB(0x006777ea);
    /* 006777ea: mov dword ptr [ecx + 0x370], 3 */ W32((u32)(r_ecx+0x370u), 0x3u);
L_006777f4:; BB(0x006777f4);
    /* 006777f4: ret  */ FN_RET(0x00677770); r_esp += 4; return;
}

void f_006777f8(void) /* sub_6777F8 */
{
    FN_ENTER(0x006777f8);
    /* 006777f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006777f9: mov ebp, esp */ r_ebp = r_esp;
    /* 006777fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006777fd: push 0x8e9adc */ { u32 v = 0x8e9adcu; r_esp -= 4; W32(r_esp, v); }
    /* 00677802: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00677808: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677809: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00677810: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677813: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00677816: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00677819: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067781c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067781f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00677824: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067782b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x677830u); f_008581c5();
    /* 00677830: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677831: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00677834: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677836: je 0x677877 */ if (fZ) goto L_00677877;
L_00677838:; BB(0x00677838);
    /* 00677838: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067783f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00677846: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677849: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067784b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067784c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067784d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067784e: push 0x9c9cd4 */ { u32 v = 0x9c9cd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00677853: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677855: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x67785au); f_005b7a84();
    /* 0067785a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067785d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00677864:; BB(0x00677864);
    /* 00677864: mov dword ptr [0xa8ff4c], eax */ W32((u32)(0xa8ff4cu), r_eax);
    /* 00677869: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067786c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00677873: mov esp, ebp */ r_esp = r_ebp;
    /* 00677875: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677876: ret  */ FN_RET(0x006777f8); r_esp += 4; return;
L_00677877:; BB(0x00677877);
    /* 00677877: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00677879: jmp 0x677864 */ goto L_00677864;
}

void f_0067787c(void) /* sub_67787C */
{
    FN_ENTER(0x0067787c);
    /* 0067787c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067787d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067787f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00677881: call 0x6778a0 */ r_esp -= 4; W32(r_esp, 0x677886u); f_006778a0();
    /* 00677886: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0067788a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067788c: jne 0x677892 */ if (!fZ) goto L_00677892;
L_0067788e:; BB(0x0067788e);
    /* 0067788e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067788f: ret 4 */ FN_RET(0x0067787c); r_esp += 8; return;
L_00677892:; BB(0x00677892);
    /* 00677892: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00677893: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x677898u); f_005c2f74();
    /* 00677898: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677899: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067789a: ret 4 */ FN_RET(0x0067787c); r_esp += 8; return;
}

void f_006778a0(void) /* sub_6778A0 */
{
    FN_ENTER(0x006778a0);
    /* 006778a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006778a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006778a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006778a5: push 0x8e9af8 */ { u32 v = 0x8e9af8u; r_esp -= 4; W32(r_esp, v); }
    /* 006778aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006778b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006778b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006778b8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006778bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006778be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006778c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006778c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006778c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006778ca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006778d1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006778d4: mov dword ptr [eax], 0xb37300 */ W32((u32)(r_eax), 0xb37300u);
    /* 006778da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006778db: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6778e0u); f_007b4e84();
    /* 006778e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006778e1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006778e4: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6778e9u); f_007b9c8c();
    /* 006778e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006778f0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006778f3: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x6778f8u); f_00619b10();
    /* 006778f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006778fb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00677902: mov esp, ebp */ r_esp = r_ebp;
    /* 00677904: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677905: ret  */ FN_RET(0x006778a0); r_esp += 4; return;
}

void f_00677908(void) /* sub_677908 */
{
    FN_ENTER(0x00677908);
    /* 00677908: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0067790c: mov edx, dword ptr [0xa8ff58] */ r_edx = R32((u32)(0xa8ff58u));
    /* 00677912: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00677915: jl 0x677933 */ if ((fS!=fO)) goto L_00677933;
L_00677917:; BB(0x00677917);
    /* 00677917: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067791a: jg 0x677933 */ if ((!fZ&&fS==fO)) goto L_00677933;
L_0067791c:; BB(0x0067791c);
    /* 0067791c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067791e: jne 0x677926 */ if (!fZ) goto L_00677926;
L_00677920:; BB(0x00677920);
    /* 00677920: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x677925u); f_0082dbac();
    /* 00677925: ret  */ FN_RET(0x00677908); r_esp += 4; return;
L_00677926:; BB(0x00677926);
    /* 00677926: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x67792bu); f_0082dab0();
    /* 0067792b: mov edx, dword ptr [0xa8ff58] */ r_edx = R32((u32)(0xa8ff58u));
    /* 00677931: jmp 0x677937 */ goto L_00677937;
L_00677933:; BB(0x00677933);
    /* 00677933: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00677935: je 0x677940 */ if (fZ) goto L_00677940;
L_00677937:; BB(0x00677937);
    /* 00677937: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067793a: mov dword ptr [0xa8ff58], edx */ W32((u32)(0xa8ff58u), r_edx);
L_00677940:; BB(0x00677940);
    /* 00677940: ret  */ FN_RET(0x00677908); r_esp += 4; return;
}

void f_00677944(void) /* sub_677944 */
{
    FN_ENTER(0x00677944);
    /* 00677944: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00677945: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00677946: mov edi, ecx */ r_edi = r_ecx;
    /* 00677948: push dword ptr [edi + 0xc4] */ { u32 v = R32((u32)(r_edi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067794e: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677954: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00677956: mov ecx, edi */ r_ecx = r_edi;
    /* 00677958: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x67795bu); call_ind(t); }
    /* 0067795b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067795d: je 0x677a5b */ if (fZ) goto L_00677a5b;
L_00677963:; BB(0x00677963);
    /* 00677963: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00677968: mov ecx, edi */ r_ecx = r_edi;
    /* 0067796a: call 0x613244 */ r_esp -= 4; W32(r_esp, 0x67796fu); f_00613244();
    /* 0067796f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00677971: je 0x677a5b */ if (fZ) goto L_00677a5b;
L_00677977:; BB(0x00677977);
    /* 00677977: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 0067797d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00677980: jne 0x677985 */ if (!fZ) goto L_00677985;
L_00677982:; BB(0x00677982);
    /* 00677982: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00677983: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00677984: ret  */ FN_RET(0x00677944); r_esp += 4; return;
L_00677985:; BB(0x00677985);
    /* 00677985: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x67798au); f_0082d7b0();
    /* 0067798a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067798c: push 0xbfc28f5c */ { u32 v = 0xbfc28f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00677991: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00677993: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677995: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x67799au); f_00830b74();
    /* 0067799a: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0067799d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6779a2u); f_0082d838();
    /* 006779a2: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 006779a5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006779a7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6779acu); f_0082d8bc();
    /* 006779ac: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006779af: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6779b4u); f_00829cc8();
    /* 006779b4: mov edx, dword ptr [0xa8ff60] */ r_edx = R32((u32)(0xa8ff60u));
    /* 006779ba: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 006779c0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006779c2: je 0x6779e8 */ if (fZ) goto L_006779e8;
L_006779c4:; BB(0x006779c4);
    /* 006779c4: or dword ptr [edx], 8 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 006779c7: mov eax, dword ptr [0xa8ff60] */ r_eax = R32((u32)(0xa8ff60u));
    /* 006779cc: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006779cf: or dword ptr [edx], 8 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 006779d2: mov esi, dword ptr [0xa8ff5c] */ r_esi = R32((u32)(0xa8ff5cu));
    /* 006779d8: and dword ptr [esi], 0xfffffff7 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006779db: mov eax, dword ptr [0xa8ff5c] */ r_eax = R32((u32)(0xa8ff5cu));
    /* 006779e0: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 006779e3: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006779e6: jmp 0x677a0a */ goto L_00677a0a;
L_006779e8:; BB(0x006779e8);
    /* 006779e8: and dword ptr [edx], 0xfffffff7 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006779eb: mov eax, dword ptr [0xa8ff60] */ r_eax = R32((u32)(0xa8ff60u));
    /* 006779f0: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006779f3: and dword ptr [edx], 0xfffffff7 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006779f6: mov esi, dword ptr [0xa8ff5c] */ r_esi = R32((u32)(0xa8ff5cu));
    /* 006779fc: or dword ptr [esi], 8 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 006779ff: mov eax, dword ptr [0xa8ff5c] */ r_eax = R32((u32)(0xa8ff5cu));
    /* 00677a04: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00677a07: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00677a0a:; BB(0x00677a0a);
    /* 00677a0a: push 0x677908 */ { u32 v = 0x677908u; r_esp -= 4; W32(r_esp, v); }
    /* 00677a0f: call 0x82e8e4 */ r_esp -= 4; W32(r_esp, 0x677a14u); f_0082e8e4();
    /* 00677a14: mov esi, eax */ r_esi = r_eax;
    /* 00677a16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00677a19: mov edx, dword ptr [edi + 0xac] */ r_edx = R32((u32)(r_edi+0xacu));
    /* 00677a1f: mov dword ptr [0xa8ff58], 0 */ W32((u32)(0xa8ff58u), 0x0u);
    /* 00677a29: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677a2b: jne 0x677a38 */ if (!fZ) goto L_00677a38;
L_00677a2d:; BB(0x00677a2d);
    /* 00677a2d: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677a30: call 0x82e760 */ r_esp -= 4; W32(r_esp, 0x677a35u); f_0082e760();
    /* 00677a35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677a36: jmp 0x677a4f */ goto L_00677a4f;
L_00677a38:; BB(0x00677a38);
    /* 00677a38: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677a3e: push dword ptr [edi + 0xbc] */ { u32 v = R32((u32)(r_edi+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00677a44: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677a47: call 0x830a28 */ r_esp -= 4; W32(r_esp, 0x677a4cu); f_00830a28();
    /* 00677a4c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00677a4f:; BB(0x00677a4f);
    /* 00677a4f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00677a50: call 0x82e8e4 */ r_esp -= 4; W32(r_esp, 0x677a55u); f_0082e8e4();
    /* 00677a55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677a56: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x677a5bu); f_0082da80();
L_00677a5b:; BB(0x00677a5b);
    /* 00677a5b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00677a5c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00677a5d: ret  */ FN_RET(0x00677944); r_esp += 4; return;
}

void f_00677987(void)
{
    FN_ENTER(0x00677987);
    /* 00677987: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00677988: sbb eax, dword ptr [eax] */ { u32 c = fC; u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0067798a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067798c: push 0xbfc28f5c */ { u32 v = 0xbfc28f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00677991: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00677993: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677995: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x67799au); f_00830b74();
    /* 0067799a: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0067799d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6779a2u); f_0082d838();
    /* 006779a2: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 006779a5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006779a7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6779acu); f_0082d8bc();
    /* 006779ac: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006779af: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6779b4u); f_00829cc8();
    /* 006779b4: mov edx, dword ptr [0xa8ff60] */ r_edx = R32((u32)(0xa8ff60u));
    /* 006779ba: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 006779c0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006779c2: je 0x6779e8 */ if (fZ) goto L_006779e8;
L_006779c4:; BB(0x006779c4);
    /* 006779c4: or dword ptr [edx], 8 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 006779c7: mov eax, dword ptr [0xa8ff60] */ r_eax = R32((u32)(0xa8ff60u));
    /* 006779cc: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006779cf: or dword ptr [edx], 8 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 006779d2: mov esi, dword ptr [0xa8ff5c] */ r_esi = R32((u32)(0xa8ff5cu));
    /* 006779d8: and dword ptr [esi], 0xfffffff7 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006779db: mov eax, dword ptr [0xa8ff5c] */ r_eax = R32((u32)(0xa8ff5cu));
    /* 006779e0: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 006779e3: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006779e6: jmp 0x677a0a */ goto L_00677a0a;
L_006779e8:; BB(0x006779e8);
    /* 006779e8: and dword ptr [edx], 0xfffffff7 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006779eb: mov eax, dword ptr [0xa8ff60] */ r_eax = R32((u32)(0xa8ff60u));
    /* 006779f0: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006779f3: and dword ptr [edx], 0xfffffff7 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 006779f6: mov esi, dword ptr [0xa8ff5c] */ r_esi = R32((u32)(0xa8ff5cu));
    /* 006779fc: or dword ptr [esi], 8 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 006779ff: mov eax, dword ptr [0xa8ff5c] */ r_eax = R32((u32)(0xa8ff5cu));
    /* 00677a04: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00677a07: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00677a0a:; BB(0x00677a0a);
    /* 00677a0a: push 0x677908 */ { u32 v = 0x677908u; r_esp -= 4; W32(r_esp, v); }
    /* 00677a0f: call 0x82e8e4 */ r_esp -= 4; W32(r_esp, 0x677a14u); f_0082e8e4();
    /* 00677a14: mov esi, eax */ r_esi = r_eax;
    /* 00677a16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00677a19: mov edx, dword ptr [edi + 0xac] */ r_edx = R32((u32)(r_edi+0xacu));
    /* 00677a1f: mov dword ptr [0xa8ff58], 0 */ W32((u32)(0xa8ff58u), 0x0u);
    /* 00677a29: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677a2b: jne 0x677a38 */ if (!fZ) goto L_00677a38;
L_00677a2d:; BB(0x00677a2d);
    /* 00677a2d: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677a30: call 0x82e760 */ r_esp -= 4; W32(r_esp, 0x677a35u); f_0082e760();
    /* 00677a35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677a36: jmp 0x677a4f */ goto L_00677a4f;
L_00677a38:; BB(0x00677a38);
    /* 00677a38: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677a3e: push dword ptr [edi + 0xbc] */ { u32 v = R32((u32)(r_edi+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00677a44: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677a47: call 0x830a28 */ r_esp -= 4; W32(r_esp, 0x677a4cu); f_00830a28();
    /* 00677a4c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00677a4f:; BB(0x00677a4f);
    /* 00677a4f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00677a50: call 0x82e8e4 */ r_esp -= 4; W32(r_esp, 0x677a55u); f_0082e8e4();
    /* 00677a55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677a56: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x677a5bu); f_0082da80();
    /* 00677a5b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00677a5c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00677a5d: ret  */ FN_RET(0x00677987); r_esp += 4; return;
}

void f_00677a60(void) /* sub_677A60 */
{
    FN_ENTER(0x00677a60);
    /* 00677a60: mov ecx, dword ptr [0xa8ff64] */ r_ecx = R32((u32)(0xa8ff64u));
    /* 00677a66: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00677a68: je 0x677a7d */ if (fZ) goto L_00677a7d;
L_00677a6a:; BB(0x00677a6a);
    /* 00677a6a: je 0x677a73 */ if (fZ) goto L_00677a73;
L_00677a6c:; BB(0x00677a6c);
    /* 00677a6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677a6e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x677a73u); f_004066a8();
L_00677a73:; BB(0x00677a73);
    /* 00677a73: mov dword ptr [0xa8ff64], 0 */ W32((u32)(0xa8ff64u), 0x0u);
L_00677a7d:; BB(0x00677a7d);
    /* 00677a7d: ret  */ FN_RET(0x00677a60); r_esp += 4; return;
}

void f_00677a80(void)
{
    FN_ENTER(0x00677a80);
    /* 00677a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00677a83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677a85: push 0x8e9b20 */ { u32 v = 0x8e9b20u; r_esp -= 4; W32(r_esp, v); }
    /* 00677a8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00677a90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677a91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00677a98: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677a9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00677a9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00677aa1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00677aa4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00677aa7: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00677aac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00677ab3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x677ab8u); f_005caba4();
    /* 00677ab8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677ab9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00677abc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677abe: je 0x677af7 */ if (fZ) goto L_00677af7;
L_00677ac0:; BB(0x00677ac0);
    /* 00677ac0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00677ac7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00677ace: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677ad1: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677ad7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677ada: call 0x677afc */ r_esp -= 4; W32(r_esp, 0x677adfu); f_00677afc();
    /* 00677adf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677ae2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00677ae9:; BB(0x00677ae9);
    /* 00677ae9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00677aec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00677af3: mov esp, ebp */ r_esp = r_ebp;
    /* 00677af5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677af6: ret  */ FN_RET(0x00677a80); r_esp += 4; return;
L_00677af7:; BB(0x00677af7);
    /* 00677af7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00677af9: jmp 0x677ae9 */ goto L_00677ae9;
}

void f_00677afc(void) /* sub_677AFC */
{
    FN_ENTER(0x00677afc);
    /* 00677afc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677afd: mov ebp, esp */ r_ebp = r_esp;
    /* 00677aff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677b01: push 0x8e9b3c */ { u32 v = 0x8e9b3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00677b06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00677b0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677b0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00677b14: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677b17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00677b1a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00677b1d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00677b20: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00677b23: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00677b26: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677b29: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00677b2c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00677b2f: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x677b34u); f_00619df0();
    /* 00677b34: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00677b3b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00677b3e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00677b41: mov dword ptr [ecx], 0xb37300 */ W32((u32)(r_ecx), 0xb37300u);
    /* 00677b47: mov eax, dword ptr [0x9c9d34] */ r_eax = R32((u32)(0x9c9d34u));
    /* 00677b4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00677b4d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00677b50: call dword ptr [0xb37314] */ { u32 t = R32((u32)(0xb37314u)); r_esp -= 4; W32(r_esp, 0x677b56u); call_ind(t); }
    /* 00677b56: mov ecx, dword ptr [0xa8ff64] */ r_ecx = R32((u32)(0xa8ff64u));
    /* 00677b5c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677b5e: je 0x677bc2 */ if (fZ) goto L_00677bc2;
L_00677b60:; BB(0x00677b60);
    /* 00677b60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677b62: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x677b67u); f_005b8610();
    /* 00677b67: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00677b6a: mov ecx, dword ptr [0xa8ff64] */ r_ecx = R32((u32)(0xa8ff64u));
    /* 00677b70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677b72: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00677b75: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x677b7au); f_005b8624();
    /* 00677b7a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00677b7d: mov ecx, dword ptr [0xa8ff64] */ r_ecx = R32((u32)(0xa8ff64u));
    /* 00677b83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677b85: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00677b88: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x677b8du); f_005b8638();
    /* 00677b8d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00677b90: fld dword ptr [0x93b048] */ FPUSH(R_F32((u32)(0x93b048u)));
    /* 00677b96: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 00677b9c: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00677b9f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00677ba2: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00677ba5: fadd dword ptr [edx*4 + 0x93b038] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x93b038u));
    /* 00677bac: fadd dword ptr [0x93b04c] */ ST(0) = ST(0) + R_F32((u32)(0x93b04cu));
    /* 00677bb2: fst dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0));
    /* 00677bb8: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00677bba: fstp dword ptr [ecx + 0xb8] */ W_F32((u32)(r_ecx+0xb8u), ST(0)); FPOP();
    /* 00677bc0: jmp 0x677bc5 */ goto L_00677bc5;
L_00677bc2:; BB(0x00677bc2);
    /* 00677bc2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_00677bc5:; BB(0x00677bc5);
    /* 00677bc5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677bc7: push 0x9c9d38 */ { u32 v = 0x9c9d38u; r_esp -= 4; W32(r_esp, v); }
    /* 00677bcc: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x677bd1u); f_007b9a88();
    /* 00677bd1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00677bd4: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x677bd9u); f_007b4f54();
    /* 00677bd9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00677bdc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00677bde: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x677be1u); call_ind(t); }
    /* 00677be1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00677be4: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 00677bea: fmul dword ptr [0x93b044] */ ST(0) = ST(0) * R_F32((u32)(0x93b044u));
    /* 00677bf0: fld dword ptr [eax + 0xc4] */ FPUSH(R_F32((u32)(r_eax+0xc4u)));
    /* 00677bf6: fdiv dword ptr [0x93b040] */ ST(0) = ST(0) / R_F32((u32)(0x93b040u));
    /* 00677bfc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00677bfe: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
    /* 00677c04: fstp dword ptr [eax + 0xc4] */ W_F32((u32)(r_eax+0xc4u), ST(0)); FPOP();
    /* 00677c0a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00677c0d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00677c14: mov esp, ebp */ r_esp = r_ebp;
    /* 00677c16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677c17: ret 8 */ FN_RET(0x00677afc); r_esp += 12; return;
}

void f_00677c1c(void) /* sub_677C1C */
{
    FN_ENTER(0x00677c1c);
    /* 00677c1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677c1d: mov ebp, esp */ r_ebp = r_esp;
    /* 00677c1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677c21: push 0x8e9b64 */ { u32 v = 0x8e9b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00677c26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00677c2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677c2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00677c34: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677c37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00677c3a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00677c3d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00677c40: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00677c43: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00677c48: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00677c4f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x677c54u); f_008581c5();
    /* 00677c54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677c55: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00677c58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677c5a: je 0x677cc9 */ if (fZ) goto L_00677cc9;
L_00677c5c:; BB(0x00677c5c);
    /* 00677c5c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00677c63: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00677c6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677c6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00677c6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677c70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677c71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677c72: push 0x9c9d24 */ { u32 v = 0x9c9d24u; r_esp -= 4; W32(r_esp, v); }
    /* 00677c77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677c79: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x677c7eu); f_005b7a84();
    /* 00677c7e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677c81: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00677c88:; BB(0x00677c88);
    /* 00677c88: mov dword ptr [0xa8ff64], ecx */ W32((u32)(0xa8ff64u), r_ecx);
    /* 00677c8e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00677c95: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00677c97: je 0x677cb8 */ if (fZ) goto L_00677cb8;
L_00677c99:; BB(0x00677c99);
    /* 00677c99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677c9b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x677ca0u); f_005b8610();
    /* 00677ca0: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00677ca3: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00677ca6: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00677ca9: mov ebx, dword ptr [ecx + 0x2c] */ r_ebx = R32((u32)(r_ecx+0x2cu));
    /* 00677cac: mov dword ptr [0xa8ff60], ecx */ W32((u32)(0xa8ff60u), r_ecx);
    /* 00677cb2: mov dword ptr [0xa8ff5c], ebx */ W32((u32)(0xa8ff5cu), r_ebx);
L_00677cb8:; BB(0x00677cb8);
    /* 00677cb8: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00677cbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00677cbe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00677cc5: mov esp, ebp */ r_esp = r_ebp;
    /* 00677cc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677cc8: ret  */ FN_RET(0x00677c1c); r_esp += 4; return;
L_00677cc9:; BB(0x00677cc9);
    /* 00677cc9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00677ccb: jmp 0x677c88 */ goto L_00677c88;
}

void f_00677cd0(void) /* sub_677CD0 */
{
    FN_ENTER(0x00677cd0);
    /* 00677cd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00677cd1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00677cd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00677cd5: call 0x677cf4 */ r_esp -= 4; W32(r_esp, 0x677cdau); f_00677cf4();
    /* 00677cda: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00677cde: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00677ce0: jne 0x677ce6 */ if (!fZ) goto L_00677ce6;
L_00677ce2:; BB(0x00677ce2);
    /* 00677ce2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00677ce3: ret 4 */ FN_RET(0x00677cd0); r_esp += 8; return;
L_00677ce6:; BB(0x00677ce6);
    /* 00677ce6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00677ce7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x677cecu); f_005c2f74();
    /* 00677cec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677ced: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00677cee: ret 4 */ FN_RET(0x00677cd0); r_esp += 8; return;
}

void f_00677cf4(void) /* sub_677CF4 */
{
    FN_ENTER(0x00677cf4);
    /* 00677cf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677cf5: mov ebp, esp */ r_ebp = r_esp;
    /* 00677cf7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677cf9: push 0x8e9b80 */ { u32 v = 0x8e9b80u; r_esp -= 4; W32(r_esp, v); }
    /* 00677cfe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00677d04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677d05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00677d0c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677d0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00677d12: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00677d15: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00677d18: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00677d1b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00677d1e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00677d25: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677d28: mov dword ptr [eax], 0xb37400 */ W32((u32)(r_eax), 0xb37400u);
    /* 00677d2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677d2f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x677d34u); f_007b4e84();
    /* 00677d34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677d35: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677d38: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x677d3du); f_007b9c8c();
    /* 00677d3d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00677d44: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677d47: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x677d4cu); f_006131f4();
    /* 00677d4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00677d4f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00677d56: mov esp, ebp */ r_esp = r_ebp;
    /* 00677d58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677d59: ret  */ FN_RET(0x00677cf4); r_esp += 4; return;
}

void f_00677d5c(void) /* sub_677D5C */
{
    FN_ENTER(0x00677d5c);
    /* 00677d5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00677d5d: mov edi, ecx */ r_edi = r_ecx;
    /* 00677d5f: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 00677d65: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00677d68: fmul dword ptr [0x93b0a0] */ ST(0) = ST(0) * R_F32((u32)(0x93b0a0u));
    /* 00677d6e: mov edx, dword ptr [edi + 0x34] */ r_edx = R32((u32)(r_edi+0x34u));
    /* 00677d71: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00677d73: je 0x677dbd */ if (fZ) goto L_00677dbd;
L_00677d75:; BB(0x00677d75);
    /* 00677d75: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00677d77: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00677d7a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00677d7e: mov ecx, edi */ r_ecx = r_edi;
    /* 00677d80: mov dword ptr [esp], 0x43c80000 */ W32((u32)(r_esp), 0x43c80000u);
    /* 00677d87: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x677d8au); call_ind(t); }
    /* 00677d8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00677d8c: je 0x677dbb */ if (fZ) goto L_00677dbb;
L_00677d8e:; BB(0x00677d8e);
    /* 00677d8e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x677d93u); f_0082d7b0();
    /* 00677d93: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00677d96: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x677d9bu); f_0082d838();
    /* 00677d9b: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00677d9e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00677da0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x677da5u); f_0082d8bc();
    /* 00677da5: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00677da8: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x677dadu); f_00829cc8();
    /* 00677dad: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677db0: call 0x82e760 */ r_esp -= 4; W32(r_esp, 0x677db5u); f_0082e760();
    /* 00677db5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677db6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x677dbbu); f_0082da80();
L_00677dbb:; BB(0x00677dbb);
    /* 00677dbb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00677dbc: ret  */ FN_RET(0x00677d5c); r_esp += 4; return;
L_00677dbd:; BB(0x00677dbd);
    /* 00677dbd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00677dbf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00677dc0: ret  */ FN_RET(0x00677d5c); r_esp += 4; return;
}

void f_00677dc4(void) /* sub_677DC4 */
{
    FN_ENTER(0x00677dc4);
    /* 00677dc4: mov ecx, dword ptr [0xa8ff6c] */ r_ecx = R32((u32)(0xa8ff6cu));
    /* 00677dca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00677dcc: je 0x677de1 */ if (fZ) goto L_00677de1;
L_00677dce:; BB(0x00677dce);
    /* 00677dce: je 0x677dd7 */ if (fZ) goto L_00677dd7;
L_00677dd0:; BB(0x00677dd0);
    /* 00677dd0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677dd2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x677dd7u); f_004066a8();
L_00677dd7:; BB(0x00677dd7);
    /* 00677dd7: mov dword ptr [0xa8ff6c], 0 */ W32((u32)(0xa8ff6cu), 0x0u);
L_00677de1:; BB(0x00677de1);
    /* 00677de1: ret  */ FN_RET(0x00677dc4); r_esp += 4; return;
}

void f_00677de4(void)
{
    FN_ENTER(0x00677de4);
    /* 00677de4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677de5: mov ebp, esp */ r_ebp = r_esp;
    /* 00677de7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677de9: push 0x8e9ba8 */ { u32 v = 0x8e9ba8u; r_esp -= 4; W32(r_esp, v); }
    /* 00677dee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00677df4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677df5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00677dfc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677dff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00677e02: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00677e05: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00677e08: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00677e0b: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00677e10: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00677e17: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x677e1cu); f_005caba4();
    /* 00677e1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677e1d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00677e20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677e22: je 0x677e5b */ if (fZ) goto L_00677e5b;
L_00677e24:; BB(0x00677e24);
    /* 00677e24: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00677e2b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00677e32: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677e35: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677e3b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677e3e: call 0x677e60 */ r_esp -= 4; W32(r_esp, 0x677e43u); f_00677e60();
    /* 00677e43: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677e46: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00677e4d:; BB(0x00677e4d);
    /* 00677e4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00677e50: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00677e57: mov esp, ebp */ r_esp = r_ebp;
    /* 00677e59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677e5a: ret  */ FN_RET(0x00677de4); r_esp += 4; return;
L_00677e5b:; BB(0x00677e5b);
    /* 00677e5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00677e5d: jmp 0x677e4d */ goto L_00677e4d;
}

void f_00677e60(void) /* sub_677E60 */
{
    FN_ENTER(0x00677e60);
    /* 00677e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00677e63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677e65: push 0x8e9bc4 */ { u32 v = 0x8e9bc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00677e6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00677e70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677e71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00677e78: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677e7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00677e7e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00677e81: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00677e84: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00677e87: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00677e8a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677e8d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00677e90: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00677e93: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x677e98u); f_006132e4();
    /* 00677e98: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00677e9f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00677ea2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00677ea5: mov dword ptr [ecx], 0xb37400 */ W32((u32)(r_ecx), 0xb37400u);
    /* 00677eab: mov eax, dword ptr [0x9c9e24] */ r_eax = R32((u32)(0x9c9e24u));
    /* 00677eb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00677eb1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00677eb4: call dword ptr [0xb37414] */ { u32 t = R32((u32)(0xb37414u)); r_esp -= 4; W32(r_esp, 0x677ebau); call_ind(t); }
    /* 00677eba: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00677ebd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677ebf: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 00677ec5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00677ec8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00677eca: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00677ecc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00677ece: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00677ed0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00677ed2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00677ed4: lea ebx, [edx + edx + 0x9c9d80] */ r_ebx = (u32)(r_edx+r_edx+0x9c9d80u);
    /* 00677edb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00677edc: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x677ee1u); f_007b9a88();
    /* 00677ee1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00677ee4: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x677ee9u); f_007b4f54();
    /* 00677ee9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00677eec: call 0x677f08 */ r_esp -= 4; W32(r_esp, 0x677ef1u); f_00677f08();
    /* 00677ef1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00677ef4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00677ef7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00677efa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00677f01: mov esp, ebp */ r_esp = r_ebp;
    /* 00677f03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677f04: ret 8 */ FN_RET(0x00677e60); r_esp += 12; return;
}

void f_00677f08(void) /* sub_677F08 */
{
    FN_ENTER(0x00677f08);
    /* 00677f08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00677f09: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00677f0b: push dword ptr [ebx + 0x84] */ { u32 v = R32((u32)(r_ebx+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677f11: mov ecx, dword ptr [0xa8ff6c] */ r_ecx = R32((u32)(0xa8ff6cu));
    /* 00677f17: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x677f1cu); f_005b8610();
    /* 00677f1c: push dword ptr [ebx + 0x84] */ { u32 v = R32((u32)(r_ebx+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 00677f22: mov ecx, dword ptr [0xa8ff6c] */ r_ecx = R32((u32)(0xa8ff6cu));
    /* 00677f28: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 00677f2b: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x677f30u); f_005b8624();
    /* 00677f30: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 00677f33: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00677f34: ret  */ FN_RET(0x00677f08); r_esp += 4; return;
}

void f_00677f38(void) /* sub_677F38 */
{
    FN_ENTER(0x00677f38);
    /* 00677f38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677f39: mov ebp, esp */ r_ebp = r_esp;
    /* 00677f3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677f3d: push 0x8e9bec */ { u32 v = 0x8e9becu; r_esp -= 4; W32(r_esp, v); }
    /* 00677f42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00677f48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677f49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00677f50: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677f53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00677f56: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00677f59: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00677f5c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00677f5f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00677f64: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00677f6b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x677f70u); f_008581c5();
    /* 00677f70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677f71: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00677f74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677f76: je 0x677fb7 */ if (fZ) goto L_00677fb7;
L_00677f78:; BB(0x00677f78);
    /* 00677f78: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00677f7f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00677f86: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677f89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00677f8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677f8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677f8e: push 0x9c9e14 */ { u32 v = 0x9c9e14u; r_esp -= 4; W32(r_esp, v); }
    /* 00677f93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677f95: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x677f9au); f_005b7a84();
    /* 00677f9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00677f9d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00677fa4:; BB(0x00677fa4);
    /* 00677fa4: mov dword ptr [0xa8ff6c], eax */ W32((u32)(0xa8ff6cu), r_eax);
    /* 00677fa9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00677fac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00677fb3: mov esp, ebp */ r_esp = r_ebp;
    /* 00677fb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677fb6: ret  */ FN_RET(0x00677f38); r_esp += 4; return;
L_00677fb7:; BB(0x00677fb7);
    /* 00677fb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00677fb9: jmp 0x677fa4 */ goto L_00677fa4;
}

void f_00677fbc(void) /* sub_677FBC */
{
    FN_ENTER(0x00677fbc);
    /* 00677fbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00677fbd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00677fbf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00677fc1: call 0x677fe0 */ r_esp -= 4; W32(r_esp, 0x677fc6u); f_00677fe0();
    /* 00677fc6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00677fca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00677fcc: jne 0x677fd2 */ if (!fZ) goto L_00677fd2;
L_00677fce:; BB(0x00677fce);
    /* 00677fce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00677fcf: ret 4 */ FN_RET(0x00677fbc); r_esp += 8; return;
L_00677fd2:; BB(0x00677fd2);
    /* 00677fd2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00677fd3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x677fd8u); f_005c2f74();
    /* 00677fd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00677fd9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00677fda: ret 4 */ FN_RET(0x00677fbc); r_esp += 8; return;
}

void f_00677fe0(void) /* sub_677FE0 */
{
    FN_ENTER(0x00677fe0);
    /* 00677fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00677fe3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00677fe5: push 0x8e9c08 */ { u32 v = 0x8e9c08u; r_esp -= 4; W32(r_esp, v); }
    /* 00677fea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00677ff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677ff1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00677ff8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677ffb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00677ffe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00678001: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00678004: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00678007: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067800a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067800d: mov dword ptr [ecx], 0xb374d0 */ W32((u32)(r_ecx), 0xb374d0u);
    /* 00678013: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067801a: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x67801fu); f_006131f4();
    /* 0067801f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00678022: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00678029: mov esp, ebp */ r_esp = r_ebp;
    /* 0067802b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067802c: ret  */ FN_RET(0x00677fe0); r_esp += 4; return;
}

