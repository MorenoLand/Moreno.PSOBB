#include "protos.h"

void f_0066809c(void) /* sub_66809C */
{
    FN_ENTER(0x0066809c);
    /* 0066809c: mov ecx, dword ptr [0xa8fc94] */ r_ecx = R32((u32)(0xa8fc94u));
    /* 006680a2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006680a4: je 0x6680b9 */ if (fZ) goto L_006680b9;
L_006680a6:; BB(0x006680a6);
    /* 006680a6: je 0x6680af */ if (fZ) goto L_006680af;
L_006680a8:; BB(0x006680a8);
    /* 006680a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006680aa: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6680afu); f_004066a8();
L_006680af:; BB(0x006680af);
    /* 006680af: mov dword ptr [0xa8fc94], 0 */ W32((u32)(0xa8fc94u), 0x0u);
L_006680b9:; BB(0x006680b9);
    /* 006680b9: ret  */ FN_RET(0x0066809c); r_esp += 4; return;
}

void f_006680bc(void) /* sub_6680BC */
{
    FN_ENTER(0x006680bc);
    /* 006680bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006680bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006680be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006680bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006680c0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006680c3: mov edi, ecx */ r_edi = r_ecx;
    /* 006680c5: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006680c7: mov ecx, edi */ r_ecx = r_edi;
    /* 006680c9: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 006680ce: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 006680d3: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6680d6u); call_ind(t); }
    /* 006680d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006680d8: je 0x66818b */ if (fZ) goto L_0066818b;
L_006680de:; BB(0x006680de);
    /* 006680de: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006680e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006680e2: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 006680e5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006680e7: mov edx, esi */ r_edx = r_esi;
    /* 006680e9: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x6680eeu); f_00830aa0();
    /* 006680ee: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006680f2: fcomp dword ptr [0x9398fc] */ fx_compare(ST(0), R_F32((u32)(0x9398fcu))); FPOP();
    /* 006680f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006680fa: lea ebp, [edi + 0xac] */ r_ebp = (u32)(r_edi+0xacu);
    /* 00668100: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00668101: jbe 0x66810c */ if ((fC||fZ)) goto L_0066810c;
L_00668103:; BB(0x00668103);
    /* 00668103: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00668105: call 0x577234 */ r_esp -= 4; W32(r_esp, 0x66810au); f_00577234();
    /* 0066810a: jmp 0x668113 */ goto L_00668113;
L_0066810c:; BB(0x0066810c);
    /* 0066810c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066810e: call 0x57723c */ r_esp -= 4; W32(r_esp, 0x668113u); f_0057723c();
L_00668113:; BB(0x00668113);
    /* 00668113: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x668118u); f_006dc358();
    /* 00668118: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066811b: jne 0x668121 */ if (!fZ) goto L_00668121;
L_0066811d:; BB(0x0066811d);
    /* 0066811d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0066811f: jmp 0x668139 */ goto L_00668139;
L_00668121:; BB(0x00668121);
    /* 00668121: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00668123: call 0x577244 */ r_esp -= 4; W32(r_esp, 0x668128u); f_00577244();
    /* 00668128: mov ebx, eax */ r_ebx = r_eax;
    /* 0066812a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066812c: je 0x668139 */ if (fZ) goto L_00668139;
L_0066812e:; BB(0x0066812e);
    /* 0066812e: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00668134: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00668136: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x668139u); call_ind(t); }
L_00668139:; BB(0x00668139);
    /* 00668139: mov ecx, dword ptr [0xa8fc90] */ r_ecx = R32((u32)(0xa8fc90u));
    /* 0066813f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668141: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x668146u); f_005b8624();
    /* 00668146: mov ecx, eax */ r_ecx = r_eax;
    /* 00668148: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x66814du); f_00829cc8();
    /* 0066814d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x668152u); f_0082d7b0();
    /* 00668152: mov ecx, esi */ r_ecx = r_esi;
    /* 00668154: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x668159u); f_0082d838();
    /* 00668159: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0066815c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066815e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x668163u); f_0082d8bc();
    /* 00668163: mov ecx, dword ptr [0xa8fc90] */ r_ecx = R32((u32)(0xa8fc90u));
    /* 00668169: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066816b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x668170u); f_005b8610();
    /* 00668170: mov ecx, eax */ r_ecx = r_eax;
    /* 00668172: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x668177u); f_00831758();
    /* 00668177: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x66817cu); f_0082da80();
    /* 0066817c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066817e: je 0x66818b */ if (fZ) goto L_0066818b;
L_00668180:; BB(0x00668180);
    /* 00668180: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00668186: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00668188: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x66818bu); call_ind(t); }
L_0066818b:; BB(0x0066818b);
    /* 0066818b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066818e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066818f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668190: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00668191: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00668192: ret  */ FN_RET(0x006680bc); r_esp += 4; return;
}

void f_00668194(void)
{
    FN_ENTER(0x00668194);
    /* 00668194: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00668195: mov ebp, esp */ r_ebp = r_esp;
    /* 00668197: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00668199: push 0x8e8900 */ { u32 v = 0x8e8900u; r_esp -= 4; W32(r_esp, v); }
    /* 0066819e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006681a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006681a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006681ac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006681af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006681b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006681b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006681b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006681bb: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 006681c0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006681c7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6681ccu); f_005caba4();
    /* 006681cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006681cd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006681d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006681d2: je 0x66820b */ if (fZ) goto L_0066820b;
L_006681d4:; BB(0x006681d4);
    /* 006681d4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006681db: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006681e2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006681e5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006681eb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006681ee: call 0x668210 */ r_esp -= 4; W32(r_esp, 0x6681f3u); f_00668210();
    /* 006681f3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006681f6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006681fd:; BB(0x006681fd);
    /* 006681fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00668200: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00668207: mov esp, ebp */ r_esp = r_ebp;
    /* 00668209: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066820a: ret  */ FN_RET(0x00668194); r_esp += 4; return;
L_0066820b:; BB(0x0066820b);
    /* 0066820b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066820d: jmp 0x6681fd */ goto L_006681fd;
}

void f_00668210(void) /* sub_668210 */
{
    FN_ENTER(0x00668210);
    /* 00668210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00668211: mov ebp, esp */ r_ebp = r_esp;
    /* 00668213: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00668215: push 0x8e8930 */ { u32 v = 0x8e8930u; r_esp -= 4; W32(r_esp, v); }
    /* 0066821a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00668220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668221: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00668228: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066822b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066822e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00668231: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00668234: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00668237: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0066823a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066823d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00668240: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00668243: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x668248u); f_007b4b48();
    /* 00668248: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066824f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00668252: mov dword ptr [ecx], 0xb34c78 */ W32((u32)(r_ecx), 0xb34c78u);
    /* 00668258: add ecx, 0xac */ {  u32 a = r_ecx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066825e: call 0x57713c */ r_esp -= 4; W32(r_esp, 0x668263u); f_0057713c();
    /* 00668263: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0066826a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066826d: mov eax, dword ptr [0x9c942c] */ r_eax = R32((u32)(0x9c942cu));
    /* 00668272: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00668275: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00668277: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0066827a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066827b: call dword ptr [ebx + 0x14] */ { u32 t = R32((u32)(r_ebx+0x14u)); r_esp -= 4; W32(r_esp, 0x66827eu); call_ind(t); }
    /* 0066827e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00668281: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668283: push 0x9c945c */ { u32 v = 0x9c945cu; r_esp -= 4; W32(r_esp, v); }
    /* 00668288: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x66828du); f_007b9a88();
    /* 0066828d: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00668290: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x668295u); f_007b999c();
    /* 00668295: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00668296: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00668299: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x66829eu); f_007b4f54();
    /* 0066829e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006682a1: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006682a4: mov word ptr [ebp - 0x60], dx */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_edx);
    /* 006682a8: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 006682ac: mov word ptr [ebp - 0x5e], cx */ W16((u32)(r_ebp+0xffffffa2u), (u16)r_ecx);
    /* 006682b0: movzx ebx, word ptr [eax + 4] */ r_ebx = (u32)R16((u32)(r_eax+0x4u));
    /* 006682b4: mov word ptr [ebp - 0x5c], bx */ W16((u32)(r_ebp+0xffffffa4u), (u16)r_ebx);
    /* 006682b8: movzx esi, word ptr [eax + 6] */ r_esi = (u32)R16((u32)(r_eax+0x6u));
    /* 006682bc: mov word ptr [ebp - 0x5a], si */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_esi);
    /* 006682c0: movzx edi, word ptr [eax + 8] */ r_edi = (u32)R16((u32)(r_eax+0x8u));
    /* 006682c4: mov word ptr [ebp - 0x58], di */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_edi);
    /* 006682c8: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 006682cc: mov word ptr [ebp - 0x56], dx */ W16((u32)(r_ebp+0xffffffaau), (u16)r_edx);
    /* 006682d0: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006682d3: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 006682d6: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006682d9: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 006682dc: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006682df: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 006682e2: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006682e5: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006682e8: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006682eb: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006682ee: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006682f1: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 006682f4: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006682f7: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006682fa: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006682fd: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00668300: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00668303: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00668306: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00668309: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0066830c: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0066830f: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00668312: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 00668315: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00668318: mov dword ptr [ebp - 0x3c], 0x42000000 */ W32((u32)(r_ebp+0xffffffc4u), 0x42000000u);
    /* 0066831f: mov dword ptr [ebp - 0x38], 0x42200000 */ W32((u32)(r_ebp+0xffffffc8u), 0x42200000u);
    /* 00668326: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 00668329: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066832a: mov dword ptr [ebp - 0x34], 0x41400000 */ W32((u32)(r_ebp+0xffffffccu), 0x41400000u);
    /* 00668331: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x668336u); f_0065f960();
    /* 00668336: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00668337: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066833a: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 00668340: add ecx, 0xac */ {  u32 a = r_ecx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00668346: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x66834bu); f_0057739c();
    /* 0066834b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066834e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668351: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00668354: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00668357: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066835a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00668361: mov esp, ebp */ r_esp = r_ebp;
    /* 00668363: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668364: ret 8 */ FN_RET(0x00668210); r_esp += 12; return;
}

void f_00668368(void) /* sub_668368 */
{
    FN_ENTER(0x00668368);
    /* 00668368: mov ecx, dword ptr [0xa8fc90] */ r_ecx = R32((u32)(0xa8fc90u));
    /* 0066836e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00668370: je 0x668385 */ if (fZ) goto L_00668385;
L_00668372:; BB(0x00668372);
    /* 00668372: je 0x66837b */ if (fZ) goto L_0066837b;
L_00668374:; BB(0x00668374);
    /* 00668374: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668376: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x66837bu); f_004066a8();
L_0066837b:; BB(0x0066837b);
    /* 0066837b: mov dword ptr [0xa8fc90], 0 */ W32((u32)(0xa8fc90u), 0x0u);
L_00668385:; BB(0x00668385);
    /* 00668385: ret  */ FN_RET(0x00668368); r_esp += 4; return;
}

void f_00668388(void) /* sub_668388 */
{
    FN_ENTER(0x00668388);
    /* 00668388: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00668389: mov ebp, esp */ r_ebp = r_esp;
    /* 0066838b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066838d: push 0x8e8958 */ { u32 v = 0x8e8958u; r_esp -= 4; W32(r_esp, v); }
    /* 00668392: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00668398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668399: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006683a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006683a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006683a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006683a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006683ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006683af: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006683b4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006683bb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6683c0u); f_008581c5();
    /* 006683c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006683c1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006683c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006683c6: je 0x668407 */ if (fZ) goto L_00668407;
L_006683c8:; BB(0x006683c8);
    /* 006683c8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006683cf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006683d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006683d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006683db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006683dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006683dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006683de: push 0x9c9418 */ { u32 v = 0x9c9418u; r_esp -= 4; W32(r_esp, v); }
    /* 006683e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006683e5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6683eau); f_005b7a84();
    /* 006683ea: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006683ed: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006683f4:; BB(0x006683f4);
    /* 006683f4: mov dword ptr [0xa8fc90], eax */ W32((u32)(0xa8fc90u), r_eax);
    /* 006683f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006683fc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00668403: mov esp, ebp */ r_esp = r_ebp;
    /* 00668405: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668406: ret  */ FN_RET(0x00668388); r_esp += 4; return;
L_00668407:; BB(0x00668407);
    /* 00668407: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00668409: jmp 0x6683f4 */ goto L_006683f4;
}

void f_0066840c(void) /* sub_66840C */
{
    FN_ENTER(0x0066840c);
    /* 0066840c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066840d: mov ebp, esp */ r_ebp = r_esp;
    /* 0066840f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00668411: push 0x8e8980 */ { u32 v = 0x8e8980u; r_esp -= 4; W32(r_esp, v); }
    /* 00668416: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066841c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066841d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00668424: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00668427: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066842a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066842d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00668430: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00668433: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00668438: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066843f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x668444u); f_008581c5();
    /* 00668444: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00668445: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00668448: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066844a: je 0x66848b */ if (fZ) goto L_0066848b;
L_0066844c:; BB(0x0066844c);
    /* 0066844c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00668453: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066845a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066845d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066845f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668461: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668462: push 0x9c9400 */ { u32 v = 0x9c9400u; r_esp -= 4; W32(r_esp, v); }
    /* 00668467: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668469: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x66846eu); f_005b7a84();
    /* 0066846e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668471: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00668478:; BB(0x00668478);
    /* 00668478: mov dword ptr [0xa8fc94], eax */ W32((u32)(0xa8fc94u), r_eax);
    /* 0066847d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00668480: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00668487: mov esp, ebp */ r_esp = r_ebp;
    /* 00668489: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066848a: ret  */ FN_RET(0x0066840c); r_esp += 4; return;
L_0066848b:; BB(0x0066848b);
    /* 0066848b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066848d: jmp 0x668478 */ goto L_00668478;
}

void f_00668490(void) /* sub_668490 */
{
    FN_ENTER(0x00668490);
    /* 00668490: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00668491: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00668493: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00668495: call 0x641014 */ r_esp -= 4; W32(r_esp, 0x66849au); f_00641014();
    /* 0066849a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066849e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006684a0: jne 0x6684a6 */ if (!fZ) goto L_006684a6;
L_006684a2:; BB(0x006684a2);
    /* 006684a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006684a3: ret 4 */ FN_RET(0x00668490); r_esp += 8; return;
L_006684a6:; BB(0x006684a6);
    /* 006684a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006684a7: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6684acu); f_00857e98();
    /* 006684ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006684ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006684ae: ret 4 */ FN_RET(0x00668490); r_esp += 8; return;
}

void f_006684b4(void) /* sub_6684B4 */
{
    FN_ENTER(0x006684b4);
    /* 006684b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006684b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006684b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006684b9: call 0x6685dc */ r_esp -= 4; W32(r_esp, 0x6684beu); f_006685dc();
    /* 006684be: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006684c2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006684c4: jne 0x6684ca */ if (!fZ) goto L_006684ca;
L_006684c6:; BB(0x006684c6);
    /* 006684c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006684c7: ret 4 */ FN_RET(0x006684b4); r_esp += 8; return;
L_006684ca:; BB(0x006684ca);
    /* 006684ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006684cb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6684d0u); f_005c2f74();
    /* 006684d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006684d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006684d2: ret 4 */ FN_RET(0x006684b4); r_esp += 8; return;
}

void f_006684d8(void) /* sub_6684D8 */
{
    FN_ENTER(0x006684d8);
    /* 006684d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006684d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006684db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006684dd: call 0x668560 */ r_esp -= 4; W32(r_esp, 0x6684e2u); f_00668560();
    /* 006684e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006684e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006684e8: jne 0x6684ee */ if (!fZ) goto L_006684ee;
L_006684ea:; BB(0x006684ea);
    /* 006684ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006684eb: ret 4 */ FN_RET(0x006684d8); r_esp += 8; return;
L_006684ee:; BB(0x006684ee);
    /* 006684ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006684ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6684f4u); f_005c2f74();
    /* 006684f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006684f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006684f6: ret 4 */ FN_RET(0x006684d8); r_esp += 8; return;
}

void f_006684fc(void) /* sub_6684FC */
{
    FN_ENTER(0x006684fc);
    /* 006684fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006684fd: mov ebp, esp */ r_ebp = r_esp;
    /* 006684ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00668501: push 0x8e899c */ { u32 v = 0x8e899cu; r_esp -= 4; W32(r_esp, v); }
    /* 00668506: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066850c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066850d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00668514: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00668517: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066851a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0066851d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00668520: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00668523: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00668526: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00668529: mov eax, ecx */ r_eax = r_ecx;
    /* 0066852b: mov dword ptr [eax], 0xb35080 */ W32((u32)(r_eax), 0xb35080u);
    /* 00668531: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00668538: call 0x668560 */ r_esp -= 4; W32(r_esp, 0x66853du); f_00668560();
    /* 0066853d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00668540: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00668542: jne 0x668554 */ if (!fZ) goto L_00668554;
L_00668544:; BB(0x00668544);
    /* 00668544: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00668547: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066854e: mov esp, ebp */ r_esp = r_ebp;
    /* 00668550: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668551: ret 4 */ FN_RET(0x006684fc); r_esp += 8; return;
L_00668554:; BB(0x00668554);
    /* 00668554: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00668557: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668558: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x66855du); f_005c2f74();
    /* 0066855d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066855e: jmp 0x668544 */ goto L_00668544;
}

void f_00668560(void) /* sub_668560 */
{
    FN_ENTER(0x00668560);
    /* 00668560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00668561: mov ebp, esp */ r_ebp = r_esp;
    /* 00668563: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00668565: push 0x8e89b8 */ { u32 v = 0x8e89b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066856a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00668570: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668571: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00668578: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066857b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066857e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00668581: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00668584: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00668587: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066858a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00668591: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668594: mov edx, 0xb35020 */ r_edx = 0xb35020u;
    /* 00668599: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0066859b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0066859d:; BB(0x0066859d);
    /* 0066859d: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 006685a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006685a1: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x6685a4u); call_ind(t); }
    /* 006685a4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006685a7: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006685aa: jge 0x6685b3 */ if ((fS==fO)) goto L_006685b3;
L_006685ac:; BB(0x006685ac);
    /* 006685ac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006685af: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006685b1: jmp 0x66859d */ goto L_0066859d;
L_006685b3:; BB(0x006685b3);
    /* 006685b3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006685ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006685bd: call 0x6685dc */ r_esp -= 4; W32(r_esp, 0x6685c2u); f_006685dc();
    /* 006685c2: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006685c5: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006685c8: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006685cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006685ce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006685d5: mov esp, ebp */ r_esp = r_ebp;
    /* 006685d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006685d8: ret  */ FN_RET(0x00668560); r_esp += 4; return;
}

void f_006685dc(void) /* sub_6685DC */
{
    FN_ENTER(0x006685dc);
    /* 006685dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006685dd: mov ebp, esp */ r_ebp = r_esp;
    /* 006685df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006685e1: push 0x8e89d4 */ { u32 v = 0x8e89d4u; r_esp -= 4; W32(r_esp, v); }
    /* 006685e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006685ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006685ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006685f4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006685f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006685fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006685fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00668600: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00668603: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00668606: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066860d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668610: mov dword ptr [ecx], 0xb34fc0 */ W32((u32)(r_ecx), 0xb34fc0u);
    /* 00668616: call 0x668638 */ r_esp -= 4; W32(r_esp, 0x66861bu); f_00668638();
    /* 0066861b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00668622: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668625: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x66862au); f_007b4aec();
    /* 0066862a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066862d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00668634: mov esp, ebp */ r_esp = r_ebp;
    /* 00668636: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668637: ret  */ FN_RET(0x006685dc); r_esp += 4; return;
}

void f_00668638(void) /* sub_668638 */
{
    FN_ENTER(0x00668638);
    /* 00668638: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00668639: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066863b: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 00668641: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00668643: je 0x6686a0 */ if (fZ) goto L_006686a0;
L_00668645:; BB(0x00668645);
    /* 00668645: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x66864au); f_007127b0();
    /* 0066864a: movzx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)R16((u32)(r_ebx+0xb8u));
    /* 00668651: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
    /* 0066865b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066865c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x668661u); f_0068d5a8();
    /* 00668661: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00668662: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668664: je 0x668672 */ if (fZ) goto L_00668672;
L_00668666:; BB(0x00668666);
    /* 00668666: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 0066866c: or dword ptr [eax + 0x630], edx */ { u32 ad = (u32)(r_eax+0x630u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00668672:; BB(0x00668672);
    /* 00668672: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00668678: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0066867d: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00668684: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x668689u); f_00716ba0();
    /* 00668689: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066868a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066868c: je 0x668698 */ if (fZ) goto L_00668698;
L_0066868e:; BB(0x0066868e);
    /* 0066868e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668690: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x668695u); f_00791748();
    /* 00668695: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00668696: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00668697: ret  */ FN_RET(0x00668638); r_esp += 4; return;
L_00668698:; BB(0x00668698);
    /* 00668698: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066869a: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x66869fu); f_00791748();
    /* 0066869f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006686a0:; BB(0x006686a0);
    /* 006686a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006686a1: ret  */ FN_RET(0x00668638); r_esp += 4; return;
}

void f_006686a4(void) /* sub_6686A4 */
{
    FN_ENTER(0x006686a4);
    /* 006686a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006686a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006686a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006686a9: call 0x66873c */ r_esp -= 4; W32(r_esp, 0x6686aeu); f_0066873c();
    /* 006686ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006686b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006686b4: jne 0x6686ba */ if (!fZ) goto L_006686ba;
L_006686b6:; BB(0x006686b6);
    /* 006686b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006686b7: ret 4 */ FN_RET(0x006686a4); r_esp += 8; return;
L_006686ba:; BB(0x006686ba);
    /* 006686ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006686bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6686c0u); f_005c2f74();
    /* 006686c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006686c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006686c2: ret 4 */ FN_RET(0x006686a4); r_esp += 8; return;
}

void f_006686c8(void) /* sub_6686C8 */
{
    FN_ENTER(0x006686c8);
    /* 006686c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006686c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006686cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006686cd: call 0x6686ec */ r_esp -= 4; W32(r_esp, 0x6686d2u); f_006686ec();
    /* 006686d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006686d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006686d8: jne 0x6686de */ if (!fZ) goto L_006686de;
L_006686da:; BB(0x006686da);
    /* 006686da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006686db: ret 4 */ FN_RET(0x006686c8); r_esp += 8; return;
L_006686de:; BB(0x006686de);
    /* 006686de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006686df: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6686e4u); f_005c2f74();
    /* 006686e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006686e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006686e6: ret 4 */ FN_RET(0x006686c8); r_esp += 8; return;
}

void f_006686ec(void) /* sub_6686EC */
{
    FN_ENTER(0x006686ec);
    /* 006686ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006686ed: mov ebp, esp */ r_ebp = r_esp;
    /* 006686ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006686f1: push 0x8e89f0 */ { u32 v = 0x8e89f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006686f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006686fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006686fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00668704: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00668707: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066870a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066870d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00668710: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00668713: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00668716: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668719: mov dword ptr [ecx], 0xb35140 */ W32((u32)(r_ecx), 0xb35140u);
    /* 0066871f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00668726: call 0x66873c */ r_esp -= 4; W32(r_esp, 0x66872bu); f_0066873c();
    /* 0066872b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066872e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00668735: mov esp, ebp */ r_esp = r_ebp;
    /* 00668737: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668738: ret  */ FN_RET(0x006686ec); r_esp += 4; return;
}

void f_0066873c(void) /* sub_66873C */
{
    FN_ENTER(0x0066873c);
    /* 0066873c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066873d: mov ebp, esp */ r_ebp = r_esp;
    /* 0066873f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00668741: push 0x8e8a0c */ { u32 v = 0x8e8a0cu; r_esp -= 4; W32(r_esp, v); }
    /* 00668746: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066874c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066874d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00668754: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00668757: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066875a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066875d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00668760: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00668763: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00668766: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066876d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668770: mov eax, dword ptr [ecx + 0xc4] */ r_eax = R32((u32)(r_ecx+0xc4u));
    /* 00668776: mov edx, 0xb350e0 */ r_edx = 0xb350e0u;
    /* 0066877b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0066877d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066877f: je 0x66879b */ if (fZ) goto L_0066879b;
L_00668781:; BB(0x00668781);
    /* 00668781: je 0x668791 */ if (fZ) goto L_00668791;
L_00668783:; BB(0x00668783);
    /* 00668783: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668785: mov ecx, eax */ r_ecx = r_eax;
    /* 00668787: call 0x668490 */ r_esp -= 4; W32(r_esp, 0x66878cu); f_00668490();
    /* 0066878c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066878f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
L_00668791:; BB(0x00668791);
    /* 00668791: mov dword ptr [ecx + 0xc4], 0 */ W32((u32)(r_ecx+0xc4u), 0x0u);
L_0066879b:; BB(0x0066879b);
    /* 0066879b: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x66879eu); call_ind(t); }
    /* 0066879e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006687a5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006687a8: call 0x6685dc */ r_esp -= 4; W32(r_esp, 0x6687adu); f_006685dc();
    /* 006687ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006687b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006687b7: mov esp, ebp */ r_esp = r_ebp;
    /* 006687b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006687ba: ret  */ FN_RET(0x0066873c); r_esp += 4; return;
}

void f_006687bc(void) /* sub_6687BC */
{
    FN_ENTER(0x006687bc);
    /* 006687bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006687bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006687bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006687c1: call 0x6687e0 */ r_esp -= 4; W32(r_esp, 0x6687c6u); f_006687e0();
    /* 006687c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006687ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006687cc: jne 0x6687d2 */ if (!fZ) goto L_006687d2;
L_006687ce:; BB(0x006687ce);
    /* 006687ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006687cf: ret 4 */ FN_RET(0x006687bc); r_esp += 8; return;
L_006687d2:; BB(0x006687d2);
    /* 006687d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006687d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6687d8u); f_005c2f74();
    /* 006687d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006687d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006687da: ret 4 */ FN_RET(0x006687bc); r_esp += 8; return;
}

void f_006687e0(void) /* sub_6687E0 */
{
    FN_ENTER(0x006687e0);
    /* 006687e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006687e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006687e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006687e5: push 0x8e8a28 */ { u32 v = 0x8e8a28u; r_esp -= 4; W32(r_esp, v); }
    /* 006687ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006687f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006687f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006687f8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006687fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006687fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00668801: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00668804: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00668807: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066880a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066880d: mov dword ptr [ecx], 0xb351a0 */ W32((u32)(r_ecx), 0xb351a0u);
    /* 00668813: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066881a: call 0x66873c */ r_esp -= 4; W32(r_esp, 0x66881fu); f_0066873c();
    /* 0066881f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00668822: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00668829: mov esp, ebp */ r_esp = r_ebp;
    /* 0066882b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066882c: ret  */ FN_RET(0x006687e0); r_esp += 4; return;
}

void f_00668830(void) /* sub_668830 */
{
    FN_ENTER(0x00668830);
    /* 00668830: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00668831: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00668833: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00668835: call 0x6688c8 */ r_esp -= 4; W32(r_esp, 0x66883au); f_006688c8();
    /* 0066883a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066883e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00668840: jne 0x668846 */ if (!fZ) goto L_00668846;
L_00668842:; BB(0x00668842);
    /* 00668842: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00668843: ret 4 */ FN_RET(0x00668830); r_esp += 8; return;
L_00668846:; BB(0x00668846);
    /* 00668846: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00668847: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x66884cu); f_005c2f74();
    /* 0066884c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066884d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066884e: ret 4 */ FN_RET(0x00668830); r_esp += 8; return;
}

void f_00668854(void) /* sub_668854 */
{
    FN_ENTER(0x00668854);
    /* 00668854: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00668855: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00668857: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00668859: call 0x668878 */ r_esp -= 4; W32(r_esp, 0x66885eu); f_00668878();
    /* 0066885e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00668862: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00668864: jne 0x66886a */ if (!fZ) goto L_0066886a;
L_00668866:; BB(0x00668866);
    /* 00668866: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00668867: ret 4 */ FN_RET(0x00668854); r_esp += 8; return;
L_0066886a:; BB(0x0066886a);
    /* 0066886a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066886b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x668870u); f_005c2f74();
    /* 00668870: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00668871: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00668872: ret 4 */ FN_RET(0x00668854); r_esp += 8; return;
}

void f_00668878(void) /* sub_668878 */
{
    FN_ENTER(0x00668878);
    /* 00668878: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00668879: mov ebp, esp */ r_ebp = r_esp;
    /* 0066887b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066887d: push 0x8e8a44 */ { u32 v = 0x8e8a44u; r_esp -= 4; W32(r_esp, v); }
    /* 00668882: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00668888: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668889: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00668890: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00668893: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00668896: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00668899: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066889c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066889f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006688a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006688a5: mov dword ptr [ecx], 0xb352e0 */ W32((u32)(r_ecx), 0xb352e0u);
    /* 006688ab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006688b2: call 0x6688c8 */ r_esp -= 4; W32(r_esp, 0x6688b7u); f_006688c8();
    /* 006688b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006688ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006688c1: mov esp, ebp */ r_esp = r_ebp;
    /* 006688c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006688c4: ret  */ FN_RET(0x00668878); r_esp += 4; return;
}

void f_006688c8(void) /* sub_6688C8 */
{
    FN_ENTER(0x006688c8);
    /* 006688c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006688c9: mov ebp, esp */ r_ebp = r_esp;
    /* 006688cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006688cd: push 0x8e8a60 */ { u32 v = 0x8e8a60u; r_esp -= 4; W32(r_esp, v); }
    /* 006688d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006688d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006688d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006688e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006688e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006688e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006688e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006688ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006688ef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006688f2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006688f5: mov dword ptr [ecx], 0xb35200 */ W32((u32)(r_ecx), 0xb35200u);
    /* 006688fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00668902: call 0x66873c */ r_esp -= 4; W32(r_esp, 0x668907u); f_0066873c();
    /* 00668907: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066890a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00668911: mov esp, ebp */ r_esp = r_ebp;
    /* 00668913: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668914: ret  */ FN_RET(0x006688c8); r_esp += 4; return;
}

void f_00668918(void) /* sub_668918 */
{
    FN_ENTER(0x00668918);
    /* 00668918: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00668919: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066891b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066891d: call 0x66893c */ r_esp -= 4; W32(r_esp, 0x668922u); f_0066893c();
    /* 00668922: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00668926: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00668928: jne 0x66892e */ if (!fZ) goto L_0066892e;
L_0066892a:; BB(0x0066892a);
    /* 0066892a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066892b: ret 4 */ FN_RET(0x00668918); r_esp += 8; return;
L_0066892e:; BB(0x0066892e);
    /* 0066892e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066892f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x668934u); f_005c2f74();
    /* 00668934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00668935: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00668936: ret 4 */ FN_RET(0x00668918); r_esp += 8; return;
}

void f_0066893c(void) /* sub_66893C */
{
    FN_ENTER(0x0066893c);
    /* 0066893c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066893d: mov ebp, esp */ r_ebp = r_esp;
    /* 0066893f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00668941: push 0x8e8a7c */ { u32 v = 0x8e8a7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00668946: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066894c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066894d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00668954: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00668957: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066895a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066895d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00668960: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00668963: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00668966: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668969: mov dword ptr [ecx], 0xb35260 */ W32((u32)(r_ecx), 0xb35260u);
    /* 0066896f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00668976: call 0x668560 */ r_esp -= 4; W32(r_esp, 0x66897bu); f_00668560();
    /* 0066897b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066897e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00668985: mov esp, ebp */ r_esp = r_ebp;
    /* 00668987: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668988: ret  */ FN_RET(0x0066893c); r_esp += 4; return;
}

void f_0066898c(void) /* sub_66898C */
{
    FN_ENTER(0x0066898c);
    /* 0066898c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066898d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066898f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00668991: call 0x6689b0 */ r_esp -= 4; W32(r_esp, 0x668996u); f_006689b0();
    /* 00668996: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066899a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066899c: jne 0x6689a2 */ if (!fZ) goto L_006689a2;
L_0066899e:; BB(0x0066899e);
    /* 0066899e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066899f: ret 4 */ FN_RET(0x0066898c); r_esp += 8; return;
L_006689a2:; BB(0x006689a2);
    /* 006689a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006689a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6689a8u); f_005c2f74();
    /* 006689a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006689a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006689aa: ret 4 */ FN_RET(0x0066898c); r_esp += 8; return;
}

void f_006689b0(void) /* sub_6689B0 */
{
    FN_ENTER(0x006689b0);
    /* 006689b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006689b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006689b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006689b5: push 0x8e8a98 */ { u32 v = 0x8e8a98u; r_esp -= 4; W32(r_esp, v); }
    /* 006689ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006689c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006689c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006689c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006689cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006689ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006689d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006689d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006689d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006689da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006689dd: mov dword ptr [ecx], 0xb352c0 */ W32((u32)(r_ecx), 0xb352c0u);
    /* 006689e3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006689ea: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6689efu); f_008171e8();
    /* 006689ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006689f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006689f9: mov esp, ebp */ r_esp = r_ebp;
    /* 006689fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006689fc: ret  */ FN_RET(0x006689b0); r_esp += 4; return;
}

void f_00668a00(void) /* sub_668A00 */
{
    FN_ENTER(0x00668a00);
    /* 00668a00: mov ecx, dword ptr [0xa8fcb8] */ r_ecx = R32((u32)(0xa8fcb8u));
    /* 00668a06: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668a08: je 0x668a25 */ if (fZ) goto L_00668a25;
L_00668a0a:; BB(0x00668a0a);
    /* 00668a0a: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x668a0fu); f_00829de0();
    /* 00668a0f: push dword ptr [0xa8fcb8] */ { u32 v = R32((u32)(0xa8fcb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00668a15: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x668a1au); f_0082e960();
    /* 00668a1a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00668a1b: mov dword ptr [0xa8fcb8], 0 */ W32((u32)(0xa8fcb8u), 0x0u);
L_00668a25:; BB(0x00668a25);
    /* 00668a25: mov ecx, dword ptr [0xa8fcbc] */ r_ecx = R32((u32)(0xa8fcbcu));
    /* 00668a2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00668a2d: je 0x668a36 */ if (fZ) goto L_00668a36;
L_00668a2f:; BB(0x00668a2f);
    /* 00668a2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668a31: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x668a36u); f_004066a8();
L_00668a36:; BB(0x00668a36);
    /* 00668a36: mov dword ptr [0xa8fcbc], 0 */ W32((u32)(0xa8fcbcu), 0x0u);
    /* 00668a40: ret  */ FN_RET(0x00668a00); r_esp += 4; return;
}

void f_00668a44(void) /* sub_668A44 */
{
    FN_ENTER(0x00668a44);
    /* 00668a44: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x668a49u); f_00694c6c();
    /* 00668a49: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 00668a4f: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00668a52: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00668a54: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00668a56: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00668a58: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00668a5f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x668a64u); f_007c1160();
    /* 00668a64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00668a66: je 0x668a6e */ if (fZ) goto L_00668a6e;
L_00668a68:; BB(0x00668a68);
    /* 00668a68: mov eax, 1 */ r_eax = 0x1u;
    /* 00668a6d: ret  */ FN_RET(0x00668a44); r_esp += 4; return;
L_00668a6e:; BB(0x00668a6e);
    /* 00668a6e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x668a73u); f_00791b48();
    /* 00668a73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668a75: je 0x668a89 */ if (fZ) goto L_00668a89;
L_00668a77:; BB(0x00668a77);
    /* 00668a77: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x668a7cu); f_00791b48();
    /* 00668a7c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00668a7e: mov ecx, eax */ r_ecx = r_eax;
    /* 00668a80: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x668a85u); f_0078fd68();
    /* 00668a85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00668a87: jne 0x668a68 */ if (!fZ) goto L_00668a68;
L_00668a89:; BB(0x00668a89);
    /* 00668a89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00668a8b: ret  */ FN_RET(0x00668a44); r_esp += 4; return;
}

void f_00668a8c(void) /* sub_668A8C */
{
    FN_ENTER(0x00668a8c);
    /* 00668a8c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00668a90: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 00668a96: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00668a99: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00668a9b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00668a9d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00668a9f: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00668aa6: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x668aabu); f_007c1160();
    /* 00668aab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00668aad: je 0x668ab7 */ if (fZ) goto L_00668ab7;
L_00668aaf:; BB(0x00668aaf);
    /* 00668aaf: mov eax, 1 */ r_eax = 0x1u;
    /* 00668ab4: ret 4 */ FN_RET(0x00668a8c); r_esp += 8; return;
L_00668ab7:; BB(0x00668ab7);
    /* 00668ab7: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x668abcu); f_00791b48();
    /* 00668abc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668abe: je 0x668ad2 */ if (fZ) goto L_00668ad2;
L_00668ac0:; BB(0x00668ac0);
    /* 00668ac0: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x668ac5u); f_00791b48();
    /* 00668ac5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00668ac7: mov ecx, eax */ r_ecx = r_eax;
    /* 00668ac9: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x668aceu); f_0078fd68();
    /* 00668ace: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00668ad0: jne 0x668aaf */ if (!fZ) goto L_00668aaf;
L_00668ad2:; BB(0x00668ad2);
    /* 00668ad2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00668ad4: ret 4 */ FN_RET(0x00668a8c); r_esp += 8; return;
}

void f_00668ad8(void) /* sub_668AD8 */
{
    FN_ENTER(0x00668ad8);
    /* 00668ad8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00668ad9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00668ada: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00668adb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00668adc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00668adf: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00668ae1: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00668ae5: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00668ae9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00668aeb: call 0x668b74 */ r_esp -= 4; W32(r_esp, 0x668af0u); f_00668b74();
    /* 00668af0: mov dword ptr [ebx], 0xb35020 */ W32((u32)(r_ebx), 0xb35020u);
    /* 00668af6: mov eax, dword ptr [0x9c9534] */ r_eax = R32((u32)(0x9c9534u));
    /* 00668afb: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00668afe: lea eax, [ebx + 0xf0] */ r_eax = (u32)(r_ebx+0xf0u);
    /* 00668b04: lea edx, [ebx + 0x68] */ r_edx = (u32)(r_ebx+0x68u);
    /* 00668b07: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00668b0a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00668b0c: lea esi, [ebx + 0xc0] */ r_esi = (u32)(r_ebx+0xc0u);
    /* 00668b12: lea ecx, [ebx + 0x100] */ r_ecx = (u32)(r_ebx+0x100u);
    /* 00668b18: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00668b1c: mov ebp, eax */ r_ebp = r_eax;
L_00668b1e:; BB(0x00668b1e);
    /* 00668b1e: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00668b23: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x668b28u); f_0082d990();
    /* 00668b28: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00668b2b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x668b30u); f_0082d838();
    /* 00668b30: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00668b33: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00668b35: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x668b3au); f_0082d8bc();
    /* 00668b3a: lea edx, [edi + 0x9c955c] */ r_edx = (u32)(r_edi+0x9c955cu);
    /* 00668b40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00668b41: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00668b43: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x668b48u); f_00830aa0();
    /* 00668b48: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x668b4du); f_0082da80();
    /* 00668b4d: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00668b51: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 00668b58: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00668b5b: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00668b5e: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00668b61: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00668b63: ja 0x668b1e */ if ((!fC&&!fZ)) goto L_00668b1e;
L_00668b65:; BB(0x00668b65);
    /* 00668b65: mov eax, ebx */ r_eax = r_ebx;
    /* 00668b67: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00668b6a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00668b6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668b6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00668b6d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00668b6e: ret 8 */ FN_RET(0x00668ad8); r_esp += 12; return;
}

void f_00668b74(void) /* sub_668B74 */
{
    FN_ENTER(0x00668b74);
    /* 00668b74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00668b75: mov ebp, esp */ r_ebp = r_esp;
    /* 00668b77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00668b79: push 0x8e8ace */ { u32 v = 0x8e8aceu; r_esp -= 4; W32(r_esp, v); }
    /* 00668b7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00668b84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668b85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00668b8c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00668b8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00668b92: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00668b95: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00668b98: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00668b9b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00668b9e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00668ba1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00668ba4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00668ba7: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x668bacu); f_007b4b48();
    /* 00668bac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00668bb3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00668bb6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00668bb9: mov dword ptr [ecx], 0xb34fc0 */ W32((u32)(r_ecx), 0xb34fc0u);
    /* 00668bbf: mov eax, dword ptr [0x9c9530] */ r_eax = R32((u32)(0x9c9530u));
    /* 00668bc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668bc5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00668bc8: call dword ptr [0xb34fd4] */ { u32 t = R32((u32)(0xb34fd4u)); r_esp -= 4; W32(r_esp, 0x668bceu); call_ind(t); }
    /* 00668bce: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00668bd1: mov dword ptr [eax + 0xac], 0x41200000 */ W32((u32)(r_eax+0xacu), 0x41200000u);
    /* 00668bdb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00668bdd: mov dword ptr [eax + 0xb0], edx */ W32((u32)(r_eax+0xb0u), r_edx);
    /* 00668be3: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00668be6: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00668beb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x668bf0u); f_005caba4();
    /* 00668bf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00668bf1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00668bf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668bf6: je 0x668c51 */ if (fZ) goto L_00668c51;
L_00668bf8:; BB(0x00668bf8);
    /* 00668bf8: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00668bff: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00668c06: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00668c09: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00668c0c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668c0e: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00668c11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668c12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668c13: call 0x6e83b0 */ r_esp -= 4; W32(r_esp, 0x668c18u); f_006e83b0();
    /* 00668c18: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00668c1b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00668c22:; BB(0x00668c22);
    /* 00668c22: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00668c25: mov dword ptr [eax + 0xb4], edx */ W32((u32)(r_eax+0xb4u), r_edx);
    /* 00668c2b: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00668c30: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 00668c3a: mov word ptr [eax + 0xb8], dx */ W16((u32)(r_eax+0xb8u), (u16)r_edx);
    /* 00668c41: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00668c44: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00668c4b: mov esp, ebp */ r_esp = r_ebp;
    /* 00668c4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668c4e: ret 8 */ FN_RET(0x00668b74); r_esp += 12; return;
L_00668c51:; BB(0x00668c51);
    /* 00668c51: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00668c53: jmp 0x668c22 */ goto L_00668c22;
}

void f_00668c58(void) /* sub_668C58 */
{
    FN_ENTER(0x00668c58);
    /* 00668c58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00668c59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00668c5a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00668c5b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00668c5c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00668c5f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00668c61: push 0x936508 */ { u32 v = 0x936508u; r_esp -= 4; W32(r_esp, v); }
    /* 00668c66: push 0x13001c */ { u32 v = 0x13001cu; r_esp -= 4; W32(r_esp, v); }
    /* 00668c6b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x668c70u); f_0061cdb0();
    /* 00668c70: push 0x936518 */ { u32 v = 0x936518u; r_esp -= 4; W32(r_esp, v); }
    /* 00668c75: push 0x13001d */ { u32 v = 0x13001du; r_esp -= 4; W32(r_esp, v); }
    /* 00668c7a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x668c7fu); f_0061cdb0();
    /* 00668c7f: push 0x936528 */ { u32 v = 0x936528u; r_esp -= 4; W32(r_esp, v); }
    /* 00668c84: push 0x13001e */ { u32 v = 0x13001eu; r_esp -= 4; W32(r_esp, v); }
    /* 00668c89: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x668c8eu); f_0061cdb0();
    /* 00668c8e: push 0x936538 */ { u32 v = 0x936538u; r_esp -= 4; W32(r_esp, v); }
    /* 00668c93: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 00668c98: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x668c9du); f_0061cdb0();
    /* 00668c9d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668ca0: lea edx, [ebx + 0x68] */ r_edx = (u32)(r_ebx+0x68u);
    /* 00668ca3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00668ca5: lea ecx, [ebx + 0xc0] */ r_ecx = (u32)(r_ebx+0xc0u);
    /* 00668cab: mov ebp, eax */ r_ebp = r_eax;
    /* 00668cad: mov esi, edx */ r_esi = r_edx;
    /* 00668caf: mov edi, ebx */ r_edi = r_ebx;
    /* 00668cb1: mov ebx, ecx */ r_ebx = r_ecx;
L_00668cb3:; BB(0x00668cb3);
    /* 00668cb3: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00668cba: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00668cbf: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00668cc7: mov dword ptr [esp + 8], 0xc0400000 */ W32((u32)(r_esp+0x8u), 0xc0400000u);
    /* 00668ccf: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x668cd4u); f_0082d990();
    /* 00668cd4: mov ecx, esi */ r_ecx = r_esi;
    /* 00668cd6: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x668cdbu); f_0082d838();
    /* 00668cdb: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00668cde: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00668ce0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x668ce5u); f_0082d8bc();
    /* 00668ce5: lea edx, [ebp + 0x9c955c] */ r_edx = (u32)(r_ebp+0x9c955cu);
    /* 00668ceb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00668cec: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00668cee: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x668cf3u); f_00830aa0();
    /* 00668cf3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x668cf8u); f_0082da80();
    /* 00668cf8: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00668cfd: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x668d02u); f_0082d990();
    /* 00668d02: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00668d04: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x668d09u); f_0082d838();
    /* 00668d09: mov edx, dword ptr [edi + 0x84] */ r_edx = R32((u32)(r_edi+0x84u));
    /* 00668d0f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00668d11: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x668d16u); f_0082d8bc();
    /* 00668d16: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00668d19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668d1a: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00668d1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00668d20: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x668d25u); f_00830aa0();
    /* 00668d25: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x668d2au); f_0082da80();
    /* 00668d2a: fld dword ptr [0x939a54] */ FPUSH(R_F32((u32)(0x939a54u)));
    /* 00668d30: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00668d34: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00668d36: mov eax, dword ptr [ebp + edi + 0xc0] */ r_eax = R32((u32)(r_ebp+r_edi+0xc0u));
    /* 00668d3d: fld dword ptr [ebp + edi + 0xc4] */ FPUSH(R_F32((u32)(r_ebp+r_edi+0xc4u)));
    /* 00668d44: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00668d46: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00668d4a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00668d4c: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00668d50: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00668d54: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00668d58: mov eax, dword ptr [ebp + edi + 0xc8] */ r_eax = R32((u32)(r_ebp+r_edi+0xc8u));
    /* 00668d5f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00668d63: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00668d66: mov eax, 0xffff0000 */ r_eax = 0xffff0000u;
    /* 00668d6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668d6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668d6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668d6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668d6f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x668d74u); f_0061cdb0();
    /* 00668d74: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00668d79: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00668d7a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x668d7fu); f_0061cdb0();
    /* 00668d7f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668d82: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00668d85: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00668d88: cmp ebp, 0x30 */ {  u32 a = r_ebp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00668d8b: jl 0x668cb3 */ if ((fS!=fO)) goto L_00668cb3;
L_00668d91:; BB(0x00668d91);
    /* 00668d91: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00668d94: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00668d95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668d96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00668d97: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00668d98: ret  */ FN_RET(0x00668c58); r_esp += 4; return;
}

void f_00668d9c(void) /* sub_668D9C */
{
    FN_ENTER(0x00668d9c);
    /* 00668d9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00668d9d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00668d9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00668da0: mov ebx, eax */ r_ebx = r_eax;
    /* 00668da2: mov esi, ecx */ r_esi = r_ecx;
L_00668da4:; BB(0x00668da4);
    /* 00668da4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00668da5: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00668da7: mov ecx, esi */ r_ecx = r_esi;
    /* 00668da9: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x668dacu); call_ind(t); }
    /* 00668dac: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00668daf: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00668db2: jl 0x668da4 */ if ((fS!=fO)) goto L_00668da4;
L_00668db4:; BB(0x00668db4);
    /* 00668db4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00668db5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00668db6: ret  */ FN_RET(0x00668d9c); r_esp += 4; return;
}

void f_00668db8(void) /* sub_668DB8 */
{
    FN_ENTER(0x00668db8);
    /* 00668db8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00668db9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00668dba: mov edi, ecx */ r_edi = r_ecx;
    /* 00668dbc: movzx ebx, word ptr [esp + 0xc] */ r_ebx = (u32)R16((u32)(r_esp+0xcu));
    /* 00668dc1: mov ecx, dword ptr [edi + ebx*4 + 0xf0] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0xf0u));
    /* 00668dc8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00668dca: je 0x668e18 */ if (fZ) goto L_00668e18;
L_00668dcc:; BB(0x00668dcc);
    /* 00668dcc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x668dd1u); f_007127b0();
    /* 00668dd1: mov dword ptr [edi + ebx*4 + 0xf0], 0 */ W32((u32)(r_edi+r_ebx*4+0xf0u), 0x0u);
    /* 00668ddc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00668ddd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x668de2u); f_0068d5a8();
    /* 00668de2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00668de3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668de5: je 0x668df3 */ if (fZ) goto L_00668df3;
L_00668de7:; BB(0x00668de7);
    /* 00668de7: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 00668ded: or dword ptr [eax + 0x630], edx */ { u32 ad = (u32)(r_eax+0x630u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00668df3:; BB(0x00668df3);
    /* 00668df3: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00668df9: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x668dfeu); f_00716ba0();
    /* 00668dfe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00668dff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668e01: je 0x668e10 */ if (fZ) goto L_00668e10;
L_00668e03:; BB(0x00668e03);
    /* 00668e03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668e05: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x668e0au); f_00791748();
    /* 00668e0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00668e0b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00668e0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00668e0d: ret 4 */ FN_RET(0x00668db8); r_esp += 8; return;
L_00668e10:; BB(0x00668e10);
    /* 00668e10: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668e12: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x668e17u); f_00791748();
    /* 00668e17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00668e18:; BB(0x00668e18);
    /* 00668e18: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00668e19: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00668e1a: ret 4 */ FN_RET(0x00668db8); r_esp += 8; return;
}

void f_00668e20(void) /* sub_668E20 */
{
    FN_ENTER(0x00668e20);
    /* 00668e20: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00668e21: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00668e22: mov esi, ecx */ r_esi = r_ecx;
    /* 00668e24: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00668e28: mov eax, dword ptr [esi + ebx*4 + 0xf0] */ r_eax = R32((u32)(r_esi+r_ebx*4+0xf0u));
    /* 00668e2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00668e31: je 0x668e38 */ if (fZ) goto L_00668e38;
L_00668e33:; BB(0x00668e33);
    /* 00668e33: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00668e34: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00668e35: ret 4 */ FN_RET(0x00668e20); r_esp += 8; return;
L_00668e38:; BB(0x00668e38);
    /* 00668e38: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00668e3a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x668e3fu); f_0073ec50();
    /* 00668e3f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00668e40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668e42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668e43: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x668e48u); f_007354fc();
    /* 00668e48: mov dword ptr [esi + ebx*4 + 0xf0], eax */ W32((u32)(r_esi+r_ebx*4+0xf0u), r_eax);
    /* 00668e4f: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00668e51: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00668e53: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x668e58u); f_00792fe8();
    /* 00668e58: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668e5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00668e5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668e5f: mov ecx, dword ptr [esi + ebx*4 + 0xf0] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0xf0u));
    /* 00668e66: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00668e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668e69: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x668e6eu); f_00735db8();
    /* 00668e6e: mov ecx, dword ptr [esi + ebx*4 + 0xf0] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0xf0u));
    /* 00668e75: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x668e7au); f_0073608c();
    /* 00668e7a: mov ecx, dword ptr [esi + ebx*4 + 0xf0] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0xf0u));
    /* 00668e81: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x668e86u); f_00736458();
    /* 00668e86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668e88: mov edx, dword ptr [esi + ebx*4 + 0xf0] */ r_edx = R32((u32)(r_esi+r_ebx*4+0xf0u));
    /* 00668e8f: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00668e96: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00668e9b: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00668ea2: mov ebx, dword ptr [esi + ebx*4 + 0xf0] */ r_ebx = R32((u32)(r_esi+r_ebx*4+0xf0u));
    /* 00668ea9: movzx ecx, word ptr [ebx + 0x84] */ r_ecx = (u32)R16((u32)(r_ebx+0x84u));
    /* 00668eb0: or ecx, 0xffff0040 */ {  u32 a = r_ecx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00668eb6: mov word ptr [ebx + 0x84], cx */ W16((u32)(r_ebx+0x84u), (u16)r_ecx);
    /* 00668ebd: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x668ec2u); f_00791748();
    /* 00668ec2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00668ec3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00668ec4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00668ec5: ret 4 */ FN_RET(0x00668e20); r_esp += 8; return;
}

void f_00668ec8(void) /* sub_668EC8 */
{
    FN_ENTER(0x00668ec8);
    /* 00668ec8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00668ec9: mov ebp, esp */ r_ebp = r_esp;
    /* 00668ecb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00668ecd: push 0x8e8ae8 */ { u32 v = 0x8e8ae8u; r_esp -= 4; W32(r_esp, v); }
    /* 00668ed2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00668ed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668ed9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00668ee0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00668ee3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00668ee6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00668ee9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00668eec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00668eef: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00668ef2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00668ef5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00668ef8: call 0x668b74 */ r_esp -= 4; W32(r_esp, 0x668efdu); f_00668b74();
    /* 00668efd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668f00: mov dword ptr [edx], 0xb35020 */ W32((u32)(r_edx), 0xb35020u);
    /* 00668f06: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00668f08: mov eax, dword ptr [0x9c9534] */ r_eax = R32((u32)(0x9c9534u));
    /* 00668f0d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_00668f10:; BB(0x00668f10);
    /* 00668f10: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00668f15: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x668f1au); f_0082d990();
    /* 00668f1a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668f1d: add ecx, 0x68 */ {  u32 a = r_ecx; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00668f20: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x668f25u); f_0082d838();
    /* 00668f25: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668f28: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00668f2b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00668f2d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x668f32u); f_0082d8bc();
    /* 00668f32: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668f35: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00668f38: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00668f3a: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00668f3d: lea ecx, [eax + esi] */ r_ecx = (u32)(r_eax+r_esi);
    /* 00668f40: lea edx, [eax + esi + 0x9c955c] */ r_edx = (u32)(r_eax+r_esi+0x9c955cu);
    /* 00668f47: lea eax, [edi + ecx + 0xc0] */ r_eax = (u32)(r_edi+r_ecx+0xc0u);
    /* 00668f4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668f4f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00668f51: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x668f56u); f_00830aa0();
    /* 00668f56: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x668f5bu); f_0082da80();
    /* 00668f5b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668f5e: mov dword ptr [eax + ebx*4 + 0xf0], 0 */ W32((u32)(r_eax+r_ebx*4+0xf0u), 0x0u);
    /* 00668f69: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00668f6c: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00668f6f: jl 0x668f10 */ if ((fS!=fO)) goto L_00668f10;
L_00668f71:; BB(0x00668f71);
    /* 00668f71: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00668f78: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668f7b: mov dword ptr [edx], 0xb35080 */ W32((u32)(r_edx), 0xb35080u);
    /* 00668f81: mov eax, dword ptr [0x9c9538] */ r_eax = R32((u32)(0x9c9538u));
    /* 00668f86: mov ecx, dword ptr [0xa8fcbc] */ r_ecx = R32((u32)(0xa8fcbcu));
    /* 00668f8c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00668f8e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00668f91: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x668f96u); f_005b8610();
    /* 00668f96: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668f99: mov ecx, dword ptr [0xa8fcbc] */ r_ecx = R32((u32)(0xa8fcbcu));
    /* 00668f9f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00668fa1: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 00668fa7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x668facu); f_005b8610();
    /* 00668fac: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668faf: mov ecx, dword ptr [0xa8fcbc] */ r_ecx = R32((u32)(0xa8fcbcu));
    /* 00668fb5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00668fb7: mov dword ptr [edx + 0x108], eax */ W32((u32)(r_edx+0x108u), r_eax);
    /* 00668fbd: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x668fc2u); f_005b8638();
    /* 00668fc2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00668fc5: mov edx, dword ptr [0xa8fcb8] */ r_edx = R32((u32)(0xa8fcb8u));
    /* 00668fcb: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00668fce: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00668fd1: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00668fd4: mov dword ptr [ecx + 0x100], 0 */ W32((u32)(r_ecx+0x100u), 0x0u);
    /* 00668fde: mov dword ptr [ecx + 0x10c], eax */ W32((u32)(r_ecx+0x10cu), r_eax);
    /* 00668fe4: mov dword ptr [ecx + 0x110], edx */ W32((u32)(r_ecx+0x110u), r_edx);
    /* 00668fea: mov eax, ecx */ r_eax = r_ecx;
    /* 00668fec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00668fef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00668ff6: mov esp, ebp */ r_esp = r_ebp;
    /* 00668ff8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668ff9: ret 8 */ FN_RET(0x00668ec8); r_esp += 12; return;
}

void f_00668ffc(void) /* sub_668FFC */
{
    FN_ENTER(0x00668ffc);
    /* 00668ffc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00668fff: fld dword ptr [0x939a44] */ FPUSH(R_F32((u32)(0x939a44u)));
    /* 00669005: fadd dword ptr [ecx + 0x100] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x100u));
    /* 0066900b: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 00669011: fst dword ptr [ecx + 0x100] */ W_F32((u32)(r_ecx+0x100u), ST(0));
    /* 00669017: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0066901a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066901d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00669020: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00669023: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00669026: fadd dword ptr [eax*4 + 0x9399b0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9399b0u));
    /* 0066902d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066902f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00669031: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00669032: jae 0x66903e */ if (!fC) goto L_0066903e;
L_00669034:; BB(0x00669034);
    /* 00669034: mov dword ptr [ecx + 0x100], 0 */ W32((u32)(r_ecx+0x100u), 0x0u);
L_0066903e:; BB(0x0066903e);
    /* 0066903e: call 0x669048 */ r_esp -= 4; W32(r_esp, 0x669043u); f_00669048();
    /* 00669043: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00669046: ret  */ FN_RET(0x00668ffc); r_esp += 4; return;
}

