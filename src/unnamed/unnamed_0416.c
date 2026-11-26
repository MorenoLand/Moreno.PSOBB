#include "protos.h"

void f_00416182(void)
{
    FN_ENTER(0x00416182);
    /* 00416182: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00416184: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00416186: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0041618b: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00416191: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x416196u); f_007c0c6c();
    /* 00416196: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416198: jne 0x416336 */ if (!fZ) goto L_00416336;
L_0041619e:; BB(0x0041619e);
    /* 0041619e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004161a0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004161a2: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 004161a7: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004161ad: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x4161b2u); f_007c0c6c();
    /* 004161b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004161b4: je 0x416827 */ if (fZ) goto L_00416827;
L_004161ba:; BB(0x004161ba);
    /* 004161ba: mov byte ptr [esp + 0x68], 0 */ W8((u32)(r_esp+0x68u), 0x0u);
    /* 004161bf: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 004161c3: mov edx, 0xff */ r_edx = 0xffu;
    /* 004161c8: mov byte ptr [esp + 0x69], 1 */ W8((u32)(r_esp+0x69u), 0x1u);
    /* 004161cd: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 004161d1: mov eax, 0xff */ r_eax = 0xffu;
    /* 004161d6: mov byte ptr [esp + 0x6a], 2 */ W8((u32)(r_esp+0x6au), 0x2u);
    /* 004161db: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004161df: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004161e1: mov byte ptr [esp + 0x6b], 3 */ W8((u32)(r_esp+0x6bu), 0x3u);
    /* 004161e6: mov byte ptr [esp + 0x6c], 4 */ W8((u32)(r_esp+0x6cu), 0x4u);
    /* 004161eb: mov byte ptr [esp + 0x6d], 5 */ W8((u32)(r_esp+0x6du), 0x5u);
    /* 004161f0: mov byte ptr [esp + 0x6e], 0xff */ W8((u32)(r_esp+0x6eu), 0xffu);
L_004161f5:; BB(0x004161f5);
    /* 004161f5: mov ebx, esi */ r_ebx = r_esi;
    /* 004161f7: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004161fd: movzx edx, byte ptr [esp + ebx + 0x68] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x68u));
    /* 00416202: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416208: je 0x4168fe */ if (fZ) goto L_004168fe;
L_0041620e:; BB(0x0041620e);
    /* 0041620e: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00416212: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00416216: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416218: je 0x41632e */ if (fZ) goto L_0041632e;
L_0041621e:; BB(0x0041621e);
    /* 0041621e: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416225: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416229: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041622c: ja 0x41629f */ if ((!fC&&!fZ)) goto L_0041629f;
L_0041622e:; BB(0x0041622e);
    /* 0041622e: mov ecx, dword ptr [eax*4 + 0x8faf38] */ r_ecx = R32((u32)(r_eax*4+0x8faf38u));
    /* 00416235: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0041629f:; BB(0x0041629f);
    /* 0041629f: mov ebp, edx */ r_ebp = r_edx;
    /* 004162a1: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004162a3: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 004162a7: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004162aa: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004162ad: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 004162af: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004162b3: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004162b6: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004162b8: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004162ba: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 004162bd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004162be: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004162c2: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004162c6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004162c9: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4162ceu); f_0082e900();
    /* 004162ce: sub ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004162d2: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 004162d6: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004162d9: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004162dd: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004162e2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004162e7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004162eb: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004162ef: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004162f3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004162f7: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004162fb: movzx edi, byte ptr [esp + 0x18] */ r_edi = (u32)R8((u32)(r_esp+0x18u));
    /* 00416300: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416305: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00416308: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0041630e: sub edi, dword ptr [esp + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00416312: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416315: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00416317: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0041631d: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041631f: jge 0x41632e */ if ((fS==fO)) goto L_0041632e;
L_00416321:; BB(0x00416321);
    /* 00416321: movzx eax, byte ptr [esp + ebx + 0x68] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x68u));
    /* 00416326: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 0041632a: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
L_0041632e:; BB(0x0041632e);
    /* 0041632e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416331: jmp 0x4161f5 */ goto L_004161f5;
L_00416336:; BB(0x00416336);
    /* 00416336: mov byte ptr [esp + 0x60], 0 */ W8((u32)(r_esp+0x60u), 0x0u);
    /* 0041633b: mov edx, 0xff */ r_edx = 0xffu;
    /* 00416340: mov eax, 0xff */ r_eax = 0xffu;
    /* 00416345: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00416347: mov byte ptr [esp + 0x61], 1 */ W8((u32)(r_esp+0x61u), 0x1u);
    /* 0041634c: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00416350: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416354: mov byte ptr [esp + 0x62], 2 */ W8((u32)(r_esp+0x62u), 0x2u);
    /* 00416359: mov byte ptr [esp + 0x63], 3 */ W8((u32)(r_esp+0x63u), 0x3u);
    /* 0041635e: mov byte ptr [esp + 0x64], 4 */ W8((u32)(r_esp+0x64u), 0x4u);
    /* 00416363: mov byte ptr [esp + 0x65], 5 */ W8((u32)(r_esp+0x65u), 0x5u);
    /* 00416368: mov byte ptr [esp + 0x66], 0xff */ W8((u32)(r_esp+0x66u), 0xffu);
L_0041636d:; BB(0x0041636d);
    /* 0041636d: movzx esi, bl */ r_esi = (u32)(u8)r_ebx;
    /* 00416370: movzx edx, byte ptr [esp + esi + 0x60] */ r_edx = (u32)R8((u32)(r_esp+r_esi+0x60u));
    /* 00416375: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041637b: je 0x416933 */ if (fZ) goto L_00416933;
L_00416381:; BB(0x00416381);
    /* 00416381: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 00416385: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416387: je 0x416414 */ if (fZ) goto L_00416414;
L_0041638d:; BB(0x0041638d);
    /* 0041638d: mov edi, edx */ r_edi = r_edx;
    /* 0041638f: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416391: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00416395: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416398: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0041639b: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0041639f: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 004163a6: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 004163a8: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004163ab: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004163ad: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004163af: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 004163b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004163b3: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004163b7: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004163bb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004163be: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4163c3u); f_0082e900();
    /* 004163c3: sub edi, dword ptr [esp + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004163c7: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 004163cb: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004163ce: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004163d2: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004163d7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004163dc: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004163e0: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004163e4: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004163e8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004163ec: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 004163f1: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004163f4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004163f7: sub eax, dword ptr [esp + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004163fb: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004163fe: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416400: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416403: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416405: jge 0x416414 */ if ((fS==fO)) goto L_00416414;
L_00416407:; BB(0x00416407);
    /* 00416407: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0041640b: movzx eax, byte ptr [esp + esi + 0x60] */ r_eax = (u32)R8((u32)(r_esp+r_esi+0x60u));
    /* 00416410: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
L_00416414:; BB(0x00416414);
    /* 00416414: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00416417: jmp 0x41636d */ goto L_0041636d;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00416182); r_esp += 4; return;
L_004168fe:; BB(0x004168fe);
    /* 004168fe: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416902: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416907: je 0x416827 */ if (fZ) goto L_00416827;
L_0041690d:; BB(0x0041690d);
    /* 0041690d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041690f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416911: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416912: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416917: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41691cu); f_00814298();
    /* 0041691c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041691f: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416923: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416928: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041692e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041692f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416930: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416931: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416932: ret  */ FN_RET(0x00416182); r_esp += 4; return;
L_00416933:; BB(0x00416933);
    /* 00416933: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416937: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041693c: je 0x41619e */ if (fZ) goto L_0041619e;
L_00416942:; BB(0x00416942);
    /* 00416942: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416945: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416946: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416947: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 0041694c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416951u); f_00814298();
    /* 00416951: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416954: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416958: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 0041695d: jmp 0x41619e */ goto L_0041619e;
}

void f_00416237(void)
{
    FN_ENTER(0x00416237);
    goto L_00416237;
L_004161f5:; BB(0x004161f5);
    /* 004161f5: mov ebx, esi */ r_ebx = r_esi;
    /* 004161f7: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004161fd: movzx edx, byte ptr [esp + ebx + 0x68] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x68u));
    /* 00416202: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416208: je 0x4168fe */ if (fZ) goto L_004168fe;
L_0041620e:; BB(0x0041620e);
    /* 0041620e: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00416212: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00416216: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416218: je 0x41632e */ if (fZ) goto L_0041632e;
L_0041621e:; BB(0x0041621e);
    /* 0041621e: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416225: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416229: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041622c: ja 0x41629f */ if ((!fC&&!fZ)) goto L_0041629f;
L_0041622e:; BB(0x0041622e);
    /* 0041622e: mov ecx, dword ptr [eax*4 + 0x8faf38] */ r_ecx = R32((u32)(r_eax*4+0x8faf38u));
    /* 00416235: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416237:; BB(0x00416237);
    /* 00416237: add eax, -8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041623a: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0041623d: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416242: jmp 0x41629f */ goto L_0041629f;
L_0041629f:; BB(0x0041629f);
    /* 0041629f: mov ebp, edx */ r_ebp = r_edx;
    /* 004162a1: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004162a3: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 004162a7: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004162aa: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004162ad: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 004162af: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004162b3: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004162b6: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004162b8: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004162ba: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 004162bd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004162be: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004162c2: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004162c6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004162c9: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4162ceu); f_0082e900();
    /* 004162ce: sub ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004162d2: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 004162d6: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004162d9: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004162dd: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004162e2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004162e7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004162eb: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004162ef: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004162f3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004162f7: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004162fb: movzx edi, byte ptr [esp + 0x18] */ r_edi = (u32)R8((u32)(r_esp+0x18u));
    /* 00416300: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416305: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00416308: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0041630e: sub edi, dword ptr [esp + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00416312: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416315: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00416317: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0041631d: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041631f: jge 0x41632e */ if ((fS==fO)) goto L_0041632e;
L_00416321:; BB(0x00416321);
    /* 00416321: movzx eax, byte ptr [esp + ebx + 0x68] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x68u));
    /* 00416326: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 0041632a: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
L_0041632e:; BB(0x0041632e);
    /* 0041632e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416331: jmp 0x4161f5 */ goto L_004161f5;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00416237); r_esp += 4; return;
L_004168fe:; BB(0x004168fe);
    /* 004168fe: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416902: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416907: je 0x416827 */ if (fZ) goto L_00416827;
L_0041690d:; BB(0x0041690d);
    /* 0041690d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041690f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416911: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416912: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416917: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41691cu); f_00814298();
    /* 0041691c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041691f: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416923: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416928: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041692e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041692f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416930: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416931: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416932: ret  */ FN_RET(0x00416237); r_esp += 4; return;
}

void f_00416244(void)
{
    FN_ENTER(0x00416244);
    goto L_00416244;
L_004161f5:; BB(0x004161f5);
    /* 004161f5: mov ebx, esi */ r_ebx = r_esi;
    /* 004161f7: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004161fd: movzx edx, byte ptr [esp + ebx + 0x68] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x68u));
    /* 00416202: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416208: je 0x4168fe */ if (fZ) goto L_004168fe;
L_0041620e:; BB(0x0041620e);
    /* 0041620e: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00416212: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00416216: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416218: je 0x41632e */ if (fZ) goto L_0041632e;
L_0041621e:; BB(0x0041621e);
    /* 0041621e: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416225: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416229: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041622c: ja 0x41629f */ if ((!fC&&!fZ)) goto L_0041629f;
L_0041622e:; BB(0x0041622e);
    /* 0041622e: mov ecx, dword ptr [eax*4 + 0x8faf38] */ r_ecx = R32((u32)(r_eax*4+0x8faf38u));
    /* 00416235: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416244:; BB(0x00416244);
    /* 00416244: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416248: mov ebp, dword ptr [ecx + 0x80] */ r_ebp = R32((u32)(r_ecx+0x80u));
    /* 0041624e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416250: je 0x41625f */ if (fZ) goto L_0041625f;
L_00416252:; BB(0x00416252);
    /* 00416252: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416255: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416258: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 0041625d: jmp 0x41629f */ goto L_0041629f;
L_0041625f:; BB(0x0041625f);
    /* 0041625f: add eax, -6 */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416262: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416265: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 0041626a: jmp 0x41629f */ goto L_0041629f;
L_0041629f:; BB(0x0041629f);
    /* 0041629f: mov ebp, edx */ r_ebp = r_edx;
    /* 004162a1: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004162a3: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 004162a7: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004162aa: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004162ad: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 004162af: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004162b3: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004162b6: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004162b8: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004162ba: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 004162bd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004162be: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004162c2: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004162c6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004162c9: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4162ceu); f_0082e900();
    /* 004162ce: sub ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004162d2: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 004162d6: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004162d9: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004162dd: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004162e2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004162e7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004162eb: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004162ef: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004162f3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004162f7: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004162fb: movzx edi, byte ptr [esp + 0x18] */ r_edi = (u32)R8((u32)(r_esp+0x18u));
    /* 00416300: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416305: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00416308: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0041630e: sub edi, dword ptr [esp + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00416312: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416315: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00416317: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0041631d: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041631f: jge 0x41632e */ if ((fS==fO)) goto L_0041632e;
L_00416321:; BB(0x00416321);
    /* 00416321: movzx eax, byte ptr [esp + ebx + 0x68] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x68u));
    /* 00416326: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 0041632a: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
L_0041632e:; BB(0x0041632e);
    /* 0041632e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416331: jmp 0x4161f5 */ goto L_004161f5;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00416244); r_esp += 4; return;
L_004168fe:; BB(0x004168fe);
    /* 004168fe: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416902: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416907: je 0x416827 */ if (fZ) goto L_00416827;
L_0041690d:; BB(0x0041690d);
    /* 0041690d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041690f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416911: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416912: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416917: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41691cu); f_00814298();
    /* 0041691c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041691f: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416923: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416928: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041692e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041692f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416930: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416931: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416932: ret  */ FN_RET(0x00416244); r_esp += 4; return;
}

void f_0041626c(void)
{
    FN_ENTER(0x0041626c);
    goto L_0041626c;
L_004161f5:; BB(0x004161f5);
    /* 004161f5: mov ebx, esi */ r_ebx = r_esi;
    /* 004161f7: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004161fd: movzx edx, byte ptr [esp + ebx + 0x68] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x68u));
    /* 00416202: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416208: je 0x4168fe */ if (fZ) goto L_004168fe;
L_0041620e:; BB(0x0041620e);
    /* 0041620e: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00416212: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00416216: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416218: je 0x41632e */ if (fZ) goto L_0041632e;
L_0041621e:; BB(0x0041621e);
    /* 0041621e: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416225: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416229: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041622c: ja 0x41629f */ if ((!fC&&!fZ)) goto L_0041629f;
L_0041622e:; BB(0x0041622e);
    /* 0041622e: mov ecx, dword ptr [eax*4 + 0x8faf38] */ r_ecx = R32((u32)(r_eax*4+0x8faf38u));
    /* 00416235: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0041626c:; BB(0x0041626c);
    /* 0041626c: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416270: mov ebp, dword ptr [ecx + 0x80] */ r_ebp = R32((u32)(r_ecx+0x80u));
    /* 00416276: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416278: je 0x416287 */ if (fZ) goto L_00416287;
L_0041627a:; BB(0x0041627a);
    /* 0041627a: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041627d: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416280: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416285: jmp 0x41629f */ goto L_0041629f;
L_00416287:; BB(0x00416287);
    /* 00416287: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041628a: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0041628d: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416292: jmp 0x41629f */ goto L_0041629f;
L_0041629f:; BB(0x0041629f);
    /* 0041629f: mov ebp, edx */ r_ebp = r_edx;
    /* 004162a1: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004162a3: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 004162a7: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004162aa: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004162ad: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 004162af: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004162b3: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004162b6: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004162b8: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004162ba: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 004162bd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004162be: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004162c2: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004162c6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004162c9: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4162ceu); f_0082e900();
    /* 004162ce: sub ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004162d2: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 004162d6: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004162d9: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004162dd: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004162e2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004162e7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004162eb: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004162ef: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004162f3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004162f7: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004162fb: movzx edi, byte ptr [esp + 0x18] */ r_edi = (u32)R8((u32)(r_esp+0x18u));
    /* 00416300: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416305: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00416308: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0041630e: sub edi, dword ptr [esp + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00416312: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416315: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00416317: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0041631d: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041631f: jge 0x41632e */ if ((fS==fO)) goto L_0041632e;
L_00416321:; BB(0x00416321);
    /* 00416321: movzx eax, byte ptr [esp + ebx + 0x68] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x68u));
    /* 00416326: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 0041632a: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
L_0041632e:; BB(0x0041632e);
    /* 0041632e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416331: jmp 0x4161f5 */ goto L_004161f5;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x0041626c); r_esp += 4; return;
L_004168fe:; BB(0x004168fe);
    /* 004168fe: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416902: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416907: je 0x416827 */ if (fZ) goto L_00416827;
L_0041690d:; BB(0x0041690d);
    /* 0041690d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041690f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416911: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416912: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416917: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41691cu); f_00814298();
    /* 0041691c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041691f: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416923: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416928: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041692e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041692f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416930: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416931: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416932: ret  */ FN_RET(0x0041626c); r_esp += 4; return;
}

void f_00416294(void)
{
    FN_ENTER(0x00416294);
    goto L_00416294;
L_004161f5:; BB(0x004161f5);
    /* 004161f5: mov ebx, esi */ r_ebx = r_esi;
    /* 004161f7: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004161fd: movzx edx, byte ptr [esp + ebx + 0x68] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x68u));
    /* 00416202: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416208: je 0x4168fe */ if (fZ) goto L_004168fe;
L_0041620e:; BB(0x0041620e);
    /* 0041620e: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00416212: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00416216: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416218: je 0x41632e */ if (fZ) goto L_0041632e;
L_0041621e:; BB(0x0041621e);
    /* 0041621e: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416225: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416229: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041622c: ja 0x41629f */ if ((!fC&&!fZ)) goto L_0041629f;
L_0041622e:; BB(0x0041622e);
    /* 0041622e: mov ecx, dword ptr [eax*4 + 0x8faf38] */ r_ecx = R32((u32)(r_eax*4+0x8faf38u));
    /* 00416235: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416294:; BB(0x00416294);
    /* 00416294: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416297: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0041629a: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
L_0041629f:; BB(0x0041629f);
    /* 0041629f: mov ebp, edx */ r_ebp = r_edx;
    /* 004162a1: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004162a3: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 004162a7: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004162aa: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004162ad: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 004162af: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004162b3: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004162b6: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004162b8: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004162ba: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 004162bd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004162be: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004162c2: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004162c6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004162c9: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4162ceu); f_0082e900();
    /* 004162ce: sub ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004162d2: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 004162d6: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004162d9: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004162dd: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004162e2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004162e7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004162eb: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004162ef: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004162f3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004162f7: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004162fb: movzx edi, byte ptr [esp + 0x18] */ r_edi = (u32)R8((u32)(r_esp+0x18u));
    /* 00416300: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416305: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00416308: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0041630e: sub edi, dword ptr [esp + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00416312: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416315: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00416317: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0041631d: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041631f: jge 0x41632e */ if ((fS==fO)) goto L_0041632e;
L_00416321:; BB(0x00416321);
    /* 00416321: movzx eax, byte ptr [esp + ebx + 0x68] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x68u));
    /* 00416326: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 0041632a: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
L_0041632e:; BB(0x0041632e);
    /* 0041632e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416331: jmp 0x4161f5 */ goto L_004161f5;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00416294); r_esp += 4; return;
L_004168fe:; BB(0x004168fe);
    /* 004168fe: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416902: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416907: je 0x416827 */ if (fZ) goto L_00416827;
L_0041690d:; BB(0x0041690d);
    /* 0041690d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041690f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416911: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416912: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416917: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41691cu); f_00814298();
    /* 0041691c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041691f: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416923: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416928: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041692e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041692f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416930: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416931: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416932: ret  */ FN_RET(0x00416294); r_esp += 4; return;
}

void f_0041641c(void)
{
    FN_ENTER(0x0041641c);
    /* 0041641c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041641e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00416420: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00416425: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0041642b: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x416430u); f_007c0c6c();
    /* 00416430: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416432: jne 0x416536 */ if (!fZ) goto L_00416536;
L_00416438:; BB(0x00416438);
    /* 00416438: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643c: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00416441: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 00416447: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x41644cu); f_007c0c6c();
    /* 0041644c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041644e: je 0x416827 */ if (fZ) goto L_00416827;
L_00416454:; BB(0x00416454);
    /* 00416454: movzx ebx, byte ptr [0xa3b1f0] */ r_ebx = (u32)R8((u32)(0xa3b1f0u));
    /* 0041645b: mov byte ptr [esp + 0x7c], 6 */ W8((u32)(r_esp+0x7cu), 0x6u);
    /* 00416460: mov edx, 0xff */ r_edx = 0xffu;
    /* 00416465: mov eax, 0xff */ r_eax = 0xffu;
    /* 0041646a: mov byte ptr [esp + 0x7d], 7 */ W8((u32)(r_esp+0x7du), 0x7u);
    /* 0041646f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00416473: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00416475: mov byte ptr [esp + 0x7e], 0xff */ W8((u32)(r_esp+0x7eu), 0xffu);
    /* 0041647a: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0041647e: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
L_00416482:; BB(0x00416482);
    /* 00416482: mov ebx, esi */ r_ebx = r_esi;
    /* 00416484: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0041648a: movzx edx, byte ptr [esp + ebx + 0x7c] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041648f: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416495: je 0x416962 */ if (fZ) goto L_00416962;
L_0041649b:; BB(0x0041649b);
    /* 0041649b: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 0041649f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004164a1: je 0x41652e */ if (fZ) goto L_0041652e;
L_004164a7:; BB(0x004164a7);
    /* 004164a7: mov edi, edx */ r_edi = r_edx;
    /* 004164a9: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004164ab: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 004164af: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004164b2: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004164b5: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004164b9: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 004164c0: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 004164c2: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004164c5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004164c7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004164c9: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 004164cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004164cd: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004164d1: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004164d5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004164d8: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4164ddu); f_0082e900();
    /* 004164dd: sub edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004164e1: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004164e5: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004164e8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004164ec: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004164f1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004164f6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004164fa: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004164fe: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416502: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416506: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 0041650b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041650e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416511: sub eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00416515: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416518: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041651a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041651d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041651f: jge 0x41652e */ if ((fS==fO)) goto L_0041652e;
L_00416521:; BB(0x00416521);
    /* 00416521: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416525: movzx eax, byte ptr [esp + ebx + 0x7c] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041652a: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_0041652e:; BB(0x0041652e);
    /* 0041652e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416531: jmp 0x416482 */ goto L_00416482;
L_00416536:; BB(0x00416536);
    /* 00416536: movzx ebx, byte ptr [0xa3b1f0] */ r_ebx = (u32)R8((u32)(0xa3b1f0u));
    /* 0041653d: mov byte ptr [esp + 0x70], 0 */ W8((u32)(r_esp+0x70u), 0x0u);
    /* 00416542: mov edx, 0xff */ r_edx = 0xffu;
    /* 00416547: mov eax, 0xff */ r_eax = 0xffu;
    /* 0041654c: mov byte ptr [esp + 0x71], 1 */ W8((u32)(r_esp+0x71u), 0x1u);
    /* 00416551: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00416555: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00416557: mov byte ptr [esp + 0x72], 2 */ W8((u32)(r_esp+0x72u), 0x2u);
    /* 0041655c: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00416560: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 00416564: mov byte ptr [esp + 0x73], 3 */ W8((u32)(r_esp+0x73u), 0x3u);
    /* 00416569: mov byte ptr [esp + 0x74], 0xff */ W8((u32)(r_esp+0x74u), 0xffu);
L_0041656e:; BB(0x0041656e);
    /* 0041656e: mov ebx, esi */ r_ebx = r_esi;
    /* 00416570: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00416576: movzx edx, byte ptr [esp + ebx + 0x70] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x70u));
    /* 0041657b: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416581: je 0x416b56 */ if (fZ) goto L_00416b56;
L_00416587:; BB(0x00416587);
    /* 00416587: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 0041658b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041658d: je 0x41661a */ if (fZ) goto L_0041661a;
L_00416593:; BB(0x00416593);
    /* 00416593: mov edi, edx */ r_edi = r_edx;
    /* 00416595: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416597: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0041659b: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0041659e: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004165a1: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004165a5: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 004165ac: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 004165ae: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004165b1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004165b3: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004165b5: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 004165b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004165b9: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004165bd: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004165c1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004165c4: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4165c9u); f_0082e900();
    /* 004165c9: sub edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004165cd: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004165d1: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004165d4: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004165d8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004165dd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004165e2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004165e6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004165ea: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004165ee: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004165f2: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 004165f7: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004165fa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004165fd: sub eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00416601: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416604: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416606: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416609: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041660b: jge 0x41661a */ if ((fS==fO)) goto L_0041661a;
L_0041660d:; BB(0x0041660d);
    /* 0041660d: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416611: movzx eax, byte ptr [esp + ebx + 0x70] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x70u));
    /* 00416616: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_0041661a:; BB(0x0041661a);
    /* 0041661a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041661d: jmp 0x41656e */ goto L_0041656e;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x0041641c); r_esp += 4; return;
L_00416962:; BB(0x00416962);
    /* 00416962: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00416966: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0041696a: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041696f: je 0x416991 */ if (fZ) goto L_00416991;
L_00416971:; BB(0x00416971);
    /* 00416971: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416976: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 0041697b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416980u); f_00814298();
    /* 00416980: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416983: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416987: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0041698a: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 0041698f: jmp 0x416998 */ goto L_00416998;
L_00416991:; BB(0x00416991);
    /* 00416991: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
L_00416998:; BB(0x00416998);
    /* 00416998: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041699a: jne 0x416827 */ if (!fZ) goto L_00416827;
L_004169a0:; BB(0x004169a0);
    /* 004169a0: mov byte ptr [esp + 0x81], 1 */ W8((u32)(r_esp+0x81u), 0x1u);
    /* 004169a8: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 004169ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004169ae: mov byte ptr [esp + 0x82], 2 */ W8((u32)(r_esp+0x82u), 0x2u);
    /* 004169b6: mov byte ptr [esp + 0x80], dl */ W8((u32)(r_esp+0x80u), (u8)r_edx);
    /* 004169bd: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
    /* 004169c3: mov byte ptr [esp + 0x83], 3 */ W8((u32)(r_esp+0x83u), 0x3u);
    /* 004169cb: mov edx, 0xff */ r_edx = 0xffu;
    /* 004169d0: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 004169d5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004169d7: mov byte ptr [esp + 0x84], 0xff */ W8((u32)(r_esp+0x84u), 0xffu);
    /* 004169df: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 004169e3: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
L_004169e7:; BB(0x004169e7);
    /* 004169e7: mov ebx, esi */ r_ebx = r_esi;
    /* 004169e9: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004169ef: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 004169f7: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004169fd: je 0x416b21 */ if (fZ) goto L_00416b21;
L_00416a03:; BB(0x00416a03);
    /* 00416a03: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416a07: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416a0b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a0d: je 0x416b19 */ if (fZ) goto L_00416b19;
L_00416a13:; BB(0x00416a13);
    /* 00416a13: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416a17: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416a1a: ja 0x416a8d */ if ((!fC&&!fZ)) goto L_00416a8d;
L_00416a1c:; BB(0x00416a1c);
    /* 00416a1c: mov ecx, dword ptr [eax*4 + 0x8faef8] */ r_ecx = R32((u32)(r_eax*4+0x8faef8u));
    /* 00416a23: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416a8d:; BB(0x00416a8d);
    /* 00416a8d: mov ebp, edx */ r_ebp = r_edx;
    /* 00416a8f: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416a91: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00416a95: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416a98: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416a9b: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416a9d: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416aa1: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416aa4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416aa6: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416aa8: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416aab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416aac: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416ab0: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416ab4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416ab7: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416abcu); f_0082e900();
    /* 00416abc: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416ac0: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416ac4: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ac7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416acb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416ad0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416ad5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416ad9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416add: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416ae1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416ae5: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416ae9: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416aee: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416af3: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416af6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416af9: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416afd: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416b00: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416b02: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416b05: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416b07: jge 0x416b19 */ if ((fS==fO)) goto L_00416b19;
L_00416b09:; BB(0x00416b09);
    /* 00416b09: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416b0d: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 00416b15: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416b19:; BB(0x00416b19);
    /* 00416b19: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416b1c: jmp 0x4169e7 */ goto L_004169e7;
L_00416b21:; BB(0x00416b21);
    /* 00416b21: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b25: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b2a: je 0x416827 */ if (fZ) goto L_00416827;
L_00416b30:; BB(0x00416b30);
    /* 00416b30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b35: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b3a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b3fu); f_00814298();
    /* 00416b3f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b42: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b46: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b4b: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416b51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416b52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416b53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416b54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416b55: ret  */ FN_RET(0x0041641c); r_esp += 4; return;
L_00416b56:; BB(0x00416b56);
    /* 00416b56: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00416b5a: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416b5e: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b63: je 0x416b85 */ if (fZ) goto L_00416b85;
L_00416b65:; BB(0x00416b65);
    /* 00416b65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b6a: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b6f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b74u); f_00814298();
    /* 00416b74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b77: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416b7b: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416b7e: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b83: jmp 0x416b8c */ goto L_00416b8c;
L_00416b85:; BB(0x00416b85);
    /* 00416b85: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
L_00416b8c:; BB(0x00416b8c);
    /* 00416b8c: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b8e: jne 0x416438 */ if (!fZ) goto L_00416438;
L_00416b94:; BB(0x00416b94);
    /* 00416b94: mov dword ptr [ebp + 0x80], 1 */ W32((u32)(r_ebp+0x80u), 0x1u);
    /* 00416b9e: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 00416ba2: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 00416ba7: mov byte ptr [esp + 0x78], 6 */ W8((u32)(r_esp+0x78u), 0x6u);
    /* 00416bac: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 00416bb0: mov edx, 0xff */ r_edx = 0xffu;
    /* 00416bb5: mov byte ptr [esp + 0x79], 7 */ W8((u32)(r_esp+0x79u), 0x7u);
    /* 00416bba: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00416bbe: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00416bc0: mov byte ptr [esp + 0x7a], 0xff */ W8((u32)(r_esp+0x7au), 0xffu);
L_00416bc5:; BB(0x00416bc5);
    /* 00416bc5: mov ebx, esi */ r_ebx = r_esi;
    /* 00416bc7: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00416bcd: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416bd2: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416bd8: je 0x416cf9 */ if (fZ) goto L_00416cf9;
L_00416bde:; BB(0x00416bde);
    /* 00416bde: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416be2: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416be6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416be8: je 0x416cf1 */ if (fZ) goto L_00416cf1;
L_00416bee:; BB(0x00416bee);
    /* 00416bee: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416bf2: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416bf5: ja 0x416c68 */ if ((!fC&&!fZ)) goto L_00416c68;
L_00416bf7:; BB(0x00416bf7);
    /* 00416bf7: mov ecx, dword ptr [eax*4 + 0x8faf18] */ r_ecx = R32((u32)(r_eax*4+0x8faf18u));
    /* 00416bfe: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416c68:; BB(0x00416c68);
    /* 00416c68: mov ebp, edx */ r_ebp = r_edx;
    /* 00416c6a: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416c6c: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00416c70: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416c73: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416c76: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416c78: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416c7c: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416c7f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416c81: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416c83: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416c86: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416c87: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416c8b: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416c8f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416c92: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416c97u); f_0082e900();
    /* 00416c97: sub ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416c9b: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00416c9f: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ca2: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416ca6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416cab: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416cb0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416cb4: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416cb8: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416cbc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416cc0: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416cc4: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416cc9: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416cce: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd1: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416cd4: sub edx, dword ptr [esp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd8: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416cdb: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416cdd: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416ce0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416ce2: jge 0x416cf1 */ if ((fS==fO)) goto L_00416cf1;
L_00416ce4:; BB(0x00416ce4);
    /* 00416ce4: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416ce8: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416ced: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
L_00416cf1:; BB(0x00416cf1);
    /* 00416cf1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416cf4: jmp 0x416bc5 */ goto L_00416bc5;
L_00416cf9:; BB(0x00416cf9);
    /* 00416cf9: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00416cfd: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d01: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d06: je 0x416438 */ if (fZ) goto L_00416438;
L_00416d0c:; BB(0x00416d0c);
    /* 00416d0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416d0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d11: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416d16: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416d1bu); f_00814298();
    /* 00416d1b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416d1e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d22: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416d27: jmp 0x416438 */ goto L_00416438;
}

void f_0041656c(void)
{
    FN_ENTER(0x0041656c);
    goto L_0041656c;
L_00416438:; BB(0x00416438);
    /* 00416438: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643c: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00416441: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 00416447: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x41644cu); f_007c0c6c();
    /* 0041644c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041644e: je 0x416827 */ if (fZ) goto L_00416827;
L_00416454:; BB(0x00416454);
    /* 00416454: movzx ebx, byte ptr [0xa3b1f0] */ r_ebx = (u32)R8((u32)(0xa3b1f0u));
    /* 0041645b: mov byte ptr [esp + 0x7c], 6 */ W8((u32)(r_esp+0x7cu), 0x6u);
    /* 00416460: mov edx, 0xff */ r_edx = 0xffu;
    /* 00416465: mov eax, 0xff */ r_eax = 0xffu;
    /* 0041646a: mov byte ptr [esp + 0x7d], 7 */ W8((u32)(r_esp+0x7du), 0x7u);
    /* 0041646f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00416473: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00416475: mov byte ptr [esp + 0x7e], 0xff */ W8((u32)(r_esp+0x7eu), 0xffu);
    /* 0041647a: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0041647e: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
L_00416482:; BB(0x00416482);
    /* 00416482: mov ebx, esi */ r_ebx = r_esi;
    /* 00416484: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0041648a: movzx edx, byte ptr [esp + ebx + 0x7c] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041648f: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416495: je 0x416962 */ if (fZ) goto L_00416962;
L_0041649b:; BB(0x0041649b);
    /* 0041649b: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 0041649f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004164a1: je 0x41652e */ if (fZ) goto L_0041652e;
L_004164a7:; BB(0x004164a7);
    /* 004164a7: mov edi, edx */ r_edi = r_edx;
    /* 004164a9: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004164ab: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 004164af: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004164b2: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004164b5: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004164b9: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 004164c0: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 004164c2: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004164c5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004164c7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004164c9: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 004164cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004164cd: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004164d1: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004164d5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004164d8: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4164ddu); f_0082e900();
    /* 004164dd: sub edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004164e1: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004164e5: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004164e8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004164ec: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004164f1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004164f6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004164fa: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004164fe: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416502: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416506: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 0041650b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041650e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416511: sub eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00416515: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416518: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041651a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041651d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041651f: jge 0x41652e */ if ((fS==fO)) goto L_0041652e;
L_00416521:; BB(0x00416521);
    /* 00416521: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416525: movzx eax, byte ptr [esp + ebx + 0x7c] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041652a: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_0041652e:; BB(0x0041652e);
    /* 0041652e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416531: jmp 0x416482 */ goto L_00416482;
L_0041656c:; BB(0x0041656c);
    /* 0041656c: je 0x41656d */ if (fZ) goto L_0041656d;
L_0041656d:; BB(0x0041656d);
    /* 0041656d: dec dword ptr [ebx - 0x1c7e22] */ { u32 ad = (u32)(r_ebx+0xffe381deu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0041656e:; BB(0x0041656e);
    /* 0041656e: mov ebx, esi */ r_ebx = r_esi;
    /* 00416570: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00416573: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00416575: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 00416576: movzx edx, byte ptr [esp + ebx + 0x70] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x70u));
    /* 00416577: mov dh, 0x54 */ r_edx = (r_edx & 0xffff00ffu) | (((0x54u) & 0xffu) << 8);
    /* 00416579: sbb al, 0x70 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x70u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041657b: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416581: je 0x416b56 */ if (fZ) goto L_00416b56;
L_00416587:; BB(0x00416587);
    /* 00416587: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 0041658b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041658d: je 0x41661a */ if (fZ) goto L_0041661a;
L_00416593:; BB(0x00416593);
    /* 00416593: mov edi, edx */ r_edi = r_edx;
    /* 00416595: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416597: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0041659b: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0041659e: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004165a1: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004165a5: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 004165ac: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 004165ae: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004165b1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004165b3: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004165b5: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 004165b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004165b9: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004165bd: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004165c1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004165c4: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4165c9u); f_0082e900();
    /* 004165c9: sub edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004165cd: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004165d1: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004165d4: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004165d8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004165dd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004165e2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004165e6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004165ea: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004165ee: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004165f2: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 004165f7: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004165fa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004165fd: sub eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00416601: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416604: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416606: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416609: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041660b: jge 0x41661a */ if ((fS==fO)) goto L_0041661a;
L_0041660d:; BB(0x0041660d);
    /* 0041660d: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416611: movzx eax, byte ptr [esp + ebx + 0x70] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x70u));
    /* 00416616: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_0041661a:; BB(0x0041661a);
    /* 0041661a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041661d: jmp 0x41656e */ goto L_0041656e;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x0041656c); r_esp += 4; return;
L_00416962:; BB(0x00416962);
    /* 00416962: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00416966: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0041696a: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041696f: je 0x416991 */ if (fZ) goto L_00416991;
L_00416971:; BB(0x00416971);
    /* 00416971: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416976: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 0041697b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416980u); f_00814298();
    /* 00416980: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416983: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416987: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0041698a: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 0041698f: jmp 0x416998 */ goto L_00416998;
L_00416991:; BB(0x00416991);
    /* 00416991: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
L_00416998:; BB(0x00416998);
    /* 00416998: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041699a: jne 0x416827 */ if (!fZ) goto L_00416827;
L_004169a0:; BB(0x004169a0);
    /* 004169a0: mov byte ptr [esp + 0x81], 1 */ W8((u32)(r_esp+0x81u), 0x1u);
    /* 004169a8: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 004169ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004169ae: mov byte ptr [esp + 0x82], 2 */ W8((u32)(r_esp+0x82u), 0x2u);
    /* 004169b6: mov byte ptr [esp + 0x80], dl */ W8((u32)(r_esp+0x80u), (u8)r_edx);
    /* 004169bd: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
    /* 004169c3: mov byte ptr [esp + 0x83], 3 */ W8((u32)(r_esp+0x83u), 0x3u);
    /* 004169cb: mov edx, 0xff */ r_edx = 0xffu;
    /* 004169d0: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 004169d5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004169d7: mov byte ptr [esp + 0x84], 0xff */ W8((u32)(r_esp+0x84u), 0xffu);
    /* 004169df: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 004169e3: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
L_004169e7:; BB(0x004169e7);
    /* 004169e7: mov ebx, esi */ r_ebx = r_esi;
    /* 004169e9: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004169ef: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 004169f7: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004169fd: je 0x416b21 */ if (fZ) goto L_00416b21;
L_00416a03:; BB(0x00416a03);
    /* 00416a03: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416a07: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416a0b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a0d: je 0x416b19 */ if (fZ) goto L_00416b19;
L_00416a13:; BB(0x00416a13);
    /* 00416a13: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416a17: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416a1a: ja 0x416a8d */ if ((!fC&&!fZ)) goto L_00416a8d;
L_00416a1c:; BB(0x00416a1c);
    /* 00416a1c: mov ecx, dword ptr [eax*4 + 0x8faef8] */ r_ecx = R32((u32)(r_eax*4+0x8faef8u));
    /* 00416a23: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416a8d:; BB(0x00416a8d);
    /* 00416a8d: mov ebp, edx */ r_ebp = r_edx;
    /* 00416a8f: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416a91: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00416a95: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416a98: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416a9b: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416a9d: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416aa1: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416aa4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416aa6: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416aa8: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416aab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416aac: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416ab0: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416ab4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416ab7: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416abcu); f_0082e900();
    /* 00416abc: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416ac0: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416ac4: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ac7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416acb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416ad0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416ad5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416ad9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416add: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416ae1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416ae5: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416ae9: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416aee: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416af3: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416af6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416af9: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416afd: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416b00: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416b02: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416b05: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416b07: jge 0x416b19 */ if ((fS==fO)) goto L_00416b19;
L_00416b09:; BB(0x00416b09);
    /* 00416b09: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416b0d: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 00416b15: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416b19:; BB(0x00416b19);
    /* 00416b19: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416b1c: jmp 0x4169e7 */ goto L_004169e7;
L_00416b21:; BB(0x00416b21);
    /* 00416b21: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b25: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b2a: je 0x416827 */ if (fZ) goto L_00416827;
L_00416b30:; BB(0x00416b30);
    /* 00416b30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b35: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b3a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b3fu); f_00814298();
    /* 00416b3f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b42: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b46: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b4b: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416b51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416b52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416b53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416b54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416b55: ret  */ FN_RET(0x0041656c); r_esp += 4; return;
L_00416b56:; BB(0x00416b56);
    /* 00416b56: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00416b5a: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416b5e: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b63: je 0x416b85 */ if (fZ) goto L_00416b85;
L_00416b65:; BB(0x00416b65);
    /* 00416b65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b6a: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b6f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b74u); f_00814298();
    /* 00416b74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b77: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416b7b: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416b7e: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b83: jmp 0x416b8c */ goto L_00416b8c;
L_00416b85:; BB(0x00416b85);
    /* 00416b85: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
L_00416b8c:; BB(0x00416b8c);
    /* 00416b8c: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b8e: jne 0x416438 */ if (!fZ) goto L_00416438;
L_00416b94:; BB(0x00416b94);
    /* 00416b94: mov dword ptr [ebp + 0x80], 1 */ W32((u32)(r_ebp+0x80u), 0x1u);
    /* 00416b9e: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 00416ba2: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 00416ba7: mov byte ptr [esp + 0x78], 6 */ W8((u32)(r_esp+0x78u), 0x6u);
    /* 00416bac: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 00416bb0: mov edx, 0xff */ r_edx = 0xffu;
    /* 00416bb5: mov byte ptr [esp + 0x79], 7 */ W8((u32)(r_esp+0x79u), 0x7u);
    /* 00416bba: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00416bbe: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00416bc0: mov byte ptr [esp + 0x7a], 0xff */ W8((u32)(r_esp+0x7au), 0xffu);
L_00416bc5:; BB(0x00416bc5);
    /* 00416bc5: mov ebx, esi */ r_ebx = r_esi;
    /* 00416bc7: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00416bcd: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416bd2: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416bd8: je 0x416cf9 */ if (fZ) goto L_00416cf9;
L_00416bde:; BB(0x00416bde);
    /* 00416bde: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416be2: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416be6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416be8: je 0x416cf1 */ if (fZ) goto L_00416cf1;
L_00416bee:; BB(0x00416bee);
    /* 00416bee: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416bf2: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416bf5: ja 0x416c68 */ if ((!fC&&!fZ)) goto L_00416c68;
L_00416bf7:; BB(0x00416bf7);
    /* 00416bf7: mov ecx, dword ptr [eax*4 + 0x8faf18] */ r_ecx = R32((u32)(r_eax*4+0x8faf18u));
    /* 00416bfe: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416c68:; BB(0x00416c68);
    /* 00416c68: mov ebp, edx */ r_ebp = r_edx;
    /* 00416c6a: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416c6c: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00416c70: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416c73: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416c76: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416c78: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416c7c: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416c7f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416c81: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416c83: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416c86: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416c87: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416c8b: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416c8f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416c92: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416c97u); f_0082e900();
    /* 00416c97: sub ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416c9b: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00416c9f: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ca2: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416ca6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416cab: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416cb0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416cb4: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416cb8: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416cbc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416cc0: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416cc4: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416cc9: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416cce: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd1: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416cd4: sub edx, dword ptr [esp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd8: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416cdb: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416cdd: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416ce0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416ce2: jge 0x416cf1 */ if ((fS==fO)) goto L_00416cf1;
L_00416ce4:; BB(0x00416ce4);
    /* 00416ce4: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416ce8: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416ced: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
L_00416cf1:; BB(0x00416cf1);
    /* 00416cf1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416cf4: jmp 0x416bc5 */ goto L_00416bc5;
L_00416cf9:; BB(0x00416cf9);
    /* 00416cf9: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00416cfd: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d01: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d06: je 0x416438 */ if (fZ) goto L_00416438;
L_00416d0c:; BB(0x00416d0c);
    /* 00416d0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416d0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d11: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416d16: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416d1bu); f_00814298();
    /* 00416d1b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416d1e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d22: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416d27: jmp 0x416438 */ goto L_00416438;
}

void f_0041656e(void)
{
    FN_ENTER(0x0041656e);
    goto L_0041656e;
L_00416438:; BB(0x00416438);
    /* 00416438: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643c: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00416441: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 00416447: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x41644cu); f_007c0c6c();
    /* 0041644c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041644e: je 0x416827 */ if (fZ) goto L_00416827;
L_00416454:; BB(0x00416454);
    /* 00416454: movzx ebx, byte ptr [0xa3b1f0] */ r_ebx = (u32)R8((u32)(0xa3b1f0u));
    /* 0041645b: mov byte ptr [esp + 0x7c], 6 */ W8((u32)(r_esp+0x7cu), 0x6u);
    /* 00416460: mov edx, 0xff */ r_edx = 0xffu;
    /* 00416465: mov eax, 0xff */ r_eax = 0xffu;
    /* 0041646a: mov byte ptr [esp + 0x7d], 7 */ W8((u32)(r_esp+0x7du), 0x7u);
    /* 0041646f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00416473: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00416475: mov byte ptr [esp + 0x7e], 0xff */ W8((u32)(r_esp+0x7eu), 0xffu);
    /* 0041647a: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0041647e: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
L_00416482:; BB(0x00416482);
    /* 00416482: mov ebx, esi */ r_ebx = r_esi;
    /* 00416484: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0041648a: movzx edx, byte ptr [esp + ebx + 0x7c] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041648f: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416495: je 0x416962 */ if (fZ) goto L_00416962;
L_0041649b:; BB(0x0041649b);
    /* 0041649b: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 0041649f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004164a1: je 0x41652e */ if (fZ) goto L_0041652e;
L_004164a7:; BB(0x004164a7);
    /* 004164a7: mov edi, edx */ r_edi = r_edx;
    /* 004164a9: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004164ab: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 004164af: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004164b2: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004164b5: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004164b9: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 004164c0: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 004164c2: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004164c5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004164c7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004164c9: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 004164cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004164cd: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004164d1: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004164d5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004164d8: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4164ddu); f_0082e900();
    /* 004164dd: sub edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004164e1: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004164e5: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004164e8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004164ec: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004164f1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004164f6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004164fa: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004164fe: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416502: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416506: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 0041650b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041650e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416511: sub eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00416515: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416518: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041651a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041651d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041651f: jge 0x41652e */ if ((fS==fO)) goto L_0041652e;
L_00416521:; BB(0x00416521);
    /* 00416521: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416525: movzx eax, byte ptr [esp + ebx + 0x7c] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041652a: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_0041652e:; BB(0x0041652e);
    /* 0041652e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416531: jmp 0x416482 */ goto L_00416482;
L_0041656e:; BB(0x0041656e);
    /* 0041656e: mov ebx, esi */ r_ebx = r_esi;
    /* 00416570: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00416576: movzx edx, byte ptr [esp + ebx + 0x70] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x70u));
    /* 0041657b: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416581: je 0x416b56 */ if (fZ) goto L_00416b56;
L_00416587:; BB(0x00416587);
    /* 00416587: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 0041658b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041658d: je 0x41661a */ if (fZ) goto L_0041661a;
L_00416593:; BB(0x00416593);
    /* 00416593: mov edi, edx */ r_edi = r_edx;
    /* 00416595: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416597: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0041659b: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0041659e: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004165a1: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004165a5: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 004165ac: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 004165ae: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004165b1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004165b3: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004165b5: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 004165b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004165b9: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004165bd: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004165c1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004165c4: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4165c9u); f_0082e900();
    /* 004165c9: sub edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004165cd: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004165d1: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004165d4: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004165d8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004165dd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004165e2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004165e6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004165ea: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004165ee: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004165f2: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 004165f7: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004165fa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004165fd: sub eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00416601: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416604: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416606: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416609: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041660b: jge 0x41661a */ if ((fS==fO)) goto L_0041661a;
L_0041660d:; BB(0x0041660d);
    /* 0041660d: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416611: movzx eax, byte ptr [esp + ebx + 0x70] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x70u));
    /* 00416616: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_0041661a:; BB(0x0041661a);
    /* 0041661a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041661d: jmp 0x41656e */ goto L_0041656e;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x0041656e); r_esp += 4; return;
L_00416962:; BB(0x00416962);
    /* 00416962: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00416966: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0041696a: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041696f: je 0x416991 */ if (fZ) goto L_00416991;
L_00416971:; BB(0x00416971);
    /* 00416971: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416976: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 0041697b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416980u); f_00814298();
    /* 00416980: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416983: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416987: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0041698a: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 0041698f: jmp 0x416998 */ goto L_00416998;
L_00416991:; BB(0x00416991);
    /* 00416991: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
L_00416998:; BB(0x00416998);
    /* 00416998: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041699a: jne 0x416827 */ if (!fZ) goto L_00416827;
L_004169a0:; BB(0x004169a0);
    /* 004169a0: mov byte ptr [esp + 0x81], 1 */ W8((u32)(r_esp+0x81u), 0x1u);
    /* 004169a8: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 004169ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004169ae: mov byte ptr [esp + 0x82], 2 */ W8((u32)(r_esp+0x82u), 0x2u);
    /* 004169b6: mov byte ptr [esp + 0x80], dl */ W8((u32)(r_esp+0x80u), (u8)r_edx);
    /* 004169bd: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
    /* 004169c3: mov byte ptr [esp + 0x83], 3 */ W8((u32)(r_esp+0x83u), 0x3u);
    /* 004169cb: mov edx, 0xff */ r_edx = 0xffu;
    /* 004169d0: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 004169d5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004169d7: mov byte ptr [esp + 0x84], 0xff */ W8((u32)(r_esp+0x84u), 0xffu);
    /* 004169df: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 004169e3: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
L_004169e7:; BB(0x004169e7);
    /* 004169e7: mov ebx, esi */ r_ebx = r_esi;
    /* 004169e9: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004169ef: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 004169f7: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004169fd: je 0x416b21 */ if (fZ) goto L_00416b21;
L_00416a03:; BB(0x00416a03);
    /* 00416a03: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416a07: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416a0b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a0d: je 0x416b19 */ if (fZ) goto L_00416b19;
L_00416a13:; BB(0x00416a13);
    /* 00416a13: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416a17: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416a1a: ja 0x416a8d */ if ((!fC&&!fZ)) goto L_00416a8d;
L_00416a1c:; BB(0x00416a1c);
    /* 00416a1c: mov ecx, dword ptr [eax*4 + 0x8faef8] */ r_ecx = R32((u32)(r_eax*4+0x8faef8u));
    /* 00416a23: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416a8d:; BB(0x00416a8d);
    /* 00416a8d: mov ebp, edx */ r_ebp = r_edx;
    /* 00416a8f: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416a91: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00416a95: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416a98: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416a9b: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416a9d: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416aa1: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416aa4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416aa6: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416aa8: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416aab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416aac: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416ab0: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416ab4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416ab7: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416abcu); f_0082e900();
    /* 00416abc: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416ac0: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416ac4: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ac7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416acb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416ad0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416ad5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416ad9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416add: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416ae1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416ae5: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416ae9: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416aee: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416af3: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416af6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416af9: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416afd: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416b00: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416b02: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416b05: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416b07: jge 0x416b19 */ if ((fS==fO)) goto L_00416b19;
L_00416b09:; BB(0x00416b09);
    /* 00416b09: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416b0d: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 00416b15: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416b19:; BB(0x00416b19);
    /* 00416b19: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416b1c: jmp 0x4169e7 */ goto L_004169e7;
L_00416b21:; BB(0x00416b21);
    /* 00416b21: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b25: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b2a: je 0x416827 */ if (fZ) goto L_00416827;
L_00416b30:; BB(0x00416b30);
    /* 00416b30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b35: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b3a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b3fu); f_00814298();
    /* 00416b3f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b42: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b46: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b4b: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416b51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416b52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416b53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416b54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416b55: ret  */ FN_RET(0x0041656e); r_esp += 4; return;
L_00416b56:; BB(0x00416b56);
    /* 00416b56: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00416b5a: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416b5e: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b63: je 0x416b85 */ if (fZ) goto L_00416b85;
L_00416b65:; BB(0x00416b65);
    /* 00416b65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b6a: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b6f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b74u); f_00814298();
    /* 00416b74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b77: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416b7b: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416b7e: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b83: jmp 0x416b8c */ goto L_00416b8c;
L_00416b85:; BB(0x00416b85);
    /* 00416b85: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
L_00416b8c:; BB(0x00416b8c);
    /* 00416b8c: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b8e: jne 0x416438 */ if (!fZ) goto L_00416438;
L_00416b94:; BB(0x00416b94);
    /* 00416b94: mov dword ptr [ebp + 0x80], 1 */ W32((u32)(r_ebp+0x80u), 0x1u);
    /* 00416b9e: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 00416ba2: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 00416ba7: mov byte ptr [esp + 0x78], 6 */ W8((u32)(r_esp+0x78u), 0x6u);
    /* 00416bac: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 00416bb0: mov edx, 0xff */ r_edx = 0xffu;
    /* 00416bb5: mov byte ptr [esp + 0x79], 7 */ W8((u32)(r_esp+0x79u), 0x7u);
    /* 00416bba: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00416bbe: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00416bc0: mov byte ptr [esp + 0x7a], 0xff */ W8((u32)(r_esp+0x7au), 0xffu);
L_00416bc5:; BB(0x00416bc5);
    /* 00416bc5: mov ebx, esi */ r_ebx = r_esi;
    /* 00416bc7: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00416bcd: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416bd2: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416bd8: je 0x416cf9 */ if (fZ) goto L_00416cf9;
L_00416bde:; BB(0x00416bde);
    /* 00416bde: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416be2: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416be6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416be8: je 0x416cf1 */ if (fZ) goto L_00416cf1;
L_00416bee:; BB(0x00416bee);
    /* 00416bee: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416bf2: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416bf5: ja 0x416c68 */ if ((!fC&&!fZ)) goto L_00416c68;
L_00416bf7:; BB(0x00416bf7);
    /* 00416bf7: mov ecx, dword ptr [eax*4 + 0x8faf18] */ r_ecx = R32((u32)(r_eax*4+0x8faf18u));
    /* 00416bfe: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416c68:; BB(0x00416c68);
    /* 00416c68: mov ebp, edx */ r_ebp = r_edx;
    /* 00416c6a: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416c6c: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00416c70: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416c73: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416c76: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416c78: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416c7c: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416c7f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416c81: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416c83: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416c86: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416c87: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416c8b: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416c8f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416c92: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416c97u); f_0082e900();
    /* 00416c97: sub ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416c9b: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00416c9f: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ca2: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416ca6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416cab: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416cb0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416cb4: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416cb8: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416cbc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416cc0: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416cc4: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416cc9: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416cce: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd1: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416cd4: sub edx, dword ptr [esp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd8: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416cdb: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416cdd: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416ce0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416ce2: jge 0x416cf1 */ if ((fS==fO)) goto L_00416cf1;
L_00416ce4:; BB(0x00416ce4);
    /* 00416ce4: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416ce8: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416ced: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
L_00416cf1:; BB(0x00416cf1);
    /* 00416cf1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416cf4: jmp 0x416bc5 */ goto L_00416bc5;
L_00416cf9:; BB(0x00416cf9);
    /* 00416cf9: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00416cfd: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d01: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d06: je 0x416438 */ if (fZ) goto L_00416438;
L_00416d0c:; BB(0x00416d0c);
    /* 00416d0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416d0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d11: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416d16: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416d1bu); f_00814298();
    /* 00416d1b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416d1e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d22: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416d27: jmp 0x416438 */ goto L_00416438;
}

void f_00416572(void)
{
    FN_ENTER(0x00416572);
    goto L_00416572;
L_00416438:; BB(0x00416438);
    /* 00416438: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643c: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00416441: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 00416447: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x41644cu); f_007c0c6c();
    /* 0041644c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041644e: je 0x416827 */ if (fZ) goto L_00416827;
L_00416454:; BB(0x00416454);
    /* 00416454: movzx ebx, byte ptr [0xa3b1f0] */ r_ebx = (u32)R8((u32)(0xa3b1f0u));
    /* 0041645b: mov byte ptr [esp + 0x7c], 6 */ W8((u32)(r_esp+0x7cu), 0x6u);
    /* 00416460: mov edx, 0xff */ r_edx = 0xffu;
    /* 00416465: mov eax, 0xff */ r_eax = 0xffu;
    /* 0041646a: mov byte ptr [esp + 0x7d], 7 */ W8((u32)(r_esp+0x7du), 0x7u);
    /* 0041646f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00416473: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00416475: mov byte ptr [esp + 0x7e], 0xff */ W8((u32)(r_esp+0x7eu), 0xffu);
    /* 0041647a: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0041647e: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
L_00416482:; BB(0x00416482);
    /* 00416482: mov ebx, esi */ r_ebx = r_esi;
    /* 00416484: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0041648a: movzx edx, byte ptr [esp + ebx + 0x7c] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041648f: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416495: je 0x416962 */ if (fZ) goto L_00416962;
L_0041649b:; BB(0x0041649b);
    /* 0041649b: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 0041649f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004164a1: je 0x41652e */ if (fZ) goto L_0041652e;
L_004164a7:; BB(0x004164a7);
    /* 004164a7: mov edi, edx */ r_edi = r_edx;
    /* 004164a9: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004164ab: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 004164af: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004164b2: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004164b5: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004164b9: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 004164c0: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 004164c2: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004164c5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004164c7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004164c9: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 004164cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004164cd: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004164d1: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004164d5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004164d8: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4164ddu); f_0082e900();
    /* 004164dd: sub edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004164e1: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004164e5: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004164e8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004164ec: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004164f1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004164f6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004164fa: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004164fe: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416502: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416506: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 0041650b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041650e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416511: sub eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00416515: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416518: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041651a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041651d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041651f: jge 0x41652e */ if ((fS==fO)) goto L_0041652e;
L_00416521:; BB(0x00416521);
    /* 00416521: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416525: movzx eax, byte ptr [esp + ebx + 0x7c] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041652a: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_0041652e:; BB(0x0041652e);
    /* 0041652e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416531: jmp 0x416482 */ goto L_00416482;
L_0041656e:; BB(0x0041656e);
    /* 0041656e: mov ebx, esi */ r_ebx = r_esi;
    /* 00416570: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
L_00416572:; BB(0x00416572);
    /* 00416572: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00416574: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00416576: movzx edx, byte ptr [esp + ebx + 0x70] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x70u));
    /* 0041657b: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416581: je 0x416b56 */ if (fZ) goto L_00416b56;
L_00416587:; BB(0x00416587);
    /* 00416587: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 0041658b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041658d: je 0x41661a */ if (fZ) goto L_0041661a;
L_00416593:; BB(0x00416593);
    /* 00416593: mov edi, edx */ r_edi = r_edx;
    /* 00416595: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416597: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0041659b: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0041659e: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004165a1: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004165a5: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 004165ac: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 004165ae: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004165b1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004165b3: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004165b5: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 004165b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004165b9: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004165bd: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004165c1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004165c4: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4165c9u); f_0082e900();
    /* 004165c9: sub edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004165cd: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004165d1: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004165d4: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004165d8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004165dd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004165e2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004165e6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004165ea: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004165ee: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004165f2: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 004165f7: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004165fa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004165fd: sub eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00416601: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416604: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416606: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416609: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041660b: jge 0x41661a */ if ((fS==fO)) goto L_0041661a;
L_0041660d:; BB(0x0041660d);
    /* 0041660d: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416611: movzx eax, byte ptr [esp + ebx + 0x70] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x70u));
    /* 00416616: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_0041661a:; BB(0x0041661a);
    /* 0041661a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041661d: jmp 0x41656e */ goto L_0041656e;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00416572); r_esp += 4; return;
L_00416962:; BB(0x00416962);
    /* 00416962: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00416966: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0041696a: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041696f: je 0x416991 */ if (fZ) goto L_00416991;
L_00416971:; BB(0x00416971);
    /* 00416971: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416976: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 0041697b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416980u); f_00814298();
    /* 00416980: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416983: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416987: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0041698a: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 0041698f: jmp 0x416998 */ goto L_00416998;
L_00416991:; BB(0x00416991);
    /* 00416991: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
L_00416998:; BB(0x00416998);
    /* 00416998: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041699a: jne 0x416827 */ if (!fZ) goto L_00416827;
L_004169a0:; BB(0x004169a0);
    /* 004169a0: mov byte ptr [esp + 0x81], 1 */ W8((u32)(r_esp+0x81u), 0x1u);
    /* 004169a8: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 004169ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004169ae: mov byte ptr [esp + 0x82], 2 */ W8((u32)(r_esp+0x82u), 0x2u);
    /* 004169b6: mov byte ptr [esp + 0x80], dl */ W8((u32)(r_esp+0x80u), (u8)r_edx);
    /* 004169bd: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
    /* 004169c3: mov byte ptr [esp + 0x83], 3 */ W8((u32)(r_esp+0x83u), 0x3u);
    /* 004169cb: mov edx, 0xff */ r_edx = 0xffu;
    /* 004169d0: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 004169d5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004169d7: mov byte ptr [esp + 0x84], 0xff */ W8((u32)(r_esp+0x84u), 0xffu);
    /* 004169df: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 004169e3: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
L_004169e7:; BB(0x004169e7);
    /* 004169e7: mov ebx, esi */ r_ebx = r_esi;
    /* 004169e9: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004169ef: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 004169f7: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004169fd: je 0x416b21 */ if (fZ) goto L_00416b21;
L_00416a03:; BB(0x00416a03);
    /* 00416a03: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416a07: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416a0b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a0d: je 0x416b19 */ if (fZ) goto L_00416b19;
L_00416a13:; BB(0x00416a13);
    /* 00416a13: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416a17: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416a1a: ja 0x416a8d */ if ((!fC&&!fZ)) goto L_00416a8d;
L_00416a1c:; BB(0x00416a1c);
    /* 00416a1c: mov ecx, dword ptr [eax*4 + 0x8faef8] */ r_ecx = R32((u32)(r_eax*4+0x8faef8u));
    /* 00416a23: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416a8d:; BB(0x00416a8d);
    /* 00416a8d: mov ebp, edx */ r_ebp = r_edx;
    /* 00416a8f: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416a91: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00416a95: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416a98: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416a9b: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416a9d: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416aa1: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416aa4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416aa6: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416aa8: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416aab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416aac: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416ab0: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416ab4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416ab7: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416abcu); f_0082e900();
    /* 00416abc: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416ac0: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416ac4: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ac7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416acb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416ad0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416ad5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416ad9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416add: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416ae1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416ae5: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416ae9: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416aee: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416af3: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416af6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416af9: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416afd: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416b00: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416b02: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416b05: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416b07: jge 0x416b19 */ if ((fS==fO)) goto L_00416b19;
L_00416b09:; BB(0x00416b09);
    /* 00416b09: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416b0d: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 00416b15: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416b19:; BB(0x00416b19);
    /* 00416b19: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416b1c: jmp 0x4169e7 */ goto L_004169e7;
L_00416b21:; BB(0x00416b21);
    /* 00416b21: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b25: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b2a: je 0x416827 */ if (fZ) goto L_00416827;
L_00416b30:; BB(0x00416b30);
    /* 00416b30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b35: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b3a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b3fu); f_00814298();
    /* 00416b3f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b42: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b46: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b4b: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416b51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416b52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416b53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416b54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416b55: ret  */ FN_RET(0x00416572); r_esp += 4; return;
L_00416b56:; BB(0x00416b56);
    /* 00416b56: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00416b5a: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416b5e: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b63: je 0x416b85 */ if (fZ) goto L_00416b85;
L_00416b65:; BB(0x00416b65);
    /* 00416b65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b6a: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b6f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b74u); f_00814298();
    /* 00416b74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b77: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416b7b: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416b7e: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b83: jmp 0x416b8c */ goto L_00416b8c;
L_00416b85:; BB(0x00416b85);
    /* 00416b85: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
L_00416b8c:; BB(0x00416b8c);
    /* 00416b8c: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b8e: jne 0x416438 */ if (!fZ) goto L_00416438;
L_00416b94:; BB(0x00416b94);
    /* 00416b94: mov dword ptr [ebp + 0x80], 1 */ W32((u32)(r_ebp+0x80u), 0x1u);
    /* 00416b9e: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 00416ba2: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 00416ba7: mov byte ptr [esp + 0x78], 6 */ W8((u32)(r_esp+0x78u), 0x6u);
    /* 00416bac: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 00416bb0: mov edx, 0xff */ r_edx = 0xffu;
    /* 00416bb5: mov byte ptr [esp + 0x79], 7 */ W8((u32)(r_esp+0x79u), 0x7u);
    /* 00416bba: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00416bbe: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00416bc0: mov byte ptr [esp + 0x7a], 0xff */ W8((u32)(r_esp+0x7au), 0xffu);
L_00416bc5:; BB(0x00416bc5);
    /* 00416bc5: mov ebx, esi */ r_ebx = r_esi;
    /* 00416bc7: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00416bcd: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416bd2: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416bd8: je 0x416cf9 */ if (fZ) goto L_00416cf9;
L_00416bde:; BB(0x00416bde);
    /* 00416bde: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416be2: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416be6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416be8: je 0x416cf1 */ if (fZ) goto L_00416cf1;
L_00416bee:; BB(0x00416bee);
    /* 00416bee: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416bf2: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416bf5: ja 0x416c68 */ if ((!fC&&!fZ)) goto L_00416c68;
L_00416bf7:; BB(0x00416bf7);
    /* 00416bf7: mov ecx, dword ptr [eax*4 + 0x8faf18] */ r_ecx = R32((u32)(r_eax*4+0x8faf18u));
    /* 00416bfe: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416c68:; BB(0x00416c68);
    /* 00416c68: mov ebp, edx */ r_ebp = r_edx;
    /* 00416c6a: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416c6c: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00416c70: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416c73: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416c76: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416c78: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416c7c: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416c7f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416c81: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416c83: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416c86: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416c87: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416c8b: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416c8f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416c92: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416c97u); f_0082e900();
    /* 00416c97: sub ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416c9b: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00416c9f: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ca2: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416ca6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416cab: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416cb0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416cb4: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416cb8: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416cbc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416cc0: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416cc4: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416cc9: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416cce: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd1: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416cd4: sub edx, dword ptr [esp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd8: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416cdb: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416cdd: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416ce0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416ce2: jge 0x416cf1 */ if ((fS==fO)) goto L_00416cf1;
L_00416ce4:; BB(0x00416ce4);
    /* 00416ce4: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416ce8: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416ced: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
L_00416cf1:; BB(0x00416cf1);
    /* 00416cf1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416cf4: jmp 0x416bc5 */ goto L_00416bc5;
L_00416cf9:; BB(0x00416cf9);
    /* 00416cf9: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00416cfd: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d01: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d06: je 0x416438 */ if (fZ) goto L_00416438;
L_00416d0c:; BB(0x00416d0c);
    /* 00416d0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416d0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d11: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416d16: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416d1bu); f_00814298();
    /* 00416d1b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416d1e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d22: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416d27: jmp 0x416438 */ goto L_00416438;
}

void f_00416574(void)
{
    FN_ENTER(0x00416574);
    goto L_00416574;
L_00416438:; BB(0x00416438);
    /* 00416438: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643c: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00416441: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 00416447: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x41644cu); f_007c0c6c();
    /* 0041644c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041644e: je 0x416827 */ if (fZ) goto L_00416827;
L_00416454:; BB(0x00416454);
    /* 00416454: movzx ebx, byte ptr [0xa3b1f0] */ r_ebx = (u32)R8((u32)(0xa3b1f0u));
    /* 0041645b: mov byte ptr [esp + 0x7c], 6 */ W8((u32)(r_esp+0x7cu), 0x6u);
    /* 00416460: mov edx, 0xff */ r_edx = 0xffu;
    /* 00416465: mov eax, 0xff */ r_eax = 0xffu;
    /* 0041646a: mov byte ptr [esp + 0x7d], 7 */ W8((u32)(r_esp+0x7du), 0x7u);
    /* 0041646f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00416473: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00416475: mov byte ptr [esp + 0x7e], 0xff */ W8((u32)(r_esp+0x7eu), 0xffu);
    /* 0041647a: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0041647e: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
L_00416482:; BB(0x00416482);
    /* 00416482: mov ebx, esi */ r_ebx = r_esi;
    /* 00416484: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0041648a: movzx edx, byte ptr [esp + ebx + 0x7c] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041648f: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416495: je 0x416962 */ if (fZ) goto L_00416962;
L_0041649b:; BB(0x0041649b);
    /* 0041649b: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 0041649f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004164a1: je 0x41652e */ if (fZ) goto L_0041652e;
L_004164a7:; BB(0x004164a7);
    /* 004164a7: mov edi, edx */ r_edi = r_edx;
    /* 004164a9: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004164ab: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 004164af: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004164b2: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004164b5: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004164b9: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 004164c0: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 004164c2: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004164c5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004164c7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004164c9: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 004164cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004164cd: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004164d1: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004164d5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004164d8: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4164ddu); f_0082e900();
    /* 004164dd: sub edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004164e1: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004164e5: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004164e8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004164ec: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004164f1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004164f6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004164fa: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004164fe: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416502: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416506: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 0041650b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041650e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416511: sub eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00416515: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416518: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041651a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041651d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041651f: jge 0x41652e */ if ((fS==fO)) goto L_0041652e;
L_00416521:; BB(0x00416521);
    /* 00416521: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416525: movzx eax, byte ptr [esp + ebx + 0x7c] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041652a: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_0041652e:; BB(0x0041652e);
    /* 0041652e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416531: jmp 0x416482 */ goto L_00416482;
L_0041656e:; BB(0x0041656e);
    /* 0041656e: mov ebx, esi */ r_ebx = r_esi;
    /* 00416570: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
L_00416574:; BB(0x00416574);
    /* 00416574: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00416576: movzx edx, byte ptr [esp + ebx + 0x70] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x70u));
    /* 0041657b: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416581: je 0x416b56 */ if (fZ) goto L_00416b56;
L_00416587:; BB(0x00416587);
    /* 00416587: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 0041658b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041658d: je 0x41661a */ if (fZ) goto L_0041661a;
L_00416593:; BB(0x00416593);
    /* 00416593: mov edi, edx */ r_edi = r_edx;
    /* 00416595: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416597: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0041659b: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0041659e: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004165a1: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004165a5: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 004165ac: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 004165ae: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004165b1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004165b3: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004165b5: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 004165b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004165b9: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004165bd: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004165c1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004165c4: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4165c9u); f_0082e900();
    /* 004165c9: sub edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004165cd: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004165d1: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004165d4: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004165d8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004165dd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004165e2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004165e6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004165ea: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004165ee: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004165f2: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 004165f7: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004165fa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004165fd: sub eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00416601: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416604: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416606: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416609: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041660b: jge 0x41661a */ if ((fS==fO)) goto L_0041661a;
L_0041660d:; BB(0x0041660d);
    /* 0041660d: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416611: movzx eax, byte ptr [esp + ebx + 0x70] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x70u));
    /* 00416616: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_0041661a:; BB(0x0041661a);
    /* 0041661a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041661d: jmp 0x41656e */ goto L_0041656e;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00416574); r_esp += 4; return;
L_00416962:; BB(0x00416962);
    /* 00416962: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00416966: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0041696a: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041696f: je 0x416991 */ if (fZ) goto L_00416991;
L_00416971:; BB(0x00416971);
    /* 00416971: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416976: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 0041697b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416980u); f_00814298();
    /* 00416980: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416983: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416987: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0041698a: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 0041698f: jmp 0x416998 */ goto L_00416998;
L_00416991:; BB(0x00416991);
    /* 00416991: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
L_00416998:; BB(0x00416998);
    /* 00416998: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041699a: jne 0x416827 */ if (!fZ) goto L_00416827;
L_004169a0:; BB(0x004169a0);
    /* 004169a0: mov byte ptr [esp + 0x81], 1 */ W8((u32)(r_esp+0x81u), 0x1u);
    /* 004169a8: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 004169ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004169ae: mov byte ptr [esp + 0x82], 2 */ W8((u32)(r_esp+0x82u), 0x2u);
    /* 004169b6: mov byte ptr [esp + 0x80], dl */ W8((u32)(r_esp+0x80u), (u8)r_edx);
    /* 004169bd: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
    /* 004169c3: mov byte ptr [esp + 0x83], 3 */ W8((u32)(r_esp+0x83u), 0x3u);
    /* 004169cb: mov edx, 0xff */ r_edx = 0xffu;
    /* 004169d0: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 004169d5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004169d7: mov byte ptr [esp + 0x84], 0xff */ W8((u32)(r_esp+0x84u), 0xffu);
    /* 004169df: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 004169e3: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
L_004169e7:; BB(0x004169e7);
    /* 004169e7: mov ebx, esi */ r_ebx = r_esi;
    /* 004169e9: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004169ef: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 004169f7: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004169fd: je 0x416b21 */ if (fZ) goto L_00416b21;
L_00416a03:; BB(0x00416a03);
    /* 00416a03: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416a07: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416a0b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a0d: je 0x416b19 */ if (fZ) goto L_00416b19;
L_00416a13:; BB(0x00416a13);
    /* 00416a13: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416a17: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416a1a: ja 0x416a8d */ if ((!fC&&!fZ)) goto L_00416a8d;
L_00416a1c:; BB(0x00416a1c);
    /* 00416a1c: mov ecx, dword ptr [eax*4 + 0x8faef8] */ r_ecx = R32((u32)(r_eax*4+0x8faef8u));
    /* 00416a23: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416a8d:; BB(0x00416a8d);
    /* 00416a8d: mov ebp, edx */ r_ebp = r_edx;
    /* 00416a8f: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416a91: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00416a95: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416a98: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416a9b: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416a9d: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416aa1: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416aa4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416aa6: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416aa8: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416aab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416aac: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416ab0: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416ab4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416ab7: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416abcu); f_0082e900();
    /* 00416abc: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416ac0: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416ac4: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ac7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416acb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416ad0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416ad5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416ad9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416add: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416ae1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416ae5: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416ae9: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416aee: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416af3: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416af6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416af9: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416afd: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416b00: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416b02: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416b05: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416b07: jge 0x416b19 */ if ((fS==fO)) goto L_00416b19;
L_00416b09:; BB(0x00416b09);
    /* 00416b09: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416b0d: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 00416b15: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416b19:; BB(0x00416b19);
    /* 00416b19: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416b1c: jmp 0x4169e7 */ goto L_004169e7;
L_00416b21:; BB(0x00416b21);
    /* 00416b21: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b25: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b2a: je 0x416827 */ if (fZ) goto L_00416827;
L_00416b30:; BB(0x00416b30);
    /* 00416b30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b35: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b3a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b3fu); f_00814298();
    /* 00416b3f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b42: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b46: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b4b: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416b51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416b52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416b53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416b54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416b55: ret  */ FN_RET(0x00416574); r_esp += 4; return;
L_00416b56:; BB(0x00416b56);
    /* 00416b56: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00416b5a: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416b5e: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b63: je 0x416b85 */ if (fZ) goto L_00416b85;
L_00416b65:; BB(0x00416b65);
    /* 00416b65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b6a: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b6f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b74u); f_00814298();
    /* 00416b74: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b77: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416b7b: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416b7e: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b83: jmp 0x416b8c */ goto L_00416b8c;
L_00416b85:; BB(0x00416b85);
    /* 00416b85: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
L_00416b8c:; BB(0x00416b8c);
    /* 00416b8c: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b8e: jne 0x416438 */ if (!fZ) goto L_00416438;
L_00416b94:; BB(0x00416b94);
    /* 00416b94: mov dword ptr [ebp + 0x80], 1 */ W32((u32)(r_ebp+0x80u), 0x1u);
    /* 00416b9e: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 00416ba2: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 00416ba7: mov byte ptr [esp + 0x78], 6 */ W8((u32)(r_esp+0x78u), 0x6u);
    /* 00416bac: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 00416bb0: mov edx, 0xff */ r_edx = 0xffu;
    /* 00416bb5: mov byte ptr [esp + 0x79], 7 */ W8((u32)(r_esp+0x79u), 0x7u);
    /* 00416bba: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00416bbe: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00416bc0: mov byte ptr [esp + 0x7a], 0xff */ W8((u32)(r_esp+0x7au), 0xffu);
L_00416bc5:; BB(0x00416bc5);
    /* 00416bc5: mov ebx, esi */ r_ebx = r_esi;
    /* 00416bc7: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00416bcd: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416bd2: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416bd8: je 0x416cf9 */ if (fZ) goto L_00416cf9;
L_00416bde:; BB(0x00416bde);
    /* 00416bde: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416be2: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416be6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416be8: je 0x416cf1 */ if (fZ) goto L_00416cf1;
L_00416bee:; BB(0x00416bee);
    /* 00416bee: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416bf2: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416bf5: ja 0x416c68 */ if ((!fC&&!fZ)) goto L_00416c68;
L_00416bf7:; BB(0x00416bf7);
    /* 00416bf7: mov ecx, dword ptr [eax*4 + 0x8faf18] */ r_ecx = R32((u32)(r_eax*4+0x8faf18u));
    /* 00416bfe: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416c68:; BB(0x00416c68);
    /* 00416c68: mov ebp, edx */ r_ebp = r_edx;
    /* 00416c6a: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416c6c: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00416c70: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416c73: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416c76: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416c78: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416c7c: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416c7f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416c81: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416c83: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416c86: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416c87: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416c8b: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416c8f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416c92: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416c97u); f_0082e900();
    /* 00416c97: sub ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416c9b: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00416c9f: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ca2: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416ca6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416cab: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416cb0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416cb4: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416cb8: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416cbc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416cc0: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416cc4: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416cc9: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416cce: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd1: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416cd4: sub edx, dword ptr [esp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd8: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416cdb: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416cdd: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416ce0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416ce2: jge 0x416cf1 */ if ((fS==fO)) goto L_00416cf1;
L_00416ce4:; BB(0x00416ce4);
    /* 00416ce4: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416ce8: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416ced: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
L_00416cf1:; BB(0x00416cf1);
    /* 00416cf1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416cf4: jmp 0x416bc5 */ goto L_00416bc5;
L_00416cf9:; BB(0x00416cf9);
    /* 00416cf9: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00416cfd: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d01: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d06: je 0x416438 */ if (fZ) goto L_00416438;
L_00416d0c:; BB(0x00416d0c);
    /* 00416d0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416d0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d11: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416d16: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416d1bu); f_00814298();
    /* 00416d1b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416d1e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d22: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416d27: jmp 0x416438 */ goto L_00416438;
}

void f_00416622(void)
{
    FN_ENTER(0x00416622);
    /* 00416622: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00416624: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00416626: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0041662b: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00416631: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x416636u); f_007c0c6c();
    /* 00416636: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416638: je 0x4166bc */ if (fZ) goto L_004166bc;
L_0041663e:; BB(0x0041663e);
    /* 0041663e: movzx ebx, byte ptr [0xa3b1f0] */ r_ebx = (u32)R8((u32)(0xa3b1f0u));
    /* 00416645: mov byte ptr [esp + 0x89], 1 */ W8((u32)(r_esp+0x89u), 0x1u);
    /* 0041664d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041664f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00416651: mov byte ptr [esp + 0x8a], 0xff */ W8((u32)(r_esp+0x8au), 0xffu);
    /* 00416659: mov byte ptr [esp + 0x88], al */ W8((u32)(r_esp+0x88u), (u8)r_eax);
    /* 00416660: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 00416667: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416668: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00416669: call 0x416d3c */ r_esp -= 4; W32(r_esp, 0x41666eu); f_00416d3c();
    /* 0041666e: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416675: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416677: jne 0x4166bc */ if (!fZ) goto L_004166bc;
L_00416679:; BB(0x00416679);
    /* 00416679: mov byte ptr [esp + 0x8c], 4 */ W8((u32)(r_esp+0x8cu), 0x4u);
    /* 00416681: lea edx, [esp + 0x8c] */ r_edx = (u32)(r_esp+0x8cu);
    /* 00416688: mov eax, 1 */ r_eax = 0x1u;
    /* 0041668d: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
    /* 00416693: mov byte ptr [esp + 0x8d], 5 */ W8((u32)(r_esp+0x8du), 0x5u);
    /* 0041669b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041669d: mov byte ptr [esp + 0x8e], 6 */ W8((u32)(r_esp+0x8eu), 0x6u);
    /* 004166a5: mov byte ptr [esp + 0x8f], 7 */ W8((u32)(r_esp+0x8fu), 0x7u);
    /* 004166ad: mov byte ptr [esp + 0x90], 0xff */ W8((u32)(r_esp+0x90u), 0xffu);
    /* 004166b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004166b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004166b7: call 0x416d3c */ r_esp -= 4; W32(r_esp, 0x4166bcu); f_00416d3c();
L_004166bc:; BB(0x004166bc);
    /* 004166bc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004166be: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004166c0: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 004166c5: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004166cb: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x4166d0u); f_007c0c6c();
    /* 004166d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004166d2: je 0x416827 */ if (fZ) goto L_00416827;
L_004166d8:; BB(0x004166d8);
    /* 004166d8: movzx ebx, byte ptr [0xa3b1f0] */ r_ebx = (u32)R8((u32)(0xa3b1f0u));
    /* 004166df: mov byte ptr [esp + 0x94], 4 */ W8((u32)(r_esp+0x94u), 0x4u);
    /* 004166e7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004166e9: mov byte ptr [esp + 0x95], 5 */ W8((u32)(r_esp+0x95u), 0x5u);
    /* 004166f1: lea eax, [esp + 0x94] */ r_eax = (u32)(r_esp+0x94u);
    /* 004166f8: mov byte ptr [esp + 0x96], 6 */ W8((u32)(r_esp+0x96u), 0x6u);
    /* 00416700: mov byte ptr [esp + 0x97], 7 */ W8((u32)(r_esp+0x97u), 0x7u);
    /* 00416708: mov byte ptr [esp + 0x98], 0xff */ W8((u32)(r_esp+0x98u), 0xffu);
    /* 00416710: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00416712: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416713: call 0x416d3c */ r_esp -= 4; W32(r_esp, 0x416718u); f_00416d3c();
    /* 00416718: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 0041671f: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416721: jne 0x416827 */ if (!fZ) goto L_00416827;
L_00416727:; BB(0x00416727);
    /* 00416727: mov byte ptr [esp + 0x9e], 0xff */ W8((u32)(r_esp+0x9eu), 0xffu);
    /* 0041672f: lea ebx, [esp + 0x9c] */ r_ebx = (u32)(r_esp+0x9cu);
    /* 00416736: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416738: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
    /* 0041673e: mov byte ptr [esp + 0x9c], al */ W8((u32)(r_esp+0x9cu), (u8)r_eax);
    /* 00416745: mov edx, 1 */ r_edx = 0x1u;
    /* 0041674a: mov byte ptr [esp + 0x9d], dl */ W8((u32)(r_esp+0x9du), (u8)r_edx);
    /* 00416751: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00416753: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00416754: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00416755: call 0x416d3c */ r_esp -= 4; W32(r_esp, 0x41675au); f_00416d3c();
    /* 0041675a: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416760: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416761: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416762: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416763: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416764: ret  */ FN_RET(0x00416622); r_esp += 4; return;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00416622); r_esp += 4; return;
}

void f_00416765(void)
{
    FN_ENTER(0x00416765);
    /* 00416765: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00416767: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00416769: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0041676e: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 00416774: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x416779u); f_007c0c6c();
    /* 00416779: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041677b: je 0x4167c6 */ if (fZ) goto L_004167c6;
L_0041677d:; BB(0x0041677d);
    /* 0041677d: mov byte ptr [esp + 0xa0], 2 */ W8((u32)(r_esp+0xa0u), 0x2u);
    /* 00416785: lea eax, [esp + 0xa0] */ r_eax = (u32)(r_esp+0xa0u);
    /* 0041678c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0041678e: mov byte ptr [esp + 0xa1], 3 */ W8((u32)(r_esp+0xa1u), 0x3u);
    /* 00416796: mov byte ptr [esp + 0xa2], 4 */ W8((u32)(r_esp+0xa2u), 0x4u);
    /* 0041679e: mov byte ptr [esp + 0xa3], 5 */ W8((u32)(r_esp+0xa3u), 0x5u);
    /* 004167a6: mov byte ptr [esp + 0xa4], 6 */ W8((u32)(r_esp+0xa4u), 0x6u);
    /* 004167ae: mov byte ptr [esp + 0xa5], 7 */ W8((u32)(r_esp+0xa5u), 0x7u);
    /* 004167b6: mov byte ptr [esp + 0xa6], 0xff */ W8((u32)(r_esp+0xa6u), 0xffu);
    /* 004167be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004167c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004167c1: call 0x416d3c */ r_esp -= 4; W32(r_esp, 0x4167c6u); f_00416d3c();
L_004167c6:; BB(0x004167c6);
    /* 004167c6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004167c8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004167ca: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 004167cf: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004167d5: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x4167dau); f_007c0c6c();
    /* 004167da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004167dc: je 0x416827 */ if (fZ) goto L_00416827;
L_004167de:; BB(0x004167de);
    /* 004167de: mov byte ptr [esp + 0xa8], 2 */ W8((u32)(r_esp+0xa8u), 0x2u);
    /* 004167e6: lea eax, [esp + 0xa8] */ r_eax = (u32)(r_esp+0xa8u);
    /* 004167ed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004167ef: mov byte ptr [esp + 0xa9], 3 */ W8((u32)(r_esp+0xa9u), 0x3u);
    /* 004167f7: mov byte ptr [esp + 0xaa], 4 */ W8((u32)(r_esp+0xaau), 0x4u);
    /* 004167ff: mov byte ptr [esp + 0xab], 5 */ W8((u32)(r_esp+0xabu), 0x5u);
    /* 00416807: mov byte ptr [esp + 0xac], 6 */ W8((u32)(r_esp+0xacu), 0x6u);
    /* 0041680f: mov byte ptr [esp + 0xad], 7 */ W8((u32)(r_esp+0xadu), 0x7u);
    /* 00416817: mov byte ptr [esp + 0xae], 0xff */ W8((u32)(r_esp+0xaeu), 0xffu);
    /* 0041681f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00416821: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416822: call 0x416d3c */ r_esp -= 4; W32(r_esp, 0x416827u); f_00416d3c();
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00416765); r_esp += 4; return;
}

void f_00416a25(void)
{
    FN_ENTER(0x00416a25);
    goto L_00416a25;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00416a25); r_esp += 4; return;
L_004169e7:; BB(0x004169e7);
    /* 004169e7: mov ebx, esi */ r_ebx = r_esi;
    /* 004169e9: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004169ef: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 004169f7: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004169fd: je 0x416b21 */ if (fZ) goto L_00416b21;
L_00416a03:; BB(0x00416a03);
    /* 00416a03: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416a07: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416a0b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a0d: je 0x416b19 */ if (fZ) goto L_00416b19;
L_00416a13:; BB(0x00416a13);
    /* 00416a13: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416a17: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416a1a: ja 0x416a8d */ if ((!fC&&!fZ)) goto L_00416a8d;
L_00416a1c:; BB(0x00416a1c);
    /* 00416a1c: mov ecx, dword ptr [eax*4 + 0x8faef8] */ r_ecx = R32((u32)(r_eax*4+0x8faef8u));
    /* 00416a23: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416a25:; BB(0x00416a25);
    /* 00416a25: add eax, -8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416a28: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416a2b: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416a30: jmp 0x416a8d */ goto L_00416a8d;
L_00416a8d:; BB(0x00416a8d);
    /* 00416a8d: mov ebp, edx */ r_ebp = r_edx;
    /* 00416a8f: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416a91: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00416a95: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416a98: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416a9b: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416a9d: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416aa1: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416aa4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416aa6: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416aa8: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416aab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416aac: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416ab0: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416ab4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416ab7: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416abcu); f_0082e900();
    /* 00416abc: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416ac0: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416ac4: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ac7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416acb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416ad0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416ad5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416ad9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416add: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416ae1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416ae5: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416ae9: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416aee: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416af3: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416af6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416af9: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416afd: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416b00: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416b02: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416b05: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416b07: jge 0x416b19 */ if ((fS==fO)) goto L_00416b19;
L_00416b09:; BB(0x00416b09);
    /* 00416b09: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416b0d: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 00416b15: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416b19:; BB(0x00416b19);
    /* 00416b19: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416b1c: jmp 0x4169e7 */ goto L_004169e7;
L_00416b21:; BB(0x00416b21);
    /* 00416b21: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b25: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b2a: je 0x416827 */ if (fZ) goto L_00416827;
L_00416b30:; BB(0x00416b30);
    /* 00416b30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b35: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b3a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b3fu); f_00814298();
    /* 00416b3f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b42: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b46: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b4b: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416b51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416b52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416b53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416b54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416b55: ret  */ FN_RET(0x00416a25); r_esp += 4; return;
}

void f_00416a32(void)
{
    FN_ENTER(0x00416a32);
    goto L_00416a32;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00416a32); r_esp += 4; return;
L_004169e7:; BB(0x004169e7);
    /* 004169e7: mov ebx, esi */ r_ebx = r_esi;
    /* 004169e9: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004169ef: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 004169f7: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004169fd: je 0x416b21 */ if (fZ) goto L_00416b21;
L_00416a03:; BB(0x00416a03);
    /* 00416a03: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416a07: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416a0b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a0d: je 0x416b19 */ if (fZ) goto L_00416b19;
L_00416a13:; BB(0x00416a13);
    /* 00416a13: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416a17: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416a1a: ja 0x416a8d */ if ((!fC&&!fZ)) goto L_00416a8d;
L_00416a1c:; BB(0x00416a1c);
    /* 00416a1c: mov ecx, dword ptr [eax*4 + 0x8faef8] */ r_ecx = R32((u32)(r_eax*4+0x8faef8u));
    /* 00416a23: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416a32:; BB(0x00416a32);
    /* 00416a32: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416a36: mov ebp, dword ptr [ecx + 0x80] */ r_ebp = R32((u32)(r_ecx+0x80u));
    /* 00416a3c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a3e: je 0x416a4d */ if (fZ) goto L_00416a4d;
L_00416a40:; BB(0x00416a40);
    /* 00416a40: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416a43: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416a46: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416a4b: jmp 0x416a8d */ goto L_00416a8d;
L_00416a4d:; BB(0x00416a4d);
    /* 00416a4d: add eax, -6 */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416a50: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416a53: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416a58: jmp 0x416a8d */ goto L_00416a8d;
L_00416a8d:; BB(0x00416a8d);
    /* 00416a8d: mov ebp, edx */ r_ebp = r_edx;
    /* 00416a8f: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416a91: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00416a95: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416a98: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416a9b: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416a9d: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416aa1: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416aa4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416aa6: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416aa8: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416aab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416aac: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416ab0: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416ab4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416ab7: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416abcu); f_0082e900();
    /* 00416abc: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416ac0: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416ac4: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ac7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416acb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416ad0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416ad5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416ad9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416add: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416ae1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416ae5: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416ae9: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416aee: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416af3: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416af6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416af9: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416afd: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416b00: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416b02: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416b05: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416b07: jge 0x416b19 */ if ((fS==fO)) goto L_00416b19;
L_00416b09:; BB(0x00416b09);
    /* 00416b09: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416b0d: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 00416b15: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416b19:; BB(0x00416b19);
    /* 00416b19: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416b1c: jmp 0x4169e7 */ goto L_004169e7;
L_00416b21:; BB(0x00416b21);
    /* 00416b21: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b25: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b2a: je 0x416827 */ if (fZ) goto L_00416827;
L_00416b30:; BB(0x00416b30);
    /* 00416b30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b35: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b3a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b3fu); f_00814298();
    /* 00416b3f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b42: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b46: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b4b: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416b51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416b52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416b53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416b54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416b55: ret  */ FN_RET(0x00416a32); r_esp += 4; return;
}

void f_00416a5a(void)
{
    FN_ENTER(0x00416a5a);
    goto L_00416a5a;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00416a5a); r_esp += 4; return;
L_004169e7:; BB(0x004169e7);
    /* 004169e7: mov ebx, esi */ r_ebx = r_esi;
    /* 004169e9: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004169ef: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 004169f7: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004169fd: je 0x416b21 */ if (fZ) goto L_00416b21;
L_00416a03:; BB(0x00416a03);
    /* 00416a03: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416a07: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416a0b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a0d: je 0x416b19 */ if (fZ) goto L_00416b19;
L_00416a13:; BB(0x00416a13);
    /* 00416a13: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416a17: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416a1a: ja 0x416a8d */ if ((!fC&&!fZ)) goto L_00416a8d;
L_00416a1c:; BB(0x00416a1c);
    /* 00416a1c: mov ecx, dword ptr [eax*4 + 0x8faef8] */ r_ecx = R32((u32)(r_eax*4+0x8faef8u));
    /* 00416a23: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416a5a:; BB(0x00416a5a);
    /* 00416a5a: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416a5e: mov ebp, dword ptr [ecx + 0x80] */ r_ebp = R32((u32)(r_ecx+0x80u));
    /* 00416a64: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a66: je 0x416a75 */ if (fZ) goto L_00416a75;
L_00416a68:; BB(0x00416a68);
    /* 00416a68: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416a6b: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416a6e: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416a73: jmp 0x416a8d */ goto L_00416a8d;
L_00416a75:; BB(0x00416a75);
    /* 00416a75: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416a78: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416a7b: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416a80: jmp 0x416a8d */ goto L_00416a8d;
L_00416a8d:; BB(0x00416a8d);
    /* 00416a8d: mov ebp, edx */ r_ebp = r_edx;
    /* 00416a8f: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416a91: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00416a95: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416a98: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416a9b: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416a9d: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416aa1: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416aa4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416aa6: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416aa8: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416aab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416aac: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416ab0: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416ab4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416ab7: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416abcu); f_0082e900();
    /* 00416abc: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416ac0: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416ac4: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ac7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416acb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416ad0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416ad5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416ad9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416add: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416ae1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416ae5: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416ae9: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416aee: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416af3: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416af6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416af9: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416afd: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416b00: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416b02: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416b05: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416b07: jge 0x416b19 */ if ((fS==fO)) goto L_00416b19;
L_00416b09:; BB(0x00416b09);
    /* 00416b09: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416b0d: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 00416b15: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416b19:; BB(0x00416b19);
    /* 00416b19: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416b1c: jmp 0x4169e7 */ goto L_004169e7;
L_00416b21:; BB(0x00416b21);
    /* 00416b21: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b25: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b2a: je 0x416827 */ if (fZ) goto L_00416827;
L_00416b30:; BB(0x00416b30);
    /* 00416b30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b35: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b3a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b3fu); f_00814298();
    /* 00416b3f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b42: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b46: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b4b: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416b51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416b52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416b53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416b54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416b55: ret  */ FN_RET(0x00416a5a); r_esp += 4; return;
}

void f_00416a82(void)
{
    FN_ENTER(0x00416a82);
    goto L_00416a82;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00416a82); r_esp += 4; return;
L_004169e7:; BB(0x004169e7);
    /* 004169e7: mov ebx, esi */ r_ebx = r_esi;
    /* 004169e9: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004169ef: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 004169f7: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004169fd: je 0x416b21 */ if (fZ) goto L_00416b21;
L_00416a03:; BB(0x00416a03);
    /* 00416a03: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416a07: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416a0b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a0d: je 0x416b19 */ if (fZ) goto L_00416b19;
L_00416a13:; BB(0x00416a13);
    /* 00416a13: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416a17: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416a1a: ja 0x416a8d */ if ((!fC&&!fZ)) goto L_00416a8d;
L_00416a1c:; BB(0x00416a1c);
    /* 00416a1c: mov ecx, dword ptr [eax*4 + 0x8faef8] */ r_ecx = R32((u32)(r_eax*4+0x8faef8u));
    /* 00416a23: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416a82:; BB(0x00416a82);
    /* 00416a82: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416a85: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416a88: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
L_00416a8d:; BB(0x00416a8d);
    /* 00416a8d: mov ebp, edx */ r_ebp = r_edx;
    /* 00416a8f: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416a91: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00416a95: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416a98: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416a9b: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416a9d: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416aa1: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416aa4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416aa6: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416aa8: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416aab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416aac: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416ab0: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416ab4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416ab7: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416abcu); f_0082e900();
    /* 00416abc: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416ac0: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416ac4: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ac7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416acb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416ad0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416ad5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416ad9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416add: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416ae1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416ae5: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416ae9: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416aee: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416af3: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416af6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416af9: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416afd: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416b00: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416b02: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416b05: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416b07: jge 0x416b19 */ if ((fS==fO)) goto L_00416b19;
L_00416b09:; BB(0x00416b09);
    /* 00416b09: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416b0d: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 00416b15: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416b19:; BB(0x00416b19);
    /* 00416b19: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416b1c: jmp 0x4169e7 */ goto L_004169e7;
L_00416b21:; BB(0x00416b21);
    /* 00416b21: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b25: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b2a: je 0x416827 */ if (fZ) goto L_00416827;
L_00416b30:; BB(0x00416b30);
    /* 00416b30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b35: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b3a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b3fu); f_00814298();
    /* 00416b3f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b42: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b46: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b4b: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416b51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416b52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416b53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416b54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416b55: ret  */ FN_RET(0x00416a82); r_esp += 4; return;
}

void f_00416c00(void)
{
    FN_ENTER(0x00416c00);
    goto L_00416c00;
L_00416438:; BB(0x00416438);
    /* 00416438: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643c: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00416441: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 00416447: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x41644cu); f_007c0c6c();
    /* 0041644c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041644e: je 0x416827 */ if (fZ) goto L_00416827;
L_00416454:; BB(0x00416454);
    /* 00416454: movzx ebx, byte ptr [0xa3b1f0] */ r_ebx = (u32)R8((u32)(0xa3b1f0u));
    /* 0041645b: mov byte ptr [esp + 0x7c], 6 */ W8((u32)(r_esp+0x7cu), 0x6u);
    /* 00416460: mov edx, 0xff */ r_edx = 0xffu;
    /* 00416465: mov eax, 0xff */ r_eax = 0xffu;
    /* 0041646a: mov byte ptr [esp + 0x7d], 7 */ W8((u32)(r_esp+0x7du), 0x7u);
    /* 0041646f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00416473: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00416475: mov byte ptr [esp + 0x7e], 0xff */ W8((u32)(r_esp+0x7eu), 0xffu);
    /* 0041647a: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0041647e: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
L_00416482:; BB(0x00416482);
    /* 00416482: mov ebx, esi */ r_ebx = r_esi;
    /* 00416484: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0041648a: movzx edx, byte ptr [esp + ebx + 0x7c] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041648f: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416495: je 0x416962 */ if (fZ) goto L_00416962;
L_0041649b:; BB(0x0041649b);
    /* 0041649b: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 0041649f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004164a1: je 0x41652e */ if (fZ) goto L_0041652e;
L_004164a7:; BB(0x004164a7);
    /* 004164a7: mov edi, edx */ r_edi = r_edx;
    /* 004164a9: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004164ab: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 004164af: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004164b2: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004164b5: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004164b9: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 004164c0: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 004164c2: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004164c5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004164c7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004164c9: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 004164cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004164cd: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004164d1: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004164d5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004164d8: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4164ddu); f_0082e900();
    /* 004164dd: sub edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004164e1: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004164e5: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004164e8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004164ec: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004164f1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004164f6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004164fa: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004164fe: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416502: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416506: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 0041650b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041650e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416511: sub eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00416515: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416518: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041651a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041651d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041651f: jge 0x41652e */ if ((fS==fO)) goto L_0041652e;
L_00416521:; BB(0x00416521);
    /* 00416521: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416525: movzx eax, byte ptr [esp + ebx + 0x7c] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041652a: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_0041652e:; BB(0x0041652e);
    /* 0041652e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416531: jmp 0x416482 */ goto L_00416482;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00416c00); r_esp += 4; return;
L_00416962:; BB(0x00416962);
    /* 00416962: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00416966: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0041696a: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041696f: je 0x416991 */ if (fZ) goto L_00416991;
L_00416971:; BB(0x00416971);
    /* 00416971: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416976: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 0041697b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416980u); f_00814298();
    /* 00416980: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416983: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416987: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0041698a: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 0041698f: jmp 0x416998 */ goto L_00416998;
L_00416991:; BB(0x00416991);
    /* 00416991: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
L_00416998:; BB(0x00416998);
    /* 00416998: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041699a: jne 0x416827 */ if (!fZ) goto L_00416827;
L_004169a0:; BB(0x004169a0);
    /* 004169a0: mov byte ptr [esp + 0x81], 1 */ W8((u32)(r_esp+0x81u), 0x1u);
    /* 004169a8: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 004169ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004169ae: mov byte ptr [esp + 0x82], 2 */ W8((u32)(r_esp+0x82u), 0x2u);
    /* 004169b6: mov byte ptr [esp + 0x80], dl */ W8((u32)(r_esp+0x80u), (u8)r_edx);
    /* 004169bd: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
    /* 004169c3: mov byte ptr [esp + 0x83], 3 */ W8((u32)(r_esp+0x83u), 0x3u);
    /* 004169cb: mov edx, 0xff */ r_edx = 0xffu;
    /* 004169d0: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 004169d5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004169d7: mov byte ptr [esp + 0x84], 0xff */ W8((u32)(r_esp+0x84u), 0xffu);
    /* 004169df: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 004169e3: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
L_004169e7:; BB(0x004169e7);
    /* 004169e7: mov ebx, esi */ r_ebx = r_esi;
    /* 004169e9: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004169ef: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 004169f7: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004169fd: je 0x416b21 */ if (fZ) goto L_00416b21;
L_00416a03:; BB(0x00416a03);
    /* 00416a03: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416a07: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416a0b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a0d: je 0x416b19 */ if (fZ) goto L_00416b19;
L_00416a13:; BB(0x00416a13);
    /* 00416a13: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416a17: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416a1a: ja 0x416a8d */ if ((!fC&&!fZ)) goto L_00416a8d;
L_00416a1c:; BB(0x00416a1c);
    /* 00416a1c: mov ecx, dword ptr [eax*4 + 0x8faef8] */ r_ecx = R32((u32)(r_eax*4+0x8faef8u));
    /* 00416a23: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416a8d:; BB(0x00416a8d);
    /* 00416a8d: mov ebp, edx */ r_ebp = r_edx;
    /* 00416a8f: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416a91: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00416a95: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416a98: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416a9b: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416a9d: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416aa1: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416aa4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416aa6: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416aa8: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416aab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416aac: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416ab0: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416ab4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416ab7: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416abcu); f_0082e900();
    /* 00416abc: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416ac0: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416ac4: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ac7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416acb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416ad0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416ad5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416ad9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416add: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416ae1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416ae5: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416ae9: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416aee: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416af3: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416af6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416af9: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416afd: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416b00: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416b02: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416b05: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416b07: jge 0x416b19 */ if ((fS==fO)) goto L_00416b19;
L_00416b09:; BB(0x00416b09);
    /* 00416b09: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416b0d: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 00416b15: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416b19:; BB(0x00416b19);
    /* 00416b19: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416b1c: jmp 0x4169e7 */ goto L_004169e7;
L_00416b21:; BB(0x00416b21);
    /* 00416b21: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b25: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b2a: je 0x416827 */ if (fZ) goto L_00416827;
L_00416b30:; BB(0x00416b30);
    /* 00416b30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b35: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b3a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b3fu); f_00814298();
    /* 00416b3f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b42: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b46: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b4b: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416b51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416b52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416b53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416b54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416b55: ret  */ FN_RET(0x00416c00); r_esp += 4; return;
L_00416bc5:; BB(0x00416bc5);
    /* 00416bc5: mov ebx, esi */ r_ebx = r_esi;
    /* 00416bc7: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00416bcd: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416bd2: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416bd8: je 0x416cf9 */ if (fZ) goto L_00416cf9;
L_00416bde:; BB(0x00416bde);
    /* 00416bde: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416be2: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416be6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416be8: je 0x416cf1 */ if (fZ) goto L_00416cf1;
L_00416bee:; BB(0x00416bee);
    /* 00416bee: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416bf2: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416bf5: ja 0x416c68 */ if ((!fC&&!fZ)) goto L_00416c68;
L_00416bf7:; BB(0x00416bf7);
    /* 00416bf7: mov ecx, dword ptr [eax*4 + 0x8faf18] */ r_ecx = R32((u32)(r_eax*4+0x8faf18u));
    /* 00416bfe: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416c00:; BB(0x00416c00);
    /* 00416c00: add eax, -8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416c03: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416c06: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416c0b: jmp 0x416c68 */ goto L_00416c68;
L_00416c68:; BB(0x00416c68);
    /* 00416c68: mov ebp, edx */ r_ebp = r_edx;
    /* 00416c6a: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416c6c: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00416c70: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416c73: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416c76: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416c78: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416c7c: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416c7f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416c81: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416c83: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416c86: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416c87: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416c8b: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416c8f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416c92: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416c97u); f_0082e900();
    /* 00416c97: sub ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416c9b: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00416c9f: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ca2: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416ca6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416cab: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416cb0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416cb4: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416cb8: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416cbc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416cc0: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416cc4: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416cc9: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416cce: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd1: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416cd4: sub edx, dword ptr [esp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd8: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416cdb: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416cdd: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416ce0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416ce2: jge 0x416cf1 */ if ((fS==fO)) goto L_00416cf1;
L_00416ce4:; BB(0x00416ce4);
    /* 00416ce4: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416ce8: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416ced: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
L_00416cf1:; BB(0x00416cf1);
    /* 00416cf1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416cf4: jmp 0x416bc5 */ goto L_00416bc5;
L_00416cf9:; BB(0x00416cf9);
    /* 00416cf9: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00416cfd: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d01: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d06: je 0x416438 */ if (fZ) goto L_00416438;
L_00416d0c:; BB(0x00416d0c);
    /* 00416d0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416d0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d11: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416d16: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416d1bu); f_00814298();
    /* 00416d1b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416d1e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d22: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416d27: jmp 0x416438 */ goto L_00416438;
}

void f_00416c0d(void)
{
    FN_ENTER(0x00416c0d);
    goto L_00416c0d;
L_00416438:; BB(0x00416438);
    /* 00416438: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643c: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00416441: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 00416447: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x41644cu); f_007c0c6c();
    /* 0041644c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041644e: je 0x416827 */ if (fZ) goto L_00416827;
L_00416454:; BB(0x00416454);
    /* 00416454: movzx ebx, byte ptr [0xa3b1f0] */ r_ebx = (u32)R8((u32)(0xa3b1f0u));
    /* 0041645b: mov byte ptr [esp + 0x7c], 6 */ W8((u32)(r_esp+0x7cu), 0x6u);
    /* 00416460: mov edx, 0xff */ r_edx = 0xffu;
    /* 00416465: mov eax, 0xff */ r_eax = 0xffu;
    /* 0041646a: mov byte ptr [esp + 0x7d], 7 */ W8((u32)(r_esp+0x7du), 0x7u);
    /* 0041646f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00416473: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00416475: mov byte ptr [esp + 0x7e], 0xff */ W8((u32)(r_esp+0x7eu), 0xffu);
    /* 0041647a: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0041647e: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
L_00416482:; BB(0x00416482);
    /* 00416482: mov ebx, esi */ r_ebx = r_esi;
    /* 00416484: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0041648a: movzx edx, byte ptr [esp + ebx + 0x7c] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041648f: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416495: je 0x416962 */ if (fZ) goto L_00416962;
L_0041649b:; BB(0x0041649b);
    /* 0041649b: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 0041649f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004164a1: je 0x41652e */ if (fZ) goto L_0041652e;
L_004164a7:; BB(0x004164a7);
    /* 004164a7: mov edi, edx */ r_edi = r_edx;
    /* 004164a9: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004164ab: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 004164af: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004164b2: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004164b5: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004164b9: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 004164c0: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 004164c2: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004164c5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004164c7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004164c9: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 004164cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004164cd: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004164d1: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004164d5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004164d8: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4164ddu); f_0082e900();
    /* 004164dd: sub edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004164e1: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004164e5: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004164e8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004164ec: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004164f1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004164f6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004164fa: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004164fe: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416502: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416506: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 0041650b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041650e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416511: sub eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00416515: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416518: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041651a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041651d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041651f: jge 0x41652e */ if ((fS==fO)) goto L_0041652e;
L_00416521:; BB(0x00416521);
    /* 00416521: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416525: movzx eax, byte ptr [esp + ebx + 0x7c] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041652a: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_0041652e:; BB(0x0041652e);
    /* 0041652e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416531: jmp 0x416482 */ goto L_00416482;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00416c0d); r_esp += 4; return;
L_00416962:; BB(0x00416962);
    /* 00416962: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00416966: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0041696a: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041696f: je 0x416991 */ if (fZ) goto L_00416991;
L_00416971:; BB(0x00416971);
    /* 00416971: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416976: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 0041697b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416980u); f_00814298();
    /* 00416980: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416983: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416987: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0041698a: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 0041698f: jmp 0x416998 */ goto L_00416998;
L_00416991:; BB(0x00416991);
    /* 00416991: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
L_00416998:; BB(0x00416998);
    /* 00416998: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041699a: jne 0x416827 */ if (!fZ) goto L_00416827;
L_004169a0:; BB(0x004169a0);
    /* 004169a0: mov byte ptr [esp + 0x81], 1 */ W8((u32)(r_esp+0x81u), 0x1u);
    /* 004169a8: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 004169ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004169ae: mov byte ptr [esp + 0x82], 2 */ W8((u32)(r_esp+0x82u), 0x2u);
    /* 004169b6: mov byte ptr [esp + 0x80], dl */ W8((u32)(r_esp+0x80u), (u8)r_edx);
    /* 004169bd: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
    /* 004169c3: mov byte ptr [esp + 0x83], 3 */ W8((u32)(r_esp+0x83u), 0x3u);
    /* 004169cb: mov edx, 0xff */ r_edx = 0xffu;
    /* 004169d0: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 004169d5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004169d7: mov byte ptr [esp + 0x84], 0xff */ W8((u32)(r_esp+0x84u), 0xffu);
    /* 004169df: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 004169e3: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
L_004169e7:; BB(0x004169e7);
    /* 004169e7: mov ebx, esi */ r_ebx = r_esi;
    /* 004169e9: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004169ef: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 004169f7: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004169fd: je 0x416b21 */ if (fZ) goto L_00416b21;
L_00416a03:; BB(0x00416a03);
    /* 00416a03: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416a07: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416a0b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a0d: je 0x416b19 */ if (fZ) goto L_00416b19;
L_00416a13:; BB(0x00416a13);
    /* 00416a13: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416a17: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416a1a: ja 0x416a8d */ if ((!fC&&!fZ)) goto L_00416a8d;
L_00416a1c:; BB(0x00416a1c);
    /* 00416a1c: mov ecx, dword ptr [eax*4 + 0x8faef8] */ r_ecx = R32((u32)(r_eax*4+0x8faef8u));
    /* 00416a23: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416a8d:; BB(0x00416a8d);
    /* 00416a8d: mov ebp, edx */ r_ebp = r_edx;
    /* 00416a8f: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416a91: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00416a95: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416a98: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416a9b: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416a9d: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416aa1: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416aa4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416aa6: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416aa8: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416aab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416aac: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416ab0: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416ab4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416ab7: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416abcu); f_0082e900();
    /* 00416abc: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416ac0: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416ac4: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ac7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416acb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416ad0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416ad5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416ad9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416add: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416ae1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416ae5: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416ae9: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416aee: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416af3: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416af6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416af9: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416afd: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416b00: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416b02: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416b05: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416b07: jge 0x416b19 */ if ((fS==fO)) goto L_00416b19;
L_00416b09:; BB(0x00416b09);
    /* 00416b09: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416b0d: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 00416b15: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416b19:; BB(0x00416b19);
    /* 00416b19: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416b1c: jmp 0x4169e7 */ goto L_004169e7;
L_00416b21:; BB(0x00416b21);
    /* 00416b21: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b25: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b2a: je 0x416827 */ if (fZ) goto L_00416827;
L_00416b30:; BB(0x00416b30);
    /* 00416b30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b35: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b3a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b3fu); f_00814298();
    /* 00416b3f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b42: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b46: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b4b: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416b51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416b52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416b53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416b54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416b55: ret  */ FN_RET(0x00416c0d); r_esp += 4; return;
L_00416bc5:; BB(0x00416bc5);
    /* 00416bc5: mov ebx, esi */ r_ebx = r_esi;
    /* 00416bc7: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00416bcd: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416bd2: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416bd8: je 0x416cf9 */ if (fZ) goto L_00416cf9;
L_00416bde:; BB(0x00416bde);
    /* 00416bde: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416be2: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416be6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416be8: je 0x416cf1 */ if (fZ) goto L_00416cf1;
L_00416bee:; BB(0x00416bee);
    /* 00416bee: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416bf2: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416bf5: ja 0x416c68 */ if ((!fC&&!fZ)) goto L_00416c68;
L_00416bf7:; BB(0x00416bf7);
    /* 00416bf7: mov ecx, dword ptr [eax*4 + 0x8faf18] */ r_ecx = R32((u32)(r_eax*4+0x8faf18u));
    /* 00416bfe: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416c0d:; BB(0x00416c0d);
    /* 00416c0d: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416c11: mov ebp, dword ptr [ecx + 0x80] */ r_ebp = R32((u32)(r_ecx+0x80u));
    /* 00416c17: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416c19: je 0x416c28 */ if (fZ) goto L_00416c28;
L_00416c1b:; BB(0x00416c1b);
    /* 00416c1b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416c1e: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416c21: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416c26: jmp 0x416c68 */ goto L_00416c68;
L_00416c28:; BB(0x00416c28);
    /* 00416c28: add eax, -6 */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416c2b: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416c2e: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416c33: jmp 0x416c68 */ goto L_00416c68;
L_00416c68:; BB(0x00416c68);
    /* 00416c68: mov ebp, edx */ r_ebp = r_edx;
    /* 00416c6a: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416c6c: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00416c70: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416c73: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416c76: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416c78: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416c7c: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416c7f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416c81: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416c83: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416c86: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416c87: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416c8b: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416c8f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416c92: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416c97u); f_0082e900();
    /* 00416c97: sub ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416c9b: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00416c9f: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ca2: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416ca6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416cab: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416cb0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416cb4: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416cb8: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416cbc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416cc0: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416cc4: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416cc9: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416cce: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd1: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416cd4: sub edx, dword ptr [esp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd8: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416cdb: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416cdd: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416ce0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416ce2: jge 0x416cf1 */ if ((fS==fO)) goto L_00416cf1;
L_00416ce4:; BB(0x00416ce4);
    /* 00416ce4: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416ce8: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416ced: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
L_00416cf1:; BB(0x00416cf1);
    /* 00416cf1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416cf4: jmp 0x416bc5 */ goto L_00416bc5;
L_00416cf9:; BB(0x00416cf9);
    /* 00416cf9: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00416cfd: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d01: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d06: je 0x416438 */ if (fZ) goto L_00416438;
L_00416d0c:; BB(0x00416d0c);
    /* 00416d0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416d0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d11: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416d16: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416d1bu); f_00814298();
    /* 00416d1b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416d1e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d22: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416d27: jmp 0x416438 */ goto L_00416438;
}

void f_00416c35(void)
{
    FN_ENTER(0x00416c35);
    goto L_00416c35;
L_00416438:; BB(0x00416438);
    /* 00416438: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643c: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00416441: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 00416447: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x41644cu); f_007c0c6c();
    /* 0041644c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041644e: je 0x416827 */ if (fZ) goto L_00416827;
L_00416454:; BB(0x00416454);
    /* 00416454: movzx ebx, byte ptr [0xa3b1f0] */ r_ebx = (u32)R8((u32)(0xa3b1f0u));
    /* 0041645b: mov byte ptr [esp + 0x7c], 6 */ W8((u32)(r_esp+0x7cu), 0x6u);
    /* 00416460: mov edx, 0xff */ r_edx = 0xffu;
    /* 00416465: mov eax, 0xff */ r_eax = 0xffu;
    /* 0041646a: mov byte ptr [esp + 0x7d], 7 */ W8((u32)(r_esp+0x7du), 0x7u);
    /* 0041646f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00416473: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00416475: mov byte ptr [esp + 0x7e], 0xff */ W8((u32)(r_esp+0x7eu), 0xffu);
    /* 0041647a: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0041647e: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
L_00416482:; BB(0x00416482);
    /* 00416482: mov ebx, esi */ r_ebx = r_esi;
    /* 00416484: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0041648a: movzx edx, byte ptr [esp + ebx + 0x7c] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041648f: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416495: je 0x416962 */ if (fZ) goto L_00416962;
L_0041649b:; BB(0x0041649b);
    /* 0041649b: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 0041649f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004164a1: je 0x41652e */ if (fZ) goto L_0041652e;
L_004164a7:; BB(0x004164a7);
    /* 004164a7: mov edi, edx */ r_edi = r_edx;
    /* 004164a9: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004164ab: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 004164af: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004164b2: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004164b5: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004164b9: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 004164c0: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 004164c2: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004164c5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004164c7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004164c9: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 004164cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004164cd: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004164d1: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004164d5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004164d8: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4164ddu); f_0082e900();
    /* 004164dd: sub edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004164e1: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004164e5: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004164e8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004164ec: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004164f1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004164f6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004164fa: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004164fe: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416502: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416506: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 0041650b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041650e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416511: sub eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00416515: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416518: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041651a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041651d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041651f: jge 0x41652e */ if ((fS==fO)) goto L_0041652e;
L_00416521:; BB(0x00416521);
    /* 00416521: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416525: movzx eax, byte ptr [esp + ebx + 0x7c] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041652a: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_0041652e:; BB(0x0041652e);
    /* 0041652e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416531: jmp 0x416482 */ goto L_00416482;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00416c35); r_esp += 4; return;
L_00416962:; BB(0x00416962);
    /* 00416962: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00416966: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0041696a: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041696f: je 0x416991 */ if (fZ) goto L_00416991;
L_00416971:; BB(0x00416971);
    /* 00416971: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416976: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 0041697b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416980u); f_00814298();
    /* 00416980: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416983: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416987: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0041698a: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 0041698f: jmp 0x416998 */ goto L_00416998;
L_00416991:; BB(0x00416991);
    /* 00416991: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
L_00416998:; BB(0x00416998);
    /* 00416998: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041699a: jne 0x416827 */ if (!fZ) goto L_00416827;
L_004169a0:; BB(0x004169a0);
    /* 004169a0: mov byte ptr [esp + 0x81], 1 */ W8((u32)(r_esp+0x81u), 0x1u);
    /* 004169a8: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 004169ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004169ae: mov byte ptr [esp + 0x82], 2 */ W8((u32)(r_esp+0x82u), 0x2u);
    /* 004169b6: mov byte ptr [esp + 0x80], dl */ W8((u32)(r_esp+0x80u), (u8)r_edx);
    /* 004169bd: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
    /* 004169c3: mov byte ptr [esp + 0x83], 3 */ W8((u32)(r_esp+0x83u), 0x3u);
    /* 004169cb: mov edx, 0xff */ r_edx = 0xffu;
    /* 004169d0: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 004169d5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004169d7: mov byte ptr [esp + 0x84], 0xff */ W8((u32)(r_esp+0x84u), 0xffu);
    /* 004169df: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 004169e3: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
L_004169e7:; BB(0x004169e7);
    /* 004169e7: mov ebx, esi */ r_ebx = r_esi;
    /* 004169e9: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004169ef: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 004169f7: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004169fd: je 0x416b21 */ if (fZ) goto L_00416b21;
L_00416a03:; BB(0x00416a03);
    /* 00416a03: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416a07: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416a0b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a0d: je 0x416b19 */ if (fZ) goto L_00416b19;
L_00416a13:; BB(0x00416a13);
    /* 00416a13: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416a17: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416a1a: ja 0x416a8d */ if ((!fC&&!fZ)) goto L_00416a8d;
L_00416a1c:; BB(0x00416a1c);
    /* 00416a1c: mov ecx, dword ptr [eax*4 + 0x8faef8] */ r_ecx = R32((u32)(r_eax*4+0x8faef8u));
    /* 00416a23: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416a8d:; BB(0x00416a8d);
    /* 00416a8d: mov ebp, edx */ r_ebp = r_edx;
    /* 00416a8f: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416a91: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00416a95: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416a98: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416a9b: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416a9d: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416aa1: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416aa4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416aa6: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416aa8: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416aab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416aac: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416ab0: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416ab4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416ab7: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416abcu); f_0082e900();
    /* 00416abc: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416ac0: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416ac4: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ac7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416acb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416ad0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416ad5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416ad9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416add: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416ae1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416ae5: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416ae9: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416aee: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416af3: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416af6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416af9: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416afd: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416b00: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416b02: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416b05: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416b07: jge 0x416b19 */ if ((fS==fO)) goto L_00416b19;
L_00416b09:; BB(0x00416b09);
    /* 00416b09: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416b0d: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 00416b15: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416b19:; BB(0x00416b19);
    /* 00416b19: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416b1c: jmp 0x4169e7 */ goto L_004169e7;
L_00416b21:; BB(0x00416b21);
    /* 00416b21: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b25: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b2a: je 0x416827 */ if (fZ) goto L_00416827;
L_00416b30:; BB(0x00416b30);
    /* 00416b30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b35: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b3a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b3fu); f_00814298();
    /* 00416b3f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b42: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b46: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b4b: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416b51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416b52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416b53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416b54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416b55: ret  */ FN_RET(0x00416c35); r_esp += 4; return;
L_00416bc5:; BB(0x00416bc5);
    /* 00416bc5: mov ebx, esi */ r_ebx = r_esi;
    /* 00416bc7: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00416bcd: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416bd2: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416bd8: je 0x416cf9 */ if (fZ) goto L_00416cf9;
L_00416bde:; BB(0x00416bde);
    /* 00416bde: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416be2: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416be6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416be8: je 0x416cf1 */ if (fZ) goto L_00416cf1;
L_00416bee:; BB(0x00416bee);
    /* 00416bee: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416bf2: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416bf5: ja 0x416c68 */ if ((!fC&&!fZ)) goto L_00416c68;
L_00416bf7:; BB(0x00416bf7);
    /* 00416bf7: mov ecx, dword ptr [eax*4 + 0x8faf18] */ r_ecx = R32((u32)(r_eax*4+0x8faf18u));
    /* 00416bfe: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416c35:; BB(0x00416c35);
    /* 00416c35: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416c39: mov ebp, dword ptr [ecx + 0x80] */ r_ebp = R32((u32)(r_ecx+0x80u));
    /* 00416c3f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416c41: je 0x416c50 */ if (fZ) goto L_00416c50;
L_00416c43:; BB(0x00416c43);
    /* 00416c43: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416c46: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416c49: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416c4e: jmp 0x416c68 */ goto L_00416c68;
L_00416c50:; BB(0x00416c50);
    /* 00416c50: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416c53: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416c56: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416c5b: jmp 0x416c68 */ goto L_00416c68;
L_00416c68:; BB(0x00416c68);
    /* 00416c68: mov ebp, edx */ r_ebp = r_edx;
    /* 00416c6a: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416c6c: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00416c70: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416c73: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416c76: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416c78: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416c7c: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416c7f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416c81: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416c83: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416c86: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416c87: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416c8b: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416c8f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416c92: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416c97u); f_0082e900();
    /* 00416c97: sub ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416c9b: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00416c9f: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ca2: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416ca6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416cab: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416cb0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416cb4: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416cb8: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416cbc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416cc0: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416cc4: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416cc9: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416cce: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd1: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416cd4: sub edx, dword ptr [esp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd8: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416cdb: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416cdd: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416ce0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416ce2: jge 0x416cf1 */ if ((fS==fO)) goto L_00416cf1;
L_00416ce4:; BB(0x00416ce4);
    /* 00416ce4: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416ce8: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416ced: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
L_00416cf1:; BB(0x00416cf1);
    /* 00416cf1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416cf4: jmp 0x416bc5 */ goto L_00416bc5;
L_00416cf9:; BB(0x00416cf9);
    /* 00416cf9: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00416cfd: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d01: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d06: je 0x416438 */ if (fZ) goto L_00416438;
L_00416d0c:; BB(0x00416d0c);
    /* 00416d0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416d0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d11: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416d16: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416d1bu); f_00814298();
    /* 00416d1b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416d1e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d22: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416d27: jmp 0x416438 */ goto L_00416438;
}

void f_00416c5d(void)
{
    FN_ENTER(0x00416c5d);
    goto L_00416c5d;
L_00416438:; BB(0x00416438);
    /* 00416438: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041643c: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00416441: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 00416447: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x41644cu); f_007c0c6c();
    /* 0041644c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041644e: je 0x416827 */ if (fZ) goto L_00416827;
L_00416454:; BB(0x00416454);
    /* 00416454: movzx ebx, byte ptr [0xa3b1f0] */ r_ebx = (u32)R8((u32)(0xa3b1f0u));
    /* 0041645b: mov byte ptr [esp + 0x7c], 6 */ W8((u32)(r_esp+0x7cu), 0x6u);
    /* 00416460: mov edx, 0xff */ r_edx = 0xffu;
    /* 00416465: mov eax, 0xff */ r_eax = 0xffu;
    /* 0041646a: mov byte ptr [esp + 0x7d], 7 */ W8((u32)(r_esp+0x7du), 0x7u);
    /* 0041646f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00416473: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00416475: mov byte ptr [esp + 0x7e], 0xff */ W8((u32)(r_esp+0x7eu), 0xffu);
    /* 0041647a: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0041647e: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
L_00416482:; BB(0x00416482);
    /* 00416482: mov ebx, esi */ r_ebx = r_esi;
    /* 00416484: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0041648a: movzx edx, byte ptr [esp + ebx + 0x7c] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041648f: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416495: je 0x416962 */ if (fZ) goto L_00416962;
L_0041649b:; BB(0x0041649b);
    /* 0041649b: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 0041649f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004164a1: je 0x41652e */ if (fZ) goto L_0041652e;
L_004164a7:; BB(0x004164a7);
    /* 004164a7: mov edi, edx */ r_edi = r_edx;
    /* 004164a9: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004164ab: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 004164af: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004164b2: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004164b5: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004164b9: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 004164c0: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 004164c2: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004164c5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004164c7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004164c9: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 004164cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004164cd: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004164d1: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 004164d5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004164d8: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4164ddu); f_0082e900();
    /* 004164dd: sub edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004164e1: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004164e5: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004164e8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004164ec: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004164f1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004164f6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004164fa: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004164fe: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416502: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416506: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 0041650b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041650e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416511: sub eax, dword ptr [esp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00416515: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416518: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041651a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041651d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041651f: jge 0x41652e */ if ((fS==fO)) goto L_0041652e;
L_00416521:; BB(0x00416521);
    /* 00416521: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416525: movzx eax, byte ptr [esp + ebx + 0x7c] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x7cu));
    /* 0041652a: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_0041652e:; BB(0x0041652e);
    /* 0041652e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416531: jmp 0x416482 */ goto L_00416482;
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00416c5d); r_esp += 4; return;
L_00416962:; BB(0x00416962);
    /* 00416962: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00416966: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0041696a: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041696f: je 0x416991 */ if (fZ) goto L_00416991;
L_00416971:; BB(0x00416971);
    /* 00416971: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416976: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 0041697b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416980u); f_00814298();
    /* 00416980: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416983: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00416987: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0041698a: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 0041698f: jmp 0x416998 */ goto L_00416998;
L_00416991:; BB(0x00416991);
    /* 00416991: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
L_00416998:; BB(0x00416998);
    /* 00416998: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041699a: jne 0x416827 */ if (!fZ) goto L_00416827;
L_004169a0:; BB(0x004169a0);
    /* 004169a0: mov byte ptr [esp + 0x81], 1 */ W8((u32)(r_esp+0x81u), 0x1u);
    /* 004169a8: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 004169ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004169ae: mov byte ptr [esp + 0x82], 2 */ W8((u32)(r_esp+0x82u), 0x2u);
    /* 004169b6: mov byte ptr [esp + 0x80], dl */ W8((u32)(r_esp+0x80u), (u8)r_edx);
    /* 004169bd: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
    /* 004169c3: mov byte ptr [esp + 0x83], 3 */ W8((u32)(r_esp+0x83u), 0x3u);
    /* 004169cb: mov edx, 0xff */ r_edx = 0xffu;
    /* 004169d0: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 004169d5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004169d7: mov byte ptr [esp + 0x84], 0xff */ W8((u32)(r_esp+0x84u), 0xffu);
    /* 004169df: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 004169e3: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
L_004169e7:; BB(0x004169e7);
    /* 004169e7: mov ebx, esi */ r_ebx = r_esi;
    /* 004169e9: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004169ef: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 004169f7: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004169fd: je 0x416b21 */ if (fZ) goto L_00416b21;
L_00416a03:; BB(0x00416a03);
    /* 00416a03: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416a07: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416a0b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416a0d: je 0x416b19 */ if (fZ) goto L_00416b19;
L_00416a13:; BB(0x00416a13);
    /* 00416a13: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416a17: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416a1a: ja 0x416a8d */ if ((!fC&&!fZ)) goto L_00416a8d;
L_00416a1c:; BB(0x00416a1c);
    /* 00416a1c: mov ecx, dword ptr [eax*4 + 0x8faef8] */ r_ecx = R32((u32)(r_eax*4+0x8faef8u));
    /* 00416a23: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416a8d:; BB(0x00416a8d);
    /* 00416a8d: mov ebp, edx */ r_ebp = r_edx;
    /* 00416a8f: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416a91: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00416a95: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416a98: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416a9b: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416a9d: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416aa1: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416aa4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416aa6: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416aa8: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416aab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416aac: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416ab0: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416ab4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416ab7: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416abcu); f_0082e900();
    /* 00416abc: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416ac0: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416ac4: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ac7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416acb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416ad0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416ad5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416ad9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416add: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416ae1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416ae5: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416ae9: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416aee: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416af3: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416af6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416af9: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416afd: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416b00: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416b02: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416b05: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416b07: jge 0x416b19 */ if ((fS==fO)) goto L_00416b19;
L_00416b09:; BB(0x00416b09);
    /* 00416b09: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416b0d: movzx edx, byte ptr [esp + ebx + 0x80] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x80u));
    /* 00416b15: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416b19:; BB(0x00416b19);
    /* 00416b19: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416b1c: jmp 0x4169e7 */ goto L_004169e7;
L_00416b21:; BB(0x00416b21);
    /* 00416b21: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b25: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416b2a: je 0x416827 */ if (fZ) goto L_00416827;
L_00416b30:; BB(0x00416b30);
    /* 00416b30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416b35: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416b3a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416b3fu); f_00814298();
    /* 00416b3f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416b42: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00416b46: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416b4b: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416b51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416b52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00416b53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416b54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416b55: ret  */ FN_RET(0x00416c5d); r_esp += 4; return;
L_00416bc5:; BB(0x00416bc5);
    /* 00416bc5: mov ebx, esi */ r_ebx = r_esi;
    /* 00416bc7: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00416bcd: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416bd2: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416bd8: je 0x416cf9 */ if (fZ) goto L_00416cf9;
L_00416bde:; BB(0x00416bde);
    /* 00416bde: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00416be2: mov ebp, dword ptr [ecx + edx*4 + 0x60] */ r_ebp = R32((u32)(r_ecx+r_edx*4+0x60u));
    /* 00416be6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416be8: je 0x416cf1 */ if (fZ) goto L_00416cf1;
L_00416bee:; BB(0x00416bee);
    /* 00416bee: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00416bf2: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416bf5: ja 0x416c68 */ if ((!fC&&!fZ)) goto L_00416c68;
L_00416bf7:; BB(0x00416bf7);
    /* 00416bf7: mov ecx, dword ptr [eax*4 + 0x8faf18] */ r_ecx = R32((u32)(r_eax*4+0x8faf18u));
    /* 00416bfe: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416c5d:; BB(0x00416c5d);
    /* 00416c5d: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416c60: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00416c63: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
L_00416c68:; BB(0x00416c68);
    /* 00416c68: mov ebp, edx */ r_ebp = r_edx;
    /* 00416c6a: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00416c6c: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00416c70: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416c73: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416c76: lea ecx, [eax] */ r_ecx = (u32)(r_eax);
    /* 00416c78: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416c7c: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416c7f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416c81: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416c83: movsx ebp, cl */ r_ebp = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416c86: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416c87: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00416c8b: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416c8f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416c92: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416c97u); f_0082e900();
    /* 00416c97: sub ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00416c9b: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00416c9f: imul ebp, ebp */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebp; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416ca2: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416ca6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416cab: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416cb0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416cb4: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416cb8: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416cbc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416cc0: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00416cc4: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416cc9: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416cce: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd1: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416cd4: sub edx, dword ptr [esp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416cd8: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416cdb: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416cdd: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416ce0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416ce2: jge 0x416cf1 */ if ((fS==fO)) goto L_00416cf1;
L_00416ce4:; BB(0x00416ce4);
    /* 00416ce4: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00416ce8: movzx edx, byte ptr [esp + ebx + 0x78] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x78u));
    /* 00416ced: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
L_00416cf1:; BB(0x00416cf1);
    /* 00416cf1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00416cf4: jmp 0x416bc5 */ goto L_00416bc5;
L_00416cf9:; BB(0x00416cf9);
    /* 00416cf9: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 00416cfd: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d01: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d06: je 0x416438 */ if (fZ) goto L_00416438;
L_00416d0c:; BB(0x00416d0c);
    /* 00416d0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416d0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416d11: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416d16: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416d1bu); f_00814298();
    /* 00416d1b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416d1e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00416d22: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 00416d27: jmp 0x416438 */ goto L_00416438;
}

void f_00416d3c(void) /* sub_416D3C */
{
    FN_ENTER(0x00416d3c);
    /* 00416d3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416d3d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00416d3e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00416d3f: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00416d42: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00416d46: mov edx, 0xff */ r_edx = 0xffu;
    /* 00416d4b: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 00416d50: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416d52: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 00416d56: mov ebx, eax */ r_ebx = r_eax;
    /* 00416d58: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
L_00416d5c:; BB(0x00416d5c);
    /* 00416d5c: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00416d60: movzx esi, bl */ r_esi = (u32)(u8)r_ebx;
    /* 00416d63: movzx eax, byte ptr [esi + edx] */ r_eax = (u32)R8((u32)(r_esi+r_edx));
    /* 00416d67: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d6c: je 0x416fc2 */ if (fZ) goto L_00416fc2;
L_00416d72:; BB(0x00416d72);
    /* 00416d72: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00416d76: mov ecx, dword ptr [edx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x60u));
    /* 00416d7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d7c: je 0x416fba */ if (fZ) goto L_00416fba;
L_00416d82:; BB(0x00416d82);
    /* 00416d82: movzx edx, byte ptr [esp + 0x58] */ r_edx = (u32)R8((u32)(r_esp+0x58u));
    /* 00416d87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d89: jne 0x416e2a */ if (!fZ) goto L_00416e2a;
L_00416d8f:; BB(0x00416d8f);
    /* 00416d8f: mov edi, eax */ r_edi = r_eax;
    /* 00416d91: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416d93: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00416d97: movsx edi, byte ptr [0xa3b1f0] */ r_edi = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416d9e: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00416da1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416da4: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00416da8: lea edx, [edi] */ r_edx = (u32)(r_edi);
    /* 00416daa: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00416dad: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416daf: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00416db1: movsx ecx, dl */ r_ecx = (u32)(i32)(i8)(u8)r_edx;
    /* 00416db4: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00416db8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416db9: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00416dbd: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00416dc1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416dc4: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416dc9u); f_0082e900();
    /* 00416dc9: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 00416dcd: sub ecx, dword ptr [esp + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00416dd1: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00416dd5: imul ecx, ecx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ecx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416dd8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416ddc: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416de1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416de6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416dea: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416dee: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416df2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416df6: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416dfb: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416dfe: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416e01: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416e05: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416e08: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416e0a: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416e0d: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416e0f: jge 0x416fba */ if ((fS==fO)) goto L_00416fba;
L_00416e15:; BB(0x00416e15);
    /* 00416e15: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416e19: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00416e1d: movzx edx, byte ptr [esi + edi] */ r_edx = (u32)R8((u32)(r_esi+r_edi));
    /* 00416e21: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00416e25: jmp 0x416fba */ goto L_00416fba;
L_00416e2a:; BB(0x00416e2a);
    /* 00416e2a: movzx edx, byte ptr [esp + 0x58] */ r_edx = (u32)R8((u32)(r_esp+0x58u));
    /* 00416e2f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416e32: jne 0x416fba */ if (!fZ) goto L_00416fba;
L_00416e38:; BB(0x00416e38);
    /* 00416e38: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416e3f: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00416e43: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416e47: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416e4a: ja 0x416f29 */ if ((!fC&&!fZ)) goto L_00416f29;
L_00416e50:; BB(0x00416e50);
    /* 00416e50: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00416e54: mov ecx, dword ptr [edx*4 + 0x8faf98] */ r_ecx = R32((u32)(r_edx*4+0x8faf98u));
    /* 00416e5b: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416f29:; BB(0x00416f29);
    /* 00416f29: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00416f2d: mov edi, eax */ r_edi = r_eax;
    /* 00416f2f: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416f31: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00416f35: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00416f38: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416f3b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00416f3f: lea ecx, [edx] */ r_ecx = (u32)(r_edx);
    /* 00416f41: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416f44: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416f46: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416f48: movsx edi, cl */ r_edi = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416f4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416f4c: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00416f50: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416f54: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416f57: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416f5cu); f_0082e900();
    /* 00416f5c: sub edi, dword ptr [esp + 0x34] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00416f60: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416f64: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416f67: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416f6b: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416f70: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416f75: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416f79: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416f7d: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416f81: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416f85: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416f8a: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416f8d: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416f90: sub edx, dword ptr [esp + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416f94: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416f97: mov byte ptr [0xa3b1f0], cl */ W8((u32)(0xa3b1f0u), (u8)r_ecx);
    /* 00416f9d: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416f9f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00416fa3: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416fa6: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416fa8: jge 0x416fba */ if ((fS==fO)) goto L_00416fba;
L_00416faa:; BB(0x00416faa);
    /* 00416faa: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416fae: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00416fb2: movzx edx, byte ptr [esi + edi] */ r_edx = (u32)R8((u32)(r_esi+r_edi));
    /* 00416fb6: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416fba:; BB(0x00416fba);
    /* 00416fba: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00416fbd: jmp 0x416d5c */ goto L_00416d5c;
L_00416fc2:; BB(0x00416fc2);
    /* 00416fc2: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00416fc6: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416fcc: je 0x416fe6 */ if (fZ) goto L_00416fe6;
L_00416fce:; BB(0x00416fce);
    /* 00416fce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd3: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416fddu); f_00814298();
    /* 00416fdd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416fe0: mov byte ptr [0xa3b1f0], bl */ W8((u32)(0xa3b1f0u), (u8)r_ebx);
L_00416fe6:; BB(0x00416fe6);
    /* 00416fe6: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416fe9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416fea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416feb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416fec: ret 8 */ FN_RET(0x00416d3c); r_esp += 12; return;
}

void f_00416da0(void)
{
    FN_ENTER(0x00416da0);
    goto L_00416da0;
L_00416d5c:; BB(0x00416d5c);
    /* 00416d5c: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00416d60: movzx esi, bl */ r_esi = (u32)(u8)r_ebx;
    /* 00416d63: movzx eax, byte ptr [esi + edx] */ r_eax = (u32)R8((u32)(r_esi+r_edx));
    /* 00416d67: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d6c: je 0x416fc2 */ if (fZ) goto L_00416fc2;
L_00416d72:; BB(0x00416d72);
    /* 00416d72: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00416d76: mov ecx, dword ptr [edx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x60u));
    /* 00416d7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d7c: je 0x416fba */ if (fZ) goto L_00416fba;
L_00416d82:; BB(0x00416d82);
    /* 00416d82: movzx edx, byte ptr [esp + 0x58] */ r_edx = (u32)R8((u32)(r_esp+0x58u));
    /* 00416d87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d89: jne 0x416e2a */ if (!fZ) goto L_00416e2a;
L_00416d8f:; BB(0x00416d8f);
    /* 00416d8f: mov edi, eax */ r_edi = r_eax;
    /* 00416d91: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416d93: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00416d97: movsx edi, byte ptr [0xa3b1f0] */ r_edi = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416d9e: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00416da0:; BB(0x00416da0);
    /* 00416da0: add dword ptr [edi], ecx */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00416da1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416da2: mov dh, 0xc0 */ r_edx = (r_edx & 0xffff00ffu) | (((0xc0u) & 0xffu) << 8);
    /* 00416da4: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00416da8: lea edx, [edi] */ r_edx = (u32)(r_edi);
    /* 00416daa: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00416dad: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416daf: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00416db1: movsx ecx, dl */ r_ecx = (u32)(i32)(i8)(u8)r_edx;
    /* 00416db4: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00416db8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416db9: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00416dbd: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00416dc1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416dc4: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416dc9u); f_0082e900();
    /* 00416dc9: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 00416dcd: sub ecx, dword ptr [esp + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00416dd1: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00416dd5: imul ecx, ecx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ecx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416dd8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416ddc: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416de1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416de6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416dea: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416dee: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416df2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416df6: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416dfb: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416dfe: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416e01: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416e05: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416e08: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416e0a: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416e0d: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416e0f: jge 0x416fba */ if ((fS==fO)) goto L_00416fba;
L_00416e15:; BB(0x00416e15);
    /* 00416e15: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416e19: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00416e1d: movzx edx, byte ptr [esi + edi] */ r_edx = (u32)R8((u32)(r_esi+r_edi));
    /* 00416e21: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00416e25: jmp 0x416fba */ goto L_00416fba;
L_00416e2a:; BB(0x00416e2a);
    /* 00416e2a: movzx edx, byte ptr [esp + 0x58] */ r_edx = (u32)R8((u32)(r_esp+0x58u));
    /* 00416e2f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416e32: jne 0x416fba */ if (!fZ) goto L_00416fba;
L_00416e38:; BB(0x00416e38);
    /* 00416e38: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416e3f: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00416e43: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416e47: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416e4a: ja 0x416f29 */ if ((!fC&&!fZ)) goto L_00416f29;
L_00416e50:; BB(0x00416e50);
    /* 00416e50: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00416e54: mov ecx, dword ptr [edx*4 + 0x8faf98] */ r_ecx = R32((u32)(r_edx*4+0x8faf98u));
    /* 00416e5b: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416f29:; BB(0x00416f29);
    /* 00416f29: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00416f2d: mov edi, eax */ r_edi = r_eax;
    /* 00416f2f: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416f31: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00416f35: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00416f38: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416f3b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00416f3f: lea ecx, [edx] */ r_ecx = (u32)(r_edx);
    /* 00416f41: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416f44: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416f46: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416f48: movsx edi, cl */ r_edi = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416f4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416f4c: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00416f50: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416f54: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416f57: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416f5cu); f_0082e900();
    /* 00416f5c: sub edi, dword ptr [esp + 0x34] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00416f60: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416f64: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416f67: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416f6b: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416f70: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416f75: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416f79: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416f7d: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416f81: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416f85: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416f8a: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416f8d: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416f90: sub edx, dword ptr [esp + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416f94: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416f97: mov byte ptr [0xa3b1f0], cl */ W8((u32)(0xa3b1f0u), (u8)r_ecx);
    /* 00416f9d: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416f9f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00416fa3: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416fa6: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416fa8: jge 0x416fba */ if ((fS==fO)) goto L_00416fba;
L_00416faa:; BB(0x00416faa);
    /* 00416faa: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416fae: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00416fb2: movzx edx, byte ptr [esi + edi] */ r_edx = (u32)R8((u32)(r_esi+r_edi));
    /* 00416fb6: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416fba:; BB(0x00416fba);
    /* 00416fba: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00416fbd: jmp 0x416d5c */ goto L_00416d5c;
L_00416fc2:; BB(0x00416fc2);
    /* 00416fc2: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00416fc6: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416fcc: je 0x416fe6 */ if (fZ) goto L_00416fe6;
L_00416fce:; BB(0x00416fce);
    /* 00416fce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd3: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416fddu); f_00814298();
    /* 00416fdd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416fe0: mov byte ptr [0xa3b1f0], bl */ W8((u32)(0xa3b1f0u), (u8)r_ebx);
L_00416fe6:; BB(0x00416fe6);
    /* 00416fe6: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416fe9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416fea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416feb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416fec: ret 8 */ FN_RET(0x00416da0); r_esp += 12; return;
}

void f_00416e5d(void)
{
    FN_ENTER(0x00416e5d);
    goto L_00416e5d;
L_00416d5c:; BB(0x00416d5c);
    /* 00416d5c: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00416d60: movzx esi, bl */ r_esi = (u32)(u8)r_ebx;
    /* 00416d63: movzx eax, byte ptr [esi + edx] */ r_eax = (u32)R8((u32)(r_esi+r_edx));
    /* 00416d67: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d6c: je 0x416fc2 */ if (fZ) goto L_00416fc2;
L_00416d72:; BB(0x00416d72);
    /* 00416d72: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00416d76: mov ecx, dword ptr [edx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x60u));
    /* 00416d7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d7c: je 0x416fba */ if (fZ) goto L_00416fba;
L_00416d82:; BB(0x00416d82);
    /* 00416d82: movzx edx, byte ptr [esp + 0x58] */ r_edx = (u32)R8((u32)(r_esp+0x58u));
    /* 00416d87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d89: jne 0x416e2a */ if (!fZ) goto L_00416e2a;
L_00416d8f:; BB(0x00416d8f);
    /* 00416d8f: mov edi, eax */ r_edi = r_eax;
    /* 00416d91: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416d93: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00416d97: movsx edi, byte ptr [0xa3b1f0] */ r_edi = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416d9e: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00416da1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416da4: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00416da8: lea edx, [edi] */ r_edx = (u32)(r_edi);
    /* 00416daa: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00416dad: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416daf: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00416db1: movsx ecx, dl */ r_ecx = (u32)(i32)(i8)(u8)r_edx;
    /* 00416db4: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00416db8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416db9: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00416dbd: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00416dc1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416dc4: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416dc9u); f_0082e900();
    /* 00416dc9: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 00416dcd: sub ecx, dword ptr [esp + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00416dd1: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00416dd5: imul ecx, ecx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ecx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416dd8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416ddc: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416de1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416de6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416dea: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416dee: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416df2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416df6: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416dfb: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416dfe: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416e01: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416e05: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416e08: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416e0a: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416e0d: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416e0f: jge 0x416fba */ if ((fS==fO)) goto L_00416fba;
L_00416e15:; BB(0x00416e15);
    /* 00416e15: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416e19: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00416e1d: movzx edx, byte ptr [esi + edi] */ r_edx = (u32)R8((u32)(r_esi+r_edi));
    /* 00416e21: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00416e25: jmp 0x416fba */ goto L_00416fba;
L_00416e2a:; BB(0x00416e2a);
    /* 00416e2a: movzx edx, byte ptr [esp + 0x58] */ r_edx = (u32)R8((u32)(r_esp+0x58u));
    /* 00416e2f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416e32: jne 0x416fba */ if (!fZ) goto L_00416fba;
L_00416e38:; BB(0x00416e38);
    /* 00416e38: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416e3f: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00416e43: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416e47: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416e4a: ja 0x416f29 */ if ((!fC&&!fZ)) goto L_00416f29;
L_00416e50:; BB(0x00416e50);
    /* 00416e50: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00416e54: mov ecx, dword ptr [edx*4 + 0x8faf98] */ r_ecx = R32((u32)(r_edx*4+0x8faf98u));
    /* 00416e5b: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416e5d:; BB(0x00416e5d);
    /* 00416e5d: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416e61: add edx, -8 */ {  u32 a = r_edx; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416e64: movsx ecx, dl */ r_ecx = (u32)(i32)(i8)(u8)r_edx;
    /* 00416e67: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00416e6b: mov byte ptr [0xa3b1f0], cl */ W8((u32)(0xa3b1f0u), (u8)r_ecx);
    /* 00416e71: movzx eax, byte ptr [esi + edi] */ r_eax = (u32)R8((u32)(r_esi+r_edi));
    /* 00416e75: jmp 0x416f29 */ goto L_00416f29;
L_00416f29:; BB(0x00416f29);
    /* 00416f29: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00416f2d: mov edi, eax */ r_edi = r_eax;
    /* 00416f2f: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416f31: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00416f35: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00416f38: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416f3b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00416f3f: lea ecx, [edx] */ r_ecx = (u32)(r_edx);
    /* 00416f41: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416f44: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416f46: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416f48: movsx edi, cl */ r_edi = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416f4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416f4c: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00416f50: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416f54: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416f57: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416f5cu); f_0082e900();
    /* 00416f5c: sub edi, dword ptr [esp + 0x34] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00416f60: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416f64: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416f67: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416f6b: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416f70: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416f75: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416f79: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416f7d: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416f81: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416f85: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416f8a: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416f8d: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416f90: sub edx, dword ptr [esp + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416f94: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416f97: mov byte ptr [0xa3b1f0], cl */ W8((u32)(0xa3b1f0u), (u8)r_ecx);
    /* 00416f9d: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416f9f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00416fa3: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416fa6: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416fa8: jge 0x416fba */ if ((fS==fO)) goto L_00416fba;
L_00416faa:; BB(0x00416faa);
    /* 00416faa: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416fae: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00416fb2: movzx edx, byte ptr [esi + edi] */ r_edx = (u32)R8((u32)(r_esi+r_edi));
    /* 00416fb6: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416fba:; BB(0x00416fba);
    /* 00416fba: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00416fbd: jmp 0x416d5c */ goto L_00416d5c;
L_00416fc2:; BB(0x00416fc2);
    /* 00416fc2: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00416fc6: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416fcc: je 0x416fe6 */ if (fZ) goto L_00416fe6;
L_00416fce:; BB(0x00416fce);
    /* 00416fce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd3: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416fddu); f_00814298();
    /* 00416fdd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416fe0: mov byte ptr [0xa3b1f0], bl */ W8((u32)(0xa3b1f0u), (u8)r_ebx);
L_00416fe6:; BB(0x00416fe6);
    /* 00416fe6: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416fe9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416fea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416feb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416fec: ret 8 */ FN_RET(0x00416e5d); r_esp += 12; return;
}

void f_00416e7a(void)
{
    FN_ENTER(0x00416e7a);
    goto L_00416e7a;
L_00416d5c:; BB(0x00416d5c);
    /* 00416d5c: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00416d60: movzx esi, bl */ r_esi = (u32)(u8)r_ebx;
    /* 00416d63: movzx eax, byte ptr [esi + edx] */ r_eax = (u32)R8((u32)(r_esi+r_edx));
    /* 00416d67: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d6c: je 0x416fc2 */ if (fZ) goto L_00416fc2;
L_00416d72:; BB(0x00416d72);
    /* 00416d72: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00416d76: mov ecx, dword ptr [edx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x60u));
    /* 00416d7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d7c: je 0x416fba */ if (fZ) goto L_00416fba;
L_00416d82:; BB(0x00416d82);
    /* 00416d82: movzx edx, byte ptr [esp + 0x58] */ r_edx = (u32)R8((u32)(r_esp+0x58u));
    /* 00416d87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d89: jne 0x416e2a */ if (!fZ) goto L_00416e2a;
L_00416d8f:; BB(0x00416d8f);
    /* 00416d8f: mov edi, eax */ r_edi = r_eax;
    /* 00416d91: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416d93: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00416d97: movsx edi, byte ptr [0xa3b1f0] */ r_edi = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416d9e: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00416da1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416da4: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00416da8: lea edx, [edi] */ r_edx = (u32)(r_edi);
    /* 00416daa: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00416dad: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416daf: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00416db1: movsx ecx, dl */ r_ecx = (u32)(i32)(i8)(u8)r_edx;
    /* 00416db4: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00416db8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416db9: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00416dbd: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00416dc1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416dc4: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416dc9u); f_0082e900();
    /* 00416dc9: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 00416dcd: sub ecx, dword ptr [esp + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00416dd1: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00416dd5: imul ecx, ecx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ecx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416dd8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416ddc: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416de1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416de6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416dea: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416dee: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416df2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416df6: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416dfb: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416dfe: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416e01: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416e05: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416e08: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416e0a: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416e0d: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416e0f: jge 0x416fba */ if ((fS==fO)) goto L_00416fba;
L_00416e15:; BB(0x00416e15);
    /* 00416e15: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416e19: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00416e1d: movzx edx, byte ptr [esi + edi] */ r_edx = (u32)R8((u32)(r_esi+r_edi));
    /* 00416e21: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00416e25: jmp 0x416fba */ goto L_00416fba;
L_00416e2a:; BB(0x00416e2a);
    /* 00416e2a: movzx edx, byte ptr [esp + 0x58] */ r_edx = (u32)R8((u32)(r_esp+0x58u));
    /* 00416e2f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416e32: jne 0x416fba */ if (!fZ) goto L_00416fba;
L_00416e38:; BB(0x00416e38);
    /* 00416e38: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416e3f: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00416e43: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416e47: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416e4a: ja 0x416f29 */ if ((!fC&&!fZ)) goto L_00416f29;
L_00416e50:; BB(0x00416e50);
    /* 00416e50: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00416e54: mov ecx, dword ptr [edx*4 + 0x8faf98] */ r_ecx = R32((u32)(r_edx*4+0x8faf98u));
    /* 00416e5b: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416e7a:; BB(0x00416e7a);
    /* 00416e7a: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00416e7e: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 00416e84: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416e86: je 0x416ea9 */ if (fZ) goto L_00416ea9;
L_00416e88:; BB(0x00416e88);
    /* 00416e88: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00416e8c: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416e90: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416e93: movsx ecx, dl */ r_ecx = (u32)(i32)(i8)(u8)r_edx;
    /* 00416e96: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00416e9a: mov byte ptr [0xa3b1f0], cl */ W8((u32)(0xa3b1f0u), (u8)r_ecx);
    /* 00416ea0: movzx eax, byte ptr [esi + edi] */ r_eax = (u32)R8((u32)(r_esi+r_edi));
    /* 00416ea4: jmp 0x416f29 */ goto L_00416f29;
L_00416ea9:; BB(0x00416ea9);
    /* 00416ea9: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00416ead: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416eb1: add edx, -6 */ {  u32 a = r_edx; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416eb4: movsx ecx, dl */ r_ecx = (u32)(i32)(i8)(u8)r_edx;
    /* 00416eb7: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00416ebb: mov byte ptr [0xa3b1f0], cl */ W8((u32)(0xa3b1f0u), (u8)r_ecx);
    /* 00416ec1: movzx eax, byte ptr [esi + edi] */ r_eax = (u32)R8((u32)(r_esi+r_edi));
    /* 00416ec5: jmp 0x416f29 */ goto L_00416f29;
L_00416f29:; BB(0x00416f29);
    /* 00416f29: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00416f2d: mov edi, eax */ r_edi = r_eax;
    /* 00416f2f: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416f31: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00416f35: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00416f38: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416f3b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00416f3f: lea ecx, [edx] */ r_ecx = (u32)(r_edx);
    /* 00416f41: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416f44: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416f46: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416f48: movsx edi, cl */ r_edi = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416f4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416f4c: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00416f50: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416f54: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416f57: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416f5cu); f_0082e900();
    /* 00416f5c: sub edi, dword ptr [esp + 0x34] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00416f60: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416f64: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416f67: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416f6b: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416f70: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416f75: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416f79: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416f7d: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416f81: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416f85: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416f8a: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416f8d: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416f90: sub edx, dword ptr [esp + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416f94: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416f97: mov byte ptr [0xa3b1f0], cl */ W8((u32)(0xa3b1f0u), (u8)r_ecx);
    /* 00416f9d: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416f9f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00416fa3: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416fa6: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416fa8: jge 0x416fba */ if ((fS==fO)) goto L_00416fba;
L_00416faa:; BB(0x00416faa);
    /* 00416faa: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416fae: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00416fb2: movzx edx, byte ptr [esi + edi] */ r_edx = (u32)R8((u32)(r_esi+r_edi));
    /* 00416fb6: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416fba:; BB(0x00416fba);
    /* 00416fba: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00416fbd: jmp 0x416d5c */ goto L_00416d5c;
L_00416fc2:; BB(0x00416fc2);
    /* 00416fc2: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00416fc6: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416fcc: je 0x416fe6 */ if (fZ) goto L_00416fe6;
L_00416fce:; BB(0x00416fce);
    /* 00416fce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd3: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416fddu); f_00814298();
    /* 00416fdd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416fe0: mov byte ptr [0xa3b1f0], bl */ W8((u32)(0xa3b1f0u), (u8)r_ebx);
L_00416fe6:; BB(0x00416fe6);
    /* 00416fe6: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416fe9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416fea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416feb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416fec: ret 8 */ FN_RET(0x00416e7a); r_esp += 12; return;
}

void f_00416ec7(void)
{
    FN_ENTER(0x00416ec7);
    goto L_00416ec7;
L_00416d5c:; BB(0x00416d5c);
    /* 00416d5c: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00416d60: movzx esi, bl */ r_esi = (u32)(u8)r_ebx;
    /* 00416d63: movzx eax, byte ptr [esi + edx] */ r_eax = (u32)R8((u32)(r_esi+r_edx));
    /* 00416d67: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d6c: je 0x416fc2 */ if (fZ) goto L_00416fc2;
L_00416d72:; BB(0x00416d72);
    /* 00416d72: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00416d76: mov ecx, dword ptr [edx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x60u));
    /* 00416d7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d7c: je 0x416fba */ if (fZ) goto L_00416fba;
L_00416d82:; BB(0x00416d82);
    /* 00416d82: movzx edx, byte ptr [esp + 0x58] */ r_edx = (u32)R8((u32)(r_esp+0x58u));
    /* 00416d87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d89: jne 0x416e2a */ if (!fZ) goto L_00416e2a;
L_00416d8f:; BB(0x00416d8f);
    /* 00416d8f: mov edi, eax */ r_edi = r_eax;
    /* 00416d91: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416d93: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00416d97: movsx edi, byte ptr [0xa3b1f0] */ r_edi = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416d9e: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00416da1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416da4: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00416da8: lea edx, [edi] */ r_edx = (u32)(r_edi);
    /* 00416daa: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00416dad: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416daf: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00416db1: movsx ecx, dl */ r_ecx = (u32)(i32)(i8)(u8)r_edx;
    /* 00416db4: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00416db8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416db9: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00416dbd: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00416dc1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416dc4: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416dc9u); f_0082e900();
    /* 00416dc9: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 00416dcd: sub ecx, dword ptr [esp + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00416dd1: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00416dd5: imul ecx, ecx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ecx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416dd8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416ddc: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416de1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416de6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416dea: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416dee: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416df2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416df6: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416dfb: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416dfe: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416e01: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416e05: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416e08: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416e0a: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416e0d: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416e0f: jge 0x416fba */ if ((fS==fO)) goto L_00416fba;
L_00416e15:; BB(0x00416e15);
    /* 00416e15: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416e19: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00416e1d: movzx edx, byte ptr [esi + edi] */ r_edx = (u32)R8((u32)(r_esi+r_edi));
    /* 00416e21: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00416e25: jmp 0x416fba */ goto L_00416fba;
L_00416e2a:; BB(0x00416e2a);
    /* 00416e2a: movzx edx, byte ptr [esp + 0x58] */ r_edx = (u32)R8((u32)(r_esp+0x58u));
    /* 00416e2f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416e32: jne 0x416fba */ if (!fZ) goto L_00416fba;
L_00416e38:; BB(0x00416e38);
    /* 00416e38: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416e3f: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00416e43: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416e47: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416e4a: ja 0x416f29 */ if ((!fC&&!fZ)) goto L_00416f29;
L_00416e50:; BB(0x00416e50);
    /* 00416e50: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00416e54: mov ecx, dword ptr [edx*4 + 0x8faf98] */ r_ecx = R32((u32)(r_edx*4+0x8faf98u));
    /* 00416e5b: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416ec7:; BB(0x00416ec7);
    /* 00416ec7: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00416ecb: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 00416ed1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416ed3: je 0x416ef3 */ if (fZ) goto L_00416ef3;
L_00416ed5:; BB(0x00416ed5);
    /* 00416ed5: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00416ed9: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416edd: add edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416ee0: movsx ecx, dl */ r_ecx = (u32)(i32)(i8)(u8)r_edx;
    /* 00416ee3: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00416ee7: mov byte ptr [0xa3b1f0], cl */ W8((u32)(0xa3b1f0u), (u8)r_ecx);
    /* 00416eed: movzx eax, byte ptr [esi + edi] */ r_eax = (u32)R8((u32)(r_esi+r_edi));
    /* 00416ef1: jmp 0x416f29 */ goto L_00416f29;
L_00416ef3:; BB(0x00416ef3);
    /* 00416ef3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00416ef7: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416efb: add edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416efe: movsx ecx, dl */ r_ecx = (u32)(i32)(i8)(u8)r_edx;
    /* 00416f01: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00416f05: mov byte ptr [0xa3b1f0], cl */ W8((u32)(0xa3b1f0u), (u8)r_ecx);
    /* 00416f0b: movzx eax, byte ptr [esi + edi] */ r_eax = (u32)R8((u32)(r_esi+r_edi));
    /* 00416f0f: jmp 0x416f29 */ goto L_00416f29;
L_00416f29:; BB(0x00416f29);
    /* 00416f29: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00416f2d: mov edi, eax */ r_edi = r_eax;
    /* 00416f2f: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416f31: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00416f35: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00416f38: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416f3b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00416f3f: lea ecx, [edx] */ r_ecx = (u32)(r_edx);
    /* 00416f41: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416f44: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416f46: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416f48: movsx edi, cl */ r_edi = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416f4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416f4c: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00416f50: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416f54: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416f57: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416f5cu); f_0082e900();
    /* 00416f5c: sub edi, dword ptr [esp + 0x34] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00416f60: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416f64: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416f67: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416f6b: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416f70: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416f75: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416f79: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416f7d: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416f81: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416f85: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416f8a: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416f8d: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416f90: sub edx, dword ptr [esp + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416f94: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416f97: mov byte ptr [0xa3b1f0], cl */ W8((u32)(0xa3b1f0u), (u8)r_ecx);
    /* 00416f9d: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416f9f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00416fa3: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416fa6: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416fa8: jge 0x416fba */ if ((fS==fO)) goto L_00416fba;
L_00416faa:; BB(0x00416faa);
    /* 00416faa: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416fae: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00416fb2: movzx edx, byte ptr [esi + edi] */ r_edx = (u32)R8((u32)(r_esi+r_edi));
    /* 00416fb6: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416fba:; BB(0x00416fba);
    /* 00416fba: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00416fbd: jmp 0x416d5c */ goto L_00416d5c;
L_00416fc2:; BB(0x00416fc2);
    /* 00416fc2: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00416fc6: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416fcc: je 0x416fe6 */ if (fZ) goto L_00416fe6;
L_00416fce:; BB(0x00416fce);
    /* 00416fce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd3: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416fddu); f_00814298();
    /* 00416fdd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416fe0: mov byte ptr [0xa3b1f0], bl */ W8((u32)(0xa3b1f0u), (u8)r_ebx);
L_00416fe6:; BB(0x00416fe6);
    /* 00416fe6: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416fe9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416fea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416feb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416fec: ret 8 */ FN_RET(0x00416ec7); r_esp += 12; return;
}

void f_00416f11(void)
{
    FN_ENTER(0x00416f11);
    goto L_00416f11;
L_00416d5c:; BB(0x00416d5c);
    /* 00416d5c: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00416d60: movzx esi, bl */ r_esi = (u32)(u8)r_ebx;
    /* 00416d63: movzx eax, byte ptr [esi + edx] */ r_eax = (u32)R8((u32)(r_esi+r_edx));
    /* 00416d67: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d6c: je 0x416fc2 */ if (fZ) goto L_00416fc2;
L_00416d72:; BB(0x00416d72);
    /* 00416d72: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00416d76: mov ecx, dword ptr [edx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x60u));
    /* 00416d7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d7c: je 0x416fba */ if (fZ) goto L_00416fba;
L_00416d82:; BB(0x00416d82);
    /* 00416d82: movzx edx, byte ptr [esp + 0x58] */ r_edx = (u32)R8((u32)(r_esp+0x58u));
    /* 00416d87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416d89: jne 0x416e2a */ if (!fZ) goto L_00416e2a;
L_00416d8f:; BB(0x00416d8f);
    /* 00416d8f: mov edi, eax */ r_edi = r_eax;
    /* 00416d91: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416d93: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00416d97: movsx edi, byte ptr [0xa3b1f0] */ r_edi = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416d9e: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00416da1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416da4: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00416da8: lea edx, [edi] */ r_edx = (u32)(r_edi);
    /* 00416daa: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00416dad: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416daf: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00416db1: movsx ecx, dl */ r_ecx = (u32)(i32)(i8)(u8)r_edx;
    /* 00416db4: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00416db8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416db9: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00416dbd: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00416dc1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416dc4: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416dc9u); f_0082e900();
    /* 00416dc9: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 00416dcd: sub ecx, dword ptr [esp + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00416dd1: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00416dd5: imul ecx, ecx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ecx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416dd8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416ddc: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416de1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416de6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416dea: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416dee: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416df2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416df6: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416dfb: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416dfe: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416e01: sub edx, dword ptr [esp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416e05: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416e08: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416e0a: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416e0d: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416e0f: jge 0x416fba */ if ((fS==fO)) goto L_00416fba;
L_00416e15:; BB(0x00416e15);
    /* 00416e15: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416e19: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00416e1d: movzx edx, byte ptr [esi + edi] */ r_edx = (u32)R8((u32)(r_esi+r_edi));
    /* 00416e21: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00416e25: jmp 0x416fba */ goto L_00416fba;
L_00416e2a:; BB(0x00416e2a);
    /* 00416e2a: movzx edx, byte ptr [esp + 0x58] */ r_edx = (u32)R8((u32)(r_esp+0x58u));
    /* 00416e2f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416e32: jne 0x416fba */ if (!fZ) goto L_00416fba;
L_00416e38:; BB(0x00416e38);
    /* 00416e38: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416e3f: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00416e43: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00416e47: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416e4a: ja 0x416f29 */ if ((!fC&&!fZ)) goto L_00416f29;
L_00416e50:; BB(0x00416e50);
    /* 00416e50: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00416e54: mov ecx, dword ptr [edx*4 + 0x8faf98] */ r_ecx = R32((u32)(r_edx*4+0x8faf98u));
    /* 00416e5b: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00416f11:; BB(0x00416f11);
    /* 00416f11: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416f15: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416f18: movsx ecx, dl */ r_ecx = (u32)(i32)(i8)(u8)r_edx;
    /* 00416f1b: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00416f1f: mov byte ptr [0xa3b1f0], cl */ W8((u32)(0xa3b1f0u), (u8)r_ecx);
    /* 00416f25: movzx eax, byte ptr [esi + edi] */ r_eax = (u32)R8((u32)(r_esi+r_edi));
L_00416f29:; BB(0x00416f29);
    /* 00416f29: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00416f2d: mov edi, eax */ r_edi = r_eax;
    /* 00416f2f: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416f31: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00416f35: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00416f38: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416f3b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00416f3f: lea ecx, [edx] */ r_ecx = (u32)(r_edx);
    /* 00416f41: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00416f44: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00416f46: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00416f48: movsx edi, cl */ r_edi = (u32)(i32)(i8)(u8)r_ecx;
    /* 00416f4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416f4c: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00416f50: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416f54: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416f57: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416f5cu); f_0082e900();
    /* 00416f5c: sub edi, dword ptr [esp + 0x34] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00416f60: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00416f64: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416f67: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416f6b: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00416f70: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416f75: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416f79: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416f7d: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416f81: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416f85: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 00416f8a: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416f8d: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416f90: sub edx, dword ptr [esp + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00416f94: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416f97: mov byte ptr [0xa3b1f0], cl */ W8((u32)(0xa3b1f0u), (u8)r_ecx);
    /* 00416f9d: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00416f9f: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00416fa3: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416fa6: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416fa8: jge 0x416fba */ if ((fS==fO)) goto L_00416fba;
L_00416faa:; BB(0x00416faa);
    /* 00416faa: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00416fae: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00416fb2: movzx edx, byte ptr [esi + edi] */ r_edx = (u32)R8((u32)(r_esi+r_edi));
    /* 00416fb6: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00416fba:; BB(0x00416fba);
    /* 00416fba: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00416fbd: jmp 0x416d5c */ goto L_00416d5c;
L_00416fc2:; BB(0x00416fc2);
    /* 00416fc2: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00416fc6: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416fcc: je 0x416fe6 */ if (fZ) goto L_00416fe6;
L_00416fce:; BB(0x00416fce);
    /* 00416fce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd3: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416fd8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416fddu); f_00814298();
    /* 00416fdd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416fe0: mov byte ptr [0xa3b1f0], bl */ W8((u32)(0xa3b1f0u), (u8)r_ebx);
L_00416fe6:; BB(0x00416fe6);
    /* 00416fe6: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00416fe9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00416fea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416feb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416fec: ret 8 */ FN_RET(0x00416f11); r_esp += 12; return;
}

void f_00416ff0(void) /* sub_416FF0 */
{
    FN_ENTER(0x00416ff0);
    /* 00416ff0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00416ff1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00416ff3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00416ff5: call 0x417014 */ r_esp -= 4; W32(r_esp, 0x416ffau); f_00417014();
    /* 00416ffa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00416ffe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00417000: jne 0x417006 */ if (!fZ) goto L_00417006;
L_00417002:; BB(0x00417002);
    /* 00417002: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00417003: ret 4 */ FN_RET(0x00416ff0); r_esp += 8; return;
L_00417006:; BB(0x00417006);
    /* 00417006: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00417007: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x41700cu); f_005c2f74();
    /* 0041700c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041700d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041700e: ret 4 */ FN_RET(0x00416ff0); r_esp += 8; return;
}

