#include "protos.h"

void f_00835014(void) /* sub_835014 */
{
    FN_ENTER(0x00835014);
    /* 00835014: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00835015: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00835018: mov eax, edx */ r_eax = r_edx;
    /* 0083501a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083501c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083501e: je 0x835060 */ if (fZ) goto L_00835060;
L_00835020:; BB(0x00835020);
    /* 00835020: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00835024: mov esi, ecx */ r_esi = r_ecx;
    /* 00835026: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0083502a: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0083502d: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00835030: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00835032: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00835034: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00835036: mov edi, eax */ r_edi = r_eax;
    /* 00835038: mov ebp, edx */ r_ebp = r_edx;
L_0083503a:; BB(0x0083503a);
    /* 0083503a: mov eax, dword ptr [ebx + esi + 4] */ r_eax = R32((u32)(r_ebx+r_esi+0x4u));
    /* 0083503e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083503f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00835041: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x835044u); call_ind(t); }
    /* 00835044: add dword ptr [0xacc1a4], -1 */ { u32 ad = (u32)(0xacc1a4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083504b: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083504e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00835051: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00835053: jb 0x83503a */ if (fC) goto L_0083503a;
L_00835055:; BB(0x00835055);
    /* 00835055: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00835059: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0083505d: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00835060:; BB(0x00835060);
    /* 00835060: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00835063: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00835064: ret  */ FN_RET(0x00835014); r_esp += 4; return;
}

void f_00835068(void) /* sub_835068 */
{
    FN_ENTER(0x00835068);
    /* 00835068: mov eax, dword ptr [0xacc1a0] */ r_eax = R32((u32)(0xacc1a0u));
    /* 0083506d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083506f: jne 0x835072 */ if (!fZ) goto L_00835072;
L_00835071:; BB(0x00835071);
    /* 00835071: ret  */ FN_RET(0x00835068); r_esp += 4; return;
L_00835072:; BB(0x00835072);
    /* 00835072: call 0x8362e4 */ r_esp -= 4; W32(r_esp, 0x835077u); f_008362e4();
    /* 00835077: ret  */ FN_RET(0x00835068); r_esp += 4; return;
}

void f_00835078(void) /* sub_835078 */
{
    FN_ENTER(0x00835078);
    /* 00835078: mov eax, dword ptr [0xacc1a0] */ r_eax = R32((u32)(0xacc1a0u));
    /* 0083507d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083507f: je 0x83508c */ if (fZ) goto L_0083508c;
L_00835081:; BB(0x00835081);
    /* 00835081: mov eax, dword ptr [0xad9808] */ r_eax = R32((u32)(0xad9808u));
    /* 00835086: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00835088: je 0x83508c */ if (fZ) goto L_0083508c;
L_0083508a:; BB(0x0083508a);
    /* 0083508a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x83508cu); call_ind(t); }
L_0083508c:; BB(0x0083508c);
    /* 0083508c: ret  */ FN_RET(0x00835078); r_esp += 4; return;
}

void f_00835090(void) /* sub_835090 */
{
    FN_ENTER(0x00835090);
    /* 00835090: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00835091: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00835092: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00835094: mov eax, dword ptr [0xacc1a0] */ r_eax = R32((u32)(0xacc1a0u));
    /* 00835099: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083509b: je 0x8350d2 */ if (fZ) goto L_008350d2;
L_0083509d:; BB(0x0083509d);
    /* 0083509d: call 0x831df4 */ r_esp -= 4; W32(r_esp, 0x8350a2u); f_00831df4();
    /* 008350a2: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 008350a7: mov edi, dword ptr [0xad9804] */ r_edi = R32((u32)(0xad9804u));
    /* 008350ad: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008350b0: mov dword ptr [0xacc18c], eax */ W32((u32)(0xacc18cu), r_eax);
    /* 008350b5: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x8350bau); f_0082f1d0();
    /* 008350ba: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008350c0: jne 0x8350f4 */ if (!fZ) goto L_008350f4;
L_008350c2:; BB(0x008350c2);
    /* 008350c2: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008350c8: jne 0x8350dc */ if (!fZ) goto L_008350dc;
L_008350ca:; BB(0x008350ca);
    /* 008350ca: call 0x8321a8 */ r_esp -= 4; W32(r_esp, 0x8350cfu); f_008321a8();
    /* 008350cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008350d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008350d1: ret  */ FN_RET(0x00835090); r_esp += 4; return;
L_008350d2:; BB(0x008350d2);
    /* 008350d2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008350d4: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x8350d9u); f_00831758();
    /* 008350d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008350da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008350db: ret  */ FN_RET(0x00835090); r_esp += 4; return;
L_008350dc:; BB(0x008350dc);
    /* 008350dc: mov ecx, 2 */ r_ecx = 0x2u;
    /* 008350e1: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x8350e6u); f_008362f0();
    /* 008350e6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008350e8: mov edx, 0x835864 */ r_edx = 0x835864u;
    /* 008350ed: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x8350f2u); f_00831d40();
    /* 008350f2: jmp 0x8350ca */ goto L_008350ca;
L_008350f4:; BB(0x008350f4);
    /* 008350f4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008350f6: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x8350fbu); f_008362f0();
    /* 008350fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008350fd: mov edx, 0x8355e4 */ r_edx = 0x8355e4u;
    /* 00835102: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x835107u); f_00831d40();
    /* 00835107: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0083510c: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x835111u); f_008362f0();
    /* 00835111: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00835113: mov edx, 0x8356f4 */ r_edx = 0x8356f4u;
    /* 00835118: call 0x831d40 */ r_esp -= 4; W32(r_esp, 0x83511du); f_00831d40();
    /* 0083511d: jmp 0x8350c2 */ goto L_008350c2;
}

void f_00835120(void) /* sub_835120 */
{
    FN_ENTER(0x00835120);
    /* 00835120: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00835121: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835122: mov edi, ecx */ r_edi = r_ecx;
    /* 00835124: mov eax, dword ptr [0xacc1a0] */ r_eax = R32((u32)(0xacc1a0u));
    /* 00835129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083512b: je 0x835150 */ if (fZ) goto L_00835150;
L_0083512d:; BB(0x0083512d);
    /* 0083512d: call 0x831df4 */ r_esp -= 4; W32(r_esp, 0x835132u); f_00831df4();
    /* 00835132: mov edx, dword ptr [0xacc18c] */ r_edx = R32((u32)(0xacc18cu));
    /* 00835138: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0083513b: mov dword ptr [0xacc18c], edx */ W32((u32)(0xacc18cu), r_edx);
    /* 00835141: mov eax, edi */ r_eax = r_edi;
    /* 00835143: call 0x835160 */ r_esp -= 4; W32(r_esp, 0x835148u); f_00835160();
    /* 00835148: call 0x8321a8 */ r_esp -= 4; W32(r_esp, 0x83514du); f_008321a8();
    /* 0083514d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083514e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083514f: ret  */ FN_RET(0x00835120); r_esp += 4; return;
L_00835150:; BB(0x00835150);
    /* 00835150: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00835151: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x835156u); f_008321d8();
    /* 00835156: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00835157: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00835158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00835159: ret  */ FN_RET(0x00835120); r_esp += 4; return;
}

void f_0083515c(void)
{
    FN_ENTER(0x0083515c);
    /* 0083515c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00835160: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00835161: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835162: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00835163: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00835164: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00835167: mov esi, eax */ r_esi = r_eax;
    /* 00835169: mov edi, dword ptr [0xad9804] */ r_edi = R32((u32)(0xad9804u));
    /* 0083516f: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x835174u); f_0082f1d0();
    /* 00835174: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083517a: jne 0x8352f7 */ if (!fZ) goto L_008352f7;
L_00835180:; BB(0x00835180);
    /* 00835180: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835186: jne 0x835190 */ if (!fZ) goto L_00835190;
L_00835188:; BB(0x00835188);
    /* 00835188: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083518b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083518c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083518d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083518e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083518f: ret  */ FN_RET(0x0083515c); r_esp += 4; return;
L_00835190:; BB(0x00835190);
    /* 00835190: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00835195: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x83519au); f_008362f0();
    /* 0083519a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083519c: je 0x835188 */ if (fZ) goto L_00835188;
L_0083519e:; BB(0x0083519e);
    /* 0083519e: mov edi, dword ptr [0xacc184] */ r_edi = R32((u32)(0xacc184u));
    /* 008351a4: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 008351a7: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 008351aa: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 008351ad: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 008351b2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008351b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008351b6: je 0x8352e9 */ if (fZ) goto L_008352e9;
L_008351bc:; BB(0x008351bc);
    /* 008351bc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008351c0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008351c4: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 008351c8: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 008351cc: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
L_008351d0:; BB(0x008351d0);
    /* 008351d0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008351d4: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008351d6: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 008351d9: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 008351dc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008351de: movzx edx, byte ptr [eax + esi*8] */ r_edx = (u32)R8((u32)(r_eax+r_esi*8));
    /* 008351e2: mov dword ptr [0xacc188], 2 */ W32((u32)(0xacc188u), 0x2u);
    /* 008351ec: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008351f0: mov eax, 2 */ r_eax = 0x2u;
    /* 008351f5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008351f7: je 0x835211 */ if (fZ) goto L_00835211;
L_008351f9:; BB(0x008351f9);
    /* 008351f9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008351fa: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008351fc: call dword ptr [eax*4 + 0xa218c0] */ { u32 t = R32((u32)(r_eax*4+0xa218c0u)); r_esp -= 4; W32(r_esp, 0x835203u); call_ind(t); }
    /* 00835203: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00835204: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00835207: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0083520a: jne 0x8351f9 */ if (!fZ) goto L_008351f9;
L_0083520c:; BB(0x0083520c);
    /* 0083520c: mov eax, dword ptr [0xacc188] */ r_eax = R32((u32)(0xacc188u));
L_00835211:; BB(0x00835211);
    /* 00835211: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835214: je 0x83521a */ if (fZ) goto L_0083521a;
L_00835216:; BB(0x00835216);
    /* 00835216: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_0083521a:; BB(0x0083521a);
    /* 0083521a: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0083521e: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00835222: mov edx, dword ptr [edi + esi*8] */ r_edx = R32((u32)(r_edi+r_esi*8));
    /* 00835225: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835227: mov eax, 0 */ r_eax = 0x0u;
    /* 0083522c: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0083522f: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835235: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0083523a: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0083523d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00835241: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00835243: je 0x8352d1 */ if (fZ) goto L_008352d1;
L_00835249:; BB(0x00835249);
    /* 00835249: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0083524d: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00835250: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835252: je 0x835273 */ if (fZ) goto L_00835273;
L_00835254:; BB(0x00835254);
    /* 00835254: mov eax, edi */ r_eax = r_edi;
    /* 00835256: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0083525a: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00835260: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00835262: push dword ptr [eax + esi*8 + 8] */ { u32 v = R32((u32)(r_eax+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835266: push dword ptr [eax + esi*8 + 4] */ { u32 v = R32((u32)(r_eax+r_esi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083526a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083526c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083526d: call dword ptr [ecx + 0x14c] */ { u32 t = R32((u32)(r_ecx+0x14cu)); r_esp -= 4; W32(r_esp, 0x835273u); call_ind(t); }
L_00835273:; BB(0x00835273);
    /* 00835273: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00835277: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0083527b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083527d: je 0x835299 */ if (fZ) goto L_00835299;
L_0083527f:; BB(0x0083527f);
    /* 0083527f: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00835285: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00835287: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0083528b: push dword ptr [eax*4 + 0xa218a0] */ { u32 v = R32((u32)(r_eax*4+0xa218a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835292: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00835293: call dword ptr [ecx + 0x130] */ { u32 t = R32((u32)(r_ecx+0x130u)); r_esp -= 4; W32(r_esp, 0x835299u); call_ind(t); }
L_00835299:; BB(0x00835299);
    /* 00835299: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083529e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008352a0: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008352a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008352a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008352a6: call dword ptr [edx + 0x154] */ { u32 t = R32((u32)(r_edx+0x154u)); r_esp -= 4; W32(r_esp, 0x8352acu); call_ind(t); }
    /* 008352ac: mov ebp, dword ptr [0xacd528] */ r_ebp = R32((u32)(0xacd528u));
    /* 008352b2: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 008352b5: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008352b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008352ba: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008352bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008352be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008352bf: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008352c3: push dword ptr [edx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008352c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008352c8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008352ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008352cb: call dword ptr [edi + 0x11c] */ { u32 t = R32((u32)(r_edi+0x11cu)); r_esp -= 4; W32(r_esp, 0x8352d1u); call_ind(t); }
L_008352d1:; BB(0x008352d1);
    /* 008352d1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008352d5: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008352d8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008352db: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008352df: jne 0x8351d0 */ if (!fZ) goto L_008351d0;
L_008352e5:; BB(0x008352e5);
    /* 008352e5: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
L_008352e9:; BB(0x008352e9);
    /* 008352e9: mov dword ptr [0xacc184], edi */ W32((u32)(0xacc184u), r_edi);
    /* 008352ef: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008352f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008352f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008352f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008352f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008352f6: ret  */ FN_RET(0x0083515c); r_esp += 4; return;
L_008352f7:; BB(0x008352f7);
    /* 008352f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008352f9: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x8352feu); f_008362f0();
    /* 008352fe: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835300: je 0x835400 */ if (fZ) goto L_00835400;
L_00835306:; BB(0x00835306);
    /* 00835306: mov ecx, dword ptr [0xacc184] */ r_ecx = R32((u32)(0xacc184u));
    /* 0083530c: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0083530f: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 00835312: mov ebx, dword ptr [esi + 0x10] */ r_ebx = R32((u32)(r_esi+0x10u));
    /* 00835315: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0083531a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083531c: je 0x8353fa */ if (fZ) goto L_008353fa;
L_00835322:; BB(0x00835322);
    /* 00835322: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00835326: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0083532a: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0083532e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00835332: mov esi, eax */ r_esi = r_eax;
L_00835334:; BB(0x00835334);
    /* 00835334: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00835336: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00835339: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083533b: je 0x83535a */ if (fZ) goto L_0083535a;
L_0083533d:; BB(0x0083533d);
    /* 0083533d: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 00835341: mov esi, eax */ r_esi = r_eax;
L_00835343:; BB(0x00835343);
    /* 00835343: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835344: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00835346: call dword ptr [edx*4 + 0xa218e4] */ { u32 t = R32((u32)(r_edx*4+0xa218e4u)); r_esp -= 4; W32(r_esp, 0x83534du); call_ind(t); }
    /* 0083534d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083534e: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00835351: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00835354: jne 0x835343 */ if (!fZ) goto L_00835343;
L_00835356:; BB(0x00835356);
    /* 00835356: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_0083535a:; BB(0x0083535a);
    /* 0083535a: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0083535e: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 00835361: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00835364: movzx edx, byte ptr [ebp + edi*8] */ r_edx = (u32)R8((u32)(r_ebp+r_edi*8));
    /* 00835369: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083536b: je 0x83538a */ if (fZ) goto L_0083538a;
L_0083536d:; BB(0x0083536d);
    /* 0083536d: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00835373: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00835375: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00835379: push dword ptr [edx*4 + 0xa218a0] */ { u32 v = R32((u32)(r_edx*4+0xa218a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835380: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00835381: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x835387u); call_ind(t); }
    /* 00835387: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
L_0083538a:; BB(0x0083538a);
    /* 0083538a: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0083538e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835390: je 0x8353af */ if (fZ) goto L_008353af;
L_00835392:; BB(0x00835392);
    /* 00835392: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00835398: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083539a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0083539e: push dword ptr [ebp + edi*8 + 8] */ { u32 v = R32((u32)(r_ebp+r_edi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008353a2: push dword ptr [ebp + edi*8 + 4] */ { u32 v = R32((u32)(r_ebp+r_edi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008353a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008353a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008353a9: call dword ptr [ecx + 0x14c] */ { u32 t = R32((u32)(r_ecx+0x14cu)); r_esp -= 4; W32(r_esp, 0x8353afu); call_ind(t); }
L_008353af:; BB(0x008353af);
    /* 008353af: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008353b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008353b7: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008353ba: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008353bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008353bd: call dword ptr [ecx + 0x154] */ { u32 t = R32((u32)(r_ecx+0x154u)); r_esp -= 4; W32(r_esp, 0x8353c3u); call_ind(t); }
    /* 008353c3: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008353c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008353ca: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 008353cd: add ecx, -2 */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008353d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008353d1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008353d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008353d4: push dword ptr [ebp + edi*8 + 0xc] */ { u32 v = R32((u32)(r_ebp+r_edi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008353d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008353d9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008353db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008353dc: call dword ptr [edx + 0x11c] */ { u32 t = R32((u32)(r_edx+0x11cu)); r_esp -= 4; W32(r_esp, 0x8353e2u); call_ind(t); }
    /* 008353e2: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008353e5: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 008353e8: jne 0x835334 */ if (!fZ) goto L_00835334;
L_008353ee:; BB(0x008353ee);
    /* 008353ee: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008353f2: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 008353f6: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_008353fa:; BB(0x008353fa);
    /* 008353fa: mov dword ptr [0xacc184], ecx */ W32((u32)(0xacc184u), r_ecx);
L_00835400:; BB(0x00835400);
    /* 00835400: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00835405: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x83540au); f_008362f0();
    /* 0083540a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083540c: je 0x835180 */ if (fZ) goto L_00835180;
L_00835412:; BB(0x00835412);
    /* 00835412: mov eax, dword ptr [0xacc184] */ r_eax = R32((u32)(0xacc184u));
    /* 00835417: mov ebp, dword ptr [esi + 0x14] */ r_ebp = R32((u32)(r_esi+0x14u));
    /* 0083541a: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0083541d: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 00835420: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00835423: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00835428: mov edx, 1 */ r_edx = 0x1u;
    /* 0083542d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083542f: je 0x835568 */ if (fZ) goto L_00835568;
L_00835435:; BB(0x00835435);
    /* 00835435: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00835439: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0083543d: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00835441: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00835445: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00835449: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_0083544d:; BB(0x0083544d);
    /* 0083544d: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00835450: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 00835453: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 00835456: mov esi, dword ptr [ebp + 4] */ r_esi = R32((u32)(r_ebp+0x4u));
    /* 00835459: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083545b: movzx edx, byte ptr [eax + ebx*8] */ r_edx = (u32)R8((u32)(r_eax+r_ebx*8));
    /* 0083545f: mov dword ptr [0xacc188], 2 */ W32((u32)(0xacc188u), 0x2u);
    /* 00835469: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0083546d: mov eax, 2 */ r_eax = 0x2u;
    /* 00835472: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835474: je 0x83548e */ if (fZ) goto L_0083548e;
L_00835476:; BB(0x00835476);
    /* 00835476: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00835477: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00835479: call dword ptr [eax*4 + 0xa218c0] */ { u32 t = R32((u32)(r_eax*4+0xa218c0u)); r_esp -= 4; W32(r_esp, 0x835480u); call_ind(t); }
    /* 00835480: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00835481: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00835484: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00835487: jne 0x835476 */ if (!fZ) goto L_00835476;
L_00835489:; BB(0x00835489);
    /* 00835489: mov eax, dword ptr [0xacc188] */ r_eax = R32((u32)(0xacc188u));
L_0083548e:; BB(0x0083548e);
    /* 0083548e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835491: je 0x835497 */ if (fZ) goto L_00835497;
L_00835493:; BB(0x00835493);
    /* 00835493: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_00835497:; BB(0x00835497);
    /* 00835497: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0083549b: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0083549e: mov edx, dword ptr [edi + ebx*8] */ r_edx = R32((u32)(r_edi+r_ebx*8));
    /* 008354a1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008354a3: mov eax, 0 */ r_eax = 0x0u;
    /* 008354a8: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008354ab: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008354b1: mov ecx, 0 */ r_ecx = 0x0u;
    /* 008354b6: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008354b9: test ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008354bb: je 0x835548 */ if (fZ) goto L_00835548;
L_008354c1:; BB(0x008354c1);
    /* 008354c1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008354c5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008354c8: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008354ca: je 0x8354eb */ if (fZ) goto L_008354eb;
L_008354cc:; BB(0x008354cc);
    /* 008354cc: mov eax, edi */ r_eax = r_edi;
    /* 008354ce: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 008354d2: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008354d8: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008354da: push dword ptr [eax + ebx*8 + 8] */ { u32 v = R32((u32)(r_eax+r_ebx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008354de: push dword ptr [eax + ebx*8 + 4] */ { u32 v = R32((u32)(r_eax+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008354e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008354e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008354e5: call dword ptr [ecx + 0x14c] */ { u32 t = R32((u32)(r_ecx+0x14cu)); r_esp -= 4; W32(r_esp, 0x8354ebu); call_ind(t); }
L_008354eb:; BB(0x008354eb);
    /* 008354eb: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008354ef: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 008354f3: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008354f5: je 0x835511 */ if (fZ) goto L_00835511;
L_008354f7:; BB(0x008354f7);
    /* 008354f7: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008354fd: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008354ff: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00835503: push dword ptr [eax*4 + 0xa218a0] */ { u32 v = R32((u32)(r_eax*4+0xa218a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083550a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083550b: call dword ptr [ecx + 0x130] */ { u32 t = R32((u32)(r_ecx+0x130u)); r_esp -= 4; W32(r_esp, 0x835511u); call_ind(t); }
L_00835511:; BB(0x00835511);
    /* 00835511: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00835516: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00835518: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083551b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083551d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083551e: call dword ptr [edx + 0x154] */ { u32 t = R32((u32)(r_edx+0x154u)); r_esp -= 4; W32(r_esp, 0x835524u); call_ind(t); }
    /* 00835524: mov esi, dword ptr [0xacd528] */ r_esi = R32((u32)(0xacd528u));
    /* 0083552a: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0083552c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0083552f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00835531: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00835534: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835535: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00835536: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0083553a: push dword ptr [edx + ebx*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083553e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083553f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00835541: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835542: call dword ptr [edi + 0x11c] */ { u32 t = R32((u32)(r_edi+0x11cu)); r_esp -= 4; W32(r_esp, 0x835548u); call_ind(t); }
L_00835548:; BB(0x00835548);
    /* 00835548: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0083554c: add ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083554f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00835552: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00835556: jne 0x83544d */ if (!fZ) goto L_0083544d;
L_0083555c:; BB(0x0083555c);
    /* 0083555c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00835560: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00835564: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_00835568:; BB(0x00835568);
    /* 00835568: mov dword ptr [0xacc184], eax */ W32((u32)(0xacc184u), r_eax);
    /* 0083556d: jmp 0x835180 */ goto L_00835180;
}

void f_00835160(void) /* sub_835160 */
{
    FN_ENTER(0x00835160);
    /* 00835160: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00835161: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835162: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00835163: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00835164: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00835167: mov esi, eax */ r_esi = r_eax;
    /* 00835169: mov edi, dword ptr [0xad9804] */ r_edi = R32((u32)(0xad9804u));
    /* 0083516f: call 0x82f1d0 */ r_esp -= 4; W32(r_esp, 0x835174u); f_0082f1d0();
    /* 00835174: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083517a: jne 0x8352f7 */ if (!fZ) goto L_008352f7;
L_00835180:; BB(0x00835180);
    /* 00835180: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835186: jne 0x835190 */ if (!fZ) goto L_00835190;
L_00835188:; BB(0x00835188);
    /* 00835188: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083518b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083518c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083518d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083518e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083518f: ret  */ FN_RET(0x00835160); r_esp += 4; return;
L_00835190:; BB(0x00835190);
    /* 00835190: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00835195: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x83519au); f_008362f0();
    /* 0083519a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083519c: je 0x835188 */ if (fZ) goto L_00835188;
L_0083519e:; BB(0x0083519e);
    /* 0083519e: mov edi, dword ptr [0xacc184] */ r_edi = R32((u32)(0xacc184u));
    /* 008351a4: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 008351a7: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 008351aa: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 008351ad: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 008351b2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008351b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008351b6: je 0x8352e9 */ if (fZ) goto L_008352e9;
L_008351bc:; BB(0x008351bc);
    /* 008351bc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008351c0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008351c4: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 008351c8: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 008351cc: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
L_008351d0:; BB(0x008351d0);
    /* 008351d0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008351d4: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008351d6: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 008351d9: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 008351dc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008351de: movzx edx, byte ptr [eax + esi*8] */ r_edx = (u32)R8((u32)(r_eax+r_esi*8));
    /* 008351e2: mov dword ptr [0xacc188], 2 */ W32((u32)(0xacc188u), 0x2u);
    /* 008351ec: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008351f0: mov eax, 2 */ r_eax = 0x2u;
    /* 008351f5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008351f7: je 0x835211 */ if (fZ) goto L_00835211;
L_008351f9:; BB(0x008351f9);
    /* 008351f9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008351fa: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008351fc: call dword ptr [eax*4 + 0xa218c0] */ { u32 t = R32((u32)(r_eax*4+0xa218c0u)); r_esp -= 4; W32(r_esp, 0x835203u); call_ind(t); }
    /* 00835203: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00835204: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00835207: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0083520a: jne 0x8351f9 */ if (!fZ) goto L_008351f9;
L_0083520c:; BB(0x0083520c);
    /* 0083520c: mov eax, dword ptr [0xacc188] */ r_eax = R32((u32)(0xacc188u));
L_00835211:; BB(0x00835211);
    /* 00835211: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835214: je 0x83521a */ if (fZ) goto L_0083521a;
L_00835216:; BB(0x00835216);
    /* 00835216: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_0083521a:; BB(0x0083521a);
    /* 0083521a: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0083521e: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00835222: mov edx, dword ptr [edi + esi*8] */ r_edx = R32((u32)(r_edi+r_esi*8));
    /* 00835225: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835227: mov eax, 0 */ r_eax = 0x0u;
    /* 0083522c: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0083522f: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835235: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0083523a: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0083523d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00835241: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00835243: je 0x8352d1 */ if (fZ) goto L_008352d1;
L_00835249:; BB(0x00835249);
    /* 00835249: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0083524d: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00835250: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835252: je 0x835273 */ if (fZ) goto L_00835273;
L_00835254:; BB(0x00835254);
    /* 00835254: mov eax, edi */ r_eax = r_edi;
    /* 00835256: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0083525a: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00835260: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00835262: push dword ptr [eax + esi*8 + 8] */ { u32 v = R32((u32)(r_eax+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835266: push dword ptr [eax + esi*8 + 4] */ { u32 v = R32((u32)(r_eax+r_esi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083526a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083526c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083526d: call dword ptr [ecx + 0x14c] */ { u32 t = R32((u32)(r_ecx+0x14cu)); r_esp -= 4; W32(r_esp, 0x835273u); call_ind(t); }
L_00835273:; BB(0x00835273);
    /* 00835273: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00835277: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0083527b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083527d: je 0x835299 */ if (fZ) goto L_00835299;
L_0083527f:; BB(0x0083527f);
    /* 0083527f: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00835285: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00835287: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0083528b: push dword ptr [eax*4 + 0xa218a0] */ { u32 v = R32((u32)(r_eax*4+0xa218a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835292: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00835293: call dword ptr [ecx + 0x130] */ { u32 t = R32((u32)(r_ecx+0x130u)); r_esp -= 4; W32(r_esp, 0x835299u); call_ind(t); }
L_00835299:; BB(0x00835299);
    /* 00835299: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083529e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008352a0: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008352a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008352a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008352a6: call dword ptr [edx + 0x154] */ { u32 t = R32((u32)(r_edx+0x154u)); r_esp -= 4; W32(r_esp, 0x8352acu); call_ind(t); }
    /* 008352ac: mov ebp, dword ptr [0xacd528] */ r_ebp = R32((u32)(0xacd528u));
    /* 008352b2: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 008352b5: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008352b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008352ba: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008352bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008352be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008352bf: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008352c3: push dword ptr [edx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008352c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008352c8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008352ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008352cb: call dword ptr [edi + 0x11c] */ { u32 t = R32((u32)(r_edi+0x11cu)); r_esp -= 4; W32(r_esp, 0x8352d1u); call_ind(t); }
L_008352d1:; BB(0x008352d1);
    /* 008352d1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008352d5: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008352d8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008352db: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008352df: jne 0x8351d0 */ if (!fZ) goto L_008351d0;
L_008352e5:; BB(0x008352e5);
    /* 008352e5: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
L_008352e9:; BB(0x008352e9);
    /* 008352e9: mov dword ptr [0xacc184], edi */ W32((u32)(0xacc184u), r_edi);
    /* 008352ef: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008352f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008352f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008352f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008352f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008352f6: ret  */ FN_RET(0x00835160); r_esp += 4; return;
L_008352f7:; BB(0x008352f7);
    /* 008352f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008352f9: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x8352feu); f_008362f0();
    /* 008352fe: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835300: je 0x835400 */ if (fZ) goto L_00835400;
L_00835306:; BB(0x00835306);
    /* 00835306: mov ecx, dword ptr [0xacc184] */ r_ecx = R32((u32)(0xacc184u));
    /* 0083530c: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0083530f: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 00835312: mov ebx, dword ptr [esi + 0x10] */ r_ebx = R32((u32)(r_esi+0x10u));
    /* 00835315: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0083531a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083531c: je 0x8353fa */ if (fZ) goto L_008353fa;
L_00835322:; BB(0x00835322);
    /* 00835322: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00835326: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0083532a: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0083532e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00835332: mov esi, eax */ r_esi = r_eax;
L_00835334:; BB(0x00835334);
    /* 00835334: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00835336: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00835339: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083533b: je 0x83535a */ if (fZ) goto L_0083535a;
L_0083533d:; BB(0x0083533d);
    /* 0083533d: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 00835341: mov esi, eax */ r_esi = r_eax;
L_00835343:; BB(0x00835343);
    /* 00835343: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835344: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00835346: call dword ptr [edx*4 + 0xa218e4] */ { u32 t = R32((u32)(r_edx*4+0xa218e4u)); r_esp -= 4; W32(r_esp, 0x83534du); call_ind(t); }
    /* 0083534d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083534e: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00835351: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00835354: jne 0x835343 */ if (!fZ) goto L_00835343;
L_00835356:; BB(0x00835356);
    /* 00835356: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_0083535a:; BB(0x0083535a);
    /* 0083535a: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0083535e: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 00835361: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00835364: movzx edx, byte ptr [ebp + edi*8] */ r_edx = (u32)R8((u32)(r_ebp+r_edi*8));
    /* 00835369: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083536b: je 0x83538a */ if (fZ) goto L_0083538a;
L_0083536d:; BB(0x0083536d);
    /* 0083536d: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00835373: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00835375: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00835379: push dword ptr [edx*4 + 0xa218a0] */ { u32 v = R32((u32)(r_edx*4+0xa218a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835380: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00835381: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x835387u); call_ind(t); }
    /* 00835387: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
L_0083538a:; BB(0x0083538a);
    /* 0083538a: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0083538e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835390: je 0x8353af */ if (fZ) goto L_008353af;
L_00835392:; BB(0x00835392);
    /* 00835392: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00835398: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083539a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0083539e: push dword ptr [ebp + edi*8 + 8] */ { u32 v = R32((u32)(r_ebp+r_edi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008353a2: push dword ptr [ebp + edi*8 + 4] */ { u32 v = R32((u32)(r_ebp+r_edi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008353a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008353a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008353a9: call dword ptr [ecx + 0x14c] */ { u32 t = R32((u32)(r_ecx+0x14cu)); r_esp -= 4; W32(r_esp, 0x8353afu); call_ind(t); }
L_008353af:; BB(0x008353af);
    /* 008353af: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008353b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008353b7: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008353ba: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008353bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008353bd: call dword ptr [ecx + 0x154] */ { u32 t = R32((u32)(r_ecx+0x154u)); r_esp -= 4; W32(r_esp, 0x8353c3u); call_ind(t); }
    /* 008353c3: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008353c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008353ca: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 008353cd: add ecx, -2 */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008353d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008353d1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008353d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008353d4: push dword ptr [ebp + edi*8 + 0xc] */ { u32 v = R32((u32)(r_ebp+r_edi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008353d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008353d9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008353db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008353dc: call dword ptr [edx + 0x11c] */ { u32 t = R32((u32)(r_edx+0x11cu)); r_esp -= 4; W32(r_esp, 0x8353e2u); call_ind(t); }
    /* 008353e2: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008353e5: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 008353e8: jne 0x835334 */ if (!fZ) goto L_00835334;
L_008353ee:; BB(0x008353ee);
    /* 008353ee: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008353f2: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 008353f6: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_008353fa:; BB(0x008353fa);
    /* 008353fa: mov dword ptr [0xacc184], ecx */ W32((u32)(0xacc184u), r_ecx);
L_00835400:; BB(0x00835400);
    /* 00835400: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00835405: call 0x8362f0 */ r_esp -= 4; W32(r_esp, 0x83540au); f_008362f0();
    /* 0083540a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083540c: je 0x835180 */ if (fZ) goto L_00835180;
L_00835412:; BB(0x00835412);
    /* 00835412: mov eax, dword ptr [0xacc184] */ r_eax = R32((u32)(0xacc184u));
    /* 00835417: mov ebp, dword ptr [esi + 0x14] */ r_ebp = R32((u32)(r_esi+0x14u));
    /* 0083541a: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0083541d: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 00835420: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00835423: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00835428: mov edx, 1 */ r_edx = 0x1u;
    /* 0083542d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083542f: je 0x835568 */ if (fZ) goto L_00835568;
L_00835435:; BB(0x00835435);
    /* 00835435: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00835439: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0083543d: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00835441: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00835445: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00835449: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_0083544d:; BB(0x0083544d);
    /* 0083544d: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00835450: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 00835453: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 00835456: mov esi, dword ptr [ebp + 4] */ r_esi = R32((u32)(r_ebp+0x4u));
    /* 00835459: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083545b: movzx edx, byte ptr [eax + ebx*8] */ r_edx = (u32)R8((u32)(r_eax+r_ebx*8));
    /* 0083545f: mov dword ptr [0xacc188], 2 */ W32((u32)(0xacc188u), 0x2u);
    /* 00835469: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0083546d: mov eax, 2 */ r_eax = 0x2u;
    /* 00835472: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835474: je 0x83548e */ if (fZ) goto L_0083548e;
L_00835476:; BB(0x00835476);
    /* 00835476: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00835477: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00835479: call dword ptr [eax*4 + 0xa218c0] */ { u32 t = R32((u32)(r_eax*4+0xa218c0u)); r_esp -= 4; W32(r_esp, 0x835480u); call_ind(t); }
    /* 00835480: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00835481: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00835484: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00835487: jne 0x835476 */ if (!fZ) goto L_00835476;
L_00835489:; BB(0x00835489);
    /* 00835489: mov eax, dword ptr [0xacc188] */ r_eax = R32((u32)(0xacc188u));
L_0083548e:; BB(0x0083548e);
    /* 0083548e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835491: je 0x835497 */ if (fZ) goto L_00835497;
L_00835493:; BB(0x00835493);
    /* 00835493: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_00835497:; BB(0x00835497);
    /* 00835497: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0083549b: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0083549e: mov edx, dword ptr [edi + ebx*8] */ r_edx = R32((u32)(r_edi+r_ebx*8));
    /* 008354a1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008354a3: mov eax, 0 */ r_eax = 0x0u;
    /* 008354a8: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008354ab: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008354b1: mov ecx, 0 */ r_ecx = 0x0u;
    /* 008354b6: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008354b9: test ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008354bb: je 0x835548 */ if (fZ) goto L_00835548;
L_008354c1:; BB(0x008354c1);
    /* 008354c1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008354c5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008354c8: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008354ca: je 0x8354eb */ if (fZ) goto L_008354eb;
L_008354cc:; BB(0x008354cc);
    /* 008354cc: mov eax, edi */ r_eax = r_edi;
    /* 008354ce: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 008354d2: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008354d8: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008354da: push dword ptr [eax + ebx*8 + 8] */ { u32 v = R32((u32)(r_eax+r_ebx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008354de: push dword ptr [eax + ebx*8 + 4] */ { u32 v = R32((u32)(r_eax+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008354e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008354e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008354e5: call dword ptr [ecx + 0x14c] */ { u32 t = R32((u32)(r_ecx+0x14cu)); r_esp -= 4; W32(r_esp, 0x8354ebu); call_ind(t); }
L_008354eb:; BB(0x008354eb);
    /* 008354eb: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008354ef: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 008354f3: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008354f5: je 0x835511 */ if (fZ) goto L_00835511;
L_008354f7:; BB(0x008354f7);
    /* 008354f7: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008354fd: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008354ff: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00835503: push dword ptr [eax*4 + 0xa218a0] */ { u32 v = R32((u32)(r_eax*4+0xa218a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083550a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083550b: call dword ptr [ecx + 0x130] */ { u32 t = R32((u32)(r_ecx+0x130u)); r_esp -= 4; W32(r_esp, 0x835511u); call_ind(t); }
L_00835511:; BB(0x00835511);
    /* 00835511: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00835516: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00835518: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083551b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083551d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083551e: call dword ptr [edx + 0x154] */ { u32 t = R32((u32)(r_edx+0x154u)); r_esp -= 4; W32(r_esp, 0x835524u); call_ind(t); }
    /* 00835524: mov esi, dword ptr [0xacd528] */ r_esi = R32((u32)(0xacd528u));
    /* 0083552a: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0083552c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0083552f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00835531: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00835534: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835535: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00835536: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0083553a: push dword ptr [edx + ebx*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083553e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083553f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00835541: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835542: call dword ptr [edi + 0x11c] */ { u32 t = R32((u32)(r_edi+0x11cu)); r_esp -= 4; W32(r_esp, 0x835548u); call_ind(t); }
L_00835548:; BB(0x00835548);
    /* 00835548: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0083554c: add ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083554f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00835552: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00835556: jne 0x83544d */ if (!fZ) goto L_0083544d;
L_0083555c:; BB(0x0083555c);
    /* 0083555c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00835560: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00835564: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_00835568:; BB(0x00835568);
    /* 00835568: mov dword ptr [0xacc184], eax */ W32((u32)(0xacc184u), r_eax);
    /* 0083556d: jmp 0x835180 */ goto L_00835180;
}

void f_00835574(void) /* sub_835574 */
{
    FN_ENTER(0x00835574);
    /* 00835574: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00835575: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00835576: mov ebp, edx */ r_ebp = r_edx;
    /* 00835578: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0083557a: mov eax, dword ptr [0xacc1a0] */ r_eax = R32((u32)(0xacc1a0u));
    /* 0083557f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835581: je 0x8355c0 */ if (fZ) goto L_008355c0;
L_00835583:; BB(0x00835583);
    /* 00835583: call 0x831df4 */ r_esp -= 4; W32(r_esp, 0x835588u); f_00831df4();
    /* 00835588: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 0083558d: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00835590: mov dword ptr [0xacc18c], eax */ W32((u32)(0xacc18cu), r_eax);
    /* 00835595: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00835599: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083559a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0083559c: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x8355a1u); f_008304c8();
    /* 008355a1: mov eax, dword ptr [0xad93e0] */ r_eax = R32((u32)(0xad93e0u));
    /* 008355a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008355a8: je 0x8355d3 */ if (fZ) goto L_008355d3;
L_008355aa:; BB(0x008355aa);
    /* 008355aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008355ac: mov edx, 0x83515c */ r_edx = 0x83515cu;
    /* 008355b1: call 0x83bdf4 */ r_esp -= 4; W32(r_esp, 0x8355b6u); f_0083bdf4();
L_008355b6:; BB(0x008355b6);
    /* 008355b6: call 0x8321a8 */ r_esp -= 4; W32(r_esp, 0x8355bbu); f_008321a8();
    /* 008355bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008355bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008355bd: ret 4 */ FN_RET(0x00835574); r_esp += 8; return;
L_008355c0:; BB(0x008355c0);
    /* 008355c0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008355c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008355c5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008355c7: mov edx, ebp */ r_edx = r_ebp;
    /* 008355c9: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x8355ceu); f_0083bd00();
    /* 008355ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008355cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008355d0: ret 4 */ FN_RET(0x00835574); r_esp += 8; return;
L_008355d3:; BB(0x008355d3);
    /* 008355d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008355d5: mov edx, 0x83515c */ r_edx = 0x83515cu;
    /* 008355da: call 0x83bdb4 */ r_esp -= 4; W32(r_esp, 0x8355dfu); f_0083bdb4();
    /* 008355df: jmp 0x8355b6 */ goto L_008355b6;
}

void f_008355e4(void) /* sub_8355E4 */
{
    FN_ENTER(0x008355e4);
    /* 008355e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008355e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008355e6: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008355e9: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 008355ed: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008355ef: je 0x8356ec */ if (fZ) goto L_008356ec;
L_008355f5:; BB(0x008355f5);
    /* 008355f5: mov edx, dword ptr [0xacc184] */ r_edx = R32((u32)(0xacc184u));
    /* 008355fb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008355fe: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 00835601: mov ebp, dword ptr [ebp + 0x10] */ r_ebp = R32((u32)(r_ebp+0x10u));
    /* 00835604: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00835609: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083560b: je 0x8356e6 */ if (fZ) goto L_008356e6;
L_00835611:; BB(0x00835611);
    /* 00835611: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00835615: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00835619: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0083561d: mov ebx, eax */ r_ebx = r_eax;
    /* 0083561f: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
L_00835623:; BB(0x00835623);
    /* 00835623: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00835625: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 00835628: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083562a: je 0x835647 */ if (fZ) goto L_00835647;
L_0083562c:; BB(0x0083562c);
    /* 0083562c: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0083562f: mov ebx, eax */ r_ebx = r_eax;
L_00835631:; BB(0x00835631);
    /* 00835631: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00835632: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00835634: call dword ptr [edx*4 + 0xa218e4] */ { u32 t = R32((u32)(r_edx*4+0xa218e4u)); r_esp -= 4; W32(r_esp, 0x83563bu); call_ind(t); }
    /* 0083563b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083563c: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083563f: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00835642: jne 0x835631 */ if (!fZ) goto L_00835631;
L_00835644:; BB(0x00835644);
    /* 00835644: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00835647:; BB(0x00835647);
    /* 00835647: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0083564b: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0083564e: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00835651: movzx edx, byte ptr [edi + esi*8] */ r_edx = (u32)R8((u32)(r_edi+r_esi*8));
    /* 00835655: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835657: je 0x835676 */ if (fZ) goto L_00835676;
L_00835659:; BB(0x00835659);
    /* 00835659: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 0083565f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00835661: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00835665: push dword ptr [edx*4 + 0xa218a0] */ { u32 v = R32((u32)(r_edx*4+0xa218a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083566c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083566d: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x835673u); call_ind(t); }
    /* 00835673: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
L_00835676:; BB(0x00835676);
    /* 00835676: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0083567a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083567c: je 0x83569b */ if (fZ) goto L_0083569b;
L_0083567e:; BB(0x0083567e);
    /* 0083567e: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00835684: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00835686: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0083568a: push dword ptr [edi + esi*8 + 8] */ { u32 v = R32((u32)(r_edi+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083568e: push dword ptr [edi + esi*8 + 4] */ { u32 v = R32((u32)(r_edi+r_esi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835692: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00835694: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00835695: call dword ptr [ecx + 0x14c] */ { u32 t = R32((u32)(r_ecx+0x14cu)); r_esp -= 4; W32(r_esp, 0x83569bu); call_ind(t); }
L_0083569b:; BB(0x0083569b);
    /* 0083569b: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008356a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008356a3: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008356a6: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008356a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008356a9: call dword ptr [ecx + 0x154] */ { u32 t = R32((u32)(r_ecx+0x154u)); r_esp -= 4; W32(r_esp, 0x8356afu); call_ind(t); }
    /* 008356af: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008356b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008356b6: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008356b9: add ecx, -2 */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008356bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008356bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008356bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008356c0: push dword ptr [edi + esi*8 + 0xc] */ { u32 v = R32((u32)(r_edi+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008356c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008356c5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008356c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008356c8: call dword ptr [edx + 0x11c] */ { u32 t = R32((u32)(r_edx+0x11cu)); r_esp -= 4; W32(r_esp, 0x8356ceu); call_ind(t); }
    /* 008356ce: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008356d1: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 008356d4: jne 0x835623 */ if (!fZ) goto L_00835623;
L_008356da:; BB(0x008356da);
    /* 008356da: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008356de: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 008356e2: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
L_008356e6:; BB(0x008356e6);
    /* 008356e6: mov dword ptr [0xacc184], edx */ W32((u32)(0xacc184u), r_edx);
L_008356ec:; BB(0x008356ec);
    /* 008356ec: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008356ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008356f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008356f1: ret  */ FN_RET(0x008355e4); r_esp += 4; return;
}

void f_008356f4(void) /* sub_8356F4 */
{
    FN_ENTER(0x008356f4);
    /* 008356f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008356f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008356f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008356f7: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008356fa: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 008356fe: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835700: je 0x83585c */ if (fZ) goto L_0083585c;
L_00835706:; BB(0x00835706);
    /* 00835706: mov ecx, dword ptr [0xacc184] */ r_ecx = R32((u32)(0xacc184u));
    /* 0083570c: mov ebp, dword ptr [edi + 0x14] */ r_ebp = R32((u32)(r_edi+0x14u));
    /* 0083570f: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 00835712: mov edi, dword ptr [edi + 0x18] */ r_edi = R32((u32)(r_edi+0x18u));
    /* 00835715: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0083571a: mov eax, 1 */ r_eax = 0x1u;
    /* 0083571f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835721: je 0x835856 */ if (fZ) goto L_00835856;
L_00835727:; BB(0x00835727);
    /* 00835727: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0083572b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0083572f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00835733: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00835737: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0083573b: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_0083573e:; BB(0x0083573e);
    /* 0083573e: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00835742: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 00835745: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 00835748: mov esi, dword ptr [ebp + 4] */ r_esi = R32((u32)(r_ebp+0x4u));
    /* 0083574b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083574d: movzx edx, byte ptr [eax + ebx*8] */ r_edx = (u32)R8((u32)(r_eax+r_ebx*8));
    /* 00835751: mov dword ptr [0xacc188], 2 */ W32((u32)(0xacc188u), 0x2u);
    /* 0083575b: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0083575f: mov eax, 2 */ r_eax = 0x2u;
    /* 00835764: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835766: je 0x835780 */ if (fZ) goto L_00835780;
L_00835768:; BB(0x00835768);
    /* 00835768: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00835769: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0083576b: call dword ptr [eax*4 + 0xa218c0] */ { u32 t = R32((u32)(r_eax*4+0xa218c0u)); r_esp -= 4; W32(r_esp, 0x835772u); call_ind(t); }
    /* 00835772: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00835773: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00835776: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00835779: jne 0x835768 */ if (!fZ) goto L_00835768;
L_0083577b:; BB(0x0083577b);
    /* 0083577b: mov eax, dword ptr [0xacc188] */ r_eax = R32((u32)(0xacc188u));
L_00835780:; BB(0x00835780);
    /* 00835780: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835783: je 0x835789 */ if (fZ) goto L_00835789;
L_00835785:; BB(0x00835785);
    /* 00835785: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
L_00835789:; BB(0x00835789);
    /* 00835789: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0083578d: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00835791: mov edx, dword ptr [edi + ebx*8] */ r_edx = R32((u32)(r_edi+r_ebx*8));
    /* 00835794: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835796: mov eax, 0 */ r_eax = 0x0u;
    /* 0083579b: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0083579e: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008357a4: mov ecx, 0 */ r_ecx = 0x0u;
    /* 008357a9: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008357ac: test ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008357ae: je 0x83583b */ if (fZ) goto L_0083583b;
L_008357b4:; BB(0x008357b4);
    /* 008357b4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008357b8: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008357bb: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008357bd: je 0x8357de */ if (fZ) goto L_008357de;
L_008357bf:; BB(0x008357bf);
    /* 008357bf: mov eax, edi */ r_eax = r_edi;
    /* 008357c1: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008357c5: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008357cb: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008357cd: push dword ptr [eax + ebx*8 + 8] */ { u32 v = R32((u32)(r_eax+r_ebx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008357d1: push dword ptr [eax + ebx*8 + 4] */ { u32 v = R32((u32)(r_eax+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008357d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008357d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008357d8: call dword ptr [ecx + 0x14c] */ { u32 t = R32((u32)(r_ecx+0x14cu)); r_esp -= 4; W32(r_esp, 0x8357deu); call_ind(t); }
L_008357de:; BB(0x008357de);
    /* 008357de: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008357e2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008357e6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008357e8: je 0x835804 */ if (fZ) goto L_00835804;
L_008357ea:; BB(0x008357ea);
    /* 008357ea: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008357f0: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008357f2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008357f6: push dword ptr [eax*4 + 0xa218a0] */ { u32 v = R32((u32)(r_eax*4+0xa218a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008357fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008357fe: call dword ptr [ecx + 0x130] */ { u32 t = R32((u32)(r_ecx+0x130u)); r_esp -= 4; W32(r_esp, 0x835804u); call_ind(t); }
L_00835804:; BB(0x00835804);
    /* 00835804: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00835809: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083580b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083580e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00835810: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835811: call dword ptr [edx + 0x154] */ { u32 t = R32((u32)(r_edx+0x154u)); r_esp -= 4; W32(r_esp, 0x835817u); call_ind(t); }
    /* 00835817: mov esi, dword ptr [0xacd528] */ r_esi = R32((u32)(0xacd528u));
    /* 0083581d: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0083581f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00835822: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00835824: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00835827: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835828: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00835829: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0083582d: push dword ptr [edx + ebx*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00835831: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00835832: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00835834: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835835: call dword ptr [edi + 0x11c] */ { u32 t = R32((u32)(r_edi+0x11cu)); r_esp -= 4; W32(r_esp, 0x83583bu); call_ind(t); }
L_0083583b:; BB(0x0083583b);
    /* 0083583b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0083583f: add ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00835842: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00835845: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00835849: jne 0x83573e */ if (!fZ) goto L_0083573e;
L_0083584f:; BB(0x0083584f);
    /* 0083584f: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00835853: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00835856:; BB(0x00835856);
    /* 00835856: mov dword ptr [0xacc184], ecx */ W32((u32)(0xacc184u), r_ecx);
L_0083585c:; BB(0x0083585c);
    /* 0083585c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083585f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00835860: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00835861: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00835862: ret  */ FN_RET(0x008356f4); r_esp += 4; return;
}

void f_00835864(void) /* sub_835864 */
{
    FN_ENTER(0x00835864);
    /* 00835864: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00835865: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835866: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00835867: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083586a: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0083586e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835870: je 0x8359cf */ if (fZ) goto L_008359cf;
L_00835876:; BB(0x00835876);
    /* 00835876: mov ecx, dword ptr [0xacc184] */ r_ecx = R32((u32)(0xacc184u));
    /* 0083587c: mov ebp, dword ptr [edi + 0x14] */ r_ebp = R32((u32)(r_edi+0x14u));
    /* 0083587f: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 00835882: mov edi, dword ptr [edi + 0x18] */ r_edi = R32((u32)(r_edi+0x18u));
    /* 00835885: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0083588a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083588c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083588e: je 0x8359c9 */ if (fZ) goto L_008359c9;
L_00835894:; BB(0x00835894);
    /* 00835894: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00835898: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0083589c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008358a0: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008358a4: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 008358a8: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_008358ab:; BB(0x008358ab);
    /* 008358ab: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 008358af: mov esi, dword ptr [ebp] */ r_esi = R32((u32)(r_ebp));
    /* 008358b2: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 008358b5: mov ebx, dword ptr [ebp + 4] */ r_ebx = R32((u32)(r_ebp+0x4u));
    /* 008358b8: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008358ba: movzx edx, byte ptr [eax + edi*8] */ r_edx = (u32)R8((u32)(r_eax+r_edi*8));
    /* 008358be: mov dword ptr [0xacc188], 2 */ W32((u32)(0xacc188u), 0x2u);
    /* 008358c8: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008358cc: mov eax, 2 */ r_eax = 0x2u;
    /* 008358d1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008358d3: je 0x8358ed */ if (fZ) goto L_008358ed;
L_008358d5:; BB(0x008358d5);
    /* 008358d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008358d6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008358d8: call dword ptr [eax*4 + 0xa218c0] */ { u32 t = R32((u32)(r_eax*4+0xa218c0u)); r_esp -= 4; W32(r_esp, 0x8358dfu); call_ind(t); }
    /* 008358df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008358e0: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008358e3: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 008358e6: jne 0x8358d5 */ if (!fZ) goto L_008358d5;
L_008358e8:; BB(0x008358e8);
    /* 008358e8: mov eax, dword ptr [0xacc188] */ r_eax = R32((u32)(0xacc188u));
L_008358ed:; BB(0x008358ed);
    /* 008358ed: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008358f0: je 0x8358f6 */ if (fZ) goto L_008358f6;
L_008358f2:; BB(0x008358f2);
    /* 008358f2: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
L_008358f6:; BB(0x008358f6);
    /* 008358f6: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008358fa: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008358fe: mov ecx, dword ptr [edx + edi*8] */ r_ecx = R32((u32)(r_edx+r_edi*8));
    /* 00835901: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835903: mov eax, 0 */ r_eax = 0x0u;
    /* 00835908: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0083590b: test ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835911: mov ebx, 0 */ r_ebx = 0x0u;
    /* 00835916: setne bl */ r_ebx = (r_ebx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00835919: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0083591d: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0083591f: je 0x8359ae */ if (fZ) goto L_008359ae;
L_00835925:; BB(0x00835925);
    /* 00835925: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00835929: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0083592c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083592e: je 0x835951 */ if (fZ) goto L_00835951;
L_00835930:; BB(0x00835930);
    /* 00835930: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00835934: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00835938: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0083593e: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00835940: push dword ptr [eax + edi*8 + 8] */ { u32 v = R32((u32)(r_eax+r_edi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835944: push dword ptr [eax + edi*8 + 4] */ { u32 v = R32((u32)(r_eax+r_edi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835948: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083594a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083594b: call dword ptr [ecx + 0x14c] */ { u32 t = R32((u32)(r_ecx+0x14cu)); r_esp -= 4; W32(r_esp, 0x835951u); call_ind(t); }
L_00835951:; BB(0x00835951);
    /* 00835951: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00835955: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00835959: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083595b: je 0x835977 */ if (fZ) goto L_00835977;
L_0083595d:; BB(0x0083595d);
    /* 0083595d: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00835963: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00835965: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00835969: push dword ptr [eax*4 + 0xa218a0] */ { u32 v = R32((u32)(r_eax*4+0xa218a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835970: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00835971: call dword ptr [ecx + 0x130] */ { u32 t = R32((u32)(r_ecx+0x130u)); r_esp -= 4; W32(r_esp, 0x835977u); call_ind(t); }
L_00835977:; BB(0x00835977);
    /* 00835977: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083597c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083597e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835981: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00835983: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835984: call dword ptr [edx + 0x154] */ { u32 t = R32((u32)(r_edx+0x154u)); r_esp -= 4; W32(r_esp, 0x83598au); call_ind(t); }
    /* 0083598a: mov ebx, dword ptr [0xacd528] */ r_ebx = R32((u32)(0xacd528u));
    /* 00835990: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 00835992: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00835995: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00835997: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083599a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083599b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083599c: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 008359a0: push dword ptr [edx + edi*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_edi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008359a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008359a5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008359a7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008359a8: call dword ptr [esi + 0x11c] */ { u32 t = R32((u32)(r_esi+0x11cu)); r_esp -= 4; W32(r_esp, 0x8359aeu); call_ind(t); }
L_008359ae:; BB(0x008359ae);
    /* 008359ae: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 008359b2: add ebp, 0x14 */ {  u32 a = r_ebp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008359b5: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008359b8: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008359bc: jne 0x8358ab */ if (!fZ) goto L_008358ab;
L_008359c2:; BB(0x008359c2);
    /* 008359c2: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008359c6: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_008359c9:; BB(0x008359c9);
    /* 008359c9: mov dword ptr [0xacc184], ecx */ W32((u32)(0xacc184u), r_ecx);
L_008359cf:; BB(0x008359cf);
    /* 008359cf: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008359d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008359d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008359d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008359d5: ret  */ FN_RET(0x00835864); r_esp += 4; return;
}

void f_008359d8(void) /* sub_8359D8 */
{
    FN_ENTER(0x008359d8);
    /* 008359d8: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008359dc: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008359e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008359e2: je 0x835a65 */ if (fZ) goto L_00835a65;
L_008359e8:; BB(0x008359e8);
    /* 008359e8: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008359eb: jb 0x835a4e */ if (fC) goto L_00835a4e;
L_008359ed:; BB(0x008359ed);
    /* 008359ed: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 008359f0: and eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008359f5: cmp eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008359fa: jne 0x835a68 */ if (!fZ) goto L_00835a68;
L_008359fc:; BB(0x008359fc);
    /* 008359fc: lea eax, [ecx + 0x10] */ r_eax = (u32)(r_ecx+0x10u);
    /* 008359ff: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00835a02: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00835a08: cmp ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835a0e: jne 0x835a68 */ if (!fZ) goto L_00835a68;
L_00835a10:; BB(0x00835a10);
    /* 00835a10: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00835a13: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00835a19: cmp ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835a1f: jne 0x835a68 */ if (!fZ) goto L_00835a68;
L_00835a21:; BB(0x00835a21);
    /* 00835a21: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00835a24: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00835a2a: cmp ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835a30: jne 0x835a68 */ if (!fZ) goto L_00835a68;
L_00835a32:; BB(0x00835a32);
    /* 00835a32: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00835a35: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00835a3b: cmp ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835a41: jne 0x835a68 */ if (!fZ) goto L_00835a68;
L_00835a43:; BB(0x00835a43);
    /* 00835a43: add edx, -5 */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00835a46: lea ecx, [eax + 0x40] */ r_ecx = (u32)(r_eax+0x40u);
    /* 00835a49: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00835a4c: jae 0x8359ed */ if (!fC) goto L_008359ed;
L_00835a4e:; BB(0x00835a4e);
    /* 00835a4e: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00835a51: and eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00835a56: cmp eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835a5b: jne 0x835a68 */ if (!fZ) goto L_00835a68;
L_00835a5d:; BB(0x00835a5d);
    /* 00835a5d: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00835a60: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00835a63: jne 0x835a4e */ if (!fZ) goto L_00835a4e;
L_00835a65:; BB(0x00835a65);
    /* 00835a65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00835a67: ret  */ FN_RET(0x008359d8); r_esp += 4; return;
L_00835a68:; BB(0x00835a68);
    /* 00835a68: mov eax, 1 */ r_eax = 0x1u;
    /* 00835a6d: ret  */ FN_RET(0x008359d8); r_esp += 4; return;
}

void f_00835a70(void) /* sub_835A70 */
{
    FN_ENTER(0x00835a70);
    /* 00835a70: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00835a74: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00835a78: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835a7a: je 0x835afd */ if (fZ) goto L_00835afd;
L_00835a80:; BB(0x00835a80);
    /* 00835a80: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00835a83: jb 0x835ae6 */ if (fC) goto L_00835ae6;
L_00835a85:; BB(0x00835a85);
    /* 00835a85: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00835a88: and eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00835a8d: cmp eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835a92: jne 0x835b00 */ if (!fZ) goto L_00835b00;
L_00835a94:; BB(0x00835a94);
    /* 00835a94: lea eax, [ecx + 0x18] */ r_eax = (u32)(r_ecx+0x18u);
    /* 00835a97: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00835a9a: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00835aa0: cmp ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835aa6: jne 0x835b00 */ if (!fZ) goto L_00835b00;
L_00835aa8:; BB(0x00835aa8);
    /* 00835aa8: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00835aab: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00835ab1: cmp ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835ab7: jne 0x835b00 */ if (!fZ) goto L_00835b00;
L_00835ab9:; BB(0x00835ab9);
    /* 00835ab9: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00835abc: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00835ac2: cmp ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835ac8: jne 0x835b00 */ if (!fZ) goto L_00835b00;
L_00835aca:; BB(0x00835aca);
    /* 00835aca: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00835acd: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00835ad3: cmp ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835ad9: jne 0x835b00 */ if (!fZ) goto L_00835b00;
L_00835adb:; BB(0x00835adb);
    /* 00835adb: add edx, -5 */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00835ade: lea ecx, [eax + 0x60] */ r_ecx = (u32)(r_eax+0x60u);
    /* 00835ae1: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00835ae4: jae 0x835a85 */ if (!fC) goto L_00835a85;
L_00835ae6:; BB(0x00835ae6);
    /* 00835ae6: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00835ae9: and eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00835aee: cmp eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835af3: jne 0x835b00 */ if (!fZ) goto L_00835b00;
L_00835af5:; BB(0x00835af5);
    /* 00835af5: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00835af8: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00835afb: jne 0x835ae6 */ if (!fZ) goto L_00835ae6;
L_00835afd:; BB(0x00835afd);
    /* 00835afd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00835aff: ret  */ FN_RET(0x00835a70); r_esp += 4; return;
L_00835b00:; BB(0x00835b00);
    /* 00835b00: mov eax, 1 */ r_eax = 0x1u;
    /* 00835b05: ret  */ FN_RET(0x00835a70); r_esp += 4; return;
}

void f_00835b08(void) /* sub_835B08 */
{
    FN_ENTER(0x00835b08);
    /* 00835b08: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00835b0c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00835b10: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835b12: je 0x835b95 */ if (fZ) goto L_00835b95;
L_00835b18:; BB(0x00835b18);
    /* 00835b18: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00835b1b: jb 0x835b7e */ if (fC) goto L_00835b7e;
L_00835b1d:; BB(0x00835b1d);
    /* 00835b1d: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 00835b20: and eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00835b25: cmp eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835b2a: jne 0x835b98 */ if (!fZ) goto L_00835b98;
L_00835b2c:; BB(0x00835b2c);
    /* 00835b2c: lea eax, [ecx + 0x1c] */ r_eax = (u32)(r_ecx+0x1cu);
    /* 00835b2f: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00835b32: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00835b38: cmp ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835b3e: jne 0x835b98 */ if (!fZ) goto L_00835b98;
L_00835b40:; BB(0x00835b40);
    /* 00835b40: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00835b43: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00835b49: cmp ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835b4f: jne 0x835b98 */ if (!fZ) goto L_00835b98;
L_00835b51:; BB(0x00835b51);
    /* 00835b51: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00835b54: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00835b5a: cmp ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835b60: jne 0x835b98 */ if (!fZ) goto L_00835b98;
L_00835b62:; BB(0x00835b62);
    /* 00835b62: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00835b65: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00835b6b: cmp ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835b71: jne 0x835b98 */ if (!fZ) goto L_00835b98;
L_00835b73:; BB(0x00835b73);
    /* 00835b73: add edx, -5 */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00835b76: lea ecx, [eax + 0x70] */ r_ecx = (u32)(r_eax+0x70u);
    /* 00835b79: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00835b7c: jae 0x835b1d */ if (!fC) goto L_00835b1d;
L_00835b7e:; BB(0x00835b7e);
    /* 00835b7e: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 00835b81: and eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00835b86: cmp eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835b8b: jne 0x835b98 */ if (!fZ) goto L_00835b98;
L_00835b8d:; BB(0x00835b8d);
    /* 00835b8d: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00835b90: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00835b93: jne 0x835b7e */ if (!fZ) goto L_00835b7e;
L_00835b95:; BB(0x00835b95);
    /* 00835b95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00835b97: ret  */ FN_RET(0x00835b08); r_esp += 4; return;
L_00835b98:; BB(0x00835b98);
    /* 00835b98: mov eax, 1 */ r_eax = 0x1u;
    /* 00835b9d: ret  */ FN_RET(0x00835b08); r_esp += 4; return;
}

void f_00835ba0(void) /* sub_835BA0 */
{
    FN_ENTER(0x00835ba0);
    /* 00835ba0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00835ba4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00835ba8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835baa: je 0x835c33 */ if (fZ) goto L_00835c33;
L_00835bb0:; BB(0x00835bb0);
    /* 00835bb0: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00835bb3: jb 0x835c1c */ if (fC) goto L_00835c1c;
L_00835bb5:; BB(0x00835bb5);
    /* 00835bb5: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 00835bb8: and eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00835bbd: cmp eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835bc2: jne 0x835c36 */ if (!fZ) goto L_00835c36;
L_00835bc4:; BB(0x00835bc4);
    /* 00835bc4: lea eax, [ecx + 0x24] */ r_eax = (u32)(r_ecx+0x24u);
    /* 00835bc7: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 00835bca: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00835bd0: cmp ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835bd6: jne 0x835c36 */ if (!fZ) goto L_00835c36;
L_00835bd8:; BB(0x00835bd8);
    /* 00835bd8: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00835bdb: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00835be1: cmp ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835be7: jne 0x835c36 */ if (!fZ) goto L_00835c36;
L_00835be9:; BB(0x00835be9);
    /* 00835be9: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00835bec: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00835bf2: cmp ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835bf8: jne 0x835c36 */ if (!fZ) goto L_00835c36;
L_00835bfa:; BB(0x00835bfa);
    /* 00835bfa: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00835c00: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00835c06: cmp ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835c0c: jne 0x835c36 */ if (!fZ) goto L_00835c36;
L_00835c0e:; BB(0x00835c0e);
    /* 00835c0e: add edx, -5 */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00835c11: lea ecx, [eax + 0x90] */ r_ecx = (u32)(r_eax+0x90u);
    /* 00835c17: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00835c1a: jae 0x835bb5 */ if (!fC) goto L_00835bb5;
L_00835c1c:; BB(0x00835c1c);
    /* 00835c1c: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 00835c1f: and eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00835c24: cmp eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835c29: jne 0x835c36 */ if (!fZ) goto L_00835c36;
L_00835c2b:; BB(0x00835c2b);
    /* 00835c2b: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00835c2e: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00835c31: jne 0x835c1c */ if (!fZ) goto L_00835c1c;
L_00835c33:; BB(0x00835c33);
    /* 00835c33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00835c35: ret  */ FN_RET(0x00835ba0); r_esp += 4; return;
L_00835c36:; BB(0x00835c36);
    /* 00835c36: mov eax, 1 */ r_eax = 0x1u;
    /* 00835c3b: ret  */ FN_RET(0x00835ba0); r_esp += 4; return;
}

void f_00835c3c(void) /* sub_835C3C */
{
    FN_ENTER(0x00835c3c);
    /* 00835c3c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00835c40: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00835c44: mov eax, dword ptr [0xaf0328] */ r_eax = R32((u32)(0xaf0328u));
    /* 00835c49: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00835c4b: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00835c4e: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00835c51: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00835c53: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00835c55: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 00835c58: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00835c5a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00835c5c: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 00835c5f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00835c61: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00835c63: fadd dword ptr [eax + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x30u));
    /* 00835c66: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00835c68: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00835c6b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00835c6d: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 00835c70: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00835c72: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00835c74: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 00835c77: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00835c79: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00835c7b: fadd dword ptr [eax + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x34u));
    /* 00835c7e: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 00835c81: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00835c84: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00835c86: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 00835c89: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00835c8b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00835c8d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00835c8f: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 00835c92: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00835c94: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00835c96: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 00835c99: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 00835c9c: ret  */ FN_RET(0x00835c3c); r_esp += 4; return;
}

void f_00835ca0(void) /* sub_835CA0 */
{
    FN_ENTER(0x00835ca0);
    /* 00835ca0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00835ca2: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x835ca7u); f_00839a28();
    /* 00835ca7: ret  */ FN_RET(0x00835ca0); r_esp += 4; return;
}

void f_00835ca8(void) /* sub_835CA8 */
{
    FN_ENTER(0x00835ca8);
    /* 00835ca8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00835ca9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835caa: mov esi, edx */ r_esi = r_edx;
    /* 00835cac: mov eax, dword ptr [0xaf0388] */ r_eax = R32((u32)(0xaf0388u));
    /* 00835cb1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00835cb3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00835cb5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00835cb7: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 00835cba: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00835cbc: mov eax, dword ptr [edi + eax + 8] */ r_eax = R32((u32)(r_edi+r_eax+0x8u));
    /* 00835cc0: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 00835cc3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00835cc5: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x835ccau); f_00839a28();
    /* 00835cca: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00835ccd: mov edx, esi */ r_edx = r_esi;
    /* 00835ccf: call 0x8396c4 */ r_esp -= 4; W32(r_esp, 0x835cd4u); f_008396c4();
    /* 00835cd4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00835cd5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00835cd6: ret  */ FN_RET(0x00835ca8); r_esp += 4; return;
}

void f_00835cd8(void) /* sub_835CD8 */
{
    FN_ENTER(0x00835cd8);
    /* 00835cd8: mov edx, dword ptr [0xaf0388] */ r_edx = R32((u32)(0xaf0388u));
    /* 00835cde: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00835ce0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00835ce2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00835ce4: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00835ce7: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00835ce9: mov eax, dword ptr [eax + edx + 8] */ r_eax = R32((u32)(r_eax+r_edx+0x8u));
    /* 00835ced: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00835cf0: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00835cf3: call 0x8396d8 */ r_esp -= 4; W32(r_esp, 0x835cf8u); f_008396d8();
    /* 00835cf8: ret  */ FN_RET(0x00835cd8); r_esp += 4; return;
}

void f_00835cfc(void) /* sub_835CFC */
{
    FN_ENTER(0x00835cfc);
    /* 00835cfc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835cfd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00835cfe: mov esi, edx */ r_esi = r_edx;
    /* 00835d00: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00835d02: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00835d07: push 0x103 */ { u32 v = 0x103u; r_esp -= 4; W32(r_esp, v); }
    /* 00835d0c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00835d0e: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00835d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00835d11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835d12: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x835d18u); call_ind(t); }
    /* 00835d18: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00835d1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835d1e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00835d20: push dword ptr [ebp*4 + 0x98a5e0] */ { u32 v = R32((u32)(r_ebp*4+0x98a5e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835d27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835d28: call dword ptr [edx + 0x94] */ { u32 t = R32((u32)(r_edx+0x94u)); r_esp -= 4; W32(r_esp, 0x835d2eu); call_ind(t); }
    /* 00835d2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00835d2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00835d30: ret  */ FN_RET(0x00835cfc); r_esp += 4; return;
}

void f_00835d34(void) /* sub_835D34 */
{
    FN_ENTER(0x00835d34);
    /* 00835d34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835d35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00835d36: mov esi, edx */ r_esi = r_edx;
    /* 00835d38: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00835d3a: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00835d3f: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00835d44: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00835d46: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00835d48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00835d49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835d4a: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x835d50u); call_ind(t); }
    /* 00835d50: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00835d55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835d56: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00835d58: push dword ptr [ebp*4 + 0x98a5e0] */ { u32 v = R32((u32)(r_ebp*4+0x98a5e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835d5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835d60: call dword ptr [edx + 0x94] */ { u32 t = R32((u32)(r_edx+0x94u)); r_esp -= 4; W32(r_esp, 0x835d66u); call_ind(t); }
    /* 00835d66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00835d67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00835d68: ret  */ FN_RET(0x00835d34); r_esp += 4; return;
}

void f_00835d6c(void) /* sub_835D6C */
{
    FN_ENTER(0x00835d6c);
    /* 00835d6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00835d6d: mov ebx, esp */ r_ebx = r_esp;
    /* 00835d6f: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00835d72: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00835d73: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835d74: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00835d77: mov edi, edx */ r_edi = r_edx;
    /* 00835d79: mov esi, ecx */ r_esi = r_ecx;
    /* 00835d7b: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00835d81: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00835d84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835d85: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00835d87: push dword ptr [esi*4 + 0x98a5e0] */ { u32 v = R32((u32)(r_esi*4+0x98a5e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835d8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00835d8f: call dword ptr [ecx + 0x98] */ { u32 t = R32((u32)(r_ecx+0x98u)); r_esp -= 4; W32(r_esp, 0x835d95u); call_ind(t); }
    /* 00835d95: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00835d98: mov edx, edi */ r_edx = r_edi;
    /* 00835d9a: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x835d9fu); f_00831308();
    /* 00835d9f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00835da2: mov ecx, esi */ r_ecx = r_esi;
    /* 00835da4: call 0x835db4 */ r_esp -= 4; W32(r_esp, 0x835da9u); f_00835db4();
    /* 00835da9: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00835dac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00835dad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00835dae: mov esp, ebx */ r_esp = r_ebx;
    /* 00835db0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00835db1: ret  */ FN_RET(0x00835d6c); r_esp += 4; return;
}

void f_00835db4(void) /* sub_835DB4 */
{
    FN_ENTER(0x00835db4);
    /* 00835db4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835db5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00835db6: mov esi, edx */ r_esi = r_edx;
    /* 00835db8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00835dba: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00835dbf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00835dc1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00835dc3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00835dc5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00835dc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835dc7: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x835dcdu); call_ind(t); }
    /* 00835dcd: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00835dd2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835dd3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00835dd5: push dword ptr [ebp*4 + 0x98a5e0] */ { u32 v = R32((u32)(r_ebp*4+0x98a5e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835ddd: call dword ptr [edx + 0x94] */ { u32 t = R32((u32)(r_edx+0x94u)); r_esp -= 4; W32(r_esp, 0x835de3u); call_ind(t); }
    /* 00835de3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00835de4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00835de5: ret  */ FN_RET(0x00835db4); r_esp += 4; return;
}

void f_00835de8(void) /* sub_835DE8 */
{
    FN_ENTER(0x00835de8);
    /* 00835de8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835de9: mov esi, ecx */ r_esi = r_ecx;
    /* 00835deb: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00835df0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00835df2: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00835df4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00835df6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835df7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835df8: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x835dfeu); call_ind(t); }
    /* 00835dfe: push 0xacc000 */ { u32 v = 0xacc000u; r_esp -= 4; W32(r_esp, v); }
    /* 00835e03: push dword ptr [esi*4 + 0x98a5e0] */ { u32 v = R32((u32)(r_esi*4+0x98a5e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835e0a: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00835e0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835e10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00835e12: call dword ptr [edx + 0x94] */ { u32 t = R32((u32)(r_edx+0x94u)); r_esp -= 4; W32(r_esp, 0x835e18u); call_ind(t); }
    /* 00835e18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00835e19: ret  */ FN_RET(0x00835de8); r_esp += 4; return;
}

void f_00835e1c(void) /* sub_835E1C */
{
    FN_ENTER(0x00835e1c);
    /* 00835e1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835e1d: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00835e22: mov edx, dword ptr [edx*4 + 0xa219a0] */ r_edx = R32((u32)(r_edx*4+0xa219a0u));
    /* 00835e29: or edx, dword ptr [esp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00835e2d: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00835e2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00835e30: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00835e32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00835e33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835e34: call dword ptr [esi + 0xfc] */ { u32 t = R32((u32)(r_esi+0xfcu)); r_esp -= 4; W32(r_esp, 0x835e3au); call_ind(t); }
    /* 00835e3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00835e3b: ret 4 */ FN_RET(0x00835e1c); r_esp += 8; return;
}

void f_00835e40(void) /* sub_835E40 */
{
    FN_ENTER(0x00835e40);
    /* 00835e40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00835e41: mov eax, dword ptr [0xaf0388] */ r_eax = R32((u32)(0xaf0388u));
    /* 00835e46: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00835e48: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00835e4b: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 00835e4e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00835e50: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x835e55u); f_00839a28();
    /* 00835e55: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00835e58: call 0x839aec */ r_esp -= 4; W32(r_esp, 0x835e5du); f_00839aec();
    /* 00835e5d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00835e5e: ret  */ FN_RET(0x00835e40); r_esp += 4; return;
}

void f_00835e60(void) /* sub_835E60 */
{
    FN_ENTER(0x00835e60);
    /* 00835e60: call 0x839b6c */ r_esp -= 4; W32(r_esp, 0x835e65u); f_00839b6c();
    /* 00835e65: ret  */ FN_RET(0x00835e60); r_esp += 4; return;
}

void f_00835e68(void) /* sub_835E68 */
{
    FN_ENTER(0x00835e68);
    /* 00835e68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00835e69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835e6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00835e6b: mov esi, ecx */ r_esi = r_ecx;
    /* 00835e6d: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00835e71: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835e74: jae 0x835eca */ if (!fC) goto L_00835eca;
L_00835e76:; BB(0x00835e76);
    /* 00835e76: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835e78: je 0x835ed0 */ if (fZ) goto L_00835ed0;
L_00835e7a:; BB(0x00835e7a);
    /* 00835e7a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00835e7c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00835e7f: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 00835e82: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835e84: je 0x835e92 */ if (fZ) goto L_00835e92;
L_00835e86:; BB(0x00835e86);
    /* 00835e86: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835e89: jne 0x835e92 */ if (!fZ) goto L_00835e92;
L_00835e8b:; BB(0x00835e8b);
    /* 00835e8b: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835e8e: jne 0x835e92 */ if (!fZ) goto L_00835e92;
L_00835e90:; BB(0x00835e90);
    /* 00835e90: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00835e92:; BB(0x00835e92);
    /* 00835e92: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00835e94: jne 0x835ea6 */ if (!fZ) goto L_00835ea6;
L_00835e96:; BB(0x00835e96);
    /* 00835e96: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 00835e99: mov ecx, esi */ r_ecx = r_esi;
    /* 00835e9b: call 0x839934 */ r_esp -= 4; W32(r_esp, 0x835ea0u); f_00839934();
    /* 00835ea0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00835ea1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00835ea2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00835ea3: ret 4 */ FN_RET(0x00835e68); r_esp += 8; return;
L_00835ea6:; BB(0x00835ea6);
    /* 00835ea6: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00835ea9: jne 0x835eca */ if (!fZ) goto L_00835eca;
L_00835eab:; BB(0x00835eab);
    /* 00835eab: mov ecx, esi */ r_ecx = r_esi;
    /* 00835ead: call 0x839a1c */ r_esp -= 4; W32(r_esp, 0x835eb2u); f_00839a1c();
    /* 00835eb2: mov edi, eax */ r_edi = r_eax;
    /* 00835eb4: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 00835eb7: mov ecx, esi */ r_ecx = r_esi;
    /* 00835eb9: call 0x839934 */ r_esp -= 4; W32(r_esp, 0x835ebeu); f_00839934();
    /* 00835ebe: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00835ec1: mov ecx, esi */ r_ecx = r_esi;
    /* 00835ec3: mov edx, edi */ r_edx = r_edi;
    /* 00835ec5: call 0x839934 */ r_esp -= 4; W32(r_esp, 0x835ecau); f_00839934();
L_00835eca:; BB(0x00835eca);
    /* 00835eca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00835ecb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00835ecc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00835ecd: ret 4 */ FN_RET(0x00835e68); r_esp += 8; return;
L_00835ed0:; BB(0x00835ed0);
    /* 00835ed0: mov ecx, esi */ r_ecx = r_esi;
    /* 00835ed2: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x835ed7u); f_00839a28();
    /* 00835ed7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00835ed8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00835ed9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00835eda: ret 4 */ FN_RET(0x00835e68); r_esp += 8; return;
}

void f_00835ee0(void) /* sub_835EE0 */
{
    FN_ENTER(0x00835ee0);
    /* 00835ee0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00835ee1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00835ee2: mov esi, edx */ r_esi = r_edx;
    /* 00835ee4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00835ee6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00835ee8: je 0x835f40 */ if (fZ) goto L_00835f40;
L_00835eea:; BB(0x00835eea);
    /* 00835eea: push dword ptr [esi*4 + 0xa219b0] */ { u32 v = R32((u32)(r_esi*4+0xa219b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835ef1: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00835ef6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00835ef8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00835efa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00835efb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835efc: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x835f02u); call_ind(t); }
    /* 00835f02: push dword ptr [esi*4 + 0xa219c4] */ { u32 v = R32((u32)(r_esi*4+0xa219c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00835f09: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00835f0e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00835f10: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00835f12: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00835f13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835f14: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x835f1au); call_ind(t); }
    /* 00835f1a: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00835f1f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00835f21: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00835f23: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00835f25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00835f26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835f27: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x835f2du); call_ind(t); }
    /* 00835f2d: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00835f32: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00835f34: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00835f36: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00835f38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00835f39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835f3a: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x835f40u); call_ind(t); }
L_00835f40:; BB(0x00835f40);
    /* 00835f40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00835f41: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00835f42: ret  */ FN_RET(0x00835ee0); r_esp += 4; return;
}

void f_00835f44(void) /* sub_835F44 */
{
    FN_ENTER(0x00835f44);
    /* 00835f44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00835f45: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00835f47: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00835f49: je 0x835f75 */ if (fZ) goto L_00835f75;
L_00835f4b:; BB(0x00835f4b);
    /* 00835f4b: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00835f51: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00835f53: mov eax, 1 */ r_eax = 0x1u;
    /* 00835f58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835f59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835f5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00835f5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00835f5c: call dword ptr [ecx + 0xfc] */ { u32 t = R32((u32)(r_ecx+0xfcu)); r_esp -= 4; W32(r_esp, 0x835f62u); call_ind(t); }
    /* 00835f62: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00835f67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00835f69: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00835f6b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00835f6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00835f6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00835f6f: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x835f75u); call_ind(t); }
L_00835f75:; BB(0x00835f75);
    /* 00835f75: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00835f76: ret  */ FN_RET(0x00835f44); r_esp += 4; return;
}

void f_00835f78(void) /* sub_835F78 */
{
    FN_ENTER(0x00835f78);
    /* 00835f78: mov ecx, 0xacc240 */ r_ecx = 0xacc240u;
    /* 00835f7d: mov edx, 0xacc1c0 */ r_edx = 0xacc1c0u;
    /* 00835f82: call 0x839bd8 */ r_esp -= 4; W32(r_esp, 0x835f87u); f_00839bd8();
    /* 00835f87: ret  */ FN_RET(0x00835f78); r_esp += 4; return;
}

void f_00835f88(void) /* sub_835F88 */
{
    FN_ENTER(0x00835f88);
    /* 00835f88: mov dword ptr [ecx*4 + 0xacc1c0], 1 */ W32((u32)(r_ecx*4+0xacc1c0u), 0x1u);
    /* 00835f93: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00835f95: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00835f97: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00835f99: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00835f9b: mov dword ptr [ecx*8 + 0xacc240], eax */ W32((u32)(r_ecx*8+0xacc240u), r_eax);
    /* 00835fa2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00835fa5: mov dword ptr [ecx*8 + 0xacc244], eax */ W32((u32)(r_ecx*8+0xacc244u), r_eax);
    /* 00835fac: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00835faf: mov dword ptr [ecx*8 + 0xacc248], eax */ W32((u32)(r_ecx*8+0xacc248u), r_eax);
    /* 00835fb6: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00835fb9: mov dword ptr [ecx*8 + 0xacc24c], eax */ W32((u32)(r_ecx*8+0xacc24cu), r_eax);
    /* 00835fc0: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00835fc3: mov dword ptr [ecx*8 + 0xacc250], eax */ W32((u32)(r_ecx*8+0xacc250u), r_eax);
    /* 00835fca: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00835fcd: mov dword ptr [ecx*8 + 0xacc254], eax */ W32((u32)(r_ecx*8+0xacc254u), r_eax);
    /* 00835fd4: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00835fd7: mov dword ptr [ecx*8 + 0xacc258], eax */ W32((u32)(r_ecx*8+0xacc258u), r_eax);
    /* 00835fde: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00835fe1: mov dword ptr [ecx*8 + 0xacc25c], eax */ W32((u32)(r_ecx*8+0xacc25cu), r_eax);
    /* 00835fe8: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00835feb: mov dword ptr [ecx*8 + 0xacc260], eax */ W32((u32)(r_ecx*8+0xacc260u), r_eax);
    /* 00835ff2: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00835ff5: mov dword ptr [ecx*8 + 0xacc264], eax */ W32((u32)(r_ecx*8+0xacc264u), r_eax);
    /* 00835ffc: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00835fff: mov dword ptr [ecx*8 + 0xacc268], eax */ W32((u32)(r_ecx*8+0xacc268u), r_eax);
    /* 00836006: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00836009: mov dword ptr [ecx*8 + 0xacc26c], eax */ W32((u32)(r_ecx*8+0xacc26cu), r_eax);
    /* 00836010: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00836013: mov dword ptr [ecx*8 + 0xacc270], eax */ W32((u32)(r_ecx*8+0xacc270u), r_eax);
    /* 0083601a: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0083601d: mov dword ptr [ecx*8 + 0xacc274], eax */ W32((u32)(r_ecx*8+0xacc274u), r_eax);
    /* 00836024: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00836027: mov dword ptr [ecx*8 + 0xacc278], eax */ W32((u32)(r_ecx*8+0xacc278u), r_eax);
    /* 0083602e: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00836031: mov dword ptr [ecx*8 + 0xacc27c], eax */ W32((u32)(r_ecx*8+0xacc27cu), r_eax);
    /* 00836038: ret  */ FN_RET(0x00835f88); r_esp += 4; return;
}

