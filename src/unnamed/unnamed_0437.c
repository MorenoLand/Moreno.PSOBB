#include "protos.h"

void f_004370b4(void) /* sub_4370B4 */
{
    FN_ENTER(0x004370b4);
    /* 004370b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004370b5: mov ebp, esp */ r_ebp = r_esp;
    /* 004370b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004370b9: push 0x8cdf8c */ { u32 v = 0x8cdf8cu; r_esp -= 4; W32(r_esp, v); }
    /* 004370be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004370c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004370c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004370cc: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004370cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004370d2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004370d5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004370d8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004370db: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004370de: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004370e1: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004370e4: call 0x521738 */ r_esp -= 4; W32(r_esp, 0x4370e9u); f_00521738();
    /* 004370e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004370f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004370f3: mov dword ptr [edx], 0xaf4a00 */ W32((u32)(r_edx), 0xaf4a00u);
    /* 004370f9: mov eax, dword ptr [0x9a482c] */ r_eax = R32((u32)(0x9a482cu));
    /* 004370fe: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00437101: call 0x432a30 */ r_esp -= 4; W32(r_esp, 0x437106u); f_00432a30();
    /* 00437106: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437108: je 0x437113 */ if (fZ) goto L_00437113;
L_0043710a:; BB(0x0043710a);
    /* 0043710a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043710d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043710e: call 0x51f760 */ r_esp -= 4; W32(r_esp, 0x437113u); f_0051f760();
L_00437113:; BB(0x00437113);
    /* 00437113: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00437117: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043711a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0043711d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043711f: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00437123: mov word ptr [ecx + 0x2c], dx */ W16((u32)(r_ecx+0x2cu), (u16)r_edx);
    /* 00437127: call 0x437368 */ r_esp -= 4; W32(r_esp, 0x43712cu); f_00437368();
    /* 0043712c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043712f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00437131: mov dword ptr [eax + 0x3fc], edx */ W32((u32)(r_eax+0x3fcu), r_edx);
    /* 00437137: mov dword ptr [eax], 0xaf4dc0 */ W32((u32)(r_eax), 0xaf4dc0u);
    /* 0043713d: mov dword ptr [eax + 0x400], edx */ W32((u32)(r_eax+0x400u), r_edx);
    /* 00437143: mov dword ptr [eax + 0x404], 0 */ W32((u32)(r_eax+0x404u), 0x0u);
    /* 0043714d: mov dword ptr [eax + 0x408], 0 */ W32((u32)(r_eax+0x408u), 0x0u);
    /* 00437157: mov dword ptr [eax + 0x40c], 0 */ W32((u32)(r_eax+0x40cu), 0x0u);
    /* 00437161: mov dword ptr [eax + 0x410], 0 */ W32((u32)(r_eax+0x410u), 0x0u);
    /* 0043716b: mov dword ptr [eax + 0x414], 0 */ W32((u32)(r_eax+0x414u), 0x0u);
    /* 00437175: mov dword ptr [eax + 0x418], 0 */ W32((u32)(r_eax+0x418u), 0x0u);
    /* 0043717f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437182: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00437189: mov esp, ebp */ r_esp = r_ebp;
    /* 0043718b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043718c: ret 0xc */ FN_RET(0x004370b4); r_esp += 16; return;
}

void f_00437190(void) /* sub_437190 */
{
    FN_ENTER(0x00437190);
    /* 00437190: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00437191: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437192: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00437193: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00437195: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00437199: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0043719d: mov edi, dword ptr [ebx + 0x398] */ r_edi = R32((u32)(r_ebx+0x398u));
    /* 004371a3: or edi, 0x100 */ {  u32 a = r_edi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 004371a9: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 004371ad: mov dword ptr [ebx + 0x398], edi */ W32((u32)(r_ebx+0x398u), r_edi);
    /* 004371b3: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004371b5: mov dword ptr [ebx + 0x300], edi */ W32((u32)(r_ebx+0x300u), r_edi);
    /* 004371bb: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 004371be: mov dword ptr [ebx + 0x304], edi */ W32((u32)(r_ebx+0x304u), r_edi);
    /* 004371c4: imul edi, ebp, 0x5555 */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)0x5555u; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004371ca: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004371cd: mov dword ptr [ebx + 0x308], eax */ W32((u32)(r_ebx+0x308u), r_eax);
    /* 004371d3: mov dword ptr [ebx + 0x3fc], edx */ W32((u32)(r_ebx+0x3fcu), r_edx);
    /* 004371d9: mov dword ptr [ebx + 0x400], ebp */ W32((u32)(r_ebx+0x400u), r_ebp);
    /* 004371df: mov ecx, edi */ r_ecx = r_edi;
    /* 004371e1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4371e6u); f_0082dcbc();
    /* 004371e6: fld dword ptr [0x8fd5a0] */ FPUSH(R_F32((u32)(0x8fd5a0u)));
    /* 004371ec: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004371ee: fstp dword ptr [ebx + 0x404] */ W_F32((u32)(r_ebx+0x404u), ST(0)); FPOP();
    /* 004371f4: mov ecx, edi */ r_ecx = r_edi;
    /* 004371f6: mov dword ptr [ebx + 0x408], 0 */ W32((u32)(r_ebx+0x408u), 0x0u);
    /* 00437200: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x437205u); f_0082ddd8();
    /* 00437205: fld dword ptr [0x8fd5a0] */ FPUSH(R_F32((u32)(0x8fd5a0u)));
    /* 0043720b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043720d: fstp dword ptr [ebx + 0x40c] */ W_F32((u32)(r_ebx+0x40cu), ST(0)); FPOP();
    /* 00437213: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437215: jne 0x43721e */ if (!fZ) goto L_0043721e;
L_00437217:; BB(0x00437217);
    /* 00437217: mov ebp, 0x8000 */ r_ebp = 0x8000u;
    /* 0043721c: jmp 0x43722c */ goto L_0043722c;
L_0043721e:; BB(0x0043721e);
    /* 0043721e: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437221: je 0x4372c3 */ if (fZ) goto L_004372c3;
L_00437227:; BB(0x00437227);
    /* 00437227: mov ebp, 0x9800 */ r_ebp = 0x9800u;
L_0043722c:; BB(0x0043722c);
    /* 0043722c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043722e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x437233u); f_0082dcbc();
    /* 00437233: fstp dword ptr [ebx + 0x410] */ W_F32((u32)(r_ebx+0x410u), ST(0)); FPOP();
    /* 00437239: mov dword ptr [ebx + 0x414], 0 */ W32((u32)(r_ebx+0x414u), 0x0u);
    /* 00437243: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00437245: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x43724au); f_0082ddd8();
    /* 0043724a: fstp dword ptr [ebx + 0x418] */ W_F32((u32)(r_ebx+0x418u), ST(0)); FPOP();
    /* 00437250: mov dword ptr [ebx + 0x39c], 0 */ W32((u32)(r_ebx+0x39cu), 0x0u);
    /* 0043725a: mov dword ptr [ebx + 0x60], ebp */ W32((u32)(r_ebx+0x60u), r_ebp);
    /* 0043725d: mov dword ptr [ebx + 0x3a0], 0 */ W32((u32)(r_ebx+0x3a0u), 0x0u);
    /* 00437267: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00437269: mov dword ptr [ebx + 0x3a4], 0 */ W32((u32)(r_ebx+0x3a4u), 0x0u);
    /* 00437273: call 0x436e08 */ r_esp -= 4; W32(r_esp, 0x437278u); f_00436e08();
    /* 00437278: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 0043727e: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 00437284: mov ebp, dword ptr [ebx + 0x308] */ r_ebp = R32((u32)(r_ebx+0x308u));
    /* 0043728a: movzx edi, word ptr [ebx + 0x2bc] */ r_edi = (u32)R16((u32)(r_ebx+0x2bcu));
    /* 00437291: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00437294: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00437297: mov dword ptr [ebx + 0x5c], 0x4000 */ W32((u32)(r_ebx+0x5cu), 0x4000u);
    /* 0043729e: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 004372a1: mov dword ptr [ebx + 0x40], ebp */ W32((u32)(r_ebx+0x40u), r_ebp);
    /* 004372a4: mov word ptr [ebx + 0x334], di */ W16((u32)(r_ebx+0x334u), (u16)r_edi);
    /* 004372ab: mov dword ptr [ebx + 0x3b4], 0 */ W32((u32)(r_ebx+0x3b4u), 0x0u);
    /* 004372b5: and eax, 0xfffff5ff */ {  u32 a = r_eax; u32 b = 0xfffff5ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004372ba: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 004372bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004372be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004372bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004372c0: ret 0xc */ FN_RET(0x00437190); r_esp += 16; return;
L_004372c3:; BB(0x004372c3);
    /* 004372c3: mov ebp, 0x6800 */ r_ebp = 0x6800u;
    /* 004372c8: jmp 0x43722c */ goto L_0043722c;
}

void f_00437318(void) /* sub_437318 */
{
    FN_ENTER(0x00437318);
    /* 00437318: call 0x52d360 */ r_esp -= 4; W32(r_esp, 0x43731du); f_0052d360();
    /* 0043731d: ret  */ FN_RET(0x00437318); r_esp += 4; return;
}

void f_00437320(void) /* sub_437320 */
{
    FN_ENTER(0x00437320);
    /* 00437320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437321: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00437323: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 00437329: mov edx, dword ptr [ebp + 0x308] */ r_edx = R32((u32)(r_ebp+0x308u));
    /* 0043732f: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 00437332: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00437335: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 00437338: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043733a: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x437340u); call_ind(t); }
    /* 00437340: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437342: je 0x437355 */ if (fZ) goto L_00437355;
L_00437344:; BB(0x00437344);
    /* 00437344: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0043734a: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043734d: mov dword ptr [ebp + 0x398], eax */ W32((u32)(r_ebp+0x398u), r_eax);
    /* 00437353: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437354: ret  */ FN_RET(0x00437320); r_esp += 4; return;
L_00437355:; BB(0x00437355);
    /* 00437355: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0043735b: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043735e: mov dword ptr [ebp + 0x398], eax */ W32((u32)(r_ebp+0x398u), r_eax);
    /* 00437364: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437365: ret  */ FN_RET(0x00437320); r_esp += 4; return;
}

void f_00437368(void) /* sub_437368 */
{
    FN_ENTER(0x00437368);
    /* 00437368: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00437369: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043736a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043736b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043736c: mov esi, ecx */ r_esi = r_ecx;
    /* 0043736e: mov ecx, esi */ r_ecx = r_esi;
    /* 00437370: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00437374: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x437379u); f_00521840();
    /* 00437379: mov ebx, dword ptr [0xa43d28] */ r_ebx = R32((u32)(0xa43d28u));
    /* 0043737f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00437381: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 00437387: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0043738a: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 0043738d: push 0x9a4870 */ { u32 v = 0x9a4870u; r_esp -= 4; W32(r_esp, v); }
    /* 00437392: mov ebp, dword ptr [ebx + 0x42c] */ r_ebp = R32((u32)(r_ebx+0x42cu));
    /* 00437398: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 0043739b: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 0043739e: mov ecx, esi */ r_ecx = r_esi;
    /* 004373a0: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x4373a5u); f_0051ff3c();
    /* 004373a5: push dword ptr [edi*4 + 0x9a48ac] */ { u32 v = R32((u32)(r_edi*4+0x9a48acu)); r_esp -= 4; W32(r_esp, v); }
    /* 004373ac: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x4373b1u); f_0077a684();
    /* 004373b1: mov ebp, eax */ r_ebp = r_eax;
    /* 004373b3: push dword ptr [edi*4 + 0x9a48a4] */ { u32 v = R32((u32)(r_edi*4+0x9a48a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004373ba: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x4373bfu); f_0077a698();
    /* 004373bf: mov ebx, eax */ r_ebx = r_eax;
    /* 004373c1: push dword ptr [edi*4 + 0x9a489c] */ { u32 v = R32((u32)(r_edi*4+0x9a489cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004373c8: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x4373cdu); f_0077a6b4();
    /* 004373cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004373d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004373d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004373d2: mov ecx, esi */ r_ecx = r_esi;
    /* 004373d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004373d5: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4373dau); f_00520c70();
    /* 004373da: mov ecx, esi */ r_ecx = r_esi;
    /* 004373dc: call 0x520360 */ r_esp -= 4; W32(r_esp, 0x4373e1u); f_00520360();
    /* 004373e1: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 004373e3: mov dword ptr [esi + 0x384], 0x40400000 */ W32((u32)(r_esi+0x384u), 0x40400000u);
    /* 004373ed: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 004373f0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004373f2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004373f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004373f7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004373f9: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004373fb: mov ecx, esi */ r_ecx = r_esi;
    /* 004373fd: lea ebx, [edx + 0x9a4838] */ r_ebx = (u32)(r_edx+0x9a4838u);
    /* 00437403: mov dword ptr [esi + 0x358], ebx */ W32((u32)(r_esi+0x358u), r_ebx);
    /* 00437409: call dword ptr [ebp + 0x184] */ { u32 t = R32((u32)(r_ebp+0x184u)); r_esp -= 4; W32(r_esp, 0x43740fu); call_ind(t); }
    /* 0043740f: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00437411: mov dword ptr [esi + 0x39c], 0 */ W32((u32)(r_esi+0x39cu), 0x0u);
    /* 0043741b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043741d: mov dword ptr [esi + 0x398], eax */ W32((u32)(r_esi+0x398u), r_eax);
    /* 00437423: mov dword ptr [esi + 0x3a0], 0 */ W32((u32)(r_esi+0x3a0u), 0x0u);
    /* 0043742d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043742f: mov dword ptr [esi + 0x3b4], eax */ W32((u32)(r_esi+0x3b4u), r_eax);
    /* 00437435: mov dword ptr [esi + 0x3a4], 0 */ W32((u32)(r_esi+0x3a4u), 0x0u);
    /* 0043743f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00437440: mov dword ptr [esi + 0x3bc], eax */ W32((u32)(r_esi+0x3bcu), r_eax);
    /* 00437446: mov dword ptr [esi + 0x3a8], 0 */ W32((u32)(r_esi+0x3a8u), 0x0u);
    /* 00437450: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 00437456: mov dword ptr [esi + 0x3cc], eax */ W32((u32)(r_esi+0x3ccu), r_eax);
    /* 0043745c: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 00437462: mov dword ptr [esi + 0x3ac], 0 */ W32((u32)(r_esi+0x3acu), 0x0u);
    /* 0043746c: mov dword ptr [esi + 0x3d8], eax */ W32((u32)(r_esi+0x3d8u), r_eax);
    /* 00437472: mov dword ptr [esi + 0x3dc], eax */ W32((u32)(r_esi+0x3dcu), r_eax);
    /* 00437478: mov dword ptr [esi + 0x3e4], eax */ W32((u32)(r_esi+0x3e4u), r_eax);
    /* 0043747e: mov dword ptr [esi + 0x3b0], 0 */ W32((u32)(r_esi+0x3b0u), 0x0u);
    /* 00437488: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 0043748f: mov ecx, esi */ r_ecx = r_esi;
    /* 00437491: mov dword ptr [esi + 0x3b8], 0 */ W32((u32)(r_esi+0x3b8u), 0x0u);
    /* 0043749b: mov dword ptr [esi + 0x3c0], 0 */ W32((u32)(r_esi+0x3c0u), 0x0u);
    /* 004374a5: mov dword ptr [esi + 0x3c4], 0 */ W32((u32)(r_esi+0x3c4u), 0x0u);
    /* 004374af: mov dword ptr [esi + 0x3d0], 2 */ W32((u32)(r_esi+0x3d0u), 0x2u);
    /* 004374b9: mov dword ptr [esi + 0x3e8], 0 */ W32((u32)(r_esi+0x3e8u), 0x0u);
    /* 004374c3: mov dword ptr [esi + 0x3ec], 0 */ W32((u32)(r_esi+0x3ecu), 0x0u);
    /* 004374cd: mov dword ptr [esi + 0x3f0], 0 */ W32((u32)(r_esi+0x3f0u), 0x0u);
    /* 004374d7: mov dword ptr [esi + 0x3f4], 0 */ W32((u32)(r_esi+0x3f4u), 0x0u);
    /* 004374e1: mov dword ptr [esi + 0x3f8], 0 */ W32((u32)(r_esi+0x3f8u), 0x0u);
    /* 004374eb: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4374f1u); call_ind(t); }
    /* 004374f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004374f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004374f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004374f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004374f5: ret 4 */ FN_RET(0x00437368); r_esp += 8; return;
}

void f_004374f8(void) /* sub_4374F8 */
{
    FN_ENTER(0x004374f8);
    /* 004374f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004374f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004374fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004374fd: call 0x43751c */ r_esp -= 4; W32(r_esp, 0x437502u); f_0043751c();
    /* 00437502: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00437506: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00437508: jne 0x43750e */ if (!fZ) goto L_0043750e;
L_0043750a:; BB(0x0043750a);
    /* 0043750a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043750b: ret 4 */ FN_RET(0x004374f8); r_esp += 8; return;
L_0043750e:; BB(0x0043750e);
    /* 0043750e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043750f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x437514u); f_005c2f74();
    /* 00437514: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00437515: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00437516: ret 4 */ FN_RET(0x004374f8); r_esp += 8; return;
}

void f_0043751c(void) /* sub_43751C */
{
    FN_ENTER(0x0043751c);
    /* 0043751c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043751d: mov ebp, esp */ r_ebp = r_esp;
    /* 0043751f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00437521: push 0x8cdfa8 */ { u32 v = 0x8cdfa8u; r_esp -= 4; W32(r_esp, v); }
    /* 00437526: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043752c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043752d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00437534: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00437537: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043753a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0043753d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00437540: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00437543: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00437546: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00437549: mov dword ptr [ecx], 0xaf5040 */ W32((u32)(r_ecx), 0xaf5040u);
    /* 0043754f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00437556: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x43755bu); f_008171e8();
    /* 0043755b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043755e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00437565: mov esp, ebp */ r_esp = r_ebp;
    /* 00437567: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437568: ret  */ FN_RET(0x0043751c); r_esp += 4; return;
}

void f_0043756c(void) /* sub_43756C */
{
    FN_ENTER(0x0043756c);
    /* 0043756c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043756d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0043756f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00437571: call 0x437590 */ r_esp -= 4; W32(r_esp, 0x437576u); f_00437590();
    /* 00437576: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0043757a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043757c: jne 0x437582 */ if (!fZ) goto L_00437582;
L_0043757e:; BB(0x0043757e);
    /* 0043757e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043757f: ret 4 */ FN_RET(0x0043756c); r_esp += 8; return;
L_00437582:; BB(0x00437582);
    /* 00437582: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00437583: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x437588u); f_005c2f74();
    /* 00437588: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00437589: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043758a: ret 4 */ FN_RET(0x0043756c); r_esp += 8; return;
}

void f_00437590(void) /* sub_437590 */
{
    FN_ENTER(0x00437590);
    /* 00437590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437591: mov ebp, esp */ r_ebp = r_esp;
    /* 00437593: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00437595: push 0x8cdfc4 */ { u32 v = 0x8cdfc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043759a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004375a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004375a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004375a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004375ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004375ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004375b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004375b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004375b7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004375ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004375bd: mov edx, dword ptr [ecx + 0xe8] */ r_edx = R32((u32)(r_ecx+0xe8u));
    /* 004375c3: mov dword ptr [ecx], 0xaf5060 */ W32((u32)(r_ecx), 0xaf5060u);
    /* 004375c9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004375cb: je 0x4375e7 */ if (fZ) goto L_004375e7;
L_004375cd:; BB(0x004375cd);
    /* 004375cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004375d0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004375d4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004375d9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004375dd: mov dword ptr [ecx + 0xe8], 0 */ W32((u32)(r_ecx+0xe8u), 0x0u);
L_004375e7:; BB(0x004375e7);
    /* 004375e7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004375ee: call 0x5219f0 */ r_esp -= 4; W32(r_esp, 0x4375f3u); f_005219f0();
    /* 004375f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004375f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004375fd: mov esp, ebp */ r_esp = r_ebp;
    /* 004375ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437600: ret  */ FN_RET(0x00437590); r_esp += 4; return;
}

void f_00437604(void) /* sub_437604 */
{
    FN_ENTER(0x00437604);
    /* 00437604: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437605: mov ebp, esp */ r_ebp = r_esp;
    /* 00437607: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00437609: push 0x8cdfe0 */ { u32 v = 0x8cdfe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043760e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00437614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00437615: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043761c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043761f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00437622: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00437625: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00437628: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0043762b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043762e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00437631: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00437634: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00437637: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0043763a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0043763d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00437640: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00437643: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x437648u); f_008193cc();
    /* 00437648: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043764f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00437652: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00437655: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00437658: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 0043765b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043765e: mov dword ptr [eax], 0xaf5040 */ W32((u32)(r_eax), 0xaf5040u);
    /* 00437664: mov edx, dword ptr [0x9a48c8] */ r_edx = R32((u32)(0x9a48c8u));
    /* 0043766a: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0043766d: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 00437670: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 00437672: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 00437675: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 00437678: mov dword ptr [eax + 0x24], esi */ W32((u32)(r_eax+0x24u), r_esi);
    /* 0043767b: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0043767e: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00437681: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00437683: mov ecx, dword ptr [ecx*8 + 0x8fd680] */ r_ecx = R32((u32)(r_ecx*8+0x8fd680u));
    /* 0043768a: lea ebx, [eax + 0x20] */ r_ebx = (u32)(r_eax+0x20u);
    /* 0043768d: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00437690: mov edx, ecx */ r_edx = r_ecx;
    /* 00437692: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00437695: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00437697: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00437699: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0043769b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043769c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043769d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043769e: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x4376a3u); f_00782b64();
    /* 004376a3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004376a6: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004376a9: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004376ac: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004376af: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004376b2: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004376b5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004376b7: mov ecx, dword ptr [edx*8 + 0x8fd678] */ r_ecx = R32((u32)(r_edx*8+0x8fd678u));
    /* 004376be: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 004376c5: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 004376c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004376cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004376d2: mov esp, ebp */ r_esp = r_ebp;
    /* 004376d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004376d5: ret 0x10 */ FN_RET(0x00437604); r_esp += 20; return;
}

void f_004376d8(void) /* sub_4376D8 */
{
    FN_ENTER(0x004376d8);
    /* 004376d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004376d9: mov ebp, esp */ r_ebp = r_esp;
    /* 004376db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004376dd: push 0x8ce008 */ { u32 v = 0x8ce008u; r_esp -= 4; W32(r_esp, v); }
    /* 004376e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004376e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004376e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004376f0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004376f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004376f6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004376f9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004376fc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004376ff: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 00437702: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00437705: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00437708: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0043770b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043770d: jle 0x437726 */ if ((fZ||fS!=fO)) goto L_00437726;
L_0043770f:; BB(0x0043770f);
    /* 0043770f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00437712: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00437715: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00437718: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043771b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00437722: mov esp, ebp */ r_esp = r_ebp;
    /* 00437724: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437725: ret  */ FN_RET(0x004376d8); r_esp += 4; return;
L_00437726:; BB(0x00437726);
    /* 00437726: call 0x432a30 */ r_esp -= 4; W32(r_esp, 0x43772bu); f_00432a30();
    /* 0043772b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0043772e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437730: je 0x4377a5 */ if (fZ) goto L_004377a5;
L_00437732:; BB(0x00437732);
    /* 00437732: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00437739: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0043773e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x437743u); f_005caba4();
    /* 00437743: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00437744: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00437747: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437749: je 0x43779e */ if (fZ) goto L_0043779e;
L_0043774b:; BB(0x0043774b);
    /* 0043774b: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00437752: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00437759: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043775c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043775f: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00437762: mov esi, dword ptr [ecx + 0x1c] */ r_esi = R32((u32)(r_ecx+0x1cu));
    /* 00437765: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00437768: lea edi, [ecx + 0x20] */ r_edi = (u32)(r_ecx+0x20u);
    /* 0043776b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0043776e: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 00437771: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00437775: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00437777: fld dword ptr [edx*8 + 0x8fd684] */ FPUSH(R_F32((u32)(r_edx*8+0x8fd684u)));
    /* 0043777e: fmul dword ptr [0x8fd674] */ ST(0) = ST(0) * R_F32((u32)(0x8fd674u));
    /* 00437784: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00437788: mov ecx, eax */ r_ecx = r_eax;
    /* 0043778a: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0043778e: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00437792: call 0x437810 */ r_esp -= 4; W32(r_esp, 0x437797u); f_00437810();
    /* 00437797: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0043779e:; BB(0x0043779e);
    /* 0043779e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_004377a5:; BB(0x004377a5);
    /* 004377a5: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004377a8: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 004377ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004377ad: mov esi, dword ptr [eax*8 + 0x8fd67c] */ r_esi = R32((u32)(r_eax*8+0x8fd67cu));
    /* 004377b4: mov dword ptr [edi + 0x34], esi */ W32((u32)(r_edi+0x34u), r_esi);
    /* 004377b7: lea ebx, [edi + 0x20] */ r_ebx = (u32)(r_edi+0x20u);
    /* 004377ba: mov esi, dword ptr [eax*8 + 0x8fd678] */ r_esi = R32((u32)(r_eax*8+0x8fd678u));
    /* 004377c1: mov eax, dword ptr [eax*8 + 0x8fd680] */ r_eax = R32((u32)(r_eax*8+0x8fd680u));
    /* 004377c8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004377c9: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x004377c9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004377c9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004377cb: lea ecx, [edi + 0x28] */ r_ecx = (u32)(r_edi+0x28u);
    /* 004377ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004377cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004377d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004377d1: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x4377d6u); f_00782b64();
    /* 004377d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004377d9: mov edx, edi */ r_edx = r_edi;
    /* 004377db: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 004377de: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004377e1: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004377e4: jne 0x43770f */ if (!fZ) goto L_0043770f;
L_004377ea:; BB(0x004377ea);
    /* 004377ea: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004377ed: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004377f0: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004377f3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004377f7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004377fc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00437800: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437803: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043780a: mov esp, ebp */ r_esp = r_ebp;
    /* 0043780c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043780d: ret  */ FN_RET(0x004376d8); r_esp += 4; return;
}

void f_00437810(void) /* sub_437810 */
{
    FN_ENTER(0x00437810);
    /* 00437810: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00437811: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00437812: mov edi, ecx */ r_edi = r_ecx;
    /* 00437814: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00437818: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043781c: mov ecx, edi */ r_ecx = r_edi;
    /* 0043781e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00437822: call 0x521bbc */ r_esp -= 4; W32(r_esp, 0x437827u); f_00521bbc();
    /* 00437827: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0043782b: mov dword ptr [edi], 0xaf5060 */ W32((u32)(r_edi), 0xaf5060u);
    /* 00437831: mov eax, dword ptr [0x9a48cc] */ r_eax = R32((u32)(0x9a48ccu));
    /* 00437836: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00437839: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0043783b: mov dword ptr [edi + 0xc4], edx */ W32((u32)(r_edi+0xc4u), r_edx);
    /* 00437841: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00437844: mov dword ptr [edi + 0xc8], eax */ W32((u32)(r_edi+0xc8u), r_eax);
    /* 0043784a: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0043784d: mov dword ptr [edi + 0xcc], ecx */ W32((u32)(r_edi+0xccu), r_ecx);
    /* 00437853: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 00437856: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 00437859: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 0043785c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0043785e: mov dword ptr [edi + 0xb8], eax */ W32((u32)(r_edi+0xb8u), r_eax);
    /* 00437864: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00437867: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 0043786d: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 00437870: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 00437876: mov dword ptr [edi + 0xc0], esi */ W32((u32)(r_edi+0xc0u), r_esi);
    /* 0043787c: mov dword ptr [eax + 0xc], 0x40400000 */ W32((u32)(r_eax+0xcu), 0x40400000u);
    /* 00437883: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00437887: mov dword ptr [edi + 0xb4], eax */ W32((u32)(r_edi+0xb4u), r_eax);
    /* 0043788d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043788f: mov dword ptr [edi + 0xd0], 0 */ W32((u32)(r_edi+0xd0u), 0x0u);
    /* 00437899: mov dword ptr [edi + 0xdc], eax */ W32((u32)(r_edi+0xdcu), r_eax);
    /* 0043789f: mov dword ptr [edi + 0xe0], eax */ W32((u32)(r_edi+0xe0u), r_eax);
    /* 004378a5: mov dword ptr [edi + 0xe8], eax */ W32((u32)(r_edi+0xe8u), r_eax);
    /* 004378ab: mov dword ptr [edi + 0xd4], 0 */ W32((u32)(r_edi+0xd4u), 0x0u);
    /* 004378b5: mov eax, edi */ r_eax = r_edi;
    /* 004378b7: mov dword ptr [edi + 0xd8], 0 */ W32((u32)(r_edi+0xd8u), 0x0u);
    /* 004378c1: mov dword ptr [edi + 0xe4], 0 */ W32((u32)(r_edi+0xe4u), 0x0u);
    /* 004378cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004378cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004378cd: ret 0x14 */ FN_RET(0x00437810); r_esp += 24; return;
}

void f_004378d0(void) /* sub_4378D0 */
{
    FN_ENTER(0x004378d0);
    /* 004378d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004378d1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004378d4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004378d6: fld dword ptr [ebp + 0xc8] */ FPUSH(R_F32((u32)(r_ebp+0xc8u)));
    /* 004378dc: fcom dword ptr [0x8fd668] */ fx_compare(ST(0), R_F32((u32)(0x8fd668u))); 
    /* 004378e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004378e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004378e5: jbe 0x437950 */ if ((fC||fZ)) goto L_00437950;
L_004378e7:; BB(0x004378e7);
    /* 004378e7: fld dword ptr [0x8fd664] */ FPUSH(R_F32((u32)(0x8fd664u)));
    /* 004378ed: fadd dword ptr [ebp + 0xe4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xe4u));
    /* 004378f3: fld dword ptr [0x8fd660] */ FPUSH(R_F32((u32)(0x8fd660u)));
    /* 004378f9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004378fb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004378fd: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 00437903: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00437904: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00437906: ja 0x43790a */ if ((!fC&&!fZ)) goto L_0043790a;
L_00437908:; BB(0x00437908);
    /* 00437908: fst st(2) */ ST(2) = ST(0);
L_0043790a:; BB(0x0043790a);
    /* 0043790a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043790c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043790e: fst dword ptr [ebp + 0xe4] */ W_F32((u32)(r_ebp+0xe4u), ST(0));
    /* 00437914: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00437916: fld dword ptr [ebp + 0xb8] */ FPUSH(R_F32((u32)(r_ebp+0xb8u)));
    /* 0043791c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043791e: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 00437924: fld dword ptr [0x8fd65c] */ FPUSH(R_F32((u32)(0x8fd65cu)));
    /* 0043792a: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0043792c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043792e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00437930: fadd dword ptr [ebp + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xc4u));
    /* 00437936: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00437938: fadd dword ptr [ebp + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xccu));
    /* 0043793e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00437940: fst dword ptr [ebp + 0xc4] */ W_F32((u32)(r_ebp+0xc4u), ST(0));
    /* 00437946: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00437948: fst dword ptr [ebp + 0xcc] */ W_F32((u32)(r_ebp+0xccu), ST(0));
    /* 0043794e: jmp 0x437995 */ goto L_00437995;
L_00437950:; BB(0x00437950);
    /* 00437950: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00437952: mov eax, 0x410b3333 */ r_eax = 0x410b3333u;
    /* 00437957: fld dword ptr [ebp + 0xb8] */ FPUSH(R_F32((u32)(r_ebp+0xb8u)));
    /* 0043795d: fld dword ptr [ebp + 0xb4] */ FPUSH(R_F32((u32)(r_ebp+0xb4u)));
    /* 00437963: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 00437969: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043796b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0043796d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043796f: fadd dword ptr [ebp + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xc4u));
    /* 00437975: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00437977: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00437979: fadd dword ptr [ebp + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xccu));
    /* 0043797f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00437981: fst dword ptr [ebp + 0xc4] */ W_F32((u32)(r_ebp+0xc4u), ST(0));
    /* 00437987: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00437989: fst dword ptr [ebp + 0xcc] */ W_F32((u32)(r_ebp+0xccu), ST(0));
    /* 0043798f: mov dword ptr [ebp + 0xc8], eax */ W32((u32)(r_ebp+0xc8u), r_eax);
L_00437995:; BB(0x00437995);
    /* 00437995: mov ecx, dword ptr [ebp + 0xe8] */ r_ecx = R32((u32)(r_ebp+0xe8u));
    /* 0043799b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043799d: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 004379a0: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 004379a3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004379a5: je 0x437a9d */ if (fZ) goto L_00437a9d;
L_004379ab:; BB(0x004379ab);
    /* 004379ab: lea eax, [ebp + 0xc4] */ r_eax = (u32)(r_ebp+0xc4u);
    /* 004379b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004379b2: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4379b7u); f_00508db8();
L_004379b7:; BB(0x004379b7);
    /* 004379b7: mov ecx, dword ptr [ebp + 0xdc] */ r_ecx = R32((u32)(r_ebp+0xdcu));
    /* 004379bd: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 004379c2: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004379c4: mov eax, ecx */ r_eax = r_ecx;
    /* 004379c6: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004379c9: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004379cb: sar edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004379ce: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004379d0: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004379d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004379d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004379d7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004379d9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004379db: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004379dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004379df: jne 0x437a17 */ if (!fZ) goto L_00437a17;
L_004379e1:; BB(0x004379e1);
    /* 004379e1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 004379e4: lea eax, [ebp + 0xd0] */ r_eax = (u32)(r_ebp+0xd0u);
    /* 004379ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004379eb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004379ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004379ee: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x4379f3u); f_007b4c58();
    /* 004379f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004379f5: je 0x437a08 */ if (fZ) goto L_00437a08;
L_004379f7:; BB(0x004379f7);
    /* 004379f7: mov eax, dword ptr [ebp + 0xe0] */ r_eax = R32((u32)(r_ebp+0xe0u));
    /* 004379fd: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00437a00: mov dword ptr [ebp + 0xe0], eax */ W32((u32)(r_ebp+0xe0u), r_eax);
    /* 00437a06: jmp 0x437a17 */ goto L_00437a17;
L_00437a08:; BB(0x00437a08);
    /* 00437a08: mov eax, dword ptr [ebp + 0xe0] */ r_eax = R32((u32)(r_ebp+0xe0u));
    /* 00437a0e: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00437a11: mov dword ptr [ebp + 0xe0], eax */ W32((u32)(r_ebp+0xe0u), r_eax);
L_00437a17:; BB(0x00437a17);
    /* 00437a17: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00437a1a: fcom dword ptr [0x8fcc1c] */ fx_compare(ST(0), R_F32((u32)(0x8fcc1cu))); 
    /* 00437a20: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00437a22: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00437a23: ja 0x437a70 */ if ((!fC&&!fZ)) goto L_00437a70;
L_00437a25:; BB(0x00437a25);
    /* 00437a25: fcomp dword ptr [0x8fcc20] */ fx_compare(ST(0), R_F32((u32)(0x8fcc20u))); FPOP();
    /* 00437a2b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00437a2d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00437a2e: jb 0x437a72 */ if (fC) goto L_00437a72;
L_00437a30:; BB(0x00437a30);
    /* 00437a30: mov eax, dword ptr [0x8fd654] */ r_eax = R32((u32)(0x8fd654u));
    /* 00437a35: mov dword ptr [esp + 4], 0x40400000 */ W32((u32)(r_esp+0x4u), 0x40400000u);
    /* 00437a3d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00437a40: call 0x434148 */ r_esp -= 4; W32(r_esp, 0x437a45u); f_00434148();
    /* 00437a45: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00437a48: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00437a4c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00437a4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00437a50: push 0x9a48d0 */ { u32 v = 0x9a48d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00437a55: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00437a57: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x437a5au); call_ind(t); }
    /* 00437a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437a5c: je 0x437a72 */ if (fZ) goto L_00437a72;
L_00437a5e:; BB(0x00437a5e);
    /* 00437a5e: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00437a62: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00437a67: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00437a6b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00437a6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437a6f: ret  */ FN_RET(0x004378d0); r_esp += 4; return;
L_00437a70:; BB(0x00437a70);
    /* 00437a70: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00437a72:; BB(0x00437a72);
    /* 00437a72: mov eax, dword ptr [ebp + 0xdc] */ r_eax = R32((u32)(r_ebp+0xdcu));
    /* 00437a78: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00437a7b: mov dword ptr [ebp + 0xdc], eax */ W32((u32)(r_ebp+0xdcu), r_eax);
    /* 00437a81: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00437a84: jl 0x437a98 */ if ((fS!=fO)) goto L_00437a98;
L_00437a86:; BB(0x00437a86);
    /* 00437a86: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00437a8a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00437a8f: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00437a93: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00437a96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437a97: ret  */ FN_RET(0x004378d0); r_esp += 4; return;
L_00437a98:; BB(0x00437a98);
    /* 00437a98: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00437a9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437a9c: ret  */ FN_RET(0x004378d0); r_esp += 4; return;
L_00437a9d:; BB(0x00437a9d);
    /* 00437a9d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00437a9f: push 0xdf */ { u32 v = 0xdfu; r_esp -= 4; W32(r_esp, v); }
    /* 00437aa4: lea eax, [ebp + 0xc4] */ r_eax = (u32)(r_ebp+0xc4u);
    /* 00437aaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00437aab: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x437ab0u); f_0050981c();
    /* 00437ab0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00437ab3: mov dword ptr [ebp + 0xe8], eax */ W32((u32)(r_ebp+0xe8u), r_eax);
    /* 00437ab9: jmp 0x4379b7 */ goto L_004379b7;
}

void f_00437ac0(void) /* sub_437AC0 */
{
    FN_ENTER(0x00437ac0);
    /* 00437ac0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00437ac3: mov eax, dword ptr [ecx + 0xe0] */ r_eax = R32((u32)(r_ecx+0xe0u));
    /* 00437ac9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00437acb: je 0x437afd */ if (fZ) goto L_00437afd;
L_00437acd:; BB(0x00437acd);
    /* 00437acd: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 00437ad4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00437ad7: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 00437ada: add ecx, 0xd0 */ {  u32 a = r_ecx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00437ae0: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 00437ae8: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 00437af0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00437af1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00437af3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00437af4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00437af5: call 0x520d18 */ r_esp -= 4; W32(r_esp, 0x437afau); f_00520d18();
    /* 00437afa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00437afd:; BB(0x00437afd);
    /* 00437afd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00437b00: ret  */ FN_RET(0x00437ac0); r_esp += 4; return;
}

void f_00437b30(void) /* sub_437B30 */
{
    FN_ENTER(0x00437b30);
    /* 00437b30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00437b31: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00437b33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00437b35: call 0x437b54 */ r_esp -= 4; W32(r_esp, 0x437b3au); f_00437b54();
    /* 00437b3a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00437b3e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00437b40: jne 0x437b46 */ if (!fZ) goto L_00437b46;
L_00437b42:; BB(0x00437b42);
    /* 00437b42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00437b43: ret 4 */ FN_RET(0x00437b30); r_esp += 8; return;
L_00437b46:; BB(0x00437b46);
    /* 00437b46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00437b47: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x437b4cu); f_005c2f74();
    /* 00437b4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00437b4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00437b4e: ret 4 */ FN_RET(0x00437b30); r_esp += 8; return;
}

void f_00437b54(void) /* sub_437B54 */
{
    FN_ENTER(0x00437b54);
    /* 00437b54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437b55: mov ebp, esp */ r_ebp = r_esp;
    /* 00437b57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00437b59: push 0x8ce024 */ { u32 v = 0x8ce024u; r_esp -= 4; W32(r_esp, v); }
    /* 00437b5e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00437b64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00437b65: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00437b6c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00437b6f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00437b72: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00437b75: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00437b78: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00437b7b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00437b7e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00437b81: mov dword ptr [ecx], 0xaf50e8 */ W32((u32)(r_ecx), 0xaf50e8u);
    /* 00437b87: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00437b8e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x437b93u); f_008171e8();
    /* 00437b93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00437b96: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00437b9d: mov esp, ebp */ r_esp = r_ebp;
    /* 00437b9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00437ba0: ret  */ FN_RET(0x00437b54); r_esp += 4; return;
}

void f_00437ba4(void) /* sub_437BA4 */
{
    FN_ENTER(0x00437ba4);
    /* 00437ba4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00437ba5: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00437ba8: mov esi, ecx */ r_esi = r_ecx;
    /* 00437baa: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00437bae: mov ecx, esi */ r_ecx = r_esi;
    /* 00437bb0: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x437bb5u); f_008193cc();
    /* 00437bb5: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00437bb9: mov dword ptr [esi], 0xaf50e8 */ W32((u32)(r_esi), 0xaf50e8u);
    /* 00437bbf: mov eax, dword ptr [0x9a48d8] */ r_eax = R32((u32)(0x9a48d8u));
    /* 00437bc4: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00437bc7: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00437bcb: mov dword ptr [esi + 0x110], edx */ W32((u32)(r_esi+0x110u), r_edx);
    /* 00437bd1: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 00437bd4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00437bd6: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00437bd9: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00437bdc: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 00437bdf: mov eax, dword ptr [0xa43e00] */ r_eax = R32((u32)(0xa43e00u));
    /* 00437be4: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00437be7: mov eax, dword ptr [0xa43e04] */ r_eax = R32((u32)(0xa43e04u));
    /* 00437bec: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00437bef: mov eax, dword ptr [0xa43e08] */ r_eax = R32((u32)(0xa43e08u));
    /* 00437bf4: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00437bf7: mov eax, dword ptr [0xa441dc] */ r_eax = R32((u32)(0xa441dcu));
    /* 00437bfc: mov dword ptr [esi + 0xd8], eax */ W32((u32)(r_esi+0xd8u), r_eax);
    /* 00437c02: mov eax, dword ptr [0xa43e0c] */ r_eax = R32((u32)(0xa43e0cu));
    /* 00437c07: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00437c0a: mov eax, dword ptr [0xa43e10] */ r_eax = R32((u32)(0xa43e10u));
    /* 00437c0f: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00437c12: mov eax, dword ptr [0xa43e14] */ r_eax = R32((u32)(0xa43e14u));
    /* 00437c17: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 00437c1a: mov eax, dword ptr [0xa441e0] */ r_eax = R32((u32)(0xa441e0u));
    /* 00437c1f: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
    /* 00437c25: mov eax, dword ptr [0xa43e18] */ r_eax = R32((u32)(0xa43e18u));
    /* 00437c2a: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 00437c2d: mov eax, dword ptr [0xa43e1c] */ r_eax = R32((u32)(0xa43e1cu));
    /* 00437c32: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 00437c35: mov eax, dword ptr [0xa43e20] */ r_eax = R32((u32)(0xa43e20u));
    /* 00437c3a: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 00437c3d: mov eax, dword ptr [0xa441e4] */ r_eax = R32((u32)(0xa441e4u));
    /* 00437c42: mov dword ptr [esi + 0xe0], eax */ W32((u32)(r_esi+0xe0u), r_eax);
    /* 00437c48: mov eax, dword ptr [0xa43e24] */ r_eax = R32((u32)(0xa43e24u));
    /* 00437c4d: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 00437c50: mov eax, dword ptr [0xa43e28] */ r_eax = R32((u32)(0xa43e28u));
    /* 00437c55: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 00437c58: mov eax, dword ptr [0xa43e2c] */ r_eax = R32((u32)(0xa43e2cu));
    /* 00437c5d: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 00437c60: mov eax, dword ptr [0xa441e8] */ r_eax = R32((u32)(0xa441e8u));
    /* 00437c65: mov dword ptr [esi + 0xe4], eax */ W32((u32)(r_esi+0xe4u), r_eax);
    /* 00437c6b: mov eax, dword ptr [0xa43e30] */ r_eax = R32((u32)(0xa43e30u));
    /* 00437c70: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 00437c73: mov eax, dword ptr [0xa43e34] */ r_eax = R32((u32)(0xa43e34u));
    /* 00437c78: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
    /* 00437c7b: mov eax, dword ptr [0xa43e38] */ r_eax = R32((u32)(0xa43e38u));
    /* 00437c80: mov dword ptr [esi + 0x68], eax */ W32((u32)(r_esi+0x68u), r_eax);
    /* 00437c83: mov eax, dword ptr [0xa441ec] */ r_eax = R32((u32)(0xa441ecu));
    /* 00437c88: mov dword ptr [esi + 0xe8], eax */ W32((u32)(r_esi+0xe8u), r_eax);
    /* 00437c8e: mov eax, dword ptr [0xa43e3c] */ r_eax = R32((u32)(0xa43e3cu));
    /* 00437c93: mov dword ptr [esi + 0x6c], eax */ W32((u32)(r_esi+0x6cu), r_eax);
    /* 00437c96: mov eax, dword ptr [0xa43e40] */ r_eax = R32((u32)(0xa43e40u));
    /* 00437c9b: mov dword ptr [esi + 0x70], eax */ W32((u32)(r_esi+0x70u), r_eax);
    /* 00437c9e: mov eax, dword ptr [0xa43e44] */ r_eax = R32((u32)(0xa43e44u));
    /* 00437ca3: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 00437ca6: mov eax, dword ptr [0xa441f0] */ r_eax = R32((u32)(0xa441f0u));
    /* 00437cab: mov dword ptr [esi + 0xec], eax */ W32((u32)(r_esi+0xecu), r_eax);
    /* 00437cb1: mov eax, dword ptr [0xa43e48] */ r_eax = R32((u32)(0xa43e48u));
    /* 00437cb6: mov dword ptr [esi + 0x78], eax */ W32((u32)(r_esi+0x78u), r_eax);
    /* 00437cb9: mov eax, dword ptr [0xa43e4c] */ r_eax = R32((u32)(0xa43e4cu));
    /* 00437cbe: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 00437cc1: mov eax, dword ptr [0xa43e50] */ r_eax = R32((u32)(0xa43e50u));
    /* 00437cc6: mov dword ptr [esi + 0x80], eax */ W32((u32)(r_esi+0x80u), r_eax);
    /* 00437ccc: mov eax, dword ptr [0xa441f4] */ r_eax = R32((u32)(0xa441f4u));
    /* 00437cd1: mov dword ptr [esi + 0xf0], eax */ W32((u32)(r_esi+0xf0u), r_eax);
    /* 00437cd7: mov eax, dword ptr [0xa43e54] */ r_eax = R32((u32)(0xa43e54u));
    /* 00437cdc: mov dword ptr [esi + 0x84], eax */ W32((u32)(r_esi+0x84u), r_eax);
    /* 00437ce2: mov eax, dword ptr [0xa43e58] */ r_eax = R32((u32)(0xa43e58u));
    /* 00437ce7: mov dword ptr [esi + 0x88], eax */ W32((u32)(r_esi+0x88u), r_eax);
    /* 00437ced: mov eax, dword ptr [0xa43e5c] */ r_eax = R32((u32)(0xa43e5cu));
    /* 00437cf2: mov dword ptr [esi + 0x8c], eax */ W32((u32)(r_esi+0x8cu), r_eax);
    /* 00437cf8: mov eax, dword ptr [0xa441f8] */ r_eax = R32((u32)(0xa441f8u));
    /* 00437cfd: mov dword ptr [esi + 0xf4], eax */ W32((u32)(r_esi+0xf4u), r_eax);
    /* 00437d03: mov eax, dword ptr [0xa43e60] */ r_eax = R32((u32)(0xa43e60u));
    /* 00437d08: mov dword ptr [esi + 0x90], eax */ W32((u32)(r_esi+0x90u), r_eax);
    /* 00437d0e: mov eax, dword ptr [0xa43e64] */ r_eax = R32((u32)(0xa43e64u));
    /* 00437d13: mov dword ptr [esi + 0x94], eax */ W32((u32)(r_esi+0x94u), r_eax);
    /* 00437d19: mov eax, dword ptr [0xa43e68] */ r_eax = R32((u32)(0xa43e68u));
    /* 00437d1e: mov dword ptr [esi + 0x98], eax */ W32((u32)(r_esi+0x98u), r_eax);
    /* 00437d24: mov eax, dword ptr [0xa441fc] */ r_eax = R32((u32)(0xa441fcu));
    /* 00437d29: mov dword ptr [esi + 0xf8], eax */ W32((u32)(r_esi+0xf8u), r_eax);
    /* 00437d2f: mov eax, dword ptr [0xa43e6c] */ r_eax = R32((u32)(0xa43e6cu));
    /* 00437d34: mov dword ptr [esi + 0x9c], eax */ W32((u32)(r_esi+0x9cu), r_eax);
    /* 00437d3a: mov eax, dword ptr [0xa43e70] */ r_eax = R32((u32)(0xa43e70u));
    /* 00437d3f: mov dword ptr [esi + 0xa0], eax */ W32((u32)(r_esi+0xa0u), r_eax);
    /* 00437d45: mov eax, dword ptr [0xa43e74] */ r_eax = R32((u32)(0xa43e74u));
    /* 00437d4a: mov dword ptr [esi + 0xa4], eax */ W32((u32)(r_esi+0xa4u), r_eax);
    /* 00437d50: mov eax, dword ptr [0xa44200] */ r_eax = R32((u32)(0xa44200u));
    /* 00437d55: mov dword ptr [esi + 0xfc], eax */ W32((u32)(r_esi+0xfcu), r_eax);
    /* 00437d5b: mov eax, dword ptr [0xa43e78] */ r_eax = R32((u32)(0xa43e78u));
    /* 00437d60: mov dword ptr [esi + 0xa8], eax */ W32((u32)(r_esi+0xa8u), r_eax);
    /* 00437d66: mov eax, dword ptr [0xa43e7c] */ r_eax = R32((u32)(0xa43e7cu));
    /* 00437d6b: mov dword ptr [esi + 0xac], eax */ W32((u32)(r_esi+0xacu), r_eax);
    /* 00437d71: mov eax, dword ptr [0xa43e80] */ r_eax = R32((u32)(0xa43e80u));
    /* 00437d76: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
    /* 00437d7c: mov eax, dword ptr [0xa44204] */ r_eax = R32((u32)(0xa44204u));
    /* 00437d81: mov dword ptr [esi + 0x100], eax */ W32((u32)(r_esi+0x100u), r_eax);
    /* 00437d87: mov eax, dword ptr [0xa43e84] */ r_eax = R32((u32)(0xa43e84u));
    /* 00437d8c: mov dword ptr [esi + 0xb4], eax */ W32((u32)(r_esi+0xb4u), r_eax);
    /* 00437d92: mov eax, dword ptr [0xa43e88] */ r_eax = R32((u32)(0xa43e88u));
    /* 00437d97: mov dword ptr [esi + 0xb8], eax */ W32((u32)(r_esi+0xb8u), r_eax);
    /* 00437d9d: mov eax, dword ptr [0xa43e8c] */ r_eax = R32((u32)(0xa43e8cu));
    /* 00437da2: mov dword ptr [esi + 0xbc], eax */ W32((u32)(r_esi+0xbcu), r_eax);
    /* 00437da8: mov eax, dword ptr [0xa44208] */ r_eax = R32((u32)(0xa44208u));
    /* 00437dad: mov dword ptr [esi + 0x104], eax */ W32((u32)(r_esi+0x104u), r_eax);
    /* 00437db3: mov eax, dword ptr [0xa43e90] */ r_eax = R32((u32)(0xa43e90u));
    /* 00437db8: mov dword ptr [esi + 0xc0], eax */ W32((u32)(r_esi+0xc0u), r_eax);
    /* 00437dbe: mov eax, dword ptr [0xa43e94] */ r_eax = R32((u32)(0xa43e94u));
    /* 00437dc3: mov dword ptr [esi + 0xc4], eax */ W32((u32)(r_esi+0xc4u), r_eax);
    /* 00437dc9: mov eax, dword ptr [0xa43e98] */ r_eax = R32((u32)(0xa43e98u));
    /* 00437dce: mov dword ptr [esi + 0xc8], eax */ W32((u32)(r_esi+0xc8u), r_eax);
    /* 00437dd4: mov eax, dword ptr [0xa4420c] */ r_eax = R32((u32)(0xa4420cu));
    /* 00437dd9: mov dword ptr [esi + 0x108], eax */ W32((u32)(r_esi+0x108u), r_eax);
    /* 00437ddf: mov eax, dword ptr [0xa43e9c] */ r_eax = R32((u32)(0xa43e9cu));
    /* 00437de4: mov dword ptr [esi + 0xcc], eax */ W32((u32)(r_esi+0xccu), r_eax);
    /* 00437dea: mov eax, dword ptr [0xa43ea0] */ r_eax = R32((u32)(0xa43ea0u));
    /* 00437def: mov dword ptr [esi + 0xd0], eax */ W32((u32)(r_esi+0xd0u), r_eax);
    /* 00437df5: mov eax, dword ptr [0xa43ea4] */ r_eax = R32((u32)(0xa43ea4u));
    /* 00437dfa: mov dword ptr [esi + 0xd4], eax */ W32((u32)(r_esi+0xd4u), r_eax);
    /* 00437e00: mov eax, dword ptr [0xa44210] */ r_eax = R32((u32)(0xa44210u));
    /* 00437e05: mov dword ptr [esi + 0x10c], eax */ W32((u32)(r_esi+0x10cu), r_eax);
    /* 00437e0b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x437e10u); f_008587a5();
    /* 00437e10: mov edx, dword ptr [0xa44218] */ r_edx = R32((u32)(0xa44218u));
    /* 00437e16: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00437e19: mov dword ptr [esi + 0x118], 0x3f4ccccd */ W32((u32)(r_esi+0x118u), 0x3f4ccccdu);
    /* 00437e23: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00437e26: mov dword ptr [esi + 0x124], 0x5ef */ W32((u32)(r_esi+0x124u), 0x5efu);
    /* 00437e30: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00437e33: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00437e36: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00437e3a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00437e3e: fdiv dword ptr [0x8fd764] */ ST(0) = ST(0) / R_F32((u32)(0x8fd764u));
    /* 00437e44: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00437e47: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00437e49: fadd dword ptr [edx*4 + 0x8fd6c0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x8fd6c0u));
    /* 00437e50: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00437e52: fstp dword ptr [esi + 0x114] */ W_F32((u32)(r_esi+0x114u), ST(0)); FPOP();
    /* 00437e58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00437e5a: mov dword ptr [esi + 0x11c], eax */ W32((u32)(r_esi+0x11cu), r_eax);
    /* 00437e60: mov dword ptr [esi + 0x120], eax */ W32((u32)(r_esi+0x120u), r_eax);
    /* 00437e66: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x437e6bu); f_008587a5();
    /* 00437e6b: mov dword ptr [esi + 0x138], 0 */ W32((u32)(r_esi+0x138u), 0x0u);
    /* 00437e75: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00437e79: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00437e7d: fdiv dword ptr [0x8fd764] */ ST(0) = ST(0) / R_F32((u32)(0x8fd764u));
    /* 00437e83: fmul dword ptr [0x8fd760] */ ST(0) = ST(0) * R_F32((u32)(0x8fd760u));
    /* 00437e89: mov dword ptr [esi + 0x13c], 0 */ W32((u32)(r_esi+0x13cu), 0x0u);
    /* 00437e93: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00437e97: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00437e9c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00437ea1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00437ea5: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00437ea9: fistp dword ptr [esi + 0x128] */ W32((u32)(r_esi+0x128u), (u32)fx_int32(ST(0))); FPOP();
    /* 00437eaf: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00437eb3: mov dword ptr [esi + 0x14c], 0 */ W32((u32)(r_esi+0x14cu), 0x0u);
    /* 00437ebd: mov eax, esi */ r_eax = r_esi;
    /* 00437ebf: mov dword ptr [esi + 0x154], 0x78 */ W32((u32)(r_esi+0x154u), 0x78u);
    /* 00437ec9: mov dword ptr [esi + 0x12c], 0 */ W32((u32)(r_esi+0x12cu), 0x0u);
    /* 00437ed3: mov dword ptr [esi + 0x130], 0 */ W32((u32)(r_esi+0x130u), 0x0u);
    /* 00437edd: mov dword ptr [esi + 0x134], 0 */ W32((u32)(r_esi+0x134u), 0x0u);
    /* 00437ee7: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00437eea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00437eeb: ret 0xc */ FN_RET(0x00437ba4); r_esp += 16; return;
}

void f_00437ef0(void) /* sub_437EF0 */
{
    FN_ENTER(0x00437ef0);
    /* 00437ef0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00437ef1: mov ebx, esp */ r_ebx = r_esp;
    /* 00437ef3: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00437ef6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00437ef7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00437ef8: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00437efb: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00437efd: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00437f00: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00437f03: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f05: je 0x437f57 */ if (fZ) goto L_00437f57;
L_00437f07:; BB(0x00437f07);
    /* 00437f07: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f09: je 0x438dfc */ if (fZ) goto L_00438dfc;
L_00437f0f:; BB(0x00437f0f);
    /* 00437f0f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f12: je 0x438ded */ if (fZ) goto L_00438ded;
L_00437f18:; BB(0x00437f18);
    /* 00437f18: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f1b: je 0x438dde */ if (fZ) goto L_00438dde;
L_00437f21:; BB(0x00437f21);
    /* 00437f21: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f24: je 0x437f48 */ if (fZ) goto L_00437f48;
L_00437f26:; BB(0x00437f26);
    /* 00437f26: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f29: jne 0x437f37 */ if (!fZ) goto L_00437f37;
L_00437f2b:; BB(0x00437f2b);
    /* 00437f2b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00437f2d: call 0x439890 */ r_esp -= 4; W32(r_esp, 0x437f32u); f_00439890();
    /* 00437f32: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00437f35: jmp 0x437f52 */ goto L_00437f52;
L_00437f37:; BB(0x00437f37);
    /* 00437f37: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f3a: jne 0x437f52 */ if (!fZ) goto L_00437f52;
L_00437f3c:; BB(0x00437f3c);
    /* 00437f3c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00437f3e: call 0x439878 */ r_esp -= 4; W32(r_esp, 0x437f43u); f_00439878();
    /* 00437f43: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00437f46: jmp 0x437f52 */ goto L_00437f52;
L_00437f48:; BB(0x00437f48);
    /* 00437f48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00437f4a: call 0x439b2c */ r_esp -= 4; W32(r_esp, 0x437f4fu); f_00439b2c();
    /* 00437f4f: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
L_00437f52:; BB(0x00437f52);
    /* 00437f52: mov eax, edx */ r_eax = r_edx;
    /* 00437f54: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
L_00437f57:; BB(0x00437f57);
    /* 00437f57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f59: je 0x438f33 */ if (fZ) goto L_00438f33;
L_00437f5f:; BB(0x00437f5f);
    /* 00437f5f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f62: je 0x438f09 */ if (fZ) goto L_00438f09;
L_00437f68:; BB(0x00437f68);
    /* 00437f68: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f6b: je 0x438eda */ if (fZ) goto L_00438eda;
L_00437f71:; BB(0x00437f71);
    /* 00437f71: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f74: je 0x437fe9 */ if (fZ) goto L_00437fe9;
L_00437f76:; BB(0x00437f76);
    /* 00437f76: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437f79: jne 0x437faa */ if (!fZ) goto L_00437faa;
L_00437f7b:; BB(0x00437f7b);
    /* 00437f7b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00437f7d: call 0x438fd8 */ r_esp -= 4; W32(r_esp, 0x437f82u); f_00438fd8();
    /* 00437f82: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00437f87: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00437f8a: push dword ptr [eax*4 + 0x8fd70c] */ { u32 v = R32((u32)(r_eax*4+0x8fd70cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00437f91: push dword ptr [ebp + 0x11c] */ { u32 v = R32((u32)(r_ebp+0x11cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00437f97: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x437f9cu); f_007a8c74();
    /* 00437f9c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00437f9f: mov dword ptr [ebp + 0x11c], eax */ W32((u32)(r_ebp+0x11cu), r_eax);
    /* 00437fa5: jmp 0x438dd5 */ goto L_00438dd5;
L_00437faa:; BB(0x00437faa);
    /* 00437faa: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437fad: jne 0x438dd5 */ if (!fZ) goto L_00438dd5;
L_00437fb3:; BB(0x00437fb3);
    /* 00437fb3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00437fb5: call 0x438fd8 */ r_esp -= 4; W32(r_esp, 0x437fbau); f_00438fd8();
    /* 00437fba: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 00437fbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00437fc1: push dword ptr [ebp + 0x120] */ { u32 v = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, v); }
    /* 00437fc7: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x437fccu); f_007a8c74();
    /* 00437fcc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00437fcf: mov dword ptr [ebp + 0x120], eax */ W32((u32)(r_ebp+0x120u), r_eax);
    /* 00437fd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437fd7: jne 0x438dd5 */ if (!fZ) goto L_00438dd5;
L_00437fdd:; BB(0x00437fdd);
    /* 00437fdd: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
    /* 00437fe4: jmp 0x438dd5 */ goto L_00438dd5;
L_00437fe9:; BB(0x00437fe9);
    /* 00437fe9: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00437ff0: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00437ff8: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00438000: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x438005u); f_0082d7b0();
    /* 00438005: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00438007: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x43800cu); f_00830cd8();
    /* 0043800c: mov edx, dword ptr [ebp + 0x110] */ r_edx = R32((u32)(r_ebp+0x110u));
    /* 00438012: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00438014: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x438019u); f_00831308();
    /* 00438019: lea esi, [ebp + 0x140] */ r_esi = (u32)(r_ebp+0x140u);
    /* 0043801f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00438020: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00438024: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00438026: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x43802bu); f_00830aa0();
    /* 0043802b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x438030u); f_0082da80();
    /* 00438030: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00438033: mov eax, dword ptr [ebp + 0x12c] */ r_eax = R32((u32)(r_ebp+0x12cu));
    /* 00438039: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0043803c: mov eax, dword ptr [ebp + 0x130] */ r_eax = R32((u32)(r_ebp+0x130u));
    /* 00438042: mov edx, esi */ r_edx = r_esi;
    /* 00438044: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00438048: mov eax, dword ptr [ebp + 0x134] */ r_eax = R32((u32)(r_ebp+0x134u));
    /* 0043804e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00438052: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x438057u); f_0082f9c4();
    /* 00438057: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0043805a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043805b: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x438060u); f_007828e4();
    /* 00438060: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00438064: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00438067: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0043806a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0043806e: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00438070: fmul qword ptr [0x8fd6b8] */ ST(0) = ST(0) * R_F64((u32)(0x8fd6b8u));
    /* 00438076: fdiv qword ptr [0x8fd6b0] */ ST(0) = ST(0) / R_F64((u32)(0x8fd6b0u));
    /* 0043807c: mov ecx, dword ptr [ebp + 0x12c] */ r_ecx = R32((u32)(r_ebp+0x12cu));
    /* 00438082: mov esi, dword ptr [ebp + 0x130] */ r_esi = R32((u32)(r_ebp+0x130u));
    /* 00438088: mov edx, dword ptr [ebp + 0x134] */ r_edx = R32((u32)(r_ebp+0x134u));
    /* 0043808e: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00438092: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438097: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043809c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004380a0: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004380a4: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004380a8: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004380ac: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004380b0: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004380b5: mov dword ptr [ebp + 0x11c], eax */ W32((u32)(r_ebp+0x11cu), r_eax);
    /* 004380bb: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 004380be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004380c0: je 0x438e0b */ if (fZ) goto L_00438e0b;
L_004380c6:; BB(0x004380c6);
    /* 004380c6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004380c9: je 0x438760 */ if (fZ) goto L_00438760;
L_004380cf:; BB(0x004380cf);
    /* 004380cf: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004380d2: jne 0x438110 */ if (!fZ) goto L_00438110;
L_004380d4:; BB(0x004380d4);
    /* 004380d4: mov eax, dword ptr [ebp + 0x14c] */ r_eax = R32((u32)(r_ebp+0x14cu));
    /* 004380da: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004380dd: cmp eax, dword ptr [ebp + 0x154] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x154u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004380e3: jle 0x438105 */ if ((fZ||fS!=fO)) goto L_00438105;
L_004380e5:; BB(0x004380e5);
    /* 004380e5: mov dword ptr [ebp + 0x14c], 0 */ W32((u32)(r_ebp+0x14cu), 0x0u);
    /* 004380ef: mov dword ptr [ebp + 0x150], 0x3f800000 */ W32((u32)(r_ebp+0x150u), 0x3f800000u);
    /* 004380f9: mov dword ptr [ebp + 0x24], 3 */ W32((u32)(r_ebp+0x24u), 0x3u);
    /* 00438100: jmp 0x438dd5 */ goto L_00438dd5;
L_00438105:; BB(0x00438105);
    /* 00438105: mov dword ptr [ebp + 0x14c], eax */ W32((u32)(r_ebp+0x14cu), r_eax);
    /* 0043810b: jmp 0x438dd5 */ goto L_00438dd5;
L_00438110:; BB(0x00438110);
    /* 00438110: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438113: jne 0x438dd5 */ if (!fZ) goto L_00438dd5;
L_00438119:; BB(0x00438119);
    /* 00438119: fld dword ptr [ebp + 0x138] */ FPUSH(R_F32((u32)(r_ebp+0x138u)));
    /* 0043811f: fsub dword ptr [0x8fd708] */ ST(0) = ST(0) - R_F32((u32)(0x8fd708u));
    /* 00438125: fcom dword ptr [0x8fd704] */ fx_compare(ST(0), R_F32((u32)(0x8fd704u))); 
    /* 0043812b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043812d: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00438131: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00438132: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00438136: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0043813a: jb 0x438144 */ if (fC) goto L_00438144;
L_0043813c:; BB(0x0043813c);
    /* 0043813c: fst dword ptr [ebp + 0x138] */ W_F32((u32)(r_ebp+0x138u), ST(0));
    /* 00438142: jmp 0x438165 */ goto L_00438165;
L_00438144:; BB(0x00438144);
    /* 00438144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00438146: fld dword ptr [0x8fd704] */ FPUSH(R_F32((u32)(0x8fd704u)));
    /* 0043814c: mov dword ptr [ebp + 0x24], 2 */ W32((u32)(r_ebp+0x24u), 0x2u);
    /* 00438153: mov eax, 0x41a00000 */ r_eax = 0x41a00000u;
    /* 00438158: mov dword ptr [ebp + 0x20], 4 */ W32((u32)(r_ebp+0x20u), 0x4u);
    /* 0043815f: mov dword ptr [ebp + 0x138], eax */ W32((u32)(r_ebp+0x138u), r_eax);
L_00438165:; BB(0x00438165);
    /* 00438165: fld dword ptr [0x8fd750] */ FPUSH(R_F32((u32)(0x8fd750u)));
    /* 0043816b: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 0043816f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00438171: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00438173: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00438174: ja 0x438186 */ if ((!fC&&!fZ)) goto L_00438186;
L_00438176:; BB(0x00438176);
    /* 00438176: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00438178: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043817a: mov dword ptr [ebp + 0x13c], 0x3f800000 */ W32((u32)(r_ebp+0x13cu), 0x3f800000u);
    /* 00438184: jmp 0x43818e */ goto L_0043818e;
L_00438186:; BB(0x00438186);
    /* 00438186: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00438188: fstp dword ptr [ebp + 0x13c] */ W_F32((u32)(r_ebp+0x13cu), ST(0)); FPOP();
L_0043818e:; BB(0x0043818e);
    /* 0043818e: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00438193: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00438195: push dword ptr [ebp + 0x120] */ { u32 v = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043819b: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4381a0u); f_007a8c74();
    /* 004381a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004381a3: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 004381a7: fmul dword ptr [0x8fd748] */ ST(0) = ST(0) * R_F32((u32)(0x8fd748u));
    /* 004381ad: fld dword ptr [0x8fd768] */ FPUSH(R_F32((u32)(0x8fd768u)));
    /* 004381b3: fsub dword ptr [ebp + 0x144] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x144u));
    /* 004381b9: fld dword ptr [ebp + 0x138] */ FPUSH(R_F32((u32)(r_ebp+0x138u)));
    /* 004381bf: fld dword ptr [0x8fd744] */ FPUSH(R_F32((u32)(0x8fd744u)));
    /* 004381c5: fld dword ptr [0x8fd754] */ FPUSH(R_F32((u32)(0x8fd754u)));
    /* 004381cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004381cd: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 004381cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004381d1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004381d3: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 004381d5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004381d7: fdivr st(4) */ ST(0) = ST(4) / ST(0);
    /* 004381d9: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004381db: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004381dd: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 004381e3: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 004381e6: fld dword ptr [0x8fd74c] */ FPUSH(R_F32((u32)(0x8fd74cu)));
    /* 004381ec: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004381ee: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004381f0: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004381f2: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 004381f6: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 004381fa: mov dword ptr [ebp + 0x120], eax */ W32((u32)(r_ebp+0x120u), r_eax);
    /* 00438200: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438202: fchs  */ ST(0) = -ST(0);
    /* 00438204: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00438206: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438208: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0043820a: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0043820c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043820e: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 00438210: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 00438216: fstp dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0)); FPOP();
    /* 00438219: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043821b: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 00438221: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438223: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 00438225: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438227: fstp dword ptr [ebp + 0x54] */ W_F32((u32)(r_ebp+0x54u), ST(0)); FPOP();
    /* 0043822a: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0043822c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0043822e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00438230: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00438232: fld dword ptr [0x8fd740] */ FPUSH(R_F32((u32)(0x8fd740u)));
    /* 00438238: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043823a: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 00438240: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438242: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00438244: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438246: fstp dword ptr [ebp + 0x58] */ W_F32((u32)(r_ebp+0x58u), ST(0)); FPOP();
    /* 00438249: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0043824b: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0043824d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043824f: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 00438255: fstp dword ptr [ebp + 0x60] */ W_F32((u32)(r_ebp+0x60u), ST(0)); FPOP();
    /* 00438258: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043825a: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 0043825c: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0043825e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00438260: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00438262: fld dword ptr [0x8fd73c] */ FPUSH(R_F32((u32)(0x8fd73cu)));
    /* 00438268: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043826a: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 00438270: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438272: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00438274: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438276: fstp dword ptr [ebp + 0x64] */ W_F32((u32)(r_ebp+0x64u), ST(0)); FPOP();
    /* 00438279: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0043827b: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0043827d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043827f: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 00438285: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 00438288: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043828a: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 0043828c: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0043828e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00438290: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00438292: fld dword ptr [0x8fd738] */ FPUSH(R_F32((u32)(0x8fd738u)));
    /* 00438298: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043829a: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 004382a0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004382a2: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004382a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004382a6: fstp dword ptr [ebp + 0x70] */ W_F32((u32)(r_ebp+0x70u), ST(0)); FPOP();
    /* 004382a9: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004382ab: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004382ad: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004382af: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 004382b5: fstp dword ptr [ebp + 0x78] */ W_F32((u32)(r_ebp+0x78u), ST(0)); FPOP();
    /* 004382b8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004382ba: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004382bc: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004382be: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004382c0: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004382c2: fld dword ptr [0x8fd734] */ FPUSH(R_F32((u32)(0x8fd734u)));
    /* 004382c8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004382ca: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 004382d0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004382d2: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004382d4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004382d6: fstp dword ptr [ebp + 0x7c] */ W_F32((u32)(r_ebp+0x7cu), ST(0)); FPOP();
    /* 004382d9: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004382db: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004382dd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004382df: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 004382e5: fstp dword ptr [ebp + 0x84] */ W_F32((u32)(r_ebp+0x84u), ST(0)); FPOP();
    /* 004382eb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004382ed: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004382ef: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004382f1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004382f3: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004382f5: fld dword ptr [0x8fd730] */ FPUSH(R_F32((u32)(0x8fd730u)));
    /* 004382fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004382fd: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 00438303: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438305: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00438307: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438309: fstp dword ptr [ebp + 0x88] */ W_F32((u32)(r_ebp+0x88u), ST(0)); FPOP();
    /* 0043830f: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00438311: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00438313: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00438315: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 0043831b: fstp dword ptr [ebp + 0x90] */ W_F32((u32)(r_ebp+0x90u), ST(0)); FPOP();
    /* 00438321: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438323: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 00438325: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00438327: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00438329: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0043832b: fld dword ptr [0x8fd72c] */ FPUSH(R_F32((u32)(0x8fd72cu)));
    /* 00438331: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438333: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 00438339: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043833b: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0043833d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043833f: fstp dword ptr [ebp + 0x94] */ W_F32((u32)(r_ebp+0x94u), ST(0)); FPOP();
    /* 00438345: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00438347: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00438349: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043834b: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 00438351: fstp dword ptr [ebp + 0x9c] */ W_F32((u32)(r_ebp+0x9cu), ST(0)); FPOP();
    /* 00438357: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438359: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 0043835b: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0043835d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043835f: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00438361: fld dword ptr [0x8fd728] */ FPUSH(R_F32((u32)(0x8fd728u)));
    /* 00438367: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438369: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 0043836f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438371: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00438373: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00438375: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00438377: fstp dword ptr [ebp + 0xa0] */ W_F32((u32)(r_ebp+0xa0u), ST(0)); FPOP();
    /* 0043837d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0043837f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00438381: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 00438387: fstp dword ptr [ebp + 0xa8] */ W_F32((u32)(r_ebp+0xa8u), ST(0)); FPOP();
    /* 0043838d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043838f: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00438391: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00438393: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438395: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00438397: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00438399: fsubr st(4), st(0) */ ST(4) = ST(0) - ST(4);
    /* 0043839b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043839d: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0043839f: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 004383a1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004383a3: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004383a5: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 004383ab: fstp dword ptr [ebp + 0xac] */ W_F32((u32)(r_ebp+0xacu), ST(0)); FPOP();
    /* 004383b1: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 004383b7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004383b9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004383bb: fld dword ptr [0x8fd754] */ FPUSH(R_F32((u32)(0x8fd754u)));
    /* 004383c1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004383c3: fstp dword ptr [ebp + 0xb4] */ W_F32((u32)(r_ebp+0xb4u), ST(0)); FPOP();
    /* 004383c9: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 004383cf: fld dword ptr [0x8fd754] */ FPUSH(R_F32((u32)(0x8fd754u)));
    /* 004383d5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004383d7: fstp dword ptr [ebp + 0xb8] */ W_F32((u32)(r_ebp+0xb8u), ST(0)); FPOP();
    /* 004383dd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004383df: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 004383e3: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 004383e7: mov dword ptr [ebp + 0x48], 0 */ W32((u32)(r_ebp+0x48u), 0x0u);
    /* 004383ee: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004383f0: mov eax, 3 */ r_eax = 0x3u;
    /* 004383f5: mov dword ptr [ebp + 0x4c], 0 */ W32((u32)(r_ebp+0x4cu), 0x0u);
    /* 004383fc: lea edx, [ebp + 0x54] */ r_edx = (u32)(r_ebp+0x54u);
    /* 004383ff: mov edi, edx */ r_edi = r_edx;
    /* 00438401: mov dword ptr [ebp + 0x50], 0 */ W32((u32)(r_ebp+0x50u), 0x0u);
    /* 00438408: mov ebp, eax */ r_ebp = r_eax;
L_0043840a:; BB(0x0043840a);
    /* 0043840a: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0043840e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00438412: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00438414: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00438417: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438419: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0043841d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043841f: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 00438423: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438425: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 00438427: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00438429: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 0043842d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043842f: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00438431: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 00438435: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438437: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00438439: fmul qword ptr [0x8fd6b8] */ ST(0) = ST(0) * R_F64((u32)(0x8fd6b8u));
    /* 0043843f: fdiv qword ptr [0x8fd6b0] */ ST(0) = ST(0) / R_F64((u32)(0x8fd6b0u));
    /* 00438445: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00438449: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0043844d: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438452: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438457: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0043845b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0043845f: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00438463: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00438467: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0043846b: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0043846d: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043846f: mov dword ptr [ecx + ebp*4 + 0xd4], esi */ W32((u32)(r_ecx+r_ebp*4+0xd4u), r_esi);
    /* 00438476: mov esi, eax */ r_esi = r_eax;
    /* 00438478: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00438479: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0043847d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0043847f: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00438483: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00438485: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00438487: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043848a: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x43848fu); f_0082dc9c();
    /* 0043848f: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00438491: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
    /* 00438498: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0043849b: mov dword ptr [edi + 8], 0 */ W32((u32)(r_edi+0x8u), 0x0u);
    /* 004384a2: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004384a5: cmp ebp, 0xb */ {  u32 a = r_ebp; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004384a8: jle 0x43840a */ if ((fZ||fS!=fO)) goto L_0043840a;
L_004384ae:; BB(0x004384ae);
    /* 004384ae: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 004384b2: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004384b6: fld dword ptr [0x8fd74c] */ FPUSH(R_F32((u32)(0x8fd74cu)));
    /* 004384bc: mov edx, dword ptr [ebp + 0x100] */ r_edx = R32((u32)(r_ebp+0x100u));
    /* 004384c2: fld dword ptr [ebp + 0x13c] */ FPUSH(R_F32((u32)(r_ebp+0x13cu)));
    /* 004384c8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004384ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004384cc: mov dword ptr [ebp + 0x104], edx */ W32((u32)(r_ebp+0x104u), r_edx);
    /* 004384d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004384d3: jae 0x438fc6 */ if (!fC) goto L_00438fc6;
L_004384d9:; BB(0x004384d9);
    /* 004384d9: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004384db: fld dword ptr [0xa43e18] */ FPUSH(R_F32((u32)(0xa43e18u)));
    /* 004384e1: fld dword ptr [ebp + 0x150] */ FPUSH(R_F32((u32)(r_ebp+0x150u)));
    /* 004384e7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004384e9: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004384eb: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
    /* 004384ee: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004384f0: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004384f2: fld dword ptr [ebp + 0x54] */ FPUSH(R_F32((u32)(r_ebp+0x54u)));
    /* 004384f5: fld dword ptr [ebp + 0x60] */ FPUSH(R_F32((u32)(r_ebp+0x60u)));
    /* 004384f8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004384fa: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004384fc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004384fe: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00438500: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00438502: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 00438505: fld dword ptr [0xa43e24] */ FPUSH(R_F32((u32)(0xa43e24u)));
    /* 0043850b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0043850d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043850f: fstp dword ptr [ebp + 0x54] */ W_F32((u32)(r_ebp+0x54u), ST(0)); FPOP();
    /* 00438512: fld dword ptr [0xa43e30] */ FPUSH(R_F32((u32)(0xa43e30u)));
    /* 00438518: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0043851a: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0043851c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043851e: fstp dword ptr [ebp + 0x60] */ W_F32((u32)(r_ebp+0x60u), ST(0)); FPOP();
    /* 00438521: fld dword ptr [ebp + 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0x6cu)));
    /* 00438524: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438526: fld dword ptr [0xa43e3c] */ FPUSH(R_F32((u32)(0xa43e3cu)));
    /* 0043852c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0043852e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00438530: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 00438533: fld dword ptr [ebp + 0x78] */ FPUSH(R_F32((u32)(r_ebp+0x78u)));
    /* 00438536: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438538: fld dword ptr [0xa43e48] */ FPUSH(R_F32((u32)(0xa43e48u)));
    /* 0043853e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438540: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00438542: fstp dword ptr [ebp + 0x78] */ W_F32((u32)(r_ebp+0x78u), ST(0)); FPOP();
    /* 00438545: fld dword ptr [ebp + 0x84] */ FPUSH(R_F32((u32)(r_ebp+0x84u)));
    /* 0043854b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0043854d: fld dword ptr [0xa43e54] */ FPUSH(R_F32((u32)(0xa43e54u)));
    /* 00438553: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438555: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00438557: fstp dword ptr [ebp + 0x84] */ W_F32((u32)(r_ebp+0x84u), ST(0)); FPOP();
    /* 0043855d: fld dword ptr [ebp + 0x90] */ FPUSH(R_F32((u32)(r_ebp+0x90u)));
    /* 00438563: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438565: fld dword ptr [0xa43e60] */ FPUSH(R_F32((u32)(0xa43e60u)));
    /* 0043856b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0043856d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043856f: fstp dword ptr [ebp + 0x90] */ W_F32((u32)(r_ebp+0x90u), ST(0)); FPOP();
    /* 00438575: fld dword ptr [ebp + 0x9c] */ FPUSH(R_F32((u32)(r_ebp+0x9cu)));
    /* 0043857b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0043857d: fld dword ptr [0xa43e6c] */ FPUSH(R_F32((u32)(0xa43e6cu)));
    /* 00438583: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438585: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00438587: fstp dword ptr [ebp + 0x9c] */ W_F32((u32)(r_ebp+0x9cu), ST(0)); FPOP();
    /* 0043858d: fld dword ptr [ebp + 0xa8] */ FPUSH(R_F32((u32)(r_ebp+0xa8u)));
    /* 00438593: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438595: fld dword ptr [0xa43e78] */ FPUSH(R_F32((u32)(0xa43e78u)));
    /* 0043859b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0043859d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043859f: fstp dword ptr [ebp + 0xa8] */ W_F32((u32)(r_ebp+0xa8u), ST(0)); FPOP();
    /* 004385a5: fld dword ptr [ebp + 0xb4] */ FPUSH(R_F32((u32)(r_ebp+0xb4u)));
    /* 004385ab: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004385ad: fld dword ptr [0xa43e84] */ FPUSH(R_F32((u32)(0xa43e84u)));
    /* 004385b3: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004385b5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004385b7: fild dword ptr [ebp + 0xe0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xe0u)));
    /* 004385bd: fld dword ptr [0x8fd724] */ FPUSH(R_F32((u32)(0x8fd724u)));
    /* 004385c3: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 004385c5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004385c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004385c9: fstp dword ptr [ebp + 0xb4] */ W_F32((u32)(r_ebp+0xb4u), ST(0)); FPOP();
    /* 004385cf: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004385d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004385d3: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004385d7: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004385dc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004385e1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004385e5: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004385e9: fistp dword ptr [ebp + 0xe0] */ W32((u32)(r_ebp+0xe0u), (u32)fx_int32(ST(0))); FPOP();
    /* 004385ef: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004385f3: fild dword ptr [ebp + 0xe4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xe4u)));
    /* 004385f9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004385fb: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004385ff: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438604: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438609: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0043860d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438611: fistp dword ptr [ebp + 0xe4] */ W32((u32)(r_ebp+0xe4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00438617: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0043861b: fild dword ptr [ebp + 0xe8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xe8u)));
    /* 00438621: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438623: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00438627: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0043862c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438631: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00438635: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438639: fistp dword ptr [ebp + 0xe8] */ W32((u32)(r_ebp+0xe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043863f: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00438643: fild dword ptr [ebp + 0xec] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xecu)));
    /* 00438649: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0043864b: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0043864f: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438654: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438659: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0043865d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438661: fistp dword ptr [ebp + 0xec] */ W32((u32)(r_ebp+0xecu), (u32)fx_int32(ST(0))); FPOP();
    /* 00438667: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0043866b: fild dword ptr [ebp + 0xf0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xf0u)));
    /* 00438671: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438673: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00438677: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0043867c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438681: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00438685: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438689: fistp dword ptr [ebp + 0xf0] */ W32((u32)(r_ebp+0xf0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043868f: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00438693: fild dword ptr [ebp + 0xf4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xf4u)));
    /* 00438699: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0043869b: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0043869f: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004386a4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004386a9: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004386ad: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004386b1: fistp dword ptr [ebp + 0xf4] */ W32((u32)(r_ebp+0xf4u), (u32)fx_int32(ST(0))); FPOP();
    /* 004386b7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004386bb: fild dword ptr [ebp + 0xf8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xf8u)));
    /* 004386c1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004386c3: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004386c7: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004386cc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004386d1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004386d5: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004386d9: fistp dword ptr [ebp + 0xf8] */ W32((u32)(r_ebp+0xf8u), (u32)fx_int32(ST(0))); FPOP();
    /* 004386df: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004386e3: fild dword ptr [ebp + 0xfc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfcu)));
    /* 004386e9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004386eb: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004386ef: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004386f4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004386f9: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004386fd: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438701: fistp dword ptr [ebp + 0xfc] */ W32((u32)(r_ebp+0xfcu), (u32)fx_int32(ST(0))); FPOP();
    /* 00438707: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0043870b: fild dword ptr [ebp + 0x100] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x100u)));
    /* 00438711: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438713: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00438717: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0043871c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438721: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00438725: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438729: fistp dword ptr [ebp + 0x100] */ W32((u32)(r_ebp+0x100u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043872f: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00438733: fild dword ptr [ebp + 0x104] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x104u)));
    /* 00438739: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043873b: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0043873f: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438744: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438749: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0043874d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438751: fistp dword ptr [ebp + 0x104] */ W32((u32)(r_ebp+0x104u), (u32)fx_int32(ST(0))); FPOP();
    /* 00438757: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0043875b: jmp 0x438dd5 */ goto L_00438dd5;
L_00438760:; BB(0x00438760);
    /* 00438760: fld dword ptr [0x8fd700] */ FPUSH(R_F32((u32)(0x8fd700u)));
    /* 00438766: fadd dword ptr [ebp + 0x138] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x138u));
    /* 0043876c: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 00438770: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00438772: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00438776: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00438777: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0043877b: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0043877f: ja 0x438789 */ if ((!fC&&!fZ)) goto L_00438789;
L_00438781:; BB(0x00438781);
    /* 00438781: fst dword ptr [ebp + 0x138] */ W_F32((u32)(r_ebp+0x138u), ST(0));
    /* 00438787: jmp 0x4387d7 */ goto L_004387d7;
L_00438789:; BB(0x00438789);
    /* 00438789: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043878b: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0043878f: fstp dword ptr [ebp + 0x138] */ W_F32((u32)(r_ebp+0x138u), ST(0)); FPOP();
    /* 00438795: mov dword ptr [ebp + 0x14c], 0 */ W32((u32)(r_ebp+0x14cu), 0x0u);
    /* 0043879f: mov dword ptr [ebp + 0x24], 2 */ W32((u32)(r_ebp+0x24u), 0x2u);
    /* 004387a6: call 0x432a30 */ r_esp -= 4; W32(r_esp, 0x4387abu); f_00432a30();
    /* 004387ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004387ad: je 0x4387bb */ if (fZ) goto L_004387bb;
L_004387af:; BB(0x004387af);
    /* 004387af: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004387b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004387b4: mov ecx, eax */ r_ecx = r_eax;
    /* 004387b6: call 0x434108 */ r_esp -= 4; W32(r_esp, 0x4387bbu); f_00434108();
L_004387bb:; BB(0x004387bb);
    /* 004387bb: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004387bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004387c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004387c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004387c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004387c4: push 0x32e */ { u32 v = 0x32eu; r_esp -= 4; W32(r_esp, v); }
    /* 004387c9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4387ceu); f_00814298();
    /* 004387ce: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004387d1: fld dword ptr [ebp + 0x138] */ FPUSH(R_F32((u32)(r_ebp+0x138u)));
L_004387d7:; BB(0x004387d7);
    /* 004387d7: fld dword ptr [0x8fd750] */ FPUSH(R_F32((u32)(0x8fd750u)));
    /* 004387dd: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 004387e1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004387e3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004387e5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004387e6: ja 0x4387f8 */ if ((!fC&&!fZ)) goto L_004387f8;
L_004387e8:; BB(0x004387e8);
    /* 004387e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004387ea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004387ec: mov dword ptr [ebp + 0x13c], 0x3f800000 */ W32((u32)(r_ebp+0x13cu), 0x3f800000u);
    /* 004387f6: jmp 0x438800 */ goto L_00438800;
L_004387f8:; BB(0x004387f8);
    /* 004387f8: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004387fa: fstp dword ptr [ebp + 0x13c] */ W_F32((u32)(r_ebp+0x13cu), ST(0)); FPOP();
L_00438800:; BB(0x00438800);
    /* 00438800: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00438805: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00438808: push dword ptr [eax*4 + 0x8fd6f0] */ { u32 v = R32((u32)(r_eax*4+0x8fd6f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043880f: push dword ptr [ebp + 0x120] */ { u32 v = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, v); }
    /* 00438815: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x43881au); f_007a8c74();
    /* 0043881a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043881d: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00438821: fmul dword ptr [0x8fd748] */ ST(0) = ST(0) * R_F32((u32)(0x8fd748u));
    /* 00438827: fld dword ptr [0x8fd768] */ FPUSH(R_F32((u32)(0x8fd768u)));
    /* 0043882d: fsub dword ptr [ebp + 0x144] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x144u));
    /* 00438833: fld dword ptr [ebp + 0x138] */ FPUSH(R_F32((u32)(r_ebp+0x138u)));
    /* 00438839: fld dword ptr [0x8fd744] */ FPUSH(R_F32((u32)(0x8fd744u)));
    /* 0043883f: fld dword ptr [0x8fd754] */ FPUSH(R_F32((u32)(0x8fd754u)));
    /* 00438845: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438847: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 00438849: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043884b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0043884d: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0043884f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00438851: fdivr st(4) */ ST(0) = ST(4) / ST(0);
    /* 00438853: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00438855: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00438857: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 0043885d: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 00438860: fld dword ptr [0x8fd74c] */ FPUSH(R_F32((u32)(0x8fd74cu)));
    /* 00438866: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00438868: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043886a: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 0043886c: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 00438870: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00438874: mov dword ptr [ebp + 0x120], eax */ W32((u32)(r_ebp+0x120u), r_eax);
    /* 0043887a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043887c: fchs  */ ST(0) = -ST(0);
    /* 0043887e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00438880: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438882: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00438884: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00438886: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00438888: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0043888a: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 00438890: fstp dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0)); FPOP();
    /* 00438893: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00438895: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 0043889b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043889d: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 0043889f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004388a1: fstp dword ptr [ebp + 0x54] */ W_F32((u32)(r_ebp+0x54u), ST(0)); FPOP();
    /* 004388a4: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004388a6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004388a8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004388aa: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004388ac: fld dword ptr [0x8fd740] */ FPUSH(R_F32((u32)(0x8fd740u)));
    /* 004388b2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004388b4: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 004388ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004388bc: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004388be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004388c0: fstp dword ptr [ebp + 0x58] */ W_F32((u32)(r_ebp+0x58u), ST(0)); FPOP();
    /* 004388c3: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004388c5: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004388c7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004388c9: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 004388cf: fstp dword ptr [ebp + 0x60] */ W_F32((u32)(r_ebp+0x60u), ST(0)); FPOP();
    /* 004388d2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004388d4: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004388d6: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004388d8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004388da: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004388dc: fld dword ptr [0x8fd73c] */ FPUSH(R_F32((u32)(0x8fd73cu)));
    /* 004388e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004388e4: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 004388ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004388ec: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004388ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004388f0: fstp dword ptr [ebp + 0x64] */ W_F32((u32)(r_ebp+0x64u), ST(0)); FPOP();
    /* 004388f3: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004388f5: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004388f7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004388f9: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 004388ff: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 00438902: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438904: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 00438906: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00438908: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043890a: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0043890c: fld dword ptr [0x8fd738] */ FPUSH(R_F32((u32)(0x8fd738u)));
    /* 00438912: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438914: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 0043891a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043891c: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0043891e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438920: fstp dword ptr [ebp + 0x70] */ W_F32((u32)(r_ebp+0x70u), ST(0)); FPOP();
    /* 00438923: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00438925: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00438927: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00438929: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 0043892f: fstp dword ptr [ebp + 0x78] */ W_F32((u32)(r_ebp+0x78u), ST(0)); FPOP();
    /* 00438932: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438934: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 00438936: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00438938: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043893a: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0043893c: fld dword ptr [0x8fd734] */ FPUSH(R_F32((u32)(0x8fd734u)));
    /* 00438942: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438944: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 0043894a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043894c: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0043894e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438950: fstp dword ptr [ebp + 0x7c] */ W_F32((u32)(r_ebp+0x7cu), ST(0)); FPOP();
    /* 00438953: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00438955: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00438957: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00438959: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 0043895f: fstp dword ptr [ebp + 0x84] */ W_F32((u32)(r_ebp+0x84u), ST(0)); FPOP();
    /* 00438965: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438967: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 00438969: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0043896b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043896d: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0043896f: fld dword ptr [0x8fd730] */ FPUSH(R_F32((u32)(0x8fd730u)));
    /* 00438975: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438977: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 0043897d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043897f: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00438981: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438983: fstp dword ptr [ebp + 0x88] */ W_F32((u32)(r_ebp+0x88u), ST(0)); FPOP();
    /* 00438989: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0043898b: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0043898d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043898f: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 00438995: fstp dword ptr [ebp + 0x90] */ W_F32((u32)(r_ebp+0x90u), ST(0)); FPOP();
    /* 0043899b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043899d: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 0043899f: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004389a1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004389a3: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004389a5: fld dword ptr [0x8fd72c] */ FPUSH(R_F32((u32)(0x8fd72cu)));
    /* 004389ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004389ad: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 004389b3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004389b5: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004389b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004389b9: fstp dword ptr [ebp + 0x94] */ W_F32((u32)(r_ebp+0x94u), ST(0)); FPOP();
    /* 004389bf: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004389c1: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004389c3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004389c5: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 004389cb: fstp dword ptr [ebp + 0x9c] */ W_F32((u32)(r_ebp+0x9cu), ST(0)); FPOP();
    /* 004389d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004389d3: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004389d5: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004389d7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004389d9: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 004389db: fld dword ptr [0x8fd728] */ FPUSH(R_F32((u32)(0x8fd728u)));
    /* 004389e1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004389e3: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 004389e9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004389eb: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004389ed: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004389ef: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 004389f1: fstp dword ptr [ebp + 0xa0] */ W_F32((u32)(r_ebp+0xa0u), ST(0)); FPOP();
    /* 004389f7: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004389f9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004389fb: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 00438a01: fstp dword ptr [ebp + 0xa8] */ W_F32((u32)(r_ebp+0xa8u), ST(0)); FPOP();
    /* 00438a07: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438a09: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00438a0b: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00438a0d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438a0f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00438a11: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00438a13: fsubr st(4), st(0) */ ST(4) = ST(0) - ST(4);
    /* 00438a15: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438a17: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00438a19: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00438a1b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438a1d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00438a1f: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 00438a25: fstp dword ptr [ebp + 0xac] */ W_F32((u32)(r_ebp+0xacu), ST(0)); FPOP();
    /* 00438a2b: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 00438a31: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00438a33: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00438a35: fld dword ptr [0x8fd754] */ FPUSH(R_F32((u32)(0x8fd754u)));
    /* 00438a3b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00438a3d: fstp dword ptr [ebp + 0xb4] */ W_F32((u32)(r_ebp+0xb4u), ST(0)); FPOP();
    /* 00438a43: fmul dword ptr [0xa441d0] */ ST(0) = ST(0) * R_F32((u32)(0xa441d0u));
    /* 00438a49: fld dword ptr [0x8fd754] */ FPUSH(R_F32((u32)(0x8fd754u)));
    /* 00438a4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438a51: fstp dword ptr [ebp + 0xb8] */ W_F32((u32)(r_ebp+0xb8u), ST(0)); FPOP();
    /* 00438a57: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438a59: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00438a5d: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00438a61: mov dword ptr [ebp + 0x48], 0 */ W32((u32)(r_ebp+0x48u), 0x0u);
    /* 00438a68: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00438a6a: mov eax, 3 */ r_eax = 0x3u;
    /* 00438a6f: mov dword ptr [ebp + 0x4c], 0 */ W32((u32)(r_ebp+0x4cu), 0x0u);
    /* 00438a76: lea edx, [ebp + 0x54] */ r_edx = (u32)(r_ebp+0x54u);
    /* 00438a79: mov edi, edx */ r_edi = r_edx;
    /* 00438a7b: mov dword ptr [ebp + 0x50], 0 */ W32((u32)(r_ebp+0x50u), 0x0u);
    /* 00438a82: mov ebp, eax */ r_ebp = r_eax;
L_00438a84:; BB(0x00438a84);
    /* 00438a84: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00438a88: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00438a8c: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00438a8e: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00438a91: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438a93: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 00438a97: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438a99: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 00438a9d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438a9f: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 00438aa1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00438aa3: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 00438aa7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00438aa9: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00438aab: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 00438aaf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438ab1: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00438ab3: fmul qword ptr [0x8fd6b8] */ ST(0) = ST(0) * R_F64((u32)(0x8fd6b8u));
    /* 00438ab9: fdiv qword ptr [0x8fd6b0] */ ST(0) = ST(0) / R_F64((u32)(0x8fd6b0u));
    /* 00438abf: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00438ac3: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00438ac7: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438acc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438ad1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00438ad5: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438ad9: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00438add: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00438ae1: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00438ae5: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00438ae7: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00438ae9: mov dword ptr [ecx + ebp*4 + 0xd4], esi */ W32((u32)(r_ecx+r_ebp*4+0xd4u), r_esi);
    /* 00438af0: mov esi, eax */ r_esi = r_eax;
    /* 00438af2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00438af3: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00438af7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00438af9: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00438afd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00438aff: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00438b01: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00438b04: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x438b09u); f_0082dc9c();
    /* 00438b09: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00438b0b: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
    /* 00438b12: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00438b15: mov dword ptr [edi + 8], 0 */ W32((u32)(r_edi+0x8u), 0x0u);
    /* 00438b1c: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00438b1f: cmp ebp, 0xb */ {  u32 a = r_ebp; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00438b22: jle 0x438a84 */ if ((fZ||fS!=fO)) goto L_00438a84;
L_00438b28:; BB(0x00438b28);
    /* 00438b28: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 00438b2c: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00438b30: fld dword ptr [0x8fd74c] */ FPUSH(R_F32((u32)(0x8fd74cu)));
    /* 00438b36: mov edx, dword ptr [ebp + 0x100] */ r_edx = R32((u32)(r_ebp+0x100u));
    /* 00438b3c: fld dword ptr [ebp + 0x13c] */ FPUSH(R_F32((u32)(r_ebp+0x13cu)));
    /* 00438b42: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00438b44: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00438b46: mov dword ptr [ebp + 0x104], edx */ W32((u32)(r_ebp+0x104u), r_edx);
    /* 00438b4c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00438b4d: jae 0x438fcf */ if (!fC) goto L_00438fcf;
L_00438b53:; BB(0x00438b53);
    /* 00438b53: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00438b55: fld dword ptr [0xa43e18] */ FPUSH(R_F32((u32)(0xa43e18u)));
    /* 00438b5b: fld dword ptr [ebp + 0x150] */ FPUSH(R_F32((u32)(r_ebp+0x150u)));
    /* 00438b61: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00438b63: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00438b65: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
    /* 00438b68: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00438b6a: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00438b6c: fld dword ptr [ebp + 0x54] */ FPUSH(R_F32((u32)(r_ebp+0x54u)));
    /* 00438b6f: fld dword ptr [ebp + 0x60] */ FPUSH(R_F32((u32)(r_ebp+0x60u)));
    /* 00438b72: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438b74: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00438b76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438b78: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00438b7a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00438b7c: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 00438b7f: fld dword ptr [0xa43e24] */ FPUSH(R_F32((u32)(0xa43e24u)));
    /* 00438b85: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438b87: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00438b89: fstp dword ptr [ebp + 0x54] */ W_F32((u32)(r_ebp+0x54u), ST(0)); FPOP();
    /* 00438b8c: fld dword ptr [0xa43e30] */ FPUSH(R_F32((u32)(0xa43e30u)));
    /* 00438b92: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438b94: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00438b96: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438b98: fstp dword ptr [ebp + 0x60] */ W_F32((u32)(r_ebp+0x60u), ST(0)); FPOP();
    /* 00438b9b: fld dword ptr [ebp + 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0x6cu)));
    /* 00438b9e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438ba0: fld dword ptr [0xa43e3c] */ FPUSH(R_F32((u32)(0xa43e3cu)));
    /* 00438ba6: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438ba8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00438baa: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 00438bad: fld dword ptr [ebp + 0x78] */ FPUSH(R_F32((u32)(r_ebp+0x78u)));
    /* 00438bb0: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438bb2: fld dword ptr [0xa43e48] */ FPUSH(R_F32((u32)(0xa43e48u)));
    /* 00438bb8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438bba: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00438bbc: fstp dword ptr [ebp + 0x78] */ W_F32((u32)(r_ebp+0x78u), ST(0)); FPOP();
    /* 00438bbf: fld dword ptr [ebp + 0x84] */ FPUSH(R_F32((u32)(r_ebp+0x84u)));
    /* 00438bc5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438bc7: fld dword ptr [0xa43e54] */ FPUSH(R_F32((u32)(0xa43e54u)));
    /* 00438bcd: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438bcf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00438bd1: fstp dword ptr [ebp + 0x84] */ W_F32((u32)(r_ebp+0x84u), ST(0)); FPOP();
    /* 00438bd7: fld dword ptr [ebp + 0x90] */ FPUSH(R_F32((u32)(r_ebp+0x90u)));
    /* 00438bdd: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438bdf: fld dword ptr [0xa43e60] */ FPUSH(R_F32((u32)(0xa43e60u)));
    /* 00438be5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438be7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00438be9: fstp dword ptr [ebp + 0x90] */ W_F32((u32)(r_ebp+0x90u), ST(0)); FPOP();
    /* 00438bef: fld dword ptr [ebp + 0x9c] */ FPUSH(R_F32((u32)(r_ebp+0x9cu)));
    /* 00438bf5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438bf7: fld dword ptr [0xa43e6c] */ FPUSH(R_F32((u32)(0xa43e6cu)));
    /* 00438bfd: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438bff: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00438c01: fstp dword ptr [ebp + 0x9c] */ W_F32((u32)(r_ebp+0x9cu), ST(0)); FPOP();
    /* 00438c07: fld dword ptr [ebp + 0xa8] */ FPUSH(R_F32((u32)(r_ebp+0xa8u)));
    /* 00438c0d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438c0f: fld dword ptr [0xa43e78] */ FPUSH(R_F32((u32)(0xa43e78u)));
    /* 00438c15: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438c17: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00438c19: fstp dword ptr [ebp + 0xa8] */ W_F32((u32)(r_ebp+0xa8u), ST(0)); FPOP();
    /* 00438c1f: fld dword ptr [ebp + 0xb4] */ FPUSH(R_F32((u32)(r_ebp+0xb4u)));
    /* 00438c25: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438c27: fld dword ptr [0xa43e84] */ FPUSH(R_F32((u32)(0xa43e84u)));
    /* 00438c2d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00438c2f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00438c31: fild dword ptr [ebp + 0xe0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xe0u)));
    /* 00438c37: fld dword ptr [0x8fd724] */ FPUSH(R_F32((u32)(0x8fd724u)));
    /* 00438c3d: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00438c3f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00438c41: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438c43: fstp dword ptr [ebp + 0xb4] */ W_F32((u32)(r_ebp+0xb4u), ST(0)); FPOP();
    /* 00438c49: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00438c4b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438c4d: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00438c51: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438c56: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438c5b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00438c5f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438c63: fistp dword ptr [ebp + 0xe0] */ W32((u32)(r_ebp+0xe0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00438c69: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00438c6d: fild dword ptr [ebp + 0xe4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xe4u)));
    /* 00438c73: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438c75: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00438c79: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438c7e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438c83: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00438c87: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438c8b: fistp dword ptr [ebp + 0xe4] */ W32((u32)(r_ebp+0xe4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00438c91: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00438c95: fild dword ptr [ebp + 0xe8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xe8u)));
    /* 00438c9b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438c9d: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00438ca1: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438ca6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438cab: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00438caf: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438cb3: fistp dword ptr [ebp + 0xe8] */ W32((u32)(r_ebp+0xe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00438cb9: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00438cbd: fild dword ptr [ebp + 0xec] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xecu)));
    /* 00438cc3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438cc5: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00438cc9: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438cce: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438cd3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00438cd7: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438cdb: fistp dword ptr [ebp + 0xec] */ W32((u32)(r_ebp+0xecu), (u32)fx_int32(ST(0))); FPOP();
    /* 00438ce1: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00438ce5: fild dword ptr [ebp + 0xf0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xf0u)));
    /* 00438ceb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438ced: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00438cf1: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438cf6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438cfb: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00438cff: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438d03: fistp dword ptr [ebp + 0xf0] */ W32((u32)(r_ebp+0xf0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00438d09: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00438d0d: fild dword ptr [ebp + 0xf4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xf4u)));
    /* 00438d13: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438d15: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00438d19: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438d1e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438d23: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00438d27: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438d2b: fistp dword ptr [ebp + 0xf4] */ W32((u32)(r_ebp+0xf4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00438d31: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00438d35: fild dword ptr [ebp + 0xf8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xf8u)));
    /* 00438d3b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438d3d: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00438d41: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438d46: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438d4b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00438d4f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438d53: fistp dword ptr [ebp + 0xf8] */ W32((u32)(r_ebp+0xf8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00438d59: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00438d5d: fild dword ptr [ebp + 0xfc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfcu)));
    /* 00438d63: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438d65: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00438d69: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438d6e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438d73: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00438d77: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438d7b: fistp dword ptr [ebp + 0xfc] */ W32((u32)(r_ebp+0xfcu), (u32)fx_int32(ST(0))); FPOP();
    /* 00438d81: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00438d85: fild dword ptr [ebp + 0x100] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x100u)));
    /* 00438d8b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438d8d: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00438d91: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438d96: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438d9b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00438d9f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438da3: fistp dword ptr [ebp + 0x100] */ W32((u32)(r_ebp+0x100u), (u32)fx_int32(ST(0))); FPOP();
    /* 00438da9: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00438dad: fild dword ptr [ebp + 0x104] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x104u)));
    /* 00438db3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00438db5: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00438db9: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438dbe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438dc3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00438dc7: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438dcb: fistp dword ptr [ebp + 0x104] */ W32((u32)(r_ebp+0x104u), (u32)fx_int32(ST(0))); FPOP();
    /* 00438dd1: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
L_00438dd5:; BB(0x00438dd5);
    /* 00438dd5: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00438dd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00438dd9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00438dda: mov esp, ebx */ r_esp = r_ebx;
    /* 00438ddc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00438ddd: ret  */ FN_RET(0x00437ef0); r_esp += 4; return;
L_00438dde:; BB(0x00438dde);
    /* 00438dde: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00438de0: call 0x439878 */ r_esp -= 4; W32(r_esp, 0x438de5u); f_00439878();
    /* 00438de5: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00438de8: jmp 0x437f52 */ goto L_00437f52;
L_00438ded:; BB(0x00438ded);
    /* 00438ded: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00438def: call 0x439b50 */ r_esp -= 4; W32(r_esp, 0x438df4u); f_00439b50();
    /* 00438df4: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00438df7: jmp 0x437f52 */ goto L_00437f52;
L_00438dfc:; BB(0x00438dfc);
    /* 00438dfc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00438dfe: call 0x439b6c */ r_esp -= 4; W32(r_esp, 0x438e03u); f_00439b6c();
    /* 00438e03: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00438e06: jmp 0x437f52 */ goto L_00437f52;
L_00438e0b:; BB(0x00438e0b);
    /* 00438e0b: fld dword ptr [0x8fd720] */ FPUSH(R_F32((u32)(0x8fd720u)));
    /* 00438e11: fadd dword ptr [ebp + 0x150] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x150u));
    /* 00438e17: fcom dword ptr [0x8fd71c] */ fx_compare(ST(0), R_F32((u32)(0x8fd71cu))); 
    /* 00438e1d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00438e1f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00438e20: ja 0x438e48 */ if ((!fC&&!fZ)) goto L_00438e48;
L_00438e22:; BB(0x00438e22);
    /* 00438e22: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00438e24: fld dword ptr [0x8fd71c] */ FPUSH(R_F32((u32)(0x8fd71cu)));
    /* 00438e2a: mov dword ptr [ebp + 0x14c], 0 */ W32((u32)(r_ebp+0x14cu), 0x0u);
    /* 00438e34: mov eax, 0x3dcccccd */ r_eax = 0x3dcccccdu;
    /* 00438e39: mov dword ptr [ebp + 0x24], 1 */ W32((u32)(r_ebp+0x24u), 0x1u);
    /* 00438e40: mov dword ptr [ebp + 0x150], eax */ W32((u32)(r_ebp+0x150u), r_eax);
    /* 00438e46: jmp 0x438e4e */ goto L_00438e4e;
L_00438e48:; BB(0x00438e48);
    /* 00438e48: fst dword ptr [ebp + 0x150] */ W_F32((u32)(r_ebp+0x150u), ST(0));
L_00438e4e:; BB(0x00438e4e);
    /* 00438e4e: fld dword ptr [0xa43e18] */ FPUSH(R_F32((u32)(0xa43e18u)));
    /* 00438e54: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438e56: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 00438e59: fld dword ptr [0xa43e24] */ FPUSH(R_F32((u32)(0xa43e24u)));
    /* 00438e5f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438e61: fstp dword ptr [ebp + 0x54] */ W_F32((u32)(r_ebp+0x54u), ST(0)); FPOP();
    /* 00438e64: fld dword ptr [0xa43e30] */ FPUSH(R_F32((u32)(0xa43e30u)));
    /* 00438e6a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438e6c: fstp dword ptr [ebp + 0x60] */ W_F32((u32)(r_ebp+0x60u), ST(0)); FPOP();
    /* 00438e6f: fld dword ptr [0xa43e3c] */ FPUSH(R_F32((u32)(0xa43e3cu)));
    /* 00438e75: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438e77: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 00438e7a: fld dword ptr [0xa43e48] */ FPUSH(R_F32((u32)(0xa43e48u)));
    /* 00438e80: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438e82: fstp dword ptr [ebp + 0x78] */ W_F32((u32)(r_ebp+0x78u), ST(0)); FPOP();
    /* 00438e85: fld dword ptr [0xa43e54] */ FPUSH(R_F32((u32)(0xa43e54u)));
    /* 00438e8b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438e8d: fstp dword ptr [ebp + 0x84] */ W_F32((u32)(r_ebp+0x84u), ST(0)); FPOP();
    /* 00438e93: fld dword ptr [0xa43e60] */ FPUSH(R_F32((u32)(0xa43e60u)));
    /* 00438e99: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438e9b: fstp dword ptr [ebp + 0x90] */ W_F32((u32)(r_ebp+0x90u), ST(0)); FPOP();
    /* 00438ea1: fld dword ptr [0xa43e6c] */ FPUSH(R_F32((u32)(0xa43e6cu)));
    /* 00438ea7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438ea9: fstp dword ptr [ebp + 0x9c] */ W_F32((u32)(r_ebp+0x9cu), ST(0)); FPOP();
    /* 00438eaf: fld dword ptr [0xa43e78] */ FPUSH(R_F32((u32)(0xa43e78u)));
    /* 00438eb5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00438eb7: fstp dword ptr [ebp + 0xa8] */ W_F32((u32)(r_ebp+0xa8u), ST(0)); FPOP();
    /* 00438ebd: fld dword ptr [0xa43e84] */ FPUSH(R_F32((u32)(0xa43e84u)));
    /* 00438ec3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00438ec5: mov dword ptr [ebp + 0xe0], 0x4000 */ W32((u32)(r_ebp+0xe0u), 0x4000u);
    /* 00438ecf: fstp dword ptr [ebp + 0xb4] */ W_F32((u32)(r_ebp+0xb4u), ST(0)); FPOP();
    /* 00438ed5: jmp 0x438dd5 */ goto L_00438dd5;
L_00438eda:; BB(0x00438eda);
    /* 00438eda: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00438edf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00438ee1: push dword ptr [ebp + 0x11c] */ { u32 v = R32((u32)(r_ebp+0x11cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00438ee7: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x438eecu); f_007a8c74();
    /* 00438eec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00438eef: mov dword ptr [ebp + 0x11c], eax */ W32((u32)(r_ebp+0x11cu), r_eax);
    /* 00438ef5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00438ef7: jne 0x438dd5 */ if (!fZ) goto L_00438dd5;
L_00438efd:; BB(0x00438efd);
    /* 00438efd: mov dword ptr [ebp + 0x20], 3 */ W32((u32)(r_ebp+0x20u), 0x3u);
    /* 00438f04: jmp 0x438dd5 */ goto L_00438dd5;
L_00438f09:; BB(0x00438f09);
    /* 00438f09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00438f0b: call 0x438fd8 */ r_esp -= 4; W32(r_esp, 0x438f10u); f_00438fd8();
    /* 00438f10: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 00438f15: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00438f1a: push dword ptr [ebp + 0x120] */ { u32 v = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, v); }
    /* 00438f20: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x438f25u); f_007a8c74();
    /* 00438f25: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00438f28: mov dword ptr [ebp + 0x120], eax */ W32((u32)(r_ebp+0x120u), r_eax);
    /* 00438f2e: jmp 0x438dd5 */ goto L_00438dd5;
L_00438f33:; BB(0x00438f33);
    /* 00438f33: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00438f35: call 0x438fd8 */ r_esp -= 4; W32(r_esp, 0x438f3au); f_00438fd8();
    /* 00438f3a: mov ecx, dword ptr [ebp + 0x128] */ r_ecx = R32((u32)(r_ebp+0x128u));
    /* 00438f40: add ecx, dword ptr [ebp + 0x124] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x124u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00438f46: mov dword ptr [ebp + 0x128], ecx */ W32((u32)(r_ebp+0x128u), r_ecx);
    /* 00438f4c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x438f51u); f_0082dcbc();
    /* 00438f51: fld dword ptr [0xa441d4] */ FPUSH(R_F32((u32)(0xa441d4u)));
    /* 00438f57: fld dword ptr [0x8fd74c] */ FPUSH(R_F32((u32)(0x8fd74cu)));
    /* 00438f5d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00438f5f: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00438f63: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438f68: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438f6d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00438f71: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438f75: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00438f79: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00438f7d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00438f7f: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00438f83: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00438f85: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00438f89: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00438f8e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00438f93: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00438f97: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00438f9b: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00438f9f: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00438fa3: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00438fa6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00438fa8: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00438fac: je 0x438fb9 */ if (fZ) goto L_00438fb9;
L_00438fae:; BB(0x00438fae);
    /* 00438fae: mov dword ptr [ebp + 0x11c], edx */ W32((u32)(r_ebp+0x11cu), r_edx);
    /* 00438fb4: jmp 0x438dd5 */ goto L_00438dd5;
L_00438fb9:; BB(0x00438fb9);
    /* 00438fb9: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00438fbb: mov dword ptr [ebp + 0x11c], edx */ W32((u32)(r_ebp+0x11cu), r_edx);
    /* 00438fc1: jmp 0x438dd5 */ goto L_00438dd5;
L_00438fc6:; BB(0x00438fc6);
    /* 00438fc6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00438fc8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00438fca: jmp 0x438dd5 */ goto L_00438dd5;
L_00438fcf:; BB(0x00438fcf);
    /* 00438fcf: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00438fd1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00438fd3: jmp 0x438dd5 */ goto L_00438dd5;
}

