#include "protos.h"

void f_00436094(void) /* sub_436094 */
{
    FN_ENTER(0x00436094);
    /* 00436094: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436095: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00436097: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0043609b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043609e: je 0x4360d8 */ if (fZ) goto L_004360d8;
L_004360a0:; BB(0x004360a0);
    /* 004360a0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004360a3: je 0x4360cb */ if (fZ) goto L_004360cb;
L_004360a5:; BB(0x004360a5);
    /* 004360a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004360a7: je 0x4360d4 */ if (fZ) goto L_004360d4;
L_004360a9:; BB(0x004360a9);
    /* 004360a9: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004360ac: jne 0x4360d4 */ if (!fZ) goto L_004360d4;
L_004360ae:; BB(0x004360ae);
    /* 004360ae: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 004360b1: movzx edx, word ptr [ebp + 0x2bc] */ r_edx = (u32)R16((u32)(r_ebp+0x2bcu));
    /* 004360b8: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004360bd: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 004360c0: mov word ptr [ebp + 0x334], dx */ W16((u32)(r_ebp+0x334u), (u16)r_edx);
    /* 004360c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004360c8: ret 4 */ FN_RET(0x00436094); r_esp += 8; return;
L_004360cb:; BB(0x004360cb);
    /* 004360cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004360cd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004360cf: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x4360d4u); f_0051f62c();
L_004360d4:; BB(0x004360d4);
    /* 004360d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004360d5: ret 4 */ FN_RET(0x00436094); r_esp += 8; return;
L_004360d8:; BB(0x004360d8);
    /* 004360d8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004360db: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004360dd: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4360e3u); call_ind(t); }
    /* 004360e3: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 004360e9: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004360ec: mov dword ptr [ebp + 0x398], eax */ W32((u32)(r_ebp+0x398u), r_eax);
    /* 004360f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004360f3: ret 4 */ FN_RET(0x00436094); r_esp += 8; return;
}

void f_004360f8(void) /* sub_4360F8 */
{
    FN_ENTER(0x004360f8);
    /* 004360f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004360f9: mov edi, ecx */ r_edi = r_ecx;
    /* 004360fb: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x436100u); f_004f7c84();
    /* 00436100: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436102: je 0x436110 */ if (fZ) goto L_00436110;
L_00436104:; BB(0x00436104);
    /* 00436104: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00436106: mov ecx, edi */ r_ecx = r_edi;
    /* 00436108: call dword ptr [eax + 0x1bc] */ { u32 t = R32((u32)(r_eax+0x1bcu)); r_esp -= 4; W32(r_esp, 0x43610eu); call_ind(t); }
    /* 0043610e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043610f: ret  */ FN_RET(0x004360f8); r_esp += 4; return;
L_00436110:; BB(0x00436110);
    /* 00436110: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00436112: mov ecx, edi */ r_ecx = r_edi;
    /* 00436114: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x43611au); call_ind(t); }
    /* 0043611a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0043611c: mov ecx, edi */ r_ecx = r_edi;
    /* 0043611e: call dword ptr [eax + 0x160] */ { u32 t = R32((u32)(r_eax+0x160u)); r_esp -= 4; W32(r_esp, 0x436124u); call_ind(t); }
    /* 00436124: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436126: jne 0x43613c */ if (!fZ) goto L_0043613c;
L_00436128:; BB(0x00436128);
    /* 00436128: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043612a: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0043612c: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00436133: mov ecx, edi */ r_ecx = r_edi;
    /* 00436135: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436136: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x43613cu); call_ind(t); }
L_0043613c:; BB(0x0043613c);
    /* 0043613c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043613e: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00436140: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00436147: mov ecx, edi */ r_ecx = r_edi;
    /* 00436149: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043614a: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x436150u); call_ind(t); }
    /* 00436150: mov ecx, edi */ r_ecx = r_edi;
    /* 00436152: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x436157u); f_0051f604();
    /* 00436157: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0043615d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0043615f: jne 0x436183 */ if (!fZ) goto L_00436183;
L_00436161:; BB(0x00436161);
    /* 00436161: mov ecx, edi */ r_ecx = r_edi;
    /* 00436163: call 0x590294 */ r_esp -= 4; W32(r_esp, 0x436168u); f_00590294();
    /* 00436168: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0043616a: mov ecx, edi */ r_ecx = r_edi;
    /* 0043616c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x436172u); call_ind(t); }
    /* 00436172: mov ecx, edi */ r_ecx = r_edi;
    /* 00436174: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x436179u); f_006401f0();
    /* 00436179: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0043617b: mov ecx, edi */ r_ecx = r_edi;
    /* 0043617d: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x436183u); call_ind(t); }
L_00436183:; BB(0x00436183);
    /* 00436183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00436184: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x436189u); f_007b999c();
    /* 00436189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043618a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043618b: ret  */ FN_RET(0x004360f8); r_esp += 4; return;
}

void f_0043618c(void) /* sub_43618C */
{
    FN_ENTER(0x0043618c);
    /* 0043618c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043618d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043618e: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436191: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00436193: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x436198u); f_004f7c84();
    /* 00436198: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043619a: jne 0x43634a */ if (!fZ) goto L_0043634a;
L_004361a0:; BB(0x004361a0);
    /* 004361a0: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 004361a6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004361a8: jne 0x436344 */ if (!fZ) goto L_00436344;
L_004361ae:; BB(0x004361ae);
    /* 004361ae: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004361b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004361b5: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004361b8: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004361bd: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x4361c0u); call_ind(t); }
    /* 004361c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004361c2: je 0x436344 */ if (fZ) goto L_00436344;
L_004361c8:; BB(0x004361c8);
    /* 004361c8: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 004361ce: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004361d0: je 0x4361f6 */ if (fZ) goto L_004361f6;
L_004361d2:; BB(0x004361d2);
    /* 004361d2: mov dword ptr [esp], 0x40000000 */ W32((u32)(r_esp), 0x40000000u);
    /* 004361d9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004361dc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004361de: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 004361e6: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 004361ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004361f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004361f1: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x4361f6u); f_00779d4c();
L_004361f6:; BB(0x004361f6);
    /* 004361f6: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 004361f9: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4361feu); f_00829cc8();
    /* 004361fe: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00436203: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00436208: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x43620du); f_00520d08();
    /* 0043620d: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x436212u); f_00578b38();
    /* 00436212: mov edi, dword ptr [ebp + 0x34] */ r_edi = R32((u32)(r_ebp+0x34u));
    /* 00436215: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 00436218: mov edx, dword ptr [ebp + 0x3b4] */ r_edx = R32((u32)(r_ebp+0x3b4u));
    /* 0043621e: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00436220: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00436223: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00436226: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00436229: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0043622c: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0043622f: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00436232: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00436235: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00436238: mov eax, dword ptr [ebp + 0x3b4] */ r_eax = R32((u32)(r_ebp+0x3b4u));
    /* 0043623e: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00436241: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 00436244: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00436247: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0043624a: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0043624d: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 00436250: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00436253: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x436258u); f_0082d7b0();
    /* 00436258: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0043625b: mov ecx, edi */ r_ecx = r_edi;
    /* 0043625d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x436262u); f_0082d838();
    /* 00436262: fld dword ptr [ebp + 0x304] */ FPUSH(R_F32((u32)(r_ebp+0x304u)));
    /* 00436268: fsub dword ptr [ebp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x3cu));
    /* 0043626b: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043626e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00436272: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00436274: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0043627b: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00436283: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x436288u); f_00830b74();
    /* 00436288: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0043628b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043628d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x436292u); f_0082d8bc();
    /* 00436292: mov edx, dword ptr [ebp + 0x5c] */ r_edx = R32((u32)(r_ebp+0x5cu));
    /* 00436295: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00436297: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x43629cu); f_0082e9e4();
    /* 0043629c: mov edx, dword ptr [ebp + 0x64] */ r_edx = R32((u32)(r_ebp+0x64u));
    /* 0043629f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004362a1: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4362a6u); f_0082d8bc();
    /* 004362a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004362a8: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 004362ad: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004362af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004362b1: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x4362b6u); f_00830b74();
    /* 004362b6: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 004362bc: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004362be: je 0x43631b */ if (fZ) goto L_0043631b;
L_004362c0:; BB(0x004362c0);
    /* 004362c0: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 004362c5: movzx edx, word ptr [ebp + 0x3be] */ r_edx = (u32)R16((u32)(r_ebp+0x3beu));
    /* 004362cc: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004362d4: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004362d7: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004362dc: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004362e0: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 004362e4: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004362e8: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004362eb: fadd dword ptr [edx*4 + 0x8fd578] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x8fd578u));
    /* 004362f2: fchs  */ ST(0) = -ST(0);
    /* 004362f4: fdiv dword ptr [0x8fd620] */ ST(0) = ST(0) / R_F32((u32)(0x8fd620u));
    /* 004362fa: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 004362fe: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 00436302: fchs  */ ST(0) = -ST(0);
    /* 00436304: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00436308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436309: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x43630eu); f_0082d710();
    /* 0043630e: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00436311: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x436316u); f_0082e1e8();
    /* 00436316: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436319: jmp 0x436324 */ goto L_00436324;
L_0043631b:; BB(0x0043631b);
    /* 0043631b: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043631e: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x436323u); f_0082e1e8();
    /* 00436323: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00436324:; BB(0x00436324);
    /* 00436324: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x436329u); f_0082da80();
    /* 00436329: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00436330: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436333: je 0x43635b */ if (fZ) goto L_0043635b;
L_00436335:; BB(0x00436335);
    /* 00436335: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0043633a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0043633f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x436344u); f_0082dab0();
L_00436344:; BB(0x00436344);
    /* 00436344: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00436347: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436348: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00436349: ret  */ FN_RET(0x0043618c); r_esp += 4; return;
L_0043634a:; BB(0x0043634a);
    /* 0043634a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0043634d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043634f: call dword ptr [eax + 0x1c0] */ { u32 t = R32((u32)(r_eax+0x1c0u)); r_esp -= 4; W32(r_esp, 0x436355u); call_ind(t); }
    /* 00436355: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00436358: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436359: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043635a: ret  */ FN_RET(0x0043618c); r_esp += 4; return;
L_0043635b:; BB(0x0043635b);
    /* 0043635b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x436360u); f_0082d7b0();
    /* 00436360: fld dword ptr [ebp + 0x3b8] */ FPUSH(R_F32((u32)(r_ebp+0x3b8u)));
    /* 00436366: fmul dword ptr [0x8fd61c] */ ST(0) = ST(0) * R_F32((u32)(0x8fd61cu));
    /* 0043636c: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00436370: mov ecx, edi */ r_ecx = r_edi;
    /* 00436372: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x436377u); f_0082d838();
    /* 00436377: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043637a: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0043637e: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00436381: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00436385: mov dword ptr [esp + 4], 0x40400000 */ W32((u32)(r_esp+0x4u), 0x40400000u);
    /* 0043638d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043638f: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x436394u); f_0082fa0c();
    /* 00436394: push dword ptr [0x9f9830] */ { u32 v = R32((u32)(0x9f9830u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043639a: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x43639fu); f_0082e1e8();
    /* 0043639f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004363a0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4363a5u); f_0082da80();
    /* 004363a5: jmp 0x436335 */ goto L_00436335;
}

void f_004363a8(void) /* sub_4363A8 */
{
    FN_ENTER(0x004363a8);
    /* 004363a8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004363ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004363ae: je 0x436404 */ if (fZ) goto L_00436404;
L_004363b0:; BB(0x004363b0);
    /* 004363b0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004363b3: je 0x4363f4 */ if (fZ) goto L_004363f4;
L_004363b5:; BB(0x004363b5);
    /* 004363b5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004363b8: je 0x4363e4 */ if (fZ) goto L_004363e4;
L_004363ba:; BB(0x004363ba);
    /* 004363ba: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004363bd: jne 0x4363cf */ if (!fZ) goto L_004363cf;
L_004363bf:; BB(0x004363bf);
    /* 004363bf: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004363c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004363c4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004363c6: call dword ptr [eax + 0x1b4] */ { u32 t = R32((u32)(r_eax+0x1b4u)); r_esp -= 4; W32(r_esp, 0x4363ccu); call_ind(t); }
    /* 004363cc: ret 8 */ FN_RET(0x004363a8); r_esp += 12; return;
L_004363cf:; BB(0x004363cf);
    /* 004363cf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004363d2: jne 0x4363f1 */ if (!fZ) goto L_004363f1;
L_004363d4:; BB(0x004363d4);
    /* 004363d4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004363d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004363d9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004363db: call dword ptr [eax + 0x1b8] */ { u32 t = R32((u32)(r_eax+0x1b8u)); r_esp -= 4; W32(r_esp, 0x4363e1u); call_ind(t); }
    /* 004363e1: ret 8 */ FN_RET(0x004363a8); r_esp += 12; return;
L_004363e4:; BB(0x004363e4);
    /* 004363e4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004363e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004363e9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004363eb: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x4363f1u); call_ind(t); }
L_004363f1:; BB(0x004363f1);
    /* 004363f1: ret 8 */ FN_RET(0x004363a8); r_esp += 12; return;
L_004363f4:; BB(0x004363f4);
    /* 004363f4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004363f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004363f9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004363fb: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x436401u); call_ind(t); }
    /* 00436401: ret 8 */ FN_RET(0x004363a8); r_esp += 12; return;
L_00436404:; BB(0x00436404);
    /* 00436404: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00436408: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00436409: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043640b: call dword ptr [eax + 0x1a8] */ { u32 t = R32((u32)(r_eax+0x1a8u)); r_esp -= 4; W32(r_esp, 0x436411u); call_ind(t); }
    /* 00436411: ret 8 */ FN_RET(0x004363a8); r_esp += 12; return;
}

void f_00436414(void) /* sub_436414 */
{
    FN_ENTER(0x00436414);
    /* 00436414: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0043641b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043641e: je 0x436427 */ if (fZ) goto L_00436427;
L_00436420:; BB(0x00436420);
    /* 00436420: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00436422: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x436427u); f_0051f62c();
L_00436427:; BB(0x00436427);
    /* 00436427: ret  */ FN_RET(0x00436414); r_esp += 4; return;
}

void f_00436428(void) /* sub_436428 */
{
    FN_ENTER(0x00436428);
    /* 00436428: fld dword ptr [0x8fd614] */ FPUSH(R_F32((u32)(0x8fd614u)));
    /* 0043642e: fadd dword ptr [ecx + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x304u));
    /* 00436434: fsub dword ptr [ecx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x3cu));
    /* 00436437: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0043643d: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00436440: ret  */ FN_RET(0x00436428); r_esp += 4; return;
}

void f_00436444(void) /* sub_436444 */
{
    FN_ENTER(0x00436444);
    /* 00436444: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00436445: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436446: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436449: mov esi, ecx */ r_esi = r_ecx;
    /* 0043644b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0043644f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436452: je 0x43654e */ if (fZ) goto L_0043654e;
L_00436458:; BB(0x00436458);
    /* 00436458: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043645b: je 0x436520 */ if (fZ) goto L_00436520;
L_00436461:; BB(0x00436461);
    /* 00436461: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436463: jne 0x436546 */ if (!fZ) goto L_00436546;
L_00436469:; BB(0x00436469);
    /* 00436469: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 0043646f: fmul dword ptr [esi + 0x3f8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x3f8u));
    /* 00436475: fadd dword ptr [esi + 0x300] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x300u));
    /* 0043647b: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 00436481: fmul dword ptr [esi + 0x3f8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x3f8u));
    /* 00436487: fadd dword ptr [esi + 0x308] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x308u));
    /* 0043648d: fld dword ptr [esi + 0x3ec] */ FPUSH(R_F32((u32)(r_esi+0x3ecu)));
    /* 00436493: fsub dword ptr [esi + 0x3f8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3f8u));
    /* 00436499: fcom dword ptr [esi + 0x3f0] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x3f0u))); 
    /* 0043649f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004364a1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004364a3: fstp dword ptr [esi + 0x300] */ W_F32((u32)(r_esi+0x300u), ST(0)); FPOP();
    /* 004364a9: fstp dword ptr [esi + 0x308] */ W_F32((u32)(r_esi+0x308u), ST(0)); FPOP();
    /* 004364af: fstp dword ptr [esi + 0x3ec] */ W_F32((u32)(r_esi+0x3ecu), ST(0)); FPOP();
    /* 004364b5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004364b6: jae 0x43650a */ if (!fC) goto L_0043650a;
L_004364b8:; BB(0x004364b8);
    /* 004364b8: fld dword ptr [esi + 0x3f4] */ FPUSH(R_F32((u32)(r_esi+0x3f4u)));
    /* 004364be: fsub dword ptr [0x8fd60c] */ ST(0) = ST(0) - R_F32((u32)(0x8fd60cu));
    /* 004364c4: fld dword ptr [esi + 0x304] */ FPUSH(R_F32((u32)(r_esi+0x304u)));
    /* 004364ca: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 004364cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004364cf: fst dword ptr [esi + 0x3f4] */ W_F32((u32)(r_esi+0x3f4u), ST(0));
    /* 004364d5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004364d7: fstp dword ptr [esi + 0x304] */ W_F32((u32)(r_esi+0x304u), ST(0)); FPOP();
    /* 004364dd: cmp eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004364e2: jl 0x4364ed */ if ((fS!=fO)) goto L_004364ed;
L_004364e4:; BB(0x004364e4);
    /* 004364e4: mov dword ptr [esi + 0x5c], 0x8000 */ W32((u32)(r_esi+0x5cu), 0x8000u);
    /* 004364eb: jmp 0x436511 */ goto L_00436511;
L_004364ed:; BB(0x004364ed);
    /* 004364ed: mov edx, dword ptr [esi + 0x3e4] */ r_edx = R32((u32)(r_esi+0x3e4u));
    /* 004364f3: lea eax, [edx + 0x300] */ r_eax = (u32)(r_edx+0x300u);
    /* 004364f9: mov dword ptr [esi + 0x3e4], eax */ W32((u32)(r_esi+0x3e4u), r_eax);
    /* 004364ff: add edx, 0x4300 */ {  u32 a = r_edx; u32 b = 0x4300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00436505: mov dword ptr [esi + 0x5c], edx */ W32((u32)(r_esi+0x5cu), r_edx);
    /* 00436508: jmp 0x436511 */ goto L_00436511;
L_0043650a:; BB(0x0043650a);
    /* 0043650a: mov dword ptr [esi + 0x5c], 0x4000 */ W32((u32)(r_esi+0x5cu), 0x4000u);
L_00436511:; BB(0x00436511);
    /* 00436511: mov ecx, esi */ r_ecx = r_esi;
    /* 00436513: call 0x437320 */ r_esp -= 4; W32(r_esp, 0x436518u); f_00437320();
    /* 00436518: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043651b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043651c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043651d: ret 4 */ FN_RET(0x00436444); r_esp += 8; return;
L_00436520:; BB(0x00436520);
    /* 00436520: mov edx, dword ptr [esi + 0x3a0] */ r_edx = R32((u32)(r_esi+0x3a0u));
    /* 00436526: fld dword ptr [esi + 0x304] */ FPUSH(R_F32((u32)(r_esi+0x304u)));
    /* 0043652c: fcomp dword ptr [esi + 0x3a0] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x3a0u))); FPOP();
    /* 00436532: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00436534: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00436535: jae 0x436546 */ if (!fC) goto L_00436546;
L_00436537:; BB(0x00436537);
    /* 00436537: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00436539: mov dword ptr [esi + 0x304], edx */ W32((u32)(r_esi+0x304u), r_edx);
    /* 0043653f: mov ecx, esi */ r_ecx = r_esi;
    /* 00436541: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x436546u); f_0051f62c();
L_00436546:; BB(0x00436546);
    /* 00436546: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00436549: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043654a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043654b: ret 4 */ FN_RET(0x00436444); r_esp += 8; return;
L_0043654e:; BB(0x0043654e);
    /* 0043654e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00436550: mov ecx, esi */ r_ecx = r_esi;
    /* 00436552: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x436558u); call_ind(t); }
    /* 00436558: mov ebp, dword ptr [esi + 0x398] */ r_ebp = R32((u32)(r_esi+0x398u));
    /* 0043655e: mov eax, dword ptr [esi + 0x39c] */ r_eax = R32((u32)(r_esi+0x39cu));
    /* 00436564: and ebp, 0xfffffff8 */ {  u32 a = r_ebp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00436567: mov dword ptr [esi + 0x398], ebp */ W32((u32)(r_esi+0x398u), r_ebp);
    /* 0043656d: mov dword ptr [esi + 0x3a8], eax */ W32((u32)(r_esi+0x3a8u), r_eax);
    /* 00436573: mov eax, dword ptr [esi + 0x3a0] */ r_eax = R32((u32)(r_esi+0x3a0u));
    /* 00436579: mov dword ptr [esi + 0x3ac], eax */ W32((u32)(r_esi+0x3acu), r_eax);
    /* 0043657f: mov eax, dword ptr [esi + 0x3a4] */ r_eax = R32((u32)(r_esi+0x3a4u));
    /* 00436585: mov dword ptr [esi + 0x3b0], eax */ W32((u32)(r_esi+0x3b0u), r_eax);
    /* 0043658b: lea ebp, [esi + 0x3a8] */ r_ebp = (u32)(r_esi+0x3a8u);
    /* 00436591: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00436597: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00436599: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x43659eu); f_0082f9c4();
    /* 0043659e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043659f: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4365a4u); f_007828e4();
    /* 004365a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004365a5: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 004365ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004365ad: fstp dword ptr [esi + 0x3e8] */ W_F32((u32)(r_esi+0x3e8u), ST(0)); FPOP();
    /* 004365b3: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 004365b9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004365bb: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004365bd: fld dword ptr [esi + 0x304] */ FPUSH(R_F32((u32)(r_esi+0x304u)));
    /* 004365c3: fsub dword ptr [esi + 0x3a0] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3a0u));
    /* 004365c9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004365cb: fmul qword ptr [0x8fd570] */ ST(0) = ST(0) * R_F64((u32)(0x8fd570u));
    /* 004365d1: fdiv qword ptr [0x8fd568] */ ST(0) = ST(0) / R_F64((u32)(0x8fd568u));
    /* 004365d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004365d9: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004365db: fdiv dword ptr [0x8fd60c] */ ST(0) = ST(0) / R_F32((u32)(0x8fd60cu));
    /* 004365e1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004365e3: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004365e6: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004365ea: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004365ef: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004365f3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004365f7: fistp dword ptr [esi + 0x60] */ W32((u32)(r_esi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 004365fa: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004365fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004365fe: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00436601: mov dword ptr [esi + 0x5c], 0x4000 */ W32((u32)(r_esi+0x5cu), 0x4000u);
    /* 00436608: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x43660du); f_0082dc9c();
    /* 0043660d: fld dword ptr [0x8fd608] */ FPUSH(R_F32((u32)(0x8fd608u)));
    /* 00436613: mov eax, dword ptr [esi + 0x3e8] */ r_eax = R32((u32)(r_esi+0x3e8u));
    /* 00436619: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043661b: fstp dword ptr [esi + 0x3f0] */ W_F32((u32)(r_esi+0x3f0u), ST(0)); FPOP();
    /* 00436621: mov dword ptr [esi + 0x3ec], eax */ W32((u32)(r_esi+0x3ecu), r_eax);
    /* 00436627: mov dword ptr [esi + 0x3f8], 0x41200000 */ W32((u32)(r_esi+0x3f8u), 0x41200000u);
    /* 00436631: mov dword ptr [esi + 0x3f4], 0 */ W32((u32)(r_esi+0x3f4u), 0x0u);
    /* 0043663b: mov dword ptr [esi + 0x3e4], 0 */ W32((u32)(r_esi+0x3e4u), 0x0u);
    /* 00436645: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00436648: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436649: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043664a: ret 4 */ FN_RET(0x00436444); r_esp += 8; return;
}

void f_00436636(void)
{
    FN_ENTER(0x00436636);
    /* 00436636: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00436638: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0043663a: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0043663c: xchg ah, ah */ { u32 x = (u8)(r_eax>>8); u32 y = (u8)(r_eax>>8); r_eax = (r_eax & 0xffff00ffu) | (((y) & 0xffu) << 8); r_eax = (r_eax & 0xffff00ffu) | (((x) & 0xffu) << 8); }
    /* 0043663e: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00436640: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00436642: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00436644: add byte ptr [ebx + 0x5e5d0cc4], al */ { u32 ad = (u32)(r_ebx+0x5e5d0cc4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0043664a: ret 4 */ FN_RET(0x00436636); r_esp += 8; return;
}

void f_00436650(void) /* sub_436650 */
{
    FN_ENTER(0x00436650);
    /* 00436650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436651: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436654: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00436656: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0043665a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043665d: je 0x436732 */ if (fZ) goto L_00436732;
L_00436663:; BB(0x00436663);
    /* 00436663: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436666: je 0x4366f6 */ if (fZ) goto L_004366f6;
L_0043666c:; BB(0x0043666c);
    /* 0043666c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043666e: jne 0x43672b */ if (!fZ) goto L_0043672b;
L_00436674:; BB(0x00436674);
    /* 00436674: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0043667a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043667c: jne 0x4366b8 */ if (!fZ) goto L_004366b8;
L_0043667e:; BB(0x0043667e);
    /* 0043667e: mov eax, dword ptr [ebp + 0x3b4] */ r_eax = R32((u32)(r_ebp+0x3b4u));
    /* 00436684: add eax, 0x280 */ {  u32 a = r_eax; u32 b = 0x280u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00436689: cmp eax, 0x38e3 */ {  u32 a = r_eax; u32 b = 0x38e3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043668e: jge 0x43669d */ if ((fS==fO)) goto L_0043669d;
L_00436690:; BB(0x00436690);
    /* 00436690: mov dword ptr [ebp + 0x3b4], eax */ W32((u32)(r_ebp+0x3b4u), r_eax);
    /* 00436696: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00436699: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043669a: ret 4 */ FN_RET(0x00436650); r_esp += 8; return;
L_0043669d:; BB(0x0043669d);
    /* 0043669d: mov dword ptr [ebp + 0x3b4], 0x38e3 */ W32((u32)(r_ebp+0x3b4u), 0x38e3u);
    /* 004366a7: mov dword ptr [ebp + 0x3d4], 1 */ W32((u32)(r_ebp+0x3d4u), 0x1u);
    /* 004366b1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004366b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004366b5: ret 4 */ FN_RET(0x00436650); r_esp += 8; return;
L_004366b8:; BB(0x004366b8);
    /* 004366b8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004366bb: jne 0x43672b */ if (!fZ) goto L_0043672b;
L_004366bd:; BB(0x004366bd);
    /* 004366bd: mov eax, dword ptr [ebp + 0x3d8] */ r_eax = R32((u32)(r_ebp+0x3d8u));
    /* 004366c3: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004366c6: mov dword ptr [ebp + 0x3d8], eax */ W32((u32)(r_ebp+0x3d8u), r_eax);
    /* 004366cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004366ce: jg 0x4366e0 */ if ((!fZ&&fS==fO)) goto L_004366e0;
L_004366d0:; BB(0x004366d0);
    /* 004366d0: mov eax, dword ptr [ebp + 0x3d8] */ r_eax = R32((u32)(r_ebp+0x3d8u));
    /* 004366d6: mov dword ptr [ebp + 0x3d4], 2 */ W32((u32)(r_ebp+0x3d4u), 0x2u);
L_004366e0:; BB(0x004366e0);
    /* 004366e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004366e1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004366e3: call 0x4367e8 */ r_esp -= 4; W32(r_esp, 0x4366e8u); f_004367e8();
    /* 004366e8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004366ea: call 0x436840 */ r_esp -= 4; W32(r_esp, 0x4366efu); f_00436840();
    /* 004366ef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004366f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004366f3: ret 4 */ FN_RET(0x00436650); r_esp += 8; return;
L_004366f6:; BB(0x004366f6);
    /* 004366f6: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 004366fc: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436701: je 0x436717 */ if (fZ) goto L_00436717;
L_00436703:; BB(0x00436703);
    /* 00436703: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00436705: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043670a: mov dword ptr [ebp + 0x398], eax */ W32((u32)(r_ebp+0x398u), r_eax);
    /* 00436710: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00436712: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x436717u); f_0051f62c();
L_00436717:; BB(0x00436717);
    /* 00436717: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 0043671d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436720: jne 0x43672b */ if (!fZ) goto L_0043672b;
L_00436722:; BB(0x00436722);
    /* 00436722: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00436724: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00436726: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x43672bu); f_0051f62c();
L_0043672b:; BB(0x0043672b);
    /* 0043672b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043672e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043672f: ret 4 */ FN_RET(0x00436650); r_esp += 8; return;
L_00436732:; BB(0x00436732);
    /* 00436732: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00436735: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00436737: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x43673du); call_ind(t); }
    /* 0043673d: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 00436743: mov dword ptr [ebp + 0x5c], 0x8000 */ W32((u32)(r_ebp+0x5cu), 0x8000u);
    /* 0043674a: and eax, 0xfffffffa */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043674d: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00436750: mov dword ptr [ebp + 0x398], eax */ W32((u32)(r_ebp+0x398u), r_eax);
    /* 00436756: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00436758: mov dword ptr [ebp + 0x3bc], edx */ W32((u32)(r_ebp+0x3bcu), r_edx);
    /* 0043675e: mov dword ptr [ebp + 0x3d4], edx */ W32((u32)(r_ebp+0x3d4u), r_edx);
    /* 00436764: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00436766: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x43676bu); f_00520bf4();
    /* 0043676b: fld dword ptr [0x8fd604] */ FPUSH(R_F32((u32)(0x8fd604u)));
    /* 00436771: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00436773: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00436776: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0043677a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043677f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00436783: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00436787: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043678b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0043678e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00436790: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00436794: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00436795: add eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043679a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043679b: mov dword ptr [ebp + 0x3d8], eax */ W32((u32)(r_ebp+0x3d8u), r_eax);
    /* 004367a1: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 004367a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004367a8: push 0x32b */ { u32 v = 0x32bu; r_esp -= 4; W32(r_esp, v); }
    /* 004367ad: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4367b2u); f_00814298();
    /* 004367b2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004367b5: mov dword ptr [ebp + 0x3c4], 0x3e800000 */ W32((u32)(r_ebp+0x3c4u), 0x3e800000u);
    /* 004367bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004367c1: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 004367c7: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 004367cd: mov dword ptr [ebp + 0x3cc], 0x1e */ W32((u32)(r_ebp+0x3ccu), 0x1eu);
    /* 004367d7: mov dword ptr [ebp + 0x3c0], 0 */ W32((u32)(r_ebp+0x3c0u), 0x0u);
    /* 004367e1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004367e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004367e5: ret 4 */ FN_RET(0x00436650); r_esp += 8; return;
}

void f_004367e8(void) /* sub_4367E8 */
{
    FN_ENTER(0x004367e8);
    /* 004367e8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004367ec: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004367ef: jge 0x436808 */ if ((fS==fO)) goto L_00436808;
L_004367f1:; BB(0x004367f1);
    /* 004367f1: mov dword ptr [ecx + 0x3cc], 3 */ W32((u32)(r_ecx+0x3ccu), 0x3u);
    /* 004367fb: mov dword ptr [ecx + 0x3c4], 0x3f000000 */ W32((u32)(r_ecx+0x3c4u), 0x3f000000u);
    /* 00436805: ret 4 */ FN_RET(0x004367e8); r_esp += 8; return;
L_00436808:; BB(0x00436808);
    /* 00436808: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043680d: jge 0x43681c */ if ((fS==fO)) goto L_0043681c;
L_0043680f:; BB(0x0043680f);
    /* 0043680f: mov dword ptr [ecx + 0x3cc], 5 */ W32((u32)(r_ecx+0x3ccu), 0x5u);
    /* 00436819: ret 4 */ FN_RET(0x004367e8); r_esp += 8; return;
L_0043681c:; BB(0x0043681c);
    /* 0043681c: cmp eax, 0x12c */ {  u32 a = r_eax; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00436821: jge 0x436830 */ if ((fS==fO)) goto L_00436830;
L_00436823:; BB(0x00436823);
    /* 00436823: mov dword ptr [ecx + 0x3cc], 0xa */ W32((u32)(r_ecx+0x3ccu), 0xau);
    /* 0043682d: ret 4 */ FN_RET(0x004367e8); r_esp += 8; return;
L_00436830:; BB(0x00436830);
    /* 00436830: mov dword ptr [ecx + 0x3cc], 0x1e */ W32((u32)(r_ecx+0x3ccu), 0x1eu);
    /* 0043683a: ret 4 */ FN_RET(0x004367e8); r_esp += 8; return;
}

void f_00436840(void) /* sub_436840 */
{
    FN_ENTER(0x00436840);
    /* 00436840: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436843: mov edx, dword ptr [ecx + 0x3c8] */ r_edx = R32((u32)(r_ecx+0x3c8u));
    /* 00436849: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0043684f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00436852: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436855: je 0x43697f */ if (fZ) goto L_0043697f;
L_0043685b:; BB(0x0043685b);
    /* 0043685b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043685d: je 0x4368fc */ if (fZ) goto L_004368fc;
L_00436863:; BB(0x00436863);
    /* 00436863: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436866: je 0x436872 */ if (fZ) goto L_00436872;
L_00436868:; BB(0x00436868);
    /* 00436868: mov dword ptr [ecx + 0x3c8], edx */ W32((u32)(r_ecx+0x3c8u), r_edx);
    /* 0043686e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00436871: ret  */ FN_RET(0x00436840); r_esp += 4; return;
L_00436872:; BB(0x00436872);
    /* 00436872: fld dword ptr [ecx + 0x3c0] */ FPUSH(R_F32((u32)(r_ecx+0x3c0u)));
    /* 00436878: fsub dword ptr [ecx + 0x3c4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x3c4u));
    /* 0043687e: fcom dword ptr [0x8fd5f4] */ fx_compare(ST(0), R_F32((u32)(0x8fd5f4u))); 
    /* 00436884: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00436886: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00436887: ja 0x4368af */ if ((!fC&&!fZ)) goto L_004368af;
L_00436889:; BB(0x00436889);
    /* 00436889: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043688b: fld dword ptr [0x8fd5f4] */ FPUSH(R_F32((u32)(0x8fd5f4u)));
    /* 00436891: mov dword ptr [ecx + 0x3c8], 0 */ W32((u32)(r_ecx+0x3c8u), 0x0u);
    /* 0043689b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043689d: mov dword ptr [ecx + 0x3c0], eax */ W32((u32)(r_ecx+0x3c0u), r_eax);
    /* 004368a3: mov dword ptr [ecx + 0x3d0], 2 */ W32((u32)(r_ecx+0x3d0u), 0x2u);
    /* 004368ad: jmp 0x4368bb */ goto L_004368bb;
L_004368af:; BB(0x004368af);
    /* 004368af: fst dword ptr [ecx + 0x3c0] */ W_F32((u32)(r_ecx+0x3c0u), ST(0));
    /* 004368b5: mov dword ptr [ecx + 0x3c8], edx */ W32((u32)(r_ecx+0x3c8u), r_edx);
L_004368bb:; BB(0x004368bb);
    /* 004368bb: fmul dword ptr [0x8fd5f0] */ ST(0) = ST(0) * R_F32((u32)(0x8fd5f0u));
    /* 004368c1: mov edx, dword ptr [ecx + 0x398] */ r_edx = R32((u32)(r_ecx+0x398u));
    /* 004368c7: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004368ca: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004368ce: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004368d3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004368d7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004368db: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004368df: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004368e2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004368e6: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004368e9: mov dword ptr [ecx + 0x3bc], eax */ W32((u32)(r_ecx+0x3bcu), r_eax);
    /* 004368ef: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004368f2: mov dword ptr [ecx + 0x398], edx */ W32((u32)(r_ecx+0x398u), r_edx);
    /* 004368f8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004368fb: ret  */ FN_RET(0x00436840); r_esp += 4; return;
L_004368fc:; BB(0x004368fc);
    /* 004368fc: fld dword ptr [ecx + 0x3c0] */ FPUSH(R_F32((u32)(r_ecx+0x3c0u)));
    /* 00436902: mov dword ptr [ecx + 0x3c8], edx */ W32((u32)(r_ecx+0x3c8u), r_edx);
L_00436908:; BB(0x00436908);
    /* 00436908: fadd dword ptr [ecx + 0x3c4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3c4u));
    /* 0043690e: fcom dword ptr [0x8fd5ec] */ fx_compare(ST(0), R_F32((u32)(0x8fd5ecu))); 
    /* 00436914: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00436916: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00436917: jb 0x436938 */ if (fC) goto L_00436938;
L_00436919:; BB(0x00436919);
    /* 00436919: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043691b: fld dword ptr [0x8fd5ec] */ FPUSH(R_F32((u32)(0x8fd5ecu)));
    /* 00436921: mov dword ptr [ecx + 0x3d0], 1 */ W32((u32)(r_ecx+0x3d0u), 0x1u);
    /* 0043692b: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00436930: mov dword ptr [ecx + 0x3c0], eax */ W32((u32)(r_ecx+0x3c0u), r_eax);
    /* 00436936: jmp 0x43693e */ goto L_0043693e;
L_00436938:; BB(0x00436938);
    /* 00436938: fst dword ptr [ecx + 0x3c0] */ W_F32((u32)(r_ecx+0x3c0u), ST(0));
L_0043693e:; BB(0x0043693e);
    /* 0043693e: fmul dword ptr [0x8fd5f0] */ ST(0) = ST(0) * R_F32((u32)(0x8fd5f0u));
    /* 00436944: mov edx, dword ptr [ecx + 0x398] */ r_edx = R32((u32)(r_ecx+0x398u));
    /* 0043694a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0043694d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00436951: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00436956: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0043695a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043695e: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00436962: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00436965: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00436969: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043696c: mov dword ptr [ecx + 0x3bc], eax */ W32((u32)(r_ecx+0x3bcu), r_eax);
    /* 00436972: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00436975: mov dword ptr [ecx + 0x398], edx */ W32((u32)(r_ecx+0x398u), r_edx);
    /* 0043697b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043697e: ret  */ FN_RET(0x00436840); r_esp += 4; return;
L_0043697f:; BB(0x0043697f);
    /* 0043697f: cmp edx, dword ptr [ecx + 0x3cc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x3ccu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00436985: jl 0x4369a0 */ if ((fS!=fO)) goto L_004369a0;
L_00436987:; BB(0x00436987);
    /* 00436987: fld dword ptr [0x8fd5f4] */ FPUSH(R_F32((u32)(0x8fd5f4u)));
    /* 0043698d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043698f: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 00436995: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 0043699b: jmp 0x436908 */ goto L_00436908;
L_004369a0:; BB(0x004369a0);
    /* 004369a0: mov eax, dword ptr [ecx + 0x398] */ r_eax = R32((u32)(r_ecx+0x398u));
    /* 004369a6: mov dword ptr [ecx + 0x3c8], edx */ W32((u32)(r_ecx+0x3c8u), r_edx);
    /* 004369ac: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004369af: mov dword ptr [ecx + 0x398], eax */ W32((u32)(r_ecx+0x398u), r_eax);
    /* 004369b5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004369b8: ret  */ FN_RET(0x00436840); r_esp += 4; return;
}

void f_004369bc(void) /* sub_4369BC */
{
    FN_ENTER(0x004369bc);
    /* 004369bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004369bd: mov ebp, esp */ r_ebp = r_esp;
    /* 004369bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004369c1: push 0x8cdf70 */ { u32 v = 0x8cdf70u; r_esp -= 4; W32(r_esp, v); }
    /* 004369c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004369cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004369cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004369d4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004369d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004369da: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004369dd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004369e0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004369e3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004369e6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004369e9: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004369ec: call 0x521738 */ r_esp -= 4; W32(r_esp, 0x4369f1u); f_00521738();
    /* 004369f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004369f8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004369fb: mov dword ptr [edx], 0xaf4a00 */ W32((u32)(r_edx), 0xaf4a00u);
    /* 00436a01: mov eax, dword ptr [0x9a482c] */ r_eax = R32((u32)(0x9a482cu));
    /* 00436a06: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00436a09: call 0x432a30 */ r_esp -= 4; W32(r_esp, 0x436a0eu); f_00432a30();
    /* 00436a0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436a10: je 0x436a1b */ if (fZ) goto L_00436a1b;
L_00436a12:; BB(0x00436a12);
    /* 00436a12: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00436a15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436a16: call 0x51f760 */ r_esp -= 4; W32(r_esp, 0x436a1bu); f_0051f760();
L_00436a1b:; BB(0x00436a1b);
    /* 00436a1b: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00436a1f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00436a22: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00436a25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436a27: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00436a2b: mov word ptr [ecx + 0x2c], dx */ W16((u32)(r_ecx+0x2cu), (u16)r_edx);
    /* 00436a2f: call 0x437368 */ r_esp -= 4; W32(r_esp, 0x436a34u); f_00437368();
    /* 00436a34: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00436a37: mov dword ptr [eax], 0xaf4be0 */ W32((u32)(r_eax), 0xaf4be0u);
    /* 00436a3d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00436a40: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00436a47: mov esp, ebp */ r_esp = r_ebp;
    /* 00436a49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436a4a: ret 0xc */ FN_RET(0x004369bc); r_esp += 16; return;
}

void f_00436a50(void) /* sub_436A50 */
{
    FN_ENTER(0x00436a50);
    /* 00436a50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00436a51: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00436a52: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436a53: mov esi, ecx */ r_esi = r_ecx;
    /* 00436a55: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00436a59: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 00436a5f: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00436a64: mov dword ptr [esi + 0x398], eax */ W32((u32)(r_esi+0x398u), r_eax);
    /* 00436a6a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00436a6e: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00436a70: mov dword ptr [esi + 0x300], ecx */ W32((u32)(r_esi+0x300u), r_ecx);
    /* 00436a76: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00436a79: mov dword ptr [esi + 0x304], ebp */ W32((u32)(r_esi+0x304u), r_ebp);
    /* 00436a7f: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00436a82: mov dword ptr [esi + 0x308], edx */ W32((u32)(r_esi+0x308u), r_edx);
    /* 00436a88: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00436a8a: mov dword ptr [esi + 0x39c], edi */ W32((u32)(r_esi+0x39cu), r_edi);
    /* 00436a90: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00436a93: fadd dword ptr [0x8fd5e8] */ ST(0) = ST(0) + R_F32((u32)(0x8fd5e8u));
    /* 00436a99: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00436a9c: mov dword ptr [esi + 0x3a0], edi */ W32((u32)(r_esi+0x3a0u), r_edi);
    /* 00436aa2: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00436aa5: fstp dword ptr [esi + 0x3a0] */ W_F32((u32)(r_esi+0x3a0u), ST(0)); FPOP();
    /* 00436aab: mov dword ptr [esi + 0x3b4], 0 */ W32((u32)(r_esi+0x3b4u), 0x0u);
    /* 00436ab5: mov dword ptr [esi + 0x3a4], eax */ W32((u32)(r_esi+0x3a4u), r_eax);
    /* 00436abb: movzx eax, word ptr [esi + 0x2bc] */ r_eax = (u32)R16((u32)(r_esi+0x2bcu));
    /* 00436ac2: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 00436ac5: mov dword ptr [esi + 0x3c], ebp */ W32((u32)(r_esi+0x3cu), r_ebp);
    /* 00436ac8: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 00436acb: mov word ptr [esi + 0x334], ax */ W16((u32)(r_esi+0x334u), (u16)r_eax);
    /* 00436ad2: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00436ad5: and eax, 0xfffff5ff */ {  u32 a = r_eax; u32 b = 0xfffff5ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00436ada: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00436add: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436ade: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00436adf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00436ae0: ret 8 */ FN_RET(0x00436a50); r_esp += 12; return;
}

void f_00436ae4(void) /* sub_436AE4 */
{
    FN_ENTER(0x00436ae4);
    /* 00436ae4: fld dword ptr [0x8fd5e4] */ FPUSH(R_F32((u32)(0x8fd5e4u)));
    /* 00436aea: fadd dword ptr [ecx + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x304u));
    /* 00436af0: fsub dword ptr [ecx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x3cu));
    /* 00436af3: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 00436af9: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00436afc: ret  */ FN_RET(0x00436ae4); r_esp += 4; return;
}

void f_00436b00(void) /* sub_436B00 */
{
    FN_ENTER(0x00436b00);
    /* 00436b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436b01: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436b04: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00436b06: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00436b0a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436b0d: je 0x436db0 */ if (fZ) goto L_00436db0;
L_00436b13:; BB(0x00436b13);
    /* 00436b13: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436b16: je 0x436d95 */ if (fZ) goto L_00436d95;
L_00436b1c:; BB(0x00436b1c);
    /* 00436b1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436b1e: jne 0x436da9 */ if (!fZ) goto L_00436da9;
L_00436b24:; BB(0x00436b24);
    /* 00436b24: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 00436b2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436b2c: je 0x436d1f */ if (fZ) goto L_00436d1f;
L_00436b32:; BB(0x00436b32);
    /* 00436b32: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436b35: jne 0x436b9c */ if (!fZ) goto L_00436b9c;
L_00436b37:; BB(0x00436b37);
    /* 00436b37: mov eax, dword ptr [ebp + 0x3b4] */ r_eax = R32((u32)(r_ebp+0x3b4u));
    /* 00436b3d: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00436b42: cmp eax, 0x38e3 */ {  u32 a = r_eax; u32 b = 0x38e3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00436b47: jl 0x436b5f */ if ((fS!=fO)) goto L_00436b5f;
L_00436b49:; BB(0x00436b49);
    /* 00436b49: mov dword ptr [ebp + 0x3b4], 0x38e3 */ W32((u32)(r_ebp+0x3b4u), 0x38e3u);
    /* 00436b53: mov dword ptr [ebp + 0x3d4], 2 */ W32((u32)(r_ebp+0x3d4u), 0x2u);
    /* 00436b5d: jmp 0x436b65 */ goto L_00436b65;
L_00436b5f:; BB(0x00436b5f);
    /* 00436b5f: mov dword ptr [ebp + 0x3b4], eax */ W32((u32)(r_ebp+0x3b4u), r_eax);
L_00436b65:; BB(0x00436b65);
    /* 00436b65: fld dword ptr [ebp + 0x410] */ FPUSH(R_F32((u32)(r_ebp+0x410u)));
    /* 00436b6b: fmul dword ptr [ebp + 0x3e8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3e8u));
    /* 00436b71: fadd dword ptr [ebp + 0x300] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x300u));
    /* 00436b77: fld dword ptr [ebp + 0x418] */ FPUSH(R_F32((u32)(r_ebp+0x418u)));
    /* 00436b7d: fmul dword ptr [ebp + 0x3e8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3e8u));
    /* 00436b83: fadd dword ptr [ebp + 0x308] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x308u));
    /* 00436b89: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00436b8b: fstp dword ptr [ebp + 0x300] */ W_F32((u32)(r_ebp+0x300u), ST(0)); FPOP();
    /* 00436b91: fstp dword ptr [ebp + 0x308] */ W_F32((u32)(r_ebp+0x308u), ST(0)); FPOP();
    /* 00436b97: jmp 0x436d87 */ goto L_00436d87;
L_00436b9c:; BB(0x00436b9c);
    /* 00436b9c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436b9f: jne 0x436d87 */ if (!fZ) goto L_00436d87;
L_00436ba5:; BB(0x00436ba5);
    /* 00436ba5: fild dword ptr [ebp + 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x64u)));
    /* 00436ba8: fadd dword ptr [0x8fd5d4] */ ST(0) = ST(0) + R_F32((u32)(0x8fd5d4u));
    /* 00436bae: mov eax, dword ptr [ebp + 0x5c] */ r_eax = R32((u32)(r_ebp+0x5cu));
    /* 00436bb1: add eax, 0xfffffa00 */ {  u32 a = r_eax; u32 b = 0xfffffa00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00436bb6: fld dword ptr [0x8fd5e0] */ FPUSH(R_F32((u32)(0x8fd5e0u)));
    /* 00436bbc: fadd dword ptr [ebp + 0x3e8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3e8u));
    /* 00436bc2: fld dword ptr [0x8fd5d0] */ FPUSH(R_F32((u32)(0x8fd5d0u)));
    /* 00436bc8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00436bca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00436bcc: jg 0x436bd0 */ if ((!fZ&&fS==fO)) goto L_00436bd0;
L_00436bce:; BB(0x00436bce);
    /* 00436bce: mov eax, edx */ r_eax = r_edx;
L_00436bd0:; BB(0x00436bd0);
    /* 00436bd0: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 00436bd3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00436bd5: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00436bd9: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00436bde: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00436be3: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00436be7: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00436beb: fistp dword ptr [ebp + 0x64] */ W32((u32)(r_ebp+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 00436bee: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00436bf2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00436bf4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00436bf6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00436bf8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00436bf9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00436bfb: ja 0x436bff */ if ((!fC&&!fZ)) goto L_00436bff;
L_00436bfd:; BB(0x00436bfd);
    /* 00436bfd: fst st(1) */ ST(1) = ST(0);
L_00436bff:; BB(0x00436bff);
    /* 00436bff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00436c01: fstp dword ptr [ebp + 0x3e8] */ W_F32((u32)(r_ebp+0x3e8u), ST(0)); FPOP();
    /* 00436c07: call 0x436e08 */ r_esp -= 4; W32(r_esp, 0x436c0cu); f_00436e08();
    /* 00436c0c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00436c0f: mov eax, dword ptr [ebp + 0x39c] */ r_eax = R32((u32)(r_ebp+0x39cu));
    /* 00436c15: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00436c18: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 00436c1e: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 00436c24: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00436c28: mov eax, dword ptr [ebp + 0x3a4] */ r_eax = R32((u32)(r_ebp+0x3a4u));
    /* 00436c2e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00436c32: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x436c37u); f_0082f9c4();
    /* 00436c37: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00436c3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436c3b: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x436c40u); f_00782868();
    /* 00436c40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00436c41: fcomp dword ptr [0x8fd5dc] */ fx_compare(ST(0), R_F32((u32)(0x8fd5dcu))); FPOP();
    /* 00436c47: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00436c49: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00436c4a: ja 0x436c56 */ if ((!fC&&!fZ)) goto L_00436c56;
L_00436c4c:; BB(0x00436c4c);
    /* 00436c4c: mov dword ptr [ebp + 0x3d4], 3 */ W32((u32)(r_ebp+0x3d4u), 0x3u);
L_00436c56:; BB(0x00436c56);
    /* 00436c56: fld dword ptr [0x8fd5cc] */ FPUSH(R_F32((u32)(0x8fd5ccu)));
    /* 00436c5c: fadd dword ptr [ebp + 0x3ec] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3ecu));
    /* 00436c62: fld dword ptr [0x8fd5c8] */ FPUSH(R_F32((u32)(0x8fd5c8u)));
    /* 00436c68: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00436c6a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00436c6c: fld dword ptr [ebp + 0x3e8] */ FPUSH(R_F32((u32)(r_ebp+0x3e8u)));
    /* 00436c72: lea edx, [ebp + 0x410] */ r_edx = (u32)(r_ebp+0x410u);
    /* 00436c78: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00436c79: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00436c7b: ja 0x436c7f */ if ((!fC&&!fZ)) goto L_00436c7f;
L_00436c7d:; BB(0x00436c7d);
    /* 00436c7d: fst st(2) */ ST(2) = ST(0);
L_00436c7f:; BB(0x00436c7f);
    /* 00436c7f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00436c81: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00436c83: fst dword ptr [ebp + 0x3ec] */ W_F32((u32)(r_ebp+0x3ecu), ST(0));
    /* 00436c89: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00436c8b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00436c8e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00436c90: fadd dword ptr [ebp + 0x410] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x410u));
    /* 00436c96: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00436c9a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00436c9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00436ca0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00436ca2: fadd dword ptr [ebp + 0x414] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x414u));
    /* 00436ca8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00436caa: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00436cac: fadd dword ptr [ebp + 0x418] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x418u));
    /* 00436cb2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00436cb4: fstp dword ptr [ebp + 0x410] */ W_F32((u32)(r_ebp+0x410u), ST(0)); FPOP();
    /* 00436cba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00436cbc: fstp dword ptr [ebp + 0x414] */ W_F32((u32)(r_ebp+0x414u), ST(0)); FPOP();
    /* 00436cc2: fstp dword ptr [ebp + 0x418] */ W_F32((u32)(r_ebp+0x418u), ST(0)); FPOP();
    /* 00436cc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00436cc9: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x436cceu); f_00782868();
    /* 00436cce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00436cd0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436cd3: fld dword ptr [ebp + 0x410] */ FPUSH(R_F32((u32)(r_ebp+0x410u)));
    /* 00436cd9: fmul dword ptr [ebp + 0x3e8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3e8u));
    /* 00436cdf: fadd dword ptr [ebp + 0x300] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x300u));
    /* 00436ce5: fld dword ptr [ebp + 0x414] */ FPUSH(R_F32((u32)(r_ebp+0x414u)));
    /* 00436ceb: fmul dword ptr [ebp + 0x3e8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3e8u));
    /* 00436cf1: fadd dword ptr [ebp + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x304u));
    /* 00436cf7: fld dword ptr [ebp + 0x418] */ FPUSH(R_F32((u32)(r_ebp+0x418u)));
    /* 00436cfd: fmul dword ptr [ebp + 0x3e8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3e8u));
    /* 00436d03: fadd dword ptr [ebp + 0x308] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x308u));
    /* 00436d09: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00436d0b: fstp dword ptr [ebp + 0x300] */ W_F32((u32)(r_ebp+0x300u), ST(0)); FPOP();
    /* 00436d11: fstp dword ptr [ebp + 0x304] */ W_F32((u32)(r_ebp+0x304u), ST(0)); FPOP();
    /* 00436d17: fstp dword ptr [ebp + 0x308] */ W_F32((u32)(r_ebp+0x308u), ST(0)); FPOP();
    /* 00436d1d: jmp 0x436d87 */ goto L_00436d87;
L_00436d1f:; BB(0x00436d1f);
    /* 00436d1f: mov eax, dword ptr [ebp + 0x3d8] */ r_eax = R32((u32)(r_ebp+0x3d8u));
    /* 00436d25: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00436d28: mov dword ptr [ebp + 0x3d8], eax */ W32((u32)(r_ebp+0x3d8u), r_eax);
    /* 00436d2e: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00436d31: jl 0x436d55 */ if ((fS!=fO)) goto L_00436d55;
L_00436d33:; BB(0x00436d33);
    /* 00436d33: mov dword ptr [ebp + 0x3d4], 1 */ W32((u32)(r_ebp+0x3d4u), 0x1u);
    /* 00436d3d: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 00436d43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00436d45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436d46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436d47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00436d48: push 0x32b */ { u32 v = 0x32bu; r_esp -= 4; W32(r_esp, v); }
    /* 00436d4d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x436d52u); f_00814298();
    /* 00436d52: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00436d55:; BB(0x00436d55);
    /* 00436d55: fld dword ptr [ebp + 0x410] */ FPUSH(R_F32((u32)(r_ebp+0x410u)));
    /* 00436d5b: fmul dword ptr [ebp + 0x3e8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3e8u));
    /* 00436d61: fadd dword ptr [ebp + 0x300] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x300u));
    /* 00436d67: fld dword ptr [ebp + 0x418] */ FPUSH(R_F32((u32)(r_ebp+0x418u)));
    /* 00436d6d: fmul dword ptr [ebp + 0x3e8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3e8u));
    /* 00436d73: fadd dword ptr [ebp + 0x308] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x308u));
    /* 00436d79: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00436d7b: fstp dword ptr [ebp + 0x300] */ W_F32((u32)(r_ebp+0x300u), ST(0)); FPOP();
    /* 00436d81: fstp dword ptr [ebp + 0x308] */ W_F32((u32)(r_ebp+0x308u), ST(0)); FPOP();
L_00436d87:; BB(0x00436d87);
    /* 00436d87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00436d89: call 0x437320 */ r_esp -= 4; W32(r_esp, 0x436d8eu); f_00437320();
    /* 00436d8e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00436d91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436d92: ret 4 */ FN_RET(0x00436b00); r_esp += 8; return;
L_00436d95:; BB(0x00436d95);
    /* 00436d95: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 00436d9b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436d9e: jne 0x436da9 */ if (!fZ) goto L_00436da9;
L_00436da0:; BB(0x00436da0);
    /* 00436da0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00436da2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00436da4: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x436da9u); f_0051f62c();
L_00436da9:; BB(0x00436da9);
    /* 00436da9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00436dac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436dad: ret 4 */ FN_RET(0x00436b00); r_esp += 8; return;
L_00436db0:; BB(0x00436db0);
    /* 00436db0: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00436db3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00436db5: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x436dbbu); call_ind(t); }
    /* 00436dbb: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 00436dc1: mov dword ptr [ebp + 0x5c], 0x4000 */ W32((u32)(r_ebp+0x5cu), 0x4000u);
    /* 00436dc8: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00436dcb: mov dword ptr [ebp + 0x398], eax */ W32((u32)(r_ebp+0x398u), r_eax);
    /* 00436dd1: mov dword ptr [ebp + 0x3d4], 1 */ W32((u32)(r_ebp+0x3d4u), 0x1u);
    /* 00436ddb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00436ddd: mov dword ptr [ebp + 0x3b4], edx */ W32((u32)(r_ebp+0x3b4u), r_edx);
    /* 00436de3: mov dword ptr [ebp + 0x64], edx */ W32((u32)(r_ebp+0x64u), r_edx);
    /* 00436de6: mov dword ptr [ebp + 0x3e8], 0x41000000 */ W32((u32)(r_ebp+0x3e8u), 0x41000000u);
    /* 00436df0: mov dword ptr [ebp + 0x3d8], edx */ W32((u32)(r_ebp+0x3d8u), r_edx);
    /* 00436df6: mov dword ptr [ebp + 0x3ec], 0 */ W32((u32)(r_ebp+0x3ecu), 0x0u);
    /* 00436e00: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00436e03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436e04: ret 4 */ FN_RET(0x00436b00); r_esp += 8; return;
}

void f_00436cc0(void)
{
    FN_ENTER(0x00436cc0);
    /* 00436cc0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00436cc2: fstp dword ptr [ebp + 0x418] */ W_F32((u32)(r_ebp+0x418u), ST(0)); FPOP();
    /* 00436cc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00436cc9: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x436cceu); f_00782868();
    /* 00436cce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00436cd0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436cd3: fld dword ptr [ebp + 0x410] */ FPUSH(R_F32((u32)(r_ebp+0x410u)));
    /* 00436cd9: fmul dword ptr [ebp + 0x3e8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3e8u));
    /* 00436cdf: fadd dword ptr [ebp + 0x300] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x300u));
    /* 00436ce5: fld dword ptr [ebp + 0x414] */ FPUSH(R_F32((u32)(r_ebp+0x414u)));
    /* 00436ceb: fmul dword ptr [ebp + 0x3e8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3e8u));
    /* 00436cf1: fadd dword ptr [ebp + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x304u));
    /* 00436cf7: fld dword ptr [ebp + 0x418] */ FPUSH(R_F32((u32)(r_ebp+0x418u)));
    /* 00436cfd: fmul dword ptr [ebp + 0x3e8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3e8u));
    /* 00436d03: fadd dword ptr [ebp + 0x308] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x308u));
    /* 00436d09: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00436d0b: fstp dword ptr [ebp + 0x300] */ W_F32((u32)(r_ebp+0x300u), ST(0)); FPOP();
    /* 00436d11: fstp dword ptr [ebp + 0x304] */ W_F32((u32)(r_ebp+0x304u), ST(0)); FPOP();
    /* 00436d17: fstp dword ptr [ebp + 0x308] */ W_F32((u32)(r_ebp+0x308u), ST(0)); FPOP();
    /* 00436d1d: jmp 0x436d87 */ goto L_00436d87;
L_00436d87:; BB(0x00436d87);
    /* 00436d87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00436d89: call 0x437320 */ r_esp -= 4; W32(r_esp, 0x436d8eu); f_00437320();
    /* 00436d8e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00436d91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436d92: ret 4 */ FN_RET(0x00436cc0); r_esp += 8; return;
}

void f_00436e08(void) /* sub_436E08 */
{
    FN_ENTER(0x00436e08);
    /* 00436e08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00436e09: mov esi, ecx */ r_esi = r_ecx;
    /* 00436e0b: push dword ptr [esi + 0x3fc] */ { u32 v = R32((u32)(r_esi+0x3fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00436e11: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x436e16u); f_00520f3c();
    /* 00436e16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00436e17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00436e19: je 0x436e5f */ if (fZ) goto L_00436e5f;
L_00436e1b:; BB(0x00436e1b);
    /* 00436e1b: mov edx, dword ptr [esi + 0x3fc] */ r_edx = R32((u32)(r_esi+0x3fcu));
    /* 00436e21: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00436e24: mov dword ptr [esi + 0x39c], eax */ W32((u32)(r_esi+0x39cu), r_eax);
    /* 00436e2a: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00436e2d: mov dword ptr [esi + 0x3a0], eax */ W32((u32)(r_esi+0x3a0u), r_eax);
    /* 00436e33: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00436e36: mov dword ptr [esi + 0x3a4], eax */ W32((u32)(r_esi+0x3a4u), r_eax);
    /* 00436e3c: lea ecx, [esi + 0x39c] */ r_ecx = (u32)(r_esi+0x39cu);
    /* 00436e42: lea edx, [esi + 0x404] */ r_edx = (u32)(r_esi+0x404u);
    /* 00436e48: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x436e4du); f_0082ebac();
    /* 00436e4d: fld dword ptr [0xa43db4] */ FPUSH(R_F32((u32)(0xa43db4u)));
    /* 00436e53: fadd dword ptr [esi + 0x3a0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3a0u));
    /* 00436e59: fstp dword ptr [esi + 0x3a0] */ W_F32((u32)(r_esi+0x3a0u), ST(0)); FPOP();
L_00436e5f:; BB(0x00436e5f);
    /* 00436e5f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00436e60: ret  */ FN_RET(0x00436e08); r_esp += 4; return;
}

void f_00436e64(void) /* sub_436E64 */
{
    FN_ENTER(0x00436e64);
    /* 00436e64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00436e65: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436e68: mov edi, ecx */ r_edi = r_ecx;
    /* 00436e6a: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00436e6e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436e71: je 0x437018 */ if (fZ) goto L_00437018;
L_00436e77:; BB(0x00436e77);
    /* 00436e77: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436e7a: je 0x436fdc */ if (fZ) goto L_00436fdc;
L_00436e80:; BB(0x00436e80);
    /* 00436e80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436e82: jne 0x437011 */ if (!fZ) goto L_00437011;
L_00436e88:; BB(0x00436e88);
    /* 00436e88: mov eax, dword ptr [edi + 0x3d8] */ r_eax = R32((u32)(r_edi+0x3d8u));
    /* 00436e8e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00436e91: mov dword ptr [edi + 0x3d8], eax */ W32((u32)(r_edi+0x3d8u), r_eax);
    /* 00436e97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00436e99: jg 0x436ea5 */ if ((!fZ&&fS==fO)) goto L_00436ea5;
L_00436e9b:; BB(0x00436e9b);
    /* 00436e9b: mov dword ptr [edi + 0x3d4], 1 */ W32((u32)(r_edi+0x3d4u), 0x1u);
L_00436ea5:; BB(0x00436ea5);
    /* 00436ea5: fild dword ptr [edi + 0x64] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x64u)));
    /* 00436ea8: fadd dword ptr [0x8fd5d4] */ ST(0) = ST(0) + R_F32((u32)(0x8fd5d4u));
    /* 00436eae: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00436eb2: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00436eb7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00436ebc: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00436ec0: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00436ec4: fistp dword ptr [edi + 0x64] */ W32((u32)(r_edi+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 00436ec7: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00436ecb: mov ecx, edi */ r_ecx = r_edi;
    /* 00436ecd: call 0x436e08 */ r_esp -= 4; W32(r_esp, 0x436ed2u); f_00436e08();
    /* 00436ed2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00436ed5: mov eax, dword ptr [edi + 0x39c] */ r_eax = R32((u32)(r_edi+0x39cu));
    /* 00436edb: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00436ede: mov eax, dword ptr [edi + 0x3a0] */ r_eax = R32((u32)(r_edi+0x3a0u));
    /* 00436ee4: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 00436eea: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00436eee: mov eax, dword ptr [edi + 0x3a4] */ r_eax = R32((u32)(r_edi+0x3a4u));
    /* 00436ef4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00436ef8: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x436efdu); f_0082f9c4();
    /* 00436efd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00436f00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436f01: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x436f06u); f_007828e4();
    /* 00436f06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00436f07: fld dword ptr [0x8fd5b4] */ FPUSH(R_F32((u32)(0x8fd5b4u)));
    /* 00436f0d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00436f0f: fcom dword ptr [0x8fd5b0] */ fx_compare(ST(0), R_F32((u32)(0x8fd5b0u))); 
    /* 00436f15: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00436f17: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00436f18: jae 0x436f42 */ if (!fC) goto L_00436f42;
L_00436f1a:; BB(0x00436f1a);
    /* 00436f1a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00436f1c: mov eax, dword ptr [edi + 0x39c] */ r_eax = R32((u32)(r_edi+0x39cu));
    /* 00436f22: mov edx, dword ptr [edi + 0x3a0] */ r_edx = R32((u32)(r_edi+0x3a0u));
    /* 00436f28: mov dword ptr [edi + 0x300], eax */ W32((u32)(r_edi+0x300u), r_eax);
    /* 00436f2e: mov eax, dword ptr [edi + 0x3a4] */ r_eax = R32((u32)(r_edi+0x3a4u));
    /* 00436f34: mov dword ptr [edi + 0x304], edx */ W32((u32)(r_edi+0x304u), r_edx);
    /* 00436f3a: mov dword ptr [edi + 0x308], eax */ W32((u32)(r_edi+0x308u), r_eax);
    /* 00436f40: jmp 0x436f8c */ goto L_00436f8c;
L_00436f42:; BB(0x00436f42);
    /* 00436f42: fld dword ptr [0x8fd5ac] */ FPUSH(R_F32((u32)(0x8fd5acu)));
    /* 00436f48: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00436f4a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00436f4c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00436f4f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00436f53: mov edx, dword ptr [edi + 0x3a0] */ r_edx = R32((u32)(r_edi+0x3a0u));
    /* 00436f59: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00436f5a: mov dword ptr [edi + 0x304], edx */ W32((u32)(r_edi+0x304u), r_edx);
    /* 00436f60: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00436f62: jae 0x436f66 */ if (!fC) goto L_00436f66;
L_00436f64:; BB(0x00436f64);
    /* 00436f64: fst st(3) */ ST(3) = ST(0);
L_00436f66:; BB(0x00436f66);
    /* 00436f66: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00436f68: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00436f6a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00436f6c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00436f6e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00436f70: fadd dword ptr [edi + 0x300] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x300u));
    /* 00436f76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00436f78: fadd dword ptr [edi + 0x308] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x308u));
    /* 00436f7e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00436f80: fstp dword ptr [edi + 0x300] */ W_F32((u32)(r_edi+0x300u), ST(0)); FPOP();
    /* 00436f86: fstp dword ptr [edi + 0x308] */ W_F32((u32)(r_edi+0x308u), ST(0)); FPOP();
L_00436f8c:; BB(0x00436f8c);
    /* 00436f8c: push dword ptr [edi + 0x3d8] */ { u32 v = R32((u32)(r_edi+0x3d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00436f92: mov ecx, edi */ r_ecx = r_edi;
    /* 00436f94: call 0x4367e8 */ r_esp -= 4; W32(r_esp, 0x436f99u); f_004367e8();
    /* 00436f99: mov ecx, edi */ r_ecx = r_edi;
    /* 00436f9b: call 0x436840 */ r_esp -= 4; W32(r_esp, 0x436fa0u); f_00436840();
    /* 00436fa0: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00436fa6: mov edx, dword ptr [edi + 0x308] */ r_edx = R32((u32)(r_edi+0x308u));
    /* 00436fac: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 00436faf: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00436fb1: mov dword ptr [edi + 0x40], edx */ W32((u32)(r_edi+0x40u), r_edx);
    /* 00436fb4: mov ecx, edi */ r_ecx = r_edi;
    /* 00436fb6: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x436fbcu); call_ind(t); }
    /* 00436fbc: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00436fbf: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00436fc2: mov dword ptr [edi + 0x300], eax */ W32((u32)(r_edi+0x300u), r_eax);
    /* 00436fc8: mov dword ptr [edi + 0x308], edx */ W32((u32)(r_edi+0x308u), r_edx);
    /* 00436fce: mov ecx, edi */ r_ecx = r_edi;
    /* 00436fd0: call 0x437320 */ r_esp -= 4; W32(r_esp, 0x436fd5u); f_00437320();
    /* 00436fd5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00436fd8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00436fd9: ret 4 */ FN_RET(0x00436e64); r_esp += 8; return;
L_00436fdc:; BB(0x00436fdc);
    /* 00436fdc: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 00436fe2: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436fe7: je 0x436ffd */ if (fZ) goto L_00436ffd;
L_00436fe9:; BB(0x00436fe9);
    /* 00436fe9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00436feb: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00436ff0: mov dword ptr [edi + 0x398], eax */ W32((u32)(r_edi+0x398u), r_eax);
    /* 00436ff6: mov ecx, edi */ r_ecx = r_edi;
    /* 00436ff8: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x436ffdu); f_0051f62c();
L_00436ffd:; BB(0x00436ffd);
    /* 00436ffd: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 00437003: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00437006: jne 0x437011 */ if (!fZ) goto L_00437011;
L_00437008:; BB(0x00437008);
    /* 00437008: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0043700a: mov ecx, edi */ r_ecx = r_edi;
    /* 0043700c: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x437011u); f_0051f62c();
L_00437011:; BB(0x00437011);
    /* 00437011: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00437014: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00437015: ret 4 */ FN_RET(0x00436e64); r_esp += 8; return;
L_00437018:; BB(0x00437018);
    /* 00437018: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0043701a: mov ecx, edi */ r_ecx = r_edi;
    /* 0043701c: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x437022u); call_ind(t); }
    /* 00437022: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 00437028: and eax, 0xfffffffa */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043702b: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043702e: mov dword ptr [edi + 0x398], eax */ W32((u32)(r_edi+0x398u), r_eax);
    /* 00437034: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00437036: mov dword ptr [edi + 0x5c], edx */ W32((u32)(r_edi+0x5cu), r_edx);
    /* 00437039: mov dword ptr [edi + 0x3bc], edx */ W32((u32)(r_edi+0x3bcu), r_edx);
    /* 0043703f: mov dword ptr [edi + 0x3d4], edx */ W32((u32)(r_edi+0x3d4u), r_edx);
    /* 00437045: mov ecx, edi */ r_ecx = r_edi;
    /* 00437047: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x43704cu); f_00520bf4();
    /* 0043704c: fld dword ptr [0x8fd5c0] */ FPUSH(R_F32((u32)(0x8fd5c0u)));
    /* 00437052: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00437054: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00437058: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0043705d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00437062: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00437066: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0043706a: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0043706e: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00437072: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00437076: mov dword ptr [edi + 0x3c4], 0x3e800000 */ W32((u32)(r_edi+0x3c4u), 0x3e800000u);
    /* 00437080: add eax, 0xf0 */ {  u32 a = r_eax; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00437085: mov dword ptr [edi + 0x3cc], 0x1e */ W32((u32)(r_edi+0x3ccu), 0x1eu);
    /* 0043708f: mov dword ptr [edi + 0x3d8], eax */ W32((u32)(r_edi+0x3d8u), r_eax);
    /* 00437095: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00437097: mov dword ptr [edi + 0x3d0], edx */ W32((u32)(r_edi+0x3d0u), r_edx);
    /* 0043709d: mov dword ptr [edi + 0x3c0], 0 */ W32((u32)(r_edi+0x3c0u), 0x0u);
    /* 004370a7: mov dword ptr [edi + 0x3c8], edx */ W32((u32)(r_edi+0x3c8u), r_edx);
    /* 004370ad: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004370b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004370b1: ret 4 */ FN_RET(0x00436e64); r_esp += 8; return;
}

