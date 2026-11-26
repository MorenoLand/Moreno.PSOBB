#include "protos.h"

void f_0072606c(void) /* sub_72606C */
{
    FN_ENTER(0x0072606c);
    /* 0072606c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072606d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072606e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072606f: mov esi, ecx */ r_esi = r_ecx;
    /* 00726071: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00726075: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00726078: je 0x7260c3 */ if (fZ) goto L_007260c3;
L_0072607a:; BB(0x0072607a);
    /* 0072607a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072607b: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x726080u); f_005c5528();
    /* 00726080: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726081: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00726083: je 0x7260a2 */ if (fZ) goto L_007260a2;
L_00726085:; BB(0x00726085);
    /* 00726085: lea edi, [esi + 0x88] */ r_edi = (u32)(r_esi+0x88u);
    /* 0072608b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072608c: mov ecx, eax */ r_ecx = r_eax;
    /* 0072608e: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x726093u); f_005c425c();
    /* 00726093: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00726094: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00726095: mov ecx, esi */ r_ecx = r_esi;
    /* 00726097: call 0x725fc8 */ r_esp -= 4; W32(r_esp, 0x72609cu); f_00725fc8();
    /* 0072609c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072609d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072609e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072609f: ret 4 */ FN_RET(0x0072606c); r_esp += 8; return;
L_007260a2:; BB(0x007260a2);
    /* 007260a2: mov dword ptr [esi + 0x70], 0 */ W32((u32)(r_esi+0x70u), 0x0u);
    /* 007260a9: mov dword ptr [esi + 0xa4], ebx */ W32((u32)(r_esi+0xa4u), r_ebx);
    /* 007260af: mov ecx, esi */ r_ecx = r_esi;
    /* 007260b1: call 0x7275c0 */ r_esp -= 4; W32(r_esp, 0x7260b6u); f_007275c0();
    /* 007260b6: mov ecx, esi */ r_ecx = r_esi;
    /* 007260b8: call 0x727450 */ r_esp -= 4; W32(r_esp, 0x7260bdu); f_00727450();
    /* 007260bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007260be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007260bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007260c0: ret 4 */ FN_RET(0x0072606c); r_esp += 8; return;
L_007260c3:; BB(0x007260c3);
    /* 007260c3: mov dword ptr [esi + 0xa4], 0xffffffff */ W32((u32)(r_esi+0xa4u), 0xffffffffu);
    /* 007260cd: mov ecx, esi */ r_ecx = r_esi;
    /* 007260cf: mov dword ptr [esi + 0x70], 0 */ W32((u32)(r_esi+0x70u), 0x0u);
    /* 007260d6: call 0x7275c0 */ r_esp -= 4; W32(r_esp, 0x7260dbu); f_007275c0();
    /* 007260db: mov ecx, esi */ r_ecx = r_esi;
    /* 007260dd: call 0x727450 */ r_esp -= 4; W32(r_esp, 0x7260e2u); f_00727450();
    /* 007260e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007260e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007260e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007260e5: ret 4 */ FN_RET(0x0072606c); r_esp += 8; return;
}

void f_007260e8(void) /* sub_7260E8 */
{
    FN_ENTER(0x007260e8);
    /* 007260e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007260e9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007260eb: mov ecx, dword ptr [ebp + 0x64] */ r_ecx = R32((u32)(r_ebp+0x64u));
    /* 007260ee: movsx eax, byte ptr [esp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x8u));
    /* 007260f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007260f4: call 0x73e954 */ r_esp -= 4; W32(r_esp, 0x7260f9u); f_0073e954();
    /* 007260f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007260fb: jne 0x726101 */ if (!fZ) goto L_00726101;
L_007260fd:; BB(0x007260fd);
    /* 007260fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007260fe: ret 4 */ FN_RET(0x007260e8); r_esp += 8; return;
L_00726101:; BB(0x00726101);
    /* 00726101: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00726103: call 0x727450 */ r_esp -= 4; W32(r_esp, 0x726108u); f_00727450();
    /* 00726108: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726109: ret 4 */ FN_RET(0x007260e8); r_esp += 8; return;
}

void f_0072610c(void) /* sub_72610C */
{
    FN_ENTER(0x0072610c);
    /* 0072610c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072610d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072610e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072610f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00726110: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00726113: mov edi, ecx */ r_edi = r_ecx;
    /* 00726115: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00726118: call 0x5dc1e0 */ r_esp -= 4; W32(r_esp, 0x72611du); f_005dc1e0();
    /* 0072611d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00726120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726121: mov ecx, dword ptr [edi + 0x68] */ r_ecx = R32((u32)(r_edi+0x68u));
    /* 00726124: call 0x5d4108 */ r_esp -= 4; W32(r_esp, 0x726129u); f_005d4108();
    /* 00726129: movsx ebp, word ptr [esp + 4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0072612e: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
    /* 00726131: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00726133: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 00726136: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 00726139: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0072613d: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00726141: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 00726144: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00726147: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0072614b: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00726150: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00726152: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00726155: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00726158: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0072615a: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0072615d: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00726160: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00726162: jge 0x726180 */ if ((fS==fO)) goto L_00726180;
L_00726164:; BB(0x00726164);
    /* 00726164: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00726167: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0072616a: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0072616e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00726170: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00726173: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 0072617a: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x72617du); call_ind(t); }
    /* 0072617d: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
L_00726180:; BB(0x00726180);
    /* 00726180: movsx ebp, word ptr [esp + 6] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esp+0x6u));
    /* 00726185: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 00726188: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0072618b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0072618f: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00726194: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00726196: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00726199: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0072619c: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0072619e: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 007261a1: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 007261a4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007261a6: jge 0x7261c4 */ if ((fS==fO)) goto L_007261c4;
L_007261a8:; BB(0x007261a8);
    /* 007261a8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007261ab: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 007261ae: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007261b2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007261b4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007261b7: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 007261be: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x7261c1u); call_ind(t); }
    /* 007261c1: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
L_007261c4:; BB(0x007261c4);
    /* 007261c4: movsx ebp, word ptr [esp + 8] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 007261c9: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 007261cc: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 007261cf: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007261d3: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 007261d8: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007261da: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 007261dd: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007261e0: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007261e2: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 007261e5: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 007261e8: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007261ea: jge 0x726208 */ if ((fS==fO)) goto L_00726208;
L_007261ec:; BB(0x007261ec);
    /* 007261ec: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007261ef: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 007261f2: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007261f6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007261f8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007261fb: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 00726202: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x726205u); call_ind(t); }
    /* 00726205: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
L_00726208:; BB(0x00726208);
    /* 00726208: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 0072620d: mov ebp, dword ptr [ebx + 0x34] */ r_ebp = R32((u32)(r_ebx+0x34u));
    /* 00726210: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 00726213: movsx ebx, word ptr [esp + 0xa] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp+0xau));
    /* 00726218: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0072621a: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0072621d: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00726220: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00726222: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00726225: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00726228: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072622a: jge 0x726241 */ if ((fS==fO)) goto L_00726241;
L_0072622c:; BB(0x0072622c);
    /* 0072622c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072622f: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 00726232: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00726234: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00726237: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 0072623e: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x726241u); call_ind(t); }
L_00726241:; BB(0x00726241);
    /* 00726241: mov ecx, edi */ r_ecx = r_edi;
    /* 00726243: call 0x726294 */ r_esp -= 4; W32(r_esp, 0x726248u); f_00726294();
    /* 00726248: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0072624c: cmp esi, dword ptr [eax + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072624f: je 0x726289 */ if (fZ) goto L_00726289;
L_00726251:; BB(0x00726251);
    /* 00726251: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00726252: mov ecx, eax */ r_ecx = r_eax;
    /* 00726254: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x726259u); f_0072d458();
    /* 00726259: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0072625d: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00726261: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 00726265: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072626b: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 0072626f: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00726273: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00726278: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
    /* 0072627c: mov eax, 1 */ r_eax = 0x1u;
    /* 00726281: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00726284: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726285: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726286: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726287: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726288: ret  */ FN_RET(0x0072610c); r_esp += 4; return;
L_00726289:; BB(0x00726289);
    /* 00726289: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072628b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072628e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072628f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726290: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726291: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726292: ret  */ FN_RET(0x0072610c); r_esp += 4; return;
}

void f_00726140(void)
{
    FN_ENTER(0x00726140);
    /* 00726140: adc byte ptr [ebx + 0x438b1c70], cl */ { u32 ad = (u32)(r_ebx+0x438b1c70u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b + c) & 0xffu; W8(ad, r); fC = (unsigned)((((u64)a + b + c) >> 8) & 1); }
    /* 00726146: adc al, 0x89 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00726148: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00726149: and al, 0x18 */ {  u32 a = (u8)r_eax; u32 b = 0x18u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0072614b: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00726150: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00726152: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00726155: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00726158: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0072615a: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0072615d: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00726160: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00726162: jge 0x726180 */ if ((fS==fO)) goto L_00726180;
L_00726164:; BB(0x00726164);
    /* 00726164: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00726167: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0072616a: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0072616e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00726170: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00726173: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 0072617a: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x72617du); call_ind(t); }
    /* 0072617d: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
L_00726180:; BB(0x00726180);
    /* 00726180: movsx ebp, word ptr [esp + 6] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esp+0x6u));
    /* 00726185: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 00726188: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0072618b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0072618f: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00726194: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00726196: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00726199: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0072619c: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0072619e: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 007261a1: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 007261a4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007261a6: jge 0x7261c4 */ if ((fS==fO)) goto L_007261c4;
L_007261a8:; BB(0x007261a8);
    /* 007261a8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007261ab: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 007261ae: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007261b2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007261b4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007261b7: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 007261be: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x7261c1u); call_ind(t); }
    /* 007261c1: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
L_007261c4:; BB(0x007261c4);
    /* 007261c4: movsx ebp, word ptr [esp + 8] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 007261c9: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 007261cc: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 007261cf: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007261d3: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 007261d8: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007261da: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 007261dd: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007261e0: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007261e2: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 007261e5: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 007261e8: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007261ea: jge 0x726208 */ if ((fS==fO)) goto L_00726208;
L_007261ec:; BB(0x007261ec);
    /* 007261ec: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007261ef: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 007261f2: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007261f6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007261f8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007261fb: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 00726202: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x726205u); call_ind(t); }
    /* 00726205: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
L_00726208:; BB(0x00726208);
    /* 00726208: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 0072620d: mov ebp, dword ptr [ebx + 0x34] */ r_ebp = R32((u32)(r_ebx+0x34u));
    /* 00726210: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 00726213: movsx ebx, word ptr [esp + 0xa] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp+0xau));
    /* 00726218: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0072621a: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0072621d: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00726220: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00726222: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00726225: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00726228: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072622a: jge 0x726241 */ if ((fS==fO)) goto L_00726241;
L_0072622c:; BB(0x0072622c);
    /* 0072622c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072622f: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 00726232: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00726234: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00726237: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 0072623e: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x726241u); call_ind(t); }
L_00726241:; BB(0x00726241);
    /* 00726241: mov ecx, edi */ r_ecx = r_edi;
    /* 00726243: call 0x726294 */ r_esp -= 4; W32(r_esp, 0x726248u); f_00726294();
    /* 00726248: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0072624c: cmp esi, dword ptr [eax + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072624f: je 0x726289 */ if (fZ) goto L_00726289;
L_00726251:; BB(0x00726251);
    /* 00726251: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00726252: mov ecx, eax */ r_ecx = r_eax;
    /* 00726254: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x726259u); f_0072d458();
    /* 00726259: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0072625d: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00726261: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 00726265: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072626b: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 0072626f: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00726273: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00726278: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
    /* 0072627c: mov eax, 1 */ r_eax = 0x1u;
    /* 00726281: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00726284: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726285: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726286: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726287: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726288: ret  */ FN_RET(0x00726140); r_esp += 4; return;
L_00726289:; BB(0x00726289);
    /* 00726289: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072628b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072628e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072628f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726290: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726291: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726292: ret  */ FN_RET(0x00726140); r_esp += 4; return;
}

void f_0072614d(void)
{
    FN_ENTER(0x0072614d);
    /* 0072614d: test ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;   }
    /* 0072614f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00726150: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00726152: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00726155: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00726158: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0072615a: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0072615d: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00726160: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00726162: jge 0x726180 */ if ((fS==fO)) goto L_00726180;
L_00726164:; BB(0x00726164);
    /* 00726164: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00726167: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0072616a: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0072616e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00726170: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00726173: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 0072617a: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x72617du); call_ind(t); }
    /* 0072617d: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
L_00726180:; BB(0x00726180);
    /* 00726180: movsx ebp, word ptr [esp + 6] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esp+0x6u));
    /* 00726185: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 00726188: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0072618b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0072618f: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00726194: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00726196: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00726199: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0072619c: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0072619e: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 007261a1: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 007261a4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007261a6: jge 0x7261c4 */ if ((fS==fO)) goto L_007261c4;
L_007261a8:; BB(0x007261a8);
    /* 007261a8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007261ab: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 007261ae: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007261b2: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007261b4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007261b7: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 007261be: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x7261c1u); call_ind(t); }
    /* 007261c1: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
L_007261c4:; BB(0x007261c4);
    /* 007261c4: movsx ebp, word ptr [esp + 8] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 007261c9: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 007261cc: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 007261cf: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007261d3: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 007261d8: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007261da: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 007261dd: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007261e0: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007261e2: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 007261e5: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 007261e8: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007261ea: jge 0x726208 */ if ((fS==fO)) goto L_00726208;
L_007261ec:; BB(0x007261ec);
    /* 007261ec: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007261ef: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 007261f2: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007261f6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007261f8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007261fb: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 00726202: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x726205u); call_ind(t); }
    /* 00726205: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
L_00726208:; BB(0x00726208);
    /* 00726208: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 0072620d: mov ebp, dword ptr [ebx + 0x34] */ r_ebp = R32((u32)(r_ebx+0x34u));
    /* 00726210: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 00726213: movsx ebx, word ptr [esp + 0xa] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp+0xau));
    /* 00726218: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0072621a: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0072621d: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00726220: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00726222: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00726225: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00726228: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072622a: jge 0x726241 */ if ((fS==fO)) goto L_00726241;
L_0072622c:; BB(0x0072622c);
    /* 0072622c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072622f: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 00726232: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00726234: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00726237: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 0072623e: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x726241u); call_ind(t); }
L_00726241:; BB(0x00726241);
    /* 00726241: mov ecx, edi */ r_ecx = r_edi;
    /* 00726243: call 0x726294 */ r_esp -= 4; W32(r_esp, 0x726248u); f_00726294();
    /* 00726248: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0072624c: cmp esi, dword ptr [eax + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072624f: je 0x726289 */ if (fZ) goto L_00726289;
L_00726251:; BB(0x00726251);
    /* 00726251: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00726252: mov ecx, eax */ r_ecx = r_eax;
    /* 00726254: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x726259u); f_0072d458();
    /* 00726259: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0072625d: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00726261: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 00726265: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072626b: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 0072626f: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00726273: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00726278: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
    /* 0072627c: mov eax, 1 */ r_eax = 0x1u;
    /* 00726281: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00726284: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726285: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726286: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726287: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726288: ret  */ FN_RET(0x0072614d); r_esp += 4; return;
L_00726289:; BB(0x00726289);
    /* 00726289: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072628b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072628e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072628f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726290: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726291: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726292: ret  */ FN_RET(0x0072614d); r_esp += 4; return;
}

void f_00726294(void) /* sub_726294 */
{
    FN_ENTER(0x00726294);
    /* 00726294: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00726295: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00726296: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00726297: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00726298: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072629b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0072629d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007262a0: call 0x5dc1e0 */ r_esp -= 4; W32(r_esp, 0x7262a5u); f_005dc1e0();
    /* 007262a5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007262a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007262a9: mov ecx, dword ptr [ebp + 0x68] */ r_ecx = R32((u32)(r_ebp+0x68u));
    /* 007262ac: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007262ae: call 0x5d4108 */ r_esp -= 4; W32(r_esp, 0x7262b3u); f_005d4108();
    /* 007262b3: mov edi, dword ptr [ebp + 0x28] */ r_edi = R32((u32)(r_ebp+0x28u));
    /* 007262b6: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 007262b8: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 007262bb: mov ebx, dword ptr [edi + 8] */ r_ebx = R32((u32)(r_edi+0x8u));
    /* 007262be: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 007262c1: movzx edi, word ptr [edx + 4] */ r_edi = (u32)R16((u32)(r_edx+0x4u));
    /* 007262c5: and edi, 0xfffd */ {  u32 a = r_edi; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007262cb: mov word ptr [edx + 4], di */ W16((u32)(r_edx+0x4u), (u16)r_edi);
    /* 007262cf: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 007262d3: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007262d9: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 007262dd: movsx eax, word ptr [esp + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x2u));
    /* 007262e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007262e3: call 0x72d420 */ r_esp -= 4; W32(r_esp, 0x7262e8u); f_0072d420();
    /* 007262e8: movsx eax, word ptr [esp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp));
    /* 007262ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007262ed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007262ef: call 0x72d420 */ r_esp -= 4; W32(r_esp, 0x7262f4u); f_0072d420();
    /* 007262f4: movsx ecx, word ptr [esp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 007262f9: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 007262fe: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00726300: mov ebx, dword ptr [ebp + 0x28] */ r_ebx = R32((u32)(r_ebp+0x28u));
    /* 00726303: mov edi, dword ptr [ebx + 0x10] */ r_edi = R32((u32)(r_ebx+0x10u));
    /* 00726306: mov ebx, dword ptr [ebx + 0x14] */ r_ebx = R32((u32)(r_ebx+0x14u));
    /* 00726309: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0072630c: mov eax, ecx */ r_eax = r_ecx;
    /* 0072630e: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00726311: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00726313: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00726316: cmp eax, dword ptr [edi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00726319: jle 0x726329 */ if ((fZ||fS!=fO)) goto L_00726329;
L_0072631b:; BB(0x0072631b);
    /* 0072631b: mov dword ptr [ebx + 0x24], 0x42c80000 */ W32((u32)(r_ebx+0x24u), 0x42c80000u);
    /* 00726322: mov esi, 1 */ r_esi = 0x1u;
    /* 00726327: jmp 0x726365 */ goto L_00726365;
L_00726329:; BB(0x00726329);
    /* 00726329: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 0072632e: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00726330: mov edi, ecx */ r_edi = r_ecx;
    /* 00726332: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00726335: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00726338: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0072633a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0072633d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072633f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00726341: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 00726344: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00726346: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00726348: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0072634a: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 0072634d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00726351: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00726355: fcom dword ptr [ebx + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x24u))); 
    /* 00726358: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072635a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072635b: je 0x726362 */ if (fZ) goto L_00726362;
L_0072635d:; BB(0x0072635d);
    /* 0072635d: mov esi, 1 */ r_esi = 0x1u;
L_00726362:; BB(0x00726362);
    /* 00726362: fstp dword ptr [ebx + 0x24] */ W_F32((u32)(r_ebx+0x24u), ST(0)); FPOP();
L_00726365:; BB(0x00726365);
    /* 00726365: movsx ecx, word ptr [esp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x6u));
    /* 0072636a: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 0072636f: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00726371: mov ebx, dword ptr [ebp + 0x28] */ r_ebx = R32((u32)(r_ebp+0x28u));
    /* 00726374: mov edi, dword ptr [ebx + 0x1c] */ r_edi = R32((u32)(r_ebx+0x1cu));
    /* 00726377: mov ebx, dword ptr [ebx + 0x20] */ r_ebx = R32((u32)(r_ebx+0x20u));
    /* 0072637a: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0072637d: mov eax, ecx */ r_eax = r_ecx;
    /* 0072637f: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00726382: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00726384: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00726387: cmp eax, dword ptr [edi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072638a: jle 0x72639a */ if ((fZ||fS!=fO)) goto L_0072639a;
L_0072638c:; BB(0x0072638c);
    /* 0072638c: mov dword ptr [ebx + 0x24], 0x42c80000 */ W32((u32)(r_ebx+0x24u), 0x42c80000u);
    /* 00726393: mov esi, 1 */ r_esi = 0x1u;
    /* 00726398: jmp 0x7263d6 */ goto L_007263d6;
L_0072639a:; BB(0x0072639a);
    /* 0072639a: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 0072639f: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007263a1: mov edi, ecx */ r_edi = r_ecx;
    /* 007263a3: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 007263a6: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007263a9: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007263ab: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007263ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007263b0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007263b2: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 007263b5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007263b7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007263b9: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007263bb: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 007263be: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007263c2: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007263c6: fcom dword ptr [ebx + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x24u))); 
    /* 007263c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007263cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007263cc: je 0x7263d3 */ if (fZ) goto L_007263d3;
L_007263ce:; BB(0x007263ce);
    /* 007263ce: mov esi, 1 */ r_esi = 0x1u;
L_007263d3:; BB(0x007263d3);
    /* 007263d3: fstp dword ptr [ebx + 0x24] */ W_F32((u32)(r_ebx+0x24u), ST(0)); FPOP();
L_007263d6:; BB(0x007263d6);
    /* 007263d6: movsx ecx, word ptr [esp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 007263db: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 007263e0: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007263e2: mov ebx, dword ptr [ebp + 0x28] */ r_ebx = R32((u32)(r_ebp+0x28u));
    /* 007263e5: mov edi, dword ptr [ebx + 0x28] */ r_edi = R32((u32)(r_ebx+0x28u));
    /* 007263e8: mov ebx, dword ptr [ebx + 0x2c] */ r_ebx = R32((u32)(r_ebx+0x2cu));
    /* 007263eb: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007263ee: mov eax, ecx */ r_eax = r_ecx;
    /* 007263f0: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 007263f3: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007263f5: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 007263f8: cmp eax, dword ptr [edi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007263fb: jle 0x72640b */ if ((fZ||fS!=fO)) goto L_0072640b;
L_007263fd:; BB(0x007263fd);
    /* 007263fd: mov dword ptr [ebx + 0x24], 0x42c80000 */ W32((u32)(r_ebx+0x24u), 0x42c80000u);
    /* 00726404: mov esi, 1 */ r_esi = 0x1u;
    /* 00726409: jmp 0x726447 */ goto L_00726447;
L_0072640b:; BB(0x0072640b);
    /* 0072640b: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00726410: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00726412: mov edi, ecx */ r_edi = r_ecx;
    /* 00726414: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00726417: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0072641a: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0072641c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0072641f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00726421: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00726423: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 00726426: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00726428: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072642a: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0072642c: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 0072642f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00726433: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00726437: fcom dword ptr [ebx + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x24u))); 
    /* 0072643a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072643c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072643d: je 0x726444 */ if (fZ) goto L_00726444;
L_0072643f:; BB(0x0072643f);
    /* 0072643f: mov esi, 1 */ r_esi = 0x1u;
L_00726444:; BB(0x00726444);
    /* 00726444: fstp dword ptr [ebx + 0x24] */ W_F32((u32)(r_ebx+0x24u), ST(0)); FPOP();
L_00726447:; BB(0x00726447);
    /* 00726447: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 0072644c: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 0072644f: mov ebp, dword ptr [ecx + 0x34] */ r_ebp = R32((u32)(r_ecx+0x34u));
    /* 00726452: mov ebx, dword ptr [ecx + 0x38] */ r_ebx = R32((u32)(r_ecx+0x38u));
    /* 00726455: movsx ecx, word ptr [esp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0xau));
    /* 0072645a: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0072645c: mov edi, ecx */ r_edi = r_ecx;
    /* 0072645e: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00726461: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00726464: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00726466: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00726469: cmp eax, dword ptr [ebp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072646c: jle 0x72647c */ if ((fZ||fS!=fO)) goto L_0072647c;
L_0072646e:; BB(0x0072646e);
    /* 0072646e: mov dword ptr [ebx + 0x24], 0x42c80000 */ W32((u32)(r_ebx+0x24u), 0x42c80000u);
    /* 00726475: mov esi, 1 */ r_esi = 0x1u;
    /* 0072647a: jmp 0x7264b8 */ goto L_007264b8;
L_0072647c:; BB(0x0072647c);
    /* 0072647c: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00726481: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00726483: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00726485: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00726488: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0072648b: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0072648d: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00726490: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00726492: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00726494: lea eax, [edx + edi*8] */ r_eax = (u32)(r_edx+r_edi*8);
    /* 00726497: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00726499: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072649b: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0072649d: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 007264a0: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 007264a4: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007264a8: fcom dword ptr [ebx + 0x24] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x24u))); 
    /* 007264ab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007264ad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007264ae: je 0x7264b5 */ if (fZ) goto L_007264b5;
L_007264b0:; BB(0x007264b0);
    /* 007264b0: mov esi, 1 */ r_esi = 0x1u;
L_007264b5:; BB(0x007264b5);
    /* 007264b5: fstp dword ptr [ebx + 0x24] */ W_F32((u32)(r_ebx+0x24u), ST(0)); FPOP();
L_007264b8:; BB(0x007264b8);
    /* 007264b8: mov eax, esi */ r_eax = r_esi;
    /* 007264ba: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007264bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007264be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007264bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007264c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007264c1: ret  */ FN_RET(0x00726294); r_esp += 4; return;
}

void f_007264c4(void) /* sub_7264C4 */
{
    FN_ENTER(0x007264c4);
    /* 007264c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007264c5: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 007264c8: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 007264cb: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 007264ce: mov edi, dword ptr [eax + 0x2c] */ r_edi = R32((u32)(r_eax+0x2cu));
    /* 007264d1: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 007264d4: movzx edx, word ptr [edx + 4] */ r_edx = (u32)R16((u32)(r_edx+0x4u));
    /* 007264d8: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007264db: jne 0x7264e1 */ if (!fZ) goto L_007264e1;
L_007264dd:; BB(0x007264dd);
    /* 007264dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007264df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007264e0: ret  */ FN_RET(0x007264c4); r_esp += 4; return;
L_007264e1:; BB(0x007264e1);
    /* 007264e1: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 007264e5: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007264e8: jne 0x7264ee */ if (!fZ) goto L_007264ee;
L_007264ea:; BB(0x007264ea);
    /* 007264ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007264ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007264ed: ret  */ FN_RET(0x007264c4); r_esp += 4; return;
L_007264ee:; BB(0x007264ee);
    /* 007264ee: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 007264f2: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007264f5: jne 0x7264fb */ if (!fZ) goto L_007264fb;
L_007264f7:; BB(0x007264f7);
    /* 007264f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007264f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007264fa: ret  */ FN_RET(0x007264c4); r_esp += 4; return;
L_007264fb:; BB(0x007264fb);
    /* 007264fb: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 007264ff: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00726501: jne 0x726507 */ if (!fZ) goto L_00726507;
L_00726503:; BB(0x00726503);
    /* 00726503: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00726505: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726506: ret  */ FN_RET(0x007264c4); r_esp += 4; return;
L_00726507:; BB(0x00726507);
    /* 00726507: mov eax, 1 */ r_eax = 0x1u;
    /* 0072650c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072650d: ret  */ FN_RET(0x007264c4); r_esp += 4; return;
}

void f_00726510(void) /* sub_726510 */
{
    FN_ENTER(0x00726510);
    /* 00726510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00726511: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00726513: mov eax, dword ptr [ebp + 0xa0] */ r_eax = R32((u32)(r_ebp+0xa0u));
    /* 00726519: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072651c: je 0x726534 */ if (fZ) goto L_00726534;
L_0072651e:; BB(0x0072651e);
    /* 0072651e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072651f: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x726524u); f_005c5528();
    /* 00726524: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726525: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00726527: je 0x726534 */ if (fZ) goto L_00726534;
L_00726529:; BB(0x00726529);
    /* 00726529: lea edx, [ebp + 0x74] */ r_edx = (u32)(r_ebp+0x74u);
    /* 0072652c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072652d: mov ecx, eax */ r_ecx = r_eax;
    /* 0072652f: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x726534u); f_005c425c();
L_00726534:; BB(0x00726534);
    /* 00726534: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 0072653a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0072653d: je 0x726558 */ if (fZ) goto L_00726558;
L_0072653f:; BB(0x0072653f);
    /* 0072653f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726540: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x726545u); f_005c5528();
    /* 00726545: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726546: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00726548: je 0x726558 */ if (fZ) goto L_00726558;
L_0072654a:; BB(0x0072654a);
    /* 0072654a: add ebp, 0x88 */ {  u32 a = r_ebp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00726550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00726551: mov ecx, eax */ r_ecx = r_eax;
    /* 00726553: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x726558u); f_005c425c();
L_00726558:; BB(0x00726558);
    /* 00726558: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726559: ret  */ FN_RET(0x00726510); r_esp += 4; return;
}

void f_0072655c(void) /* sub_72655C */
{
    FN_ENTER(0x0072655c);
    /* 0072655c: mov dword ptr [0xa9a808], 0x3f800000 */ W32((u32)(0xa9a808u), 0x3f800000u);
    /* 00726566: mov dword ptr [0xa9a80c], 0x41000000 */ W32((u32)(0xa9a80cu), 0x41000000u);
    /* 00726570: mov dword ptr [0xa9a810], 0x3fc00000 */ W32((u32)(0xa9a810u), 0x3fc00000u);
    /* 0072657a: ret  */ FN_RET(0x0072655c); r_esp += 4; return;
}

void f_00726562(void)
{
    FN_ENTER(0x00726562);
    /* 00726562: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00726564: cmp byte ptr [edi], 0xc7 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0xc7u; u32 r = (a - b) & 0xffu;   }
    /* 00726567: add eax, 0xa9a80c */ {  u32 a = r_eax; u32 b = 0xa9a80cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072656c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0072656e: add byte ptr [ecx - 0x39], al */ { u32 ad = (u32)(r_ecx+0xffffffc7u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00726571: add eax, 0xa9a810 */ {  u32 a = r_eax; u32 b = 0xa9a810u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00726576: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00726578: sar byte ptr [edi], 0xc3 */ { u32 ad = (u32)(r_edi); u32 c = (3u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; W8(ad, r);  } }
    /* 0072657b: nop  */ ;
    /* 0072657c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072657d: mov esi, ecx */ r_esi = r_ecx;
    /* 0072657f: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x726584u); f_00816d30();
    /* 00726584: mov ecx, dword ptr [esi + 0x68] */ r_ecx = R32((u32)(r_esi+0x68u));
    /* 00726587: call 0x5d3078 */ r_esp -= 4; W32(r_esp, 0x72658cu); f_005d3078();
    /* 0072658c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072658d: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x726592u); f_00816cb8();
    /* 00726592: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 00726597: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x72659cu); f_00816cb8();
    /* 0072659c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072659f: mov ecx, dword ptr [esi + 0x68] */ r_ecx = R32((u32)(r_esi+0x68u));
    /* 007265a2: call 0x5d3208 */ r_esp -= 4; W32(r_esp, 0x7265a7u); f_005d3208();
    /* 007265a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007265a8: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x7265adu); f_00816cb8();
    /* 007265ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007265ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007265af: ret  */ FN_RET(0x00726562); r_esp += 4; return;
}

void f_00726564(void)
{
    FN_ENTER(0x00726564);
    /* 00726564: cmp byte ptr [edi], 0xc7 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0xc7u; u32 r = (a - b) & 0xffu;   }
    /* 00726567: add eax, 0xa9a80c */ {  u32 a = r_eax; u32 b = 0xa9a80cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072656c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0072656e: add byte ptr [ecx - 0x39], al */ { u32 ad = (u32)(r_ecx+0xffffffc7u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00726571: add eax, 0xa9a810 */ {  u32 a = r_eax; u32 b = 0xa9a810u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00726576: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00726578: sar byte ptr [edi], 0xc3 */ { u32 ad = (u32)(r_edi); u32 c = (3u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; W8(ad, r);  } }
    /* 0072657b: nop  */ ;
    /* 0072657c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072657d: mov esi, ecx */ r_esi = r_ecx;
    /* 0072657f: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x726584u); f_00816d30();
    /* 00726584: mov ecx, dword ptr [esi + 0x68] */ r_ecx = R32((u32)(r_esi+0x68u));
    /* 00726587: call 0x5d3078 */ r_esp -= 4; W32(r_esp, 0x72658cu); f_005d3078();
    /* 0072658c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072658d: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x726592u); f_00816cb8();
    /* 00726592: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 00726597: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x72659cu); f_00816cb8();
    /* 0072659c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072659f: mov ecx, dword ptr [esi + 0x68] */ r_ecx = R32((u32)(r_esi+0x68u));
    /* 007265a2: call 0x5d3208 */ r_esp -= 4; W32(r_esp, 0x7265a7u); f_005d3208();
    /* 007265a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007265a8: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x7265adu); f_00816cb8();
    /* 007265ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007265ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007265af: ret  */ FN_RET(0x00726564); r_esp += 4; return;
}

void f_00726566(void)
{
    FN_ENTER(0x00726566);
    /* 00726566: mov dword ptr [0xa9a80c], 0x41000000 */ W32((u32)(0xa9a80cu), 0x41000000u);
    /* 00726570: mov dword ptr [0xa9a810], 0x3fc00000 */ W32((u32)(0xa9a810u), 0x3fc00000u);
    /* 0072657a: ret  */ FN_RET(0x00726566); r_esp += 4; return;
}

void f_0072656b(void)
{
    FN_ENTER(0x0072656b);
    /* 0072656b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0072656d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 0072656f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00726570: mov dword ptr [0xa9a810], 0x3fc00000 */ W32((u32)(0xa9a810u), 0x3fc00000u);
    /* 0072657a: ret  */ FN_RET(0x0072656b); r_esp += 4; return;
}

void f_0072656e(void)
{
    FN_ENTER(0x0072656e);
    /* 0072656e: add byte ptr [ecx - 0x39], al */ { u32 ad = (u32)(r_ecx+0xffffffc7u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00726571: add eax, 0xa9a810 */ {  u32 a = r_eax; u32 b = 0xa9a810u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00726576: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00726578: sar byte ptr [edi], 0xc3 */ { u32 ad = (u32)(r_edi); u32 c = (3u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; W8(ad, r);  } }
    /* 0072657b: nop  */ ;
    /* 0072657c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072657d: mov esi, ecx */ r_esi = r_ecx;
    /* 0072657f: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x726584u); f_00816d30();
    /* 00726584: mov ecx, dword ptr [esi + 0x68] */ r_ecx = R32((u32)(r_esi+0x68u));
    /* 00726587: call 0x5d3078 */ r_esp -= 4; W32(r_esp, 0x72658cu); f_005d3078();
    /* 0072658c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072658d: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x726592u); f_00816cb8();
    /* 00726592: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 00726597: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x72659cu); f_00816cb8();
    /* 0072659c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072659f: mov ecx, dword ptr [esi + 0x68] */ r_ecx = R32((u32)(r_esi+0x68u));
    /* 007265a2: call 0x5d3208 */ r_esp -= 4; W32(r_esp, 0x7265a7u); f_005d3208();
    /* 007265a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007265a8: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x7265adu); f_00816cb8();
    /* 007265ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007265ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007265af: ret  */ FN_RET(0x0072656e); r_esp += 4; return;
}

void f_00726570(void)
{
    FN_ENTER(0x00726570);
    /* 00726570: mov dword ptr [0xa9a810], 0x3fc00000 */ W32((u32)(0xa9a810u), 0x3fc00000u);
    /* 0072657a: ret  */ FN_RET(0x00726570); r_esp += 4; return;
}

void f_00726574(void)
{
    FN_ENTER(0x00726574);
    /* 00726574: test eax, 0xc0000000 */ {  u32 a = r_eax; u32 b = 0xc0000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00726579: aas  */ UNSUP(0x00726579, "aas ");
    /* 0072657a: ret  */ FN_RET(0x00726574); r_esp += 4; return;
}

void f_0072657c(void) /* sub_72657C */
{
    FN_ENTER(0x0072657c);
    /* 0072657c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072657d: mov esi, ecx */ r_esi = r_ecx;
    /* 0072657f: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x726584u); f_00816d30();
    /* 00726584: mov ecx, dword ptr [esi + 0x68] */ r_ecx = R32((u32)(r_esi+0x68u));
    /* 00726587: call 0x5d3078 */ r_esp -= 4; W32(r_esp, 0x72658cu); f_005d3078();
    /* 0072658c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072658d: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x726592u); f_00816cb8();
    /* 00726592: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 00726597: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x72659cu); f_00816cb8();
    /* 0072659c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072659f: mov ecx, dword ptr [esi + 0x68] */ r_ecx = R32((u32)(r_esi+0x68u));
    /* 007265a2: call 0x5d3208 */ r_esp -= 4; W32(r_esp, 0x7265a7u); f_005d3208();
    /* 007265a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007265a8: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x7265adu); f_00816cb8();
    /* 007265ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007265ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007265af: ret  */ FN_RET(0x0072657c); r_esp += 4; return;
}

void f_007265b0(void) /* sub_7265B0 */
{
    FN_ENTER(0x007265b0);
    /* 007265b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007265b1: mov esi, ecx */ r_esi = r_ecx;
    /* 007265b3: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 007265b7: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 007265ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007265bb: push 0x9f2b34 */ { u32 v = 0x9f2b34u; r_esp -= 4; W32(r_esp, v); }
    /* 007265c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007265c1: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x7265c6u); f_0072a68c();
    /* 007265c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007265c9: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 007265cc: mov dword ptr [esi + 0xb0], 0x61cdb0 */ W32((u32)(r_esi+0xb0u), 0x61cdb0u);
    /* 007265d6: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 007265d8: mov ecx, esi */ r_ecx = r_esi;
    /* 007265da: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007265dc: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007265e0: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7265e5u); f_0072db60();
    /* 007265e5: mov ecx, esi */ r_ecx = r_esi;
    /* 007265e7: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x7265ecu); f_0072e0e4();
    /* 007265ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007265ed: ret 4 */ FN_RET(0x007265b0); r_esp += 8; return;
}

void f_007265f0(void) /* sub_7265F0 */
{
    FN_ENTER(0x007265f0);
    /* 007265f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007265f1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007265f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007265f5: call 0x72657c */ r_esp -= 4; W32(r_esp, 0x7265fau); f_0072657c();
    /* 007265fa: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 007265ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00726601: call 0x7265b0 */ r_esp -= 4; W32(r_esp, 0x726606u); f_007265b0();
    /* 00726606: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726607: ret  */ FN_RET(0x007265f0); r_esp += 4; return;
}

void f_00726608(void) /* sub_726608 */
{
    FN_ENTER(0x00726608);
    /* 00726608: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00726609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072660a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072660b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072660c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072660f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00726611: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 00726615: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726616: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x72661bu); f_0068d5a8();
    /* 0072661b: mov ebx, eax */ r_ebx = r_eax;
    /* 0072661d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00726620: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00726622: jne 0x72662c */ if (!fZ) goto L_0072662c;
L_00726624:; BB(0x00726624);
    /* 00726624: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00726627: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726628: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726629: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072662a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072662b: ret  */ FN_RET(0x00726608); r_esp += 4; return;
L_0072662c:; BB(0x0072662c);
    /* 0072662c: movsx edx, word ptr [ebp + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 00726630: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726631: lea esi, [ebp + 0x24] */ r_esi = (u32)(r_ebp+0x24u);
    /* 00726634: push 0x9f2a20 */ { u32 v = 0x9f2a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00726639: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072663a: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x72663fu); f_0072a68c();
    /* 0072663f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00726642: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00726645: mov dword ptr [ebp + 0xb0], 0x725c8c */ W32((u32)(r_ebp+0xb0u), 0x725c8cu);
    /* 0072664f: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 00726651: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x726656u); f_00816d30();
    /* 00726656: mov ecx, dword ptr [ebp + 0x68] */ r_ecx = R32((u32)(r_ebp+0x68u));
    /* 00726659: call 0x5d3078 */ r_esp -= 4; W32(r_esp, 0x72665eu); f_005d3078();
    /* 0072665e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072665f: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x726664u); f_00816cb8();
    /* 00726664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726665: mov edx, dword ptr [0xa9cd44] */ r_edx = R32((u32)(0xa9cd44u));
    /* 0072666b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072666d: jne 0x726685 */ if (!fZ) goto L_00726685;
L_0072666f:; BB(0x0072666f);
    /* 0072666f: mov edx, dword ptr [ebp + 0x68] */ r_edx = R32((u32)(r_ebp+0x68u));
    /* 00726672: movzx edi, byte ptr [edx + 4] */ r_edi = (u32)R8((u32)(r_edx+0x4u));
    /* 00726676: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00726677: call 0x7930b4 */ r_esp -= 4; W32(r_esp, 0x72667cu); f_007930b4();
    /* 0072667c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072667d: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x726682u); f_00816cb8();
    /* 00726682: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00726685:; BB(0x00726685);
    /* 00726685: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00726687: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072668c: mov ecx, esi */ r_ecx = r_esi;
    /* 0072668e: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x726693u); f_0072db60();
    /* 00726693: mov ecx, esi */ r_ecx = r_esi;
    /* 00726695: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x72669au); f_0072e0e4();
    /* 0072669a: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 0072669d: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 007266a0: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 007266a3: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 007266a6: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007266aa: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 007266ad: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007266b1: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 007266b4: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 007266b7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007266bb: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007266bf: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007266c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007266c3: push dword ptr [ebp + 0x68] */ { u32 v = R32((u32)(r_ebp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 007266c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007266c7: call 0x5c9e40 */ r_esp -= 4; W32(r_esp, 0x7266ccu); f_005c9e40();
    /* 007266cc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007266cf: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007266d2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007266d4: je 0x726740 */ if (fZ) goto L_00726740;
L_007266d6:; BB(0x007266d6);
    /* 007266d6: push 0x43180000 */ { u32 v = 0x43180000u; r_esp -= 4; W32(r_esp, v); }
    /* 007266db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007266dd: mov ecx, esi */ r_ecx = r_esi;
    /* 007266df: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7266e4u); f_0072e7e4();
    /* 007266e4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007266e8: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 007266ec: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 007266f0: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007266f5: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 007266f9: movzx ecx, word ptr [edi + 4] */ r_ecx = (u32)R16((u32)(r_edi+0x4u));
    /* 007266fd: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00726701: or ecx, 0xffff0002 */ {  u32 a = r_ecx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00726707: mov word ptr [edi + 4], cx */ W16((u32)(r_edi+0x4u), (u16)r_ecx);
    /* 0072670b: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0072670f: movzx ebx, word ptr [ebp + 4] */ r_ebx = (u32)R16((u32)(r_ebp+0x4u));
    /* 00726713: or ebx, 0xffff0002 */ {  u32 a = r_ebx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00726719: mov word ptr [ebp + 4], bx */ W16((u32)(r_ebp+0x4u), (u16)r_ebx);
    /* 0072671d: movzx esi, word ptr [edi + 4] */ r_esi = (u32)R16((u32)(r_edi+0x4u));
    /* 00726721: or esi, 0xffff0002 */ {  u32 a = r_esi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00726727: mov word ptr [edi + 4], si */ W16((u32)(r_edi+0x4u), (u16)r_esi);
    /* 0072672b: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 0072672f: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00726734: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00726738: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072673b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072673c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072673d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072673e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072673f: ret  */ FN_RET(0x00726608); r_esp += 4; return;
L_00726740:; BB(0x00726740);
    /* 00726740: push 0x43400000 */ { u32 v = 0x43400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00726745: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00726747: mov ecx, esi */ r_ecx = r_esi;
    /* 00726749: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x72674eu); f_0072e7e4();
    /* 0072674e: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00726752: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x726757u); f_0072e0e4();
    /* 00726757: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0072675b: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x726760u); f_0072e0e4();
    /* 00726760: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00726764: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x726769u); f_0072e0e4();
    /* 00726769: mov ecx, dword ptr [ebp + 0x68] */ r_ecx = R32((u32)(r_ebp+0x68u));
    /* 0072676c: call 0x5d63fc */ r_esp -= 4; W32(r_esp, 0x726771u); f_005d63fc();
    /* 00726771: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00726774: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 00726777: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072677a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072677b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072677c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072677d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072677e: ret  */ FN_RET(0x00726608); r_esp += 4; return;
}

void f_00726780(void) /* sub_726780 */
{
    FN_ENTER(0x00726780);
    /* 00726780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00726781: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00726782: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00726784: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 00726788: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726789: lea edx, [ebp + 0x24] */ r_edx = (u32)(r_ebp+0x24u);
    /* 0072678c: push 0x9f2b04 */ { u32 v = 0x9f2b04u; r_esp -= 4; W32(r_esp, v); }
    /* 00726791: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726792: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x726797u); f_0072a68c();
    /* 00726797: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072679a: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0072679d: mov dword ptr [ebp + 0xb0], 0x61cdb0 */ W32((u32)(r_ebp+0xb0u), 0x61cdb0u);
    /* 007267a7: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 007267a9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007267ab: call 0x72657c */ r_esp -= 4; W32(r_esp, 0x7267b0u); f_0072657c();
    /* 007267b0: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007267b2: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 007267b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007267b9: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7267beu); f_0072db60();
    /* 007267be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007267c0: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x7267c5u); f_0072e0e4();
    /* 007267c5: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 007267c8: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 007267cb: mov ecx, dword ptr [ebp + 0x68] */ r_ecx = R32((u32)(r_ebp+0x68u));
    /* 007267ce: call 0x5d69a8 */ r_esp -= 4; W32(r_esp, 0x7267d3u); f_005d69a8();
    /* 007267d3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007267d6: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 007267d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007267da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007267db: ret  */ FN_RET(0x00726780); r_esp += 4; return;
}

void f_007267dc(void) /* sub_7267DC */
{
    FN_ENTER(0x007267dc);
    /* 007267dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007267dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007267de: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007267e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007267e3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007267e6: call 0x5dc1e0 */ r_esp -= 4; W32(r_esp, 0x7267ebu); f_005dc1e0();
    /* 007267eb: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 007267ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007267f0: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 007267f3: push 0x9f2940 */ { u32 v = 0x9f2940u; r_esp -= 4; W32(r_esp, v); }
    /* 007267f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007267f9: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x7267feu); f_0072a68c();
    /* 007267fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00726801: mov ecx, dword ptr [ebx + 0x68] */ r_ecx = R32((u32)(r_ebx+0x68u));
    /* 00726804: mov dword ptr [ebx + 0xb0], 0x61cdb0 */ W32((u32)(r_ebx+0xb0u), 0x61cdb0u);
    /* 0072680e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00726811: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726812: call 0x5d4108 */ r_esp -= 4; W32(r_esp, 0x726817u); f_005d4108();
    /* 00726817: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00726819: mov esi, ebx */ r_esi = r_ebx;
    /* 0072681b: mov ebx, eax */ r_ebx = r_eax;
L_0072681d:; BB(0x0072681d);
    /* 0072681d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072681e: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00726822: call 0x5dbc08 */ r_esp -= 4; W32(r_esp, 0x726827u); f_005dbc08();
    /* 00726827: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072682a: je 0x72684f */ if (fZ) goto L_0072684f;
L_0072682c:; BB(0x0072682c);
    /* 0072682c: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0072682f: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00726832: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726833: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00726835: push dword ptr [ecx + ebx*4 + 4] */ { u32 v = R32((u32)(r_ecx+r_ebx*4+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00726839: call 0x70ff48 */ r_esp -= 4; W32(r_esp, 0x72683eu); f_0070ff48();
    /* 0072683e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00726841:; BB(0x00726841);
    /* 00726841: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00726844: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00726847: jl 0x72681d */ if ((fS!=fO)) goto L_0072681d;
L_00726849:; BB(0x00726849);
    /* 00726849: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072684c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072684d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072684e: ret  */ FN_RET(0x007267dc); r_esp += 4; return;
L_0072684f:; BB(0x0072684f);
    /* 0072684f: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 00726852: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00726854: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726855: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726856: push dword ptr [ecx + ebx*4 + 4] */ { u32 v = R32((u32)(r_ecx+r_ebx*4+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072685a: call 0x70ff48 */ r_esp -= 4; W32(r_esp, 0x72685fu); f_0070ff48();
    /* 0072685f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00726862: jmp 0x726841 */ goto L_00726841;
}

void f_00726864(void) /* sub_726864 */
{
    FN_ENTER(0x00726864);
    /* 00726864: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00726865: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00726866: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00726867: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00726868: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072686b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072686d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00726870: call 0x5dc1e0 */ r_esp -= 4; W32(r_esp, 0x726875u); f_005dc1e0();
    /* 00726875: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00726879: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072687a: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0072687d: push 0x9f2760 */ { u32 v = 0x9f2760u; r_esp -= 4; W32(r_esp, v); }
    /* 00726882: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726883: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x726888u); f_0072a68c();
    /* 00726888: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072688b: mov ecx, dword ptr [ebx + 0x68] */ r_ecx = R32((u32)(r_ebx+0x68u));
    /* 0072688e: mov dword ptr [ebx + 0xb0], 0x61cdb0 */ W32((u32)(r_ebx+0xb0u), 0x61cdb0u);
    /* 00726898: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0072689b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072689c: call 0x5d4108 */ r_esp -= 4; W32(r_esp, 0x7268a1u); f_005d4108();
    /* 007268a1: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007268a4: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 007268a6: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 007268a9: mov ebp, dword ptr [eax + 0x3c] */ r_ebp = R32((u32)(r_eax+0x3cu));
    /* 007268ac: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 007268b0: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 007268b5: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 007268b8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7268bdu); f_0079317c();
    /* 007268bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007268be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007268bf: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 007268c3: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x7268c8u); f_0072d3dc();
    /* 007268c8: push 0xc1 */ { u32 v = 0xc1u; r_esp -= 4; W32(r_esp, v); }
    /* 007268cd: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7268d2u); f_0079317c();
    /* 007268d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007268d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007268d4: mov ecx, esi */ r_ecx = r_esi;
    /* 007268d6: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x7268dbu); f_0072d3dc();
    /* 007268db: push 0xc2 */ { u32 v = 0xc2u; r_esp -= 4; W32(r_esp, v); }
    /* 007268e0: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7268e5u); f_0079317c();
    /* 007268e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007268e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007268e7: mov ecx, edi */ r_ecx = r_edi;
    /* 007268e9: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x7268eeu); f_0072d3dc();
    /* 007268ee: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007268f1: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 007268f5: or eax, 0xffff0020 */ {  u32 a = r_eax; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007268fa: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
    /* 007268fe: call 0x5dbdb8 */ r_esp -= 4; W32(r_esp, 0x726903u); f_005dbdb8();
    /* 00726903: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00726906: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726907: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0072690b: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x726910u); f_0072d458();
    /* 00726910: movsx eax, word ptr [esp + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x2u));
    /* 00726915: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726916: mov ecx, esi */ r_ecx = r_esi;
    /* 00726918: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x72691du); f_0072d458();
    /* 0072691d: movsx eax, word ptr [esp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp));
    /* 00726921: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726922: mov ecx, edi */ r_ecx = r_edi;
    /* 00726924: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x726929u); f_0072d458();
    /* 00726929: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 0072692e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00726930: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x726935u); f_0072ddf4();
    /* 00726935: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00726938: fmul dword ptr [0x970740] */ ST(0) = ST(0) * R_F32((u32)(0x970740u));
    /* 0072693e: fadd dword ptr [0x970744] */ ST(0) = ST(0) + R_F32((u32)(0x970744u));
    /* 00726944: movzx esi, word ptr [ebp + 4] */ r_esi = (u32)R16((u32)(r_ebp+0x4u));
    /* 00726948: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0072694b: or esi, 0xffff0002 */ {  u32 a = r_esi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00726951: mov word ptr [ebp + 4], si */ W16((u32)(r_ebp+0x4u), (u16)r_esi);
    /* 00726955: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00726958: mov ebp, dword ptr [eax + 0x10] */ r_ebp = R32((u32)(r_eax+0x10u));
    /* 0072695b: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 0072695e: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00726961: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x726966u); f_0072e0e4();
    /* 00726966: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 0072696b: movsx edi, word ptr [esp + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00726970: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00726972: mov eax, edi */ r_eax = r_edi;
    /* 00726974: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00726977: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0072697a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0072697c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0072697f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00726981: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00726983: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 00726986: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00726988: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072698a: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0072698c: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0072698f: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00726992: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00726994: movsx ebp, di */ r_ebp = (u32)(i32)(i16)(u16)r_edi;
    /* 00726997: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0072699b: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0072699f: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 007269a2: mov ecx, esi */ r_ecx = r_esi;
    /* 007269a4: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x7269a7u); call_ind(t); }
    /* 007269a7: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007269aa: mov ebp, dword ptr [eax + 0x1c] */ r_ebp = R32((u32)(r_eax+0x1cu));
    /* 007269ad: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 007269b0: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 007269b3: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x7269b8u); f_0072e0e4();
    /* 007269b8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 007269bd: movsx edi, word ptr [esp + 6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0x6u));
    /* 007269c2: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007269c4: mov eax, edi */ r_eax = r_edi;
    /* 007269c6: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 007269c9: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007269cc: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007269ce: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007269d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007269d3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007269d5: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 007269d8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007269da: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007269dc: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007269de: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 007269e1: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007269e4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 007269e6: movsx ebp, di */ r_ebp = (u32)(i32)(i16)(u16)r_edi;
    /* 007269e9: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 007269ed: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007269f1: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 007269f4: mov ecx, esi */ r_ecx = r_esi;
    /* 007269f6: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x7269f9u); call_ind(t); }
    /* 007269f9: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007269fc: mov ebp, dword ptr [eax + 0x28] */ r_ebp = R32((u32)(r_eax+0x28u));
    /* 007269ff: mov esi, dword ptr [eax + 0x2c] */ r_esi = R32((u32)(r_eax+0x2cu));
    /* 00726a02: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00726a05: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x726a0au); f_0072e0e4();
    /* 00726a0a: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00726a0f: movsx edi, word ptr [esp + 8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00726a14: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00726a16: mov eax, edi */ r_eax = r_edi;
    /* 00726a18: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00726a1b: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00726a1e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00726a20: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00726a23: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00726a25: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00726a27: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 00726a2a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00726a2c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00726a2e: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00726a30: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00726a33: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00726a36: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00726a38: movsx ebp, di */ r_ebp = (u32)(i32)(i16)(u16)r_edi;
    /* 00726a3b: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00726a3f: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00726a43: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 00726a46: mov ecx, esi */ r_ecx = r_esi;
    /* 00726a48: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x726a4bu); call_ind(t); }
    /* 00726a4b: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00726a4e: mov ebp, dword ptr [eax + 0x34] */ r_ebp = R32((u32)(r_eax+0x34u));
    /* 00726a51: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 00726a54: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00726a57: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x726a5cu); f_0072e0e4();
    /* 00726a5c: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00726a61: movsx ebx, word ptr [esp + 0xa] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp+0xau));
    /* 00726a66: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00726a68: mov edi, ebx */ r_edi = r_ebx;
    /* 00726a6a: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00726a6d: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00726a70: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00726a72: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00726a75: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00726a77: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00726a79: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 00726a7c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00726a7e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00726a80: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00726a82: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00726a85: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00726a88: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00726a8a: movsx ebp, bx */ r_ebp = (u32)(i32)(i16)(u16)r_ebx;
    /* 00726a8d: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00726a91: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00726a95: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 00726a98: mov ecx, esi */ r_ecx = r_esi;
    /* 00726a9a: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x726a9du); call_ind(t); }
    /* 00726a9d: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00726aa0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726aa1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726aa2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726aa3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726aa4: ret  */ FN_RET(0x00726864); r_esp += 4; return;
}

void f_00726aa8(void) /* sub_726AA8 */
{
    FN_ENTER(0x00726aa8);
    /* 00726aa8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00726aa9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00726aaa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00726aab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00726aac: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00726aaf: mov edi, ecx */ r_edi = r_ecx;
    /* 00726ab1: movsx edx, word ptr [edi + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00726ab5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00726ab7: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 00726abc: mov word ptr [esp + 0x14], ax */ W16((u32)(r_esp+0x14u), (u16)r_eax);
    /* 00726ac1: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 00726ac6: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 00726acb: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 00726ad0: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 00726ad5: mov word ptr [esp + 0x20], ax */ W16((u32)(r_esp+0x20u), (u16)r_eax);
    /* 00726ada: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 00726adf: mov word ptr [esp + 0x1c], ax */ W16((u32)(r_esp+0x1cu), (u16)r_eax);
    /* 00726ae4: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 00726ae9: mov word ptr [esp + 0x18], ax */ W16((u32)(r_esp+0x18u), (u16)r_eax);
    /* 00726aee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726aef: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x726af4u); f_0068d5a8();
    /* 00726af4: mov esi, eax */ r_esi = r_eax;
    /* 00726af6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00726af9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00726afb: jne 0x726b05 */ if (!fZ) goto L_00726b05;
L_00726afd:; BB(0x00726afd);
    /* 00726afd: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00726b00: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726b01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726b02: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726b03: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726b04: ret  */ FN_RET(0x00726aa8); r_esp += 4; return;
L_00726b05:; BB(0x00726b05);
    /* 00726b05: movsx edx, word ptr [edi + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00726b09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726b0a: lea ebx, [edi + 0x24] */ r_ebx = (u32)(r_edi+0x24u);
    /* 00726b0d: push 0x9f26e0 */ { u32 v = 0x9f26e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00726b12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00726b13: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x726b18u); f_0072a68c();
    /* 00726b18: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00726b1b: mov dword ptr [edi + 0xb0], 0x725bcc */ W32((u32)(r_edi+0xb0u), 0x725bccu);
    /* 00726b25: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 00726b27: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 00726b2a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00726b2d: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00726b31: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 00726b34: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00726b38: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00726b3b: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00726b3f: push 0xa2 */ { u32 v = 0xa2u; r_esp -= 4; W32(r_esp, v); }
    /* 00726b44: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726b49u); f_0079317c();
    /* 00726b49: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00726b4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726b4d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00726b4f: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726b54u); f_0072d3dc();
    /* 00726b54: push 0xa3 */ { u32 v = 0xa3u; r_esp -= 4; W32(r_esp, v); }
    /* 00726b59: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726b5eu); f_0079317c();
    /* 00726b5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726b5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726b60: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00726b64: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726b69u); f_0072d3dc();
    /* 00726b69: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 00726b6e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726b73u); f_0079317c();
    /* 00726b73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726b74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726b75: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00726b79: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726b7eu); f_0072d3dc();
    /* 00726b7e: push 0xa5 */ { u32 v = 0xa5u; r_esp -= 4; W32(r_esp, v); }
    /* 00726b83: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726b88u); f_0079317c();
    /* 00726b88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726b89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726b8a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00726b8c: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726b91u); f_0072d3dc();
    /* 00726b91: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 00726b96: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726b9bu); f_0079317c();
    /* 00726b9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726b9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726b9d: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00726ba1: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726ba6u); f_0072d3dc();
    /* 00726ba6: movsx edx, word ptr [esi + 0x2f6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2f6u));
    /* 00726bad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726bae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00726bb0: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x726bb5u); f_0072d458();
    /* 00726bb5: movsx edx, word ptr [esi + 0x2fa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2fau));
    /* 00726bbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726bbd: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00726bc1: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x726bc6u); f_0072d458();
    /* 00726bc6: movsx edx, word ptr [esi + 0x2f8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2f8u));
    /* 00726bcd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726bce: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00726bd2: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x726bd7u); f_0072d458();
    /* 00726bd7: movsx edx, word ptr [esi + 0x2fc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2fcu));
    /* 00726bde: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726bdf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00726be1: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x726be6u); f_0072d458();
    /* 00726be6: movsx edx, word ptr [esi + 0x2fe] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2feu));
    /* 00726bed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726bee: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00726bf2: call 0x72d458 */ r_esp -= 4; W32(r_esp, 0x726bf7u); f_0072d458();
    /* 00726bf7: mov edx, dword ptr [edi + 0x70] */ r_edx = R32((u32)(r_edi+0x70u));
    /* 00726bfa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00726bfc: je 0x726c73 */ if (fZ) goto L_00726c73;
L_00726bfe:; BB(0x00726bfe);
    /* 00726bfe: mov ecx, edi */ r_ecx = r_edi;
    /* 00726c00: call 0x725b14 */ r_esp -= 4; W32(r_esp, 0x726c05u); f_00725b14();
    /* 00726c05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00726c07: je 0x726c1d */ if (fZ) goto L_00726c1d;
L_00726c09:; BB(0x00726c09);
    /* 00726c09: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00726c0d: push dword ptr [edi + 0xa4] */ { u32 v = R32((u32)(r_edi+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00726c13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726c14: mov ecx, esi */ r_ecx = r_esi;
    /* 00726c16: call 0x68e4e8 */ r_esp -= 4; W32(r_esp, 0x726c1bu); f_0068e4e8();
    /* 00726c1b: jmp 0x726c2c */ goto L_00726c2c;
L_00726c1d:; BB(0x00726c1d);
    /* 00726c1d: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00726c21: push dword ptr [edi + 0x70] */ { u32 v = R32((u32)(r_edi+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 00726c24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726c25: mov ecx, esi */ r_ecx = r_esi;
    /* 00726c27: call 0x68e030 */ r_esp -= 4; W32(r_esp, 0x726c2cu); f_0068e030();
L_00726c2c:; BB(0x00726c2c);
    /* 00726c2c: movsx eax, word ptr [esp + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x18u));
    /* 00726c31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726c32: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00726c34: call 0x72d470 */ r_esp -= 4; W32(r_esp, 0x726c39u); f_0072d470();
    /* 00726c39: movsx eax, word ptr [esp + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x1au));
    /* 00726c3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726c3f: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00726c43: call 0x72d470 */ r_esp -= 4; W32(r_esp, 0x726c48u); f_0072d470();
    /* 00726c48: movsx eax, word ptr [esp + 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x1cu));
    /* 00726c4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726c4e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00726c52: call 0x72d470 */ r_esp -= 4; W32(r_esp, 0x726c57u); f_0072d470();
    /* 00726c57: movsx eax, word ptr [esp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 00726c5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726c5d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00726c5f: call 0x72d470 */ r_esp -= 4; W32(r_esp, 0x726c64u); f_0072d470();
    /* 00726c64: movsx eax, word ptr [esp + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x1eu));
    /* 00726c69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726c6a: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00726c6e: call 0x72d470 */ r_esp -= 4; W32(r_esp, 0x726c73u); f_0072d470();
L_00726c73:; BB(0x00726c73);
    /* 00726c73: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00726c76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726c77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726c78: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726c79: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726c7a: ret  */ FN_RET(0x00726aa8); r_esp += 4; return;
}

void f_00726c7c(void) /* sub_726C7C */
{
    FN_ENTER(0x00726c7c);
    /* 00726c7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00726c7d: mov esi, ecx */ r_esi = r_ecx;
    /* 00726c7f: mov ecx, esi */ r_ecx = r_esi;
    /* 00726c81: call 0x726aa8 */ r_esp -= 4; W32(r_esp, 0x726c86u); f_00726aa8();
    /* 00726c86: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00726c89: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00726c8c: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00726c8f: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 00726c93: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00726c99: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 00726c9d: movzx esi, word ptr [eax + 4] */ r_esi = (u32)R16((u32)(r_eax+0x4u));
    /* 00726ca1: or esi, 0xffff0002 */ {  u32 a = r_esi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00726ca7: mov word ptr [eax + 4], si */ W16((u32)(r_eax+0x4u), (u16)r_esi);
    /* 00726cab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726cac: ret  */ FN_RET(0x00726c7c); r_esp += 4; return;
}

void f_00726cb0(void) /* sub_726CB0 */
{
    FN_ENTER(0x00726cb0);
    /* 00726cb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00726cb1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00726cb2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00726cb3: mov esi, ecx */ r_esi = r_ecx;
    /* 00726cb5: mov ecx, esi */ r_ecx = r_esi;
    /* 00726cb7: call 0x726aa8 */ r_esp -= 4; W32(r_esp, 0x726cbcu); f_00726aa8();
    /* 00726cbc: push 0xbf */ { u32 v = 0xbfu; r_esp -= 4; W32(r_esp, v); }
    /* 00726cc1: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00726cc4: mov edi, dword ptr [eax + 0x14] */ r_edi = R32((u32)(r_eax+0x14u));
    /* 00726cc7: mov ebp, dword ptr [eax + 0x18] */ r_ebp = R32((u32)(r_eax+0x18u));
    /* 00726cca: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726ccfu); f_0079317c();
    /* 00726ccf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726cd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726cd1: mov ecx, edi */ r_ecx = r_edi;
    /* 00726cd3: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x726cd8u); f_0072db50();
    /* 00726cd8: mov ecx, edi */ r_ecx = r_edi;
    /* 00726cda: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x726cdfu); f_0072e0e4();
    /* 00726cdf: mov eax, dword ptr [esi + 0x68] */ r_eax = R32((u32)(r_esi+0x68u));
    /* 00726ce2: movzx edx, byte ptr [eax + 5] */ r_edx = (u32)R8((u32)(r_eax+0x5u));
    /* 00726ce6: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 00726ce9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726cea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726ceb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726cec: ret  */ FN_RET(0x00726cb0); r_esp += 4; return;
}

void f_00726cf0(void) /* sub_726CF0 */
{
    FN_ENTER(0x00726cf0);
    /* 00726cf0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00726cf1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00726cf2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00726cf3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00726cf4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00726cf7: mov ebp, dword ptr [ecx + 0x28] */ r_ebp = R32((u32)(r_ecx+0x28u));
    /* 00726cfa: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00726cfd: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00726d01: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00726d05: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 00726d08: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00726d0b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00726d0e: mov ebp, dword ptr [ebp + 0x10] */ r_ebp = R32((u32)(r_ebp+0x10u));
    /* 00726d11: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00726d14: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00726d18: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00726d1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00726d1e: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x726d20u); call_ind(t); }
    /* 00726d20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00726d22: mov ecx, edi */ r_ecx = r_edi;
    /* 00726d24: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x726d26u); call_ind(t); }
    /* 00726d26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00726d28: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00726d2c: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x726d2eu); call_ind(t); }
    /* 00726d2e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00726d30: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00726d34: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x726d36u); call_ind(t); }
    /* 00726d36: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00726d38: je 0x726dbb */ if (fZ) goto L_00726dbb;
L_00726d3e:; BB(0x00726d3e);
    /* 00726d3e: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00726d42: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00726d44: mov edi, esi */ r_edi = r_esi;
    /* 00726d46: mov esi, ebp */ r_esi = r_ebp;
    /* 00726d48: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00726d4a: mov ebx, eax */ r_ebx = r_eax;
L_00726d4c:; BB(0x00726d4c);
    /* 00726d4c: movzx edx, byte ptr [ebp] */ r_edx = (u32)R8((u32)(r_ebp));
    /* 00726d50: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00726d53: je 0x726dae */ if (fZ) goto L_00726dae;
L_00726d55:; BB(0x00726d55);
    /* 00726d55: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00726d58: je 0x726da1 */ if (fZ) goto L_00726da1;
L_00726d5a:; BB(0x00726d5a);
    /* 00726d5a: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00726d5d: je 0x726d81 */ if (fZ) goto L_00726d81;
L_00726d5f:; BB(0x00726d5f);
    /* 00726d5f: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00726d62: jne 0x726d71 */ if (!fZ) goto L_00726d71;
L_00726d64:; BB(0x00726d64);
    /* 00726d64: movsx edx, byte ptr [ebp + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x1u));
    /* 00726d68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726d69: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00726d6d: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x726d6fu); call_ind(t); }
    /* 00726d6f: jmp 0x726d8c */ goto L_00726d8c;
L_00726d71:; BB(0x00726d71);
    /* 00726d71: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00726d74: jne 0x726d8c */ if (!fZ) goto L_00726d8c;
L_00726d76:; BB(0x00726d76);
    /* 00726d76: movsx edx, byte ptr [ebp + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x1u));
    /* 00726d7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726d7b: mov ecx, esi */ r_ecx = r_esi;
    /* 00726d7d: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x726d7fu); call_ind(t); }
    /* 00726d7f: jmp 0x726d8c */ goto L_00726d8c;
L_00726d81:; BB(0x00726d81);
    /* 00726d81: movsx edx, byte ptr [ebp + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x1u));
    /* 00726d85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726d86: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00726d8a: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x726d8cu); call_ind(t); }
L_00726d8c:; BB(0x00726d8c);
    /* 00726d8c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00726d8f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00726d92: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00726d95: jb 0x726d4c */ if (fC) goto L_00726d4c;
L_00726d97:; BB(0x00726d97);
    /* 00726d97: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00726d9a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726d9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726d9c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726d9d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726d9e: ret 8 */ FN_RET(0x00726cf0); r_esp += 12; return;
L_00726da1:; BB(0x00726da1);
    /* 00726da1: movsx edx, byte ptr [ebp + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x1u));
    /* 00726da5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726da6: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00726daa: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x726dacu); call_ind(t); }
    /* 00726dac: jmp 0x726d8c */ goto L_00726d8c;
L_00726dae:; BB(0x00726dae);
    /* 00726dae: movsx edx, byte ptr [ebp + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x1u));
    /* 00726db2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726db3: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00726db7: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x726db9u); call_ind(t); }
    /* 00726db9: jmp 0x726d8c */ goto L_00726d8c;
L_00726dbb:; BB(0x00726dbb);
    /* 00726dbb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00726dbe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726dbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726dc0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726dc1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726dc2: ret 8 */ FN_RET(0x00726cf0); r_esp += 12; return;
}

void f_00726dc8(void) /* sub_726DC8 */
{
    FN_ENTER(0x00726dc8);
    /* 00726dc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00726dc9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00726dca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00726dcb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00726dcc: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00726dcf: mov edi, ecx */ r_edi = r_ecx;
    /* 00726dd1: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00726dd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726dd6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x726ddbu); f_0068d5a8();
    /* 00726ddb: mov esi, eax */ r_esi = r_eax;
    /* 00726ddd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00726de0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00726de2: jne 0x726dec */ if (!fZ) goto L_00726dec;
L_00726de4:; BB(0x00726de4);
    /* 00726de4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00726de7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726de8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726de9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726dea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726deb: ret  */ FN_RET(0x00726dc8); r_esp += 4; return;
L_00726dec:; BB(0x00726dec);
    /* 00726dec: movsx edx, word ptr [edi + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00726df0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726df1: lea ebx, [edi + 0x24] */ r_ebx = (u32)(r_edi+0x24u);
    /* 00726df4: push 0x9f2680 */ { u32 v = 0x9f2680u; r_esp -= 4; W32(r_esp, v); }
    /* 00726df9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00726dfa: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x726dffu); f_0072a68c();
    /* 00726dff: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00726e02: mov dword ptr [edi + 0xb0], 0x725bcc */ W32((u32)(r_edi+0xb0u), 0x725bccu);
    /* 00726e0c: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 00726e0e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00726e11: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 00726e14: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00726e18: mov ebp, dword ptr [eax + 0xc] */ r_ebp = R32((u32)(r_eax+0xcu));
    /* 00726e1b: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00726e1f: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00726e23: push 0xb5 */ { u32 v = 0xb5u; r_esp -= 4; W32(r_esp, v); }
    /* 00726e28: mov ebx, dword ptr [eax + 0x10] */ r_ebx = R32((u32)(r_eax+0x10u));
    /* 00726e2b: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726e30u); f_0079317c();
    /* 00726e30: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00726e33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726e34: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00726e38: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726e3du); f_0072d3dc();
    /* 00726e3d: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 00726e42: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726e47u); f_0079317c();
    /* 00726e47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726e48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726e49: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00726e4d: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726e52u); f_0072d3dc();
    /* 00726e52: push 0xb7 */ { u32 v = 0xb7u; r_esp -= 4; W32(r_esp, v); }
    /* 00726e57: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726e5cu); f_0079317c();
    /* 00726e5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726e5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726e5e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00726e62: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726e67u); f_0072d3dc();
    /* 00726e67: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00726e6c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726e71u); f_0079317c();
    /* 00726e71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726e72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726e73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00726e75: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726e7au); f_0072d3dc();
    /* 00726e7a: push 0xb9 */ { u32 v = 0xb9u; r_esp -= 4; W32(r_esp, v); }
    /* 00726e7f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726e84u); f_0079317c();
    /* 00726e84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726e85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726e86: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00726e88: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726e8du); f_0072d3dc();
    /* 00726e8d: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00726e90: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00726e94: or edx, 0xffff0020 */ {  u32 a = r_edx; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00726e9a: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00726e9e: mov ecx, esi */ r_ecx = r_esi;
    /* 00726ea0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00726ea4: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00726ea8: or edx, 0xffff0020 */ {  u32 a = r_edx; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00726eae: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00726eb2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00726eb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00726eb8: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00726ebc: or edx, 0xffff0020 */ {  u32 a = r_edx; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00726ec2: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00726ec6: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 00726eca: or edx, 0xffff0020 */ {  u32 a = r_edx; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00726ed0: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 00726ed4: movzx ebp, word ptr [ebx + 4] */ r_ebp = (u32)R16((u32)(r_ebx+0x4u));
    /* 00726ed8: or ebp, 0xffff0020 */ {  u32 a = r_ebp; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00726ede: mov word ptr [ebx + 4], bp */ W16((u32)(r_ebx+0x4u), (u16)r_ebp);
    /* 00726ee2: call 0x770d6c */ r_esp -= 4; W32(r_esp, 0x726ee7u); f_00770d6c();
    /* 00726ee7: push 0x72d458 */ { u32 v = 0x72d458u; r_esp -= 4; W32(r_esp, v); }
    /* 00726eec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726eed: mov ecx, edi */ r_ecx = r_edi;
    /* 00726eef: call 0x726cf0 */ r_esp -= 4; W32(r_esp, 0x726ef4u); f_00726cf0();
    /* 00726ef4: mov eax, dword ptr [edi + 0x70] */ r_eax = R32((u32)(r_edi+0x70u));
    /* 00726ef7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00726ef9: je 0x726f20 */ if (fZ) goto L_00726f20;
L_00726efb:; BB(0x00726efb);
    /* 00726efb: mov ecx, edi */ r_ecx = r_edi;
    /* 00726efd: call 0x725b14 */ r_esp -= 4; W32(r_esp, 0x726f02u); f_00725b14();
    /* 00726f02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00726f04: jne 0x726f28 */ if (!fZ) goto L_00726f28;
L_00726f06:; BB(0x00726f06);
    /* 00726f06: push 0x72d470 */ { u32 v = 0x72d470u; r_esp -= 4; W32(r_esp, v); }
    /* 00726f0b: mov eax, dword ptr [edi + 0x70] */ r_eax = R32((u32)(r_edi+0x70u));
    /* 00726f0e: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00726f11: mov ecx, edi */ r_ecx = r_edi;
    /* 00726f13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726f14: call 0x726cf0 */ r_esp -= 4; W32(r_esp, 0x726f19u); f_00726cf0();
L_00726f19:; BB(0x00726f19);
    /* 00726f19: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00726f1b: call 0x72d4b0 */ r_esp -= 4; W32(r_esp, 0x726f20u); f_0072d4b0();
L_00726f20:; BB(0x00726f20);
    /* 00726f20: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00726f23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726f24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726f25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726f26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726f27: ret  */ FN_RET(0x00726dc8); r_esp += 4; return;
L_00726f28:; BB(0x00726f28);
    /* 00726f28: push 0x72d470 */ { u32 v = 0x72d470u; r_esp -= 4; W32(r_esp, v); }
    /* 00726f2d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00726f2f: mov ecx, edi */ r_ecx = r_edi;
    /* 00726f31: call 0x726cf0 */ r_esp -= 4; W32(r_esp, 0x726f36u); f_00726cf0();
    /* 00726f36: jmp 0x726f19 */ goto L_00726f19;
}

void f_00726f38(void) /* sub_726F38 */
{
    FN_ENTER(0x00726f38);
    /* 00726f38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00726f39: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00726f3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00726f3b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00726f3c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00726f3f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00726f41: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00726f45: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 00726f48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726f49: push 0x9f2560 */ { u32 v = 0x9f2560u; r_esp -= 4; W32(r_esp, v); }
    /* 00726f4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00726f4f: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x726f54u); f_0072a68c();
    /* 00726f54: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00726f57: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00726f59: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00726f5c: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 00726f5f: mov ebp, dword ptr [eax + 0x10] */ r_ebp = R32((u32)(r_eax+0x10u));
    /* 00726f62: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00726f65: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00726f69: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 00726f6c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00726f70: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00726f75: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726f7au); f_0079317c();
    /* 00726f7a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00726f7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726f7e: mov ecx, edi */ r_ecx = r_edi;
    /* 00726f80: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726f85u); f_0072d3dc();
    /* 00726f85: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 00726f8a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726f8fu); f_0079317c();
    /* 00726f8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726f91: mov ecx, esi */ r_ecx = r_esi;
    /* 00726f93: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726f98u); f_0072d3dc();
    /* 00726f98: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 00726f9d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fa2u); f_0079317c();
    /* 00726fa2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fa4: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00726fa8: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fadu); f_0072d3dc();
    /* 00726fad: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 00726fb2: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fb7u); f_0079317c();
    /* 00726fb7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fb9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00726fbb: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fc0u); f_0072d3dc();
    /* 00726fc0: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00726fc5: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fcau); f_0079317c();
    /* 00726fca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fcc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00726fce: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fd3u); f_0072d3dc();
    /* 00726fd3: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00726fd8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fddu); f_0079317c();
    /* 00726fdd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fdf: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00726fe3: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fe8u); f_0072d3dc();
    /* 00726fe8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00726feb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726fec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726fed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726fee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726fef: ret  */ FN_RET(0x00726f38); r_esp += 4; return;
}

void f_00726f64(void)
{
    FN_ENTER(0x00726f64);
    /* 00726f64: adc al, 0x89 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00726f66: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 00726f67: and al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00726f69: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 00726f6c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00726f70: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00726f75: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726f7au); f_0079317c();
    /* 00726f7a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00726f7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726f7e: mov ecx, edi */ r_ecx = r_edi;
    /* 00726f80: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726f85u); f_0072d3dc();
    /* 00726f85: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 00726f8a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726f8fu); f_0079317c();
    /* 00726f8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726f91: mov ecx, esi */ r_ecx = r_esi;
    /* 00726f93: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726f98u); f_0072d3dc();
    /* 00726f98: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 00726f9d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fa2u); f_0079317c();
    /* 00726fa2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fa4: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00726fa8: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fadu); f_0072d3dc();
    /* 00726fad: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 00726fb2: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fb7u); f_0079317c();
    /* 00726fb7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fb9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00726fbb: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fc0u); f_0072d3dc();
    /* 00726fc0: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00726fc5: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fcau); f_0079317c();
    /* 00726fca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fcc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00726fce: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fd3u); f_0072d3dc();
    /* 00726fd3: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00726fd8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fddu); f_0079317c();
    /* 00726fdd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fdf: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00726fe3: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fe8u); f_0072d3dc();
    /* 00726fe8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00726feb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726fec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726fed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726fee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726fef: ret  */ FN_RET(0x00726f64); r_esp += 4; return;
}

void f_00726f72(void)
{
    FN_ENTER(0x00726f72);
    /* 00726f72: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00726f74: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00726f76: add al, dl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00726f78: push es */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00726f79: add byte ptr [ebx - 0x74afef3c], al */ { u32 ad = (u32)(r_ebx+0x8b5010c4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00726f7f: iretd  */ UNSUP(0x00726f7f, "iretd ");
    /* 00726f80: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726f85u); f_0072d3dc();
    /* 00726f85: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 00726f8a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726f8fu); f_0079317c();
    /* 00726f8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726f91: mov ecx, esi */ r_ecx = r_esi;
    /* 00726f93: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726f98u); f_0072d3dc();
    /* 00726f98: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 00726f9d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fa2u); f_0079317c();
    /* 00726fa2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fa4: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00726fa8: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fadu); f_0072d3dc();
    /* 00726fad: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 00726fb2: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fb7u); f_0079317c();
    /* 00726fb7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fb9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00726fbb: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fc0u); f_0072d3dc();
    /* 00726fc0: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00726fc5: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fcau); f_0079317c();
    /* 00726fca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fcc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00726fce: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fd3u); f_0072d3dc();
    /* 00726fd3: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00726fd8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fddu); f_0079317c();
    /* 00726fdd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fdf: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00726fe3: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fe8u); f_0072d3dc();
    /* 00726fe8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00726feb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726fec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726fed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726fee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726fef: ret  */ FN_RET(0x00726f72); r_esp += 4; return;
}

void f_00726f73(void)
{
    FN_ENTER(0x00726f73);
    /* 00726f73: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00726f75: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726f7au); f_0079317c();
    /* 00726f7a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00726f7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726f7e: mov ecx, edi */ r_ecx = r_edi;
    /* 00726f80: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726f85u); f_0072d3dc();
    /* 00726f85: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 00726f8a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726f8fu); f_0079317c();
    /* 00726f8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726f91: mov ecx, esi */ r_ecx = r_esi;
    /* 00726f93: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726f98u); f_0072d3dc();
    /* 00726f98: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 00726f9d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fa2u); f_0079317c();
    /* 00726fa2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fa4: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00726fa8: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fadu); f_0072d3dc();
    /* 00726fad: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 00726fb2: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fb7u); f_0079317c();
    /* 00726fb7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fb9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00726fbb: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fc0u); f_0072d3dc();
    /* 00726fc0: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00726fc5: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fcau); f_0079317c();
    /* 00726fca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fcc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00726fce: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fd3u); f_0072d3dc();
    /* 00726fd3: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00726fd8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fddu); f_0079317c();
    /* 00726fdd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fdf: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00726fe3: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fe8u); f_0072d3dc();
    /* 00726fe8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00726feb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726fec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726fed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726fee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726fef: ret  */ FN_RET(0x00726f73); r_esp += 4; return;
}

void f_00726f74(void)
{
    FN_ENTER(0x00726f74);
    /* 00726f74: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00726f76: add al, dl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00726f78: push es */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00726f79: add byte ptr [ebx - 0x74afef3c], al */ { u32 ad = (u32)(r_ebx+0x8b5010c4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00726f7f: iretd  */ UNSUP(0x00726f7f, "iretd ");
    /* 00726f80: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726f85u); f_0072d3dc();
    /* 00726f85: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 00726f8a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726f8fu); f_0079317c();
    /* 00726f8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726f91: mov ecx, esi */ r_ecx = r_esi;
    /* 00726f93: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726f98u); f_0072d3dc();
    /* 00726f98: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 00726f9d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fa2u); f_0079317c();
    /* 00726fa2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fa4: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00726fa8: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fadu); f_0072d3dc();
    /* 00726fad: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 00726fb2: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fb7u); f_0079317c();
    /* 00726fb7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fb9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00726fbb: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fc0u); f_0072d3dc();
    /* 00726fc0: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00726fc5: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fcau); f_0079317c();
    /* 00726fca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fcc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00726fce: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fd3u); f_0072d3dc();
    /* 00726fd3: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00726fd8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x726fddu); f_0079317c();
    /* 00726fdd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00726fde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00726fdf: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00726fe3: call 0x72d3dc */ r_esp -= 4; W32(r_esp, 0x726fe8u); f_0072d3dc();
    /* 00726fe8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00726feb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00726fec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00726fed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00726fee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00726fef: ret  */ FN_RET(0x00726f74); r_esp += 4; return;
}

void f_00726ff0(void) /* sub_726FF0 */
{
    FN_ENTER(0x00726ff0);
    /* 00726ff0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00726ff1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00726ff2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00726ff3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00726ff4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00726ff6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00726ff8: call 0x726f38 */ r_esp -= 4; W32(r_esp, 0x726ffdu); f_00726f38();
    /* 00726ffd: mov edi, dword ptr [ebx + 0x28] */ r_edi = R32((u32)(r_ebx+0x28u));
    /* 00727000: mov dword ptr [ebx + 0xb0], 0x7258dc */ W32((u32)(r_ebx+0xb0u), 0x7258dcu);
    /* 0072700a: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 0072700d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00727010: mov ebx, dword ptr [edi + 0x20] */ r_ebx = R32((u32)(r_edi+0x20u));
    /* 00727013: mov ebp, dword ptr [edi + 0x24] */ r_ebp = R32((u32)(r_edi+0x24u));
    /* 00727016: mov esi, dword ptr [edi + 0x28] */ r_esi = R32((u32)(r_edi+0x28u));
    /* 00727019: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0072701c: movzx edi, word ptr [edx + 4] */ r_edi = (u32)R16((u32)(r_edx+0x4u));
    /* 00727020: or edi, 0xffff0002 */ {  u32 a = r_edi; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00727026: mov word ptr [edx + 4], di */ W16((u32)(r_edx+0x4u), (u16)r_edi);
    /* 0072702a: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 0072702e: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00727034: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 00727038: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072703c: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00727042: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
    /* 00727046: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072704a: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00727050: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 00727054: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 00727058: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072705e: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 00727062: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00727066: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072706c: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00727070: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00727071: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00727072: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00727073: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00727074: ret  */ FN_RET(0x00726ff0); r_esp += 4; return;
}

