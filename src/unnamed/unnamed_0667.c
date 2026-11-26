#include "protos.h"

void f_00667090(void) /* sub_667090 */
{
    FN_ENTER(0x00667090);
    /* 00667090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667091: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00667093: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00667096: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667098: je 0x6670c2 */ if (fZ) goto L_006670c2;
L_0066709a:; BB(0x0066709a);
    /* 0066709a: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0066709d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066709f: je 0x6670a8 */ if (fZ) goto L_006670a8;
L_006670a1:; BB(0x006670a1);
    /* 006670a1: mov edx, 0x10 */ r_edx = 0x10u;
    /* 006670a6: jmp 0x6670ad */ goto L_006670ad;
L_006670a8:; BB(0x006670a8);
    /* 006670a8: mov edx, 1 */ r_edx = 0x1u;
L_006670ad:; BB(0x006670ad);
    /* 006670ad: movsx eax, word ptr [0xa8fc10] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa8fc10u));
    /* 006670b4: test edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006670b6: jne 0x667107 */ if (!fZ) goto L_00667107;
L_006670b8:; BB(0x006670b8);
    /* 006670b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006670ba: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 006670bd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 006670c0: jmp 0x6670e8 */ goto L_006670e8;
L_006670c2:; BB(0x006670c2);
    /* 006670c2: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 006670c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006670c7: je 0x6670d0 */ if (fZ) goto L_006670d0;
L_006670c9:; BB(0x006670c9);
    /* 006670c9: mov edx, 0x20 */ r_edx = 0x20u;
    /* 006670ce: jmp 0x6670d5 */ goto L_006670d5;
L_006670d0:; BB(0x006670d0);
    /* 006670d0: mov edx, 2 */ r_edx = 0x2u;
L_006670d5:; BB(0x006670d5);
    /* 006670d5: movsx eax, word ptr [0xa8fc10] */ r_eax = (u32)(i32)(i16)R16((u32)(0xa8fc10u));
    /* 006670dc: test edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006670de: jne 0x667117 */ if (!fZ) goto L_00667117;
L_006670e0:; BB(0x006670e0);
    /* 006670e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006670e2: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 006670e5: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
L_006670e8:; BB(0x006670e8);
    /* 006670e8: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 006670eb: cmp edx, dword ptr [ebp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006670ee: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 006670f1: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 006670f4: jl 0x667105 */ if ((fS!=fO)) goto L_00667105;
L_006670f6:; BB(0x006670f6);
    /* 006670f6: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006670fa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006670ff: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00667103: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667104: ret  */ FN_RET(0x00667090); r_esp += 4; return;
L_00667105:; BB(0x00667105);
    /* 00667105: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667106: ret  */ FN_RET(0x00667090); r_esp += 4; return;
L_00667107:; BB(0x00667107);
    /* 00667107: mov dword ptr [ebp + 0x3c], 1 */ W32((u32)(r_ebp+0x3cu), 0x1u);
    /* 0066710e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00667110: call 0x666be8 */ r_esp -= 4; W32(r_esp, 0x667115u); f_00666be8();
    /* 00667115: jmp 0x6670e8 */ goto L_006670e8;
L_00667117:; BB(0x00667117);
    /* 00667117: mov dword ptr [ebp + 0x3c], 1 */ W32((u32)(r_ebp+0x3cu), 0x1u);
    /* 0066711e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00667120: call 0x666be8 */ r_esp -= 4; W32(r_esp, 0x667125u); f_00666be8();
    /* 00667125: jmp 0x6670e8 */ goto L_006670e8;
}

void f_00667128(void) /* sub_667128 */
{
    FN_ENTER(0x00667128);
    /* 00667128: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667129: mov ebp, esp */ r_ebp = r_esp;
    /* 0066712b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066712d: push 0x8e86d4 */ { u32 v = 0x8e86d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00667132: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00667138: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667139: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00667140: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00667143: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00667146: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00667149: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066714c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066714f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00667152: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667155: mov dword ptr [ecx], 0xb34940 */ W32((u32)(r_ecx), 0xb34940u);
    /* 0066715b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00667162: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x667167u); f_008171e8();
    /* 00667167: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066716a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00667171: mov esp, ebp */ r_esp = r_ebp;
    /* 00667173: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667174: ret  */ FN_RET(0x00667128); r_esp += 4; return;
}

void f_00667178(void) /* sub_667178 */
{
    FN_ENTER(0x00667178);
    /* 00667178: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00667179: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066717a: mov esi, ecx */ r_esi = r_ecx;
    /* 0066717c: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00667180: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00667184: mov ecx, esi */ r_ecx = r_esi;
    /* 00667186: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x66718bu); f_008193cc();
    /* 0066718b: mov dword ptr [esi], 0xb34940 */ W32((u32)(r_esi), 0xb34940u);
    /* 00667191: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00667193: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 00667196: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00667199: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0066719c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006671a0: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 006671a3: mov dword ptr [esi + 0x24], ebx */ W32((u32)(r_esi+0x24u), r_ebx);
    /* 006671a6: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 006671a9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006671ab: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006671af: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 006671b2: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 006671b5: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006671b9: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 006671bc: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 006671bf: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 006671c2: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 006671c5: mov eax, esi */ r_eax = r_esi;
    /* 006671c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006671c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006671c9: ret 0x14 */ FN_RET(0x00667178); r_esp += 24; return;
}

void f_006671cc(void) /* sub_6671CC */
{
    FN_ENTER(0x006671cc);
    /* 006671cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006671cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006671ce: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006671d0: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 006671d4: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006671d8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006671da: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6671dfu); f_008193cc();
    /* 006671df: mov dword ptr [ebp], 0xb34940 */ W32((u32)(r_ebp), 0xb34940u);
    /* 006671e6: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006671e8: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 006671eb: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006671ee: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 006671f1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006671f5: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 006671f8: mov dword ptr [ebp + 0x24], ebx */ W32((u32)(r_ebp+0x24u), r_ebx);
    /* 006671fb: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 006671fe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00667200: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00667204: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 00667207: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 0066720a: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 0066720d: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00667210: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 00667213: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 00667216: mov eax, ebp */ r_eax = r_ebp;
    /* 00667218: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00667219: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066721a: ret 0x10 */ FN_RET(0x006671cc); r_esp += 20; return;
}

void f_00667220(void) /* sub_667220 */
{
    FN_ENTER(0x00667220);
    /* 00667220: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00667221: mov esi, ecx */ r_esi = r_ecx;
    /* 00667223: mov eax, dword ptr [0xa8fc1c] */ r_eax = R32((u32)(0xa8fc1cu));
    /* 00667228: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066722a: je 0x6672a0 */ if (fZ) goto L_006672a0;
L_0066722c:; BB(0x0066722c);
    /* 0066722c: movzx eax, word ptr [0xa8fbe8] */ r_eax = (u32)R16((u32)(0xa8fbe8u));
    /* 00667233: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00667236: je 0x667291 */ if (fZ) goto L_00667291;
L_00667238:; BB(0x00667238);
    /* 00667238: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 0066723b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066723e: je 0x667293 */ if (fZ) goto L_00667293;
L_00667240:; BB(0x00667240);
    /* 00667240: mov ecx, dword ptr [0xa8fc34] */ r_ecx = R32((u32)(0xa8fc34u));
    /* 00667246: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x66724bu); f_00829cc8();
L_0066724b:; BB(0x0066724b);
    /* 0066724b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x667250u); f_0082d7b0();
    /* 00667250: lea ecx, [esi + 0x1c] */ r_ecx = (u32)(r_esi+0x1cu);
    /* 00667253: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x667258u); f_0082d838();
    /* 00667258: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 0066725b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066725d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x667262u); f_0082d8bc();
    /* 00667262: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00667267: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066726c: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00667271: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00667273: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x667278u); f_0082fa0c();
    /* 00667278: mov ecx, dword ptr [0xa8fc1c] */ r_ecx = R32((u32)(0xa8fc1cu));
    /* 0066727e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00667280: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x667285u); f_005b8610();
    /* 00667285: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667286: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x66728bu); f_0082e1e8();
    /* 0066728b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066728c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x667291u); f_0082da80();
L_00667291:; BB(0x00667291);
    /* 00667291: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00667292: ret  */ FN_RET(0x00667220); r_esp += 4; return;
L_00667293:; BB(0x00667293);
    /* 00667293: mov ecx, dword ptr [0xa8fc30] */ r_ecx = R32((u32)(0xa8fc30u));
    /* 00667299: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x66729eu); f_00829cc8();
    /* 0066729e: jmp 0x66724b */ goto L_0066724b;
L_006672a0:; BB(0x006672a0);
    /* 006672a0: mov eax, dword ptr [0xa8fc30] */ r_eax = R32((u32)(0xa8fc30u));
    /* 006672a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006672a7: jne 0x66722c */ if (!fZ) goto L_0066722c;
L_006672a9:; BB(0x006672a9);
    /* 006672a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006672aa: ret  */ FN_RET(0x00667220); r_esp += 4; return;
}

void f_006672ac(void) /* sub_6672AC */
{
    FN_ENTER(0x006672ac);
    /* 006672ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006672ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006672ae: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006672b1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006672b3: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 006672b6: cmp edx, dword ptr [ebp + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x48u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006672b9: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 006672bc: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 006672bf: jge 0x66741e */ if ((fS==fO)) goto L_0066741e;
L_006672c5:; BB(0x006672c5);
    /* 006672c5: mov eax, dword ptr [ebp + 0x4c] */ r_eax = R32((u32)(r_ebp+0x4cu));
    /* 006672c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006672ca: jne 0x66736f */ if (!fZ) goto L_0066736f;
L_006672d0:; BB(0x006672d0);
    /* 006672d0: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 006672d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006672d5: je 0x667323 */ if (fZ) goto L_00667323;
L_006672d7:; BB(0x006672d7);
    /* 006672d7: mov edx, dword ptr [ebp + 0x54] */ r_edx = R32((u32)(r_ebp+0x54u));
    /* 006672da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006672dc: je 0x6672e5 */ if (fZ) goto L_006672e5;
L_006672de:; BB(0x006672de);
    /* 006672de: mov edi, 0x10 */ r_edi = 0x10u;
    /* 006672e3: jmp 0x6672ea */ goto L_006672ea;
L_006672e5:; BB(0x006672e5);
    /* 006672e5: mov edi, 1 */ r_edi = 0x1u;
L_006672ea:; BB(0x006672ea);
    /* 006672ea: movsx edx, word ptr [0xa8fc10] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa8fc10u));
    /* 006672f1: test edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006672f3: je 0x66736f */ if (fZ) goto L_0066736f;
L_006672f5:; BB(0x006672f5);
    /* 006672f5: lea edi, [ebp + 0x1c] */ r_edi = (u32)(r_ebp+0x1cu);
    /* 006672f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006672fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006672fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006672fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006672fd: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00667302: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x667307u); f_00814298();
    /* 00667307: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00667309: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066730a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066730b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066730c: push 0x584 */ { u32 v = 0x584u; r_esp -= 4; W32(r_esp, v); }
    /* 00667311: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x667316u); f_00814298();
    /* 00667316: mov dword ptr [ebp + 0x4c], 1 */ W32((u32)(r_ebp+0x4cu), 0x1u);
    /* 0066731d: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00667320: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667321: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00667322: ret  */ FN_RET(0x006672ac); r_esp += 4; return;
L_00667323:; BB(0x00667323);
    /* 00667323: mov edx, dword ptr [ebp + 0x54] */ r_edx = R32((u32)(r_ebp+0x54u));
    /* 00667326: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667328: je 0x667331 */ if (fZ) goto L_00667331;
L_0066732a:; BB(0x0066732a);
    /* 0066732a: mov edi, 0x20 */ r_edi = 0x20u;
    /* 0066732f: jmp 0x667336 */ goto L_00667336;
L_00667331:; BB(0x00667331);
    /* 00667331: mov edi, 2 */ r_edi = 0x2u;
L_00667336:; BB(0x00667336);
    /* 00667336: movsx edx, word ptr [0xa8fc10] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa8fc10u));
    /* 0066733d: test edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066733f: je 0x66736f */ if (fZ) goto L_0066736f;
L_00667341:; BB(0x00667341);
    /* 00667341: lea edi, [ebp + 0x1c] */ r_edi = (u32)(r_ebp+0x1cu);
    /* 00667344: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00667346: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667347: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667348: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00667349: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066734e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x667353u); f_00814298();
    /* 00667353: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00667355: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667357: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00667358: push 0x584 */ { u32 v = 0x584u; r_esp -= 4; W32(r_esp, v); }
    /* 0066735d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x667362u); f_00814298();
    /* 00667362: mov dword ptr [ebp + 0x4c], 1 */ W32((u32)(r_ebp+0x4cu), 0x1u);
    /* 00667369: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066736c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066736d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066736e: ret  */ FN_RET(0x006672ac); r_esp += 4; return;
L_0066736f:; BB(0x0066736f);
    /* 0066736f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667371: je 0x667405 */ if (fZ) goto L_00667405;
L_00667377:; BB(0x00667377);
    /* 00667377: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 0066737a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066737c: je 0x667448 */ if (fZ) goto L_00667448;
L_00667382:; BB(0x00667382);
    /* 00667382: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 00667385: lea edi, [edx + 1] */ r_edi = (u32)(r_edx+0x1u);
    /* 00667388: mov dword ptr [ebp + 0x40], edi */ W32((u32)(r_ebp+0x40u), r_edi);
    /* 0066738b: cmp edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00667391: jge 0x66740b */ if ((fS==fO)) goto L_0066740b;
L_00667393:; BB(0x00667393);
    /* 00667393: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00667396: add edx, 0x16c */ {  u32 a = r_edx; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066739c: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 0066739f: cmp edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006673a2: jg 0x6673df */ if ((!fZ&&fS==fO)) goto L_006673df;
L_006673a4:; BB(0x006673a4);
    /* 006673a4: fld dword ptr [0x93965c] */ FPUSH(R_F32((u32)(0x93965cu)));
    /* 006673aa: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 006673ad: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 006673b0: mov edi, dword ptr [ebp + 0x24] */ r_edi = R32((u32)(r_ebp+0x24u));
    /* 006673b3: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006673b7: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006673bb: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 006673bf: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006673c3: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 006673c7: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 006673cb: push 0x1db */ { u32 v = 0x1dbu; r_esp -= 4; W32(r_esp, v); }
    /* 006673d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006673d1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6673d6u); f_0050b510();
    /* 006673d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006673d9: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 006673dc: mov edi, dword ptr [ebp + 0x40] */ r_edi = R32((u32)(r_ebp+0x40u));
L_006673df:; BB(0x006673df);
    /* 006673df: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006673e2: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 006673e6: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 006673ea: fmul dword ptr [0x939658] */ ST(0) = ST(0) * R_F32((u32)(0x939658u));
    /* 006673f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006673f2: fadd dword ptr [ebp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x20u));
    /* 006673f5: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 006673f8: je 0x667405 */ if (fZ) goto L_00667405;
L_006673fa:; BB(0x006673fa);
    /* 006673fa: add ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006673fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006673fe: mov ecx, eax */ r_ecx = r_eax;
    /* 00667400: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x667405u); f_00508db8();
L_00667405:; BB(0x00667405);
    /* 00667405: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00667408: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667409: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066740a: ret  */ FN_RET(0x006672ac); r_esp += 4; return;
L_0066740b:; BB(0x0066740b);
    /* 0066740b: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0066740f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00667414: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00667418: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066741b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066741c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066741d: ret  */ FN_RET(0x006672ac); r_esp += 4; return;
L_0066741e:; BB(0x0066741e);
    /* 0066741e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00667420: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00667422: lea edi, [ebp + 0x1c] */ r_edi = (u32)(r_ebp+0x1cu);
    /* 00667425: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00667426: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x66742bu); f_0050b7a4();
    /* 0066742b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0066742d: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0066742f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00667430: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x667435u); f_0050b7a4();
    /* 00667435: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00667439: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066743e: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00667442: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00667445: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667446: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00667447: ret  */ FN_RET(0x006672ac); r_esp += 4; return;
L_00667448:; BB(0x00667448);
    /* 00667448: mov edx, dword ptr [0x939628] */ r_edx = R32((u32)(0x939628u));
    /* 0066744e: mov edi, dword ptr [0x93962c] */ r_edi = R32((u32)(0x93962cu));
    /* 00667454: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00667457: mov edx, dword ptr [0x939630] */ r_edx = R32((u32)(0x939630u));
    /* 0066745d: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00667461: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00667465: movzx edx, word ptr [0xa8fbe8] */ r_edx = (u32)R16((u32)(0xa8fbe8u));
    /* 0066746c: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066746f: je 0x667382 */ if (fZ) goto L_00667382;
L_00667475:; BB(0x00667475);
    /* 00667475: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00667478: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066747a: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066747f: lea edx, [ebp + 0x1c] */ r_edx = (u32)(r_ebp+0x1cu);
    /* 00667482: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667483: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667484: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x667489u); f_00509dc4();
    /* 00667489: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066748c: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 0066748f: jmp 0x667382 */ goto L_00667382;
}

void f_00667494(void) /* sub_667494 */
{
    FN_ENTER(0x00667494);
    /* 00667494: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667495: mov ebp, esp */ r_ebp = r_esp;
    /* 00667497: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00667499: push 0x8e86f0 */ { u32 v = 0x8e86f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066749e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006674a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006674a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006674ac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006674af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006674b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006674b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006674b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006674bb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006674be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006674c1: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 006674c4: mov dword ptr [ecx], 0xb34950 */ W32((u32)(r_ecx), 0xb34950u);
    /* 006674ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006674cc: je 0x6674e5 */ if (fZ) goto L_006674e5;
L_006674ce:; BB(0x006674ce);
    /* 006674ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006674d1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006674d5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006674da: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006674de: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_006674e5:; BB(0x006674e5);
    /* 006674e5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006674ec: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6674f1u); f_008171e8();
    /* 006674f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006674f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006674fb: mov esp, ebp */ r_esp = r_ebp;
    /* 006674fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006674fe: ret  */ FN_RET(0x00667494); r_esp += 4; return;
}

void f_00667500(void) /* sub_667500 */
{
    FN_ENTER(0x00667500);
    /* 00667500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667501: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00667503: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00667507: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00667509: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x66750eu); f_008193cc();
    /* 0066750e: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00667512: mov dword ptr [ebp], 0xb34950 */ W32((u32)(r_ebp), 0xb34950u);
    /* 00667519: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0066751b: mov dword ptr [ebp + 0x1c], ecx */ W32((u32)(r_ebp+0x1cu), r_ecx);
    /* 0066751e: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00667521: fadd dword ptr [0x939654] */ ST(0) = ST(0) + R_F32((u32)(0x939654u));
    /* 00667527: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0066752a: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 0066752d: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00667530: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 00667533: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 00667536: mov dword ptr [ebp + 0x28], ecx */ W32((u32)(r_ebp+0x28u), r_ecx);
    /* 00667539: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 0066753c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00667540: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00667543: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00667545: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 00667548: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 0066754b: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 0066754e: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
    /* 00667551: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00667555: mov dword ptr [ebp + 0x44], edx */ W32((u32)(r_ebp+0x44u), r_edx);
    /* 00667558: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 0066755b: mov dword ptr [ebp + 0x50], eax */ W32((u32)(r_ebp+0x50u), r_eax);
    /* 0066755e: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00667562: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
    /* 00667565: mov dword ptr [ebp + 0x4c], edx */ W32((u32)(r_ebp+0x4cu), r_edx);
    /* 00667568: mov eax, ebp */ r_eax = r_ebp;
    /* 0066756a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066756b: ret 0x14 */ FN_RET(0x00667500); r_esp += 24; return;
}

void f_00667570(void) /* sub_667570 */
{
    FN_ENTER(0x00667570);
    /* 00667570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667571: mov ebp, esp */ r_ebp = r_esp;
    /* 00667573: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00667575: push 0x8e8718 */ { u32 v = 0x8e8718u; r_esp -= 4; W32(r_esp, v); }
    /* 0066757a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00667580: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667581: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00667588: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066758b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066758e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00667591: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00667594: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00667597: mov eax, 1 */ r_eax = 0x1u;
    /* 0066759c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0066759e: mov dword ptr [0xa8fc00], 0x427c0000 */ W32((u32)(0xa8fc00u), 0x427c0000u);
    /* 006675a8: mov word ptr [0xa8fc12], ax */ W16((u32)(0xa8fc12u), (u16)r_eax);
    /* 006675ae: mov dword ptr [0xa8fc0c], edx */ W32((u32)(0xa8fc0cu), r_edx);
    /* 006675b4: mov dword ptr [0xa8fc04], 0 */ W32((u32)(0xa8fc04u), 0x0u);
    /* 006675be: mov dword ptr [0xa8fc08], 0x427c0000 */ W32((u32)(0xa8fc08u), 0x427c0000u);
    /* 006675c8: mov byte ptr [0xa8fc18], dl */ W8((u32)(0xa8fc18u), (u8)r_edx);
    /* 006675ce: mov dword ptr [0xa8fc44], edx */ W32((u32)(0xa8fc44u), r_edx);
    /* 006675d4: mov dword ptr [0xa8fc48], edx */ W32((u32)(0xa8fc48u), r_edx);
    /* 006675da: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 006675dd: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006675e2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6675e7u); f_008581c5();
    /* 006675e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006675e8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006675eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006675ed: je 0x6676c3 */ if (fZ) goto L_006676c3;
L_006675f3:; BB(0x006675f3);
    /* 006675f3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006675fa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00667601: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667604: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00667606: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667607: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667608: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667609: push 0x9c9360 */ { u32 v = 0x9c9360u; r_esp -= 4; W32(r_esp, v); }
    /* 0066760e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00667610: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x667615u); f_005b7a84();
    /* 00667615: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667618: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0066761f:; BB(0x0066761f);
    /* 0066761f: mov dword ptr [0xa8fc1c], eax */ W32((u32)(0xa8fc1cu), r_eax);
    /* 00667624: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066762b: push 0x9397ac */ { u32 v = 0x9397acu; r_esp -= 4; W32(r_esp, v); }
    /* 00667630: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x667635u); f_008009dc();
    /* 00667635: push 0x9397bc */ { u32 v = 0x9397bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0066763a: mov dword ptr [0xa8fc20], eax */ W32((u32)(0xa8fc20u), r_eax);
    /* 0066763f: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x667644u); f_008009dc();
    /* 00667644: push 0x9397cc */ { u32 v = 0x9397ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00667649: mov dword ptr [0xa8fc24], eax */ W32((u32)(0xa8fc24u), r_eax);
    /* 0066764e: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x667653u); f_008009dc();
    /* 00667653: push 0x9397dc */ { u32 v = 0x9397dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00667658: mov dword ptr [0xa8fc28], eax */ W32((u32)(0xa8fc28u), r_eax);
    /* 0066765d: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x667662u); f_008009dc();
    /* 00667662: push 0x9397ec */ { u32 v = 0x9397ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00667667: mov dword ptr [0xa8fc2c], eax */ W32((u32)(0xa8fc2cu), r_eax);
    /* 0066766c: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x667671u); f_008009dc();
    /* 00667671: push 0x939804 */ { u32 v = 0x939804u; r_esp -= 4; W32(r_esp, v); }
    /* 00667676: mov dword ptr [0xa8fc30], eax */ W32((u32)(0xa8fc30u), r_eax);
    /* 0066767b: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x667680u); f_008009dc();
    /* 00667680: push 0x939820 */ { u32 v = 0x939820u; r_esp -= 4; W32(r_esp, v); }
    /* 00667685: mov dword ptr [0xa8fc34], eax */ W32((u32)(0xa8fc34u), r_eax);
    /* 0066768a: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x66768fu); f_008009dc();
    /* 0066768f: push 0x939830 */ { u32 v = 0x939830u; r_esp -= 4; W32(r_esp, v); }
    /* 00667694: mov dword ptr [0xa8fc38], eax */ W32((u32)(0xa8fc38u), r_eax);
    /* 00667699: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x66769eu); f_008009dc();
    /* 0066769e: push 0x939848 */ { u32 v = 0x939848u; r_esp -= 4; W32(r_esp, v); }
    /* 006676a3: mov dword ptr [0xa8fc3c], eax */ W32((u32)(0xa8fc3cu), r_eax);
    /* 006676a8: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x6676adu); f_008009dc();
    /* 006676ad: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006676b0: mov dword ptr [0xa8fc40], eax */ W32((u32)(0xa8fc40u), r_eax);
    /* 006676b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006676b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006676bf: mov esp, ebp */ r_esp = r_ebp;
    /* 006676c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006676c2: ret  */ FN_RET(0x00667570); r_esp += 4; return;
L_006676c3:; BB(0x006676c3);
    /* 006676c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006676c5: jmp 0x66761f */ goto L_0066761f;
}

void f_006676cc(void) /* sub_6676CC */
{
    FN_ENTER(0x006676cc);
    /* 006676cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006676cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006676cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006676d1: call 0x667128 */ r_esp -= 4; W32(r_esp, 0x6676d6u); f_00667128();
    /* 006676d6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006676da: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006676dc: jne 0x6676e2 */ if (!fZ) goto L_006676e2;
L_006676de:; BB(0x006676de);
    /* 006676de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006676df: ret 4 */ FN_RET(0x006676cc); r_esp += 8; return;
L_006676e2:; BB(0x006676e2);
    /* 006676e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006676e3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6676e8u); f_005c2f74();
    /* 006676e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006676e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006676ea: ret 4 */ FN_RET(0x006676cc); r_esp += 8; return;
}

void f_006676f0(void) /* sub_6676F0 */
{
    FN_ENTER(0x006676f0);
    /* 006676f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006676f1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006676f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006676f5: call 0x667494 */ r_esp -= 4; W32(r_esp, 0x6676fau); f_00667494();
    /* 006676fa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006676fe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00667700: jne 0x667706 */ if (!fZ) goto L_00667706;
L_00667702:; BB(0x00667702);
    /* 00667702: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00667703: ret 4 */ FN_RET(0x006676f0); r_esp += 8; return;
L_00667706:; BB(0x00667706);
    /* 00667706: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00667707: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x66770cu); f_005c2f74();
    /* 0066770c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066770d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066770e: ret 4 */ FN_RET(0x006676f0); r_esp += 8; return;
}

void f_00667714(void) /* sub_667714 */
{
    FN_ENTER(0x00667714);
    /* 00667714: mov dword ptr [0xa8fc60], 0x3f800000 */ W32((u32)(0xa8fc60u), 0x3f800000u);
    /* 0066771e: mov dword ptr [0xa8fc64], 0x41000000 */ W32((u32)(0xa8fc64u), 0x41000000u);
    /* 00667728: mov dword ptr [0xa8fc68], 0x3fc00000 */ W32((u32)(0xa8fc68u), 0x3fc00000u);
    /* 00667732: ret  */ FN_RET(0x00667714); r_esp += 4; return;
}

void f_00667734(void) /* sub_667734 */
{
    FN_ENTER(0x00667734);
    /* 00667734: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00667735: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00667737: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00667739: call 0x667758 */ r_esp -= 4; W32(r_esp, 0x66773eu); f_00667758();
    /* 0066773e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00667742: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00667744: jne 0x66774a */ if (!fZ) goto L_0066774a;
L_00667746:; BB(0x00667746);
    /* 00667746: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00667747: ret 4 */ FN_RET(0x00667734); r_esp += 8; return;
L_0066774a:; BB(0x0066774a);
    /* 0066774a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066774b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x667750u); f_005c2f74();
    /* 00667750: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667751: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00667752: ret 4 */ FN_RET(0x00667734); r_esp += 8; return;
}

void f_00667758(void) /* sub_667758 */
{
    FN_ENTER(0x00667758);
    /* 00667758: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667759: mov ebp, esp */ r_ebp = r_esp;
    /* 0066775b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066775d: push 0x8e8734 */ { u32 v = 0x8e8734u; r_esp -= 4; W32(r_esp, v); }
    /* 00667762: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00667768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667769: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00667770: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00667773: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00667776: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00667779: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066777c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066777f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00667782: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00667789: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066778c: mov dword ptr [eax], 0xb34a00 */ W32((u32)(r_eax), 0xb34a00u);
    /* 00667792: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667793: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x667798u); f_007b4e84();
    /* 00667798: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667799: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066779c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6677a1u); f_007b9c8c();
    /* 006677a1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006677a8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006677ab: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x6677b0u); f_007b4aec();
    /* 006677b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006677b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006677ba: mov esp, ebp */ r_esp = r_ebp;
    /* 006677bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006677bd: ret  */ FN_RET(0x00667758); r_esp += 4; return;
}

void f_006677c0(void) /* sub_6677C0 */
{
    FN_ENTER(0x006677c0);
    /* 006677c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006677c1: mov esi, ecx */ r_esi = r_ecx;
    /* 006677c3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006677c5: mov ecx, esi */ r_ecx = r_esi;
    /* 006677c7: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 006677cc: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 006677d1: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6677d4u); call_ind(t); }
    /* 006677d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006677d6: je 0x667817 */ if (fZ) goto L_00667817;
L_006677d8:; BB(0x006677d8);
    /* 006677d8: mov ecx, dword ptr [0xa8fc70] */ r_ecx = R32((u32)(0xa8fc70u));
    /* 006677de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006677e0: je 0x667817 */ if (fZ) goto L_00667817;
L_006677e2:; BB(0x006677e2);
    /* 006677e2: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6677e7u); f_00829cc8();
    /* 006677e7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6677ecu); f_0082d7b0();
    /* 006677ec: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 006677ef: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6677f4u); f_0082d838();
    /* 006677f4: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006677f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006677f9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6677feu); f_0082d8bc();
    /* 006677fe: mov ecx, dword ptr [0xa8fc74] */ r_ecx = R32((u32)(0xa8fc74u));
    /* 00667804: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00667806: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66780bu); f_005b8610();
    /* 0066780b: mov ecx, eax */ r_ecx = r_eax;
    /* 0066780d: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x667812u); f_00831758();
    /* 00667812: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x667817u); f_0082da80();
L_00667817:; BB(0x00667817);
    /* 00667817: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00667818: ret  */ FN_RET(0x006677c0); r_esp += 4; return;
}

void f_0066781c(void) /* sub_66781C */
{
    FN_ENTER(0x0066781c);
    /* 0066781c: mov ecx, dword ptr [0xa8fc70] */ r_ecx = R32((u32)(0xa8fc70u));
    /* 00667822: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667824: je 0x667841 */ if (fZ) goto L_00667841;
L_00667826:; BB(0x00667826);
    /* 00667826: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x66782bu); f_00829de0();
    /* 0066782b: push dword ptr [0xa8fc70] */ { u32 v = R32((u32)(0xa8fc70u)); r_esp -= 4; W32(r_esp, v); }
    /* 00667831: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x667836u); f_0082e960();
    /* 00667836: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667837: mov dword ptr [0xa8fc70], 0 */ W32((u32)(0xa8fc70u), 0x0u);
L_00667841:; BB(0x00667841);
    /* 00667841: mov ecx, dword ptr [0xa8fc74] */ r_ecx = R32((u32)(0xa8fc74u));
    /* 00667847: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00667849: je 0x66785e */ if (fZ) goto L_0066785e;
L_0066784b:; BB(0x0066784b);
    /* 0066784b: je 0x667854 */ if (fZ) goto L_00667854;
L_0066784d:; BB(0x0066784d);
    /* 0066784d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066784f: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x667854u); f_004066a8();
L_00667854:; BB(0x00667854);
    /* 00667854: mov dword ptr [0xa8fc74], 0 */ W32((u32)(0xa8fc74u), 0x0u);
L_0066785e:; BB(0x0066785e);
    /* 0066785e: ret  */ FN_RET(0x0066781c); r_esp += 4; return;
}

void f_00667860(void)
{
    FN_ENTER(0x00667860);
    /* 00667860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667861: mov ebp, esp */ r_ebp = r_esp;
    /* 00667863: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00667865: push 0x8e875c */ { u32 v = 0x8e875cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066786a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00667870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667871: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00667878: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066787b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066787e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00667881: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00667884: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00667887: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 0066788c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00667893: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x667898u); f_005caba4();
    /* 00667898: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667899: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066789c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066789e: je 0x6678d7 */ if (fZ) goto L_006678d7;
L_006678a0:; BB(0x006678a0);
    /* 006678a0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006678a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006678ae: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006678b1: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006678b7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006678ba: call 0x6678dc */ r_esp -= 4; W32(r_esp, 0x6678bfu); f_006678dc();
    /* 006678bf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006678c2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006678c9:; BB(0x006678c9);
    /* 006678c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006678cc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006678d3: mov esp, ebp */ r_esp = r_ebp;
    /* 006678d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006678d6: ret  */ FN_RET(0x00667860); r_esp += 4; return;
L_006678d7:; BB(0x006678d7);
    /* 006678d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006678d9: jmp 0x6678c9 */ goto L_006678c9;
}

void f_006678dc(void) /* sub_6678DC */
{
    FN_ENTER(0x006678dc);
    /* 006678dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006678dd: mov ebp, esp */ r_ebp = r_esp;
    /* 006678df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006678e1: push 0x8e8778 */ { u32 v = 0x8e8778u; r_esp -= 4; W32(r_esp, v); }
    /* 006678e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006678ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006678ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006678f4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006678f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006678fa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006678fd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00667900: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00667903: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00667906: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00667909: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0066790c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066790f: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x667914u); f_007b4b48();
    /* 00667914: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066791b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066791e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00667921: mov dword ptr [ecx], 0xb34a00 */ W32((u32)(r_ecx), 0xb34a00u);
    /* 00667927: mov edx, dword ptr [0x9c93c4] */ r_edx = R32((u32)(0x9c93c4u));
    /* 0066792d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066792f: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00667932: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 00667935: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 00667938: push 0x9c93c8 */ { u32 v = 0x9c93c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066793d: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 00667940: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 00667943: mov edi, dword ptr [eax + 0x14] */ r_edi = R32((u32)(r_eax+0x14u));
    /* 00667946: mov dword ptr [ecx + 0x40], edi */ W32((u32)(r_ecx+0x40u), r_edi);
    /* 00667949: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0066794c: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 0066794f: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00667952: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00667955: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00667958: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 0066795b: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0066795e: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 00667961: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00667964: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 00667967: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0066796a: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
    /* 0066796d: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x667972u); f_007b9a88();
    /* 00667972: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00667975: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00667978: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066797d: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00667980: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x667985u); f_007b4f54();
    /* 00667985: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00667988: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066798b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066798e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00667991: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00667994: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066799b: mov esp, ebp */ r_esp = r_ebp;
    /* 0066799d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066799e: ret 8 */ FN_RET(0x006678dc); r_esp += 12; return;
}

void f_006679a4(void) /* sub_6679A4 */
{
    FN_ENTER(0x006679a4);
    /* 006679a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006679a5: mov ebp, esp */ r_ebp = r_esp;
    /* 006679a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006679a9: push 0x8e87a0 */ { u32 v = 0x8e87a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006679ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006679b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006679b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006679bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006679bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006679c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006679c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006679c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006679cb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006679d0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006679d7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6679dcu); f_008581c5();
    /* 006679dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006679dd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006679e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006679e2: je 0x667a3a */ if (fZ) goto L_00667a3a;
L_006679e4:; BB(0x006679e4);
    /* 006679e4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006679eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006679f2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006679f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006679f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006679f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006679f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006679fa: push 0x9c93b4 */ { u32 v = 0x9c93b4u; r_esp -= 4; W32(r_esp, v); }
    /* 006679ff: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00667a01: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x667a06u); f_005b7a84();
    /* 00667a06: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667a09: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00667a10:; BB(0x00667a10);
    /* 00667a10: mov dword ptr [0xa8fc74], eax */ W32((u32)(0xa8fc74u), r_eax);
    /* 00667a15: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00667a1c: push 0x9398bc */ { u32 v = 0x9398bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00667a21: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x667a26u); f_008009dc();
    /* 00667a26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667a27: mov dword ptr [0xa8fc70], eax */ W32((u32)(0xa8fc70u), r_eax);
    /* 00667a2c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00667a2f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00667a36: mov esp, ebp */ r_esp = r_ebp;
    /* 00667a38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667a39: ret  */ FN_RET(0x006679a4); r_esp += 4; return;
L_00667a3a:; BB(0x00667a3a);
    /* 00667a3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00667a3c: jmp 0x667a10 */ goto L_00667a10;
}

void f_00667a40(void) /* sub_667A40 */
{
    FN_ENTER(0x00667a40);
    /* 00667a40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00667a41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00667a43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00667a45: call 0x667a64 */ r_esp -= 4; W32(r_esp, 0x667a4au); f_00667a64();
    /* 00667a4a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00667a4e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00667a50: jne 0x667a56 */ if (!fZ) goto L_00667a56;
L_00667a52:; BB(0x00667a52);
    /* 00667a52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00667a53: ret 4 */ FN_RET(0x00667a40); r_esp += 8; return;
L_00667a56:; BB(0x00667a56);
    /* 00667a56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00667a57: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x667a5cu); f_005c2f74();
    /* 00667a5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667a5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00667a5e: ret 4 */ FN_RET(0x00667a40); r_esp += 8; return;
}

void f_00667a64(void) /* sub_667A64 */
{
    FN_ENTER(0x00667a64);
    /* 00667a64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667a65: mov ebp, esp */ r_ebp = r_esp;
    /* 00667a67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00667a69: push 0x8e87bc */ { u32 v = 0x8e87bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00667a6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00667a74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667a75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00667a7c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00667a7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00667a82: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00667a85: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00667a88: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00667a8b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00667a8e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667a91: mov dword ptr [ecx], 0xb34aa8 */ W32((u32)(r_ecx), 0xb34aa8u);
    /* 00667a97: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00667a9e: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x667aa3u); f_007b4aec();
    /* 00667aa3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00667aa6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00667aad: mov esp, ebp */ r_esp = r_ebp;
    /* 00667aaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667ab0: ret  */ FN_RET(0x00667a64); r_esp += 4; return;
}

void f_00667ab4(void)
{
    FN_ENTER(0x00667ab4);
    /* 00667ab4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667ab5: mov ebp, esp */ r_ebp = r_esp;
    /* 00667ab7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00667ab9: push 0x8e87e4 */ { u32 v = 0x8e87e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00667abe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00667ac4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667ac5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00667acc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00667acf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00667ad2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00667ad5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00667ad8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00667adb: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00667ae0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00667ae7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x667aecu); f_005caba4();
    /* 00667aec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667aed: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00667af0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667af2: je 0x667b2b */ if (fZ) goto L_00667b2b;
L_00667af4:; BB(0x00667af4);
    /* 00667af4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00667afb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00667b02: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00667b05: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00667b0b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667b0e: call 0x667b30 */ r_esp -= 4; W32(r_esp, 0x667b13u); f_00667b30();
    /* 00667b13: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667b16: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00667b1d:; BB(0x00667b1d);
    /* 00667b1d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00667b20: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00667b27: mov esp, ebp */ r_esp = r_ebp;
    /* 00667b29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667b2a: ret  */ FN_RET(0x00667ab4); r_esp += 4; return;
L_00667b2b:; BB(0x00667b2b);
    /* 00667b2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00667b2d: jmp 0x667b1d */ goto L_00667b1d;
}

void f_00667b30(void) /* sub_667B30 */
{
    FN_ENTER(0x00667b30);
    /* 00667b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667b31: mov ebp, esp */ r_ebp = r_esp;
    /* 00667b33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00667b35: push 0x8e8800 */ { u32 v = 0x8e8800u; r_esp -= 4; W32(r_esp, v); }
    /* 00667b3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00667b40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667b41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00667b48: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00667b4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00667b4e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00667b51: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00667b54: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00667b57: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00667b5a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00667b5d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00667b60: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00667b63: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x667b68u); f_007b4b48();
    /* 00667b68: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00667b6f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00667b72: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00667b75: mov dword ptr [ecx], 0xb34aa8 */ W32((u32)(r_ecx), 0xb34aa8u);
    /* 00667b7b: mov eax, dword ptr [0x9c93f4] */ r_eax = R32((u32)(0x9c93f4u));
    /* 00667b80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667b81: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00667b84: call dword ptr [0xb34abc] */ { u32 t = R32((u32)(0xb34abcu)); r_esp -= 4; W32(r_esp, 0x667b8au); call_ind(t); }
    /* 00667b8a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00667b8d: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 00667b90: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 00667b94: mov dword ptr [eax + 0xac], edx */ W32((u32)(r_eax+0xacu), r_edx);
    /* 00667b9a: or ecx, 0xffff0010 */ {  u32 a = r_ecx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00667ba0: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 00667ba4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00667ba7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00667bae: mov esp, ebp */ r_esp = r_ebp;
    /* 00667bb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667bb1: ret 8 */ FN_RET(0x00667b30); r_esp += 12; return;
}

void f_00667b97(void)
{
    FN_ENTER(0x00667b97);
    /* 00667b97: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00667b99: add byte ptr [ecx - 0xffef37], al */ { u32 ad = (u32)(r_ecx+0xff0010c9u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00667b9f: jmp dword ptr [esi - 0x77] */ { u32 t = R32((u32)(r_esi+0xffffff89u)); jmp_ind(t); return; }
}

void f_00667bb4(void) /* sub_667BB4 */
{
    FN_ENTER(0x00667bb4);
    /* 00667bb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00667bb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00667bb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00667bb7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00667bb8: mov edx, ecx */ r_edx = r_ecx;
    /* 00667bba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00667bbc: mov ebx, eax */ r_ebx = r_eax;
    /* 00667bbe: mov esi, edx */ r_esi = r_edx;
L_00667bc0:; BB(0x00667bc0);
    /* 00667bc0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00667bc1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x667bc6u); f_0068d5a8();
    /* 00667bc6: mov edi, eax */ r_edi = r_eax;
    /* 00667bc8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667bcb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667bcd: je 0x667bd9 */ if (fZ) goto L_00667bd9;
L_00667bcf:; BB(0x00667bcf);
    /* 00667bcf: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x667bd4u); f_007a61a4();
    /* 00667bd4: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667bd7: je 0x667bed */ if (fZ) goto L_00667bed;
L_00667bd9:; BB(0x00667bd9);
    /* 00667bd9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00667bda: call 0x825ff4 */ r_esp -= 4; W32(r_esp, 0x667bdfu); f_00825ff4();
    /* 00667bdf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00667be0:; BB(0x00667be0);
    /* 00667be0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00667be3: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00667be6: jl 0x667bc0 */ if ((fS!=fO)) goto L_00667bc0;
L_00667be8:; BB(0x00667be8);
    /* 00667be8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667be9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00667bea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00667beb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00667bec: ret  */ FN_RET(0x00667bb4); r_esp += 4; return;
L_00667bed:; BB(0x00667bed);
    /* 00667bed: mov ecx, dword ptr [0xa95624] */ r_ecx = R32((u32)(0xa95624u));
    /* 00667bf3: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667bf6: je 0x667bd9 */ if (fZ) goto L_00667bd9;
L_00667bf8:; BB(0x00667bf8);
    /* 00667bf8: mov ecx, dword ptr [edi + 0x3f0] */ r_ecx = R32((u32)(r_edi+0x3f0u));
    /* 00667bfe: cmp ecx, dword ptr [0xaafca0] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667c04: jne 0x667bd9 */ if (!fZ) goto L_00667bd9;
L_00667c06:; BB(0x00667c06);
    /* 00667c06: fld dword ptr [esi + 0xac] */ FPUSH(R_F32((u32)(r_esi+0xacu)));
    /* 00667c0c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00667c0e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00667c11: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00667c14: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00667c17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667c18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00667c19: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x667c1eu); f_0078ea50();
    /* 00667c1e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667c21: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 00667c24: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00667c26: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00667c27: jb 0x667bd9 */ if (fC) goto L_00667bd9;
L_00667c29:; BB(0x00667c29);
    /* 00667c29: mov ecx, dword ptr [esi + 0x84] */ r_ecx = R32((u32)(r_esi+0x84u));
    /* 00667c2f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667c31: je 0x667be0 */ if (fZ) goto L_00667be0;
L_00667c33:; BB(0x00667c33);
    /* 00667c33: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00667c34: call 0x825fe0 */ r_esp -= 4; W32(r_esp, 0x667c39u); f_00825fe0();
    /* 00667c39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667c3a: jmp 0x667be0 */ goto L_00667be0;
}

void f_00667c3c(void) /* sub_667C3C */
{
    FN_ENTER(0x00667c3c);
    /* 00667c3c: mov dword ptr [0xa8fc80], 0x3f800000 */ W32((u32)(0xa8fc80u), 0x3f800000u);
    /* 00667c46: mov dword ptr [0xa8fc84], 0x41000000 */ W32((u32)(0xa8fc84u), 0x41000000u);
    /* 00667c50: mov dword ptr [0xa8fc88], 0x3fc00000 */ W32((u32)(0xa8fc88u), 0x3fc00000u);
    /* 00667c5a: ret  */ FN_RET(0x00667c3c); r_esp += 4; return;
}

void f_00667c5c(void) /* sub_667C5C */
{
    FN_ENTER(0x00667c5c);
    /* 00667c5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00667c5d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00667c5f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00667c61: call 0x667c80 */ r_esp -= 4; W32(r_esp, 0x667c66u); f_00667c80();
    /* 00667c66: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00667c6a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00667c6c: jne 0x667c72 */ if (!fZ) goto L_00667c72;
L_00667c6e:; BB(0x00667c6e);
    /* 00667c6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00667c6f: ret 4 */ FN_RET(0x00667c5c); r_esp += 8; return;
L_00667c72:; BB(0x00667c72);
    /* 00667c72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00667c73: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x667c78u); f_005c2f74();
    /* 00667c78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667c79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00667c7a: ret 4 */ FN_RET(0x00667c5c); r_esp += 8; return;
}

void f_00667c80(void) /* sub_667C80 */
{
    FN_ENTER(0x00667c80);
    /* 00667c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00667c83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00667c85: push 0x8e8840 */ { u32 v = 0x8e8840u; r_esp -= 4; W32(r_esp, v); }
    /* 00667c8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00667c90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667c91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00667c98: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00667c9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00667c9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00667ca1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00667ca4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00667ca7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00667caa: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00667cb1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667cb4: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 00667cba: mov dword ptr [eax], 0xb34c48 */ W32((u32)(r_eax), 0xb34c48u);
    /* 00667cc0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667cc2: je 0x667cde */ if (fZ) goto L_00667cde;
L_00667cc4:; BB(0x00667cc4);
    /* 00667cc4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00667cc8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00667ccd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00667cd1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667cd4: mov dword ptr [eax + 0xc8], 0 */ W32((u32)(r_eax+0xc8u), 0x0u);
L_00667cde:; BB(0x00667cde);
    /* 00667cde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667cdf: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x667ce4u); f_007b4e84();
    /* 00667ce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667ce5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667ce8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x667cedu); f_007b9c8c();
    /* 00667ced: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00667cf4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667cf7: add ecx, 0xac */ {  u32 a = r_ecx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00667cfd: call 0x5770ec */ r_esp -= 4; W32(r_esp, 0x667d02u); f_005770ec();
    /* 00667d02: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00667d09: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667d0c: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x667d11u); f_007b4aec();
    /* 00667d11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00667d14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00667d1b: mov esp, ebp */ r_esp = r_ebp;
    /* 00667d1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667d1e: ret  */ FN_RET(0x00667c80); r_esp += 4; return;
}

void f_00667d20(void) /* sub_667D20 */
{
    FN_ENTER(0x00667d20);
    /* 00667d20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00667d21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00667d23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00667d25: call 0x667d44 */ r_esp -= 4; W32(r_esp, 0x667d2au); f_00667d44();
    /* 00667d2a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00667d2e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00667d30: jne 0x667d36 */ if (!fZ) goto L_00667d36;
L_00667d32:; BB(0x00667d32);
    /* 00667d32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00667d33: ret 4 */ FN_RET(0x00667d20); r_esp += 8; return;
L_00667d36:; BB(0x00667d36);
    /* 00667d36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00667d37: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x667d3cu); f_005c2f74();
    /* 00667d3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667d3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00667d3e: ret 4 */ FN_RET(0x00667d20); r_esp += 8; return;
}

void f_00667d44(void) /* sub_667D44 */
{
    FN_ENTER(0x00667d44);
    /* 00667d44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667d45: mov ebp, esp */ r_ebp = r_esp;
    /* 00667d47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00667d49: push 0x8e8880 */ { u32 v = 0x8e8880u; r_esp -= 4; W32(r_esp, v); }
    /* 00667d4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00667d54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667d55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00667d5c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00667d5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00667d62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00667d65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00667d68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00667d6b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00667d6e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00667d75: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667d78: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 00667d7e: mov dword ptr [eax], 0xb34c78 */ W32((u32)(r_eax), 0xb34c78u);
    /* 00667d84: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667d86: je 0x667da2 */ if (fZ) goto L_00667da2;
L_00667d88:; BB(0x00667d88);
    /* 00667d88: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00667d8c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00667d91: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00667d95: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667d98: mov dword ptr [eax + 0xc8], 0 */ W32((u32)(r_eax+0xc8u), 0x0u);
L_00667da2:; BB(0x00667da2);
    /* 00667da2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667da3: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x667da8u); f_007b4e84();
    /* 00667da8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667da9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667dac: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x667db1u); f_007b9c8c();
    /* 00667db1: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00667db8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667dbb: add ecx, 0xac */ {  u32 a = r_ecx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00667dc1: call 0x5770ec */ r_esp -= 4; W32(r_esp, 0x667dc6u); f_005770ec();
    /* 00667dc6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00667dcd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667dd0: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x667dd5u); f_007b4aec();
    /* 00667dd5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00667dd8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00667ddf: mov esp, ebp */ r_esp = r_ebp;
    /* 00667de1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667de2: ret  */ FN_RET(0x00667d44); r_esp += 4; return;
}

void f_00667de4(void) /* sub_667DE4 */
{
    FN_ENTER(0x00667de4);
    /* 00667de4: add ecx, 0xac */ {  u32 a = r_ecx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00667dea: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x667defu); f_005771a4();
    /* 00667def: ret  */ FN_RET(0x00667de4); r_esp += 4; return;
}

void f_00667df0(void) /* sub_667DF0 */
{
    FN_ENTER(0x00667df0);
    /* 00667df0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00667df1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00667df2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667df3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00667df4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00667df7: mov edi, ecx */ r_edi = r_ecx;
    /* 00667df9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00667dfb: mov ecx, edi */ r_ecx = r_edi;
    /* 00667dfd: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00667e02: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00667e07: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x667e0au); call_ind(t); }
    /* 00667e0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667e0c: je 0x667ebf */ if (fZ) goto L_00667ebf;
L_00667e12:; BB(0x00667e12);
    /* 00667e12: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00667e15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667e16: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00667e19: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00667e1b: mov edx, esi */ r_edx = r_esi;
    /* 00667e1d: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x667e22u); f_00830aa0();
    /* 00667e22: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00667e26: fcomp dword ptr [0x939914] */ fx_compare(ST(0), R_F32((u32)(0x939914u))); FPOP();
    /* 00667e2c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00667e2e: lea ebp, [edi + 0xac] */ r_ebp = (u32)(r_edi+0xacu);
    /* 00667e34: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00667e35: jbe 0x667e40 */ if ((fC||fZ)) goto L_00667e40;
L_00667e37:; BB(0x00667e37);
    /* 00667e37: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00667e39: call 0x577234 */ r_esp -= 4; W32(r_esp, 0x667e3eu); f_00577234();
    /* 00667e3e: jmp 0x667e47 */ goto L_00667e47;
L_00667e40:; BB(0x00667e40);
    /* 00667e40: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00667e42: call 0x57723c */ r_esp -= 4; W32(r_esp, 0x667e47u); f_0057723c();
L_00667e47:; BB(0x00667e47);
    /* 00667e47: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x667e4cu); f_006dc358();
    /* 00667e4c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667e4f: jne 0x667e55 */ if (!fZ) goto L_00667e55;
L_00667e51:; BB(0x00667e51);
    /* 00667e51: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00667e53: jmp 0x667e6d */ goto L_00667e6d;
L_00667e55:; BB(0x00667e55);
    /* 00667e55: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00667e57: call 0x577244 */ r_esp -= 4; W32(r_esp, 0x667e5cu); f_00577244();
    /* 00667e5c: mov ebx, eax */ r_ebx = r_eax;
    /* 00667e5e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667e60: je 0x667e6d */ if (fZ) goto L_00667e6d;
L_00667e62:; BB(0x00667e62);
    /* 00667e62: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00667e68: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00667e6a: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x667e6du); call_ind(t); }
L_00667e6d:; BB(0x00667e6d);
    /* 00667e6d: mov ecx, dword ptr [0xa8fc94] */ r_ecx = R32((u32)(0xa8fc94u));
    /* 00667e73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00667e75: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x667e7au); f_005b8624();
    /* 00667e7a: mov ecx, eax */ r_ecx = r_eax;
    /* 00667e7c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x667e81u); f_00829cc8();
    /* 00667e81: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x667e86u); f_0082d7b0();
    /* 00667e86: mov ecx, esi */ r_ecx = r_esi;
    /* 00667e88: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x667e8du); f_0082d838();
    /* 00667e8d: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00667e90: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00667e92: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x667e97u); f_0082d8bc();
    /* 00667e97: mov ecx, dword ptr [0xa8fc94] */ r_ecx = R32((u32)(0xa8fc94u));
    /* 00667e9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00667e9f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x667ea4u); f_005b8610();
    /* 00667ea4: mov ecx, eax */ r_ecx = r_eax;
    /* 00667ea6: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x667eabu); f_00831758();
    /* 00667eab: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x667eb0u); f_0082da80();
    /* 00667eb0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667eb2: je 0x667ebf */ if (fZ) goto L_00667ebf;
L_00667eb4:; BB(0x00667eb4);
    /* 00667eb4: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00667eba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00667ebc: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x667ebfu); call_ind(t); }
L_00667ebf:; BB(0x00667ebf);
    /* 00667ebf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00667ec2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00667ec3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667ec4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00667ec5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00667ec6: ret  */ FN_RET(0x00667df0); r_esp += 4; return;
}

void f_00667ec8(void)
{
    FN_ENTER(0x00667ec8);
    /* 00667ec8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667ec9: mov ebp, esp */ r_ebp = r_esp;
    /* 00667ecb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00667ecd: push 0x8e88a8 */ { u32 v = 0x8e88a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00667ed2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00667ed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667ed9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00667ee0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00667ee3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00667ee6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00667ee9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00667eec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00667eef: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00667ef4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00667efb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x667f00u); f_005caba4();
    /* 00667f00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667f01: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00667f04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667f06: je 0x667f3f */ if (fZ) goto L_00667f3f;
L_00667f08:; BB(0x00667f08);
    /* 00667f08: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00667f0f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00667f16: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00667f19: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00667f1f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667f22: call 0x667f44 */ r_esp -= 4; W32(r_esp, 0x667f27u); f_00667f44();
    /* 00667f27: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00667f2a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00667f31:; BB(0x00667f31);
    /* 00667f31: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00667f34: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00667f3b: mov esp, ebp */ r_esp = r_ebp;
    /* 00667f3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667f3e: ret  */ FN_RET(0x00667ec8); r_esp += 4; return;
L_00667f3f:; BB(0x00667f3f);
    /* 00667f3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00667f41: jmp 0x667f31 */ goto L_00667f31;
}

void f_00667f44(void) /* sub_667F44 */
{
    FN_ENTER(0x00667f44);
    /* 00667f44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667f45: mov ebp, esp */ r_ebp = r_esp;
    /* 00667f47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00667f49: push 0x8e88d8 */ { u32 v = 0x8e88d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00667f4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00667f54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667f55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00667f5c: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00667f5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00667f62: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00667f65: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00667f68: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00667f6b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00667f6e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00667f71: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00667f74: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00667f77: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x667f7cu); f_007b4b48();
    /* 00667f7c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00667f83: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00667f86: mov dword ptr [ecx], 0xb34c48 */ W32((u32)(r_ecx), 0xb34c48u);
    /* 00667f8c: add ecx, 0xac */ {  u32 a = r_ecx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00667f92: call 0x57713c */ r_esp -= 4; W32(r_esp, 0x667f97u); f_0057713c();
    /* 00667f97: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00667f9e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00667fa1: mov eax, dword ptr [0x9c9428] */ r_eax = R32((u32)(0x9c9428u));
    /* 00667fa6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00667fa9: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00667fab: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00667fae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667faf: call dword ptr [ebx + 0x14] */ { u32 t = R32((u32)(r_ebx+0x14u)); r_esp -= 4; W32(r_esp, 0x667fb2u); call_ind(t); }
    /* 00667fb2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00667fb5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00667fb7: push 0x9c9430 */ { u32 v = 0x9c9430u; r_esp -= 4; W32(r_esp, v); }
    /* 00667fbc: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x667fc1u); f_007b9a88();
    /* 00667fc1: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00667fc4: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x667fc9u); f_007b999c();
    /* 00667fc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00667fca: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00667fcd: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x667fd2u); f_007b4f54();
    /* 00667fd2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00667fd5: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00667fd8: mov word ptr [ebp - 0x60], dx */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_edx);
    /* 00667fdc: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 00667fe0: mov word ptr [ebp - 0x5e], cx */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_ecx);
    /* 00667fe4: movzx ebx, word ptr [eax + 4] */ r_ebx = (u32)R16((u32)(r_eax+0x4u));
    /* 00667fe8: mov word ptr [ebp - 0x5c], bx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_ebx);
    /* 00667fec: movzx esi, word ptr [eax + 6] */ r_esi = (u32)R16((u32)(r_eax+0x6u));
    /* 00667ff0: mov word ptr [ebp - 0x5a], si */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_esi);
    /* 00667ff4: movzx edi, word ptr [eax + 8] */ r_edi = (u32)R16((u32)(r_eax+0x8u));
    /* 00667ff8: mov word ptr [ebp - 0x58], di */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_edi);
    /* 00667ffc: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 00668000: mov word ptr [ebp - 0x56], dx */ W16((u32)(r_ebp+0xffffffaau), (u16)r_edx);
    /* 00668004: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00668007: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0066800a: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0066800d: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00668010: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00668013: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00668016: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00668019: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0066801c: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0066801f: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00668022: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00668025: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00668028: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0066802b: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0066802e: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00668031: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00668034: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00668037: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0066803a: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0066803d: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00668040: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00668043: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00668046: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 00668049: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0066804c: mov dword ptr [ebp - 0x3c], 0x42000000 */ W32((u32)(r_ebp+0xffffffc4u), 0x42000000u);
    /* 00668053: mov dword ptr [ebp - 0x38], 0x41a00000 */ W32((u32)(r_ebp+0xffffffc8u), 0x41a00000u);
    /* 0066805a: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 0066805d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066805e: mov dword ptr [ebp - 0x34], 0x41400000 */ W32((u32)(r_ebp+0xffffffccu), 0x41400000u);
    /* 00668065: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x66806au); f_0065f960();
    /* 0066806a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066806b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066806e: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 00668074: add ecx, 0xac */ {  u32 a = r_ecx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066807a: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x66807fu); f_0057739c();
    /* 0066807f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00668082: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668085: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00668088: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066808b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066808e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00668095: mov esp, ebp */ r_esp = r_ebp;
    /* 00668097: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668098: ret 8 */ FN_RET(0x00667f44); r_esp += 12; return;
}

