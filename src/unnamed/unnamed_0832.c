#include "protos.h"

void f_0083205c(void) /* sub_83205C */
{
    FN_ENTER(0x0083205c);
    /* 0083205c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083205f: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00832064: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00832066: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00832068: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 0083206d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083206e: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x832074u); call_ind(t); }
    /* 00832074: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00832079: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0083207b: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0083207d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083207f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00832080: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x832086u); call_ind(t); }
    /* 00832086: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083208b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0083208d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0083208f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00832091: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00832092: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x832098u); call_ind(t); }
    /* 00832098: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083209d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083209f: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 008320a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008320a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008320a4: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8320aau); call_ind(t); }
    /* 008320aa: fld dword ptr [0x98a58c] */ FPUSH(R_F32((u32)(0x98a58cu)));
    /* 008320b0: fld dword ptr [0xacc170] */ FPUSH(R_F32((u32)(0xacc170u)));
    /* 008320b6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008320b8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 008320bb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 008320bf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008320c4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008320c8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 008320cc: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 008320d0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 008320d3: fld dword ptr [0xacc174] */ FPUSH(R_F32((u32)(0xacc174u)));
    /* 008320d9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008320db: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008320df: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 008320e2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 008320e6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008320eb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008320ef: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 008320f3: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 008320f7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 008320fa: fld dword ptr [0xacc178] */ FPUSH(R_F32((u32)(0xacc178u)));
    /* 00832100: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00832102: movzx ecx, byte ptr [esp + 0x10] */ r_ecx = (u32)R8((u32)(r_esp+0x10u));
    /* 00832107: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0083210a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0083210e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00832113: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00832117: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0083211b: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0083211f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00832122: fld dword ptr [0xacc17c] */ FPUSH(R_F32((u32)(0xacc17cu)));
    /* 00832128: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083212a: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0083212d: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00832130: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 00832135: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00832137: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0083213a: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0083213c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0083213f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00832143: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00832148: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0083214c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00832150: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00832154: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00832157: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 0083215c: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0083215e: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00832163: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00832164: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00832166: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00832168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00832169: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83216fu); call_ind(t); }
    /* 0083216f: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00832175: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00832177: mov eax, 3 */ r_eax = 0x3u;
    /* 0083217c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083217d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083217e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00832180: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00832181: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x832187u); call_ind(t); }
    /* 00832187: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083218c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0083218e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00832190: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00832192: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00832194: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00832195: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x83219bu); call_ind(t); }
    /* 0083219b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083219d: call 0x830b08 */ r_esp -= 4; W32(r_esp, 0x8321a2u); f_00830b08();
    /* 008321a2: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008321a5: ret  */ FN_RET(0x0083205c); r_esp += 4; return;
}

void f_008321a8(void) /* sub_8321A8 */
{
    FN_ENTER(0x008321a8);
    /* 008321a8: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 008321ad: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008321af: je 0x8321c8 */ if (fZ) goto L_008321c8;
L_008321b1:; BB(0x008321b1);
    /* 008321b1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008321b3: call 0x835de8 */ r_esp -= 4; W32(r_esp, 0x8321b8u); f_00835de8();
    /* 008321b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008321ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008321bc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008321be: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x8321c3u); f_00835e1c();
    /* 008321c3: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
L_008321c8:; BB(0x008321c8);
    /* 008321c8: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008321ca: jne 0x8321d7 */ if (!fZ) goto L_008321d7;
L_008321cc:; BB(0x008321cc);
    /* 008321cc: mov eax, dword ptr [0xad9808] */ r_eax = R32((u32)(0xad9808u));
    /* 008321d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008321d3: je 0x8321d7 */ if (fZ) goto L_008321d7;
L_008321d5:; BB(0x008321d5);
    /* 008321d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x8321d7u); call_ind(t); }
L_008321d7:; BB(0x008321d7);
    /* 008321d7: ret  */ FN_RET(0x008321a8); r_esp += 4; return;
}

void f_008321d8(void) /* sub_8321D8 */
{
    FN_ENTER(0x008321d8);
    /* 008321d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008321d9: call 0x831df4 */ r_esp -= 4; W32(r_esp, 0x8321deu); f_00831df4();
    /* 008321de: call 0x8362e4 */ r_esp -= 4; W32(r_esp, 0x8321e3u); f_008362e4();
    /* 008321e3: mov eax, dword ptr [0xacc164] */ r_eax = R32((u32)(0xacc164u));
    /* 008321e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008321ea: je 0x8321f7 */ if (fZ) goto L_008321f7;
L_008321ec:; BB(0x008321ec);
    /* 008321ec: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008321f0: call 0x832298 */ r_esp -= 4; W32(r_esp, 0x8321f5u); f_00832298();
    /* 008321f5: jmp 0x832200 */ goto L_00832200;
L_008321f7:; BB(0x008321f7);
    /* 008321f7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008321fb: call 0x83220c */ r_esp -= 4; W32(r_esp, 0x832200u); f_0083220c();
L_00832200:; BB(0x00832200);
    /* 00832200: call 0x8321a8 */ r_esp -= 4; W32(r_esp, 0x832205u); f_008321a8();
    /* 00832205: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00832206: ret  */ FN_RET(0x008321d8); r_esp += 4; return;
}

void f_00832208(void) /* sub_832208 */
{
    FN_ENTER(0x00832208);
    /* 00832208: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083220c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083220d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083220e: mov edi, eax */ r_edi = r_eax;
    /* 00832210: call 0x831e2c */ r_esp -= 4; W32(r_esp, 0x832215u); f_00831e2c();
    /* 00832215: mov ebx, dword ptr [0xad9804] */ r_ebx = R32((u32)(0xad9804u));
    /* 0083221b: test bl, 3 */ {  u32 a = (u8)r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083221e: je 0x832225 */ if (fZ) goto L_00832225;
L_00832220:; BB(0x00832220);
    /* 00832220: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x832225u); f_0082f1d0();
L_00832225:; BB(0x00832225);
    /* 00832225: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00832228: je 0x832256 */ if (fZ) goto L_00832256;
L_0083222a:; BB(0x0083222a);
    /* 0083222a: mov edx, dword ptr [0xacc18c] */ r_edx = R32((u32)(0xacc18cu));
    /* 00832230: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00832233: jne 0x832256 */ if (!fZ) goto L_00832256;
L_00832235:; BB(0x00832235);
    /* 00832235: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00832237: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x83223cu); f_008362f0();
    /* 0083223c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083223d: call dword ptr [0xa2192c] */ { u32 t = R32((u32)(0xa2192cu)); r_esp -= 4; W32(r_esp, 0x832243u); call_ind(t); }
    /* 00832243: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00832244: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00832249: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x83224eu); f_008362f0();
    /* 0083224e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083224f: call dword ptr [0xa21934] */ { u32 t = R32((u32)(0xa21934u)); r_esp -= 4; W32(r_esp, 0x832255u); call_ind(t); }
    /* 00832255: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00832256:; BB(0x00832256);
    /* 00832256: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00832259: je 0x832293 */ if (fZ) goto L_00832293;
L_0083225b:; BB(0x0083225b);
    /* 0083225b: mov edx, dword ptr [0xacc18c] */ r_edx = R32((u32)(0xacc18cu));
    /* 00832261: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00832264: je 0x832281 */ if (fZ) goto L_00832281;
L_00832266:; BB(0x00832266);
    /* 00832266: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0083226b: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x832270u); f_008362f0();
    /* 00832270: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00832271: call dword ptr [0xa21930] */ { u32 t = R32((u32)(0xa21930u)); r_esp -= 4; W32(r_esp, 0x832277u); call_ind(t); }
    /* 00832277: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00832278: call dword ptr [0xa21934] */ { u32 t = R32((u32)(0xa21934u)); r_esp -= 4; W32(r_esp, 0x83227eu); call_ind(t); }
    /* 0083227e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00832281:; BB(0x00832281);
    /* 00832281: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00832286: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x83228bu); f_008362f0();
    /* 0083228b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083228c: call dword ptr [0xa21938] */ { u32 t = R32((u32)(0xa21938u)); r_esp -= 4; W32(r_esp, 0x832292u); call_ind(t); }
    /* 00832292: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00832293:; BB(0x00832293);
    /* 00832293: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00832294: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00832295: ret  */ FN_RET(0x00832208); r_esp += 4; return;
}

void f_0083220c(void)
{
    FN_ENTER(0x0083220c);
    /* 0083220c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083220d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083220e: mov edi, eax */ r_edi = r_eax;
    /* 00832210: call 0x831e2c */ r_esp -= 4; W32(r_esp, 0x832215u); f_00831e2c();
    /* 00832215: mov ebx, dword ptr [0xad9804] */ r_ebx = R32((u32)(0xad9804u));
    /* 0083221b: test bl, 3 */ {  u32 a = (u8)r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083221e: je 0x832225 */ if (fZ) goto L_00832225;
L_00832220:; BB(0x00832220);
    /* 00832220: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x832225u); f_0082f1d0();
L_00832225:; BB(0x00832225);
    /* 00832225: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00832228: je 0x832256 */ if (fZ) goto L_00832256;
L_0083222a:; BB(0x0083222a);
    /* 0083222a: mov edx, dword ptr [0xacc18c] */ r_edx = R32((u32)(0xacc18cu));
    /* 00832230: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00832233: jne 0x832256 */ if (!fZ) goto L_00832256;
L_00832235:; BB(0x00832235);
    /* 00832235: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00832237: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x83223cu); f_008362f0();
    /* 0083223c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083223d: call dword ptr [0xa2192c] */ { u32 t = R32((u32)(0xa2192cu)); r_esp -= 4; W32(r_esp, 0x832243u); call_ind(t); }
    /* 00832243: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00832244: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00832249: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x83224eu); f_008362f0();
    /* 0083224e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083224f: call dword ptr [0xa21934] */ { u32 t = R32((u32)(0xa21934u)); r_esp -= 4; W32(r_esp, 0x832255u); call_ind(t); }
    /* 00832255: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00832256:; BB(0x00832256);
    /* 00832256: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00832259: je 0x832293 */ if (fZ) goto L_00832293;
L_0083225b:; BB(0x0083225b);
    /* 0083225b: mov edx, dword ptr [0xacc18c] */ r_edx = R32((u32)(0xacc18cu));
    /* 00832261: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00832264: je 0x832281 */ if (fZ) goto L_00832281;
L_00832266:; BB(0x00832266);
    /* 00832266: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0083226b: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x832270u); f_008362f0();
    /* 00832270: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00832271: call dword ptr [0xa21930] */ { u32 t = R32((u32)(0xa21930u)); r_esp -= 4; W32(r_esp, 0x832277u); call_ind(t); }
    /* 00832277: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00832278: call dword ptr [0xa21934] */ { u32 t = R32((u32)(0xa21934u)); r_esp -= 4; W32(r_esp, 0x83227eu); call_ind(t); }
    /* 0083227e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00832281:; BB(0x00832281);
    /* 00832281: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00832286: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x83228bu); f_008362f0();
    /* 0083228b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083228c: call dword ptr [0xa21938] */ { u32 t = R32((u32)(0xa21938u)); r_esp -= 4; W32(r_esp, 0x832292u); call_ind(t); }
    /* 00832292: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00832293:; BB(0x00832293);
    /* 00832293: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00832294: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00832295: ret  */ FN_RET(0x0083220c); r_esp += 4; return;
}

void f_00832298(void) /* sub_832298 */
{
    FN_ENTER(0x00832298);
    /* 00832298: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00832299: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083229a: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083229d: mov ebp, eax */ r_ebp = r_eax;
    /* 0083229f: mov edi, dword ptr [0xad9804] */ r_edi = R32((u32)(0xad9804u));
    /* 008322a5: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008322ab: je 0x8322b2 */ if (fZ) goto L_008322b2;
L_008322ad:; BB(0x008322ad);
    /* 008322ad: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x8322b2u); f_0082f1d0();
L_008322b2:; BB(0x008322b2);
    /* 008322b2: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008322b8: jne 0x8322c0 */ if (!fZ) goto L_008322c0;
L_008322ba:; BB(0x008322ba);
    /* 008322ba: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008322bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008322be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008322bf: ret  */ FN_RET(0x00832298); r_esp += 4; return;
L_008322c0:; BB(0x008322c0);
    /* 008322c0: call 0x83205c */ r_esp -= 4; W32(r_esp, 0x8322c5u); f_0083205c();
    /* 008322c5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008322c7: je 0x832397 */ if (fZ) goto L_00832397;
L_008322cd:; BB(0x008322cd);
    /* 008322cd: mov ecx, dword ptr [0xacc184] */ r_ecx = R32((u32)(0xacc184u));
    /* 008322d3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008322d6: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 008322d9: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 008322dc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008322de: je 0x832391 */ if (fZ) goto L_00832391;
L_008322e4:; BB(0x008322e4);
    /* 008322e4: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008322e8: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 008322ec: mov ebp, edx */ r_ebp = r_edx;
    /* 008322ee: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 008322f2: mov ebx, eax */ r_ebx = r_eax;
    /* 008322f4: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
L_008322f8:; BB(0x008322f8);
    /* 008322f8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 008322fb: mov esi, dword ptr [ebp + 4] */ r_esi = R32((u32)(r_ebp+0x4u));
    /* 008322fe: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832300: je 0x832320 */ if (fZ) goto L_00832320;
L_00832302:; BB(0x00832302);
    /* 00832302: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00832306: mov ebp, eax */ r_ebp = r_eax;
L_00832308:; BB(0x00832308);
    /* 00832308: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00832309: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0083230c: call dword ptr [edx*4 + 0xa21908] */ { u32 t = R32((u32)(r_edx*4+0xa21908u)); r_esp -= 4; W32(r_esp, 0x832313u); call_ind(t); }
    /* 00832313: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00832314: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00832317: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0083231a: jne 0x832308 */ if (!fZ) goto L_00832308;
L_0083231c:; BB(0x0083231c);
    /* 0083231c: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
L_00832320:; BB(0x00832320);
    /* 00832320: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00832324: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 00832327: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00832329: movzx eax, byte ptr [ebx + esi*8] */ r_eax = (u32)R8((u32)(r_ebx+r_esi*8));
    /* 0083232d: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083232f: je 0x83234b */ if (fZ) goto L_0083234b;
L_00832331:; BB(0x00832331);
    /* 00832331: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00832337: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00832339: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0083233d: push dword ptr [eax*4 + 0xa218a0] */ { u32 v = R32((u32)(r_eax*4+0xa218a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832344: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00832345: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x83234bu); call_ind(t); }
L_0083234b:; BB(0x0083234b);
    /* 0083234b: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00832350: push dword ptr [ebx + esi*8 + 8] */ { u32 v = R32((u32)(r_ebx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832354: push dword ptr [ebx + esi*8 + 4] */ { u32 v = R32((u32)(r_ebx+r_esi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832358: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083235a: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0083235c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083235f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00832362: add ecx, -2 */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00832365: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00832366: push dword ptr [ebx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_ebx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083236a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083236c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0083236e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083236f: call dword ptr [edx + 0x124] */ { u32 t = R32((u32)(r_edx+0x124u)); r_esp -= 4; W32(r_esp, 0x832375u); call_ind(t); }
    /* 00832375: add ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00832378: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0083237b: jne 0x8322f8 */ if (!fZ) goto L_008322f8;
L_00832381:; BB(0x00832381);
    /* 00832381: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00832385: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00832389: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0083238d: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_00832391:; BB(0x00832391);
    /* 00832391: mov dword ptr [0xacc184], ecx */ W32((u32)(0xacc184u), r_ecx);
L_00832397:; BB(0x00832397);
    /* 00832397: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832399: je 0x8324a3 */ if (fZ) goto L_008324a3;
L_0083239f:; BB(0x0083239f);
    /* 0083239f: mov eax, dword ptr [0xacc184] */ r_eax = R32((u32)(0xacc184u));
    /* 008323a4: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 008323a7: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 008323aa: mov ebp, dword ptr [ebp + 0x18] */ r_ebp = R32((u32)(r_ebp+0x18u));
    /* 008323ad: mov edx, 1 */ r_edx = 0x1u;
    /* 008323b2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008323b4: je 0x83249e */ if (fZ) goto L_0083249e;
L_008323ba:; BB(0x008323ba);
    /* 008323ba: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008323be: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 008323c2: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008323c6: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 008323ca: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
L_008323ce:; BB(0x008323ce);
    /* 008323ce: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008323d2: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 008323d4: mov ebx, dword ptr [edi + 0x10] */ r_ebx = R32((u32)(r_edi+0x10u));
    /* 008323d7: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 008323da: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008323dc: movzx eax, byte ptr [eax + ebx*8] */ r_eax = (u32)R8((u32)(r_eax+r_ebx*8));
    /* 008323e0: mov dword ptr [0xacc188], 2 */ W32((u32)(0xacc188u), 0x2u);
    /* 008323ea: mov ecx, 2 */ r_ecx = 0x2u;
    /* 008323ef: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008323f1: je 0x832424 */ if (fZ) goto L_00832424;
L_008323f3:; BB(0x008323f3);
    /* 008323f3: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 008323f7: mov ebp, ebx */ r_ebp = r_ebx;
    /* 008323f9: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 008323fc: mov ebx, eax */ r_ebx = r_eax;
    /* 008323fe: mov edi, edx */ r_edi = r_edx;
L_00832400:; BB(0x00832400);
    /* 00832400: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00832401: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00832403: call dword ptr [ecx*4 + 0xa21908] */ { u32 t = R32((u32)(r_ecx*4+0xa21908u)); r_esp -= 4; W32(r_esp, 0x83240au); call_ind(t); }
    /* 0083240a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083240b: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083240e: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00832411: jne 0x832400 */ if (!fZ) goto L_00832400;
L_00832413:; BB(0x00832413);
    /* 00832413: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00832416: mov ecx, dword ptr [0xacc188] */ r_ecx = R32((u32)(0xacc188u));
    /* 0083241c: mov eax, ebx */ r_eax = r_ebx;
    /* 0083241e: mov ebx, ebp */ r_ebx = r_ebp;
    /* 00832420: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_00832424:; BB(0x00832424);
    /* 00832424: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832427: je 0x83242d */ if (fZ) goto L_0083242d;
L_00832429:; BB(0x00832429);
    /* 00832429: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
L_0083242d:; BB(0x0083242d);
    /* 0083242d: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00832431: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832433: je 0x83244f */ if (fZ) goto L_0083244f;
L_00832435:; BB(0x00832435);
    /* 00832435: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0083243b: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083243d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00832441: push dword ptr [eax*4 + 0xa218a0] */ { u32 v = R32((u32)(r_eax*4+0xa218a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832448: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00832449: call dword ptr [ecx + 0x130] */ { u32 t = R32((u32)(r_ecx+0x130u)); r_esp -= 4; W32(r_esp, 0x83244fu); call_ind(t); }
L_0083244f:; BB(0x0083244f);
    /* 0083244f: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00832453: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832455: je 0x832486 */ if (fZ) goto L_00832486;
L_00832457:; BB(0x00832457);
    /* 00832457: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 0083245d: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00832461: push dword ptr [edx + ebx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832465: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00832467: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0083246a: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083246e: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 00832470: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00832473: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832476: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00832477: push dword ptr [edx + ebx*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083247b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083247d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0083247f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00832480: call dword ptr [esi + 0x124] */ { u32 t = R32((u32)(r_esi+0x124u)); r_esp -= 4; W32(r_esp, 0x832486u); call_ind(t); }
L_00832486:; BB(0x00832486);
    /* 00832486: add edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00832489: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0083248c: jne 0x8323ce */ if (!fZ) goto L_008323ce;
L_00832492:; BB(0x00832492);
    /* 00832492: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00832496: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0083249a: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_0083249e:; BB(0x0083249e);
    /* 0083249e: mov dword ptr [0xacc184], eax */ W32((u32)(0xacc184u), r_eax);
L_008324a3:; BB(0x008324a3);
    /* 008324a3: call 0x82e514 */ r_esp -= 4; W32(r_esp, 0x8324a8u); f_0082e514();
    /* 008324a8: jmp 0x8322ba */ goto L_008322ba;
}

void f_008324b0(void) /* sub_8324B0 */
{
    FN_ENTER(0x008324b0);
    /* 008324b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008324b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008324b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008324b3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008324b6: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 008324ba: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008324bc: je 0x8325a5 */ if (fZ) goto L_008325a5;
L_008324c2:; BB(0x008324c2);
    /* 008324c2: mov edx, dword ptr [0xacc184] */ r_edx = R32((u32)(0xacc184u));
    /* 008324c8: mov eax, dword ptr [0xacc168] */ r_eax = R32((u32)(0xacc168u));
    /* 008324cd: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008324d0: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 008324d3: mov ebp, dword ptr [ebp + 0x10] */ r_ebp = R32((u32)(r_ebp+0x10u));
    /* 008324d6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008324d8: je 0x832577 */ if (fZ) goto L_00832577;
L_008324de:; BB(0x008324de);
    /* 008324de: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008324e2: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 008324e6: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008324ea: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 008324ee: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 008324f1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008324f3: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_008324f6:; BB(0x008324f6);
    /* 008324f6: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008324f8: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008324fb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008324fd: je 0x832512 */ if (fZ) goto L_00832512;
L_008324ff:; BB(0x008324ff);
    /* 008324ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00832500: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00832502: call dword ptr [eax*4 + 0xa218e4] */ { u32 t = R32((u32)(r_eax*4+0xa218e4u)); r_esp -= 4; W32(r_esp, 0x832509u); call_ind(t); }
    /* 00832509: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083250a: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083250d: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00832510: jne 0x8324ff */ if (!fZ) goto L_008324ff;
L_00832512:; BB(0x00832512);
    /* 00832512: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00832516: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0083251a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0083251e: mov edi, dword ptr [esi + 0x10] */ r_edi = R32((u32)(r_esi+0x10u));
    /* 00832521: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00832523: movzx ebx, byte ptr [ebx + edi*8] */ r_ebx = (u32)R8((u32)(r_ebx+r_edi*8));
    /* 00832527: lea eax, [eax + ebx] */ r_eax = (u32)(r_eax+r_ebx);
    /* 0083252a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083252c: je 0x83254b */ if (fZ) goto L_0083254b;
L_0083252e:; BB(0x0083252e);
    /* 0083252e: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00832534: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00832536: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0083253a: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0083253d: push dword ptr [eax + ebx*4 + 0xa217a0] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0xa217a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832544: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00832545: call dword ptr [ecx + 0x130] */ { u32 t = R32((u32)(r_ecx+0x130u)); r_esp -= 4; W32(r_esp, 0x83254bu); call_ind(t); }
L_0083254b:; BB(0x0083254b);
    /* 0083254b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0083254f: push dword ptr [eax + edi*8 + 4] */ { u32 v = R32((u32)(r_eax+r_edi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832553: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00832556: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832559: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0083255d: call dword ptr [edx + ebx*4 + 0xa21840] */ { u32 t = R32((u32)(r_edx+r_ebx*4+0xa21840u)); r_esp -= 4; W32(r_esp, 0x832564u); call_ind(t); }
    /* 00832564: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00832567: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083256a: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0083256d: jne 0x8324f6 */ if (!fZ) goto L_008324f6;
L_0083256f:; BB(0x0083256f);
    /* 0083256f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00832573: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_00832577:; BB(0x00832577);
    /* 00832577: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 0083257c: mov dword ptr [0xacc184], edx */ W32((u32)(0xacc184u), r_edx);
    /* 00832582: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00832584: je 0x8325a5 */ if (fZ) goto L_008325a5;
L_00832586:; BB(0x00832586);
    /* 00832586: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00832588: call 0x835de8 */ r_esp -= 4; W32(r_esp, 0x83258du); f_00835de8();
    /* 0083258d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083258f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00832591: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00832593: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x832598u); f_00835e1c();
    /* 00832598: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 0083259d: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008325a0: mov dword ptr [0xacc18c], eax */ W32((u32)(0xacc18cu), r_eax);
L_008325a5:; BB(0x008325a5);
    /* 008325a5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008325a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008325a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008325aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008325ab: ret  */ FN_RET(0x008324b0); r_esp += 4; return;
}

void f_008325ac(void) /* sub_8325AC */
{
    FN_ENTER(0x008325ac);
    /* 008325ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008325ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008325ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008325af: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008325b2: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 008325b6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008325b8: je 0x8326a1 */ if (fZ) goto L_008326a1;
L_008325be:; BB(0x008325be);
    /* 008325be: mov edx, dword ptr [0xacc184] */ r_edx = R32((u32)(0xacc184u));
    /* 008325c4: mov eax, dword ptr [0xacc168] */ r_eax = R32((u32)(0xacc168u));
    /* 008325c9: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008325cc: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 008325cf: mov ebp, dword ptr [ebp + 0x10] */ r_ebp = R32((u32)(r_ebp+0x10u));
    /* 008325d2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008325d4: je 0x832673 */ if (fZ) goto L_00832673;
L_008325da:; BB(0x008325da);
    /* 008325da: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008325de: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 008325e2: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008325e6: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 008325ea: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 008325ed: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008325ef: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_008325f2:; BB(0x008325f2);
    /* 008325f2: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008325f4: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008325f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008325f9: je 0x83260e */ if (fZ) goto L_0083260e;
L_008325fb:; BB(0x008325fb);
    /* 008325fb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008325fc: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008325fe: call dword ptr [eax*4 + 0xa218c0] */ { u32 t = R32((u32)(r_eax*4+0xa218c0u)); r_esp -= 4; W32(r_esp, 0x832605u); call_ind(t); }
    /* 00832605: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00832606: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00832609: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0083260c: jne 0x8325fb */ if (!fZ) goto L_008325fb;
L_0083260e:; BB(0x0083260e);
    /* 0083260e: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00832612: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00832616: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0083261a: mov edi, dword ptr [esi + 0x10] */ r_edi = R32((u32)(r_esi+0x10u));
    /* 0083261d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083261f: movzx ebx, byte ptr [ebx + edi*8] */ r_ebx = (u32)R8((u32)(r_ebx+r_edi*8));
    /* 00832623: lea eax, [eax + ebx] */ r_eax = (u32)(r_eax+r_ebx);
    /* 00832626: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832628: je 0x832647 */ if (fZ) goto L_00832647;
L_0083262a:; BB(0x0083262a);
    /* 0083262a: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00832630: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00832632: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00832636: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00832639: push dword ptr [eax + ebx*4 + 0xa217a0] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0xa217a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832640: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00832641: call dword ptr [ecx + 0x130] */ { u32 t = R32((u32)(r_ecx+0x130u)); r_esp -= 4; W32(r_esp, 0x832647u); call_ind(t); }
L_00832647:; BB(0x00832647);
    /* 00832647: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0083264b: push dword ptr [eax + edi*8 + 4] */ { u32 v = R32((u32)(r_eax+r_edi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083264f: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00832652: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832655: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00832659: call dword ptr [edx + ebx*4 + 0xa21840] */ { u32 t = R32((u32)(r_edx+r_ebx*4+0xa21840u)); r_esp -= 4; W32(r_esp, 0x832660u); call_ind(t); }
    /* 00832660: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00832663: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00832666: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00832669: jne 0x8325f2 */ if (!fZ) goto L_008325f2;
L_0083266b:; BB(0x0083266b);
    /* 0083266b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0083266f: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_00832673:; BB(0x00832673);
    /* 00832673: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00832678: mov dword ptr [0xacc184], edx */ W32((u32)(0xacc184u), r_edx);
    /* 0083267e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00832680: je 0x8326a1 */ if (fZ) goto L_008326a1;
L_00832682:; BB(0x00832682);
    /* 00832682: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00832684: call 0x835de8 */ r_esp -= 4; W32(r_esp, 0x832689u); f_00835de8();
    /* 00832689: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083268b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083268d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083268f: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x832694u); f_00835e1c();
    /* 00832694: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00832699: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0083269c: mov dword ptr [0xacc18c], eax */ W32((u32)(0xacc18cu), r_eax);
L_008326a1:; BB(0x008326a1);
    /* 008326a1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008326a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008326a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008326a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008326a7: ret  */ FN_RET(0x008325ac); r_esp += 4; return;
}

void f_008326a8(void) /* sub_8326A8 */
{
    FN_ENTER(0x008326a8);
    /* 008326a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008326a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008326aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008326ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008326ac: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008326af: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 008326b3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008326b5: je 0x83280a */ if (fZ) goto L_0083280a;
L_008326bb:; BB(0x008326bb);
    /* 008326bb: mov ecx, dword ptr [0xacc184] */ r_ecx = R32((u32)(0xacc184u));
    /* 008326c1: mov eax, dword ptr [0xacc168] */ r_eax = R32((u32)(0xacc168u));
    /* 008326c6: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 008326c9: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 008326cc: mov esi, dword ptr [esi + 0x18] */ r_esi = R32((u32)(r_esi+0x18u));
    /* 008326cf: mov edx, 1 */ r_edx = 0x1u;
    /* 008326d4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008326d6: je 0x8327dc */ if (fZ) goto L_008327dc;
L_008326dc:; BB(0x008326dc);
    /* 008326dc: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 008326e0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008326e4: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008326e8: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 008326ec: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 008326f0: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 008326f3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008326f5: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_008326f8:; BB(0x008326f8);
    /* 008326f8: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008326fc: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00832700: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00832702: mov ebp, dword ptr [ebx + 0x10] */ r_ebp = R32((u32)(r_ebx+0x10u));
    /* 00832705: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00832707: movzx esi, byte ptr [edx + ebp*8] */ r_esi = (u32)R8((u32)(r_edx+r_ebp*8));
    /* 0083270b: mov dword ptr [0xacc188], 2 */ W32((u32)(0xacc188u), 0x2u);
    /* 00832715: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 00832719: lea edi, [ecx + esi] */ r_edi = (u32)(r_ecx+r_esi);
    /* 0083271c: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0083271f: mov edx, 2 */ r_edx = 0x2u;
    /* 00832724: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832726: je 0x83274b */ if (fZ) goto L_0083274b;
L_00832728:; BB(0x00832728);
    /* 00832728: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0083272c: mov ebx, eax */ r_ebx = r_eax;
L_0083272e:; BB(0x0083272e);
    /* 0083272e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083272f: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00832731: call dword ptr [edx*4 + 0xa218c0] */ { u32 t = R32((u32)(r_edx*4+0xa218c0u)); r_esp -= 4; W32(r_esp, 0x832738u); call_ind(t); }
    /* 00832738: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00832739: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083273c: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0083273f: jne 0x83272e */ if (!fZ) goto L_0083272e;
L_00832741:; BB(0x00832741);
    /* 00832741: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00832745: mov edx, dword ptr [0xacc188] */ r_edx = R32((u32)(0xacc188u));
L_0083274b:; BB(0x0083274b);
    /* 0083274b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083274e: je 0x832754 */ if (fZ) goto L_00832754;
L_00832750:; BB(0x00832750);
    /* 00832750: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
L_00832754:; BB(0x00832754);
    /* 00832754: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00832758: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0083275c: mov edx, dword ptr [esi + ebp*8] */ r_edx = R32((u32)(r_esi+r_ebp*8));
    /* 0083275f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832761: mov eax, 0 */ r_eax = 0x0u;
    /* 00832766: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00832769: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083276f: mov edx, 0 */ r_edx = 0x0u;
    /* 00832774: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00832777: test edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832779: je 0x8327c4 */ if (fZ) goto L_008327c4;
L_0083277b:; BB(0x0083277b);
    /* 0083277b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0083277f: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832781: je 0x8327a4 */ if (fZ) goto L_008327a4;
L_00832783:; BB(0x00832783);
    /* 00832783: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00832789: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0083278c: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00832790: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00832792: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00832796: push dword ptr [eax + edx*4 + 0xa217a0] */ { u32 v = R32((u32)(r_eax+r_edx*4+0xa217a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083279d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083279e: call dword ptr [esi + 0x130] */ { u32 t = R32((u32)(r_esi+0x130u)); r_esp -= 4; W32(r_esp, 0x8327a4u); call_ind(t); }
L_008327a4:; BB(0x008327a4);
    /* 008327a4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008327a8: push dword ptr [eax + ebp*8 + 4] */ { u32 v = R32((u32)(r_eax+r_ebp*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008327ac: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008327af: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008327b2: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008327b6: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 008327ba: call dword ptr [edx + ecx*4 + 0xa21840] */ { u32 t = R32((u32)(r_edx+r_ecx*4+0xa21840u)); r_esp -= 4; W32(r_esp, 0x8327c1u); call_ind(t); }
    /* 008327c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008327c4:; BB(0x008327c4);
    /* 008327c4: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 008327c8: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008327cb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008327ce: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008327d2: jne 0x8326f8 */ if (!fZ) goto L_008326f8;
L_008327d8:; BB(0x008327d8);
    /* 008327d8: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
L_008327dc:; BB(0x008327dc);
    /* 008327dc: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 008327e1: mov dword ptr [0xacc184], ecx */ W32((u32)(0xacc184u), r_ecx);
    /* 008327e7: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008327e9: je 0x83280a */ if (fZ) goto L_0083280a;
L_008327eb:; BB(0x008327eb);
    /* 008327eb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008327ed: call 0x835de8 */ r_esp -= 4; W32(r_esp, 0x8327f2u); f_00835de8();
    /* 008327f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008327f4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008327f6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008327f8: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x8327fdu); f_00835e1c();
    /* 008327fd: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00832802: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00832805: mov dword ptr [0xacc18c], eax */ W32((u32)(0xacc18cu), r_eax);
L_0083280a:; BB(0x0083280a);
    /* 0083280a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083280d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083280e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083280f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00832810: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00832811: ret  */ FN_RET(0x008326a8); r_esp += 4; return;
}

void f_00832814(void) /* sub_832814 */
{
    FN_ENTER(0x00832814);
    /* 00832814: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00832815: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00832816: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00832817: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00832818: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083281b: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0083281f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832821: je 0x83296b */ if (fZ) goto L_0083296b;
L_00832827:; BB(0x00832827);
    /* 00832827: mov ecx, dword ptr [0xacc184] */ r_ecx = R32((u32)(0xacc184u));
    /* 0083282d: mov eax, dword ptr [0xacc168] */ r_eax = R32((u32)(0xacc168u));
    /* 00832832: mov ebp, dword ptr [ebx + 0x14] */ r_ebp = R32((u32)(r_ebx+0x14u));
    /* 00832835: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 00832838: mov ebx, dword ptr [ebx + 0x18] */ r_ebx = R32((u32)(r_ebx+0x18u));
    /* 0083283b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083283d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083283f: je 0x83293d */ if (fZ) goto L_0083293d;
L_00832845:; BB(0x00832845);
    /* 00832845: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00832849: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0083284d: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00832851: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00832855: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00832858: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083285a: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0083285d:; BB(0x0083285d);
    /* 0083285d: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00832861: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00832865: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00832868: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0083286b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083286d: movzx edi, byte ptr [edx + esi*8] */ r_edi = (u32)R8((u32)(r_edx+r_esi*8));
    /* 00832871: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00832874: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00832878: mov dword ptr [0xacc188], 2 */ W32((u32)(0xacc188u), 0x2u);
    /* 00832882: lea edi, [ecx + edi] */ r_edi = (u32)(r_ecx+r_edi);
    /* 00832885: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0083288a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083288c: je 0x8328bc */ if (fZ) goto L_008328bc;
L_0083288e:; BB(0x0083288e);
    /* 0083288e: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00832892: mov ebx, edx */ r_ebx = r_edx;
    /* 00832894: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00832898: mov ebp, eax */ r_ebp = r_eax;
L_0083289a:; BB(0x0083289a);
    /* 0083289a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083289b: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0083289e: call dword ptr [ecx*4 + 0xa218c0] */ { u32 t = R32((u32)(r_ecx*4+0xa218c0u)); r_esp -= 4; W32(r_esp, 0x8328a5u); call_ind(t); }
    /* 008328a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008328a6: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008328a9: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 008328ac: jne 0x83289a */ if (!fZ) goto L_0083289a;
L_008328ae:; BB(0x008328ae);
    /* 008328ae: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 008328b2: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 008328b6: mov ecx, dword ptr [0xacc188] */ r_ecx = R32((u32)(0xacc188u));
L_008328bc:; BB(0x008328bc);
    /* 008328bc: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008328bf: je 0x8328c5 */ if (fZ) goto L_008328c5;
L_008328c1:; BB(0x008328c1);
    /* 008328c1: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
L_008328c5:; BB(0x008328c5);
    /* 008328c5: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008328c9: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008328cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008328cf: mov edx, dword ptr [ecx + esi*8] */ r_edx = R32((u32)(r_ecx+r_esi*8));
    /* 008328d2: mov eax, 0 */ r_eax = 0x0u;
    /* 008328d7: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008328da: and edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008328e0: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008328e2: je 0x83292d */ if (fZ) goto L_0083292d;
L_008328e4:; BB(0x008328e4);
    /* 008328e4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008328e8: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008328ea: je 0x83290d */ if (fZ) goto L_0083290d;
L_008328ec:; BB(0x008328ec);
    /* 008328ec: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 008328f2: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 008328f5: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 008328f9: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 008328fd: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 008328ff: push dword ptr [eax + edx*4 + 0xa217a0] */ { u32 v = R32((u32)(r_eax+r_edx*4+0xa217a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832906: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00832907: call dword ptr [edi + 0x130] */ { u32 t = R32((u32)(r_edi+0x130u)); r_esp -= 4; W32(r_esp, 0x83290du); call_ind(t); }
L_0083290d:; BB(0x0083290d);
    /* 0083290d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00832911: push dword ptr [eax + esi*8 + 4] */ { u32 v = R32((u32)(r_eax+r_esi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832915: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00832918: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083291b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0083291f: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00832923: call dword ptr [edx + ecx*4 + 0xa21840] */ { u32 t = R32((u32)(r_edx+r_ecx*4+0xa21840u)); r_esp -= 4; W32(r_esp, 0x83292au); call_ind(t); }
    /* 0083292a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0083292d:; BB(0x0083292d);
    /* 0083292d: add ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00832930: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00832933: jne 0x83285d */ if (!fZ) goto L_0083285d;
L_00832939:; BB(0x00832939);
    /* 00832939: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
L_0083293d:; BB(0x0083293d);
    /* 0083293d: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00832942: mov dword ptr [0xacc184], ecx */ W32((u32)(0xacc184u), r_ecx);
    /* 00832948: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083294a: je 0x83296b */ if (fZ) goto L_0083296b;
L_0083294c:; BB(0x0083294c);
    /* 0083294c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083294e: call 0x835de8 */ r_esp -= 4; W32(r_esp, 0x832953u); f_00835de8();
    /* 00832953: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00832955: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00832957: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00832959: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x83295eu); f_00835e1c();
    /* 0083295e: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00832963: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00832966: mov dword ptr [0xacc18c], eax */ W32((u32)(0xacc18cu), r_eax);
L_0083296b:; BB(0x0083296b);
    /* 0083296b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083296e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083296f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00832970: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00832971: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00832972: ret  */ FN_RET(0x00832814); r_esp += 4; return;
}

void f_00832974(void) /* sub_832974 */
{
    FN_ENTER(0x00832974);
    /* 00832974: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00832975: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00832978: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0083297c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083297e: je 0x832a4a */ if (fZ) goto L_00832a4a;
L_00832984:; BB(0x00832984);
    /* 00832984: mov ecx, dword ptr [0xacc184] */ r_ecx = R32((u32)(0xacc184u));
    /* 0083298a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0083298d: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00832990: mov ebp, dword ptr [ebp + 0x10] */ r_ebp = R32((u32)(r_ebp+0x10u));
    /* 00832993: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832995: je 0x832a44 */ if (fZ) goto L_00832a44;
L_0083299b:; BB(0x0083299b);
    /* 0083299b: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0083299f: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 008329a3: mov ebx, eax */ r_ebx = r_eax;
    /* 008329a5: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 008329a9: mov esi, edx */ r_esi = r_edx;
    /* 008329ab: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
L_008329af:; BB(0x008329af);
    /* 008329af: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008329b1: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 008329b4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008329b6: je 0x8329d3 */ if (fZ) goto L_008329d3;
L_008329b8:; BB(0x008329b8);
    /* 008329b8: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 008329bb: mov esi, eax */ r_esi = r_eax;
L_008329bd:; BB(0x008329bd);
    /* 008329bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008329be: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008329c0: call dword ptr [edx*4 + 0xa21908] */ { u32 t = R32((u32)(r_edx*4+0xa21908u)); r_esp -= 4; W32(r_esp, 0x8329c7u); call_ind(t); }
    /* 008329c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008329c8: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008329cb: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 008329ce: jne 0x8329bd */ if (!fZ) goto L_008329bd;
L_008329d0:; BB(0x008329d0);
    /* 008329d0: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_008329d3:; BB(0x008329d3);
    /* 008329d3: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008329d7: mov edi, dword ptr [esi + 0x10] */ r_edi = R32((u32)(r_esi+0x10u));
    /* 008329da: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008329dc: movzx eax, byte ptr [ebx + edi*8] */ r_eax = (u32)R8((u32)(r_ebx+r_edi*8));
    /* 008329e0: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008329e2: je 0x8329fe */ if (fZ) goto L_008329fe;
L_008329e4:; BB(0x008329e4);
    /* 008329e4: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 008329ea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008329ec: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 008329f0: push dword ptr [eax*4 + 0xa218a0] */ { u32 v = R32((u32)(r_eax*4+0xa218a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008329f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008329f8: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x8329feu); call_ind(t); }
L_008329fe:; BB(0x008329fe);
    /* 008329fe: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00832a03: push dword ptr [ebx + edi*8 + 8] */ { u32 v = R32((u32)(r_ebx+r_edi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832a07: push dword ptr [ebx + edi*8 + 4] */ { u32 v = R32((u32)(r_ebx+r_edi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832a0b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00832a0d: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 00832a0f: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832a12: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 00832a15: add ecx, -2 */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00832a18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00832a19: push dword ptr [ebx + edi*8 + 0xc] */ { u32 v = R32((u32)(r_ebx+r_edi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00832a1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00832a1f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00832a21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00832a22: call dword ptr [edx + 0x124] */ { u32 t = R32((u32)(r_edx+0x124u)); r_esp -= 4; W32(r_esp, 0x832a28u); call_ind(t); }
    /* 00832a28: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00832a2b: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00832a2e: jne 0x8329af */ if (!fZ) goto L_008329af;
L_00832a34:; BB(0x00832a34);
    /* 00832a34: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00832a38: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00832a3c: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00832a40: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
L_00832a44:; BB(0x00832a44);
    /* 00832a44: mov dword ptr [0xacc184], ecx */ W32((u32)(0xacc184u), r_ecx);
L_00832a4a:; BB(0x00832a4a);
    /* 00832a4a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00832a4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00832a4e: ret  */ FN_RET(0x00832974); r_esp += 4; return;
}

void f_00832a50(void) /* sub_832A50 */
{
    FN_ENTER(0x00832a50);
    /* 00832a50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00832a51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00832a52: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00832a55: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00832a59: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832a5b: je 0x832b60 */ if (fZ) goto L_00832b60;
L_00832a61:; BB(0x00832a61);
    /* 00832a61: mov ecx, dword ptr [0xacc184] */ r_ecx = R32((u32)(0xacc184u));
    /* 00832a67: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 00832a6a: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00832a6d: mov ebp, dword ptr [ebp + 0x18] */ r_ebp = R32((u32)(r_ebp+0x18u));
    /* 00832a70: mov edx, 1 */ r_edx = 0x1u;
    /* 00832a75: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832a77: je 0x832b5a */ if (fZ) goto L_00832b5a;
L_00832a7d:; BB(0x00832a7d);
    /* 00832a7d: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00832a81: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00832a85: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00832a89: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00832a8d: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
L_00832a91:; BB(0x00832a91);
    /* 00832a91: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00832a95: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00832a97: mov esi, dword ptr [edi + 0x10] */ r_esi = R32((u32)(r_edi+0x10u));
    /* 00832a9a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00832a9c: movzx ebx, byte ptr [edx + esi*8] */ r_ebx = (u32)R8((u32)(r_edx+r_esi*8));
    /* 00832aa0: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00832aa3: mov dword ptr [0xacc188], 2 */ W32((u32)(0xacc188u), 0x2u);
    /* 00832aad: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00832ab2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832ab4: je 0x832ae1 */ if (fZ) goto L_00832ae1;
L_00832ab6:; BB(0x00832ab6);
    /* 00832ab6: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00832aba: mov ebp, edx */ r_ebp = r_edx;
    /* 00832abc: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00832abf: mov edi, eax */ r_edi = r_eax;
L_00832ac1:; BB(0x00832ac1);
    /* 00832ac1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00832ac2: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00832ac4: call dword ptr [ecx*4 + 0xa21908] */ { u32 t = R32((u32)(r_ecx*4+0xa21908u)); r_esp -= 4; W32(r_esp, 0x832acbu); call_ind(t); }
    /* 00832acb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00832acc: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00832acf: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00832ad2: jne 0x832ac1 */ if (!fZ) goto L_00832ac1;
L_00832ad4:; BB(0x00832ad4);
    /* 00832ad4: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00832ad8: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00832adb: mov ecx, dword ptr [0xacc188] */ r_ecx = R32((u32)(0xacc188u));
L_00832ae1:; BB(0x00832ae1);
    /* 00832ae1: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832ae4: je 0x832aea */ if (fZ) goto L_00832aea;
L_00832ae6:; BB(0x00832ae6);
    /* 00832ae6: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_00832aea:; BB(0x00832aea);
    /* 00832aea: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00832aee: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832af0: je 0x832b0b */ if (fZ) goto L_00832b0b;
L_00832af2:; BB(0x00832af2);
    /* 00832af2: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00832af7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00832af9: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00832afd: push dword ptr [ebx*4 + 0xa218a0] */ { u32 v = R32((u32)(r_ebx*4+0xa218a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832b04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00832b05: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x832b0bu); call_ind(t); }
L_00832b0b:; BB(0x00832b0b);
    /* 00832b0b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00832b0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832b11: je 0x832b42 */ if (fZ) goto L_00832b42;
L_00832b13:; BB(0x00832b13);
    /* 00832b13: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00832b19: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00832b1d: push dword ptr [edx + esi*8 + 8] */ { u32 v = R32((u32)(r_edx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832b21: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00832b23: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00832b26: push dword ptr [edx + esi*8 + 4] */ { u32 v = R32((u32)(r_edx+r_esi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832b2a: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 00832b2c: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00832b2f: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00832b33: push dword ptr [edx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00832b37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00832b39: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00832b3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00832b3c: call dword ptr [ebx + 0x124] */ { u32 t = R32((u32)(r_ebx+0x124u)); r_esp -= 4; W32(r_esp, 0x832b42u); call_ind(t); }
L_00832b42:; BB(0x00832b42);
    /* 00832b42: add edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00832b45: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00832b48: jne 0x832a91 */ if (!fZ) goto L_00832a91;
L_00832b4e:; BB(0x00832b4e);
    /* 00832b4e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00832b52: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00832b56: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
L_00832b5a:; BB(0x00832b5a);
    /* 00832b5a: mov dword ptr [0xacc184], ecx */ W32((u32)(0xacc184u), r_ecx);
L_00832b60:; BB(0x00832b60);
    /* 00832b60: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00832b63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00832b64: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00832b65: ret  */ FN_RET(0x00832a50); r_esp += 4; return;
}

void f_00832b68(void) /* sub_832B68 */
{
    FN_ENTER(0x00832b68);
    /* 00832b68: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00832b69: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00832b6d: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00832b72: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00832b74: jne 0x832bac */ if (!fZ) goto L_00832bac;
L_00832b76:; BB(0x00832b76);
    /* 00832b76: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00832b7c: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00832b7e: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00832b81: push dword ptr [eax*4 + 0xa21950] */ { u32 v = R32((u32)(r_eax*4+0xa21950u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832b88: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00832b8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00832b8b: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x832b91u); call_ind(t); }
    /* 00832b91: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00832b97: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00832b99: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00832b9c: push dword ptr [eax*4 + 0xa21950] */ { u32 v = R32((u32)(r_eax*4+0xa21950u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832ba3: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00832ba5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00832ba6: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x832bacu); call_ind(t); }
L_00832bac:; BB(0x00832bac);
    /* 00832bac: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00832baf: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 00832bb2: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832bb5: mov edx, 0 */ r_edx = 0x0u;
    /* 00832bba: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00832bbd: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832bc0: mov eax, 0 */ r_eax = 0x0u;
    /* 00832bc5: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00832bc8: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832bcb: mov ecx, 0 */ r_ecx = 0x0u;
    /* 00832bd0: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00832bd3: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00832bd5: test eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00832bd7: mov eax, 0 */ r_eax = 0x0u;
    /* 00832bdc: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00832bdf: mov dword ptr [0xacc188], eax */ W32((u32)(0xacc188u), r_eax);
    /* 00832be4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00832be5: ret  */ FN_RET(0x00832b68); r_esp += 4; return;
}

void f_00832be8(void) /* sub_832BE8 */
{
    FN_ENTER(0x00832be8);
    /* 00832be8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00832bec: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00832bef: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00832bf2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832bf5: mov edx, 0 */ r_edx = 0x0u;
    /* 00832bfa: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00832bfd: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832c00: mov eax, 0 */ r_eax = 0x0u;
    /* 00832c05: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00832c08: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832c0b: mov ecx, 0 */ r_ecx = 0x0u;
    /* 00832c10: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00832c13: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00832c15: test eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00832c17: mov eax, 0 */ r_eax = 0x0u;
    /* 00832c1c: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00832c1f: mov dword ptr [0xacc188], eax */ W32((u32)(0xacc188u), r_eax);
    /* 00832c24: ret  */ FN_RET(0x00832be8); r_esp += 4; return;
}

void f_00832c28(void) /* sub_832C28 */
{
    FN_ENTER(0x00832c28);
    /* 00832c28: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00832c2c: mov ecx, dword ptr [0xacca80] */ r_ecx = R32((u32)(0xacca80u));
    /* 00832c32: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00832c35: call 0x839838 */ r_esp -= 4; W32(r_esp, 0x832c3au); f_00839838();
    /* 00832c3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00832c3c: jne 0x832c48 */ if (!fZ) goto L_00832c48;
L_00832c3e:; BB(0x00832c3e);
    /* 00832c3e: mov dword ptr [0xacc188], 0 */ W32((u32)(0xacc188u), 0x0u);
L_00832c48:; BB(0x00832c48);
    /* 00832c48: ret  */ FN_RET(0x00832c28); r_esp += 4; return;
}

void f_00832c4c(void) /* sub_832C4C */
{
    FN_ENTER(0x00832c4c);
    /* 00832c4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00832c4d: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00832c51: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00832c54: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00832c5a: push dword ptr [eax*4 + 0xa21944] */ { u32 v = R32((u32)(r_eax*4+0xa21944u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832c61: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00832c63: push dword ptr [0xacca80] */ { u32 v = R32((u32)(0xacca80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832c69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00832c6a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00832c6c: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x832c72u); call_ind(t); }
    /* 00832c72: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00832c77: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00832c79: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00832c7c: push dword ptr [ebx*4 + 0xa21944] */ { u32 v = R32((u32)(r_ebx*4+0xa21944u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832c83: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00832c85: push dword ptr [0xacca80] */ { u32 v = R32((u32)(0xacca80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832c8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00832c8c: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x832c92u); call_ind(t); }
    /* 00832c92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00832c93: ret  */ FN_RET(0x00832c4c); r_esp += 4; return;
}

void f_00832c94(void) /* sub_832C94 */
{
    FN_ENTER(0x00832c94);
    /* 00832c94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00832c95: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00832c98: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00832c9c: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00832ca1: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00832ca3: je 0x832dc0 */ if (fZ) goto L_00832dc0;
L_00832ca9:; BB(0x00832ca9);
    /* 00832ca9: fld dword ptr [0x98a588] */ FPUSH(R_F32((u32)(0x98a588u)));
    /* 00832caf: movzx eax, word ptr [esi + 6] */ r_eax = (u32)R16((u32)(r_esi+0x6u));
    /* 00832cb3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00832cb6: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00832cb9: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00832cbc: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00832cbf: fadd dword ptr [eax*4 + 0x98a548] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a548u));
    /* 00832cc6: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00832cc8: fstp dword ptr [0xacc130] */ W_F32((u32)(0xacc130u), ST(0)); FPOP();
    /* 00832cce: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00832cd1: shr edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00832cd4: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00832cd7: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00832cdb: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00832cdf: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00832ce2: fadd dword ptr [edx*4 + 0x98a548] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x98a548u));
    /* 00832ce9: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00832ceb: fstp dword ptr [0xacc134] */ W_F32((u32)(0xacc134u), ST(0)); FPOP();
    /* 00832cf1: movzx ecx, byte ptr [esi + 4] */ r_ecx = (u32)R8((u32)(r_esi+0x4u));
    /* 00832cf5: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00832cf9: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00832cfd: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00832d00: fadd dword ptr [ecx*4 + 0x98a548] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x98a548u));
    /* 00832d07: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00832d09: fstp dword ptr [0xacc138] */ W_F32((u32)(0xacc138u), ST(0)); FPOP();
    /* 00832d0f: movzx eax, byte ptr [esi + 7] */ r_eax = (u32)R8((u32)(r_esi+0x7u));
    /* 00832d13: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00832d17: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00832d1b: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00832d1e: fadd dword ptr [eax*4 + 0x98a548] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a548u));
    /* 00832d25: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00832d27: fstp dword ptr [0xacc13c] */ W_F32((u32)(0xacc13cu), ST(0)); FPOP();
    /* 00832d2d: movzx eax, word ptr [esi + 0xa] */ r_eax = (u32)R16((u32)(r_esi+0xau));
    /* 00832d31: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00832d34: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00832d38: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00832d3c: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00832d3f: fadd dword ptr [eax*4 + 0x98a548] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a548u));
    /* 00832d46: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00832d48: fstp dword ptr [0xacc120] */ W_F32((u32)(0xacc120u), ST(0)); FPOP();
    /* 00832d4e: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00832d51: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00832d54: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00832d57: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00832d5b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00832d5f: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00832d62: fadd dword ptr [eax*4 + 0x98a548] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a548u));
    /* 00832d69: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00832d6b: fstp dword ptr [0xacc124] */ W_F32((u32)(0xacc124u), ST(0)); FPOP();
    /* 00832d71: movzx eax, byte ptr [esi + 8] */ r_eax = (u32)R8((u32)(r_esi+0x8u));
    /* 00832d75: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00832d79: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00832d7d: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00832d80: fadd dword ptr [eax*4 + 0x98a548] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a548u));
    /* 00832d87: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00832d89: fstp dword ptr [0xacc128] */ W_F32((u32)(0xacc128u), ST(0)); FPOP();
    /* 00832d8f: movzx eax, byte ptr [esi + 0xb] */ r_eax = (u32)R8((u32)(r_esi+0xbu));
    /* 00832d93: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00832d97: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00832d9b: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00832d9e: fadd dword ptr [eax*4 + 0x98a548] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a548u));
    /* 00832da5: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00832da7: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00832dac: fstp dword ptr [0xacc12c] */ W_F32((u32)(0xacc12cu), ST(0)); FPOP();
    /* 00832db2: push 0xacc120 */ { u32 v = 0xacc120u; r_esp -= 4; W32(r_esp, v); }
    /* 00832db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00832db8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00832dba: call dword ptr [edx + 0xa8] */ { u32 t = R32((u32)(r_edx+0xa8u)); r_esp -= 4; W32(r_esp, 0x832dc0u); call_ind(t); }
L_00832dc0:; BB(0x00832dc0);
    /* 00832dc0: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00832dc5: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00832dc7: je 0x832f84 */ if (fZ) goto L_00832f84;
L_00832dcd:; BB(0x00832dcd);
    /* 00832dcd: fld dword ptr [0x98a588] */ FPUSH(R_F32((u32)(0x98a588u)));
    /* 00832dd3: fld dword ptr [0x98a584] */ FPUSH(R_F32((u32)(0x98a584u)));
    /* 00832dd9: fld dword ptr [0x98a580] */ FPUSH(R_F32((u32)(0x98a580u)));
    /* 00832ddf: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00832de2: mov ecx, edx */ r_ecx = r_edx;
    /* 00832de4: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00832de7: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00832dea: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00832dee: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00832df2: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00832df5: fadd dword ptr [ecx*4 + 0x98a548] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x98a548u));
    /* 00832dfc: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00832dfe: fadd dword ptr [0xaf0374] */ ST(0) = ST(0) + R_F32((u32)(0xaf0374u));
    /* 00832e04: mov esi, edx */ r_esi = r_edx;
    /* 00832e06: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00832e08: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00832e0a: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00832e0d: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00832e13: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00832e17: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00832e1b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00832e1c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00832e1e: jae 0x832e22 */ if (!fC) goto L_00832e22;
L_00832e20:; BB(0x00832e20);
    /* 00832e20: fst st(1) */ ST(1) = ST(0);
L_00832e22:; BB(0x00832e22);
    /* 00832e22: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00832e24: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00832e26: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00832e28: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00832e2b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00832e2d: fadd dword ptr [esi*4 + 0x98a548] */ ST(0) = ST(0) + R_F32((u32)(r_esi*4+0x98a548u));
    /* 00832e34: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 00832e36: fadd dword ptr [0xaf0378] */ ST(0) = ST(0) + R_F32((u32)(0xaf0378u));
    /* 00832e3c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00832e3d: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00832e3f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00832e41: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00832e43: jae 0x832e47 */ if (!fC) goto L_00832e47;
L_00832e45:; BB(0x00832e45);
    /* 00832e45: fst st(1) */ ST(1) = ST(0);
L_00832e47:; BB(0x00832e47);
    /* 00832e47: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00832e48: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00832e4a: jae 0x832e4e */ if (!fC) goto L_00832e4e;
L_00832e4c:; BB(0x00832e4c);
    /* 00832e4c: fst st(3) */ ST(3) = ST(0);
L_00832e4e:; BB(0x00832e4e);
    /* 00832e4e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00832e50: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00832e52: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00832e54: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00832e55: jae 0x832e59 */ if (!fC) goto L_00832e59;
L_00832e57:; BB(0x00832e57);
    /* 00832e57: fst st(3) */ ST(3) = ST(0);
L_00832e59:; BB(0x00832e59);
    /* 00832e59: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00832e5c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00832e60: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00832e64: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00832e67: fadd dword ptr [eax*4 + 0x98a548] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a548u));
    /* 00832e6e: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 00832e70: fadd dword ptr [0xaf037c] */ ST(0) = ST(0) + R_F32((u32)(0xaf037cu));
    /* 00832e76: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00832e78: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00832e7a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00832e7b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00832e7d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00832e7f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00832e81: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00832e83: jae 0x832e87 */ if (!fC) goto L_00832e87;
L_00832e85:; BB(0x00832e85);
    /* 00832e85: fst st(2) */ ST(2) = ST(0);
L_00832e87:; BB(0x00832e87);
    /* 00832e87: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00832e88: jbe 0x832e94 */ if ((fC||fZ)) goto L_00832e94;
L_00832e8a:; BB(0x00832e8a);
    /* 00832e8a: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00832e8c: fld dword ptr [0x98a580] */ FPUSH(R_F32((u32)(0x98a580u)));
    /* 00832e92: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_00832e94:; BB(0x00832e94);
    /* 00832e94: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00832e96: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00832e98: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00832e9a: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00832e9c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00832e9e: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00832ea0: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00832ea3: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00832ea7: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00832eab: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00832eae: fadd dword ptr [edx*4 + 0x98a548] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x98a548u));
    /* 00832eb5: fdiv st(6) */ ST(0) = ST(0) / ST(6);
    /* 00832eb7: fadd dword ptr [0xaf0370] */ ST(0) = ST(0) + R_F32((u32)(0xaf0370u));
    /* 00832ebd: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 00832ebf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00832ec1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00832ec2: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00832ec4: jae 0x832ec8 */ if (!fC) goto L_00832ec8;
L_00832ec6:; BB(0x00832ec6);
    /* 00832ec6: fst st(4) */ ST(4) = ST(0);
L_00832ec8:; BB(0x00832ec8);
    /* 00832ec8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00832eca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00832ecc: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00832ece: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00832ed0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00832ed1: jae 0x832ed5 */ if (!fC) goto L_00832ed5;
L_00832ed3:; BB(0x00832ed3);
    /* 00832ed3: fst st(3) */ ST(3) = ST(0);
L_00832ed5:; BB(0x00832ed5);
    /* 00832ed5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00832ed7: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00832ed9: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00832edb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00832edd: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00832ee1: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00832ee6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00832eeb: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00832eef: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00832ef3: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00832ef7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00832efb: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00832eff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00832f01: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00832f05: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00832f0a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00832f0f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00832f13: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00832f17: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00832f1b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00832f1f: movzx ecx, byte ptr [esp + 0x20] */ r_ecx = (u32)R8((u32)(r_esp+0x20u));
    /* 00832f24: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00832f28: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00832f2d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00832f32: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00832f36: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00832f3a: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00832f3e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00832f42: movzx esi, byte ptr [esp + 0x20] */ r_esi = (u32)R8((u32)(r_esp+0x20u));
    /* 00832f47: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00832f4b: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00832f50: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00832f55: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00832f59: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00832f5d: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00832f61: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00832f65: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 00832f6a: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00832f6d: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00832f70: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00832f72: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00832f75: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00832f77: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00832f79: mov dword ptr [0xacc180], edx */ W32((u32)(0xacc180u), r_edx);
    /* 00832f7f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00832f82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00832f83: ret  */ FN_RET(0x00832c94); r_esp += 4; return;
L_00832f84:; BB(0x00832f84);
    /* 00832f84: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00832f86: jne 0x832f90 */ if (!fZ) goto L_00832f90;
L_00832f88:; BB(0x00832f88);
    /* 00832f88: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00832f8b: mov dword ptr [0xacc16c], eax */ W32((u32)(0xacc16cu), r_eax);
L_00832f90:; BB(0x00832f90);
    /* 00832f90: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00832f93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00832f94: ret  */ FN_RET(0x00832c94); r_esp += 4; return;
}

void f_00832f98(void) /* sub_832F98 */
{
    FN_ENTER(0x00832f98);
    /* 00832f98: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00832f9c: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00832fa2: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00832fa5: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00832fa7: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 00832fac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00832fad: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x832fb3u); call_ind(t); }
    /* 00832fb3: ret  */ FN_RET(0x00832f98); r_esp += 4; return;
}

void f_00832fb4(void) /* sub_832FB4 */
{
    FN_ENTER(0x00832fb4);
    /* 00832fb4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00832fb8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00832fbb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00832fbd: jne 0x832fe3 */ if (!fZ) goto L_00832fe3;
L_00832fbf:; BB(0x00832fbf);
    /* 00832fbf: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00832fc4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00832fc6: je 0x833014 */ if (fZ) goto L_00833014;
L_00832fc8:; BB(0x00832fc8);
    /* 00832fc8: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00832fcb: mov dword ptr [0xacc18c], eax */ W32((u32)(0xacc18cu), r_eax);
    /* 00832fd0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00832fd2: call 0x835de8 */ r_esp -= 4; W32(r_esp, 0x832fd7u); f_00835de8();
    /* 00832fd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00832fd9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00832fdb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00832fdd: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x832fe2u); f_00835e1c();
    /* 00832fe2: ret  */ FN_RET(0x00832fb4); r_esp += 4; return;
L_00832fe3:; BB(0x00832fe3);
    /* 00832fe3: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00832fe8: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00832feb: mov dword ptr [0xacc18c], eax */ W32((u32)(0xacc18cu), r_eax);
    /* 00832ff0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00832ff2: mov edx, 0xa21800 */ r_edx = 0xa21800u;
    /* 00832ff7: call 0x835db4 */ r_esp -= 4; W32(r_esp, 0x832ffcu); f_00835db4();
    /* 00832ffc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00832ffe: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00833000: mov edx, 2 */ r_edx = 0x2u;
    /* 00833005: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x83300au); f_00835e1c();
    /* 0083300a: mov dword ptr [0xacc188], 0 */ W32((u32)(0xacc188u), 0x0u);
L_00833014:; BB(0x00833014);
    /* 00833014: ret  */ FN_RET(0x00832fb4); r_esp += 4; return;
}

