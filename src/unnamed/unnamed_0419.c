#include "protos.h"

void f_00419008(void) /* sub_419008 */
{
    FN_ENTER(0x00419008);
    /* 00419008: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00419009: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041900a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0041900c: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00419010: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00419014: mov ecx, dword ptr [ebx + 0x77c] */ r_ecx = R32((u32)(r_ebx+0x77cu));
    /* 0041901a: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x41901fu); f_006ac1a4();
    /* 0041901f: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00419023: mov eax, dword ptr [ebx + 0x77c] */ r_eax = R32((u32)(r_ebx+0x77cu));
    /* 00419029: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 0041902f: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00419032: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00419035: mov eax, dword ptr [ebx + 0x77c] */ r_eax = R32((u32)(r_ebx+0x77cu));
    /* 0041903b: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 00419041: lea edi, [edi + 0xc] */ r_edi = (u32)(r_edi+0xcu);
    /* 00419044: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00419045: mov dword ptr [eax + 0x18], 0x9d03 */ W32((u32)(r_eax+0x18u), 0x9d03u);
    /* 0041904c: mov ecx, dword ptr [ebx + 0x77c] */ r_ecx = R32((u32)(r_ebx+0x77cu));
    /* 00419052: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00419054: call dword ptr [ebx + 0x40] */ { u32 t = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, 0x419057u); call_ind(t); }
    /* 00419057: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00419058: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419059: ret 0xc */ FN_RET(0x00419008); r_esp += 16; return;
}

void f_0041905c(void) /* sub_41905C */
{
    FN_ENTER(0x0041905c);
    /* 0041905c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041905d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419060: mov esi, ecx */ r_esi = r_ecx;
    /* 00419062: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00419066: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00419069: ja 0x419126 */ if ((!fC&&!fZ)) goto L_00419126;
L_0041906f:; BB(0x0041906f);
    /* 0041906f: mov eax, dword ptr [eax*4 + 0x8fb154] */ r_eax = R32((u32)(r_eax*4+0x8fb154u));
    /* 00419076: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00419126:; BB(0x00419126);
    /* 00419126: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419129: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041912a: ret 4 */ FN_RET(0x0041905c); r_esp += 8; return;
}

void f_00419078(void)
{
    FN_ENTER(0x00419078);
    /* 00419078: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0041907a: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0041907f: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00419086: mov ecx, esi */ r_ecx = r_esi;
    /* 00419088: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x41908eu); call_ind(t); }
    /* 0041908e: mov dword ptr [esi + 0x3ec], 0 */ W32((u32)(r_esi+0x3ecu), 0x0u);
    /* 00419098: mov ecx, esi */ r_ecx = r_esi;
    /* 0041909a: call 0x419130 */ r_esp -= 4; W32(r_esp, 0x41909fu); f_00419130();
    /* 0041909f: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 004190a5: mov dword ptr [esi + 0x704], 0x3ba3d70a */ W32((u32)(r_esi+0x704u), 0x3ba3d70au);
    /* 004190af: or eax, 0xe80 */ {  u32 a = r_eax; u32 b = 0xe80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004190b4: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 004190ba: mov dword ptr [esi + 0x720], 0x3ba3d70a */ W32((u32)(r_esi+0x720u), 0x3ba3d70au);
    /* 004190c4: mov dword ptr [esi + 0x73c], 0x3ba3d70a */ W32((u32)(r_esi+0x73cu), 0x3ba3d70au);
    /* 004190ce: mov dword ptr [esi + 0x758], 0x3ba3d70a */ W32((u32)(r_esi+0x758u), 0x3ba3d70au);
    /* 004190d8: jmp 0x419126 */ goto L_00419126;
L_00419126:; BB(0x00419126);
    /* 00419126: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419129: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041912a: ret 4 */ FN_RET(0x00419078); r_esp += 8; return;
}

void f_004190da(void)
{
    FN_ENTER(0x004190da);
    /* 004190da: mov ecx, esi */ r_ecx = r_esi;
    /* 004190dc: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4190e1u); f_007aa094();
    /* 004190e1: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004190e5: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004190e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004190ea: lea ecx, [esi + 0x6f0] */ r_ecx = (u32)(r_esi+0x6f0u);
    /* 004190f0: mov edi, esi */ r_edi = r_esi;
    /* 004190f2: mov esi, eax */ r_esi = r_eax;
    /* 004190f4: mov ebx, ecx */ r_ebx = r_ecx;
L_004190f6:; BB(0x004190f6);
    /* 004190f6: mov edx, dword ptr [esi + edi + 0x6f0] */ r_edx = R32((u32)(r_esi+r_edi+0x6f0u));
    /* 004190fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004190ff: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x419102u); call_ind(t); }
    /* 00419102: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419104: je 0x419114 */ if (fZ) goto L_00419114;
L_00419106:; BB(0x00419106);
    /* 00419106: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 0041910a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00419110: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
L_00419114:; BB(0x00419114);
    /* 00419114: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00419117: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0041911a: cmp esi, 0x70 */ {  u32 a = r_esi; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041911d: jl 0x4190f6 */ if ((fS!=fO)) goto L_004190f6;
L_0041911f:; BB(0x0041911f);
    /* 0041911f: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00419123: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00419126: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419129: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041912a: ret 4 */ FN_RET(0x004190da); r_esp += 8; return;
}

void f_00419126(void)
{
    FN_ENTER(0x00419126);
    /* 00419126: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419129: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041912a: ret 4 */ FN_RET(0x00419126); r_esp += 8; return;
}

void f_00419130(void) /* sub_419130 */
{
    FN_ENTER(0x00419130);
    /* 00419130: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 00419136: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00419139: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041913e: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 00419144: mov eax, dword ptr [ecx + 0x5e8] */ r_eax = R32((u32)(r_ecx+0x5e8u));
    /* 0041914a: mov dword ptr [ecx + 0x5e0], edx */ W32((u32)(r_ecx+0x5e0u), r_edx);
    /* 00419150: mov dword ptr [ecx + 0x5e4], eax */ W32((u32)(r_ecx+0x5e4u), r_eax);
    /* 00419156: ret  */ FN_RET(0x00419130); r_esp += 4; return;
}

void f_00419158(void) /* sub_419158 */
{
    FN_ENTER(0x00419158);
    /* 00419158: mov eax, dword ptr [0xa4376c] */ r_eax = R32((u32)(0xa4376cu));
    /* 0041915d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041915f: je 0x419172 */ if (fZ) goto L_00419172;
L_00419161:; BB(0x00419161);
    /* 00419161: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419162: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x419167u); f_0082e960();
    /* 00419167: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00419168: mov dword ptr [0xa4376c], 0 */ W32((u32)(0xa4376cu), 0x0u);
L_00419172:; BB(0x00419172);
    /* 00419172: mov ecx, dword ptr [0xa43724] */ r_ecx = R32((u32)(0xa43724u));
    /* 00419178: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041917a: je 0x41918f */ if (fZ) goto L_0041918f;
L_0041917c:; BB(0x0041917c);
    /* 0041917c: je 0x419185 */ if (fZ) goto L_00419185;
L_0041917e:; BB(0x0041917e);
    /* 0041917e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00419180: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x419185u); f_004066a8();
L_00419185:; BB(0x00419185);
    /* 00419185: mov dword ptr [0xa43724], 0 */ W32((u32)(0xa43724u), 0x0u);
L_0041918f:; BB(0x0041918f);
    /* 0041918f: ret  */ FN_RET(0x00419158); r_esp += 4; return;
}

void f_00419190(void)
{
    FN_ENTER(0x00419190);
    /* 00419190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419191: mov ebp, esp */ r_ebp = r_esp;
    /* 00419193: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00419195: push 0x8cd52c */ { u32 v = 0x8cd52cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041919a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004191a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004191a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004191a8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004191ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004191ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004191b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004191b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004191b7: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 004191b9: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x4191beu); f_006bb100();
    /* 004191be: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004191c5: push 0x8c4 */ { u32 v = 0x8c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004191ca: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4191cfu); f_005caba4();
    /* 004191cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004191d2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004191d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004191d7: je 0x419210 */ if (fZ) goto L_00419210;
L_004191d9:; BB(0x004191d9);
    /* 004191d9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004191e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004191e7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004191ea: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 004191f0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004191f3: call 0x419214 */ r_esp -= 4; W32(r_esp, 0x4191f8u); f_00419214();
    /* 004191f8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004191fb: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00419202:; BB(0x00419202);
    /* 00419202: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00419205: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041920c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041920e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041920f: ret  */ FN_RET(0x00419190); r_esp += 4; return;
L_00419210:; BB(0x00419210);
    /* 00419210: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00419212: jmp 0x419202 */ goto L_00419202;
}

void f_00419214(void) /* sub_419214 */
{
    FN_ENTER(0x00419214);
    /* 00419214: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419215: mov ebp, esp */ r_ebp = r_esp;
    /* 00419217: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00419219: push 0x8cd62c */ { u32 v = 0x8cd62cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041921e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00419224: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419225: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0041922c: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041922f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00419232: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00419235: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00419238: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0041923b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041923e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00419241: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00419244: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419247: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x41924cu); f_005216f4();
    /* 0041924c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00419253: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419256: mov dword ptr [ecx], 0xaf3a20 */ W32((u32)(r_ecx), 0xaf3a20u);
    /* 0041925c: add ecx, 0x3cc */ {  u32 a = r_ecx; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00419262: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00419264: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x419269u); f_008193cc();
    /* 00419269: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00419270: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419273: add ecx, 0x5fc */ {  u32 a = r_ecx; u32 b = 0x5fcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00419279: call 0x782cd8 */ r_esp -= 4; W32(r_esp, 0x41927eu); f_00782cd8();
    /* 0041927e: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00419285: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419288: add ecx, 0x620 */ {  u32 a = r_ecx; u32 b = 0x620u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041928e: call 0x782cd8 */ r_esp -= 4; W32(r_esp, 0x419293u); f_00782cd8();
    /* 00419293: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0041929a: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0041929f: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 004192a4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004192a7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004192a9: add eax, 0x6f0 */ {  u32 a = r_eax; u32 b = 0x6f0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004192ae: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004192b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004192b1: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x4192b6u); f_00858736();
    /* 004192b6: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004192bd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004192c0: add ecx, 0x784 */ {  u32 a = r_ecx; u32 b = 0x784u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004192c6: call 0x763030 */ r_esp -= 4; W32(r_esp, 0x4192cbu); f_00763030();
    /* 004192cb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004192ce: mov eax, dword ptr [0x9a3cac] */ r_eax = R32((u32)(0x9a3cacu));
    /* 004192d3: mov edx, dword ptr [0xa43750] */ r_edx = R32((u32)(0xa43750u));
    /* 004192d9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004192dc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004192de: jne 0x4192e6 */ if (!fZ) goto L_004192e6;
L_004192e0:; BB(0x004192e0);
    /* 004192e0: mov dword ptr [0xa43750], ecx */ W32((u32)(0xa43750u), r_ecx);
L_004192e6:; BB(0x004192e6);
    /* 004192e6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004192e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004192ea: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x4192efu); f_0051f750();
    /* 004192ef: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004192f2: movsx eax, word ptr [ebx + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cu));
    /* 004192f6: mov dword ptr [ebx + 0x3c8], 0 */ W32((u32)(r_ebx+0x3c8u), 0x0u);
    /* 00419300: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00419302: jl 0x419334 */ if ((fS!=fO)) goto L_00419334;
L_00419304:; BB(0x00419304);
    /* 00419304: cmp eax, 0xb4f */ {  u32 a = r_eax; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419309: jg 0x419334 */ if ((!fZ&&fS==fO)) goto L_00419334;
L_0041930b:; BB(0x0041930b);
    /* 0041930b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041930d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041930f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00419312: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00419314: mov eax, dword ptr [0xab02b8] */ r_eax = R32((u32)(0xab02b8u));
    /* 00419319: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 0041931c: and ecx, 0x12008 */ {  u32 a = r_ecx; u32 b = 0x12008u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00419322: cmp ecx, 0x12008 */ {  u32 a = r_ecx; u32 b = 0x12008u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419328: jne 0x419334 */ if (!fZ) goto L_00419334;
L_0041932a:; BB(0x0041932a);
    /* 0041932a: mov dword ptr [ebx + 0x3c8], 0x40 */ W32((u32)(r_ebx+0x3c8u), 0x40u);
L_00419334:; BB(0x00419334);
    /* 00419334: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00419336: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x41933bu); f_00521840();
    /* 0041933b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041933e: mov ebx, dword ptr [0xa43724] */ r_ebx = R32((u32)(0xa43724u));
    /* 00419344: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00419346: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 0041934c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0041934f: push 0x9a39a0 */ { u32 v = 0x9a39a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00419354: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00419357: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 0041935d: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00419360: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 00419363: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x419368u); f_0051ff3c();
    /* 00419368: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041936b: mov eax, dword ptr [0xa43724] */ r_eax = R32((u32)(0xa43724u));
    /* 00419370: mov dword ptr [ecx + 0xd8], 0x9a3ae0 */ W32((u32)(r_ecx+0xd8u), 0x9a3ae0u);
    /* 0041937a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0041937c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041937d: mov dword ptr [ecx + 0xb0], ebx */ W32((u32)(r_ecx+0xb0u), r_ebx);
    /* 00419383: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00419389: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0041938f: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 00419396: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x41939bu); f_007aa4c8();
    /* 0041939b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041939e: mov esi, dword ptr [0xa436c4] */ r_esi = R32((u32)(0xa436c4u));
    /* 004193a4: mov ebx, dword ptr [0x9a3eec] */ r_ebx = R32((u32)(0x9a3eecu));
    /* 004193aa: mov edx, dword ptr [0xa436b0] */ r_edx = R32((u32)(0xa436b0u));
    /* 004193b0: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 004193b7: push dword ptr [edx*4 + 0xa43734] */ { u32 v = R32((u32)(r_edx*4+0xa43734u)); r_esp -= 4; W32(r_esp, v); }
    /* 004193be: push dword ptr [ebx*4 + 0xa43738] */ { u32 v = R32((u32)(r_ebx*4+0xa43738u)); r_esp -= 4; W32(r_esp, v); }
    /* 004193c5: push dword ptr [esi*4 + 0xa4374c] */ { u32 v = R32((u32)(r_esi*4+0xa4374cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004193cc: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004193d3: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4193d8u); f_00520c70();
    /* 004193d8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004193db: call 0x520350 */ r_esp -= 4; W32(r_esp, 0x4193e0u); f_00520350();
    /* 004193e0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004193e3: mov dword ptr [ecx + 0x358], 0x9a3dac */ W32((u32)(r_ecx+0x358u), 0x9a3dacu);
    /* 004193ed: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004193ef: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x4193f4u); f_00520390();
    /* 004193f4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004193f7: mov dword ptr [ecx + 0x384], 0x41a00000 */ W32((u32)(r_ecx+0x384u), 0x41a00000u);
    /* 00419401: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00419403: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x419408u); f_00521820();
    /* 00419408: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041940b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0041940d: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x419412u); f_005217fc();
    /* 00419412: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419415: mov ecx, dword ptr [ebx + 0x3c8] */ r_ecx = R32((u32)(r_ebx+0x3c8u));
    /* 0041941b: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 0041941e: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00419421: or ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00419427: mov dword ptr [ebx + 0x3c8], ecx */ W32((u32)(r_ebx+0x3c8u), r_ecx);
    /* 0041942d: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 00419430: mov dword ptr [ebx + 0x3ec], 0 */ W32((u32)(r_ebx+0x3ecu), 0x0u);
    /* 0041943a: mov dword ptr [ebx + 0x3f0], ecx */ W32((u32)(r_ebx+0x3f0u), r_ecx);
    /* 00419440: mov dword ptr [ebx + 0x3f4], eax */ W32((u32)(r_ebx+0x3f4u), r_eax);
    /* 00419446: mov dword ptr [ebx + 0x3f8], edx */ W32((u32)(r_ebx+0x3f8u), r_edx);
    /* 0041944c: mov dword ptr [ebx + 0x3fc], ecx */ W32((u32)(r_ebx+0x3fcu), r_ecx);
    /* 00419452: mov dword ptr [ebx + 0x400], eax */ W32((u32)(r_ebx+0x400u), r_eax);
    /* 00419458: mov dword ptr [ebx + 0x404], edx */ W32((u32)(r_ebx+0x404u), r_edx);
    /* 0041945e: mov dword ptr [ebx + 0x408], ecx */ W32((u32)(r_ebx+0x408u), r_ecx);
    /* 00419464: mov dword ptr [ebx + 0x40c], eax */ W32((u32)(r_ebx+0x40cu), r_eax);
    /* 0041946a: mov dword ptr [ebx + 0x410], edx */ W32((u32)(r_ebx+0x410u), r_edx);
    /* 00419470: mov dword ptr [ebx + 0x414], ecx */ W32((u32)(r_ebx+0x414u), r_ecx);
    /* 00419476: mov dword ptr [ebx + 0x418], eax */ W32((u32)(r_ebx+0x418u), r_eax);
    /* 0041947c: mov dword ptr [ebx + 0x41c], edx */ W32((u32)(r_ebx+0x41cu), r_edx);
    /* 00419482: mov dword ptr [ebx + 0x420], ecx */ W32((u32)(r_ebx+0x420u), r_ecx);
    /* 00419488: mov dword ptr [ebx + 0x424], eax */ W32((u32)(r_ebx+0x424u), r_eax);
    /* 0041948e: mov dword ptr [ebx + 0x428], edx */ W32((u32)(r_ebx+0x428u), r_edx);
    /* 00419494: mov dword ptr [ebx + 0x42c], ecx */ W32((u32)(r_ebx+0x42cu), r_ecx);
    /* 0041949a: mov dword ptr [ebx + 0x430], eax */ W32((u32)(r_ebx+0x430u), r_eax);
    /* 004194a0: mov dword ptr [ebx + 0x434], edx */ W32((u32)(r_ebx+0x434u), r_edx);
    /* 004194a6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004194a8:; BB(0x004194a8);
    /* 004194a8: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004194ab: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004194ad: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 004194b0: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004194b2: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004194b5: cmp edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004194b8: mov dword ptr [eax + ebx + 0x438], ecx */ W32((u32)(r_eax+r_ebx+0x438u), r_ecx);
    /* 004194bf: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004194c2: mov dword ptr [eax + ebx + 0x43c], ecx */ W32((u32)(r_eax+r_ebx+0x43cu), r_ecx);
    /* 004194c9: mov edi, dword ptr [ebx + 0x40] */ r_edi = R32((u32)(r_ebx+0x40u));
    /* 004194cc: mov dword ptr [eax + ebx + 0x440], edi */ W32((u32)(r_eax+r_ebx+0x440u), r_edi);
    /* 004194d3: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004194d6: mov dword ptr [eax + ebx + 0x444], ecx */ W32((u32)(r_eax+r_ebx+0x444u), r_ecx);
    /* 004194dd: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004194e0: mov dword ptr [eax + ebx + 0x448], ecx */ W32((u32)(r_eax+r_ebx+0x448u), r_ecx);
    /* 004194e7: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004194ea: mov dword ptr [eax + ebx + 0x44c], ecx */ W32((u32)(r_eax+r_ebx+0x44cu), r_ecx);
    /* 004194f1: jge 0x4194f8 */ if ((fS==fO)) goto L_004194f8;
L_004194f3:; BB(0x004194f3);
    /* 004194f3: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004194f6: jmp 0x4194a8 */ goto L_004194a8;
L_004194f8:; BB(0x004194f8);
    /* 004194f8: mov dword ptr [ebx + 0x5d0], 0 */ W32((u32)(r_ebx+0x5d0u), 0x0u);
    /* 00419502: mov dword ptr [ebx + 0x5d4], 0 */ W32((u32)(r_ebx+0x5d4u), 0x0u);
    /* 0041950c: mov dword ptr [ebx + 0x5d8], 0 */ W32((u32)(r_ebx+0x5d8u), 0x0u);
    /* 00419516: mov dword ptr [ebx + 0x5dc], 0 */ W32((u32)(r_ebx+0x5dcu), 0x0u);
    /* 00419520: mov dword ptr [ebx + 0x5e0], 0 */ W32((u32)(r_ebx+0x5e0u), 0x0u);
    /* 0041952a: mov dword ptr [ebx + 0x5e8], 0 */ W32((u32)(r_ebx+0x5e8u), 0x0u);
    /* 00419534: mov dword ptr [ebx + 0x5e4], 0 */ W32((u32)(r_ebx+0x5e4u), 0x0u);
    /* 0041953e: mov dword ptr [ebx + 0x5ec], 0 */ W32((u32)(r_ebx+0x5ecu), 0x0u);
    /* 00419548: mov dword ptr [ebx + 0x5f0], 0 */ W32((u32)(r_ebx+0x5f0u), 0x0u);
    /* 00419552: mov dword ptr [ebx + 0x5f4], 0 */ W32((u32)(r_ebx+0x5f4u), 0x0u);
    /* 0041955c: mov dword ptr [ebx + 0x5f8], 0 */ W32((u32)(r_ebx+0x5f8u), 0x0u);
    /* 00419566: add ebx, 0x5fc */ {  u32 a = r_ebx; u32 b = 0x5fcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0041956c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041956e: call 0x782ce8 */ r_esp -= 4; W32(r_esp, 0x419573u); f_00782ce8();
    /* 00419573: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419576: add ecx, 0x620 */ {  u32 a = r_ecx; u32 b = 0x620u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041957c: call 0x782ce8 */ r_esp -= 4; W32(r_esp, 0x419581u); f_00782ce8();
    /* 00419581: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419584: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419587: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 0041958a: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 0041958d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00419590: mov dword ptr [edx + 0x644], esi */ W32((u32)(r_edx+0x644u), r_esi);
    /* 00419596: mov dword ptr [edx + 0x648], edi */ W32((u32)(r_edx+0x648u), r_edi);
    /* 0041959c: mov dword ptr [edx + 0x64c], eax */ W32((u32)(r_edx+0x64cu), r_eax);
    /* 004195a2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004195a5: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004195a8: mov dword ptr [edx + 0x650], eax */ W32((u32)(r_edx+0x650u), r_eax);
    /* 004195ae: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004195b1: mov dword ptr [edx + 0x654], eax */ W32((u32)(r_edx+0x654u), r_eax);
    /* 004195b7: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004195ba: mov dword ptr [edx + 0x658], eax */ W32((u32)(r_edx+0x658u), r_eax);
    /* 004195c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004195c2: mov dword ptr [ebx + 0x65c], eax */ W32((u32)(r_ebx+0x65cu), r_eax);
    /* 004195c8: mov dword ptr [ebx + 0x660], eax */ W32((u32)(r_ebx+0x660u), r_eax);
    /* 004195ce: mov dword ptr [ebx + 0x664], 1 */ W32((u32)(r_ebx+0x664u), 0x1u);
    /* 004195d8: mov dword ptr [ebx + 0x684], eax */ W32((u32)(r_ebx+0x684u), r_eax);
    /* 004195de: mov word ptr [ebx + 0x688], ax */ W16((u32)(r_ebx+0x688u), (u16)r_eax);
    /* 004195e5: movsx eax, word ptr [ebx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 004195ec: mov dword ptr [ebx + 0x66c], 0 */ W32((u32)(r_ebx+0x66cu), 0x0u);
    /* 004195f6: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004195f9: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004195fb: mov dword ptr [ebx + 0x670], 0 */ W32((u32)(r_ebx+0x670u), 0x0u);
    /* 00419605: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0041960a: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041960c: mov eax, dword ptr [ebx + 0x2b4] */ r_eax = R32((u32)(r_ebx+0x2b4u));
    /* 00419612: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00419615: mov dword ptr [ebx + 0x680], 0 */ W32((u32)(r_ebx+0x680u), 0x0u);
    /* 0041961f: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00419622: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00419624: mov word ptr [ebx + 0x68a], dx */ W16((u32)(r_ebx+0x68au), (u16)r_edx);
    /* 0041962b: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041962e: mov dword ptr [eax + 0x10], 0x41200000 */ W32((u32)(r_eax+0x10u), 0x41200000u);
    /* 00419635: movsx ecx, word ptr [ebx + 0x2bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 0041963c: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00419641: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00419643: mov eax, ecx */ r_eax = r_ecx;
    /* 00419645: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00419648: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0041964b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041964d: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00419650: movsx edx, word ptr [ebx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 00419657: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00419659: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0041965c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041965e: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419660: jg 0x41966b */ if ((!fZ&&fS==fO)) goto L_0041966b;
L_00419662:; BB(0x00419662);
    /* 00419662: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00419664: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 00419667: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419669: jle 0x419662 */ if ((fZ||fS!=fO)) goto L_00419662;
L_0041966b:; BB(0x0041966b);
    /* 0041966b: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00419672: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00419677: mov word ptr [ebx + 0x688], cx */ W16((u32)(r_ebx+0x688u), (u16)r_ecx);
    /* 0041967e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x419683u); f_005caba4();
    /* 00419683: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419686: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419689: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0041968c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041968e: je 0x419b09 */ if (fZ) goto L_00419b09;
L_00419694:; BB(0x00419694);
    /* 00419694: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0041969b: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004196a2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004196a5: mov ecx, eax */ r_ecx = r_eax;
    /* 004196a7: lea eax, [edx + 0x4ec] */ r_eax = (u32)(r_edx+0x4ecu);
    /* 004196ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004196ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004196af: call 0x4269f8 */ r_esp -= 4; W32(r_esp, 0x4196b4u); f_004269f8();
    /* 004196b4: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_004196bb:; BB(0x004196bb);
    /* 004196bb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004196be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004196c1: mov dword ptr [edx + 0x68c], eax */ W32((u32)(r_edx+0x68cu), r_eax);
    /* 004196c7: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004196ce: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 004196d5: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004196d7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4196dcu); f_008581c5();
    /* 004196dc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004196df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004196e2: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004196e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004196e7: je 0x419aff */ if (fZ) goto L_00419aff;
L_004196ed:; BB(0x004196ed);
    /* 004196ed: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 004196f4: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004196fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004196fd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004196ff: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x419704u); f_00521a4c();
    /* 00419704: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0041970b:; BB(0x0041970b);
    /* 0041970b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041970e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00419711: mov dword ptr [edx + 0x690], eax */ W32((u32)(r_edx+0x690u), r_eax);
    /* 00419717: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0041971e: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00419725: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00419727: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x41972cu); f_005caba4();
    /* 0041972c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041972f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419732: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00419735: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419737: je 0x419af5 */ if (fZ) goto L_00419af5;
L_0041973d:; BB(0x0041973d);
    /* 0041973d: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00419744: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0041974b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041974e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00419751: add eax, 0x3cc */ {  u32 a = r_eax; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419756: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419757: call 0x425c6c */ r_esp -= 4; W32(r_esp, 0x41975cu); f_00425c6c();
    /* 0041975c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00419763:; BB(0x00419763);
    /* 00419763: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419766: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00419769: mov dword ptr [edx + 0x694], eax */ W32((u32)(r_edx+0x694u), r_eax);
    /* 0041976f: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00419776: mov dword ptr [edx + 0x698], 0 */ W32((u32)(r_edx+0x698u), 0x0u);
    /* 00419780: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00419782: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419784: mov dword ptr [edx + 0x69c], 0 */ W32((u32)(r_edx+0x69cu), 0x0u);
    /* 0041978e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00419791: mov dword ptr [edx + 0x6a8], eax */ W32((u32)(r_edx+0x6a8u), r_eax);
    /* 00419797: mov dword ptr [edx + 0x6a0], 0 */ W32((u32)(r_edx+0x6a0u), 0x0u);
    /* 004197a1: mov dword ptr [edx + 0x6ac], eax */ W32((u32)(r_edx+0x6acu), r_eax);
    /* 004197a7: mov dword ptr [edx + 0x6a4], 0 */ W32((u32)(r_edx+0x6a4u), 0x0u);
    /* 004197b1: mov dword ptr [edx + 0x6b0], 0 */ W32((u32)(r_edx+0x6b0u), 0x0u);
    /* 004197bb: mov dword ptr [edx + 0x6b4], 0 */ W32((u32)(r_edx+0x6b4u), 0x0u);
    /* 004197c5: mov dword ptr [edx + 0x6b8], 0 */ W32((u32)(r_edx+0x6b8u), 0x0u);
    /* 004197cf: mov dword ptr [edx + 0x6bc], 0 */ W32((u32)(r_edx+0x6bcu), 0x0u);
    /* 004197d9: mov dword ptr [edx + 0x6c0], 0 */ W32((u32)(r_edx+0x6c0u), 0x0u);
    /* 004197e3: mov dword ptr [edx + 0x6c4], 0 */ W32((u32)(r_edx+0x6c4u), 0x0u);
    /* 004197ed: mov dword ptr [edx + 0x6c8], 0 */ W32((u32)(r_edx+0x6c8u), 0x0u);
    /* 004197f7: mov dword ptr [edx + 0x6cc], 0 */ W32((u32)(r_edx+0x6ccu), 0x0u);
    /* 00419801: mov dword ptr [edx + 0x6d0], 0 */ W32((u32)(r_edx+0x6d0u), 0x0u);
    /* 0041980b: mov dword ptr [edx + 0x6d4], 0 */ W32((u32)(r_edx+0x6d4u), 0x0u);
    /* 00419815: mov dword ptr [edx + 0x6d8], 0 */ W32((u32)(r_edx+0x6d8u), 0x0u);
    /* 0041981f: mov dword ptr [edx + 0x6dc], 0 */ W32((u32)(r_edx+0x6dcu), 0x0u);
    /* 00419829: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x41982eu); f_005caba4();
    /* 0041982e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419831: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419834: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00419837: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419839: je 0x419aeb */ if (fZ) goto L_00419aeb;
L_0041983f:; BB(0x0041983f);
    /* 0041983f: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00419846: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0041984d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419850: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00419853: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00419856: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419859: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041985a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041985b: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00419861: call 0x427984 */ r_esp -= 4; W32(r_esp, 0x419866u); f_00427984();
    /* 00419866: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0041986d:; BB(0x0041986d);
    /* 0041986d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419870: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00419873: mov dword ptr [ecx + 0x6e0], eax */ W32((u32)(r_ecx+0x6e0u), r_eax);
    /* 00419879: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00419880: mov dword ptr [ecx + 0x6e4], 0 */ W32((u32)(r_ecx+0x6e4u), 0x0u);
    /* 0041988a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0041988c:; BB(0x0041988c);
    /* 0041988c: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0041988f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419891: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00419894: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00419896: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00419898: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041989a: lea ecx, [ecx + edx + 0x6f0] */ r_ecx = (u32)(r_ecx+r_edx+0x6f0u);
    /* 004198a1: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x4198a6u); f_0057739c();
    /* 004198a6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004198a9: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004198ac: jge 0x4198b3 */ if ((fS==fO)) goto L_004198b3;
L_004198ae:; BB(0x004198ae);
    /* 004198ae: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004198b1: jmp 0x41988c */ goto L_0041988c;
L_004198b3:; BB(0x004198b3);
    /* 004198b3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004198b6: mov dword ptr [ecx + 0x764], 0xa8c */ W32((u32)(r_ecx+0x764u), 0xa8cu);
    /* 004198c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004198c2: mov dword ptr [ecx + 0x760], edx */ W32((u32)(r_ecx+0x760u), r_edx);
    /* 004198c8: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 004198cd: mov dword ptr [ecx + 0x768], edx */ W32((u32)(r_ecx+0x768u), r_edx);
    /* 004198d3: mov word ptr [ecx + 0x76c], ax */ W16((u32)(r_ecx+0x76cu), (u16)r_eax);
    /* 004198da: mov dword ptr [ecx + 0x770], edx */ W32((u32)(r_ecx+0x770u), r_edx);
    /* 004198e0: mov dword ptr [ecx + 0x774], edx */ W32((u32)(r_ecx+0x774u), r_edx);
    /* 004198e6: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4198ebu); f_00420a44();
    /* 004198eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004198ed: jne 0x419908 */ if (!fZ) goto L_00419908;
L_004198ef:; BB(0x004198ef);
    /* 004198ef: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004198f2: mov dword ptr [eax + 0x778], 1 */ W32((u32)(r_eax+0x778u), 0x1u);
    /* 004198fc: mov dword ptr [eax + 0x780], 0x8fbeec */ W32((u32)(r_eax+0x780u), 0x8fbeecu);
    /* 00419906: jmp 0x419924 */ goto L_00419924;
L_00419908:; BB(0x00419908);
    /* 00419908: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041990b: jne 0x419924 */ if (!fZ) goto L_00419924;
L_0041990d:; BB(0x0041990d);
    /* 0041990d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419910: mov dword ptr [eax + 0x778], 0x13 */ W32((u32)(r_eax+0x778u), 0x13u);
    /* 0041991a: mov dword ptr [eax + 0x780], 0x8fbf0c */ W32((u32)(r_eax+0x780u), 0x8fbf0cu);
L_00419924:; BB(0x00419924);
    /* 00419924: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0041992b: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00419930: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x419935u); f_005caba4();
    /* 00419935: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419938: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041993b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041993e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419940: je 0x419ae1 */ if (fZ) goto L_00419ae1;
L_00419946:; BB(0x00419946);
    /* 00419946: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0041994d: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00419954: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00419957: mov ecx, eax */ r_ecx = r_eax;
    /* 00419959: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041995b: call 0x521bbc */ r_esp -= 4; W32(r_esp, 0x419960u); f_00521bbc();
    /* 00419960: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00419963: mov dword ptr [eax], 0xaf3be0 */ W32((u32)(r_eax), 0xaf3be0u);
    /* 00419969: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00419970:; BB(0x00419970);
    /* 00419970: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419973: mov dword ptr [esi + 0x77c], eax */ W32((u32)(r_esi+0x77cu), r_eax);
    /* 00419979: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00419980: mov eax, dword ptr [0xaae974] */ r_eax = R32((u32)(0xaae974u));
    /* 00419985: mov dword ptr [esi + 0x884], 0 */ W32((u32)(r_esi+0x884u), 0x0u);
    /* 0041998f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00419991: mov dword ptr [esi + 0x86c], ebx */ W32((u32)(r_esi+0x86cu), r_ebx);
    /* 00419997: mov dword ptr [esi + 0x888], 0 */ W32((u32)(r_esi+0x888u), 0x0u);
    /* 004199a1: mov dword ptr [esi + 0x870], ebx */ W32((u32)(r_esi+0x870u), r_ebx);
    /* 004199a7: mov dword ptr [esi + 0x874], ebx */ W32((u32)(r_esi+0x874u), r_ebx);
    /* 004199ad: mov dword ptr [esi + 0x878], ebx */ W32((u32)(r_esi+0x878u), r_ebx);
    /* 004199b3: mov dword ptr [esi + 0x88c], 0 */ W32((u32)(r_esi+0x88cu), 0x0u);
    /* 004199bd: mov dword ptr [esi + 0x87c], ebx */ W32((u32)(r_esi+0x87cu), r_ebx);
    /* 004199c3: mov dword ptr [esi + 0x880], ebx */ W32((u32)(r_esi+0x880u), r_ebx);
    /* 004199c9: mov dword ptr [esi + 0x8b0], ebx */ W32((u32)(r_esi+0x8b0u), r_ebx);
    /* 004199cf: mov dword ptr [esi + 0x890], 0 */ W32((u32)(r_esi+0x890u), 0x0u);
    /* 004199d9: mov dword ptr [esi + 0x8b4], ebx */ W32((u32)(r_esi+0x8b4u), r_ebx);
    /* 004199df: mov dword ptr [esi + 0x8b8], ebx */ W32((u32)(r_esi+0x8b8u), r_ebx);
    /* 004199e5: mov dword ptr [esi + 0x8bc], ebx */ W32((u32)(r_esi+0x8bcu), r_ebx);
    /* 004199eb: mov dword ptr [esi + 0x894], 0 */ W32((u32)(r_esi+0x894u), 0x0u);
    /* 004199f5: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004199f8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004199fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004199fc: mov dword ptr [esi + 0x898], 0 */ W32((u32)(r_esi+0x898u), 0x0u);
    /* 00419a06: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00419a08: mov dword ptr [esi + 0x6e8], ebx */ W32((u32)(r_esi+0x6e8u), r_ebx);
    /* 00419a0e: mov word ptr [esi + 0x32e], bx */ W16((u32)(r_esi+0x32eu), (u16)r_ebx);
    /* 00419a15: mov dword ptr [esi + 0x89c], 0 */ W32((u32)(r_esi+0x89cu), 0x0u);
    /* 00419a1f: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00419a26: mov dword ptr [esi + 0x6ec], ecx */ W32((u32)(r_esi+0x6ecu), r_ecx);
    /* 00419a2c: mov dword ptr [esi + 0x8a0], 0 */ W32((u32)(r_esi+0x8a0u), 0x0u);
    /* 00419a36: mov dword ptr [esi + 0x8a4], 0 */ W32((u32)(r_esi+0x8a4u), 0x0u);
    /* 00419a40: mov dword ptr [esi + 0x8a8], 0 */ W32((u32)(r_esi+0x8a8u), 0x0u);
    /* 00419a4a: mov dword ptr [esi + 0x8ac], 0 */ W32((u32)(r_esi+0x8acu), 0x0u);
    /* 00419a54: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x419a59u); f_00694cc8();
    /* 00419a59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419a5b: jne 0x419a6c */ if (!fZ) goto L_00419a6c;
L_00419a5d:; BB(0x00419a5d);
    /* 00419a5d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419a60: mov dword ptr [ecx + 0x3e8], 0 */ W32((u32)(r_ecx+0x3e8u), 0x0u);
    /* 00419a6a: jmp 0x419a91 */ goto L_00419a91;
L_00419a6c:; BB(0x00419a6c);
    /* 00419a6c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419a6f: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x419a74u); f_00520db0();
    /* 00419a74: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419a77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419a79: je 0x419a87 */ if (fZ) goto L_00419a87;
L_00419a7b:; BB(0x00419a7b);
    /* 00419a7b: mov dword ptr [ecx + 0x3e8], 0 */ W32((u32)(r_ecx+0x3e8u), 0x0u);
    /* 00419a85: jmp 0x419a91 */ goto L_00419a91;
L_00419a87:; BB(0x00419a87);
    /* 00419a87: mov dword ptr [ecx + 0x3e8], 1 */ W32((u32)(r_ecx+0x3e8u), 0x1u);
L_00419a91:; BB(0x00419a91);
    /* 00419a91: call 0x425b18 */ r_esp -= 4; W32(r_esp, 0x419a96u); f_00425b18();
    /* 00419a96: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419a99: mov edx, dword ptr [ecx + 0x3c8] */ r_edx = R32((u32)(r_ecx+0x3c8u));
    /* 00419a9f: mov eax, 0x1d */ r_eax = 0x1du;
    /* 00419aa4: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00419aab: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00419aae: jne 0x419abc */ if (!fZ) goto L_00419abc;
L_00419ab0:; BB(0x00419ab0);
    /* 00419ab0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00419ab2: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00419ab4: call 0x419b14 */ r_esp -= 4; W32(r_esp, 0x419ab9u); f_00419b14();
    /* 00419ab9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_00419abc:; BB(0x00419abc);
    /* 00419abc: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00419abf: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00419ac2: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00419ac5: mov eax, ecx */ r_eax = r_ecx;
    /* 00419ac7: mov dword ptr [ecx + 0x8c0], 0 */ W32((u32)(r_ecx+0x8c0u), 0x0u);
    /* 00419ad1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00419ad4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00419adb: mov esp, ebp */ r_esp = r_ebp;
    /* 00419add: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419ade: ret 8 */ FN_RET(0x00419214); r_esp += 12; return;
L_00419ae1:; BB(0x00419ae1);
    /* 00419ae1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419ae3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419ae6: jmp 0x419970 */ goto L_00419970;
L_00419aeb:; BB(0x00419aeb);
    /* 00419aeb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419aed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419af0: jmp 0x41986d */ goto L_0041986d;
L_00419af5:; BB(0x00419af5);
    /* 00419af5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419af7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419afa: jmp 0x419763 */ goto L_00419763;
L_00419aff:; BB(0x00419aff);
    /* 00419aff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419b01: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419b04: jmp 0x41970b */ goto L_0041970b;
L_00419b09:; BB(0x00419b09);
    /* 00419b09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419b0b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419b0e: jmp 0x4196bb */ goto L_004196bb;
}

void f_00419360(void)
{
    FN_ENTER(0x00419360);
    /* 00419360: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 00419363: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x419368u); f_0051ff3c();
    /* 00419368: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041936b: mov eax, dword ptr [0xa43724] */ r_eax = R32((u32)(0xa43724u));
    /* 00419370: mov dword ptr [ecx + 0xd8], 0x9a3ae0 */ W32((u32)(r_ecx+0xd8u), 0x9a3ae0u);
    /* 0041937a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0041937c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041937d: mov dword ptr [ecx + 0xb0], ebx */ W32((u32)(r_ecx+0xb0u), r_ebx);
    /* 00419383: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00419389: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0041938f: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 00419396: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x41939bu); f_007aa4c8();
    /* 0041939b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041939e: mov esi, dword ptr [0xa436c4] */ r_esi = R32((u32)(0xa436c4u));
    /* 004193a4: mov ebx, dword ptr [0x9a3eec] */ r_ebx = R32((u32)(0x9a3eecu));
    /* 004193aa: mov edx, dword ptr [0xa436b0] */ r_edx = R32((u32)(0xa436b0u));
    /* 004193b0: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 004193b7: push dword ptr [edx*4 + 0xa43734] */ { u32 v = R32((u32)(r_edx*4+0xa43734u)); r_esp -= 4; W32(r_esp, v); }
    /* 004193be: push dword ptr [ebx*4 + 0xa43738] */ { u32 v = R32((u32)(r_ebx*4+0xa43738u)); r_esp -= 4; W32(r_esp, v); }
    /* 004193c5: push dword ptr [esi*4 + 0xa4374c] */ { u32 v = R32((u32)(r_esi*4+0xa4374cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004193cc: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004193d3: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4193d8u); f_00520c70();
    /* 004193d8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004193db: call 0x520350 */ r_esp -= 4; W32(r_esp, 0x4193e0u); f_00520350();
    /* 004193e0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004193e3: mov dword ptr [ecx + 0x358], 0x9a3dac */ W32((u32)(r_ecx+0x358u), 0x9a3dacu);
    /* 004193ed: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004193ef: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x4193f4u); f_00520390();
    /* 004193f4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004193f7: mov dword ptr [ecx + 0x384], 0x41a00000 */ W32((u32)(r_ecx+0x384u), 0x41a00000u);
    /* 00419401: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00419403: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x419408u); f_00521820();
    /* 00419408: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041940b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0041940d: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x419412u); f_005217fc();
    /* 00419412: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419415: mov ecx, dword ptr [ebx + 0x3c8] */ r_ecx = R32((u32)(r_ebx+0x3c8u));
    /* 0041941b: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 0041941e: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00419421: or ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00419427: mov dword ptr [ebx + 0x3c8], ecx */ W32((u32)(r_ebx+0x3c8u), r_ecx);
    /* 0041942d: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 00419430: mov dword ptr [ebx + 0x3ec], 0 */ W32((u32)(r_ebx+0x3ecu), 0x0u);
    /* 0041943a: mov dword ptr [ebx + 0x3f0], ecx */ W32((u32)(r_ebx+0x3f0u), r_ecx);
    /* 00419440: mov dword ptr [ebx + 0x3f4], eax */ W32((u32)(r_ebx+0x3f4u), r_eax);
    /* 00419446: mov dword ptr [ebx + 0x3f8], edx */ W32((u32)(r_ebx+0x3f8u), r_edx);
    /* 0041944c: mov dword ptr [ebx + 0x3fc], ecx */ W32((u32)(r_ebx+0x3fcu), r_ecx);
    /* 00419452: mov dword ptr [ebx + 0x400], eax */ W32((u32)(r_ebx+0x400u), r_eax);
    /* 00419458: mov dword ptr [ebx + 0x404], edx */ W32((u32)(r_ebx+0x404u), r_edx);
    /* 0041945e: mov dword ptr [ebx + 0x408], ecx */ W32((u32)(r_ebx+0x408u), r_ecx);
    /* 00419464: mov dword ptr [ebx + 0x40c], eax */ W32((u32)(r_ebx+0x40cu), r_eax);
    /* 0041946a: mov dword ptr [ebx + 0x410], edx */ W32((u32)(r_ebx+0x410u), r_edx);
    /* 00419470: mov dword ptr [ebx + 0x414], ecx */ W32((u32)(r_ebx+0x414u), r_ecx);
    /* 00419476: mov dword ptr [ebx + 0x418], eax */ W32((u32)(r_ebx+0x418u), r_eax);
    /* 0041947c: mov dword ptr [ebx + 0x41c], edx */ W32((u32)(r_ebx+0x41cu), r_edx);
    /* 00419482: mov dword ptr [ebx + 0x420], ecx */ W32((u32)(r_ebx+0x420u), r_ecx);
    /* 00419488: mov dword ptr [ebx + 0x424], eax */ W32((u32)(r_ebx+0x424u), r_eax);
    /* 0041948e: mov dword ptr [ebx + 0x428], edx */ W32((u32)(r_ebx+0x428u), r_edx);
    /* 00419494: mov dword ptr [ebx + 0x42c], ecx */ W32((u32)(r_ebx+0x42cu), r_ecx);
    /* 0041949a: mov dword ptr [ebx + 0x430], eax */ W32((u32)(r_ebx+0x430u), r_eax);
    /* 004194a0: mov dword ptr [ebx + 0x434], edx */ W32((u32)(r_ebx+0x434u), r_edx);
    /* 004194a6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004194a8:; BB(0x004194a8);
    /* 004194a8: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004194ab: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004194ad: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 004194b0: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004194b2: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004194b5: cmp edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004194b8: mov dword ptr [eax + ebx + 0x438], ecx */ W32((u32)(r_eax+r_ebx+0x438u), r_ecx);
    /* 004194bf: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004194c2: mov dword ptr [eax + ebx + 0x43c], ecx */ W32((u32)(r_eax+r_ebx+0x43cu), r_ecx);
    /* 004194c9: mov edi, dword ptr [ebx + 0x40] */ r_edi = R32((u32)(r_ebx+0x40u));
    /* 004194cc: mov dword ptr [eax + ebx + 0x440], edi */ W32((u32)(r_eax+r_ebx+0x440u), r_edi);
    /* 004194d3: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004194d6: mov dword ptr [eax + ebx + 0x444], ecx */ W32((u32)(r_eax+r_ebx+0x444u), r_ecx);
    /* 004194dd: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004194e0: mov dword ptr [eax + ebx + 0x448], ecx */ W32((u32)(r_eax+r_ebx+0x448u), r_ecx);
    /* 004194e7: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004194ea: mov dword ptr [eax + ebx + 0x44c], ecx */ W32((u32)(r_eax+r_ebx+0x44cu), r_ecx);
    /* 004194f1: jge 0x4194f8 */ if ((fS==fO)) goto L_004194f8;
L_004194f3:; BB(0x004194f3);
    /* 004194f3: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004194f6: jmp 0x4194a8 */ goto L_004194a8;
L_004194f8:; BB(0x004194f8);
    /* 004194f8: mov dword ptr [ebx + 0x5d0], 0 */ W32((u32)(r_ebx+0x5d0u), 0x0u);
    /* 00419502: mov dword ptr [ebx + 0x5d4], 0 */ W32((u32)(r_ebx+0x5d4u), 0x0u);
    /* 0041950c: mov dword ptr [ebx + 0x5d8], 0 */ W32((u32)(r_ebx+0x5d8u), 0x0u);
    /* 00419516: mov dword ptr [ebx + 0x5dc], 0 */ W32((u32)(r_ebx+0x5dcu), 0x0u);
    /* 00419520: mov dword ptr [ebx + 0x5e0], 0 */ W32((u32)(r_ebx+0x5e0u), 0x0u);
    /* 0041952a: mov dword ptr [ebx + 0x5e8], 0 */ W32((u32)(r_ebx+0x5e8u), 0x0u);
    /* 00419534: mov dword ptr [ebx + 0x5e4], 0 */ W32((u32)(r_ebx+0x5e4u), 0x0u);
    /* 0041953e: mov dword ptr [ebx + 0x5ec], 0 */ W32((u32)(r_ebx+0x5ecu), 0x0u);
    /* 00419548: mov dword ptr [ebx + 0x5f0], 0 */ W32((u32)(r_ebx+0x5f0u), 0x0u);
    /* 00419552: mov dword ptr [ebx + 0x5f4], 0 */ W32((u32)(r_ebx+0x5f4u), 0x0u);
    /* 0041955c: mov dword ptr [ebx + 0x5f8], 0 */ W32((u32)(r_ebx+0x5f8u), 0x0u);
    /* 00419566: add ebx, 0x5fc */ {  u32 a = r_ebx; u32 b = 0x5fcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0041956c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0041956e: call 0x782ce8 */ r_esp -= 4; W32(r_esp, 0x419573u); f_00782ce8();
    /* 00419573: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419576: add ecx, 0x620 */ {  u32 a = r_ecx; u32 b = 0x620u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041957c: call 0x782ce8 */ r_esp -= 4; W32(r_esp, 0x419581u); f_00782ce8();
    /* 00419581: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419584: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419587: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 0041958a: mov edi, dword ptr [edx + 0x3c] */ r_edi = R32((u32)(r_edx+0x3cu));
    /* 0041958d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00419590: mov dword ptr [edx + 0x644], esi */ W32((u32)(r_edx+0x644u), r_esi);
    /* 00419596: mov dword ptr [edx + 0x648], edi */ W32((u32)(r_edx+0x648u), r_edi);
    /* 0041959c: mov dword ptr [edx + 0x64c], eax */ W32((u32)(r_edx+0x64cu), r_eax);
    /* 004195a2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004195a5: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004195a8: mov dword ptr [edx + 0x650], eax */ W32((u32)(r_edx+0x650u), r_eax);
    /* 004195ae: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004195b1: mov dword ptr [edx + 0x654], eax */ W32((u32)(r_edx+0x654u), r_eax);
    /* 004195b7: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004195ba: mov dword ptr [edx + 0x658], eax */ W32((u32)(r_edx+0x658u), r_eax);
    /* 004195c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004195c2: mov dword ptr [ebx + 0x65c], eax */ W32((u32)(r_ebx+0x65cu), r_eax);
    /* 004195c8: mov dword ptr [ebx + 0x660], eax */ W32((u32)(r_ebx+0x660u), r_eax);
    /* 004195ce: mov dword ptr [ebx + 0x664], 1 */ W32((u32)(r_ebx+0x664u), 0x1u);
    /* 004195d8: mov dword ptr [ebx + 0x684], eax */ W32((u32)(r_ebx+0x684u), r_eax);
    /* 004195de: mov word ptr [ebx + 0x688], ax */ W16((u32)(r_ebx+0x688u), (u16)r_eax);
    /* 004195e5: movsx eax, word ptr [ebx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 004195ec: mov dword ptr [ebx + 0x66c], 0 */ W32((u32)(r_ebx+0x66cu), 0x0u);
    /* 004195f6: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004195f9: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004195fb: mov dword ptr [ebx + 0x670], 0 */ W32((u32)(r_ebx+0x670u), 0x0u);
    /* 00419605: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0041960a: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041960c: mov eax, dword ptr [ebx + 0x2b4] */ r_eax = R32((u32)(r_ebx+0x2b4u));
    /* 00419612: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00419615: mov dword ptr [ebx + 0x680], 0 */ W32((u32)(r_ebx+0x680u), 0x0u);
    /* 0041961f: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00419622: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00419624: mov word ptr [ebx + 0x68a], dx */ W16((u32)(r_ebx+0x68au), (u16)r_edx);
    /* 0041962b: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041962e: mov dword ptr [eax + 0x10], 0x41200000 */ W32((u32)(r_eax+0x10u), 0x41200000u);
    /* 00419635: movsx ecx, word ptr [ebx + 0x2bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 0041963c: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00419641: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00419643: mov eax, ecx */ r_eax = r_ecx;
    /* 00419645: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00419648: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0041964b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041964d: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00419650: movsx edx, word ptr [ebx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 00419657: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00419659: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 0041965c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041965e: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419660: jg 0x41966b */ if ((!fZ&&fS==fO)) goto L_0041966b;
L_00419662:; BB(0x00419662);
    /* 00419662: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00419664: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 00419667: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419669: jle 0x419662 */ if ((fZ||fS!=fO)) goto L_00419662;
L_0041966b:; BB(0x0041966b);
    /* 0041966b: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00419672: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00419677: mov word ptr [ebx + 0x688], cx */ W16((u32)(r_ebx+0x688u), (u16)r_ecx);
    /* 0041967e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x419683u); f_005caba4();
    /* 00419683: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419686: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419689: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0041968c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041968e: je 0x419b09 */ if (fZ) goto L_00419b09;
L_00419694:; BB(0x00419694);
    /* 00419694: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0041969b: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004196a2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004196a5: mov ecx, eax */ r_ecx = r_eax;
    /* 004196a7: lea eax, [edx + 0x4ec] */ r_eax = (u32)(r_edx+0x4ecu);
    /* 004196ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004196ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004196af: call 0x4269f8 */ r_esp -= 4; W32(r_esp, 0x4196b4u); f_004269f8();
    /* 004196b4: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_004196bb:; BB(0x004196bb);
    /* 004196bb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004196be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004196c1: mov dword ptr [edx + 0x68c], eax */ W32((u32)(r_edx+0x68cu), r_eax);
    /* 004196c7: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004196ce: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 004196d5: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004196d7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4196dcu); f_008581c5();
    /* 004196dc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004196df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004196e2: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004196e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004196e7: je 0x419aff */ if (fZ) goto L_00419aff;
L_004196ed:; BB(0x004196ed);
    /* 004196ed: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 004196f4: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004196fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004196fd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004196ff: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x419704u); f_00521a4c();
    /* 00419704: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0041970b:; BB(0x0041970b);
    /* 0041970b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041970e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00419711: mov dword ptr [edx + 0x690], eax */ W32((u32)(r_edx+0x690u), r_eax);
    /* 00419717: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0041971e: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00419725: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00419727: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x41972cu); f_005caba4();
    /* 0041972c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041972f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419732: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00419735: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419737: je 0x419af5 */ if (fZ) goto L_00419af5;
L_0041973d:; BB(0x0041973d);
    /* 0041973d: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00419744: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0041974b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041974e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00419751: add eax, 0x3cc */ {  u32 a = r_eax; u32 b = 0x3ccu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419756: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419757: call 0x425c6c */ r_esp -= 4; W32(r_esp, 0x41975cu); f_00425c6c();
    /* 0041975c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00419763:; BB(0x00419763);
    /* 00419763: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419766: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00419769: mov dword ptr [edx + 0x694], eax */ W32((u32)(r_edx+0x694u), r_eax);
    /* 0041976f: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00419776: mov dword ptr [edx + 0x698], 0 */ W32((u32)(r_edx+0x698u), 0x0u);
    /* 00419780: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00419782: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419784: mov dword ptr [edx + 0x69c], 0 */ W32((u32)(r_edx+0x69cu), 0x0u);
    /* 0041978e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00419791: mov dword ptr [edx + 0x6a8], eax */ W32((u32)(r_edx+0x6a8u), r_eax);
    /* 00419797: mov dword ptr [edx + 0x6a0], 0 */ W32((u32)(r_edx+0x6a0u), 0x0u);
    /* 004197a1: mov dword ptr [edx + 0x6ac], eax */ W32((u32)(r_edx+0x6acu), r_eax);
    /* 004197a7: mov dword ptr [edx + 0x6a4], 0 */ W32((u32)(r_edx+0x6a4u), 0x0u);
    /* 004197b1: mov dword ptr [edx + 0x6b0], 0 */ W32((u32)(r_edx+0x6b0u), 0x0u);
    /* 004197bb: mov dword ptr [edx + 0x6b4], 0 */ W32((u32)(r_edx+0x6b4u), 0x0u);
    /* 004197c5: mov dword ptr [edx + 0x6b8], 0 */ W32((u32)(r_edx+0x6b8u), 0x0u);
    /* 004197cf: mov dword ptr [edx + 0x6bc], 0 */ W32((u32)(r_edx+0x6bcu), 0x0u);
    /* 004197d9: mov dword ptr [edx + 0x6c0], 0 */ W32((u32)(r_edx+0x6c0u), 0x0u);
    /* 004197e3: mov dword ptr [edx + 0x6c4], 0 */ W32((u32)(r_edx+0x6c4u), 0x0u);
    /* 004197ed: mov dword ptr [edx + 0x6c8], 0 */ W32((u32)(r_edx+0x6c8u), 0x0u);
    /* 004197f7: mov dword ptr [edx + 0x6cc], 0 */ W32((u32)(r_edx+0x6ccu), 0x0u);
    /* 00419801: mov dword ptr [edx + 0x6d0], 0 */ W32((u32)(r_edx+0x6d0u), 0x0u);
    /* 0041980b: mov dword ptr [edx + 0x6d4], 0 */ W32((u32)(r_edx+0x6d4u), 0x0u);
    /* 00419815: mov dword ptr [edx + 0x6d8], 0 */ W32((u32)(r_edx+0x6d8u), 0x0u);
    /* 0041981f: mov dword ptr [edx + 0x6dc], 0 */ W32((u32)(r_edx+0x6dcu), 0x0u);
    /* 00419829: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x41982eu); f_005caba4();
    /* 0041982e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419831: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419834: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00419837: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419839: je 0x419aeb */ if (fZ) goto L_00419aeb;
L_0041983f:; BB(0x0041983f);
    /* 0041983f: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00419846: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0041984d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419850: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00419853: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00419856: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419859: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041985a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041985b: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00419861: call 0x427984 */ r_esp -= 4; W32(r_esp, 0x419866u); f_00427984();
    /* 00419866: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0041986d:; BB(0x0041986d);
    /* 0041986d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419870: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00419873: mov dword ptr [ecx + 0x6e0], eax */ W32((u32)(r_ecx+0x6e0u), r_eax);
    /* 00419879: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00419880: mov dword ptr [ecx + 0x6e4], 0 */ W32((u32)(r_ecx+0x6e4u), 0x0u);
    /* 0041988a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0041988c:; BB(0x0041988c);
    /* 0041988c: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0041988f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419891: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00419894: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00419896: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00419898: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041989a: lea ecx, [ecx + edx + 0x6f0] */ r_ecx = (u32)(r_ecx+r_edx+0x6f0u);
    /* 004198a1: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x4198a6u); f_0057739c();
    /* 004198a6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004198a9: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004198ac: jge 0x4198b3 */ if ((fS==fO)) goto L_004198b3;
L_004198ae:; BB(0x004198ae);
    /* 004198ae: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004198b1: jmp 0x41988c */ goto L_0041988c;
L_004198b3:; BB(0x004198b3);
    /* 004198b3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004198b6: mov dword ptr [ecx + 0x764], 0xa8c */ W32((u32)(r_ecx+0x764u), 0xa8cu);
    /* 004198c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004198c2: mov dword ptr [ecx + 0x760], edx */ W32((u32)(r_ecx+0x760u), r_edx);
    /* 004198c8: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 004198cd: mov dword ptr [ecx + 0x768], edx */ W32((u32)(r_ecx+0x768u), r_edx);
    /* 004198d3: mov word ptr [ecx + 0x76c], ax */ W16((u32)(r_ecx+0x76cu), (u16)r_eax);
    /* 004198da: mov dword ptr [ecx + 0x770], edx */ W32((u32)(r_ecx+0x770u), r_edx);
    /* 004198e0: mov dword ptr [ecx + 0x774], edx */ W32((u32)(r_ecx+0x774u), r_edx);
    /* 004198e6: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x4198ebu); f_00420a44();
    /* 004198eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004198ed: jne 0x419908 */ if (!fZ) goto L_00419908;
L_004198ef:; BB(0x004198ef);
    /* 004198ef: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004198f2: mov dword ptr [eax + 0x778], 1 */ W32((u32)(r_eax+0x778u), 0x1u);
    /* 004198fc: mov dword ptr [eax + 0x780], 0x8fbeec */ W32((u32)(r_eax+0x780u), 0x8fbeecu);
    /* 00419906: jmp 0x419924 */ goto L_00419924;
L_00419908:; BB(0x00419908);
    /* 00419908: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041990b: jne 0x419924 */ if (!fZ) goto L_00419924;
L_0041990d:; BB(0x0041990d);
    /* 0041990d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419910: mov dword ptr [eax + 0x778], 0x13 */ W32((u32)(r_eax+0x778u), 0x13u);
    /* 0041991a: mov dword ptr [eax + 0x780], 0x8fbf0c */ W32((u32)(r_eax+0x780u), 0x8fbf0cu);
L_00419924:; BB(0x00419924);
    /* 00419924: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0041992b: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00419930: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x419935u); f_005caba4();
    /* 00419935: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419938: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041993b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041993e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419940: je 0x419ae1 */ if (fZ) goto L_00419ae1;
L_00419946:; BB(0x00419946);
    /* 00419946: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0041994d: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00419954: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00419957: mov ecx, eax */ r_ecx = r_eax;
    /* 00419959: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041995b: call 0x521bbc */ r_esp -= 4; W32(r_esp, 0x419960u); f_00521bbc();
    /* 00419960: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00419963: mov dword ptr [eax], 0xaf3be0 */ W32((u32)(r_eax), 0xaf3be0u);
    /* 00419969: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00419970:; BB(0x00419970);
    /* 00419970: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419973: mov dword ptr [esi + 0x77c], eax */ W32((u32)(r_esi+0x77cu), r_eax);
    /* 00419979: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00419980: mov eax, dword ptr [0xaae974] */ r_eax = R32((u32)(0xaae974u));
    /* 00419985: mov dword ptr [esi + 0x884], 0 */ W32((u32)(r_esi+0x884u), 0x0u);
    /* 0041998f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00419991: mov dword ptr [esi + 0x86c], ebx */ W32((u32)(r_esi+0x86cu), r_ebx);
    /* 00419997: mov dword ptr [esi + 0x888], 0 */ W32((u32)(r_esi+0x888u), 0x0u);
    /* 004199a1: mov dword ptr [esi + 0x870], ebx */ W32((u32)(r_esi+0x870u), r_ebx);
    /* 004199a7: mov dword ptr [esi + 0x874], ebx */ W32((u32)(r_esi+0x874u), r_ebx);
    /* 004199ad: mov dword ptr [esi + 0x878], ebx */ W32((u32)(r_esi+0x878u), r_ebx);
    /* 004199b3: mov dword ptr [esi + 0x88c], 0 */ W32((u32)(r_esi+0x88cu), 0x0u);
    /* 004199bd: mov dword ptr [esi + 0x87c], ebx */ W32((u32)(r_esi+0x87cu), r_ebx);
    /* 004199c3: mov dword ptr [esi + 0x880], ebx */ W32((u32)(r_esi+0x880u), r_ebx);
    /* 004199c9: mov dword ptr [esi + 0x8b0], ebx */ W32((u32)(r_esi+0x8b0u), r_ebx);
    /* 004199cf: mov dword ptr [esi + 0x890], 0 */ W32((u32)(r_esi+0x890u), 0x0u);
    /* 004199d9: mov dword ptr [esi + 0x8b4], ebx */ W32((u32)(r_esi+0x8b4u), r_ebx);
    /* 004199df: mov dword ptr [esi + 0x8b8], ebx */ W32((u32)(r_esi+0x8b8u), r_ebx);
    /* 004199e5: mov dword ptr [esi + 0x8bc], ebx */ W32((u32)(r_esi+0x8bcu), r_ebx);
    /* 004199eb: mov dword ptr [esi + 0x894], 0 */ W32((u32)(r_esi+0x894u), 0x0u);
    /* 004199f5: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004199f8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004199fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004199fc: mov dword ptr [esi + 0x898], 0 */ W32((u32)(r_esi+0x898u), 0x0u);
    /* 00419a06: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00419a08: mov dword ptr [esi + 0x6e8], ebx */ W32((u32)(r_esi+0x6e8u), r_ebx);
    /* 00419a0e: mov word ptr [esi + 0x32e], bx */ W16((u32)(r_esi+0x32eu), (u16)r_ebx);
    /* 00419a15: mov dword ptr [esi + 0x89c], 0 */ W32((u32)(r_esi+0x89cu), 0x0u);
    /* 00419a1f: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00419a26: mov dword ptr [esi + 0x6ec], ecx */ W32((u32)(r_esi+0x6ecu), r_ecx);
    /* 00419a2c: mov dword ptr [esi + 0x8a0], 0 */ W32((u32)(r_esi+0x8a0u), 0x0u);
    /* 00419a36: mov dword ptr [esi + 0x8a4], 0 */ W32((u32)(r_esi+0x8a4u), 0x0u);
    /* 00419a40: mov dword ptr [esi + 0x8a8], 0 */ W32((u32)(r_esi+0x8a8u), 0x0u);
    /* 00419a4a: mov dword ptr [esi + 0x8ac], 0 */ W32((u32)(r_esi+0x8acu), 0x0u);
    /* 00419a54: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x419a59u); f_00694cc8();
    /* 00419a59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419a5b: jne 0x419a6c */ if (!fZ) goto L_00419a6c;
L_00419a5d:; BB(0x00419a5d);
    /* 00419a5d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419a60: mov dword ptr [ecx + 0x3e8], 0 */ W32((u32)(r_ecx+0x3e8u), 0x0u);
    /* 00419a6a: jmp 0x419a91 */ goto L_00419a91;
L_00419a6c:; BB(0x00419a6c);
    /* 00419a6c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419a6f: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x419a74u); f_00520db0();
    /* 00419a74: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419a77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419a79: je 0x419a87 */ if (fZ) goto L_00419a87;
L_00419a7b:; BB(0x00419a7b);
    /* 00419a7b: mov dword ptr [ecx + 0x3e8], 0 */ W32((u32)(r_ecx+0x3e8u), 0x0u);
    /* 00419a85: jmp 0x419a91 */ goto L_00419a91;
L_00419a87:; BB(0x00419a87);
    /* 00419a87: mov dword ptr [ecx + 0x3e8], 1 */ W32((u32)(r_ecx+0x3e8u), 0x1u);
L_00419a91:; BB(0x00419a91);
    /* 00419a91: call 0x425b18 */ r_esp -= 4; W32(r_esp, 0x419a96u); f_00425b18();
    /* 00419a96: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419a99: mov edx, dword ptr [ecx + 0x3c8] */ r_edx = R32((u32)(r_ecx+0x3c8u));
    /* 00419a9f: mov eax, 0x1d */ r_eax = 0x1du;
    /* 00419aa4: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00419aab: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00419aae: jne 0x419abc */ if (!fZ) goto L_00419abc;
L_00419ab0:; BB(0x00419ab0);
    /* 00419ab0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00419ab2: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00419ab4: call 0x419b14 */ r_esp -= 4; W32(r_esp, 0x419ab9u); f_00419b14();
    /* 00419ab9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_00419abc:; BB(0x00419abc);
    /* 00419abc: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00419abf: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00419ac2: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00419ac5: mov eax, ecx */ r_eax = r_ecx;
    /* 00419ac7: mov dword ptr [ecx + 0x8c0], 0 */ W32((u32)(r_ecx+0x8c0u), 0x0u);
    /* 00419ad1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00419ad4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00419adb: mov esp, ebp */ r_esp = r_ebp;
    /* 00419add: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419ade: ret 8 */ FN_RET(0x00419360); r_esp += 12; return;
L_00419ae1:; BB(0x00419ae1);
    /* 00419ae1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419ae3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419ae6: jmp 0x419970 */ goto L_00419970;
L_00419aeb:; BB(0x00419aeb);
    /* 00419aeb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419aed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419af0: jmp 0x41986d */ goto L_0041986d;
L_00419af5:; BB(0x00419af5);
    /* 00419af5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419af7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419afa: jmp 0x419763 */ goto L_00419763;
L_00419aff:; BB(0x00419aff);
    /* 00419aff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419b01: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419b04: jmp 0x41970b */ goto L_0041970b;
L_00419b09:; BB(0x00419b09);
    /* 00419b09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419b0b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419b0e: jmp 0x4196bb */ goto L_004196bb;
}

void f_00419b14(void) /* sub_419B14 */
{
    FN_ENTER(0x00419b14);
    /* 00419b14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00419b15: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419b18: mov edi, ecx */ r_edi = r_ecx;
    /* 00419b1a: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00419b1e: cmp edx, 0x25 */ {  u32 a = r_edx; u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00419b21: ja 0x419de2 */ if ((!fC&&!fZ)) goto L_00419de2;
L_00419b27:; BB(0x00419b27);
    /* 00419b27: mov eax, dword ptr [edx*4 + 0x8fb1a0] */ r_eax = R32((u32)(r_edx*4+0x8fb1a0u));
    /* 00419b2e: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419b14); r_esp += 12; return;
}

void f_00419b30(void)
{
    FN_ENTER(0x00419b30);
    /* 00419b30: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419b35: mov ecx, edi */ r_ecx = r_edi;
    /* 00419b37: call 0x419dec */ r_esp -= 4; W32(r_esp, 0x419b3cu); f_00419dec();
    /* 00419b3c: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419b30); r_esp += 12; return;
}

void f_00419b41(void)
{
    FN_ENTER(0x00419b41);
    /* 00419b41: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419b45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419b46: mov ecx, edi */ r_ecx = r_edi;
    /* 00419b48: call 0x41a138 */ r_esp -= 4; W32(r_esp, 0x419b4du); f_0041a138();
    /* 00419b4d: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419b41); r_esp += 12; return;
}

void f_00419b52(void)
{
    FN_ENTER(0x00419b52);
    /* 00419b52: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419b56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419b57: mov ecx, edi */ r_ecx = r_edi;
    /* 00419b59: call 0x41a364 */ r_esp -= 4; W32(r_esp, 0x419b5eu); f_0041a364();
    /* 00419b5e: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419b52); r_esp += 12; return;
}

void f_00419b63(void)
{
    FN_ENTER(0x00419b63);
    /* 00419b63: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419b67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419b68: mov ecx, edi */ r_ecx = r_edi;
    /* 00419b6a: call 0x41a888 */ r_esp -= 4; W32(r_esp, 0x419b6fu); f_0041a888();
    /* 00419b6f: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419b63); r_esp += 12; return;
}

void f_00419b74(void)
{
    FN_ENTER(0x00419b74);
    /* 00419b74: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419b78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419b79: mov ecx, edi */ r_ecx = r_edi;
    /* 00419b7b: call 0x41b0f0 */ r_esp -= 4; W32(r_esp, 0x419b80u); f_0041b0f0();
    /* 00419b80: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419b74); r_esp += 12; return;
}

void f_00419b85(void)
{
    FN_ENTER(0x00419b85);
    /* 00419b85: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419b89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419b8a: mov ecx, edi */ r_ecx = r_edi;
    /* 00419b8c: call 0x41b16c */ r_esp -= 4; W32(r_esp, 0x419b91u); f_0041b16c();
    /* 00419b91: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419b85); r_esp += 12; return;
}

void f_00419b96(void)
{
    FN_ENTER(0x00419b96);
    /* 00419b96: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419b9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419b9b: mov ecx, edi */ r_ecx = r_edi;
    /* 00419b9d: call 0x41b220 */ r_esp -= 4; W32(r_esp, 0x419ba2u); f_0041b220();
    /* 00419ba2: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419b96); r_esp += 12; return;
}

void f_00419ba7(void)
{
    FN_ENTER(0x00419ba7);
    /* 00419ba7: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419bab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419bac: mov ecx, edi */ r_ecx = r_edi;
    /* 00419bae: call 0x41bc58 */ r_esp -= 4; W32(r_esp, 0x419bb3u); f_0041bc58();
    /* 00419bb3: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419ba7); r_esp += 12; return;
}

void f_00419bb8(void)
{
    FN_ENTER(0x00419bb8);
    /* 00419bb8: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419bbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419bbd: mov ecx, edi */ r_ecx = r_edi;
    /* 00419bbf: call 0x41bfc0 */ r_esp -= 4; W32(r_esp, 0x419bc4u); f_0041bfc0();
    /* 00419bc4: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419bb8); r_esp += 12; return;
}

void f_00419bc9(void)
{
    FN_ENTER(0x00419bc9);
    /* 00419bc9: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419bcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419bce: mov ecx, edi */ r_ecx = r_edi;
    /* 00419bd0: call 0x41c168 */ r_esp -= 4; W32(r_esp, 0x419bd5u); f_0041c168();
    /* 00419bd5: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419bc9); r_esp += 12; return;
}

void f_00419bda(void)
{
    FN_ENTER(0x00419bda);
    /* 00419bda: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419bde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419bdf: mov ecx, edi */ r_ecx = r_edi;
    /* 00419be1: call 0x41c7f8 */ r_esp -= 4; W32(r_esp, 0x419be6u); f_0041c7f8();
    /* 00419be6: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419bda); r_esp += 12; return;
}

void f_00419beb(void)
{
    FN_ENTER(0x00419beb);
    /* 00419beb: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419bef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419bf0: mov ecx, edi */ r_ecx = r_edi;
    /* 00419bf2: call 0x41cc98 */ r_esp -= 4; W32(r_esp, 0x419bf7u); f_0041cc98();
    /* 00419bf7: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419beb); r_esp += 12; return;
}

void f_00419bfc(void)
{
    FN_ENTER(0x00419bfc);
    /* 00419bfc: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419c00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419c01: mov ecx, edi */ r_ecx = r_edi;
    /* 00419c03: call 0x41d5f8 */ r_esp -= 4; W32(r_esp, 0x419c08u); f_0041d5f8();
    /* 00419c08: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419bfc); r_esp += 12; return;
}

void f_00419c0d(void)
{
    FN_ENTER(0x00419c0d);
    /* 00419c0d: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419c11: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00419c14: ja 0x419de2 */ if ((!fC&&!fZ)) goto L_00419de2;
L_00419c1a:; BB(0x00419c1a);
    /* 00419c1a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419c1e: mov edx, dword ptr [eax*4 + 0x8fb238] */ r_edx = R32((u32)(r_eax*4+0x8fb238u));
    /* 00419c25: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419c0d); r_esp += 12; return;
}

void f_00419c27(void)
{
    FN_ENTER(0x00419c27);
    /* 00419c27: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00419c29: mov eax, 0x13 */ r_eax = 0x13u;
    /* 00419c2e: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00419c35: mov ecx, edi */ r_ecx = r_edi;
    /* 00419c37: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x419c3du); call_ind(t); }
    /* 00419c3d: mov dword ptr [edi + 0x3ec], 0 */ W32((u32)(r_edi+0x3ecu), 0x0u);
    /* 00419c47: mov ecx, edi */ r_ecx = r_edi;
    /* 00419c49: call 0x419130 */ r_esp -= 4; W32(r_esp, 0x419c4eu); f_00419130();
    /* 00419c4e: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 00419c54: mov dword ptr [edi + 0x704], 0x3ba3d70a */ W32((u32)(r_edi+0x704u), 0x3ba3d70au);
    /* 00419c5e: or eax, 0xe80 */ {  u32 a = r_eax; u32 b = 0xe80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00419c63: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 00419c69: mov dword ptr [edi + 0x720], 0x3ba3d70a */ W32((u32)(r_edi+0x720u), 0x3ba3d70au);
    /* 00419c73: mov dword ptr [edi + 0x73c], 0x3ba3d70a */ W32((u32)(r_edi+0x73cu), 0x3ba3d70au);
    /* 00419c7d: mov dword ptr [edi + 0x758], 0x3ba3d70a */ W32((u32)(r_edi+0x758u), 0x3ba3d70au);
    /* 00419c87: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419c27); r_esp += 12; return;
}

void f_00419c8c(void)
{
    FN_ENTER(0x00419c8c);
    /* 00419c8c: mov ecx, edi */ r_ecx = r_edi;
    /* 00419c8e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x419c93u); f_007aa094();
    /* 00419c93: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00419c97: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00419c9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419c9c: lea ecx, [edi + 0x6f0] */ r_ecx = (u32)(r_edi+0x6f0u);
    /* 00419ca2: mov esi, edi */ r_esi = r_edi;
    /* 00419ca4: mov edi, eax */ r_edi = r_eax;
    /* 00419ca6: mov ebx, ecx */ r_ebx = r_ecx;
L_00419ca8:; BB(0x00419ca8);
    /* 00419ca8: mov edx, dword ptr [edi + esi + 0x6f0] */ r_edx = R32((u32)(r_edi+r_esi+0x6f0u));
    /* 00419caf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00419cb1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x419cb4u); call_ind(t); }
    /* 00419cb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419cb6: je 0x419cc6 */ if (fZ) goto L_00419cc6;
L_00419cb8:; BB(0x00419cb8);
    /* 00419cb8: movzx edx, word ptr [esi + 8] */ r_edx = (u32)R16((u32)(r_esi+0x8u));
    /* 00419cbc: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00419cc2: mov word ptr [esi + 8], dx */ W16((u32)(r_esi+0x8u), (u16)r_edx);
L_00419cc6:; BB(0x00419cc6);
    /* 00419cc6: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00419cc9: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00419ccc: cmp edi, 0x70 */ {  u32 a = r_edi; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419ccf: jl 0x419ca8 */ if ((fS!=fO)) goto L_00419ca8;
L_00419cd1:; BB(0x00419cd1);
    /* 00419cd1: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00419cd5: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00419cd8: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419c8c); r_esp += 12; return;
}

void f_00419cdd(void)
{
    FN_ENTER(0x00419cdd);
    /* 00419cdd: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419ce1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419ce2: mov ecx, edi */ r_ecx = r_edi;
    /* 00419ce4: call 0x41db28 */ r_esp -= 4; W32(r_esp, 0x419ce9u); f_0041db28();
    /* 00419ce9: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419cdd); r_esp += 12; return;
}

void f_00419cee(void)
{
    FN_ENTER(0x00419cee);
    /* 00419cee: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419cf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419cf3: mov ecx, edi */ r_ecx = r_edi;
    /* 00419cf5: call 0x41e3f8 */ r_esp -= 4; W32(r_esp, 0x419cfau); f_0041e3f8();
    /* 00419cfa: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419cee); r_esp += 12; return;
}

void f_00419cff(void)
{
    FN_ENTER(0x00419cff);
    /* 00419cff: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419d03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419d04: mov ecx, edi */ r_ecx = r_edi;
    /* 00419d06: call 0x41ed68 */ r_esp -= 4; W32(r_esp, 0x419d0bu); f_0041ed68();
    /* 00419d0b: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419cff); r_esp += 12; return;
}

void f_00419d10(void)
{
    FN_ENTER(0x00419d10);
    /* 00419d10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419d11: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00419d15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419d16: mov ecx, edi */ r_ecx = r_edi;
    /* 00419d18: call 0x41f238 */ r_esp -= 4; W32(r_esp, 0x419d1du); f_0041f238();
    /* 00419d1d: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419d10); r_esp += 12; return;
}

void f_00419d22(void)
{
    FN_ENTER(0x00419d22);
    /* 00419d22: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419d26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419d27: mov ecx, edi */ r_ecx = r_edi;
    /* 00419d29: call 0x41f6cc */ r_esp -= 4; W32(r_esp, 0x419d2eu); f_0041f6cc();
    /* 00419d2e: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419d22); r_esp += 12; return;
}

void f_00419d33(void)
{
    FN_ENTER(0x00419d33);
    /* 00419d33: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419d37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419d38: mov ecx, edi */ r_ecx = r_edi;
    /* 00419d3a: call 0x42008c */ r_esp -= 4; W32(r_esp, 0x419d3fu); f_0042008c();
    /* 00419d3f: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419d33); r_esp += 12; return;
}

void f_00419d44(void)
{
    FN_ENTER(0x00419d44);
    /* 00419d44: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419d48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419d49: mov ecx, edi */ r_ecx = r_edi;
    /* 00419d4b: call 0x4201f4 */ r_esp -= 4; W32(r_esp, 0x419d50u); f_004201f4();
    /* 00419d50: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419d44); r_esp += 12; return;
}

void f_00419d55(void)
{
    FN_ENTER(0x00419d55);
    /* 00419d55: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419d59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419d5a: mov ecx, edi */ r_ecx = r_edi;
    /* 00419d5c: call 0x4203cc */ r_esp -= 4; W32(r_esp, 0x419d61u); f_004203cc();
    /* 00419d61: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419d55); r_esp += 12; return;
}

void f_00419d66(void)
{
    FN_ENTER(0x00419d66);
    /* 00419d66: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419d6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419d6b: mov ecx, edi */ r_ecx = r_edi;
    /* 00419d6d: call 0x420ee8 */ r_esp -= 4; W32(r_esp, 0x419d72u); f_00420ee8();
    /* 00419d72: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419d66); r_esp += 12; return;
}

void f_00419d74(void)
{
    FN_ENTER(0x00419d74);
    /* 00419d74: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419d79: mov ecx, edi */ r_ecx = r_edi;
    /* 00419d7b: call 0x421494 */ r_esp -= 4; W32(r_esp, 0x419d80u); f_00421494();
    /* 00419d80: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419d74); r_esp += 12; return;
}

void f_00419d82(void)
{
    FN_ENTER(0x00419d82);
    /* 00419d82: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419d86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419d87: mov ecx, edi */ r_ecx = r_edi;
    /* 00419d89: call 0x421ecc */ r_esp -= 4; W32(r_esp, 0x419d8eu); f_00421ecc();
    /* 00419d8e: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419d82); r_esp += 12; return;
}

void f_00419d90(void)
{
    FN_ENTER(0x00419d90);
    /* 00419d90: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419d94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419d95: mov ecx, edi */ r_ecx = r_edi;
    /* 00419d97: call 0x422430 */ r_esp -= 4; W32(r_esp, 0x419d9cu); f_00422430();
    /* 00419d9c: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419d90); r_esp += 12; return;
}

void f_00419d9e(void)
{
    FN_ENTER(0x00419d9e);
    /* 00419d9e: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419da2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419da3: mov ecx, edi */ r_ecx = r_edi;
    /* 00419da5: call 0x4227dc */ r_esp -= 4; W32(r_esp, 0x419daau); f_004227dc();
    /* 00419daa: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419d9e); r_esp += 12; return;
}

void f_00419dac(void)
{
    FN_ENTER(0x00419dac);
    /* 00419dac: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419db0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419db1: mov ecx, edi */ r_ecx = r_edi;
    /* 00419db3: call 0x422a08 */ r_esp -= 4; W32(r_esp, 0x419db8u); f_00422a08();
    /* 00419db8: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419dac); r_esp += 12; return;
}

void f_00419dba(void)
{
    FN_ENTER(0x00419dba);
    /* 00419dba: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419dbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419dbf: mov ecx, edi */ r_ecx = r_edi;
    /* 00419dc1: call 0x423070 */ r_esp -= 4; W32(r_esp, 0x419dc6u); f_00423070();
    /* 00419dc6: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419dba); r_esp += 12; return;
}

void f_00419dc8(void)
{
    FN_ENTER(0x00419dc8);
    /* 00419dc8: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419dcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419dcd: mov ecx, edi */ r_ecx = r_edi;
    /* 00419dcf: call 0x423614 */ r_esp -= 4; W32(r_esp, 0x419dd4u); f_00423614();
    /* 00419dd4: jmp 0x419de2 */ goto L_00419de2;
L_00419de2:; BB(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419dc8); r_esp += 12; return;
}

void f_00419dd6(void)
{
    FN_ENTER(0x00419dd6);
    /* 00419dd6: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00419dda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419ddb: mov ecx, edi */ r_ecx = r_edi;
    /* 00419ddd: call 0x4258ac */ r_esp -= 4; W32(r_esp, 0x419de2u); f_004258ac();
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419dd6); r_esp += 12; return;
}

void f_00419de2(void)
{
    FN_ENTER(0x00419de2);
    /* 00419de2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419de5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00419de6: ret 8 */ FN_RET(0x00419de2); r_esp += 12; return;
}

void f_00419dec(void) /* sub_419DEC */
{
    FN_ENTER(0x00419dec);
    /* 00419dec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419ded: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419df0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00419df2: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00419df6: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00419df9: ja 0x419fe9 */ if ((!fC&&!fZ)) goto L_00419fe9;
L_00419dff:; BB(0x00419dff);
    /* 00419dff: mov eax, dword ptr [eax*4 + 0x8fb268] */ r_eax = R32((u32)(r_eax*4+0x8fb268u));
    /* 00419e06: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00419fe9:; BB(0x00419fe9);
    /* 00419fe9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419fec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419fed: ret 4 */ FN_RET(0x00419dec); r_esp += 8; return;
}

void f_00419e08(void)
{
    FN_ENTER(0x00419e08);
    /* 00419e08: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00419e0a: call 0x419ff0 */ r_esp -= 4; W32(r_esp, 0x419e0fu); f_00419ff0();
    /* 00419e0f: jmp 0x419fe9 */ goto L_00419fe9;
L_00419fe9:; BB(0x00419fe9);
    /* 00419fe9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419fec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419fed: ret 4 */ FN_RET(0x00419e08); r_esp += 8; return;
}

void f_00419e14(void)
{
    FN_ENTER(0x00419e14);
    /* 00419e14: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00419e16: call 0x41a004 */ r_esp -= 4; W32(r_esp, 0x419e1bu); f_0041a004();
    /* 00419e1b: jmp 0x419fe9 */ goto L_00419fe9;
L_00419fe9:; BB(0x00419fe9);
    /* 00419fe9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419fec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419fed: ret 4 */ FN_RET(0x00419e14); r_esp += 8; return;
}

void f_00419e20(void)
{
    FN_ENTER(0x00419e20);
    /* 00419e20: mov ecx, dword ptr [ebp + 0x6e0] */ r_ecx = R32((u32)(r_ebp+0x6e0u));
    /* 00419e26: call 0x427a58 */ r_esp -= 4; W32(r_esp, 0x419e2bu); f_00427a58();
    /* 00419e2b: jmp 0x419fe9 */ goto L_00419fe9;
L_00419fe9:; BB(0x00419fe9);
    /* 00419fe9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419fec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419fed: ret 4 */ FN_RET(0x00419e20); r_esp += 8; return;
}

void f_00419e30(void)
{
    FN_ENTER(0x00419e30);
    /* 00419e30: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00419e33: mov eax, 0x11 */ r_eax = 0x11u;
    /* 00419e38: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00419e3f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00419e41: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x419e47u); call_ind(t); }
    /* 00419e47: mov dword ptr [ebp + 0x3ec], 2 */ W32((u32)(r_ebp+0x3ecu), 0x2u);
    /* 00419e51: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00419e53: call 0x41a018 */ r_esp -= 4; W32(r_esp, 0x419e58u); f_0041a018();
    /* 00419e58: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 00419e5e: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00419e61: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00419e66: and eax, 0xfffffc7f */ {  u32 a = r_eax; u32 b = 0xfffffc7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00419e6b: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 00419e71: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00419e73: call dword ptr [edx + 0x174] */ { u32 t = R32((u32)(r_edx+0x174u)); r_esp -= 4; W32(r_esp, 0x419e79u); call_ind(t); }
    /* 00419e79: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00419e7c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00419e7e: call dword ptr [eax + 0x180] */ { u32 t = R32((u32)(r_eax+0x180u)); r_esp -= 4; W32(r_esp, 0x419e84u); call_ind(t); }
    /* 00419e84: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00419e87: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00419e8a: mov dword ptr [ebp + 0x884], 0 */ W32((u32)(r_ebp+0x884u), 0x0u);
    /* 00419e94: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00419e96: fchs  */ ST(0) = -ST(0);
    /* 00419e98: fstp dword ptr [ebp + 0x3a8] */ W_F32((u32)(r_ebp+0x3a8u), ST(0)); FPOP();
    /* 00419e9e: mov dword ptr [ebp + 0x3ac], 0 */ W32((u32)(r_ebp+0x3acu), 0x0u);
    /* 00419ea8: fchs  */ ST(0) = -ST(0);
    /* 00419eaa: fstp dword ptr [ebp + 0x3b0] */ W_F32((u32)(r_ebp+0x3b0u), ST(0)); FPOP();
    /* 00419eb0: lea edx, [ebp + 0x3a8] */ r_edx = (u32)(r_ebp+0x3a8u);
    /* 00419eb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419eb7: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x419ebcu); f_007828e4();
    /* 00419ebc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00419ebe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419ec1: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 00419ec7: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
    /* 00419ecd: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00419ecf: fmul qword ptr [0x8fba40] */ ST(0) = ST(0) * R_F64((u32)(0x8fba40u));
    /* 00419ed5: fdiv qword ptr [0x8fba38] */ ST(0) = ST(0) / R_F64((u32)(0x8fba38u));
    /* 00419edb: mov ecx, dword ptr [ebp + 0x6e0] */ r_ecx = R32((u32)(r_ebp+0x6e0u));
    /* 00419ee1: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00419ee5: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00419eea: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00419eef: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00419ef3: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00419ef7: fistp dword ptr [ebp + 0x60] */ W32((u32)(r_ebp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 00419efa: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00419efe: call 0x427bbc */ r_esp -= 4; W32(r_esp, 0x419f03u); f_00427bbc();
    /* 00419f03: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419f06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419f07: ret 4 */ FN_RET(0x00419e30); r_esp += 8; return;
}

void f_00419f0a(void)
{
    FN_ENTER(0x00419f0a);
    /* 00419f0a: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 00419f10: fcomp dword ptr [0x8fbee0] */ fx_compare(ST(0), R_F32((u32)(0x8fbee0u))); FPOP();
    /* 00419f16: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00419f18: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00419f19: jb 0x419fe9 */ if (fC) goto L_00419fe9;
L_00419f1f:; BB(0x00419f1f);
    /* 00419f1f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00419f21: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00419f23: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00419f26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00419f28: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x419f2eu); call_ind(t); }
    /* 00419f2e: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00419f32: mov byte ptr [esp], 0x12 */ W8((u32)(r_esp), 0x12u);
    /* 00419f36: mov edx, 0x13 */ r_edx = 0x13u;
    /* 00419f3b: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 00419f40: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00419f45: mov eax, dword ptr [ebp + 0x684] */ r_eax = R32((u32)(r_ebp+0x684u));
    /* 00419f4b: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00419f50: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00419f55: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00419f58: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 00419f5f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00419f63: mov eax, dword ptr [ebp + 0x698] */ r_eax = R32((u32)(r_ebp+0x698u));
    /* 00419f69: mov ebp, dword ptr [ebp + 0x69c] */ r_ebp = R32((u32)(r_ebp+0x69cu));
    /* 00419f6f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00419f73: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00419f77: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x419f7cu); f_008003e0();
    /* 00419f7c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419f7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419f80: ret 4 */ FN_RET(0x00419f0a); r_esp += 8; return;
L_00419fe9:; BB(0x00419fe9);
    /* 00419fe9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419fec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419fed: ret 4 */ FN_RET(0x00419f0a); r_esp += 8; return;
}

void f_00419f83(void)
{
    FN_ENTER(0x00419f83);
    /* 00419f83: fld dword ptr [0x8fbedc] */ FPUSH(R_F32((u32)(0x8fbedcu)));
    /* 00419f89: fadd dword ptr [ebp + 0x884] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x884u));
    /* 00419f8f: fld dword ptr [0x8fbf60] */ FPUSH(R_F32((u32)(0x8fbf60u)));
    /* 00419f95: fld dword ptr [0x8fbf64] */ FPUSH(R_F32((u32)(0x8fbf64u)));
    /* 00419f9b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00419f9d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00419f9f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00419fa1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00419fa3: fld dword ptr [ebp + 0x888] */ FPUSH(R_F32((u32)(r_ebp+0x888u)));
    /* 00419fa9: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
    /* 00419faf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00419fb0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00419fb2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00419fb4: jb 0x419fb8 */ if (fC) goto L_00419fb8;
L_00419fb6:; BB(0x00419fb6);
    /* 00419fb6: fst st(2) */ ST(2) = ST(0);
L_00419fb8:; BB(0x00419fb8);
    /* 00419fb8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00419fba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00419fbc: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00419fbe: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00419fc0: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 00419fc3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00419fc5: fst dword ptr [ebp + 0x884] */ W_F32((u32)(r_ebp+0x884u), ST(0));
    /* 00419fcb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00419fcd: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 00419fd0: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00419fd2: fstp dword ptr [ebp + 0x888] */ W_F32((u32)(r_ebp+0x888u), ST(0)); FPOP();
    /* 00419fd8: fmul dword ptr [ebp + 0x3a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3a8u));
    /* 00419fde: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 00419fe1: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 00419fe4: call 0x41a04c */ r_esp -= 4; W32(r_esp, 0x419fe9u); f_0041a04c();
    /* 00419fe9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419fec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419fed: ret 4 */ FN_RET(0x00419f83); r_esp += 8; return;
}

void f_00419fe9(void)
{
    FN_ENTER(0x00419fe9);
    /* 00419fe9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00419fec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419fed: ret 4 */ FN_RET(0x00419fe9); r_esp += 8; return;
}

void f_00419ff0(void) /* sub_419FF0 */
{
    FN_ENTER(0x00419ff0);
    /* 00419ff0: mov eax, dword ptr [ecx + 0x6a0] */ r_eax = R32((u32)(r_ecx+0x6a0u));
    /* 00419ff6: mov edx, dword ptr [ecx + 0x6a4] */ r_edx = R32((u32)(r_ecx+0x6a4u));
    /* 00419ffc: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 00419fff: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 0041a002: ret  */ FN_RET(0x00419ff0); r_esp += 4; return;
}

