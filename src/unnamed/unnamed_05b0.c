#include "protos.h"

void f_005b0000(void)
{
    FN_ENTER(0x005b0000);
    /* 005b0000: add byte ptr [ebp - 0x7cf48b40], al */ { u32 ad = (u32)(r_ebp+0x830b74c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b0006: sar bh, 0x89 */ { u32 c = (9u) & 31; u32 a = (u8)(r_ebx>>8); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  } }
    /* 005b0009: or esp, 3 */ {  u32 a = r_esp; u32 b = 0x3u; u32 r = (a | b) & 0xffffffffu; r_esp = r;  }
    /* 005b000c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b000e: jmp 0x5b0087 */ goto L_005b0087;
L_005b0087:; BB(0x005b0087);
    /* 005b0087: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b0089: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b008b: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5b0091u); call_ind(t); }
    /* 005b0091: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0094: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b0095: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0096: ret 4 */ FN_RET(0x005b0000); r_esp += 8; return;
}

void f_005b004e(void)
{
    FN_ENTER(0x005b004e);
    /* 005b004e: sub dword ptr [ecx - 0x24dfdbbc], ecx */ { u32 ad = (u32)(r_ecx+0xdb202444u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 005b0054: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0055: and al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b0057: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005b005b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b005d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005b0060: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005b0065: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0067: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0068: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b006c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b006e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b006f: call dword ptr [ebp + 0x60] */ { u32 t = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, 0x5b0072u); call_ind(t); }
    /* 005b0072: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b0074: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0076: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0078: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b007du); f_0051f62c();
    /* 005b007d: mov dword ptr [ebx + 0x3cc], 0x3c */ W32((u32)(r_ebx+0x3ccu), 0x3cu);
    /* 005b0087: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b0089: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b008b: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5b0091u); call_ind(t); }
    /* 005b0091: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0094: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b0095: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0096: ret 4 */ FN_RET(0x005b004e); r_esp += 8; return;
}

void f_005b005a(void)
{
    FN_ENTER(0x005b005a);
    /* 005b005a: add al, 0x33 */ {  u32 a = (u8)r_eax; u32 b = 0x33u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 005b005c: ror byte ptr [ecx - 0x47dbec], cl */ { u32 ad = (u32)(r_ecx+0xffb82414u); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    UNSUP(0x005b0062, "falls out of decoded code");
}

void f_005b0130(void) /* sub_5B0130 */
{
    FN_ENTER(0x005b0130);
    /* 005b0130: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0131: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b0134: mov edi, ecx */ r_edi = r_ecx;
    /* 005b0136: fld dword ptr [0x92aacc] */ FPUSH(R_F32((u32)(0x92aaccu)));
    /* 005b013c: fadd dword ptr [edi + 0xc0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc0u));
    /* 005b0142: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005b0146: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005b014b: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005b0152: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005b015a: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5b015fu); f_0082d990();
    /* 005b015f: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b0162: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b0165: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b0167: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b016a: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5b016fu); f_00830b74();
    /* 005b016f: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005b0172: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b0174: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b0179u); f_0082d8bc();
    /* 005b0179: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b017c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b017d: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005b0181: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b0183: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5b0188u); f_00830aa0();
    /* 005b0188: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5b018du); f_0082da80();
    /* 005b018d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b0190: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0192: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0193: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b0198u); f_0050b510();
    /* 005b0198: mov edi, eax */ r_edi = r_eax;
    /* 005b019a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b019d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b019f: je 0x5b0209 */ if (fZ) goto L_005b0209;
L_005b01a1:; BB(0x005b01a1);
    /* 005b01a1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b01a3: mov ecx, edi */ r_ecx = r_edi;
    /* 005b01a5: call 0x508f08 */ r_esp -= 4; W32(r_esp, 0x5b01aau); f_00508f08();
    /* 005b01aa: fld dword ptr [0x92aabc] */ FPUSH(R_F32((u32)(0x92aabcu)));
    /* 005b01b0: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005b01b4: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005b01b9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b01be: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005b01c2: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005b01c6: fistp qword ptr [esp + 0x1c] */ W64((u32)(r_esp+0x1cu), (u64)fx_int64(ST(0))); FPOP();
    /* 005b01ca: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 005b01ce: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 005b01d2: mov dword ptr [edi + 0x44], 0x40c00000 */ W32((u32)(r_edi+0x44u), 0x40c00000u);
    /* 005b01d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b01da: mov ecx, edi */ r_ecx = r_edi;
    /* 005b01dc: mov dword ptr [edi + 0x48], 0x40c00000 */ W32((u32)(r_edi+0x48u), 0x40c00000u);
    /* 005b01e3: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x5b01e8u); f_00508ee4();
    /* 005b01e8: push 0x3eeb851f */ { u32 v = 0x3eeb851fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b01ed: mov ecx, edi */ r_ecx = r_edi;
    /* 005b01ef: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x5b01f4u); f_00508dac();
    /* 005b01f4: movzx edx, word ptr [edi + 0x2e] */ r_edx = (u32)R16((u32)(r_edi+0x2eu));
    /* 005b01f8: mov dword ptr [edi + 0x64], 0x3ee04189 */ W32((u32)(r_edi+0x64u), 0x3ee04189u);
    /* 005b01ff: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005b0205: mov word ptr [edi + 0x2e], dx */ W16((u32)(r_edi+0x2eu), (u16)r_edx);
L_005b0209:; BB(0x005b0209);
    /* 005b0209: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b020c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b020d: ret  */ FN_RET(0x005b0130); r_esp += 4; return;
}

void f_005b0210(void) /* sub_5B0210 */
{
    FN_ENTER(0x005b0210);
    /* 005b0210: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0211: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0212: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b0213: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b0216: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b0218: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005b021c: lea edi, [ebp + 0x458] */ r_edi = (u32)(r_ebp+0x458u);
    /* 005b0222: lea esi, [ebp + 0x464] */ r_esi = (u32)(r_ebp+0x464u);
    /* 005b0228: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b022b: je 0x5b072c */ if (fZ) goto L_005b072c;
L_005b0231:; BB(0x005b0231);
    /* 005b0231: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0234: je 0x5b05a4 */ if (fZ) goto L_005b05a4;
L_005b023a:; BB(0x005b023a);
    /* 005b023a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b023c: jne 0x5b058b */ if (!fZ) goto L_005b058b;
L_005b0242:; BB(0x005b0242);
    /* 005b0242: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0244: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5b0249u); f_007aa094();
    /* 005b0249: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b024b: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x5b0250u); f_00521238();
    /* 005b0250: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0252: je 0x5b0694 */ if (fZ) goto L_005b0694;
L_005b0258:; BB(0x005b0258);
    /* 005b0258: mov eax, dword ptr [ebp + 0x438] */ r_eax = R32((u32)(r_ebp+0x438u));
    /* 005b025e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0260: jne 0x5b0325 */ if (!fZ) goto L_005b0325;
L_005b0266:; BB(0x005b0266);
    /* 005b0266: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 005b026c: mov dword ptr [ebp + 0x438], 1 */ W32((u32)(r_ebp+0x438u), 0x1u);
    /* 005b0276: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 005b0279: mov dword ptr [ebp + 0x458], eax */ W32((u32)(r_ebp+0x458u), r_eax);
    /* 005b027f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0280: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0281: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005b0284: mov dword ptr [ebp + 0x45c], edx */ W32((u32)(r_ebp+0x45cu), r_edx);
    /* 005b028a: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 005b028d: mov dword ptr [ebp + 0x460], eax */ W32((u32)(r_ebp+0x460u), r_eax);
    /* 005b0293: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0295: call 0x5b0844 */ r_esp -= 4; W32(r_esp, 0x5b029au); f_005b0844();
    /* 005b029a: fstp dword ptr [ebp + 0x448] */ W_F32((u32)(r_ebp+0x448u), ST(0)); FPOP();
    /* 005b02a0: push 0x42a00000 */ { u32 v = 0x42a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b02a5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b02a7: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b02ac: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x5b02b1u); f_00520c08();
    /* 005b02b1: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 005b02b4: fstp dword ptr [ebp + 0x44c] */ W_F32((u32)(r_ebp+0x44cu), ST(0)); FPOP();
    /* 005b02ba: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5b02bfu); f_0082dcbc();
    /* 005b02bf: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 005b02c2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b02c5: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005b02cd: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5b02d2u); f_0082ddd8();
    /* 005b02d2: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 005b02d8: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 005b02db: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 005b02de: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 005b02e1: fsub dword ptr [ebp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x40u));
    /* 005b02e4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005b02e6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005b02ea: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005b02ee: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 005b02f2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b02f5: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005b02fd: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b0301: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0302: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0303: call 0x7829cc */ r_esp -= 4; W32(r_esp, 0x5b0308u); f_007829cc();
    /* 005b0308: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b030b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b030d: je 0x5b031b */ if (fZ) goto L_005b031b;
L_005b030f:; BB(0x005b030f);
    /* 005b030f: mov dword ptr [ebp + 0x440], 0xffffffff */ W32((u32)(r_ebp+0x440u), 0xffffffffu);
    /* 005b0319: jmp 0x5b0325 */ goto L_005b0325;
L_005b031b:; BB(0x005b031b);
    /* 005b031b: mov dword ptr [ebp + 0x440], 1 */ W32((u32)(r_ebp+0x440u), 0x1u);
L_005b0325:; BB(0x005b0325);
    /* 005b0325: add dword ptr [ebp + 0x430], 1 */ { u32 ad = (u32)(r_ebp+0x430u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b032c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b032e: call 0x5afee4 */ r_esp -= 4; W32(r_esp, 0x5b0333u); f_005afee4();
    /* 005b0333: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 005b0339: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b033b: jle 0x5b06c3 */ if ((fZ||fS!=fO)) goto L_005b06c3;
L_005b0341:; BB(0x005b0341);
    /* 005b0341: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b0344: mov dword ptr [ebp + 0x43c], eax */ W32((u32)(r_ebp+0x43cu), r_eax);
    /* 005b034a: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 005b0350: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b0352: jle 0x5b06ac */ if ((fZ||fS!=fO)) goto L_005b06ac;
L_005b0358:; BB(0x005b0358);
    /* 005b0358: fld dword ptr [ebp + 0x448] */ FPUSH(R_F32((u32)(r_ebp+0x448u)));
    /* 005b035e: fsub dword ptr [0x92aa9c] */ ST(0) = ST(0) - R_F32((u32)(0x92aa9cu));
    /* 005b0364: fstp dword ptr [ebp + 0x448] */ W_F32((u32)(r_ebp+0x448u), ST(0)); FPOP();
L_005b036a:; BB(0x005b036a);
    /* 005b036a: mov eax, dword ptr [ebp + 0x438] */ r_eax = R32((u32)(r_ebp+0x438u));
    /* 005b0370: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0373: jne 0x5b0434 */ if (!fZ) goto L_005b0434;
L_005b0379:; BB(0x005b0379);
    /* 005b0379: push 0x3df5c28f */ { u32 v = 0x3df5c28fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b037e: mov dword ptr [ebp + 0x414], 0x3f333333 */ W32((u32)(r_ebp+0x414u), 0x3f333333u);
    /* 005b0388: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b038a: call 0x5b07d8 */ r_esp -= 4; W32(r_esp, 0x5b038fu); f_005b07d8();
    /* 005b038f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0390: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0391: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0393: call 0x5b0844 */ r_esp -= 4; W32(r_esp, 0x5b0398u); f_005b0844();
    /* 005b0398: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b039a: fld dword ptr [ebp + 0x46c] */ FPUSH(R_F32((u32)(r_ebp+0x46cu)));
    /* 005b03a0: fld dword ptr [ebp + 0x464] */ FPUSH(R_F32((u32)(r_ebp+0x464u)));
    /* 005b03a6: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 005b03ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b03ae: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005b03b2: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005b03b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005b03b8: jl 0x5b069d */ if ((fS!=fO)) goto L_005b069d;
L_005b03be:; BB(0x005b03be);
    /* 005b03be: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005b03c2: fchs  */ ST(0) = -ST(0);
    /* 005b03c4: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_005b03c8:; BB(0x005b03c8);
    /* 005b03c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b03ca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b03cc: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x5b03d1u); f_00520bb8();
    /* 005b03d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b03d3: je 0x5b03de */ if (fZ) goto L_005b03de;
L_005b03d5:; BB(0x005b03d5);
    /* 005b03d5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b03d7: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5b03dcu); f_00520bdc();
    /* 005b03dc: jmp 0x5b03e5 */ goto L_005b03e5;
L_005b03de:; BB(0x005b03de);
    /* 005b03de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b03e0: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x5b03e5u); f_00520be8();
L_005b03e5:; BB(0x005b03e5);
    /* 005b03e5: mov eax, dword ptr [ebp + 0x418] */ r_eax = R32((u32)(r_ebp+0x418u));
    /* 005b03eb: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b03ee: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 005b03f2: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005b03f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b03f8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b03fb: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005b03ff: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b0403: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0405: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x5b040au); f_005207c4();
    /* 005b040a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005b040c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b040e: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x5b0413u); f_00520bb8();
    /* 005b0413: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0415: je 0x5b04ec */ if (fZ) goto L_005b04ec;
L_005b041b:; BB(0x005b041b);
    /* 005b041b: mov dword ptr [ebp + 0x434], 0 */ W32((u32)(r_ebp+0x434u), 0x0u);
    /* 005b0425: mov dword ptr [ebp + 0x438], 2 */ W32((u32)(r_ebp+0x438u), 0x2u);
    /* 005b042f: jmp 0x5b04ec */ goto L_005b04ec;
L_005b0434:; BB(0x005b0434);
    /* 005b0434: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0437: jne 0x5b04ec */ if (!fZ) goto L_005b04ec;
L_005b043d:; BB(0x005b043d);
    /* 005b043d: push 0x3df5c28f */ { u32 v = 0x3df5c28fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0442: mov dword ptr [ebp + 0x414], 0x3f000000 */ W32((u32)(r_ebp+0x414u), 0x3f000000u);
    /* 005b044c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b044e: call 0x5b07d8 */ r_esp -= 4; W32(r_esp, 0x5b0453u); f_005b07d8();
    /* 005b0453: mov eax, dword ptr [ebp + 0x434] */ r_eax = R32((u32)(r_ebp+0x434u));
    /* 005b0459: mov esi, dword ptr [ebp + 0x60] */ r_esi = R32((u32)(r_ebp+0x60u));
    /* 005b045c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b045f: mov dword ptr [ebp + 0x434], eax */ W32((u32)(r_ebp+0x434u), r_eax);
    /* 005b0465: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b0468: jge 0x5b0475 */ if ((fS==fO)) goto L_005b0475;
L_005b046a:; BB(0x005b046a);
    /* 005b046a: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 005b0470: shl eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b0473: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_005b0475:; BB(0x005b0475);
    /* 005b0475: mov ecx, esi */ r_ecx = r_esi;
    /* 005b0477: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5b047cu); f_0082dcbc();
    /* 005b047c: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005b0480: mov ecx, esi */ r_ecx = r_esi;
    /* 005b0482: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5b0487u); f_0082ddd8();
    /* 005b0487: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005b048b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b048d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b048f: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x5b0494u); f_00520bb8();
    /* 005b0494: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0496: je 0x5b04ab */ if (fZ) goto L_005b04ab;
L_005b0498:; BB(0x005b0498);
    /* 005b0498: mov dword ptr [ebp + 0x434], 0 */ W32((u32)(r_ebp+0x434u), 0x0u);
    /* 005b04a2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b04a4: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5b04a9u); f_00520bdc();
    /* 005b04a9: jmp 0x5b04b2 */ goto L_005b04b2;
L_005b04ab:; BB(0x005b04ab);
    /* 005b04ab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b04ad: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x5b04b2u); f_00520be8();
L_005b04b2:; BB(0x005b04b2);
    /* 005b04b2: mov eax, dword ptr [ebp + 0x418] */ r_eax = R32((u32)(r_ebp+0x418u));
    /* 005b04b8: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b04bb: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005b04bf: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 005b04c3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b04c5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b04c8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005b04cc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b04d0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b04d2: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x5b04d7u); f_005207c4();
    /* 005b04d7: mov eax, dword ptr [ebp + 0x434] */ r_eax = R32((u32)(r_ebp+0x434u));
    /* 005b04dd: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b04e0: jl 0x5b04ec */ if ((fS!=fO)) goto L_005b04ec;
L_005b04e2:; BB(0x005b04e2);
    /* 005b04e2: mov dword ptr [ebp + 0x438], 0 */ W32((u32)(r_ebp+0x438u), 0x0u);
L_005b04ec:; BB(0x005b04ec);
    /* 005b04ec: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 005b04ef: fsub dword ptr [ebp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x44u));
    /* 005b04f2: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 005b04f5: fsub dword ptr [ebp + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x4cu));
    /* 005b04f8: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005b04fa: fmul qword ptr [0x92a918] */ ST(0) = ST(0) * R_F64((u32)(0x92a918u));
    /* 005b0500: fdiv qword ptr [0x92a910] */ ST(0) = ST(0) / R_F64((u32)(0x92a910u));
    /* 005b0506: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005b050a: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005b050f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b0514: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005b0518: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005b051c: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005b0520: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005b0524: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005b0528: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 005b052d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b052e: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b0531: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5b0536u); f_007a8c74();
    /* 005b0536: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0539: fld dword ptr [ebp + 0x418] */ FPUSH(R_F32((u32)(r_ebp+0x418u)));
    /* 005b053f: fmul dword ptr [0x92aaec] */ ST(0) = ST(0) * R_F32((u32)(0x92aaecu));
    /* 005b0545: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 005b054b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005b054e: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 005b0551: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0553: call 0x5ae68c */ r_esp -= 4; W32(r_esp, 0x5b0558u); f_005ae68c();
    /* 005b0558: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b055b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b055d: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5b0563u); call_ind(t); }
    /* 005b0563: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 005b0569: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005b056c: test edx, 0x380000 */ {  u32 a = r_edx; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0572: je 0x5b0694 */ if (fZ) goto L_005b0694;
L_005b0578:; BB(0x005b0578);
    /* 005b0578: mov dword ptr [ebp + 0x43c], 0x14 */ W32((u32)(r_ebp+0x43cu), 0x14u);
    /* 005b0582: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0585: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0586: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b0587: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b0588: ret 4 */ FN_RET(0x005b0210); r_esp += 8; return;
L_005b058b:; BB(0x005b058b);
    /* 005b058b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b058e: jne 0x5b0694 */ if (!fZ) goto L_005b0694;
L_005b0594:; BB(0x005b0594);
    /* 005b0594: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0596: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x5b059bu); f_00520be8();
    /* 005b059b: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b059e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b059f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b05a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b05a1: ret 4 */ FN_RET(0x005b0210); r_esp += 8; return;
L_005b05a4:; BB(0x005b05a4);
    /* 005b05a4: mov edx, dword ptr [ebp + 0x398] */ r_edx = R32((u32)(r_ebp+0x398u));
    /* 005b05aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b05ac: je 0x5b071a */ if (fZ) goto L_005b071a;
L_005b05b2:; BB(0x005b05b2);
    /* 005b05b2: mov eax, dword ptr [ebp + 0x430] */ r_eax = R32((u32)(r_ebp+0x430u));
    /* 005b05b8: cmp eax, 0x1c2 */ {  u32 a = r_eax; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b05bd: jg 0x5b066f */ if ((!fZ&&fS==fO)) goto L_005b066f;
L_005b05c3:; BB(0x005b05c3);
    /* 005b05c3: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b05c6: jle 0x5b0694 */ if ((fZ||fS!=fO)) goto L_005b0694;
L_005b05cc:; BB(0x005b05cc);
    /* 005b05cc: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 005b05cf: fsub dword ptr [edx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x38u));
    /* 005b05d2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005b05d4: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 005b05d7: fsub dword ptr [edx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x40u));
    /* 005b05da: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005b05dc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005b05de: fcom dword ptr [0xa74918] */ fx_compare(ST(0), R_F32((u32)(0xa74918u))); 
    /* 005b05e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b05e6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b05e7: jae 0x5b065d */ if (!fC) goto L_005b065d;
L_005b05e9:; BB(0x005b05e9);
    /* 005b05e9: fcomp dword ptr [0xa7491c] */ fx_compare(ST(0), R_F32((u32)(0xa7491cu))); FPOP();
    /* 005b05ef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b05f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b05f2: jae 0x5b0606 */ if (!fC) goto L_005b0606;
L_005b05f4:; BB(0x005b05f4);
    /* 005b05f4: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005b05f6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b05f8: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b05fdu); f_0051f62c();
    /* 005b05fd: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0601: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b0602: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b0603: ret 4 */ FN_RET(0x005b0210); r_esp += 8; return;
L_005b0606:; BB(0x005b0606);
    /* 005b0606: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 005b0609: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5b060eu); f_0082dcbc();
    /* 005b060e: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005b0612: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 005b0618: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005b061b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5b0620u); f_0082ddd8();
    /* 005b0620: fmul dword ptr [ebp + 0x46c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x46cu));
    /* 005b0626: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 005b062a: fmul dword ptr [ebp + 0x464] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x464u));
    /* 005b0630: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005b0632: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005b0636: mov ecx, 0x6aaa */ r_ecx = 0x6aaau;
    /* 005b063b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5b0640u); f_0082ddd8();
    /* 005b0640: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 005b0644: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005b0646: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b0648: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b0649: jae 0x5b0694 */ if (!fC) goto L_005b0694;
L_005b064b:; BB(0x005b064b);
    /* 005b064b: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005b064d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b064f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b0654u); f_0051f62c();
    /* 005b0654: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0657: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0658: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b0659: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b065a: ret 4 */ FN_RET(0x005b0210); r_esp += 8; return;
L_005b065d:; BB(0x005b065d);
    /* 005b065d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b065f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0661: call 0x5b08a8 */ r_esp -= 4; W32(r_esp, 0x5b0666u); f_005b08a8();
    /* 005b0666: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0669: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b066a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b066b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b066c: ret 4 */ FN_RET(0x005b0210); r_esp += 8; return;
L_005b066f:; BB(0x005b066f);
    /* 005b066f: mov dword ptr [ebp + 0x430], 0 */ W32((u32)(r_ebp+0x430u), 0x0u);
    /* 005b0679: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b067b: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5b0680u); f_007751b0();
    /* 005b0680: fcomp dword ptr [0x92aaa4] */ fx_compare(ST(0), R_F32((u32)(0x92aaa4u))); FPOP();
    /* 005b0686: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b0688: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b0689: jae 0x5b0694 */ if (!fC) goto L_005b0694;
L_005b068b:; BB(0x005b068b);
    /* 005b068b: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005b068d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b068f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b0694u); f_0051f62c();
L_005b0694:; BB(0x005b0694);
    /* 005b0694: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0697: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0698: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b0699: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b069a: ret 4 */ FN_RET(0x005b0210); r_esp += 8; return;
L_005b069d:; BB(0x005b069d);
    /* 005b069d: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 005b06a1: fchs  */ ST(0) = -ST(0);
    /* 005b06a3: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005b06a7: jmp 0x5b03c8 */ goto L_005b03c8;
L_005b06ac:; BB(0x005b06ac);
    /* 005b06ac: fld dword ptr [0x92aa9c] */ FPUSH(R_F32((u32)(0x92aa9cu)));
    /* 005b06b2: fadd dword ptr [ebp + 0x448] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x448u));
    /* 005b06b8: fstp dword ptr [ebp + 0x448] */ W_F32((u32)(r_ebp+0x448u), ST(0)); FPOP();
    /* 005b06be: jmp 0x5b036a */ goto L_005b036a;
L_005b06c3:; BB(0x005b06c3);
    /* 005b06c3: fld dword ptr [0x92aaa0] */ FPUSH(R_F32((u32)(0x92aaa0u)));
    /* 005b06c9: fld dword ptr [ebp + 0x448] */ FPUSH(R_F32((u32)(r_ebp+0x448u)));
    /* 005b06cf: fld dword ptr [ebp + 0x44c] */ FPUSH(R_F32((u32)(r_ebp+0x44cu)));
    /* 005b06d5: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 005b06d7: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 005b06d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b06db: mov edx, dword ptr [ebp + 0x44c] */ r_edx = R32((u32)(r_ebp+0x44cu));
    /* 005b06e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b06e2: jbe 0x5b06f3 */ if ((fC||fZ)) goto L_005b06f3;
L_005b06e4:; BB(0x005b06e4);
    /* 005b06e4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b06e6: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 005b06e8: fstp dword ptr [ebp + 0x448] */ W_F32((u32)(r_ebp+0x448u), ST(0)); FPOP();
    /* 005b06ee: jmp 0x5b036a */ goto L_005b036a;
L_005b06f3:; BB(0x005b06f3);
    /* 005b06f3: fcomp dword ptr [0x92aaac] */ fx_compare(ST(0), R_F32((u32)(0x92aaacu))); FPOP();
    /* 005b06f9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b06fb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b06fc: jae 0x5b070b */ if (!fC) goto L_005b070b;
L_005b06fe:; BB(0x005b06fe);
    /* 005b06fe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005b0700: fstp dword ptr [ebp + 0x448] */ W_F32((u32)(r_ebp+0x448u), ST(0)); FPOP();
    /* 005b0706: jmp 0x5b036a */ goto L_005b036a;
L_005b070b:; BB(0x005b070b);
    /* 005b070b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005b070d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b070f: mov dword ptr [ebp + 0x448], edx */ W32((u32)(r_ebp+0x448u), r_edx);
    /* 005b0715: jmp 0x5b036a */ goto L_005b036a;
L_005b071a:; BB(0x005b071a);
    /* 005b071a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b071c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b071e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b0723u); f_0051f62c();
    /* 005b0723: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0726: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0727: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b0728: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b0729: ret 4 */ FN_RET(0x005b0210); r_esp += 8; return;
L_005b072c:; BB(0x005b072c);
    /* 005b072c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005b072e: mov eax, 1 */ r_eax = 0x1u;
    /* 005b0733: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005b073a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b073c: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5b0741u); f_0051f664();
    /* 005b0741: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b0744: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0746: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5b074cu); call_ind(t); }
    /* 005b074c: mov dword ptr [ebp + 0x414], 0x3f333333 */ W32((u32)(r_ebp+0x414u), 0x3f333333u);
    /* 005b0756: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b0758: mov dword ptr [ebp + 0x430], eax */ W32((u32)(r_ebp+0x430u), r_eax);
    /* 005b075e: mov dword ptr [ebp + 0x434], eax */ W32((u32)(r_ebp+0x434u), r_eax);
    /* 005b0764: mov dword ptr [ebp + 0x448], 0 */ W32((u32)(r_ebp+0x448u), 0x0u);
    /* 005b076e: mov dword ptr [ebp + 0x438], eax */ W32((u32)(r_ebp+0x438u), r_eax);
    /* 005b0774: mov dword ptr [ebp + 0x43c], eax */ W32((u32)(r_ebp+0x43cu), r_eax);
    /* 005b077a: mov dword ptr [ebp + 0x440], eax */ W32((u32)(r_ebp+0x440u), r_eax);
    /* 005b0780: mov dword ptr [ebp + 0x44c], 0 */ W32((u32)(r_ebp+0x44cu), 0x0u);
    /* 005b078a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b078c: mov dword ptr [ebp + 0x458], 0 */ W32((u32)(r_ebp+0x458u), 0x0u);
    /* 005b0796: mov dword ptr [ebp + 0x45c], 0 */ W32((u32)(r_ebp+0x45cu), 0x0u);
    /* 005b07a0: mov dword ptr [ebp + 0x460], 0 */ W32((u32)(r_ebp+0x460u), 0x0u);
    /* 005b07aa: mov dword ptr [ebp + 0x464], 0 */ W32((u32)(r_ebp+0x464u), 0x0u);
    /* 005b07b4: mov dword ptr [ebp + 0x468], 0 */ W32((u32)(r_ebp+0x468u), 0x0u);
    /* 005b07be: mov dword ptr [ebp + 0x46c], 0 */ W32((u32)(r_ebp+0x46cu), 0x0u);
    /* 005b07c8: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5b07cdu); f_00520bdc();
    /* 005b07cd: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b07d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b07d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b07d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b07d3: ret 4 */ FN_RET(0x005b0210); r_esp += 8; return;
}

void f_005b0220(void)
{
    FN_ENTER(0x005b0220);
    /* 005b0220: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b0222: lea esi, [ebp + 0x464] */ r_esi = (u32)(r_ebp+0x464u);
    /* 005b0228: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b022b: je 0x5b072c */ if (fZ) goto L_005b072c;
L_005b0231:; BB(0x005b0231);
    /* 005b0231: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0234: je 0x5b05a4 */ if (fZ) goto L_005b05a4;
L_005b023a:; BB(0x005b023a);
    /* 005b023a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b023c: jne 0x5b058b */ if (!fZ) goto L_005b058b;
L_005b0242:; BB(0x005b0242);
    /* 005b0242: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0244: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5b0249u); f_007aa094();
    /* 005b0249: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b024b: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x5b0250u); f_00521238();
    /* 005b0250: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0252: je 0x5b0694 */ if (fZ) goto L_005b0694;
L_005b0258:; BB(0x005b0258);
    /* 005b0258: mov eax, dword ptr [ebp + 0x438] */ r_eax = R32((u32)(r_ebp+0x438u));
    /* 005b025e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0260: jne 0x5b0325 */ if (!fZ) goto L_005b0325;
L_005b0266:; BB(0x005b0266);
    /* 005b0266: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 005b026c: mov dword ptr [ebp + 0x438], 1 */ W32((u32)(r_ebp+0x438u), 0x1u);
    /* 005b0276: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 005b0279: mov dword ptr [ebp + 0x458], eax */ W32((u32)(r_ebp+0x458u), r_eax);
    /* 005b027f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0280: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0281: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005b0284: mov dword ptr [ebp + 0x45c], edx */ W32((u32)(r_ebp+0x45cu), r_edx);
    /* 005b028a: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 005b028d: mov dword ptr [ebp + 0x460], eax */ W32((u32)(r_ebp+0x460u), r_eax);
    /* 005b0293: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0295: call 0x5b0844 */ r_esp -= 4; W32(r_esp, 0x5b029au); f_005b0844();
    /* 005b029a: fstp dword ptr [ebp + 0x448] */ W_F32((u32)(r_ebp+0x448u), ST(0)); FPOP();
    /* 005b02a0: push 0x42a00000 */ { u32 v = 0x42a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b02a5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b02a7: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b02ac: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x5b02b1u); f_00520c08();
    /* 005b02b1: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 005b02b4: fstp dword ptr [ebp + 0x44c] */ W_F32((u32)(r_ebp+0x44cu), ST(0)); FPOP();
    /* 005b02ba: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5b02bfu); f_0082dcbc();
    /* 005b02bf: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 005b02c2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b02c5: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005b02cd: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5b02d2u); f_0082ddd8();
    /* 005b02d2: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 005b02d8: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 005b02db: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 005b02de: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 005b02e1: fsub dword ptr [ebp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x40u));
    /* 005b02e4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005b02e6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005b02ea: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005b02ee: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 005b02f2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b02f5: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005b02fd: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b0301: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0302: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0303: call 0x7829cc */ r_esp -= 4; W32(r_esp, 0x5b0308u); f_007829cc();
    /* 005b0308: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b030b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b030d: je 0x5b031b */ if (fZ) goto L_005b031b;
L_005b030f:; BB(0x005b030f);
    /* 005b030f: mov dword ptr [ebp + 0x440], 0xffffffff */ W32((u32)(r_ebp+0x440u), 0xffffffffu);
    /* 005b0319: jmp 0x5b0325 */ goto L_005b0325;
L_005b031b:; BB(0x005b031b);
    /* 005b031b: mov dword ptr [ebp + 0x440], 1 */ W32((u32)(r_ebp+0x440u), 0x1u);
L_005b0325:; BB(0x005b0325);
    /* 005b0325: add dword ptr [ebp + 0x430], 1 */ { u32 ad = (u32)(r_ebp+0x430u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b032c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b032e: call 0x5afee4 */ r_esp -= 4; W32(r_esp, 0x5b0333u); f_005afee4();
    /* 005b0333: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 005b0339: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b033b: jle 0x5b06c3 */ if ((fZ||fS!=fO)) goto L_005b06c3;
L_005b0341:; BB(0x005b0341);
    /* 005b0341: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b0344: mov dword ptr [ebp + 0x43c], eax */ W32((u32)(r_ebp+0x43cu), r_eax);
    /* 005b034a: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 005b0350: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b0352: jle 0x5b06ac */ if ((fZ||fS!=fO)) goto L_005b06ac;
L_005b0358:; BB(0x005b0358);
    /* 005b0358: fld dword ptr [ebp + 0x448] */ FPUSH(R_F32((u32)(r_ebp+0x448u)));
    /* 005b035e: fsub dword ptr [0x92aa9c] */ ST(0) = ST(0) - R_F32((u32)(0x92aa9cu));
    /* 005b0364: fstp dword ptr [ebp + 0x448] */ W_F32((u32)(r_ebp+0x448u), ST(0)); FPOP();
L_005b036a:; BB(0x005b036a);
    /* 005b036a: mov eax, dword ptr [ebp + 0x438] */ r_eax = R32((u32)(r_ebp+0x438u));
    /* 005b0370: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0373: jne 0x5b0434 */ if (!fZ) goto L_005b0434;
L_005b0379:; BB(0x005b0379);
    /* 005b0379: push 0x3df5c28f */ { u32 v = 0x3df5c28fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b037e: mov dword ptr [ebp + 0x414], 0x3f333333 */ W32((u32)(r_ebp+0x414u), 0x3f333333u);
    /* 005b0388: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b038a: call 0x5b07d8 */ r_esp -= 4; W32(r_esp, 0x5b038fu); f_005b07d8();
    /* 005b038f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0390: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0391: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0393: call 0x5b0844 */ r_esp -= 4; W32(r_esp, 0x5b0398u); f_005b0844();
    /* 005b0398: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b039a: fld dword ptr [ebp + 0x46c] */ FPUSH(R_F32((u32)(r_ebp+0x46cu)));
    /* 005b03a0: fld dword ptr [ebp + 0x464] */ FPUSH(R_F32((u32)(r_ebp+0x464u)));
    /* 005b03a6: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 005b03ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b03ae: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005b03b2: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005b03b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005b03b8: jl 0x5b069d */ if ((fS!=fO)) goto L_005b069d;
L_005b03be:; BB(0x005b03be);
    /* 005b03be: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005b03c2: fchs  */ ST(0) = -ST(0);
    /* 005b03c4: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_005b03c8:; BB(0x005b03c8);
    /* 005b03c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b03ca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b03cc: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x5b03d1u); f_00520bb8();
    /* 005b03d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b03d3: je 0x5b03de */ if (fZ) goto L_005b03de;
L_005b03d5:; BB(0x005b03d5);
    /* 005b03d5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b03d7: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5b03dcu); f_00520bdc();
    /* 005b03dc: jmp 0x5b03e5 */ goto L_005b03e5;
L_005b03de:; BB(0x005b03de);
    /* 005b03de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b03e0: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x5b03e5u); f_00520be8();
L_005b03e5:; BB(0x005b03e5);
    /* 005b03e5: mov eax, dword ptr [ebp + 0x418] */ r_eax = R32((u32)(r_ebp+0x418u));
    /* 005b03eb: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b03ee: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 005b03f2: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005b03f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b03f8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b03fb: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005b03ff: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b0403: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0405: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x5b040au); f_005207c4();
    /* 005b040a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005b040c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b040e: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x5b0413u); f_00520bb8();
    /* 005b0413: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0415: je 0x5b04ec */ if (fZ) goto L_005b04ec;
L_005b041b:; BB(0x005b041b);
    /* 005b041b: mov dword ptr [ebp + 0x434], 0 */ W32((u32)(r_ebp+0x434u), 0x0u);
    /* 005b0425: mov dword ptr [ebp + 0x438], 2 */ W32((u32)(r_ebp+0x438u), 0x2u);
    /* 005b042f: jmp 0x5b04ec */ goto L_005b04ec;
L_005b0434:; BB(0x005b0434);
    /* 005b0434: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0437: jne 0x5b04ec */ if (!fZ) goto L_005b04ec;
L_005b043d:; BB(0x005b043d);
    /* 005b043d: push 0x3df5c28f */ { u32 v = 0x3df5c28fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0442: mov dword ptr [ebp + 0x414], 0x3f000000 */ W32((u32)(r_ebp+0x414u), 0x3f000000u);
    /* 005b044c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b044e: call 0x5b07d8 */ r_esp -= 4; W32(r_esp, 0x5b0453u); f_005b07d8();
    /* 005b0453: mov eax, dword ptr [ebp + 0x434] */ r_eax = R32((u32)(r_ebp+0x434u));
    /* 005b0459: mov esi, dword ptr [ebp + 0x60] */ r_esi = R32((u32)(r_ebp+0x60u));
    /* 005b045c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b045f: mov dword ptr [ebp + 0x434], eax */ W32((u32)(r_ebp+0x434u), r_eax);
    /* 005b0465: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b0468: jge 0x5b0475 */ if ((fS==fO)) goto L_005b0475;
L_005b046a:; BB(0x005b046a);
    /* 005b046a: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 005b0470: shl eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b0473: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_005b0475:; BB(0x005b0475);
    /* 005b0475: mov ecx, esi */ r_ecx = r_esi;
    /* 005b0477: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5b047cu); f_0082dcbc();
    /* 005b047c: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005b0480: mov ecx, esi */ r_ecx = r_esi;
    /* 005b0482: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5b0487u); f_0082ddd8();
    /* 005b0487: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005b048b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b048d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b048f: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x5b0494u); f_00520bb8();
    /* 005b0494: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0496: je 0x5b04ab */ if (fZ) goto L_005b04ab;
L_005b0498:; BB(0x005b0498);
    /* 005b0498: mov dword ptr [ebp + 0x434], 0 */ W32((u32)(r_ebp+0x434u), 0x0u);
    /* 005b04a2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b04a4: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5b04a9u); f_00520bdc();
    /* 005b04a9: jmp 0x5b04b2 */ goto L_005b04b2;
L_005b04ab:; BB(0x005b04ab);
    /* 005b04ab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b04ad: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x5b04b2u); f_00520be8();
L_005b04b2:; BB(0x005b04b2);
    /* 005b04b2: mov eax, dword ptr [ebp + 0x418] */ r_eax = R32((u32)(r_ebp+0x418u));
    /* 005b04b8: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b04bb: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005b04bf: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 005b04c3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b04c5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b04c8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005b04cc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b04d0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b04d2: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x5b04d7u); f_005207c4();
    /* 005b04d7: mov eax, dword ptr [ebp + 0x434] */ r_eax = R32((u32)(r_ebp+0x434u));
    /* 005b04dd: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b04e0: jl 0x5b04ec */ if ((fS!=fO)) goto L_005b04ec;
L_005b04e2:; BB(0x005b04e2);
    /* 005b04e2: mov dword ptr [ebp + 0x438], 0 */ W32((u32)(r_ebp+0x438u), 0x0u);
L_005b04ec:; BB(0x005b04ec);
    /* 005b04ec: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 005b04ef: fsub dword ptr [ebp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x44u));
    /* 005b04f2: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 005b04f5: fsub dword ptr [ebp + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x4cu));
    /* 005b04f8: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005b04fa: fmul qword ptr [0x92a918] */ ST(0) = ST(0) * R_F64((u32)(0x92a918u));
    /* 005b0500: fdiv qword ptr [0x92a910] */ ST(0) = ST(0) / R_F64((u32)(0x92a910u));
    /* 005b0506: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005b050a: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005b050f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b0514: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005b0518: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005b051c: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005b0520: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005b0524: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005b0528: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 005b052d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b052e: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b0531: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5b0536u); f_007a8c74();
    /* 005b0536: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0539: fld dword ptr [ebp + 0x418] */ FPUSH(R_F32((u32)(r_ebp+0x418u)));
    /* 005b053f: fmul dword ptr [0x92aaec] */ ST(0) = ST(0) * R_F32((u32)(0x92aaecu));
    /* 005b0545: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 005b054b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005b054e: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 005b0551: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0553: call 0x5ae68c */ r_esp -= 4; W32(r_esp, 0x5b0558u); f_005ae68c();
    /* 005b0558: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b055b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b055d: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5b0563u); call_ind(t); }
    /* 005b0563: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 005b0569: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005b056c: test edx, 0x380000 */ {  u32 a = r_edx; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0572: je 0x5b0694 */ if (fZ) goto L_005b0694;
L_005b0578:; BB(0x005b0578);
    /* 005b0578: mov dword ptr [ebp + 0x43c], 0x14 */ W32((u32)(r_ebp+0x43cu), 0x14u);
    /* 005b0582: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0585: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0586: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b0587: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b0588: ret 4 */ FN_RET(0x005b0220); r_esp += 8; return;
L_005b058b:; BB(0x005b058b);
    /* 005b058b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b058e: jne 0x5b0694 */ if (!fZ) goto L_005b0694;
L_005b0594:; BB(0x005b0594);
    /* 005b0594: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0596: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x5b059bu); f_00520be8();
    /* 005b059b: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b059e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b059f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b05a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b05a1: ret 4 */ FN_RET(0x005b0220); r_esp += 8; return;
L_005b05a4:; BB(0x005b05a4);
    /* 005b05a4: mov edx, dword ptr [ebp + 0x398] */ r_edx = R32((u32)(r_ebp+0x398u));
    /* 005b05aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b05ac: je 0x5b071a */ if (fZ) goto L_005b071a;
L_005b05b2:; BB(0x005b05b2);
    /* 005b05b2: mov eax, dword ptr [ebp + 0x430] */ r_eax = R32((u32)(r_ebp+0x430u));
    /* 005b05b8: cmp eax, 0x1c2 */ {  u32 a = r_eax; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b05bd: jg 0x5b066f */ if ((!fZ&&fS==fO)) goto L_005b066f;
L_005b05c3:; BB(0x005b05c3);
    /* 005b05c3: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b05c6: jle 0x5b0694 */ if ((fZ||fS!=fO)) goto L_005b0694;
L_005b05cc:; BB(0x005b05cc);
    /* 005b05cc: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 005b05cf: fsub dword ptr [edx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x38u));
    /* 005b05d2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005b05d4: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 005b05d7: fsub dword ptr [edx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x40u));
    /* 005b05da: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005b05dc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005b05de: fcom dword ptr [0xa74918] */ fx_compare(ST(0), R_F32((u32)(0xa74918u))); 
    /* 005b05e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b05e6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b05e7: jae 0x5b065d */ if (!fC) goto L_005b065d;
L_005b05e9:; BB(0x005b05e9);
    /* 005b05e9: fcomp dword ptr [0xa7491c] */ fx_compare(ST(0), R_F32((u32)(0xa7491cu))); FPOP();
    /* 005b05ef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b05f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b05f2: jae 0x5b0606 */ if (!fC) goto L_005b0606;
L_005b05f4:; BB(0x005b05f4);
    /* 005b05f4: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005b05f6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b05f8: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b05fdu); f_0051f62c();
    /* 005b05fd: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0601: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b0602: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b0603: ret 4 */ FN_RET(0x005b0220); r_esp += 8; return;
L_005b0606:; BB(0x005b0606);
    /* 005b0606: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 005b0609: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5b060eu); f_0082dcbc();
    /* 005b060e: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005b0612: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 005b0618: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005b061b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5b0620u); f_0082ddd8();
    /* 005b0620: fmul dword ptr [ebp + 0x46c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x46cu));
    /* 005b0626: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 005b062a: fmul dword ptr [ebp + 0x464] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x464u));
    /* 005b0630: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005b0632: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005b0636: mov ecx, 0x6aaa */ r_ecx = 0x6aaau;
    /* 005b063b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5b0640u); f_0082ddd8();
    /* 005b0640: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 005b0644: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005b0646: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b0648: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b0649: jae 0x5b0694 */ if (!fC) goto L_005b0694;
L_005b064b:; BB(0x005b064b);
    /* 005b064b: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005b064d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b064f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b0654u); f_0051f62c();
    /* 005b0654: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0657: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0658: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b0659: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b065a: ret 4 */ FN_RET(0x005b0220); r_esp += 8; return;
L_005b065d:; BB(0x005b065d);
    /* 005b065d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b065f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0661: call 0x5b08a8 */ r_esp -= 4; W32(r_esp, 0x5b0666u); f_005b08a8();
    /* 005b0666: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0669: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b066a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b066b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b066c: ret 4 */ FN_RET(0x005b0220); r_esp += 8; return;
L_005b066f:; BB(0x005b066f);
    /* 005b066f: mov dword ptr [ebp + 0x430], 0 */ W32((u32)(r_ebp+0x430u), 0x0u);
    /* 005b0679: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b067b: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5b0680u); f_007751b0();
    /* 005b0680: fcomp dword ptr [0x92aaa4] */ fx_compare(ST(0), R_F32((u32)(0x92aaa4u))); FPOP();
    /* 005b0686: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b0688: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b0689: jae 0x5b0694 */ if (!fC) goto L_005b0694;
L_005b068b:; BB(0x005b068b);
    /* 005b068b: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005b068d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b068f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b0694u); f_0051f62c();
L_005b0694:; BB(0x005b0694);
    /* 005b0694: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0697: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0698: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b0699: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b069a: ret 4 */ FN_RET(0x005b0220); r_esp += 8; return;
L_005b069d:; BB(0x005b069d);
    /* 005b069d: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 005b06a1: fchs  */ ST(0) = -ST(0);
    /* 005b06a3: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005b06a7: jmp 0x5b03c8 */ goto L_005b03c8;
L_005b06ac:; BB(0x005b06ac);
    /* 005b06ac: fld dword ptr [0x92aa9c] */ FPUSH(R_F32((u32)(0x92aa9cu)));
    /* 005b06b2: fadd dword ptr [ebp + 0x448] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x448u));
    /* 005b06b8: fstp dword ptr [ebp + 0x448] */ W_F32((u32)(r_ebp+0x448u), ST(0)); FPOP();
    /* 005b06be: jmp 0x5b036a */ goto L_005b036a;
L_005b06c3:; BB(0x005b06c3);
    /* 005b06c3: fld dword ptr [0x92aaa0] */ FPUSH(R_F32((u32)(0x92aaa0u)));
    /* 005b06c9: fld dword ptr [ebp + 0x448] */ FPUSH(R_F32((u32)(r_ebp+0x448u)));
    /* 005b06cf: fld dword ptr [ebp + 0x44c] */ FPUSH(R_F32((u32)(r_ebp+0x44cu)));
    /* 005b06d5: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 005b06d7: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 005b06d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b06db: mov edx, dword ptr [ebp + 0x44c] */ r_edx = R32((u32)(r_ebp+0x44cu));
    /* 005b06e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b06e2: jbe 0x5b06f3 */ if ((fC||fZ)) goto L_005b06f3;
L_005b06e4:; BB(0x005b06e4);
    /* 005b06e4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b06e6: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 005b06e8: fstp dword ptr [ebp + 0x448] */ W_F32((u32)(r_ebp+0x448u), ST(0)); FPOP();
    /* 005b06ee: jmp 0x5b036a */ goto L_005b036a;
L_005b06f3:; BB(0x005b06f3);
    /* 005b06f3: fcomp dword ptr [0x92aaac] */ fx_compare(ST(0), R_F32((u32)(0x92aaacu))); FPOP();
    /* 005b06f9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b06fb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b06fc: jae 0x5b070b */ if (!fC) goto L_005b070b;
L_005b06fe:; BB(0x005b06fe);
    /* 005b06fe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005b0700: fstp dword ptr [ebp + 0x448] */ W_F32((u32)(r_ebp+0x448u), ST(0)); FPOP();
    /* 005b0706: jmp 0x5b036a */ goto L_005b036a;
L_005b070b:; BB(0x005b070b);
    /* 005b070b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005b070d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b070f: mov dword ptr [ebp + 0x448], edx */ W32((u32)(r_ebp+0x448u), r_edx);
    /* 005b0715: jmp 0x5b036a */ goto L_005b036a;
L_005b071a:; BB(0x005b071a);
    /* 005b071a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b071c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b071e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b0723u); f_0051f62c();
    /* 005b0723: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0726: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0727: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b0728: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b0729: ret 4 */ FN_RET(0x005b0220); r_esp += 8; return;
L_005b072c:; BB(0x005b072c);
    /* 005b072c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005b072e: mov eax, 1 */ r_eax = 0x1u;
    /* 005b0733: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005b073a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b073c: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5b0741u); f_0051f664();
    /* 005b0741: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b0744: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0746: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5b074cu); call_ind(t); }
    /* 005b074c: mov dword ptr [ebp + 0x414], 0x3f333333 */ W32((u32)(r_ebp+0x414u), 0x3f333333u);
    /* 005b0756: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b0758: mov dword ptr [ebp + 0x430], eax */ W32((u32)(r_ebp+0x430u), r_eax);
    /* 005b075e: mov dword ptr [ebp + 0x434], eax */ W32((u32)(r_ebp+0x434u), r_eax);
    /* 005b0764: mov dword ptr [ebp + 0x448], 0 */ W32((u32)(r_ebp+0x448u), 0x0u);
    /* 005b076e: mov dword ptr [ebp + 0x438], eax */ W32((u32)(r_ebp+0x438u), r_eax);
    /* 005b0774: mov dword ptr [ebp + 0x43c], eax */ W32((u32)(r_ebp+0x43cu), r_eax);
    /* 005b077a: mov dword ptr [ebp + 0x440], eax */ W32((u32)(r_ebp+0x440u), r_eax);
    /* 005b0780: mov dword ptr [ebp + 0x44c], 0 */ W32((u32)(r_ebp+0x44cu), 0x0u);
    /* 005b078a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b078c: mov dword ptr [ebp + 0x458], 0 */ W32((u32)(r_ebp+0x458u), 0x0u);
    /* 005b0796: mov dword ptr [ebp + 0x45c], 0 */ W32((u32)(r_ebp+0x45cu), 0x0u);
    /* 005b07a0: mov dword ptr [ebp + 0x460], 0 */ W32((u32)(r_ebp+0x460u), 0x0u);
    /* 005b07aa: mov dword ptr [ebp + 0x464], 0 */ W32((u32)(r_ebp+0x464u), 0x0u);
    /* 005b07b4: mov dword ptr [ebp + 0x468], 0 */ W32((u32)(r_ebp+0x468u), 0x0u);
    /* 005b07be: mov dword ptr [ebp + 0x46c], 0 */ W32((u32)(r_ebp+0x46cu), 0x0u);
    /* 005b07c8: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5b07cdu); f_00520bdc();
    /* 005b07cd: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b07d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b07d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b07d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b07d3: ret 4 */ FN_RET(0x005b0220); r_esp += 8; return;
}

void f_005b07d8(void) /* sub_5B07D8 */
{
    FN_ENTER(0x005b07d8);
    /* 005b07d8: fld dword ptr [ecx + 0x418] */ FPUSH(R_F32((u32)(r_ecx+0x418u)));
    /* 005b07de: fld dword ptr [ecx + 0x414] */ FPUSH(R_F32((u32)(r_ecx+0x414u)));
    /* 005b07e4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005b07e6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b07e8: mov edx, dword ptr [ecx + 0x414] */ r_edx = R32((u32)(r_ecx+0x414u));
    /* 005b07ee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b07ef: je 0x5b083a */ if (fZ) goto L_005b083a;
L_005b07f1:; BB(0x005b07f1);
    /* 005b07f1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005b07f3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b07f5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b07f6: jae 0x5b0819 */ if (!fC) goto L_005b0819;
L_005b07f8:; BB(0x005b07f8);
    /* 005b07f8: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005b07fc: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 005b07fe: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005b0800: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b0802: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b0803: jbe 0x5b0810 */ if ((fC||fZ)) goto L_005b0810;
L_005b0805:; BB(0x005b0805);
    /* 005b0805: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b0807: mov dword ptr [ecx + 0x418], edx */ W32((u32)(r_ecx+0x418u), r_edx);
    /* 005b080d: ret 4 */ FN_RET(0x005b07d8); r_esp += 8; return;
L_005b0810:; BB(0x005b0810);
    /* 005b0810: fstp dword ptr [ecx + 0x418] */ W_F32((u32)(r_ecx+0x418u), ST(0)); FPOP();
    /* 005b0816: ret 4 */ FN_RET(0x005b07d8); r_esp += 8; return;
L_005b0819:; BB(0x005b0819);
    /* 005b0819: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005b081d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005b081f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005b0821: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b0823: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b0824: jae 0x5b0831 */ if (!fC) goto L_005b0831;
L_005b0826:; BB(0x005b0826);
    /* 005b0826: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b0828: mov dword ptr [ecx + 0x418], edx */ W32((u32)(r_ecx+0x418u), r_edx);
    /* 005b082e: ret 4 */ FN_RET(0x005b07d8); r_esp += 8; return;
L_005b0831:; BB(0x005b0831);
    /* 005b0831: fstp dword ptr [ecx + 0x418] */ W_F32((u32)(r_ecx+0x418u), ST(0)); FPOP();
    /* 005b0837: ret 4 */ FN_RET(0x005b07d8); r_esp += 8; return;
L_005b083a:; BB(0x005b083a);
    /* 005b083a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b083c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b083e: ret 4 */ FN_RET(0x005b07d8); r_esp += 8; return;
}

void f_005b0844(void) /* sub_5B0844 */
{
    FN_ENTER(0x005b0844);
    /* 005b0844: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b0847: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005b084b: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 005b084e: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 005b0850: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 005b0853: fsub dword ptr [eax + 8] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x8u));
    /* 005b0856: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b0858: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 005b085c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b085e: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 005b0862: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b0864: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005b0866: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b0868: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005b086a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005b086c: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 005b086f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0870: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b0873: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x5b0878u); f_0082f9f8();
    /* 005b0878: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005b087c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005b087e: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005b0882: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005b0886: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005b0889: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b088b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 005b088d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005b088f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b0891: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b0893: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 005b0895: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b0897: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 005b089a: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 005b08a1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b08a4: ret 8 */ FN_RET(0x005b0844); r_esp += 12; return;
}

void f_005b08a8(void) /* sub_5B08A8 */
{
    FN_ENTER(0x005b08a8);
    /* 005b08a8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b08aa: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b08afu); f_0051f62c();
    /* 005b08af: ret  */ FN_RET(0x005b08a8); r_esp += 4; return;
}

void f_005b08b0(void) /* sub_5B08B0 */
{
    FN_ENTER(0x005b08b0);
    /* 005b08b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b08b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b08b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b08b3: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b08b5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005b08b9: lea esi, [ebx + 0x440] */ r_esi = (u32)(r_ebx+0x440u);
    /* 005b08bf: lea edi, [ebx + 0x464] */ r_edi = (u32)(r_ebx+0x464u);
    /* 005b08c5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b08c8: je 0x5b0ad9 */ if (fZ) goto L_005b0ad9;
L_005b08ce:; BB(0x005b08ce);
    /* 005b08ce: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b08d1: je 0x5b0ac4 */ if (fZ) goto L_005b0ac4;
L_005b08d7:; BB(0x005b08d7);
    /* 005b08d7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b08da: je 0x5b0a85 */ if (fZ) goto L_005b0a85;
L_005b08e0:; BB(0x005b08e0);
    /* 005b08e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b08e2: jne 0x5b0ac4 */ if (!fZ) goto L_005b0ac4;
L_005b08e8:; BB(0x005b08e8);
    /* 005b08e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b08ea: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5b08efu); f_007aa094();
    /* 005b08ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b08f1: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x5b08f6u); f_00521238();
    /* 005b08f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b08f8: je 0x5b0ac4 */ if (fZ) goto L_005b0ac4;
L_005b08fe:; BB(0x005b08fe);
    /* 005b08fe: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0903: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0905: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b090au); f_007aaa30();
    /* 005b090a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b090c: je 0x5b091f */ if (fZ) goto L_005b091f;
L_005b090e:; BB(0x005b090e);
    /* 005b090e: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0913: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 005b0916: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0917: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b091cu); f_0050b510();
    /* 005b091c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b091f:; BB(0x005b091f);
    /* 005b091f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0921: call 0x5afc3c */ r_esp -= 4; W32(r_esp, 0x5b0926u); f_005afc3c();
    /* 005b0926: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b092b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b092d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b0932u); f_007aaa30();
    /* 005b0932: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0934: je 0x5b0977 */ if (fZ) goto L_005b0977;
L_005b0936:; BB(0x005b0936);
    /* 005b0936: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0938: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5b093du); f_005213d8();
    /* 005b093d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b093f: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5b0944u); f_00521410();
    /* 005b0944: mov eax, dword ptr [ebx + 0x434] */ r_eax = R32((u32)(r_ebx+0x434u));
    /* 005b094a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b094c: jne 0x5b0965 */ if (!fZ) goto L_005b0965;
L_005b094e:; BB(0x005b094e);
    /* 005b094e: mov dword ptr [ebx + 0x434], 1 */ W32((u32)(r_ebx+0x434u), 0x1u);
    /* 005b0958: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0959: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b095b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b095c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b095e: call 0x5b0b50 */ r_esp -= 4; W32(r_esp, 0x5b0963u); f_005b0b50();
    /* 005b0963: jmp 0x5b0977 */ goto L_005b0977;
L_005b0965:; BB(0x005b0965);
    /* 005b0965: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0966: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0967: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b0969: mov dword ptr [ebx + 0x434], eax */ W32((u32)(r_ebx+0x434u), r_eax);
    /* 005b096f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0970: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0972: call 0x5b0b50 */ r_esp -= 4; W32(r_esp, 0x5b0977u); f_005b0b50();
L_005b0977:; BB(0x005b0977);
    /* 005b0977: fld dword ptr [0x92aa84] */ FPUSH(R_F32((u32)(0x92aa84u)));
    /* 005b097d: fadd dword ptr [ebx + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc4u));
    /* 005b0983: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0984: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b0987: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0989: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b098eu); f_007aaa30();
    /* 005b098e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0990: je 0x5b09c4 */ if (fZ) goto L_005b09c4;
L_005b0992:; BB(0x005b0992);
    /* 005b0992: mov eax, dword ptr [ebx + 0x464] */ r_eax = R32((u32)(r_ebx+0x464u));
    /* 005b0998: mov edx, dword ptr [ebx + 0x468] */ r_edx = R32((u32)(r_ebx+0x468u));
    /* 005b099e: mov esi, dword ptr [ebx + 0x46c] */ r_esi = R32((u32)(r_ebx+0x46cu));
    /* 005b09a4: mov dword ptr [ebx + 0x458], eax */ W32((u32)(r_ebx+0x458u), r_eax);
    /* 005b09aa: mov eax, dword ptr [ebx + 0x440] */ r_eax = R32((u32)(r_ebx+0x440u));
    /* 005b09b0: mov dword ptr [ebx + 0x45c], edx */ W32((u32)(r_ebx+0x45cu), r_edx);
    /* 005b09b6: mov dword ptr [ebx + 0x460], esi */ W32((u32)(r_ebx+0x460u), r_esi);
    /* 005b09bc: mov dword ptr [ebx + 0x444], eax */ W32((u32)(r_ebx+0x444u), r_eax);
    /* 005b09c2: jmp 0x5b09ca */ goto L_005b09ca;
L_005b09c4:; BB(0x005b09c4);
    /* 005b09c4: mov eax, dword ptr [ebx + 0x444] */ r_eax = R32((u32)(r_ebx+0x444u));
L_005b09ca:; BB(0x005b09ca);
    /* 005b09ca: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 005b09cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b09d0: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b09d3: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5b09d8u); f_007a8c74();
    /* 005b09d8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b09db: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 005b09e1: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005b09e4: fcomp dword ptr [0x92aa78] */ fx_compare(ST(0), R_F32((u32)(0x92aa78u))); FPOP();
    /* 005b09ea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b09ec: mov dword ptr [ebx + 0x60], edx */ W32((u32)(r_ebx+0x60u), r_edx);
    /* 005b09ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b09f0: jb 0x5b0a37 */ if (fC) goto L_005b0a37;
L_005b09f2:; BB(0x005b09f2);
    /* 005b09f2: fld dword ptr [0x92aa74] */ FPUSH(R_F32((u32)(0x92aa74u)));
    /* 005b09f8: fld dword ptr [ebx + 0x418] */ FPUSH(R_F32((u32)(r_ebx+0x418u)));
    /* 005b09fe: fmul dword ptr [0x92aa7c] */ ST(0) = ST(0) * R_F32((u32)(0x92aa7cu));
    /* 005b0a04: mov eax, dword ptr [ebx + 0x458] */ r_eax = R32((u32)(r_ebx+0x458u));
    /* 005b0a0a: mov edx, dword ptr [ebx + 0x460] */ r_edx = R32((u32)(r_ebx+0x460u));
    /* 005b0a10: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 005b0a12: fst dword ptr [ebx + 0x418] */ W_F32((u32)(r_ebx+0x418u), ST(0));
    /* 005b0a18: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b0a1a: fstp dword ptr [ebx + 0xc8] */ W_F32((u32)(r_ebx+0xc8u), ST(0)); FPOP();
    /* 005b0a20: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0a23: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005b0a27: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005b0a2a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0a2c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005b0a30: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x5b0a35u); f_005207c4();
    /* 005b0a35: jmp 0x5b0a6e */ goto L_005b0a6e;
L_005b0a37:; BB(0x005b0a37);
    /* 005b0a37: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0a3c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0a3e: call 0x5b07d8 */ r_esp -= 4; W32(r_esp, 0x5b0a43u); f_005b07d8();
    /* 005b0a43: fld dword ptr [0x92aa74] */ FPUSH(R_F32((u32)(0x92aa74u)));
    /* 005b0a49: fmul dword ptr [ebx + 0x418] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x418u));
    /* 005b0a4f: push dword ptr [ebx + 0x418] */ { u32 v = R32((u32)(r_ebx+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b0a55: push dword ptr [ebx + 0x460] */ { u32 v = R32((u32)(r_ebx+0x460u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b0a5b: push dword ptr [ebx + 0x458] */ { u32 v = R32((u32)(r_ebx+0x458u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b0a61: fstp dword ptr [ebx + 0xc8] */ W_F32((u32)(r_ebx+0xc8u), ST(0)); FPOP();
    /* 005b0a67: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0a69: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x5b0a6eu); f_005207c4();
L_005b0a6e:; BB(0x005b0a6e);
    /* 005b0a6e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0a70: call 0x5ae68c */ r_esp -= 4; W32(r_esp, 0x5b0a75u); f_005ae68c();
    /* 005b0a75: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b0a77: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0a79: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5b0a7fu); call_ind(t); }
    /* 005b0a7f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b0a80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b0a81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b0a82: ret 4 */ FN_RET(0x005b08b0); r_esp += 8; return;
L_005b0a85:; BB(0x005b0a85);
    /* 005b0a85: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 005b0a8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0a8d: je 0x5b0aca */ if (fZ) goto L_005b0aca;
L_005b0a8f:; BB(0x005b0a8f);
    /* 005b0a8f: fld dword ptr [0x92aa84] */ FPUSH(R_F32((u32)(0x92aa84u)));
    /* 005b0a95: fadd dword ptr [ebx + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc4u));
    /* 005b0a9b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0a9c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b0a9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0aa1: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b0aa6u); f_007aaa30();
    /* 005b0aa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b0aa8: je 0x5b0ac4 */ if (fZ) goto L_005b0ac4;
L_005b0aaa:; BB(0x005b0aaa);
    /* 005b0aaa: fld dword ptr [ebx + 0x3b4] */ FPUSH(R_F32((u32)(r_ebx+0x3b4u)));
    /* 005b0ab0: fcomp dword ptr [0x92aa70] */ fx_compare(ST(0), R_F32((u32)(0x92aa70u))); FPOP();
    /* 005b0ab6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b0ab8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b0ab9: jae 0x5b0ac4 */ if (!fC) goto L_005b0ac4;
L_005b0abb:; BB(0x005b0abb);
    /* 005b0abb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005b0abd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0abf: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b0ac4u); f_0051f62c();
L_005b0ac4:; BB(0x005b0ac4);
    /* 005b0ac4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b0ac5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b0ac6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b0ac7: ret 4 */ FN_RET(0x005b08b0); r_esp += 8; return;
L_005b0aca:; BB(0x005b0aca);
    /* 005b0aca: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0acc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0ace: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b0ad3u); f_0051f62c();
    /* 005b0ad3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b0ad4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b0ad5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b0ad6: ret 4 */ FN_RET(0x005b08b0); r_esp += 8; return;
L_005b0ad9:; BB(0x005b0ad9);
    /* 005b0ad9: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0adb: mov eax, 3 */ r_eax = 0x3u;
    /* 005b0ae0: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005b0ae7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0ae9: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5b0aeeu); f_0051f664();
    /* 005b0aee: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b0af0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0af2: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5b0af8u); call_ind(t); }
    /* 005b0af8: mov dword ptr [ebx + 0x414], 0x400ccccd */ W32((u32)(r_ebx+0x414u), 0x400ccccdu);
    /* 005b0b02: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b0b05: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b07: mov dword ptr [ebx + 0x430], eax */ W32((u32)(r_ebx+0x430u), r_eax);
    /* 005b0b0d: mov dword ptr [ebx + 0x434], eax */ W32((u32)(r_ebx+0x434u), r_eax);
    /* 005b0b13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b0b15: call 0x5b0b50 */ r_esp -= 4; W32(r_esp, 0x5b0b1au); f_005b0b50();
    /* 005b0b1a: mov eax, dword ptr [ebx + 0x464] */ r_eax = R32((u32)(r_ebx+0x464u));
    /* 005b0b20: mov edx, dword ptr [ebx + 0x468] */ r_edx = R32((u32)(r_ebx+0x468u));
    /* 005b0b26: mov esi, dword ptr [ebx + 0x46c] */ r_esi = R32((u32)(r_ebx+0x46cu));
    /* 005b0b2c: mov edi, dword ptr [ebx + 0x440] */ r_edi = R32((u32)(r_ebx+0x440u));
    /* 005b0b32: mov dword ptr [ebx + 0x458], eax */ W32((u32)(r_ebx+0x458u), r_eax);
    /* 005b0b38: mov dword ptr [ebx + 0x45c], edx */ W32((u32)(r_ebx+0x45cu), r_edx);
    /* 005b0b3e: mov dword ptr [ebx + 0x460], esi */ W32((u32)(r_ebx+0x460u), r_esi);
    /* 005b0b44: mov dword ptr [ebx + 0x444], edi */ W32((u32)(r_ebx+0x444u), r_edi);
    /* 005b0b4a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b0b4b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b0b4c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b0b4d: ret 4 */ FN_RET(0x005b08b0); r_esp += 8; return;
}

void f_005b0b50(void) /* sub_5B0B50 */
{
    FN_ENTER(0x005b0b50);
    /* 005b0b50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b52: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b0b55: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b0b57: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 005b0b5b: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 005b0b5f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5b0b64u); f_0082dcbc();
    /* 005b0b64: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005b0b68: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 005b0b6c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5b0b71u); f_0082ddd8();
    /* 005b0b71: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005b0b75: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 005b0b7b: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
    /* 005b0b81: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 005b0b83: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b0b85: fchs  */ ST(0) = -ST(0);
    /* 005b0b87: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005b0b89: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005b0b8b: fst dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0));
    /* 005b0b8e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b0b90: fmul dword ptr [ebp + 0x3b0] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3b0u));
    /* 005b0b96: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005b0b98: fmul dword ptr [ebp + 0x3a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3a8u));
    /* 005b0b9e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005b0ba0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b0ba2: fst dword ptr [esi] */ W_F32((u32)(r_esi), ST(0));
    /* 005b0ba4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b0ba6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005b0ba8: fmul qword ptr [0x92a908] */ ST(0) = ST(0) * R_F64((u32)(0x92a908u));
    /* 005b0bae: fdiv qword ptr [0x92a900] */ ST(0) = ST(0) / R_F64((u32)(0x92a900u));
    /* 005b0bb4: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 005b0bb8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005b0bbb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005b0bbf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b0bc4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b0bc8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005b0bcc: fistp dword ptr [edx] */ W32((u32)(r_edx), (u32)fx_int32(ST(0))); FPOP();
    /* 005b0bce: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005b0bd1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0bd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0bd5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b0bd6: ret 0xc */ FN_RET(0x005b0b50); r_esp += 16; return;
}

void f_005b0bdc(void) /* sub_5B0BDC */
{
    FN_ENTER(0x005b0bdc);
    /* 005b0bdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bdd: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b0be0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b0be2: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005b0be6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0be9: je 0x5b0dbf */ if (fZ) goto L_005b0dbf;
L_005b0bef:; BB(0x005b0bef);
    /* 005b0bef: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0bf2: je 0x5b0d9c */ if (fZ) goto L_005b0d9c;
L_005b0bf8:; BB(0x005b0bf8);
    /* 005b0bf8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0bfb: je 0x5b0d36 */ if (fZ) goto L_005b0d36;
L_005b0c01:; BB(0x005b0c01);
    /* 005b0c01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0c03: jne 0x5b0d9c */ if (!fZ) goto L_005b0d9c;
L_005b0c09:; BB(0x005b0c09);
    /* 005b0c09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0c0b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5b0c10u); f_007aa094();
    /* 005b0c10: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c15: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0c17: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b0c1cu); f_007aaa30();
    /* 005b0c1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0c1e: je 0x5b0c31 */ if (fZ) goto L_005b0c31;
L_005b0c20:; BB(0x005b0c20);
    /* 005b0c20: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c25: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 005b0c28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c29: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b0c2eu); f_0050b510();
    /* 005b0c2e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b0c31:; BB(0x005b0c31);
    /* 005b0c31: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 005b0c38: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0c3b: je 0x5b0da3 */ if (fZ) goto L_005b0da3;
L_005b0c41:; BB(0x005b0c41);
    /* 005b0c41: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0c43: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x5b0c48u); f_00521238();
    /* 005b0c48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0c4a: je 0x5b0d9c */ if (fZ) goto L_005b0d9c;
L_005b0c50:; BB(0x005b0c50);
    /* 005b0c50: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0c52: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5b0c57u); f_005213d8();
    /* 005b0c57: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0c59: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5b0c5eu); f_00521410();
    /* 005b0c5e: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 005b0c64: fcomp dword ptr [0x92aa78] */ fx_compare(ST(0), R_F32((u32)(0x92aa78u))); FPOP();
    /* 005b0c6a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b0c6c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b0c6d: jb 0x5b0cc6 */ if (fC) goto L_005b0cc6;
L_005b0c6f:; BB(0x005b0c6f);
    /* 005b0c6f: fld dword ptr [0x92aa54] */ FPUSH(R_F32((u32)(0x92aa54u)));
    /* 005b0c75: fld dword ptr [0x92aa60] */ FPUSH(R_F32((u32)(0x92aa60u)));
    /* 005b0c7b: fld dword ptr [ebp + 0x418] */ FPUSH(R_F32((u32)(r_ebp+0x418u)));
    /* 005b0c81: fmul dword ptr [0x92aa5c] */ ST(0) = ST(0) * R_F32((u32)(0x92aa5cu));
    /* 005b0c87: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 005b0c89: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 005b0c8b: fst dword ptr [ebp + 0x418] */ W_F32((u32)(r_ebp+0x418u), ST(0));
    /* 005b0c91: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005b0c93: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 005b0c99: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0c9c: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005b0ca0: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005b0ca5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b0caa: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005b0cae: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005b0cb2: fistp dword ptr [esp] */ W32((u32)(r_esp), (u32)fx_int32(ST(0))); FPOP();
    /* 005b0cb5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005b0cb9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005b0cbd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0cbf: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x5b0cc4u); f_00521528();
    /* 005b0cc4: jmp 0x5b0d1d */ goto L_005b0d1d;
L_005b0cc6:; BB(0x005b0cc6);
    /* 005b0cc6: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ccb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0ccd: call 0x5b07d8 */ r_esp -= 4; W32(r_esp, 0x5b0cd2u); f_005b07d8();
    /* 005b0cd2: fld dword ptr [0x92aa54] */ FPUSH(R_F32((u32)(0x92aa54u)));
    /* 005b0cd8: fld dword ptr [0x92aa60] */ FPUSH(R_F32((u32)(0x92aa60u)));
    /* 005b0cde: fld dword ptr [ebp + 0x418] */ FPUSH(R_F32((u32)(r_ebp+0x418u)));
    /* 005b0ce4: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 005b0ce6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b0ce8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b0cea: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 005b0cf0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005b0cf3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005b0cf7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b0cfc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b0d00: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005b0d04: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005b0d08: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005b0d0b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005b0d0f: push dword ptr [ebp + 0x418] */ { u32 v = R32((u32)(r_ebp+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b0d15: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0d17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d18: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x5b0d1du); f_00521528();
L_005b0d1d:; BB(0x005b0d1d);
    /* 005b0d1d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0d1f: call 0x5ae68c */ r_esp -= 4; W32(r_esp, 0x5b0d24u); f_005ae68c();
    /* 005b0d24: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b0d27: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0d29: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5b0d2fu); call_ind(t); }
    /* 005b0d2f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0d32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0d33: ret 4 */ FN_RET(0x005b0bdc); r_esp += 8; return;
L_005b0d36:; BB(0x005b0d36);
    /* 005b0d36: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 005b0d3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0d3e: je 0x5b0daf */ if (fZ) goto L_005b0daf;
L_005b0d40:; BB(0x005b0d40);
    /* 005b0d40: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d42: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0d44: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x5b0d49u); f_00520bb8();
    /* 005b0d49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0d4b: jne 0x5b0d93 */ if (!fZ) goto L_005b0d93;
L_005b0d4d:; BB(0x005b0d4d);
    /* 005b0d4d: mov eax, dword ptr [ebp + 0x430] */ r_eax = R32((u32)(r_ebp+0x430u));
    /* 005b0d53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0d55: jne 0x5b0d9c */ if (!fZ) goto L_005b0d9c;
L_005b0d57:; BB(0x005b0d57);
    /* 005b0d57: fld dword ptr [0x92aa58] */ FPUSH(R_F32((u32)(0x92aa58u)));
    /* 005b0d5d: fadd dword ptr [ebp + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xc4u));
    /* 005b0d63: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d64: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005b0d67: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0d69: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b0d6eu); f_007aaa30();
    /* 005b0d6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0d70: je 0x5b0d9c */ if (fZ) goto L_005b0d9c;
L_005b0d72:; BB(0x005b0d72);
    /* 005b0d72: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 005b0d78: fcomp dword ptr [0x92aa70] */ fx_compare(ST(0), R_F32((u32)(0x92aa70u))); FPOP();
    /* 005b0d7e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b0d80: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b0d81: jae 0x5b0d9c */ if (!fC) goto L_005b0d9c;
L_005b0d83:; BB(0x005b0d83);
    /* 005b0d83: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d85: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0d87: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b0d8cu); f_0051f62c();
    /* 005b0d8c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0d8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0d90: ret 4 */ FN_RET(0x005b0bdc); r_esp += 8; return;
L_005b0d93:; BB(0x005b0d93);
    /* 005b0d93: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0d97: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b0d9cu); f_0051f62c();
L_005b0d9c:; BB(0x005b0d9c);
    /* 005b0d9c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0d9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0da0: ret 4 */ FN_RET(0x005b0bdc); r_esp += 8; return;
L_005b0da3:; BB(0x005b0da3);
    /* 005b0da3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0da5: call 0x5afc3c */ r_esp -= 4; W32(r_esp, 0x5b0daau); f_005afc3c();
    /* 005b0daa: jmp 0x5b0c41 */ goto L_005b0c41;
L_005b0daf:; BB(0x005b0daf);
    /* 005b0daf: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0db1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0db3: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b0db8u); f_0051f62c();
    /* 005b0db8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0dbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0dbc: ret 4 */ FN_RET(0x005b0bdc); r_esp += 8; return;
L_005b0dbf:; BB(0x005b0dbf);
    /* 005b0dbf: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0dc1: mov eax, 2 */ r_eax = 0x2u;
    /* 005b0dc6: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005b0dcd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0dcf: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5b0dd4u); f_0051f664();
    /* 005b0dd4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b0dd7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0dd9: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5b0ddfu); call_ind(t); }
    /* 005b0ddf: mov dword ptr [ebp + 0x414], 0x400ccccd */ W32((u32)(r_ebp+0x414u), 0x400ccccdu);
    /* 005b0de9: mov dword ptr [ebp + 0x430], 0 */ W32((u32)(r_ebp+0x430u), 0x0u);
    /* 005b0df3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0df6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0df7: ret 4 */ FN_RET(0x005b0bdc); r_esp += 8; return;
}

void f_005b0dfc(void) /* sub_5B0DFC */
{
    FN_ENTER(0x005b0dfc);
    /* 005b0dfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b0dfd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b0dfe: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b0e01: mov edi, ecx */ r_edi = r_ecx;
    /* 005b0e03: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 005b0e07: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0e0a: je 0x5b0f15 */ if (fZ) goto L_005b0f15;
L_005b0e10:; BB(0x005b0e10);
    /* 005b0e10: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0e13: je 0x5b0ec2 */ if (fZ) goto L_005b0ec2;
L_005b0e19:; BB(0x005b0e19);
    /* 005b0e19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0e1b: jne 0x5b0ef4 */ if (!fZ) goto L_005b0ef4;
L_005b0e21:; BB(0x005b0e21);
    /* 005b0e21: mov ecx, edi */ r_ecx = r_edi;
    /* 005b0e23: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5b0e28u); f_007aa094();
    /* 005b0e28: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005b0e2a: mov ecx, edi */ r_ecx = r_edi;
    /* 005b0e2c: call 0x5afbf0 */ r_esp -= 4; W32(r_esp, 0x5b0e31u); f_005afbf0();
    /* 005b0e31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0e33: je 0x5b0e3e */ if (fZ) goto L_005b0e3e;
L_005b0e35:; BB(0x005b0e35);
    /* 005b0e35: mov ecx, edi */ r_ecx = r_edi;
    /* 005b0e37: call 0x5ae68c */ r_esp -= 4; W32(r_esp, 0x5b0e3cu); f_005ae68c();
    /* 005b0e3c: jmp 0x5b0e48 */ goto L_005b0e48;
L_005b0e3e:; BB(0x005b0e3e);
    /* 005b0e3e: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b0e41: mov ecx, edi */ r_ecx = r_edi;
    /* 005b0e43: call 0x5ae70c */ r_esp -= 4; W32(r_esp, 0x5b0e48u); f_005ae70c();
L_005b0e48:; BB(0x005b0e48);
    /* 005b0e48: mov edx, dword ptr [edi + 0x398] */ r_edx = R32((u32)(r_edi+0x398u));
    /* 005b0e4e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0e50: je 0x5b0ea8 */ if (fZ) goto L_005b0ea8;
L_005b0e52:; BB(0x005b0e52);
    /* 005b0e52: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b0e55: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005b0e58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e5a: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x5b0e5fu); f_0078ea50();
    /* 005b0e5f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0e62: fcomp dword ptr [0x92aa4c] */ fx_compare(ST(0), R_F32((u32)(0x92aa4cu))); FPOP();
    /* 005b0e68: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b0e6a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b0e6b: jb 0x5b0e88 */ if (fC) goto L_005b0e88;
L_005b0e6d:; BB(0x005b0e6d);
    /* 005b0e6d: mov dword ptr [edi + 0x430], 0 */ W32((u32)(r_edi+0x430u), 0x0u);
    /* 005b0e77: mov ebp, 0x100 */ r_ebp = 0x100u;
    /* 005b0e7c: mov dword ptr [edi + 0x414], 0x3f000000 */ W32((u32)(r_edi+0x414u), 0x3f000000u);
    /* 005b0e86: jmp 0x5b0ea8 */ goto L_005b0ea8;
L_005b0e88:; BB(0x005b0e88);
    /* 005b0e88: mov dword ptr [edi + 0x430], 1 */ W32((u32)(r_edi+0x430u), 0x1u);
    /* 005b0e92: mov ebp, 0x180 */ r_ebp = 0x180u;
    /* 005b0e97: mov ecx, edi */ r_ecx = r_edi;
    /* 005b0e99: mov dword ptr [edi + 0x414], 0x3e19999a */ W32((u32)(r_edi+0x414u), 0x3e19999au);
    /* 005b0ea3: call 0x5b10fc */ r_esp -= 4; W32(r_esp, 0x5b0ea8u); f_005b10fc();
L_005b0ea8:; BB(0x005b0ea8);
    /* 005b0ea8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ea9: mov ecx, edi */ r_ecx = r_edi;
    /* 005b0eab: call 0x5b104c */ r_esp -= 4; W32(r_esp, 0x5b0eb0u); f_005b104c();
    /* 005b0eb0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005b0eb2: mov ecx, edi */ r_ecx = r_edi;
    /* 005b0eb4: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5b0ebau); call_ind(t); }
    /* 005b0eba: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0ebd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0ebe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b0ebf: ret 4 */ FN_RET(0x005b0dfc); r_esp += 8; return;
L_005b0ec2:; BB(0x005b0ec2);
    /* 005b0ec2: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 005b0ec8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0eca: je 0x5b0efc */ if (fZ) goto L_005b0efc;
L_005b0ecc:; BB(0x005b0ecc);
    /* 005b0ecc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ecd: mov ecx, edi */ r_ecx = r_edi;
    /* 005b0ecf: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5b0ed4u); f_007706b0();
    /* 005b0ed4: mov eax, dword ptr [edi + 0x31c] */ r_eax = R32((u32)(r_edi+0x31cu));
    /* 005b0eda: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b0edd: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b0ee0: mov ecx, edi */ r_ecx = r_edi;
    /* 005b0ee2: call 0x786494 */ r_esp -= 4; W32(r_esp, 0x5b0ee7u); f_00786494();
    /* 005b0ee7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0ee9: je 0x5b0ef4 */ if (fZ) goto L_005b0ef4;
L_005b0eeb:; BB(0x005b0eeb);
    /* 005b0eeb: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0eed: mov ecx, edi */ r_ecx = r_edi;
    /* 005b0eef: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b0ef4u); f_0051f62c();
L_005b0ef4:; BB(0x005b0ef4);
    /* 005b0ef4: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0ef7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0ef8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b0ef9: ret 4 */ FN_RET(0x005b0dfc); r_esp += 8; return;
L_005b0efc:; BB(0x005b0efc);
    /* 005b0efc: mov ecx, edi */ r_ecx = r_edi;
    /* 005b0efe: call 0x5b10fc */ r_esp -= 4; W32(r_esp, 0x5b0f03u); f_005b10fc();
    /* 005b0f03: mov dword ptr [edi + 0x414], 0 */ W32((u32)(r_edi+0x414u), 0x0u);
    /* 005b0f0d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b0f10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0f11: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b0f12: ret 4 */ FN_RET(0x005b0dfc); r_esp += 8; return;
L_005b0f15:; BB(0x005b0f15);
    /* 005b0f15: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0f17: mov eax, 1 */ r_eax = 0x1u;
    /* 005b0f1c: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005b0f23: mov ecx, edi */ r_ecx = r_edi;
    /* 005b0f25: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5b0f2au); f_0051f664();
    /* 005b0f2a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005b0f2c: mov ecx, edi */ r_ecx = r_edi;
    /* 005b0f2e: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5b0f34u); call_ind(t); }
    /* 005b0f34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b0f36: mov dword ptr [edi + 0x434], eax */ W32((u32)(r_edi+0x434u), r_eax);
    /* 005b0f3c: mov dword ptr [edi + 0x430], eax */ W32((u32)(r_edi+0x430u), r_eax);
    /* 005b0f42: mov ecx, edi */ r_ecx = r_edi;
    /* 005b0f44: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5b0f49u); f_007751b0();
    /* 005b0f49: fld dword ptr [0x92aa3c] */ FPUSH(R_F32((u32)(0x92aa3cu)));
    /* 005b0f4f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b0f51: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005b0f55: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005b0f5a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b0f5f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005b0f63: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005b0f67: fistp dword ptr [edi + 0x438] */ W32((u32)(r_edi+0x438u), (u32)fx_int32(ST(0))); FPOP();
    /* 005b0f6d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005b0f71: mov ecx, edi */ r_ecx = r_edi;
    /* 005b0f73: mov dword ptr [edi + 0x47c], 0 */ W32((u32)(r_edi+0x47cu), 0x0u);
    /* 005b0f7d: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5b0f82u); f_007751b0();
    /* 005b0f82: fld dword ptr [0x92aa38] */ FPUSH(R_F32((u32)(0x92aa38u)));
    /* 005b0f88: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b0f8a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005b0f8e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005b0f93: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b0f98: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005b0f9c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005b0fa0: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005b0fa4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005b0fa8: mov ecx, edi */ r_ecx = r_edi;
    /* 005b0faa: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 005b0fae: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5b0fb3u); f_007751b0();
    /* 005b0fb3: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005b0fb7: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005b0fbb: fmul dword ptr [0x92abac] */ ST(0) = ST(0) * R_F32((u32)(0x92abacu));
    /* 005b0fc1: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005b0fc5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0fc7: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5b0fccu); f_0082dcbc();
    /* 005b0fcc: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 005b0fd0: fadd dword ptr [edi + 0x408] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x408u));
    /* 005b0fd6: fstp dword ptr [edi + 0x39c] */ W_F32((u32)(r_edi+0x39cu), ST(0)); FPOP();
    /* 005b0fdc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b0fde: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5b0fe3u); f_0082ddd8();
    /* 005b0fe3: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 005b0fe7: fadd dword ptr [edi + 0x410] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x410u));
    /* 005b0fed: fstp dword ptr [edi + 0x3a4] */ W_F32((u32)(r_edi+0x3a4u), ST(0)); FPOP();
    /* 005b0ff3: mov ecx, edi */ r_ecx = r_edi;
    /* 005b0ff5: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5b0ffau); f_007751b0();
    /* 005b0ffa: fld dword ptr [0x92aa34] */ FPUSH(R_F32((u32)(0x92aa34u)));
    /* 005b1000: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b1002: fadd dword ptr [0x92aa2c] */ ST(0) = ST(0) + R_F32((u32)(0x92aa2cu));
    /* 005b1008: fmul dword ptr [edi + 0x3c8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x3c8u));
    /* 005b100e: mov dword ptr [edi + 0x418], 0 */ W32((u32)(r_edi+0x418u), 0x0u);
    /* 005b1018: fst dword ptr [edi + 0x414] */ W_F32((u32)(r_edi+0x414u), ST(0));
    /* 005b101e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005b1022: mov dword ptr [esp], 0x80 */ W32((u32)(r_esp), 0x80u);
    /* 005b1029: call 0x782a34 */ r_esp -= 4; W32(r_esp, 0x5b102eu); f_00782a34();
    /* 005b102e: fld dword ptr [0x92aa30] */ FPUSH(R_F32((u32)(0x92aa30u)));
    /* 005b1034: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005b1036: fstp dword ptr [edi + 0x448] */ W_F32((u32)(r_edi+0x448u), ST(0)); FPOP();
    /* 005b103c: mov ecx, edi */ r_ecx = r_edi;
    /* 005b103e: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5b1043u); f_00521410();
    /* 005b1043: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b1046: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1047: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b1048: ret 4 */ FN_RET(0x005b0dfc); r_esp += 8; return;
}

