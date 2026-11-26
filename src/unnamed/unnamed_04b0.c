#include "protos.h"

void f_004b0000(void)
{
    FN_ENTER(0x004b0000);
    /* 004b0000: int3  */ UNSUP(0x004b0000, "int3");
}

void f_004b0009(void)
{
    FN_ENTER(0x004b0009);
    /* 004b0009: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004b000b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b000d: mov dword ptr [esi + 0x790], eax */ W32((u32)(r_esi+0x790u), r_eax);
    /* 004b0013: mov dword ptr [esi + 0x750], 0 */ W32((u32)(r_esi+0x750u), 0x0u);
    /* 004b001d: mov dword ptr [esi + 0x794], eax */ W32((u32)(r_esi+0x794u), r_eax);
    /* 004b0023: mov dword ptr [esi + 0x798], eax */ W32((u32)(r_esi+0x798u), r_eax);
    /* 004b0029: mov dword ptr [esi + 0x79c], eax */ W32((u32)(r_esi+0x79cu), r_eax);
    /* 004b002f: mov dword ptr [esi + 0x754], 0 */ W32((u32)(r_esi+0x754u), 0x0u);
    /* 004b0039: mov dword ptr [esi + 0x7a0], eax */ W32((u32)(r_esi+0x7a0u), r_eax);
    /* 004b003f: mov dword ptr [esi + 0x7a4], eax */ W32((u32)(r_esi+0x7a4u), r_eax);
    /* 004b0045: mov edx, dword ptr [0xaae970] */ r_edx = R32((u32)(0xaae970u));
    /* 004b004b: mov dword ptr [esi + 0x758], 0 */ W32((u32)(r_esi+0x758u), 0x0u);
    /* 004b0055: mov dword ptr [esi + 0x7a8], eax */ W32((u32)(r_esi+0x7a8u), r_eax);
    /* 004b005b: mov dword ptr [esi + 0x72c], eax */ W32((u32)(r_esi+0x72cu), r_eax);
    /* 004b0061: mov dword ptr [esi + 0x75c], 0 */ W32((u32)(r_esi+0x75cu), 0x0u);
    /* 004b006b: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b0071: mov dword ptr [esi + 0x734], eax */ W32((u32)(r_esi+0x734u), r_eax);
    /* 004b0077: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 004b007d: mov dword ptr [esi + 0x760], 0 */ W32((u32)(r_esi+0x760u), 0x0u);
    /* 004b0087: mov dword ptr [esi + 0x73c], eax */ W32((u32)(r_esi+0x73cu), r_eax);
    /* 004b008d: mov dword ptr [esi + 0x740], eax */ W32((u32)(r_esi+0x740u), r_eax);
    /* 004b0093: mov dword ptr [esi + 0x744], eax */ W32((u32)(r_esi+0x744u), r_eax);
    /* 004b0099: mov dword ptr [esi + 0x764], 0 */ W32((u32)(r_esi+0x764u), 0x0u);
    /* 004b00a3: mov dword ptr [esi + 0x748], eax */ W32((u32)(r_esi+0x748u), r_eax);
    /* 004b00a9: mov dword ptr [esi + 0x78c], eax */ W32((u32)(r_esi+0x78cu), r_eax);
    /* 004b00af: mov dword ptr [esi + 0x6b4], eax */ W32((u32)(r_esi+0x6b4u), r_eax);
    /* 004b00b5: mov dword ptr [esi + 0x768], 0 */ W32((u32)(r_esi+0x768u), 0x0u);
    /* 004b00bf: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 004b00c2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00c4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00c6: mov dword ptr [esi + 0x76c], 0 */ W32((u32)(r_esi+0x76cu), 0x0u);
    /* 004b00d0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00d2: lea ebx, [ecx + ecx + 0xaae75c] */ r_ebx = (u32)(r_ecx+r_ecx+0xaae75cu);
    /* 004b00d9: mov dword ptr [esi + 0x770], 0 */ W32((u32)(r_esi+0x770u), 0x0u);
    /* 004b00e3: mov dword ptr [esi + 0x62c], ebx */ W32((u32)(r_esi+0x62cu), r_ebx);
    /* 004b00e9: mov dword ptr [esi + 0x774], 0 */ W32((u32)(r_esi+0x774u), 0x0u);
    /* 004b00f3: mov dword ptr [esi + 0x778], 0 */ W32((u32)(r_esi+0x778u), 0x0u);
    /* 004b00fd: mov dword ptr [esi + 0x77c], 0 */ W32((u32)(r_esi+0x77cu), 0x0u);
    /* 004b0107: mov dword ptr [esi + 0x780], 0 */ W32((u32)(r_esi+0x780u), 0x0u);
    /* 004b0111: mov dword ptr [esi + 0x784], 0 */ W32((u32)(r_esi+0x784u), 0x0u);
    /* 004b011b: mov dword ptr [esi + 0x788], 0 */ W32((u32)(r_esi+0x788u), 0x0u);
    /* 004b0125: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x4b012au); f_00694cc8();
    /* 004b012a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b012c: jne 0x4b013d */ if (!fZ) goto L_004b013d;
L_004b012e:; BB(0x004b012e);
    /* 004b012e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0131: mov dword ptr [ecx + 0x6c0], 0 */ W32((u32)(r_ecx+0x6c0u), 0x0u);
    /* 004b013b: jmp 0x4b0162 */ goto L_004b0162;
L_004b013d:; BB(0x004b013d);
    /* 004b013d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0140: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x4b0145u); f_00520db0();
    /* 004b0145: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0148: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b014a: je 0x4b0158 */ if (fZ) goto L_004b0158;
L_004b014c:; BB(0x004b014c);
    /* 004b014c: mov dword ptr [ecx + 0x6c0], 0 */ W32((u32)(r_ecx+0x6c0u), 0x0u);
    /* 004b0156: jmp 0x4b0162 */ goto L_004b0162;
L_004b0158:; BB(0x004b0158);
    /* 004b0158: mov dword ptr [ecx + 0x6c0], 1 */ W32((u32)(r_ecx+0x6c0u), 0x1u);
L_004b0162:; BB(0x004b0162);
    /* 004b0162: call 0x4b9edc */ r_esp -= 4; W32(r_esp, 0x4b0167u); f_004b9edc();
    /* 004b0167: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b016a: mov eax, dword ptr [ecx + 0x630] */ r_eax = R32((u32)(r_ecx+0x630u));
    /* 004b0170: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0175: jne 0x4b018b */ if (!fZ) goto L_004b018b;
L_004b0177:; BB(0x004b0177);
    /* 004b0177: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0179: mov eax, 1 */ r_eax = 0x1u;
    /* 004b017e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b017f: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 004b0186: call 0x4b02b4 */ r_esp -= 4; W32(r_esp, 0x4b018bu); f_004b02b4();
L_004b018b:; BB(0x004b018b);
    /* 004b018b: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 004b0192: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b0194: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b0199u); f_005caba4();
    /* 004b0199: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b019c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b019f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004b01a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b01a4: je 0x4b0276 */ if (fZ) goto L_004b0276;
L_004b01aa:; BB(0x004b01aa);
    /* 004b01aa: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 004b01b1: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 004b01b8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004b01bb: push dword ptr [eax + 0x34] */ { u32 v = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b01be: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b01c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b01c2: call 0x7ab314 */ r_esp -= 4; W32(r_esp, 0x4b01c7u); f_007ab314();
    /* 004b01c7: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_004b01ce:; BB(0x004b01ce);
    /* 004b01ce: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b01d1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b01d4: mov dword ptr [ecx + 0x7b4], eax */ W32((u32)(r_ecx+0x7b4u), r_eax);
    /* 004b01da: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004b01e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b01e3: je 0x4b01f4 */ if (fZ) goto L_004b01f4;
L_004b01e5:; BB(0x004b01e5);
    /* 004b01e5: push 0x4b9728 */ { u32 v = 0x4b9728u; r_esp -= 4; W32(r_esp, v); }
    /* 004b01ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004b01ec: call 0x7ab40c */ r_esp -= 4; W32(r_esp, 0x4b01f1u); f_007ab40c();
    /* 004b01f1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
L_004b01f4:; BB(0x004b01f4);
    /* 004b01f4: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b01f7: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b01fa: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b01fd: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 004b0202: mov word ptr [ecx + 0x7d4], dx */ W16((u32)(r_ecx+0x7d4u), (u16)r_edx);
    /* 004b0209: mov dword ptr [ecx + 0x7b8], 0 */ W32((u32)(r_ecx+0x7b8u), 0x0u);
    /* 004b0213: mov word ptr [ecx + 0x7d6], dx */ W16((u32)(r_ecx+0x7d6u), (u16)r_edx);
    /* 004b021a: mov word ptr [ecx + 0x7d8], dx */ W16((u32)(r_ecx+0x7d8u), (u16)r_edx);
    /* 004b0221: mov word ptr [ecx + 0x7da], dx */ W16((u32)(r_ecx+0x7dau), (u16)r_edx);
    /* 004b0228: mov dword ptr [ecx + 0x7bc], 0 */ W32((u32)(r_ecx+0x7bcu), 0x0u);
    /* 004b0232: mov eax, ecx */ r_eax = r_ecx;
    /* 004b0234: mov dword ptr [ecx + 0x7c0], 0 */ W32((u32)(r_ecx+0x7c0u), 0x0u);
    /* 004b023e: mov dword ptr [ecx + 0x7c4], 0 */ W32((u32)(r_ecx+0x7c4u), 0x0u);
    /* 004b0248: mov dword ptr [ecx + 0x7c8], 0 */ W32((u32)(r_ecx+0x7c8u), 0x0u);
    /* 004b0252: mov dword ptr [ecx + 0x7cc], 0 */ W32((u32)(r_ecx+0x7ccu), 0x0u);
    /* 004b025c: mov dword ptr [ecx + 0x7d0], 0 */ W32((u32)(r_ecx+0x7d0u), 0x0u);
    /* 004b0266: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b0269: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b0270: mov esp, ebp */ r_esp = r_ebp;
    /* 004b0272: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b0273: ret 8 */ FN_RET(0x004b0009); r_esp += 12; return;
L_004b0276:; BB(0x004b0276);
    /* 004b0276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b0278: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b027b: jmp 0x4b01ce */ goto L_004b01ce;
}

void f_004b0020(void)
{
    FN_ENTER(0x004b0020);
    /* 004b0020: pop es */ UNSUP(0x004b0020, "pop es");
    /* 004b0021: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004b0023: mov dword ptr [esi + 0x798], eax */ W32((u32)(r_esi+0x798u), r_eax);
    /* 004b0029: mov dword ptr [esi + 0x79c], eax */ W32((u32)(r_esi+0x79cu), r_eax);
    /* 004b002f: mov dword ptr [esi + 0x754], 0 */ W32((u32)(r_esi+0x754u), 0x0u);
    /* 004b0039: mov dword ptr [esi + 0x7a0], eax */ W32((u32)(r_esi+0x7a0u), r_eax);
    /* 004b003f: mov dword ptr [esi + 0x7a4], eax */ W32((u32)(r_esi+0x7a4u), r_eax);
    /* 004b0045: mov edx, dword ptr [0xaae970] */ r_edx = R32((u32)(0xaae970u));
    /* 004b004b: mov dword ptr [esi + 0x758], 0 */ W32((u32)(r_esi+0x758u), 0x0u);
    /* 004b0055: mov dword ptr [esi + 0x7a8], eax */ W32((u32)(r_esi+0x7a8u), r_eax);
    /* 004b005b: mov dword ptr [esi + 0x72c], eax */ W32((u32)(r_esi+0x72cu), r_eax);
    /* 004b0061: mov dword ptr [esi + 0x75c], 0 */ W32((u32)(r_esi+0x75cu), 0x0u);
    /* 004b006b: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b0071: mov dword ptr [esi + 0x734], eax */ W32((u32)(r_esi+0x734u), r_eax);
    /* 004b0077: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 004b007d: mov dword ptr [esi + 0x760], 0 */ W32((u32)(r_esi+0x760u), 0x0u);
    /* 004b0087: mov dword ptr [esi + 0x73c], eax */ W32((u32)(r_esi+0x73cu), r_eax);
    /* 004b008d: mov dword ptr [esi + 0x740], eax */ W32((u32)(r_esi+0x740u), r_eax);
    /* 004b0093: mov dword ptr [esi + 0x744], eax */ W32((u32)(r_esi+0x744u), r_eax);
    /* 004b0099: mov dword ptr [esi + 0x764], 0 */ W32((u32)(r_esi+0x764u), 0x0u);
    /* 004b00a3: mov dword ptr [esi + 0x748], eax */ W32((u32)(r_esi+0x748u), r_eax);
    /* 004b00a9: mov dword ptr [esi + 0x78c], eax */ W32((u32)(r_esi+0x78cu), r_eax);
    /* 004b00af: mov dword ptr [esi + 0x6b4], eax */ W32((u32)(r_esi+0x6b4u), r_eax);
    /* 004b00b5: mov dword ptr [esi + 0x768], 0 */ W32((u32)(r_esi+0x768u), 0x0u);
    /* 004b00bf: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 004b00c2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00c4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00c6: mov dword ptr [esi + 0x76c], 0 */ W32((u32)(r_esi+0x76cu), 0x0u);
    /* 004b00d0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00d2: lea ebx, [ecx + ecx + 0xaae75c] */ r_ebx = (u32)(r_ecx+r_ecx+0xaae75cu);
    /* 004b00d9: mov dword ptr [esi + 0x770], 0 */ W32((u32)(r_esi+0x770u), 0x0u);
    /* 004b00e3: mov dword ptr [esi + 0x62c], ebx */ W32((u32)(r_esi+0x62cu), r_ebx);
    /* 004b00e9: mov dword ptr [esi + 0x774], 0 */ W32((u32)(r_esi+0x774u), 0x0u);
    /* 004b00f3: mov dword ptr [esi + 0x778], 0 */ W32((u32)(r_esi+0x778u), 0x0u);
    /* 004b00fd: mov dword ptr [esi + 0x77c], 0 */ W32((u32)(r_esi+0x77cu), 0x0u);
    /* 004b0107: mov dword ptr [esi + 0x780], 0 */ W32((u32)(r_esi+0x780u), 0x0u);
    /* 004b0111: mov dword ptr [esi + 0x784], 0 */ W32((u32)(r_esi+0x784u), 0x0u);
    /* 004b011b: mov dword ptr [esi + 0x788], 0 */ W32((u32)(r_esi+0x788u), 0x0u);
    /* 004b0125: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x4b012au); f_00694cc8();
    /* 004b012a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b012c: jne 0x4b013d */ if (!fZ) goto L_004b013d;
L_004b012e:; BB(0x004b012e);
    /* 004b012e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0131: mov dword ptr [ecx + 0x6c0], 0 */ W32((u32)(r_ecx+0x6c0u), 0x0u);
    /* 004b013b: jmp 0x4b0162 */ goto L_004b0162;
L_004b013d:; BB(0x004b013d);
    /* 004b013d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0140: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x4b0145u); f_00520db0();
    /* 004b0145: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0148: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b014a: je 0x4b0158 */ if (fZ) goto L_004b0158;
L_004b014c:; BB(0x004b014c);
    /* 004b014c: mov dword ptr [ecx + 0x6c0], 0 */ W32((u32)(r_ecx+0x6c0u), 0x0u);
    /* 004b0156: jmp 0x4b0162 */ goto L_004b0162;
L_004b0158:; BB(0x004b0158);
    /* 004b0158: mov dword ptr [ecx + 0x6c0], 1 */ W32((u32)(r_ecx+0x6c0u), 0x1u);
L_004b0162:; BB(0x004b0162);
    /* 004b0162: call 0x4b9edc */ r_esp -= 4; W32(r_esp, 0x4b0167u); f_004b9edc();
    /* 004b0167: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b016a: mov eax, dword ptr [ecx + 0x630] */ r_eax = R32((u32)(r_ecx+0x630u));
    /* 004b0170: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0175: jne 0x4b018b */ if (!fZ) goto L_004b018b;
L_004b0177:; BB(0x004b0177);
    /* 004b0177: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0179: mov eax, 1 */ r_eax = 0x1u;
    /* 004b017e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b017f: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 004b0186: call 0x4b02b4 */ r_esp -= 4; W32(r_esp, 0x4b018bu); f_004b02b4();
L_004b018b:; BB(0x004b018b);
    /* 004b018b: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 004b0192: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b0194: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b0199u); f_005caba4();
    /* 004b0199: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b019c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b019f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004b01a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b01a4: je 0x4b0276 */ if (fZ) goto L_004b0276;
L_004b01aa:; BB(0x004b01aa);
    /* 004b01aa: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 004b01b1: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 004b01b8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004b01bb: push dword ptr [eax + 0x34] */ { u32 v = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b01be: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b01c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b01c2: call 0x7ab314 */ r_esp -= 4; W32(r_esp, 0x4b01c7u); f_007ab314();
    /* 004b01c7: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_004b01ce:; BB(0x004b01ce);
    /* 004b01ce: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b01d1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b01d4: mov dword ptr [ecx + 0x7b4], eax */ W32((u32)(r_ecx+0x7b4u), r_eax);
    /* 004b01da: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004b01e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b01e3: je 0x4b01f4 */ if (fZ) goto L_004b01f4;
L_004b01e5:; BB(0x004b01e5);
    /* 004b01e5: push 0x4b9728 */ { u32 v = 0x4b9728u; r_esp -= 4; W32(r_esp, v); }
    /* 004b01ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004b01ec: call 0x7ab40c */ r_esp -= 4; W32(r_esp, 0x4b01f1u); f_007ab40c();
    /* 004b01f1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
L_004b01f4:; BB(0x004b01f4);
    /* 004b01f4: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b01f7: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b01fa: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b01fd: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 004b0202: mov word ptr [ecx + 0x7d4], dx */ W16((u32)(r_ecx+0x7d4u), (u16)r_edx);
    /* 004b0209: mov dword ptr [ecx + 0x7b8], 0 */ W32((u32)(r_ecx+0x7b8u), 0x0u);
    /* 004b0213: mov word ptr [ecx + 0x7d6], dx */ W16((u32)(r_ecx+0x7d6u), (u16)r_edx);
    /* 004b021a: mov word ptr [ecx + 0x7d8], dx */ W16((u32)(r_ecx+0x7d8u), (u16)r_edx);
    /* 004b0221: mov word ptr [ecx + 0x7da], dx */ W16((u32)(r_ecx+0x7dau), (u16)r_edx);
    /* 004b0228: mov dword ptr [ecx + 0x7bc], 0 */ W32((u32)(r_ecx+0x7bcu), 0x0u);
    /* 004b0232: mov eax, ecx */ r_eax = r_ecx;
    /* 004b0234: mov dword ptr [ecx + 0x7c0], 0 */ W32((u32)(r_ecx+0x7c0u), 0x0u);
    /* 004b023e: mov dword ptr [ecx + 0x7c4], 0 */ W32((u32)(r_ecx+0x7c4u), 0x0u);
    /* 004b0248: mov dword ptr [ecx + 0x7c8], 0 */ W32((u32)(r_ecx+0x7c8u), 0x0u);
    /* 004b0252: mov dword ptr [ecx + 0x7cc], 0 */ W32((u32)(r_ecx+0x7ccu), 0x0u);
    /* 004b025c: mov dword ptr [ecx + 0x7d0], 0 */ W32((u32)(r_ecx+0x7d0u), 0x0u);
    /* 004b0266: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b0269: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b0270: mov esp, ebp */ r_esp = r_ebp;
    /* 004b0272: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b0273: ret 8 */ FN_RET(0x004b0020); r_esp += 12; return;
L_004b0276:; BB(0x004b0276);
    /* 004b0276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b0278: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b027b: jmp 0x4b01ce */ goto L_004b01ce;
}

void f_004b0043(void)
{
    FN_ENTER(0x004b0043);
    /* 004b0043: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004b0045: mov edx, dword ptr [0xaae970] */ r_edx = R32((u32)(0xaae970u));
    /* 004b004b: mov dword ptr [esi + 0x758], 0 */ W32((u32)(r_esi+0x758u), 0x0u);
    /* 004b0055: mov dword ptr [esi + 0x7a8], eax */ W32((u32)(r_esi+0x7a8u), r_eax);
    /* 004b005b: mov dword ptr [esi + 0x72c], eax */ W32((u32)(r_esi+0x72cu), r_eax);
    /* 004b0061: mov dword ptr [esi + 0x75c], 0 */ W32((u32)(r_esi+0x75cu), 0x0u);
    /* 004b006b: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b0071: mov dword ptr [esi + 0x734], eax */ W32((u32)(r_esi+0x734u), r_eax);
    /* 004b0077: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 004b007d: mov dword ptr [esi + 0x760], 0 */ W32((u32)(r_esi+0x760u), 0x0u);
    /* 004b0087: mov dword ptr [esi + 0x73c], eax */ W32((u32)(r_esi+0x73cu), r_eax);
    /* 004b008d: mov dword ptr [esi + 0x740], eax */ W32((u32)(r_esi+0x740u), r_eax);
    /* 004b0093: mov dword ptr [esi + 0x744], eax */ W32((u32)(r_esi+0x744u), r_eax);
    /* 004b0099: mov dword ptr [esi + 0x764], 0 */ W32((u32)(r_esi+0x764u), 0x0u);
    /* 004b00a3: mov dword ptr [esi + 0x748], eax */ W32((u32)(r_esi+0x748u), r_eax);
    /* 004b00a9: mov dword ptr [esi + 0x78c], eax */ W32((u32)(r_esi+0x78cu), r_eax);
    /* 004b00af: mov dword ptr [esi + 0x6b4], eax */ W32((u32)(r_esi+0x6b4u), r_eax);
    /* 004b00b5: mov dword ptr [esi + 0x768], 0 */ W32((u32)(r_esi+0x768u), 0x0u);
    /* 004b00bf: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 004b00c2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00c4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00c6: mov dword ptr [esi + 0x76c], 0 */ W32((u32)(r_esi+0x76cu), 0x0u);
    /* 004b00d0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00d2: lea ebx, [ecx + ecx + 0xaae75c] */ r_ebx = (u32)(r_ecx+r_ecx+0xaae75cu);
    /* 004b00d9: mov dword ptr [esi + 0x770], 0 */ W32((u32)(r_esi+0x770u), 0x0u);
    /* 004b00e3: mov dword ptr [esi + 0x62c], ebx */ W32((u32)(r_esi+0x62cu), r_ebx);
    /* 004b00e9: mov dword ptr [esi + 0x774], 0 */ W32((u32)(r_esi+0x774u), 0x0u);
    /* 004b00f3: mov dword ptr [esi + 0x778], 0 */ W32((u32)(r_esi+0x778u), 0x0u);
    /* 004b00fd: mov dword ptr [esi + 0x77c], 0 */ W32((u32)(r_esi+0x77cu), 0x0u);
    /* 004b0107: mov dword ptr [esi + 0x780], 0 */ W32((u32)(r_esi+0x780u), 0x0u);
    /* 004b0111: mov dword ptr [esi + 0x784], 0 */ W32((u32)(r_esi+0x784u), 0x0u);
    /* 004b011b: mov dword ptr [esi + 0x788], 0 */ W32((u32)(r_esi+0x788u), 0x0u);
    /* 004b0125: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x4b012au); f_00694cc8();
    /* 004b012a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b012c: jne 0x4b013d */ if (!fZ) goto L_004b013d;
L_004b012e:; BB(0x004b012e);
    /* 004b012e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0131: mov dword ptr [ecx + 0x6c0], 0 */ W32((u32)(r_ecx+0x6c0u), 0x0u);
    /* 004b013b: jmp 0x4b0162 */ goto L_004b0162;
L_004b013d:; BB(0x004b013d);
    /* 004b013d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0140: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x4b0145u); f_00520db0();
    /* 004b0145: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0148: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b014a: je 0x4b0158 */ if (fZ) goto L_004b0158;
L_004b014c:; BB(0x004b014c);
    /* 004b014c: mov dword ptr [ecx + 0x6c0], 0 */ W32((u32)(r_ecx+0x6c0u), 0x0u);
    /* 004b0156: jmp 0x4b0162 */ goto L_004b0162;
L_004b0158:; BB(0x004b0158);
    /* 004b0158: mov dword ptr [ecx + 0x6c0], 1 */ W32((u32)(r_ecx+0x6c0u), 0x1u);
L_004b0162:; BB(0x004b0162);
    /* 004b0162: call 0x4b9edc */ r_esp -= 4; W32(r_esp, 0x4b0167u); f_004b9edc();
    /* 004b0167: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b016a: mov eax, dword ptr [ecx + 0x630] */ r_eax = R32((u32)(r_ecx+0x630u));
    /* 004b0170: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0175: jne 0x4b018b */ if (!fZ) goto L_004b018b;
L_004b0177:; BB(0x004b0177);
    /* 004b0177: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0179: mov eax, 1 */ r_eax = 0x1u;
    /* 004b017e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b017f: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 004b0186: call 0x4b02b4 */ r_esp -= 4; W32(r_esp, 0x4b018bu); f_004b02b4();
L_004b018b:; BB(0x004b018b);
    /* 004b018b: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 004b0192: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b0194: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b0199u); f_005caba4();
    /* 004b0199: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b019c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b019f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004b01a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b01a4: je 0x4b0276 */ if (fZ) goto L_004b0276;
L_004b01aa:; BB(0x004b01aa);
    /* 004b01aa: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 004b01b1: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 004b01b8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004b01bb: push dword ptr [eax + 0x34] */ { u32 v = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b01be: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b01c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b01c2: call 0x7ab314 */ r_esp -= 4; W32(r_esp, 0x4b01c7u); f_007ab314();
    /* 004b01c7: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_004b01ce:; BB(0x004b01ce);
    /* 004b01ce: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b01d1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b01d4: mov dword ptr [ecx + 0x7b4], eax */ W32((u32)(r_ecx+0x7b4u), r_eax);
    /* 004b01da: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004b01e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b01e3: je 0x4b01f4 */ if (fZ) goto L_004b01f4;
L_004b01e5:; BB(0x004b01e5);
    /* 004b01e5: push 0x4b9728 */ { u32 v = 0x4b9728u; r_esp -= 4; W32(r_esp, v); }
    /* 004b01ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004b01ec: call 0x7ab40c */ r_esp -= 4; W32(r_esp, 0x4b01f1u); f_007ab40c();
    /* 004b01f1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
L_004b01f4:; BB(0x004b01f4);
    /* 004b01f4: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b01f7: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b01fa: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b01fd: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 004b0202: mov word ptr [ecx + 0x7d4], dx */ W16((u32)(r_ecx+0x7d4u), (u16)r_edx);
    /* 004b0209: mov dword ptr [ecx + 0x7b8], 0 */ W32((u32)(r_ecx+0x7b8u), 0x0u);
    /* 004b0213: mov word ptr [ecx + 0x7d6], dx */ W16((u32)(r_ecx+0x7d6u), (u16)r_edx);
    /* 004b021a: mov word ptr [ecx + 0x7d8], dx */ W16((u32)(r_ecx+0x7d8u), (u16)r_edx);
    /* 004b0221: mov word ptr [ecx + 0x7da], dx */ W16((u32)(r_ecx+0x7dau), (u16)r_edx);
    /* 004b0228: mov dword ptr [ecx + 0x7bc], 0 */ W32((u32)(r_ecx+0x7bcu), 0x0u);
    /* 004b0232: mov eax, ecx */ r_eax = r_ecx;
    /* 004b0234: mov dword ptr [ecx + 0x7c0], 0 */ W32((u32)(r_ecx+0x7c0u), 0x0u);
    /* 004b023e: mov dword ptr [ecx + 0x7c4], 0 */ W32((u32)(r_ecx+0x7c4u), 0x0u);
    /* 004b0248: mov dword ptr [ecx + 0x7c8], 0 */ W32((u32)(r_ecx+0x7c8u), 0x0u);
    /* 004b0252: mov dword ptr [ecx + 0x7cc], 0 */ W32((u32)(r_ecx+0x7ccu), 0x0u);
    /* 004b025c: mov dword ptr [ecx + 0x7d0], 0 */ W32((u32)(r_ecx+0x7d0u), 0x0u);
    /* 004b0266: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b0269: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b0270: mov esp, ebp */ r_esp = r_ebp;
    /* 004b0272: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b0273: ret 8 */ FN_RET(0x004b0043); r_esp += 12; return;
L_004b0276:; BB(0x004b0276);
    /* 004b0276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b0278: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b027b: jmp 0x4b01ce */ goto L_004b01ce;
}

void f_004b004a(void)
{
    FN_ENTER(0x004b004a);
    /* 004b004a: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 004b004c: xchg byte ptr [eax + 7], bl */ { u32 x = R8((u32)(r_eax+0x7u)); u32 y = (u8)r_ebx; W8((u32)(r_eax+0x7u), y); r_ebx = (r_ebx & 0xffffff00u) | ((x) & 0xffu); }
    /* 004b004f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004b0051: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004b0053: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004b0055: mov dword ptr [esi + 0x7a8], eax */ W32((u32)(r_esi+0x7a8u), r_eax);
    /* 004b005b: mov dword ptr [esi + 0x72c], eax */ W32((u32)(r_esi+0x72cu), r_eax);
    /* 004b0061: mov dword ptr [esi + 0x75c], 0 */ W32((u32)(r_esi+0x75cu), 0x0u);
    /* 004b006b: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b0071: mov dword ptr [esi + 0x734], eax */ W32((u32)(r_esi+0x734u), r_eax);
    /* 004b0077: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 004b007d: mov dword ptr [esi + 0x760], 0 */ W32((u32)(r_esi+0x760u), 0x0u);
    /* 004b0087: mov dword ptr [esi + 0x73c], eax */ W32((u32)(r_esi+0x73cu), r_eax);
    /* 004b008d: mov dword ptr [esi + 0x740], eax */ W32((u32)(r_esi+0x740u), r_eax);
    /* 004b0093: mov dword ptr [esi + 0x744], eax */ W32((u32)(r_esi+0x744u), r_eax);
    /* 004b0099: mov dword ptr [esi + 0x764], 0 */ W32((u32)(r_esi+0x764u), 0x0u);
    /* 004b00a3: mov dword ptr [esi + 0x748], eax */ W32((u32)(r_esi+0x748u), r_eax);
    /* 004b00a9: mov dword ptr [esi + 0x78c], eax */ W32((u32)(r_esi+0x78cu), r_eax);
    /* 004b00af: mov dword ptr [esi + 0x6b4], eax */ W32((u32)(r_esi+0x6b4u), r_eax);
    /* 004b00b5: mov dword ptr [esi + 0x768], 0 */ W32((u32)(r_esi+0x768u), 0x0u);
    /* 004b00bf: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 004b00c2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00c4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00c6: mov dword ptr [esi + 0x76c], 0 */ W32((u32)(r_esi+0x76cu), 0x0u);
    /* 004b00d0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00d2: lea ebx, [ecx + ecx + 0xaae75c] */ r_ebx = (u32)(r_ecx+r_ecx+0xaae75cu);
    /* 004b00d9: mov dword ptr [esi + 0x770], 0 */ W32((u32)(r_esi+0x770u), 0x0u);
    /* 004b00e3: mov dword ptr [esi + 0x62c], ebx */ W32((u32)(r_esi+0x62cu), r_ebx);
    /* 004b00e9: mov dword ptr [esi + 0x774], 0 */ W32((u32)(r_esi+0x774u), 0x0u);
    /* 004b00f3: mov dword ptr [esi + 0x778], 0 */ W32((u32)(r_esi+0x778u), 0x0u);
    /* 004b00fd: mov dword ptr [esi + 0x77c], 0 */ W32((u32)(r_esi+0x77cu), 0x0u);
    /* 004b0107: mov dword ptr [esi + 0x780], 0 */ W32((u32)(r_esi+0x780u), 0x0u);
    /* 004b0111: mov dword ptr [esi + 0x784], 0 */ W32((u32)(r_esi+0x784u), 0x0u);
    /* 004b011b: mov dword ptr [esi + 0x788], 0 */ W32((u32)(r_esi+0x788u), 0x0u);
    /* 004b0125: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x4b012au); f_00694cc8();
    /* 004b012a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b012c: jne 0x4b013d */ if (!fZ) goto L_004b013d;
L_004b012e:; BB(0x004b012e);
    /* 004b012e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0131: mov dword ptr [ecx + 0x6c0], 0 */ W32((u32)(r_ecx+0x6c0u), 0x0u);
    /* 004b013b: jmp 0x4b0162 */ goto L_004b0162;
L_004b013d:; BB(0x004b013d);
    /* 004b013d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0140: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x4b0145u); f_00520db0();
    /* 004b0145: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0148: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b014a: je 0x4b0158 */ if (fZ) goto L_004b0158;
L_004b014c:; BB(0x004b014c);
    /* 004b014c: mov dword ptr [ecx + 0x6c0], 0 */ W32((u32)(r_ecx+0x6c0u), 0x0u);
    /* 004b0156: jmp 0x4b0162 */ goto L_004b0162;
L_004b0158:; BB(0x004b0158);
    /* 004b0158: mov dword ptr [ecx + 0x6c0], 1 */ W32((u32)(r_ecx+0x6c0u), 0x1u);
L_004b0162:; BB(0x004b0162);
    /* 004b0162: call 0x4b9edc */ r_esp -= 4; W32(r_esp, 0x4b0167u); f_004b9edc();
    /* 004b0167: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b016a: mov eax, dword ptr [ecx + 0x630] */ r_eax = R32((u32)(r_ecx+0x630u));
    /* 004b0170: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0175: jne 0x4b018b */ if (!fZ) goto L_004b018b;
L_004b0177:; BB(0x004b0177);
    /* 004b0177: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0179: mov eax, 1 */ r_eax = 0x1u;
    /* 004b017e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b017f: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 004b0186: call 0x4b02b4 */ r_esp -= 4; W32(r_esp, 0x4b018bu); f_004b02b4();
L_004b018b:; BB(0x004b018b);
    /* 004b018b: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 004b0192: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b0194: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b0199u); f_005caba4();
    /* 004b0199: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b019c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b019f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004b01a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b01a4: je 0x4b0276 */ if (fZ) goto L_004b0276;
L_004b01aa:; BB(0x004b01aa);
    /* 004b01aa: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 004b01b1: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 004b01b8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004b01bb: push dword ptr [eax + 0x34] */ { u32 v = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b01be: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b01c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b01c2: call 0x7ab314 */ r_esp -= 4; W32(r_esp, 0x4b01c7u); f_007ab314();
    /* 004b01c7: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_004b01ce:; BB(0x004b01ce);
    /* 004b01ce: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b01d1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b01d4: mov dword ptr [ecx + 0x7b4], eax */ W32((u32)(r_ecx+0x7b4u), r_eax);
    /* 004b01da: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004b01e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b01e3: je 0x4b01f4 */ if (fZ) goto L_004b01f4;
L_004b01e5:; BB(0x004b01e5);
    /* 004b01e5: push 0x4b9728 */ { u32 v = 0x4b9728u; r_esp -= 4; W32(r_esp, v); }
    /* 004b01ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004b01ec: call 0x7ab40c */ r_esp -= 4; W32(r_esp, 0x4b01f1u); f_007ab40c();
    /* 004b01f1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
L_004b01f4:; BB(0x004b01f4);
    /* 004b01f4: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b01f7: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b01fa: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b01fd: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 004b0202: mov word ptr [ecx + 0x7d4], dx */ W16((u32)(r_ecx+0x7d4u), (u16)r_edx);
    /* 004b0209: mov dword ptr [ecx + 0x7b8], 0 */ W32((u32)(r_ecx+0x7b8u), 0x0u);
    /* 004b0213: mov word ptr [ecx + 0x7d6], dx */ W16((u32)(r_ecx+0x7d6u), (u16)r_edx);
    /* 004b021a: mov word ptr [ecx + 0x7d8], dx */ W16((u32)(r_ecx+0x7d8u), (u16)r_edx);
    /* 004b0221: mov word ptr [ecx + 0x7da], dx */ W16((u32)(r_ecx+0x7dau), (u16)r_edx);
    /* 004b0228: mov dword ptr [ecx + 0x7bc], 0 */ W32((u32)(r_ecx+0x7bcu), 0x0u);
    /* 004b0232: mov eax, ecx */ r_eax = r_ecx;
    /* 004b0234: mov dword ptr [ecx + 0x7c0], 0 */ W32((u32)(r_ecx+0x7c0u), 0x0u);
    /* 004b023e: mov dword ptr [ecx + 0x7c4], 0 */ W32((u32)(r_ecx+0x7c4u), 0x0u);
    /* 004b0248: mov dword ptr [ecx + 0x7c8], 0 */ W32((u32)(r_ecx+0x7c8u), 0x0u);
    /* 004b0252: mov dword ptr [ecx + 0x7cc], 0 */ W32((u32)(r_ecx+0x7ccu), 0x0u);
    /* 004b025c: mov dword ptr [ecx + 0x7d0], 0 */ W32((u32)(r_ecx+0x7d0u), 0x0u);
    /* 004b0266: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b0269: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b0270: mov esp, ebp */ r_esp = r_ebp;
    /* 004b0272: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b0273: ret 8 */ FN_RET(0x004b004a); r_esp += 12; return;
L_004b0276:; BB(0x004b0276);
    /* 004b0276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b0278: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b027b: jmp 0x4b01ce */ goto L_004b01ce;
}

void f_004b004e(void)
{
    FN_ENTER(0x004b004e);
    /* 004b004e: pop es */ UNSUP(0x004b004e, "pop es");
    /* 004b004f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004b0051: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004b0053: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004b0055: mov dword ptr [esi + 0x7a8], eax */ W32((u32)(r_esi+0x7a8u), r_eax);
    /* 004b005b: mov dword ptr [esi + 0x72c], eax */ W32((u32)(r_esi+0x72cu), r_eax);
    /* 004b0061: mov dword ptr [esi + 0x75c], 0 */ W32((u32)(r_esi+0x75cu), 0x0u);
    /* 004b006b: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b0071: mov dword ptr [esi + 0x734], eax */ W32((u32)(r_esi+0x734u), r_eax);
    /* 004b0077: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 004b007d: mov dword ptr [esi + 0x760], 0 */ W32((u32)(r_esi+0x760u), 0x0u);
    /* 004b0087: mov dword ptr [esi + 0x73c], eax */ W32((u32)(r_esi+0x73cu), r_eax);
    /* 004b008d: mov dword ptr [esi + 0x740], eax */ W32((u32)(r_esi+0x740u), r_eax);
    /* 004b0093: mov dword ptr [esi + 0x744], eax */ W32((u32)(r_esi+0x744u), r_eax);
    /* 004b0099: mov dword ptr [esi + 0x764], 0 */ W32((u32)(r_esi+0x764u), 0x0u);
    /* 004b00a3: mov dword ptr [esi + 0x748], eax */ W32((u32)(r_esi+0x748u), r_eax);
    /* 004b00a9: mov dword ptr [esi + 0x78c], eax */ W32((u32)(r_esi+0x78cu), r_eax);
    /* 004b00af: mov dword ptr [esi + 0x6b4], eax */ W32((u32)(r_esi+0x6b4u), r_eax);
    /* 004b00b5: mov dword ptr [esi + 0x768], 0 */ W32((u32)(r_esi+0x768u), 0x0u);
    /* 004b00bf: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 004b00c2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00c4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00c6: mov dword ptr [esi + 0x76c], 0 */ W32((u32)(r_esi+0x76cu), 0x0u);
    /* 004b00d0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b00d2: lea ebx, [ecx + ecx + 0xaae75c] */ r_ebx = (u32)(r_ecx+r_ecx+0xaae75cu);
    /* 004b00d9: mov dword ptr [esi + 0x770], 0 */ W32((u32)(r_esi+0x770u), 0x0u);
    /* 004b00e3: mov dword ptr [esi + 0x62c], ebx */ W32((u32)(r_esi+0x62cu), r_ebx);
    /* 004b00e9: mov dword ptr [esi + 0x774], 0 */ W32((u32)(r_esi+0x774u), 0x0u);
    /* 004b00f3: mov dword ptr [esi + 0x778], 0 */ W32((u32)(r_esi+0x778u), 0x0u);
    /* 004b00fd: mov dword ptr [esi + 0x77c], 0 */ W32((u32)(r_esi+0x77cu), 0x0u);
    /* 004b0107: mov dword ptr [esi + 0x780], 0 */ W32((u32)(r_esi+0x780u), 0x0u);
    /* 004b0111: mov dword ptr [esi + 0x784], 0 */ W32((u32)(r_esi+0x784u), 0x0u);
    /* 004b011b: mov dword ptr [esi + 0x788], 0 */ W32((u32)(r_esi+0x788u), 0x0u);
    /* 004b0125: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x4b012au); f_00694cc8();
    /* 004b012a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b012c: jne 0x4b013d */ if (!fZ) goto L_004b013d;
L_004b012e:; BB(0x004b012e);
    /* 004b012e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0131: mov dword ptr [ecx + 0x6c0], 0 */ W32((u32)(r_ecx+0x6c0u), 0x0u);
    /* 004b013b: jmp 0x4b0162 */ goto L_004b0162;
L_004b013d:; BB(0x004b013d);
    /* 004b013d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0140: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x4b0145u); f_00520db0();
    /* 004b0145: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b0148: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b014a: je 0x4b0158 */ if (fZ) goto L_004b0158;
L_004b014c:; BB(0x004b014c);
    /* 004b014c: mov dword ptr [ecx + 0x6c0], 0 */ W32((u32)(r_ecx+0x6c0u), 0x0u);
    /* 004b0156: jmp 0x4b0162 */ goto L_004b0162;
L_004b0158:; BB(0x004b0158);
    /* 004b0158: mov dword ptr [ecx + 0x6c0], 1 */ W32((u32)(r_ecx+0x6c0u), 0x1u);
L_004b0162:; BB(0x004b0162);
    /* 004b0162: call 0x4b9edc */ r_esp -= 4; W32(r_esp, 0x4b0167u); f_004b9edc();
    /* 004b0167: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b016a: mov eax, dword ptr [ecx + 0x630] */ r_eax = R32((u32)(r_ecx+0x630u));
    /* 004b0170: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0175: jne 0x4b018b */ if (!fZ) goto L_004b018b;
L_004b0177:; BB(0x004b0177);
    /* 004b0177: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0179: mov eax, 1 */ r_eax = 0x1u;
    /* 004b017e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b017f: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 004b0186: call 0x4b02b4 */ r_esp -= 4; W32(r_esp, 0x4b018bu); f_004b02b4();
L_004b018b:; BB(0x004b018b);
    /* 004b018b: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 004b0192: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b0194: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b0199u); f_005caba4();
    /* 004b0199: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b019c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b019f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004b01a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b01a4: je 0x4b0276 */ if (fZ) goto L_004b0276;
L_004b01aa:; BB(0x004b01aa);
    /* 004b01aa: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 004b01b1: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 004b01b8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004b01bb: push dword ptr [eax + 0x34] */ { u32 v = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b01be: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b01c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b01c2: call 0x7ab314 */ r_esp -= 4; W32(r_esp, 0x4b01c7u); f_007ab314();
    /* 004b01c7: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_004b01ce:; BB(0x004b01ce);
    /* 004b01ce: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004b01d1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b01d4: mov dword ptr [ecx + 0x7b4], eax */ W32((u32)(r_ecx+0x7b4u), r_eax);
    /* 004b01da: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004b01e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b01e3: je 0x4b01f4 */ if (fZ) goto L_004b01f4;
L_004b01e5:; BB(0x004b01e5);
    /* 004b01e5: push 0x4b9728 */ { u32 v = 0x4b9728u; r_esp -= 4; W32(r_esp, v); }
    /* 004b01ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004b01ec: call 0x7ab40c */ r_esp -= 4; W32(r_esp, 0x4b01f1u); f_007ab40c();
    /* 004b01f1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
L_004b01f4:; BB(0x004b01f4);
    /* 004b01f4: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b01f7: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004b01fa: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b01fd: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 004b0202: mov word ptr [ecx + 0x7d4], dx */ W16((u32)(r_ecx+0x7d4u), (u16)r_edx);
    /* 004b0209: mov dword ptr [ecx + 0x7b8], 0 */ W32((u32)(r_ecx+0x7b8u), 0x0u);
    /* 004b0213: mov word ptr [ecx + 0x7d6], dx */ W16((u32)(r_ecx+0x7d6u), (u16)r_edx);
    /* 004b021a: mov word ptr [ecx + 0x7d8], dx */ W16((u32)(r_ecx+0x7d8u), (u16)r_edx);
    /* 004b0221: mov word ptr [ecx + 0x7da], dx */ W16((u32)(r_ecx+0x7dau), (u16)r_edx);
    /* 004b0228: mov dword ptr [ecx + 0x7bc], 0 */ W32((u32)(r_ecx+0x7bcu), 0x0u);
    /* 004b0232: mov eax, ecx */ r_eax = r_ecx;
    /* 004b0234: mov dword ptr [ecx + 0x7c0], 0 */ W32((u32)(r_ecx+0x7c0u), 0x0u);
    /* 004b023e: mov dword ptr [ecx + 0x7c4], 0 */ W32((u32)(r_ecx+0x7c4u), 0x0u);
    /* 004b0248: mov dword ptr [ecx + 0x7c8], 0 */ W32((u32)(r_ecx+0x7c8u), 0x0u);
    /* 004b0252: mov dword ptr [ecx + 0x7cc], 0 */ W32((u32)(r_ecx+0x7ccu), 0x0u);
    /* 004b025c: mov dword ptr [ecx + 0x7d0], 0 */ W32((u32)(r_ecx+0x7d0u), 0x0u);
    /* 004b0266: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b0269: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b0270: mov esp, ebp */ r_esp = r_ebp;
    /* 004b0272: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b0273: ret 8 */ FN_RET(0x004b004e); r_esp += 12; return;
L_004b0276:; BB(0x004b0276);
    /* 004b0276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b0278: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004b027b: jmp 0x4b01ce */ goto L_004b01ce;
}

void f_004b02b4(void) /* sub_4B02B4 */
{
    FN_ENTER(0x004b02b4);
    /* 004b02b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b02b5: mov esi, ecx */ r_esi = r_ecx;
    /* 004b02b7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004b02bb: cmp eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b02be: ja 0x4b0db8 */ if ((!fC&&!fZ)) goto L_004b0db8;
L_004b02c4:; BB(0x004b02c4);
    /* 004b02c4: mov eax, dword ptr [eax*4 + 0x904d20] */ r_eax = R32((u32)(r_eax*4+0x904d20u));
    /* 004b02cb: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b02b4); r_esp += 12; return;
}

void f_004b02cd(void)
{
    FN_ENTER(0x004b02cd);
    /* 004b02cd: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b02d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b02d2: mov ecx, esi */ r_ecx = r_esi;
    /* 004b02d4: call 0x4b51f8 */ r_esp -= 4; W32(r_esp, 0x4b02d9u); f_004b51f8();
    /* 004b02d9: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b02cd); r_esp += 12; return;
}

void f_004b02de(void)
{
    FN_ENTER(0x004b02de);
    /* 004b02de: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b02e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b02e3: mov ecx, esi */ r_ecx = r_esi;
    /* 004b02e5: call 0x4b55c0 */ r_esp -= 4; W32(r_esp, 0x4b02eau); f_004b55c0();
    /* 004b02ea: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b02de); r_esp += 12; return;
}

void f_004b02ef(void)
{
    FN_ENTER(0x004b02ef);
    /* 004b02ef: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b02f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b02f4: mov ecx, esi */ r_ecx = r_esi;
    /* 004b02f6: call 0x4b5760 */ r_esp -= 4; W32(r_esp, 0x4b02fbu); f_004b5760();
    /* 004b02fb: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b02ef); r_esp += 12; return;
}

void f_004b0300(void)
{
    FN_ENTER(0x004b0300);
    /* 004b0300: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0302: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004b0306: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0307: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0309: call 0x4b48f0 */ r_esp -= 4; W32(r_esp, 0x4b030eu); f_004b48f0();
    /* 004b030e: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0300); r_esp += 12; return;
}

void f_004b0313(void)
{
    FN_ENTER(0x004b0313);
    /* 004b0313: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0315: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004b0319: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b031a: mov ecx, esi */ r_ecx = r_esi;
    /* 004b031c: call 0x4b48f0 */ r_esp -= 4; W32(r_esp, 0x4b0321u); f_004b48f0();
    /* 004b0321: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0313); r_esp += 12; return;
}

void f_004b0326(void)
{
    FN_ENTER(0x004b0326);
    /* 004b0326: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b032a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b032b: mov ecx, esi */ r_ecx = r_esi;
    /* 004b032d: call 0x4b5900 */ r_esp -= 4; W32(r_esp, 0x4b0332u); f_004b5900();
    /* 004b0332: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0326); r_esp += 12; return;
}

void f_004b0337(void)
{
    FN_ENTER(0x004b0337);
    /* 004b0337: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b033b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b033c: mov ecx, esi */ r_ecx = r_esi;
    /* 004b033e: call 0x4b5ac8 */ r_esp -= 4; W32(r_esp, 0x4b0343u); f_004b5ac8();
    /* 004b0343: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0337); r_esp += 12; return;
}

void f_004b0348(void)
{
    FN_ENTER(0x004b0348);
    /* 004b0348: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b034c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b034f: je 0x4b0e90 */ if (fZ) goto L_004b0e90;
L_004b0355:; BB(0x004b0355);
    /* 004b0355: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b035c: je 0x4b0db8 */ if (fZ) goto L_004b0db8;
L_004b0362:; BB(0x004b0362);
    /* 004b0362: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0366: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b0369: je 0x4b0db8 */ if (fZ) goto L_004b0db8;
L_004b036f:; BB(0x004b036f);
    /* 004b036f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0373: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b0376: je 0x4b0db8 */ if (fZ) goto L_004b0db8;
L_004b037c:; BB(0x004b037c);
    /* 004b037c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0380: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b0382: jne 0x4b0db8 */ if (!fZ) goto L_004b0db8;
L_004b0388:; BB(0x004b0388);
    /* 004b0388: mov ecx, esi */ r_ecx = r_esi;
    /* 004b038a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b038fu); f_007aa094();
    /* 004b038f: mov edx, dword ptr [esi + 0x730] */ r_edx = R32((u32)(r_esi+0x730u));
    /* 004b0395: cmp edx, dword ptr [esi + 0x734] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x734u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b039b: jge 0x4b03b8 */ if ((fS==fO)) goto L_004b03b8;
L_004b039d:; BB(0x004b039d);
    /* 004b039d: mov eax, dword ptr [esi + 0x738] */ r_eax = R32((u32)(r_esi+0x738u));
    /* 004b03a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b03a5: jle 0x4b0dbc */ if ((fZ||fS!=fO)) goto L_004b0dbc;
L_004b03ab:; BB(0x004b03ab);
    /* 004b03ab: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b03ae: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 004b03b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b03b5: ret 8 */ FN_RET(0x004b0348); r_esp += 12; return;
L_004b03b8:; BB(0x004b03b8);
    /* 004b03b8: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b03be: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b03c5: mov eax, dword ptr [esi + 0x6bc] */ r_eax = R32((u32)(r_esi+0x6bcu));
    /* 004b03cb: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b03ce: mov dword ptr [esi + 0x6bc], ecx */ W32((u32)(r_esi+0x6bcu), r_ecx);
    /* 004b03d4: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b03d8: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b03db: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b03de: ja 0x4b04f2 */ if ((!fC&&!fZ)) goto L_004b04f2;
L_004b03e4:; BB(0x004b03e4);
    /* 004b03e4: mov ecx, dword ptr [ecx*4 + 0x904c80] */ r_ecx = R32((u32)(r_ecx*4+0x904c80u));
    /* 004b03eb: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b04f2:; BB(0x004b04f2);
    /* 004b04f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b04f3: mov ecx, esi */ r_ecx = r_esi;
    /* 004b04f5: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b04fau); f_004b5150();
    /* 004b04fa: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0348); r_esp += 12; return;
L_004b0dbc:; BB(0x004b0dbc);
    /* 004b0dbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b0dbd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0dbf: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 004b0dc2: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b0dc8: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0dca: call 0x4b4e6c */ r_esp -= 4; W32(r_esp, 0x4b0dcfu); f_004b4e6c();
    /* 004b0dcf: mov dword ptr [esi + 0x738], 5 */ W32((u32)(r_esi+0x738u), 0x5u);
    /* 004b0dd9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0dda: ret 8 */ FN_RET(0x004b0348); r_esp += 12; return;
L_004b0e90:; BB(0x004b0e90);
    /* 004b0e90: mov dword ptr [esi + 0x734], 9 */ W32((u32)(r_esi+0x734u), 0x9u);
    /* 004b0e9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b0e9c: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b0ea2: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 004b0ea8: mov edx, 1 */ r_edx = 0x1u;
    /* 004b0ead: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 004b0eb4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0eb5: ret 8 */ FN_RET(0x004b0348); r_esp += 12; return;
}

void f_004b03ed(void)
{
    FN_ENTER(0x004b03ed);
    goto L_004b03ed;
L_004b03cb:; BB(0x004b03cb);
    /* 004b03cb: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b03ce: mov dword ptr [esi + 0x6bc], ecx */ W32((u32)(r_esi+0x6bcu), r_ecx);
    /* 004b03d4: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b03d8: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b03db: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b03de: ja 0x4b04f2 */ if ((!fC&&!fZ)) goto L_004b04f2;
L_004b03e4:; BB(0x004b03e4);
    /* 004b03e4: mov ecx, dword ptr [ecx*4 + 0x904c80] */ r_ecx = R32((u32)(r_ecx*4+0x904c80u));
    /* 004b03eb: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b03ed:; BB(0x004b03ed);
    /* 004b03ed: mov eax, 1 */ r_eax = 0x1u;
    /* 004b03f2: jmp 0x4b03cb */ goto L_004b03cb;
L_004b04f2:; BB(0x004b04f2);
    /* 004b04f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b04f3: mov ecx, esi */ r_ecx = r_esi;
    /* 004b04f5: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b04fau); f_004b5150();
    /* 004b04fa: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b03ed); r_esp += 12; return;
}

void f_004b03f4(void)
{
    FN_ENTER(0x004b03f4);
    /* 004b03f4: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b03fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b03fc: jne 0x4b0408 */ if (!fZ) goto L_004b0408;
L_004b03fe:; BB(0x004b03fe);
    /* 004b03fe: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b0403: jmp 0x4b04f2 */ goto L_004b04f2;
L_004b0408:; BB(0x004b0408);
    /* 004b0408: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b040d: jmp 0x4b04f2 */ goto L_004b04f2;
L_004b04f2:; BB(0x004b04f2);
    /* 004b04f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b04f3: mov ecx, esi */ r_ecx = r_esi;
    /* 004b04f5: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b04fau); f_004b5150();
    /* 004b04fa: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b03f4); r_esp += 12; return;
}

void f_004b0412(void)
{
    FN_ENTER(0x004b0412);
    /* 004b0412: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b0418: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b041a: jne 0x4b0426 */ if (!fZ) goto L_004b0426;
L_004b041c:; BB(0x004b041c);
    /* 004b041c: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b0421: jmp 0x4b04f2 */ goto L_004b04f2;
L_004b0426:; BB(0x004b0426);
    /* 004b0426: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b042b: jmp 0x4b04f2 */ goto L_004b04f2;
L_004b04f2:; BB(0x004b04f2);
    /* 004b04f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b04f3: mov ecx, esi */ r_ecx = r_esi;
    /* 004b04f5: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b04fau); f_004b5150();
    /* 004b04fa: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0412); r_esp += 12; return;
}

void f_004b0430(void)
{
    FN_ENTER(0x004b0430);
    /* 004b0430: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b0436: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0438: jne 0x4b0444 */ if (!fZ) goto L_004b0444;
L_004b043a:; BB(0x004b043a);
    /* 004b043a: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b043f: jmp 0x4b04f2 */ goto L_004b04f2;
L_004b0444:; BB(0x004b0444);
    /* 004b0444: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b0449: jmp 0x4b04f2 */ goto L_004b04f2;
L_004b04f2:; BB(0x004b04f2);
    /* 004b04f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b04f3: mov ecx, esi */ r_ecx = r_esi;
    /* 004b04f5: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b04fau); f_004b5150();
    /* 004b04fa: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0430); r_esp += 12; return;
}

void f_004b044e(void)
{
    FN_ENTER(0x004b044e);
    /* 004b044e: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b0454: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0456: jne 0x4b0462 */ if (!fZ) goto L_004b0462;
L_004b0458:; BB(0x004b0458);
    /* 004b0458: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b045d: jmp 0x4b04f2 */ goto L_004b04f2;
L_004b0462:; BB(0x004b0462);
    /* 004b0462: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b0467: jmp 0x4b04f2 */ goto L_004b04f2;
L_004b04f2:; BB(0x004b04f2);
    /* 004b04f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b04f3: mov ecx, esi */ r_ecx = r_esi;
    /* 004b04f5: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b04fau); f_004b5150();
    /* 004b04fa: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b044e); r_esp += 12; return;
}

void f_004b046c(void)
{
    FN_ENTER(0x004b046c);
    /* 004b046c: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b0472: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0474: jne 0x4b047d */ if (!fZ) goto L_004b047d;
L_004b0476:; BB(0x004b0476);
    /* 004b0476: mov eax, 4 */ r_eax = 0x4u;
    /* 004b047b: jmp 0x4b04f2 */ goto L_004b04f2;
L_004b047d:; BB(0x004b047d);
    /* 004b047d: mov eax, 0xa */ r_eax = 0xau;
    /* 004b0482: jmp 0x4b04f2 */ goto L_004b04f2;
L_004b04f2:; BB(0x004b04f2);
    /* 004b04f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b04f3: mov ecx, esi */ r_ecx = r_esi;
    /* 004b04f5: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b04fau); f_004b5150();
    /* 004b04fa: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b046c); r_esp += 12; return;
}

void f_004b0484(void)
{
    FN_ENTER(0x004b0484);
    /* 004b0484: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b048a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b048c: jne 0x4b0495 */ if (!fZ) goto L_004b0495;
L_004b048e:; BB(0x004b048e);
    /* 004b048e: mov eax, 3 */ r_eax = 0x3u;
    /* 004b0493: jmp 0x4b04f2 */ goto L_004b04f2;
L_004b0495:; BB(0x004b0495);
    /* 004b0495: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b049a: jmp 0x4b04f2 */ goto L_004b04f2;
L_004b04f2:; BB(0x004b04f2);
    /* 004b04f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b04f3: mov ecx, esi */ r_ecx = r_esi;
    /* 004b04f5: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b04fau); f_004b5150();
    /* 004b04fa: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0484); r_esp += 12; return;
}

void f_004b049c(void)
{
    FN_ENTER(0x004b049c);
    /* 004b049c: mov ecx, esi */ r_ecx = r_esi;
    /* 004b049e: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b04a3u); f_00520bf4();
    /* 004b04a3: fcomp dword ptr [0x907004] */ fx_compare(ST(0), R_F32((u32)(0x907004u))); FPOP();
    /* 004b04a9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b04ab: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b04ac: jbe 0x4b04b5 */ if ((fC||fZ)) goto L_004b04b5;
L_004b04ae:; BB(0x004b04ae);
    /* 004b04ae: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b04b3: jmp 0x4b04f2 */ goto L_004b04f2;
L_004b04b5:; BB(0x004b04b5);
    /* 004b04b5: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b04ba: jmp 0x4b04f2 */ goto L_004b04f2;
L_004b04f2:; BB(0x004b04f2);
    /* 004b04f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b04f3: mov ecx, esi */ r_ecx = r_esi;
    /* 004b04f5: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b04fau); f_004b5150();
    /* 004b04fa: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b049c); r_esp += 12; return;
}

void f_004b04bc(void)
{
    FN_ENTER(0x004b04bc);
    /* 004b04bc: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b04c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b04c4: jne 0x4b04cd */ if (!fZ) goto L_004b04cd;
L_004b04c6:; BB(0x004b04c6);
    /* 004b04c6: mov eax, 5 */ r_eax = 0x5u;
    /* 004b04cb: jmp 0x4b04f2 */ goto L_004b04f2;
L_004b04cd:; BB(0x004b04cd);
    /* 004b04cd: mov eax, 9 */ r_eax = 0x9u;
    /* 004b04d2: jmp 0x4b04f2 */ goto L_004b04f2;
L_004b04f2:; BB(0x004b04f2);
    /* 004b04f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b04f3: mov ecx, esi */ r_ecx = r_esi;
    /* 004b04f5: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b04fau); f_004b5150();
    /* 004b04fa: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b04bc); r_esp += 12; return;
}

void f_004b04d4(void)
{
    FN_ENTER(0x004b04d4);
    /* 004b04d4: mov ecx, esi */ r_ecx = r_esi;
    /* 004b04d6: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b04dbu); f_00520bf4();
    /* 004b04db: fcomp dword ptr [0x907004] */ fx_compare(ST(0), R_F32((u32)(0x907004u))); FPOP();
    /* 004b04e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b04e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b04e4: jbe 0x4b04ed */ if ((fC||fZ)) goto L_004b04ed;
L_004b04e6:; BB(0x004b04e6);
    /* 004b04e6: mov eax, 8 */ r_eax = 0x8u;
    /* 004b04eb: jmp 0x4b04f2 */ goto L_004b04f2;
L_004b04ed:; BB(0x004b04ed);
    /* 004b04ed: mov eax, 6 */ r_eax = 0x6u;
L_004b04f2:; BB(0x004b04f2);
    /* 004b04f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b04f3: mov ecx, esi */ r_ecx = r_esi;
    /* 004b04f5: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b04fau); f_004b5150();
    /* 004b04fa: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b04d4); r_esp += 12; return;
}

void f_004b04f2(void)
{
    FN_ENTER(0x004b04f2);
    /* 004b04f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b04f3: mov ecx, esi */ r_ecx = r_esi;
    /* 004b04f5: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b04fau); f_004b5150();
    /* 004b04fa: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b04f2); r_esp += 12; return;
}

void f_004b04ff(void)
{
    FN_ENTER(0x004b04ff);
    /* 004b04ff: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0503: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0506: je 0x4b0e47 */ if (fZ) goto L_004b0e47;
L_004b050c:; BB(0x004b050c);
    /* 004b050c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0510: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b0513: je 0x4b0db8 */ if (fZ) goto L_004b0db8;
L_004b0519:; BB(0x004b0519);
    /* 004b0519: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b051d: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b0520: je 0x4b0db8 */ if (fZ) goto L_004b0db8;
L_004b0526:; BB(0x004b0526);
    /* 004b0526: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b052a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b052d: je 0x4b0db8 */ if (fZ) goto L_004b0db8;
L_004b0533:; BB(0x004b0533);
    /* 004b0533: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0537: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b0539: jne 0x4b0db8 */ if (!fZ) goto L_004b0db8;
L_004b053f:; BB(0x004b053f);
    /* 004b053f: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0541: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b0546u); f_007aa094();
    /* 004b0546: mov edx, dword ptr [esi + 0x730] */ r_edx = R32((u32)(r_esi+0x730u));
    /* 004b054c: cmp edx, dword ptr [esi + 0x734] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x734u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b0552: jge 0x4b056f */ if ((fS==fO)) goto L_004b056f;
L_004b0554:; BB(0x004b0554);
    /* 004b0554: mov eax, dword ptr [esi + 0x738] */ r_eax = R32((u32)(r_esi+0x738u));
    /* 004b055a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b055c: jle 0x4b0e6f */ if ((fZ||fS!=fO)) goto L_004b0e6f;
L_004b0562:; BB(0x004b0562);
    /* 004b0562: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b0565: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 004b056b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b056c: ret 8 */ FN_RET(0x004b04ff); r_esp += 12; return;
L_004b056f:; BB(0x004b056f);
    /* 004b056f: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b0575: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b057c: mov eax, dword ptr [esi + 0x6bc] */ r_eax = R32((u32)(r_esi+0x6bcu));
    /* 004b0582: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b0585: mov dword ptr [esi + 0x6bc], ecx */ W32((u32)(r_esi+0x6bcu), r_ecx);
    /* 004b058b: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b058f: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b0592: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b0595: ja 0x4b06a9 */ if ((!fC&&!fZ)) goto L_004b06a9;
L_004b059b:; BB(0x004b059b);
    /* 004b059b: mov ecx, dword ptr [ecx*4 + 0x904be0] */ r_ecx = R32((u32)(r_ecx*4+0x904be0u));
    /* 004b05a2: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b06a9:; BB(0x004b06a9);
    /* 004b06a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b06aa: mov ecx, esi */ r_ecx = r_esi;
    /* 004b06ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b06b1u); f_004b5150();
    /* 004b06b1: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b04ff); r_esp += 12; return;
L_004b0e47:; BB(0x004b0e47);
    /* 004b0e47: mov dword ptr [esi + 0x734], 9 */ W32((u32)(r_esi+0x734u), 0x9u);
    /* 004b0e51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b0e53: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b0e59: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 004b0e5f: mov edx, 1 */ r_edx = 0x1u;
    /* 004b0e64: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 004b0e6b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0e6c: ret 8 */ FN_RET(0x004b04ff); r_esp += 12; return;
L_004b0e6f:; BB(0x004b0e6f);
    /* 004b0e6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b0e70: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0e72: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 004b0e75: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b0e7b: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0e7d: call 0x4b4e6c */ r_esp -= 4; W32(r_esp, 0x4b0e82u); f_004b4e6c();
    /* 004b0e82: mov dword ptr [esi + 0x738], 5 */ W32((u32)(r_esi+0x738u), 0x5u);
    /* 004b0e8c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0e8d: ret 8 */ FN_RET(0x004b04ff); r_esp += 12; return;
}

void f_004b05a4(void)
{
    FN_ENTER(0x004b05a4);
    goto L_004b05a4;
L_004b0582:; BB(0x004b0582);
    /* 004b0582: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b0585: mov dword ptr [esi + 0x6bc], ecx */ W32((u32)(r_esi+0x6bcu), r_ecx);
    /* 004b058b: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b058f: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b0592: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b0595: ja 0x4b06a9 */ if ((!fC&&!fZ)) goto L_004b06a9;
L_004b059b:; BB(0x004b059b);
    /* 004b059b: mov ecx, dword ptr [ecx*4 + 0x904be0] */ r_ecx = R32((u32)(r_ecx*4+0x904be0u));
    /* 004b05a2: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b05a4:; BB(0x004b05a4);
    /* 004b05a4: mov eax, 1 */ r_eax = 0x1u;
    /* 004b05a9: jmp 0x4b0582 */ goto L_004b0582;
L_004b06a9:; BB(0x004b06a9);
    /* 004b06a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b06aa: mov ecx, esi */ r_ecx = r_esi;
    /* 004b06ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b06b1u); f_004b5150();
    /* 004b06b1: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b05a4); r_esp += 12; return;
}

void f_004b05ab(void)
{
    FN_ENTER(0x004b05ab);
    /* 004b05ab: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b05b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b05b3: jne 0x4b05bf */ if (!fZ) goto L_004b05bf;
L_004b05b5:; BB(0x004b05b5);
    /* 004b05b5: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b05ba: jmp 0x4b06a9 */ goto L_004b06a9;
L_004b05bf:; BB(0x004b05bf);
    /* 004b05bf: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b05c4: jmp 0x4b06a9 */ goto L_004b06a9;
L_004b06a9:; BB(0x004b06a9);
    /* 004b06a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b06aa: mov ecx, esi */ r_ecx = r_esi;
    /* 004b06ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b06b1u); f_004b5150();
    /* 004b06b1: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b05ab); r_esp += 12; return;
}

void f_004b05c9(void)
{
    FN_ENTER(0x004b05c9);
    /* 004b05c9: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b05cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b05d1: jne 0x4b05dd */ if (!fZ) goto L_004b05dd;
L_004b05d3:; BB(0x004b05d3);
    /* 004b05d3: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b05d8: jmp 0x4b06a9 */ goto L_004b06a9;
L_004b05dd:; BB(0x004b05dd);
    /* 004b05dd: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b05e2: jmp 0x4b06a9 */ goto L_004b06a9;
L_004b06a9:; BB(0x004b06a9);
    /* 004b06a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b06aa: mov ecx, esi */ r_ecx = r_esi;
    /* 004b06ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b06b1u); f_004b5150();
    /* 004b06b1: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b05c9); r_esp += 12; return;
}

void f_004b05e7(void)
{
    FN_ENTER(0x004b05e7);
    /* 004b05e7: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b05ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b05ef: jne 0x4b05fb */ if (!fZ) goto L_004b05fb;
L_004b05f1:; BB(0x004b05f1);
    /* 004b05f1: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b05f6: jmp 0x4b06a9 */ goto L_004b06a9;
L_004b05fb:; BB(0x004b05fb);
    /* 004b05fb: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b0600: jmp 0x4b06a9 */ goto L_004b06a9;
L_004b06a9:; BB(0x004b06a9);
    /* 004b06a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b06aa: mov ecx, esi */ r_ecx = r_esi;
    /* 004b06ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b06b1u); f_004b5150();
    /* 004b06b1: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b05e7); r_esp += 12; return;
}

void f_004b0605(void)
{
    FN_ENTER(0x004b0605);
    /* 004b0605: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b060b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b060d: jne 0x4b0619 */ if (!fZ) goto L_004b0619;
L_004b060f:; BB(0x004b060f);
    /* 004b060f: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b0614: jmp 0x4b06a9 */ goto L_004b06a9;
L_004b0619:; BB(0x004b0619);
    /* 004b0619: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b061e: jmp 0x4b06a9 */ goto L_004b06a9;
L_004b06a9:; BB(0x004b06a9);
    /* 004b06a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b06aa: mov ecx, esi */ r_ecx = r_esi;
    /* 004b06ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b06b1u); f_004b5150();
    /* 004b06b1: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0605); r_esp += 12; return;
}

void f_004b0623(void)
{
    FN_ENTER(0x004b0623);
    /* 004b0623: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b0629: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b062b: jne 0x4b0634 */ if (!fZ) goto L_004b0634;
L_004b062d:; BB(0x004b062d);
    /* 004b062d: mov eax, 4 */ r_eax = 0x4u;
    /* 004b0632: jmp 0x4b06a9 */ goto L_004b06a9;
L_004b0634:; BB(0x004b0634);
    /* 004b0634: mov eax, 0xa */ r_eax = 0xau;
    /* 004b0639: jmp 0x4b06a9 */ goto L_004b06a9;
L_004b06a9:; BB(0x004b06a9);
    /* 004b06a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b06aa: mov ecx, esi */ r_ecx = r_esi;
    /* 004b06ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b06b1u); f_004b5150();
    /* 004b06b1: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0623); r_esp += 12; return;
}

void f_004b063b(void)
{
    FN_ENTER(0x004b063b);
    /* 004b063b: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b0641: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0643: jne 0x4b064c */ if (!fZ) goto L_004b064c;
L_004b0645:; BB(0x004b0645);
    /* 004b0645: mov eax, 3 */ r_eax = 0x3u;
    /* 004b064a: jmp 0x4b06a9 */ goto L_004b06a9;
L_004b064c:; BB(0x004b064c);
    /* 004b064c: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b0651: jmp 0x4b06a9 */ goto L_004b06a9;
L_004b06a9:; BB(0x004b06a9);
    /* 004b06a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b06aa: mov ecx, esi */ r_ecx = r_esi;
    /* 004b06ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b06b1u); f_004b5150();
    /* 004b06b1: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b063b); r_esp += 12; return;
}

void f_004b0653(void)
{
    FN_ENTER(0x004b0653);
    /* 004b0653: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0655: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b065au); f_00520bf4();
    /* 004b065a: fcomp dword ptr [0x907004] */ fx_compare(ST(0), R_F32((u32)(0x907004u))); FPOP();
    /* 004b0660: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b0662: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b0663: jbe 0x4b066c */ if ((fC||fZ)) goto L_004b066c;
L_004b0665:; BB(0x004b0665);
    /* 004b0665: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b066a: jmp 0x4b06a9 */ goto L_004b06a9;
L_004b066c:; BB(0x004b066c);
    /* 004b066c: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b0671: jmp 0x4b06a9 */ goto L_004b06a9;
L_004b06a9:; BB(0x004b06a9);
    /* 004b06a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b06aa: mov ecx, esi */ r_ecx = r_esi;
    /* 004b06ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b06b1u); f_004b5150();
    /* 004b06b1: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0653); r_esp += 12; return;
}

void f_004b0673(void)
{
    FN_ENTER(0x004b0673);
    /* 004b0673: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b0679: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b067b: jne 0x4b0684 */ if (!fZ) goto L_004b0684;
L_004b067d:; BB(0x004b067d);
    /* 004b067d: mov eax, 5 */ r_eax = 0x5u;
    /* 004b0682: jmp 0x4b06a9 */ goto L_004b06a9;
L_004b0684:; BB(0x004b0684);
    /* 004b0684: mov eax, 9 */ r_eax = 0x9u;
    /* 004b0689: jmp 0x4b06a9 */ goto L_004b06a9;
L_004b06a9:; BB(0x004b06a9);
    /* 004b06a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b06aa: mov ecx, esi */ r_ecx = r_esi;
    /* 004b06ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b06b1u); f_004b5150();
    /* 004b06b1: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0673); r_esp += 12; return;
}

void f_004b068b(void)
{
    FN_ENTER(0x004b068b);
    /* 004b068b: mov ecx, esi */ r_ecx = r_esi;
    /* 004b068d: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b0692u); f_00520bf4();
    /* 004b0692: fcomp dword ptr [0x907004] */ fx_compare(ST(0), R_F32((u32)(0x907004u))); FPOP();
    /* 004b0698: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b069b: jbe 0x4b06a4 */ if ((fC||fZ)) goto L_004b06a4;
L_004b069d:; BB(0x004b069d);
    /* 004b069d: mov eax, 8 */ r_eax = 0x8u;
    /* 004b06a2: jmp 0x4b06a9 */ goto L_004b06a9;
L_004b06a4:; BB(0x004b06a4);
    /* 004b06a4: mov eax, 6 */ r_eax = 0x6u;
L_004b06a9:; BB(0x004b06a9);
    /* 004b06a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b06aa: mov ecx, esi */ r_ecx = r_esi;
    /* 004b06ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b06b1u); f_004b5150();
    /* 004b06b1: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b068b); r_esp += 12; return;
}

void f_004b06a9(void)
{
    FN_ENTER(0x004b06a9);
    /* 004b06a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b06aa: mov ecx, esi */ r_ecx = r_esi;
    /* 004b06ac: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b06b1u); f_004b5150();
    /* 004b06b1: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b06a9); r_esp += 12; return;
}

void f_004b06b6(void)
{
    FN_ENTER(0x004b06b6);
    /* 004b06b6: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b06ba: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b06bd: je 0x4b0dfe */ if (fZ) goto L_004b0dfe;
L_004b06c3:; BB(0x004b06c3);
    /* 004b06c3: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b06c7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b06ca: je 0x4b0db8 */ if (fZ) goto L_004b0db8;
L_004b06d0:; BB(0x004b06d0);
    /* 004b06d0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b06d4: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b06d7: je 0x4b0db8 */ if (fZ) goto L_004b0db8;
L_004b06dd:; BB(0x004b06dd);
    /* 004b06dd: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b06e1: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b06e4: je 0x4b0db8 */ if (fZ) goto L_004b0db8;
L_004b06ea:; BB(0x004b06ea);
    /* 004b06ea: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b06ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b06f0: jne 0x4b0db8 */ if (!fZ) goto L_004b0db8;
L_004b06f6:; BB(0x004b06f6);
    /* 004b06f6: mov ecx, esi */ r_ecx = r_esi;
    /* 004b06f8: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b06fdu); f_007aa094();
    /* 004b06fd: mov edx, dword ptr [esi + 0x730] */ r_edx = R32((u32)(r_esi+0x730u));
    /* 004b0703: cmp edx, dword ptr [esi + 0x734] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x734u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b0709: jge 0x4b0726 */ if ((fS==fO)) goto L_004b0726;
L_004b070b:; BB(0x004b070b);
    /* 004b070b: mov eax, dword ptr [esi + 0x738] */ r_eax = R32((u32)(r_esi+0x738u));
    /* 004b0711: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b0713: jle 0x4b0ddd */ if ((fZ||fS!=fO)) goto L_004b0ddd;
L_004b0719:; BB(0x004b0719);
    /* 004b0719: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b071c: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 004b0722: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0723: ret 8 */ FN_RET(0x004b06b6); r_esp += 12; return;
L_004b0726:; BB(0x004b0726);
    /* 004b0726: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b072c: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b0733: mov eax, dword ptr [esi + 0x6bc] */ r_eax = R32((u32)(r_esi+0x6bcu));
    /* 004b0739: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b073c: mov dword ptr [esi + 0x6bc], ecx */ W32((u32)(r_esi+0x6bcu), r_ecx);
    /* 004b0742: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b0746: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b0749: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b074c: ja 0x4b0860 */ if ((!fC&&!fZ)) goto L_004b0860;
L_004b0752:; BB(0x004b0752);
    /* 004b0752: mov ecx, dword ptr [ecx*4 + 0x904b40] */ r_ecx = R32((u32)(r_ecx*4+0x904b40u));
    /* 004b0759: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b0860:; BB(0x004b0860);
    /* 004b0860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0861: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0863: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0868u); f_004b5150();
    /* 004b0868: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b06b6); r_esp += 12; return;
L_004b0ddd:; BB(0x004b0ddd);
    /* 004b0ddd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b0dde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0de0: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 004b0de3: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b0de9: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0deb: call 0x4b4e6c */ r_esp -= 4; W32(r_esp, 0x4b0df0u); f_004b4e6c();
    /* 004b0df0: mov dword ptr [esi + 0x738], 5 */ W32((u32)(r_esi+0x738u), 0x5u);
    /* 004b0dfa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0dfb: ret 8 */ FN_RET(0x004b06b6); r_esp += 12; return;
L_004b0dfe:; BB(0x004b0dfe);
    /* 004b0dfe: mov dword ptr [esi + 0x734], 9 */ W32((u32)(r_esi+0x734u), 0x9u);
    /* 004b0e08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b0e0a: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b0e10: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 004b0e16: mov edx, 1 */ r_edx = 0x1u;
    /* 004b0e1b: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 004b0e22: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0e23: ret 8 */ FN_RET(0x004b06b6); r_esp += 12; return;
}

void f_004b075b(void)
{
    FN_ENTER(0x004b075b);
    goto L_004b075b;
L_004b0739:; BB(0x004b0739);
    /* 004b0739: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b073c: mov dword ptr [esi + 0x6bc], ecx */ W32((u32)(r_esi+0x6bcu), r_ecx);
    /* 004b0742: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b0746: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b0749: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b074c: ja 0x4b0860 */ if ((!fC&&!fZ)) goto L_004b0860;
L_004b0752:; BB(0x004b0752);
    /* 004b0752: mov ecx, dword ptr [ecx*4 + 0x904b40] */ r_ecx = R32((u32)(r_ecx*4+0x904b40u));
    /* 004b0759: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b075b:; BB(0x004b075b);
    /* 004b075b: mov eax, 1 */ r_eax = 0x1u;
    /* 004b0760: jmp 0x4b0739 */ goto L_004b0739;
L_004b0860:; BB(0x004b0860);
    /* 004b0860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0861: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0863: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0868u); f_004b5150();
    /* 004b0868: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b075b); r_esp += 12; return;
}

void f_004b0762(void)
{
    FN_ENTER(0x004b0762);
    /* 004b0762: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b0768: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b076a: jne 0x4b0776 */ if (!fZ) goto L_004b0776;
L_004b076c:; BB(0x004b076c);
    /* 004b076c: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b0771: jmp 0x4b0860 */ goto L_004b0860;
L_004b0776:; BB(0x004b0776);
    /* 004b0776: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b077b: jmp 0x4b0860 */ goto L_004b0860;
L_004b0860:; BB(0x004b0860);
    /* 004b0860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0861: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0863: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0868u); f_004b5150();
    /* 004b0868: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0762); r_esp += 12; return;
}

void f_004b0780(void)
{
    FN_ENTER(0x004b0780);
    /* 004b0780: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b0786: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0788: jne 0x4b0794 */ if (!fZ) goto L_004b0794;
L_004b078a:; BB(0x004b078a);
    /* 004b078a: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b078f: jmp 0x4b0860 */ goto L_004b0860;
L_004b0794:; BB(0x004b0794);
    /* 004b0794: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b0799: jmp 0x4b0860 */ goto L_004b0860;
L_004b0860:; BB(0x004b0860);
    /* 004b0860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0861: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0863: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0868u); f_004b5150();
    /* 004b0868: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0780); r_esp += 12; return;
}

void f_004b079e(void)
{
    FN_ENTER(0x004b079e);
    /* 004b079e: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b07a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b07a6: jne 0x4b07b2 */ if (!fZ) goto L_004b07b2;
L_004b07a8:; BB(0x004b07a8);
    /* 004b07a8: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b07ad: jmp 0x4b0860 */ goto L_004b0860;
L_004b07b2:; BB(0x004b07b2);
    /* 004b07b2: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b07b7: jmp 0x4b0860 */ goto L_004b0860;
L_004b0860:; BB(0x004b0860);
    /* 004b0860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0861: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0863: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0868u); f_004b5150();
    /* 004b0868: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b079e); r_esp += 12; return;
}

void f_004b07bc(void)
{
    FN_ENTER(0x004b07bc);
    /* 004b07bc: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b07c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b07c4: jne 0x4b07d0 */ if (!fZ) goto L_004b07d0;
L_004b07c6:; BB(0x004b07c6);
    /* 004b07c6: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b07cb: jmp 0x4b0860 */ goto L_004b0860;
L_004b07d0:; BB(0x004b07d0);
    /* 004b07d0: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b07d5: jmp 0x4b0860 */ goto L_004b0860;
L_004b0860:; BB(0x004b0860);
    /* 004b0860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0861: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0863: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0868u); f_004b5150();
    /* 004b0868: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b07bc); r_esp += 12; return;
}

void f_004b07da(void)
{
    FN_ENTER(0x004b07da);
    /* 004b07da: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b07e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b07e2: jne 0x4b07eb */ if (!fZ) goto L_004b07eb;
L_004b07e4:; BB(0x004b07e4);
    /* 004b07e4: mov eax, 4 */ r_eax = 0x4u;
    /* 004b07e9: jmp 0x4b0860 */ goto L_004b0860;
L_004b07eb:; BB(0x004b07eb);
    /* 004b07eb: mov eax, 0xa */ r_eax = 0xau;
    /* 004b07f0: jmp 0x4b0860 */ goto L_004b0860;
L_004b0860:; BB(0x004b0860);
    /* 004b0860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0861: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0863: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0868u); f_004b5150();
    /* 004b0868: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b07da); r_esp += 12; return;
}

void f_004b07f2(void)
{
    FN_ENTER(0x004b07f2);
    /* 004b07f2: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b07f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b07fa: jne 0x4b0803 */ if (!fZ) goto L_004b0803;
L_004b07fc:; BB(0x004b07fc);
    /* 004b07fc: mov eax, 3 */ r_eax = 0x3u;
    /* 004b0801: jmp 0x4b0860 */ goto L_004b0860;
L_004b0803:; BB(0x004b0803);
    /* 004b0803: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b0808: jmp 0x4b0860 */ goto L_004b0860;
L_004b0860:; BB(0x004b0860);
    /* 004b0860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0861: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0863: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0868u); f_004b5150();
    /* 004b0868: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b07f2); r_esp += 12; return;
}

void f_004b080a(void)
{
    FN_ENTER(0x004b080a);
    /* 004b080a: mov ecx, esi */ r_ecx = r_esi;
    /* 004b080c: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b0811u); f_00520bf4();
    /* 004b0811: fcomp dword ptr [0x907004] */ fx_compare(ST(0), R_F32((u32)(0x907004u))); FPOP();
    /* 004b0817: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b0819: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b081a: jbe 0x4b0823 */ if ((fC||fZ)) goto L_004b0823;
L_004b081c:; BB(0x004b081c);
    /* 004b081c: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b0821: jmp 0x4b0860 */ goto L_004b0860;
L_004b0823:; BB(0x004b0823);
    /* 004b0823: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b0828: jmp 0x4b0860 */ goto L_004b0860;
L_004b0860:; BB(0x004b0860);
    /* 004b0860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0861: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0863: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0868u); f_004b5150();
    /* 004b0868: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b080a); r_esp += 12; return;
}

void f_004b082a(void)
{
    FN_ENTER(0x004b082a);
    /* 004b082a: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b0830: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0832: jne 0x4b083b */ if (!fZ) goto L_004b083b;
L_004b0834:; BB(0x004b0834);
    /* 004b0834: mov eax, 5 */ r_eax = 0x5u;
    /* 004b0839: jmp 0x4b0860 */ goto L_004b0860;
L_004b083b:; BB(0x004b083b);
    /* 004b083b: mov eax, 9 */ r_eax = 0x9u;
    /* 004b0840: jmp 0x4b0860 */ goto L_004b0860;
L_004b0860:; BB(0x004b0860);
    /* 004b0860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0861: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0863: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0868u); f_004b5150();
    /* 004b0868: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b082a); r_esp += 12; return;
}

void f_004b0842(void)
{
    FN_ENTER(0x004b0842);
    /* 004b0842: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0844: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b0849u); f_00520bf4();
    /* 004b0849: fcomp dword ptr [0x907004] */ fx_compare(ST(0), R_F32((u32)(0x907004u))); FPOP();
    /* 004b084f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b0851: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b0852: jbe 0x4b085b */ if ((fC||fZ)) goto L_004b085b;
L_004b0854:; BB(0x004b0854);
    /* 004b0854: mov eax, 8 */ r_eax = 0x8u;
    /* 004b0859: jmp 0x4b0860 */ goto L_004b0860;
L_004b085b:; BB(0x004b085b);
    /* 004b085b: mov eax, 6 */ r_eax = 0x6u;
L_004b0860:; BB(0x004b0860);
    /* 004b0860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0861: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0863: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0868u); f_004b5150();
    /* 004b0868: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0842); r_esp += 12; return;
}

void f_004b0860(void)
{
    FN_ENTER(0x004b0860);
    /* 004b0860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0861: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0863: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0868u); f_004b5150();
    /* 004b0868: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0860); r_esp += 12; return;
}

void f_004b086d(void)
{
    FN_ENTER(0x004b086d);
    /* 004b086d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0871: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0874: je 0x4b0eb8 */ if (fZ) goto L_004b0eb8;
L_004b087a:; BB(0x004b087a);
    /* 004b087a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b087e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b0881: je 0x4b0db8 */ if (fZ) goto L_004b0db8;
L_004b0887:; BB(0x004b0887);
    /* 004b0887: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b088b: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b088e: je 0x4b0db8 */ if (fZ) goto L_004b0db8;
L_004b0894:; BB(0x004b0894);
    /* 004b0894: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0898: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b089b: je 0x4b0db8 */ if (fZ) goto L_004b0db8;
L_004b08a1:; BB(0x004b08a1);
    /* 004b08a1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b08a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b08a7: jne 0x4b0db8 */ if (!fZ) goto L_004b0db8;
L_004b08ad:; BB(0x004b08ad);
    /* 004b08ad: mov ecx, esi */ r_ecx = r_esi;
    /* 004b08af: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b08b4u); f_007aa094();
    /* 004b08b4: mov edx, dword ptr [esi + 0x730] */ r_edx = R32((u32)(r_esi+0x730u));
    /* 004b08ba: cmp edx, dword ptr [esi + 0x734] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x734u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b08c0: jge 0x4b08dd */ if ((fS==fO)) goto L_004b08dd;
L_004b08c2:; BB(0x004b08c2);
    /* 004b08c2: mov eax, dword ptr [esi + 0x738] */ r_eax = R32((u32)(r_esi+0x738u));
    /* 004b08c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b08ca: jle 0x4b0e26 */ if ((fZ||fS!=fO)) goto L_004b0e26;
L_004b08d0:; BB(0x004b08d0);
    /* 004b08d0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b08d3: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 004b08d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b08da: ret 8 */ FN_RET(0x004b086d); r_esp += 12; return;
L_004b08dd:; BB(0x004b08dd);
    /* 004b08dd: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b08e3: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b08ea: mov eax, dword ptr [esi + 0x6bc] */ r_eax = R32((u32)(r_esi+0x6bcu));
    /* 004b08f0: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b08f3: mov dword ptr [esi + 0x6bc], ecx */ W32((u32)(r_esi+0x6bcu), r_ecx);
    /* 004b08f9: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b08fd: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b0900: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b0903: ja 0x4b0a17 */ if ((!fC&&!fZ)) goto L_004b0a17;
L_004b0909:; BB(0x004b0909);
    /* 004b0909: mov ecx, dword ptr [ecx*4 + 0x904aa0] */ r_ecx = R32((u32)(r_ecx*4+0x904aa0u));
    /* 004b0910: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b0a17:; BB(0x004b0a17);
    /* 004b0a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a18: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a1a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0a1fu); f_004b5150();
    /* 004b0a1f: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b086d); r_esp += 12; return;
L_004b0e26:; BB(0x004b0e26);
    /* 004b0e26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b0e27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0e29: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 004b0e2c: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b0e32: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0e34: call 0x4b4e6c */ r_esp -= 4; W32(r_esp, 0x4b0e39u); f_004b4e6c();
    /* 004b0e39: mov dword ptr [esi + 0x738], 5 */ W32((u32)(r_esi+0x738u), 0x5u);
    /* 004b0e43: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0e44: ret 8 */ FN_RET(0x004b086d); r_esp += 12; return;
L_004b0eb8:; BB(0x004b0eb8);
    /* 004b0eb8: mov dword ptr [esi + 0x734], 9 */ W32((u32)(r_esi+0x734u), 0x9u);
    /* 004b0ec2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b0ec4: mov dword ptr [esi + 0x730], eax */ W32((u32)(r_esi+0x730u), r_eax);
    /* 004b0eca: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 004b0ed0: mov edx, 1 */ r_edx = 0x1u;
    /* 004b0ed5: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 004b0edc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0edd: ret 8 */ FN_RET(0x004b086d); r_esp += 12; return;
}

void f_004b0912(void)
{
    FN_ENTER(0x004b0912);
    goto L_004b0912;
L_004b08f0:; BB(0x004b08f0);
    /* 004b08f0: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b08f3: mov dword ptr [esi + 0x6bc], ecx */ W32((u32)(r_esi+0x6bcu), r_ecx);
    /* 004b08f9: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b08fd: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b0900: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b0903: ja 0x4b0a17 */ if ((!fC&&!fZ)) goto L_004b0a17;
L_004b0909:; BB(0x004b0909);
    /* 004b0909: mov ecx, dword ptr [ecx*4 + 0x904aa0] */ r_ecx = R32((u32)(r_ecx*4+0x904aa0u));
    /* 004b0910: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b0912:; BB(0x004b0912);
    /* 004b0912: mov eax, 1 */ r_eax = 0x1u;
    /* 004b0917: jmp 0x4b08f0 */ goto L_004b08f0;
L_004b0a17:; BB(0x004b0a17);
    /* 004b0a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a18: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a1a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0a1fu); f_004b5150();
    /* 004b0a1f: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0912); r_esp += 12; return;
}

void f_004b0919(void)
{
    FN_ENTER(0x004b0919);
    /* 004b0919: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b091f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0921: jne 0x4b092d */ if (!fZ) goto L_004b092d;
L_004b0923:; BB(0x004b0923);
    /* 004b0923: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b0928: jmp 0x4b0a17 */ goto L_004b0a17;
L_004b092d:; BB(0x004b092d);
    /* 004b092d: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b0932: jmp 0x4b0a17 */ goto L_004b0a17;
L_004b0a17:; BB(0x004b0a17);
    /* 004b0a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a18: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a1a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0a1fu); f_004b5150();
    /* 004b0a1f: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0919); r_esp += 12; return;
}

void f_004b0937(void)
{
    FN_ENTER(0x004b0937);
    /* 004b0937: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b093d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b093f: jne 0x4b094b */ if (!fZ) goto L_004b094b;
L_004b0941:; BB(0x004b0941);
    /* 004b0941: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b0946: jmp 0x4b0a17 */ goto L_004b0a17;
L_004b094b:; BB(0x004b094b);
    /* 004b094b: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b0950: jmp 0x4b0a17 */ goto L_004b0a17;
L_004b0a17:; BB(0x004b0a17);
    /* 004b0a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a18: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a1a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0a1fu); f_004b5150();
    /* 004b0a1f: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0937); r_esp += 12; return;
}

void f_004b0955(void)
{
    FN_ENTER(0x004b0955);
    /* 004b0955: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b095b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b095d: jne 0x4b0969 */ if (!fZ) goto L_004b0969;
L_004b095f:; BB(0x004b095f);
    /* 004b095f: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b0964: jmp 0x4b0a17 */ goto L_004b0a17;
L_004b0969:; BB(0x004b0969);
    /* 004b0969: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b096e: jmp 0x4b0a17 */ goto L_004b0a17;
L_004b0a17:; BB(0x004b0a17);
    /* 004b0a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a18: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a1a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0a1fu); f_004b5150();
    /* 004b0a1f: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0955); r_esp += 12; return;
}

void f_004b0973(void)
{
    FN_ENTER(0x004b0973);
    /* 004b0973: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b0979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b097b: jne 0x4b0987 */ if (!fZ) goto L_004b0987;
L_004b097d:; BB(0x004b097d);
    /* 004b097d: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b0982: jmp 0x4b0a17 */ goto L_004b0a17;
L_004b0987:; BB(0x004b0987);
    /* 004b0987: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b098c: jmp 0x4b0a17 */ goto L_004b0a17;
L_004b0a17:; BB(0x004b0a17);
    /* 004b0a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a18: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a1a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0a1fu); f_004b5150();
    /* 004b0a1f: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0973); r_esp += 12; return;
}

void f_004b0991(void)
{
    FN_ENTER(0x004b0991);
    /* 004b0991: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b0997: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0999: jne 0x4b09a2 */ if (!fZ) goto L_004b09a2;
L_004b099b:; BB(0x004b099b);
    /* 004b099b: mov eax, 4 */ r_eax = 0x4u;
    /* 004b09a0: jmp 0x4b0a17 */ goto L_004b0a17;
L_004b09a2:; BB(0x004b09a2);
    /* 004b09a2: mov eax, 0xa */ r_eax = 0xau;
    /* 004b09a7: jmp 0x4b0a17 */ goto L_004b0a17;
L_004b0a17:; BB(0x004b0a17);
    /* 004b0a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a18: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a1a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0a1fu); f_004b5150();
    /* 004b0a1f: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0991); r_esp += 12; return;
}

void f_004b09a9(void)
{
    FN_ENTER(0x004b09a9);
    /* 004b09a9: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b09af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b09b1: jne 0x4b09ba */ if (!fZ) goto L_004b09ba;
L_004b09b3:; BB(0x004b09b3);
    /* 004b09b3: mov eax, 3 */ r_eax = 0x3u;
    /* 004b09b8: jmp 0x4b0a17 */ goto L_004b0a17;
L_004b09ba:; BB(0x004b09ba);
    /* 004b09ba: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b09bf: jmp 0x4b0a17 */ goto L_004b0a17;
L_004b0a17:; BB(0x004b0a17);
    /* 004b0a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a18: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a1a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0a1fu); f_004b5150();
    /* 004b0a1f: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b09a9); r_esp += 12; return;
}

void f_004b09c1(void)
{
    FN_ENTER(0x004b09c1);
    /* 004b09c1: mov ecx, esi */ r_ecx = r_esi;
    /* 004b09c3: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b09c8u); f_00520bf4();
    /* 004b09c8: fcomp dword ptr [0x907004] */ fx_compare(ST(0), R_F32((u32)(0x907004u))); FPOP();
    /* 004b09ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b09d0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b09d1: jbe 0x4b09da */ if ((fC||fZ)) goto L_004b09da;
L_004b09d3:; BB(0x004b09d3);
    /* 004b09d3: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b09d8: jmp 0x4b0a17 */ goto L_004b0a17;
L_004b09da:; BB(0x004b09da);
    /* 004b09da: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b09df: jmp 0x4b0a17 */ goto L_004b0a17;
L_004b0a17:; BB(0x004b0a17);
    /* 004b0a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a18: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a1a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0a1fu); f_004b5150();
    /* 004b0a1f: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b09c1); r_esp += 12; return;
}

void f_004b09e1(void)
{
    FN_ENTER(0x004b09e1);
    /* 004b09e1: mov eax, dword ptr [esi + 0x6cc] */ r_eax = R32((u32)(r_esi+0x6ccu));
    /* 004b09e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b09e9: jne 0x4b09f2 */ if (!fZ) goto L_004b09f2;
L_004b09eb:; BB(0x004b09eb);
    /* 004b09eb: mov eax, 5 */ r_eax = 0x5u;
    /* 004b09f0: jmp 0x4b0a17 */ goto L_004b0a17;
L_004b09f2:; BB(0x004b09f2);
    /* 004b09f2: mov eax, 9 */ r_eax = 0x9u;
    /* 004b09f7: jmp 0x4b0a17 */ goto L_004b0a17;
L_004b0a17:; BB(0x004b0a17);
    /* 004b0a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a18: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a1a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0a1fu); f_004b5150();
    /* 004b0a1f: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b09e1); r_esp += 12; return;
}

void f_004b09f9(void)
{
    FN_ENTER(0x004b09f9);
    /* 004b09f9: mov ecx, esi */ r_ecx = r_esi;
    /* 004b09fb: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b0a00u); f_00520bf4();
    /* 004b0a00: fcomp dword ptr [0x907004] */ fx_compare(ST(0), R_F32((u32)(0x907004u))); FPOP();
    /* 004b0a06: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b0a08: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b0a09: jbe 0x4b0a12 */ if ((fC||fZ)) goto L_004b0a12;
L_004b0a0b:; BB(0x004b0a0b);
    /* 004b0a0b: mov eax, 8 */ r_eax = 0x8u;
    /* 004b0a10: jmp 0x4b0a17 */ goto L_004b0a17;
L_004b0a12:; BB(0x004b0a12);
    /* 004b0a12: mov eax, 6 */ r_eax = 0x6u;
L_004b0a17:; BB(0x004b0a17);
    /* 004b0a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a18: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a1a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0a1fu); f_004b5150();
    /* 004b0a1f: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b09f9); r_esp += 12; return;
}

void f_004b0a17(void)
{
    FN_ENTER(0x004b0a17);
    /* 004b0a17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a18: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a1a: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b0a1fu); f_004b5150();
    /* 004b0a1f: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0a17); r_esp += 12; return;
}

void f_004b0a24(void)
{
    FN_ENTER(0x004b0a24);
    /* 004b0a24: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a26: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a28: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a2a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0a2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a2f: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0a34u); f_004b1e98();
    /* 004b0a34: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0a24); r_esp += 12; return;
}

void f_004b0a39(void)
{
    FN_ENTER(0x004b0a39);
    /* 004b0a39: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a3b: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a3d: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a3f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0a43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a44: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0a49u); f_004b1e98();
    /* 004b0a49: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0a39); r_esp += 12; return;
}

void f_004b0a4e(void)
{
    FN_ENTER(0x004b0a4e);
    /* 004b0a4e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a50: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a52: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a54: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0a58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a59: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0a5eu); f_004b1e98();
    /* 004b0a5e: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0a4e); r_esp += 12; return;
}

void f_004b0a63(void)
{
    FN_ENTER(0x004b0a63);
    /* 004b0a63: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a65: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a67: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a69: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0a6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a6e: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0a73u); f_004b1e98();
    /* 004b0a73: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0a63); r_esp += 12; return;
}

void f_004b0a78(void)
{
    FN_ENTER(0x004b0a78);
    /* 004b0a78: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a7a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a7c: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a7e: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0a82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a83: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0a88u); f_004b1e98();
    /* 004b0a88: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0a78); r_esp += 12; return;
}

void f_004b0a8d(void)
{
    FN_ENTER(0x004b0a8d);
    /* 004b0a8d: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a8f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a91: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0a93: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0a97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0a98: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0a9du); f_004b1e98();
    /* 004b0a9d: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0a8d); r_esp += 12; return;
}

void f_004b0aa2(void)
{
    FN_ENTER(0x004b0aa2);
    /* 004b0aa2: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0aa4: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0aa6: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0aa8: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0aac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0aad: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0ab2u); f_004b1e98();
    /* 004b0ab2: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0aa2); r_esp += 12; return;
}

void f_004b0ab7(void)
{
    FN_ENTER(0x004b0ab7);
    /* 004b0ab7: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0ab9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0abb: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0abd: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0ac1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0ac2: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0ac7u); f_004b1e98();
    /* 004b0ac7: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0ab7); r_esp += 12; return;
}

void f_004b0acc(void)
{
    FN_ENTER(0x004b0acc);
    /* 004b0acc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0ace: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0ad0: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0ad2: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0ad6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0ad7: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0adcu); f_004b1e98();
    /* 004b0adc: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0acc); r_esp += 12; return;
}

void f_004b0ae1(void)
{
    FN_ENTER(0x004b0ae1);
    /* 004b0ae1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0ae3: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0ae5: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0ae7: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0aeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0aec: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0af1u); f_004b1e98();
    /* 004b0af1: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0ae1); r_esp += 12; return;
}

void f_004b0af6(void)
{
    FN_ENTER(0x004b0af6);
    /* 004b0af6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0af8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0afa: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0afc: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0b00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b01: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0b06u); f_004b1e98();
    /* 004b0b06: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0af6); r_esp += 12; return;
}

void f_004b0b0b(void)
{
    FN_ENTER(0x004b0b0b);
    /* 004b0b0b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b0d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b0f: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0b11: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0b15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b16: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0b1bu); f_004b1e98();
    /* 004b0b1b: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0b0b); r_esp += 12; return;
}

void f_004b0b20(void)
{
    FN_ENTER(0x004b0b20);
    /* 004b0b20: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b22: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b24: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0b26: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0b2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b2b: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0b30u); f_004b1e98();
    /* 004b0b30: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0b20); r_esp += 12; return;
}

void f_004b0b35(void)
{
    FN_ENTER(0x004b0b35);
    /* 004b0b35: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b37: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b39: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0b3b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0b3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b40: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0b45u); f_004b1e98();
    /* 004b0b45: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0b35); r_esp += 12; return;
}

void f_004b0b4a(void)
{
    FN_ENTER(0x004b0b4a);
    /* 004b0b4a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b4c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b4e: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0b50: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0b54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b55: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0b5au); f_004b1e98();
    /* 004b0b5a: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0b4a); r_esp += 12; return;
}

void f_004b0b5f(void)
{
    FN_ENTER(0x004b0b5f);
    /* 004b0b5f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b61: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b63: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0b65: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0b69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b6a: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0b6fu); f_004b1e98();
    /* 004b0b6f: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0b5f); r_esp += 12; return;
}

void f_004b0b74(void)
{
    FN_ENTER(0x004b0b74);
    /* 004b0b74: mov edx, dword ptr [esi + 0x6c8] */ r_edx = R32((u32)(r_esi+0x6c8u));
    /* 004b0b7a: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b0b7d: jge 0x4b0b94 */ if ((fS==fO)) goto L_004b0b94;
L_004b0b7f:; BB(0x004b0b7f);
    /* 004b0b7f: lea eax, [edx + 5] */ r_eax = (u32)(r_edx+0x5u);
    /* 004b0b82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b84: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0b86: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 004b0b8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b8b: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0b90u); f_004b1e98();
    /* 004b0b90: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0b91: ret 8 */ FN_RET(0x004b0b74); r_esp += 12; return;
L_004b0b94:; BB(0x004b0b94);
    /* 004b0b94: lea eax, [edx - 5] */ r_eax = (u32)(r_edx+0xfffffffbu);
    /* 004b0b97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b0b99: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0b9b: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 004b0b9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b0ba0: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0ba5u); f_004b1e98();
    /* 004b0ba5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0ba6: ret 8 */ FN_RET(0x004b0b74); r_esp += 12; return;
}

void f_004b0ba9(void)
{
    FN_ENTER(0x004b0ba9);
    /* 004b0ba9: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0bad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0bae: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0bb0: call 0x4b5c98 */ r_esp -= 4; W32(r_esp, 0x4b0bb5u); f_004b5c98();
    /* 004b0bb5: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0ba9); r_esp += 12; return;
}

void f_004b0bba(void)
{
    FN_ENTER(0x004b0bba);
    /* 004b0bba: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0bbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0bbf: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0bc1: call 0x4b5d1c */ r_esp -= 4; W32(r_esp, 0x4b0bc6u); f_004b5d1c();
    /* 004b0bc6: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0bba); r_esp += 12; return;
}

void f_004b0bcb(void)
{
    FN_ENTER(0x004b0bcb);
    /* 004b0bcb: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0bcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0bd0: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0bd2: call 0x4b60c4 */ r_esp -= 4; W32(r_esp, 0x4b0bd7u); f_004b60c4();
    /* 004b0bd7: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0bcb); r_esp += 12; return;
}

void f_004b0bdc(void)
{
    FN_ENTER(0x004b0bdc);
    /* 004b0bdc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0bde: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004b0be2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0be3: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0be5: call 0x4b4684 */ r_esp -= 4; W32(r_esp, 0x4b0beau); f_004b4684();
    /* 004b0bea: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0bdc); r_esp += 12; return;
}

void f_004b0bef(void)
{
    FN_ENTER(0x004b0bef);
    /* 004b0bef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0bf1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004b0bf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0bf6: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0bf8: call 0x4b4684 */ r_esp -= 4; W32(r_esp, 0x4b0bfdu); f_004b4684();
    /* 004b0bfd: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0bef); r_esp += 12; return;
}

void f_004b0c02(void)
{
    FN_ENTER(0x004b0c02);
    /* 004b0c02: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0c06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0c07: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0c09: call 0x4b6300 */ r_esp -= 4; W32(r_esp, 0x4b0c0eu); f_004b6300();
    /* 004b0c0e: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0c02); r_esp += 12; return;
}

void f_004b0c13(void)
{
    FN_ENTER(0x004b0c13);
    /* 004b0c13: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0c17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0c18: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0c1a: call 0x4b6d08 */ r_esp -= 4; W32(r_esp, 0x4b0c1fu); f_004b6d08();
    /* 004b0c1f: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0c13); r_esp += 12; return;
}

void f_004b0c24(void)
{
    FN_ENTER(0x004b0c24);
    /* 004b0c24: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0c26: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004b0c2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0c2b: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0c2d: call 0x4b41ac */ r_esp -= 4; W32(r_esp, 0x4b0c32u); f_004b41ac();
    /* 004b0c32: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0c24); r_esp += 12; return;
}

void f_004b0c37(void)
{
    FN_ENTER(0x004b0c37);
    /* 004b0c37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0c39: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004b0c3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0c3e: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0c40: call 0x4b41ac */ r_esp -= 4; W32(r_esp, 0x4b0c45u); f_004b41ac();
    /* 004b0c45: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0c37); r_esp += 12; return;
}

void f_004b0c4a(void)
{
    FN_ENTER(0x004b0c4a);
    /* 004b0c4a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0c4c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004b0c50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0c51: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0c53: call 0x4b3c2c */ r_esp -= 4; W32(r_esp, 0x4b0c58u); f_004b3c2c();
    /* 004b0c58: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0c4a); r_esp += 12; return;
}

void f_004b0c5d(void)
{
    FN_ENTER(0x004b0c5d);
    /* 004b0c5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0c5f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004b0c63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0c64: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0c66: call 0x4b3c2c */ r_esp -= 4; W32(r_esp, 0x4b0c6bu); f_004b3c2c();
    /* 004b0c6b: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0c5d); r_esp += 12; return;
}

void f_004b0c70(void)
{
    FN_ENTER(0x004b0c70);
    /* 004b0c70: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0c72: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004b0c76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0c77: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0c79: call 0x4b30fc */ r_esp -= 4; W32(r_esp, 0x4b0c7eu); f_004b30fc();
    /* 004b0c7e: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0c70); r_esp += 12; return;
}

void f_004b0c83(void)
{
    FN_ENTER(0x004b0c83);
    /* 004b0c83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0c85: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004b0c89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0c8a: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0c8c: call 0x4b30fc */ r_esp -= 4; W32(r_esp, 0x4b0c91u); f_004b30fc();
    /* 004b0c91: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0c83); r_esp += 12; return;
}

void f_004b0c96(void)
{
    FN_ENTER(0x004b0c96);
    /* 004b0c96: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0c98: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004b0c9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0c9d: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0c9f: call 0x4b2cd0 */ r_esp -= 4; W32(r_esp, 0x4b0ca4u); f_004b2cd0();
    /* 004b0ca4: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0c96); r_esp += 12; return;
}

void f_004b0ca9(void)
{
    FN_ENTER(0x004b0ca9);
    /* 004b0ca9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0cab: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004b0caf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0cb0: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0cb2: call 0x4b2cd0 */ r_esp -= 4; W32(r_esp, 0x4b0cb7u); f_004b2cd0();
    /* 004b0cb7: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0ca9); r_esp += 12; return;
}

void f_004b0cbc(void)
{
    FN_ENTER(0x004b0cbc);
    /* 004b0cbc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0cbe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0cc0: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0cc2: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0cc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0cc7: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0cccu); f_004b1e98();
    /* 004b0ccc: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0cbc); r_esp += 12; return;
}

void f_004b0cd1(void)
{
    FN_ENTER(0x004b0cd1);
    /* 004b0cd1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0cd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0cd6: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0cd8: call 0x4b7040 */ r_esp -= 4; W32(r_esp, 0x4b0cddu); f_004b7040();
    /* 004b0cdd: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0cd1); r_esp += 12; return;
}

void f_004b0ce2(void)
{
    FN_ENTER(0x004b0ce2);
    /* 004b0ce2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0ce4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0ce6: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0ce8: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0cec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0ced: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0cf2u); f_004b1e98();
    /* 004b0cf2: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0ce2); r_esp += 12; return;
}

void f_004b0cf7(void)
{
    FN_ENTER(0x004b0cf7);
    /* 004b0cf7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0cf9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0cfb: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0cfd: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0d01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d02: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0d07u); f_004b1e98();
    /* 004b0d07: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0cf7); r_esp += 12; return;
}

void f_004b0d0c(void)
{
    FN_ENTER(0x004b0d0c);
    /* 004b0d0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d0e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d10: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0d12: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0d16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d17: call 0x4b0ee0 */ r_esp -= 4; W32(r_esp, 0x4b0d1cu); f_004b0ee0();
    /* 004b0d1c: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0d0c); r_esp += 12; return;
}

void f_004b0d21(void)
{
    FN_ENTER(0x004b0d21);
    /* 004b0d21: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d23: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d25: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0d27: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0d2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d2c: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0d31u); f_004b1e98();
    /* 004b0d31: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0d21); r_esp += 12; return;
}

void f_004b0d36(void)
{
    FN_ENTER(0x004b0d36);
    /* 004b0d36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d3a: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0d3c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0d40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d41: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0d46u); f_004b1e98();
    /* 004b0d46: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0d36); r_esp += 12; return;
}

void f_004b0d48(void)
{
    FN_ENTER(0x004b0d48);
    /* 004b0d48: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d4c: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0d4e: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0d52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d53: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0d58u); f_004b1e98();
    /* 004b0d58: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0d48); r_esp += 12; return;
}

void f_004b0d5a(void)
{
    FN_ENTER(0x004b0d5a);
    /* 004b0d5a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d5e: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0d60: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0d64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d65: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0d6au); f_004b1e98();
    /* 004b0d6a: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0d5a); r_esp += 12; return;
}

void f_004b0d6c(void)
{
    FN_ENTER(0x004b0d6c);
    /* 004b0d6c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d70: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0d72: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0d76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d77: call 0x4b0ee0 */ r_esp -= 4; W32(r_esp, 0x4b0d7cu); f_004b0ee0();
    /* 004b0d7c: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0d6c); r_esp += 12; return;
}

void f_004b0d7e(void)
{
    FN_ENTER(0x004b0d7e);
    /* 004b0d7e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d82: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0d84: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b0d88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d89: call 0x4b1e98 */ r_esp -= 4; W32(r_esp, 0x4b0d8eu); f_004b1e98();
    /* 004b0d8e: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0d7e); r_esp += 12; return;
}

void f_004b0d90(void)
{
    FN_ENTER(0x004b0d90);
    /* 004b0d90: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0d94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0d95: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0d97: call 0x4b7860 */ r_esp -= 4; W32(r_esp, 0x4b0d9cu); f_004b7860();
    /* 004b0d9c: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0d90); r_esp += 12; return;
}

void f_004b0d9e(void)
{
    FN_ENTER(0x004b0d9e);
    /* 004b0d9e: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0da2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0da3: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0da5: call 0x4b8034 */ r_esp -= 4; W32(r_esp, 0x4b0daau); f_004b8034();
    /* 004b0daa: jmp 0x4b0db8 */ goto L_004b0db8;
L_004b0db8:; BB(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0d9e); r_esp += 12; return;
}

void f_004b0dac(void)
{
    FN_ENTER(0x004b0dac);
    /* 004b0dac: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004b0db0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b0db1: mov ecx, esi */ r_ecx = r_esi;
    /* 004b0db3: call 0x4b9e54 */ r_esp -= 4; W32(r_esp, 0x4b0db8u); f_004b9e54();
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0dac); r_esp += 12; return;
}

void f_004b0db8(void)
{
    FN_ENTER(0x004b0db8);
    /* 004b0db8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0db9: ret 8 */ FN_RET(0x004b0db8); r_esp += 12; return;
}

void f_004b0ee0(void) /* sub_4B0EE0 */
{
    FN_ENTER(0x004b0ee0);
    /* 004b0ee0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b0ee1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b0ee2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b0ee3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b0ee6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b0ee8: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 004b0eec: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0eef: je 0x4b1bad */ if (fZ) goto L_004b1bad;
L_004b0ef5:; BB(0x004b0ef5);
    /* 004b0ef5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0ef8: je 0x4b1b57 */ if (fZ) goto L_004b1b57;
L_004b0efe:; BB(0x004b0efe);
    /* 004b0efe: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0f01: je 0x4b182e */ if (fZ) goto L_004b182e;
L_004b0f07:; BB(0x004b0f07);
    /* 004b0f07: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0f0a: je 0x4b152c */ if (fZ) goto L_004b152c;
L_004b0f10:; BB(0x004b0f10);
    /* 004b0f10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0f12: je 0x4b0f4a */ if (fZ) goto L_004b0f4a;
L_004b0f14:; BB(0x004b0f14);
    /* 004b0f14: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0f17: je 0x4b152c */ if (fZ) goto L_004b152c;
L_004b0f1d:; BB(0x004b0f1d);
    /* 004b0f1d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0f20: jne 0x4b152c */ if (!fZ) goto L_004b152c;
L_004b0f26:; BB(0x004b0f26);
    /* 004b0f26: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b0f2c: mov edx, dword ptr [ebx + 0x630] */ r_edx = R32((u32)(r_ebx+0x630u));
    /* 004b0f32: mov dword ptr [ebx + 0x6c8], eax */ W32((u32)(r_ebx+0x6c8u), r_eax);
    /* 004b0f38: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004b0f3b: mov dword ptr [ebx + 0x630], edx */ W32((u32)(r_ebx+0x630u), r_edx);
    /* 004b0f41: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b0f44: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b0f45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b0f46: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0f47: ret 0xc */ FN_RET(0x004b0ee0); r_esp += 16; return;
L_004b0f4a:; BB(0x004b0f4a);
    /* 004b0f4a: mov eax, dword ptr [ebx + 0x730] */ r_eax = R32((u32)(r_ebx+0x730u));
    /* 004b0f50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0f52: jne 0x4b0f7c */ if (!fZ) goto L_004b0f7c;
L_004b0f54:; BB(0x004b0f54);
    /* 004b0f54: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b0f56: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b0f5bu); f_007aa094();
    /* 004b0f5b: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 004b0f61: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004b0f63: jne 0x4b152c */ if (!fZ) goto L_004b152c;
L_004b0f69:; BB(0x004b0f69);
    /* 004b0f69: mov dword ptr [ebx + 0x730], 1 */ W32((u32)(r_ebx+0x730u), 0x1u);
    /* 004b0f73: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b0f76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b0f77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b0f78: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0f79: ret 0xc */ FN_RET(0x004b0ee0); r_esp += 16; return;
L_004b0f7c:; BB(0x004b0f7c);
    /* 004b0f7c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0f7f: jne 0x4b152c */ if (!fZ) goto L_004b152c;
L_004b0f85:; BB(0x004b0f85);
    /* 004b0f85: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b0f87: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b0f8cu); f_007aa094();
    /* 004b0f8c: mov eax, dword ptr [ebx + 0x738] */ r_eax = R32((u32)(r_ebx+0x738u));
    /* 004b0f92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0f94: je 0x4b17b4 */ if (fZ) goto L_004b17b4;
L_004b0f9a:; BB(0x004b0f9a);
    /* 004b0f9a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0f9d: je 0x4b171b */ if (fZ) goto L_004b171b;
L_004b0fa3:; BB(0x004b0fa3);
    /* 004b0fa3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0fa6: je 0x4b16a4 */ if (fZ) goto L_004b16a4;
L_004b0fac:; BB(0x004b0fac);
    /* 004b0fac: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0faf: je 0x4b1026 */ if (fZ) goto L_004b1026;
L_004b0fb1:; BB(0x004b0fb1);
    /* 004b0fb1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0fb4: jne 0x4b0ff9 */ if (!fZ) goto L_004b0ff9;
L_004b0fb6:; BB(0x004b0fb6);
    /* 004b0fb6: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004b0fbc: fcomp dword ptr [0x906fb8] */ fx_compare(ST(0), R_F32((u32)(0x906fb8u))); FPOP();
    /* 004b0fc2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b0fc4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b0fc5: jb 0x4b10ba */ if (fC) goto L_004b10ba;
L_004b0fcb:; BB(0x004b0fcb);
    /* 004b0fcb: fld dword ptr [ebx + 0x74c] */ FPUSH(R_F32((u32)(r_ebx+0x74cu)));
    /* 004b0fd1: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 004b0fd4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b0fd6: fsubr dword ptr [0x906fb4] */ ST(0) = R_F32((u32)(0x906fb4u)) - ST(0);
    /* 004b0fdc: mov dword ptr [ebx + 0x738], 5 */ W32((u32)(r_ebx+0x738u), 0x5u);
    /* 004b0fe6: fdiv dword ptr [0xa47a68] */ ST(0) = ST(0) / R_F32((u32)(0xa47a68u));
    /* 004b0fec: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b0fee: fstp dword ptr [ebx + 0x75c] */ W_F32((u32)(r_ebx+0x75cu), ST(0)); FPOP();
    /* 004b0ff4: jmp 0x4b10ba */ goto L_004b10ba;
L_004b0ff9:; BB(0x004b0ff9);
    /* 004b0ff9: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0ffc: jne 0x4b10ba */ if (!fZ) goto L_004b10ba;
L_004b1002:; BB(0x004b1002);
    /* 004b1002: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004b1008: fcomp dword ptr [0x906fbc] */ fx_compare(ST(0), R_F32((u32)(0x906fbcu))); FPOP();
    /* 004b100e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b1010: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b1011: jb 0x4b10ba */ if (fC) goto L_004b10ba;
L_004b1017:; BB(0x004b1017);
    /* 004b1017: mov dword ptr [ebx + 0x738], 6 */ W32((u32)(r_ebx+0x738u), 0x6u);
    /* 004b1021: jmp 0x4b10ba */ goto L_004b10ba;
L_004b1026:; BB(0x004b1026);
    /* 004b1026: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004b102c: fcomp dword ptr [0x906fb0] */ fx_compare(ST(0), R_F32((u32)(0x906fb0u))); FPOP();
    /* 004b1032: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b1034: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b1035: jb 0x4b10ba */ if (fC) goto L_004b10ba;
L_004b103b:; BB(0x004b103b);
    /* 004b103b: fld dword ptr [0x907000] */ FPUSH(R_F32((u32)(0x907000u)));
    /* 004b1041: fld dword ptr [0x906fac] */ FPUSH(R_F32((u32)(0x906facu)));
    /* 004b1047: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 004b104a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004b104b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b104e: mov dword ptr [ebx + 0x738], 4 */ W32((u32)(r_ebx+0x738u), 0x4u);
    /* 004b1058: fdiv dword ptr [0xa47a6c] */ ST(0) = ST(0) / R_F32((u32)(0xa47a6cu));
    /* 004b105e: fmul dword ptr [ebx + 0x74c] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x74cu));
    /* 004b1064: fstp dword ptr [ebx + 0x75c] */ W_F32((u32)(r_ebx+0x75cu), ST(0)); FPOP();
    /* 004b106a: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4b106fu); f_0082e900();
    /* 004b106f: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b1072: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004b1076: lea ecx, [ebx + 0x678] */ r_ecx = (u32)(r_ebx+0x678u);
    /* 004b107c: mov dword ptr [esp], 0x40e00000 */ W32((u32)(r_esp), 0x40e00000u);
    /* 004b1083: mov dword ptr [esp + 8], 0x3e4ccccd */ W32((u32)(r_esp+0x8u), 0x3e4ccccdu);
    /* 004b108b: mov dword ptr [esp + 0xc], 0x3d4ccccd */ W32((u32)(r_esp+0xcu), 0x3d4ccccdu);
    /* 004b1093: call 0x434ac4 */ r_esp -= 4; W32(r_esp, 0x4b1098u); f_00434ac4();
    /* 004b1098: fld dword ptr [ebx + 0x758] */ FPUSH(R_F32((u32)(r_ebx+0x758u)));
    /* 004b109e: fmul dword ptr [0x906ff0] */ ST(0) = ST(0) * R_F32((u32)(0x906ff0u));
    /* 004b10a4: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 004b10a7: fstp dword ptr [ebx + 0x688] */ W_F32((u32)(r_ebx+0x688u), ST(0)); FPOP();
    /* 004b10ad: mov dword ptr [ebx + 0x758], eax */ W32((u32)(r_ebx+0x758u), r_eax);
    /* 004b10b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b10b5: call 0x4b60a0 */ r_esp -= 4; W32(r_esp, 0x4b10bau); f_004b60a0();
L_004b10ba:; BB(0x004b10ba);
    /* 004b10ba: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 004b10c1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b10c4: je 0x4b1128 */ if (fZ) goto L_004b1128;
L_004b10c6:; BB(0x004b10c6);
    /* 004b10c6: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b10cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b10cd: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b10d2u); f_007aaa30();
    /* 004b10d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b10d4: jne 0x4b1110 */ if (!fZ) goto L_004b1110;
L_004b10d6:; BB(0x004b10d6);
    /* 004b10d6: push 0x42240000 */ { u32 v = 0x42240000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b10db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b10dd: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b10e2u); f_007aaa30();
    /* 004b10e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b10e4: jne 0x4b1110 */ if (!fZ) goto L_004b1110;
L_004b10e6:; BB(0x004b10e6);
    /* 004b10e6: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b10eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b10ed: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b10f2u); f_007aaa30();
    /* 004b10f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b10f4: je 0x4b1128 */ if (fZ) goto L_004b1128;
L_004b10f6:; BB(0x004b10f6);
    /* 004b10f6: lea edx, [ebx + 0x514] */ r_edx = (u32)(r_ebx+0x514u);
    /* 004b10fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b10fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b10ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b1100: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b1101: push 0x3ed */ { u32 v = 0x3edu; r_esp -= 4; W32(r_esp, v); }
    /* 004b1106: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b110bu); f_00814298();
    /* 004b110b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b110e: jmp 0x4b1128 */ goto L_004b1128;
L_004b1110:; BB(0x004b1110);
    /* 004b1110: lea edx, [ebx + 0x514] */ r_edx = (u32)(r_ebx+0x514u);
    /* 004b1116: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b1118: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b1119: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b111a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b111b: push 0x3ec */ { u32 v = 0x3ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004b1120: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b1125u); f_00814298();
    /* 004b1125: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b1128:; BB(0x004b1128);
    /* 004b1128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b112a: call 0x4b1cdc */ r_esp -= 4; W32(r_esp, 0x4b112fu); f_004b1cdc();
    /* 004b112f: mov edx, dword ptr [ebx + 0x73c] */ r_edx = R32((u32)(r_ebx+0x73cu));
    /* 004b1135: mov ebp, dword ptr [ebx + 0x738] */ r_ebp = R32((u32)(r_ebx+0x738u));
    /* 004b113b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b113e: mov dword ptr [ebx + 0x73c], edx */ W32((u32)(r_ebx+0x73cu), r_edx);
    /* 004b1144: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1147: je 0x4b1439 */ if (fZ) goto L_004b1439;
L_004b114d:; BB(0x004b114d);
    /* 004b114d: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004b1153: fcom dword ptr [0x906f98] */ fx_compare(ST(0), R_F32((u32)(0x906f98u))); 
    /* 004b1159: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b115b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b115c: jb 0x4b138d */ if (fC) goto L_004b138d;
L_004b1162:; BB(0x004b1162);
    /* 004b1162: fcom dword ptr [0x906f94] */ fx_compare(ST(0), R_F32((u32)(0x906f94u))); 
    /* 004b1168: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b116a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b116b: ja 0x4b138d */ if ((!fC&&!fZ)) goto L_004b138d;
L_004b1171:; BB(0x004b1171);
    /* 004b1171: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b1173: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b1176: jl 0x4b1439 */ if ((fS!=fO)) goto L_004b1439;
L_004b117c:; BB(0x004b117c);
    /* 004b117c: fld dword ptr [0x906fc8] */ FPUSH(R_F32((u32)(0x906fc8u)));
    /* 004b1182: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004b1185: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 004b1188: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 004b118b: mov ebp, dword ptr [ebx + 0x40] */ r_ebp = R32((u32)(r_ebx+0x40u));
    /* 004b118e: fld dword ptr [ebx + 0x53c] */ FPUSH(R_F32((u32)(r_ebx+0x53cu)));
    /* 004b1194: mov edx, dword ptr [ebx + 0x53c] */ r_edx = R32((u32)(r_ebx+0x53cu));
    /* 004b119a: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004b119c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b119e: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b11a0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b11a2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b11a3: mov dword ptr [ebx + 0x73c], 0 */ W32((u32)(r_ebx+0x73cu), 0x0u);
    /* 004b11ad: jb 0x4b15e5 */ if (fC) goto L_004b15e5;
L_004b11b3:; BB(0x004b11b3);
    /* 004b11b3: mov ecx, dword ptr [ebx + 0x538] */ r_ecx = R32((u32)(r_ebx+0x538u));
    /* 004b11b9: mov esi, dword ptr [ebx + 0x540] */ r_esi = R32((u32)(r_ebx+0x540u));
    /* 004b11bf: fld dword ptr [ebx + 0x548] */ FPUSH(R_F32((u32)(r_ebx+0x548u)));
    /* 004b11c5: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004b11c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b11c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b11cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b11cd: mov ebp, dword ptr [ebx + 0x548] */ r_ebp = R32((u32)(r_ebx+0x548u));
    /* 004b11d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b11d4: jb 0x4b15d1 */ if (fC) goto L_004b15d1;
L_004b11da:; BB(0x004b11da);
    /* 004b11da: mov ecx, dword ptr [ebx + 0x544] */ r_ecx = R32((u32)(r_ebx+0x544u));
    /* 004b11e0: mov esi, dword ptr [ebx + 0x54c] */ r_esi = R32((u32)(r_ebx+0x54cu));
    /* 004b11e6: fld dword ptr [ebx + 0x554] */ FPUSH(R_F32((u32)(r_ebx+0x554u)));
    /* 004b11ec: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004b11ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b11f0: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b11f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b11f4: mov edx, dword ptr [ebx + 0x554] */ r_edx = R32((u32)(r_ebx+0x554u));
    /* 004b11fa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b11fb: jb 0x4b15bd */ if (fC) goto L_004b15bd;
L_004b1201:; BB(0x004b1201);
    /* 004b1201: mov ecx, dword ptr [ebx + 0x550] */ r_ecx = R32((u32)(r_ebx+0x550u));
    /* 004b1207: mov esi, dword ptr [ebx + 0x558] */ r_esi = R32((u32)(r_ebx+0x558u));
    /* 004b120d: fld dword ptr [ebx + 0x560] */ FPUSH(R_F32((u32)(r_ebx+0x560u)));
    /* 004b1213: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004b1215: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b1217: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b1219: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b121b: mov ebp, dword ptr [ebx + 0x560] */ r_ebp = R32((u32)(r_ebx+0x560u));
    /* 004b1221: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b1222: jb 0x4b15a9 */ if (fC) goto L_004b15a9;
L_004b1228:; BB(0x004b1228);
    /* 004b1228: mov ecx, dword ptr [ebx + 0x55c] */ r_ecx = R32((u32)(r_ebx+0x55cu));
    /* 004b122e: mov esi, dword ptr [ebx + 0x564] */ r_esi = R32((u32)(r_ebx+0x564u));
    /* 004b1234: fld dword ptr [ebx + 0x56c] */ FPUSH(R_F32((u32)(r_ebx+0x56cu)));
    /* 004b123a: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004b123c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b123e: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b1240: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b1242: mov edx, dword ptr [ebx + 0x56c] */ r_edx = R32((u32)(r_ebx+0x56cu));
    /* 004b1248: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b1249: jb 0x4b1595 */ if (fC) goto L_004b1595;
L_004b124f:; BB(0x004b124f);
    /* 004b124f: mov ecx, dword ptr [ebx + 0x568] */ r_ecx = R32((u32)(r_ebx+0x568u));
    /* 004b1255: mov esi, dword ptr [ebx + 0x570] */ r_esi = R32((u32)(r_ebx+0x570u));
    /* 004b125b: fld dword ptr [ebx + 0x578] */ FPUSH(R_F32((u32)(r_ebx+0x578u)));
    /* 004b1261: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004b1263: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b1265: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b1267: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b1269: mov ebp, dword ptr [ebx + 0x578] */ r_ebp = R32((u32)(r_ebx+0x578u));
    /* 004b126f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b1270: jb 0x4b1581 */ if (fC) goto L_004b1581;
L_004b1276:; BB(0x004b1276);
    /* 004b1276: mov ecx, dword ptr [ebx + 0x574] */ r_ecx = R32((u32)(r_ebx+0x574u));
    /* 004b127c: mov esi, dword ptr [ebx + 0x57c] */ r_esi = R32((u32)(r_ebx+0x57cu));
    /* 004b1282: fld dword ptr [ebx + 0x584] */ FPUSH(R_F32((u32)(r_ebx+0x584u)));
    /* 004b1288: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004b128a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b128c: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b128e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b1290: mov edx, dword ptr [ebx + 0x584] */ r_edx = R32((u32)(r_ebx+0x584u));
    /* 004b1296: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b1297: jb 0x4b156d */ if (fC) goto L_004b156d;
L_004b129d:; BB(0x004b129d);
    /* 004b129d: mov ecx, dword ptr [ebx + 0x580] */ r_ecx = R32((u32)(r_ebx+0x580u));
    /* 004b12a3: mov esi, dword ptr [ebx + 0x588] */ r_esi = R32((u32)(r_ebx+0x588u));
    /* 004b12a9: fld dword ptr [ebx + 0x590] */ FPUSH(R_F32((u32)(r_ebx+0x590u)));
    /* 004b12af: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004b12b1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b12b3: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b12b5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b12b7: mov ebp, dword ptr [ebx + 0x590] */ r_ebp = R32((u32)(r_ebx+0x590u));
    /* 004b12bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b12be: jb 0x4b1559 */ if (fC) goto L_004b1559;
L_004b12c4:; BB(0x004b12c4);
    /* 004b12c4: mov ecx, dword ptr [ebx + 0x58c] */ r_ecx = R32((u32)(r_ebx+0x58cu));
    /* 004b12ca: mov esi, dword ptr [ebx + 0x594] */ r_esi = R32((u32)(r_ebx+0x594u));
    /* 004b12d0: fld dword ptr [ebx + 0x59c] */ FPUSH(R_F32((u32)(r_ebx+0x59cu)));
    /* 004b12d6: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004b12d8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b12da: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004b12dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b12de: mov edx, dword ptr [ebx + 0x59c] */ r_edx = R32((u32)(r_ebx+0x59cu));
    /* 004b12e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b12e5: jb 0x4b1545 */ if (fC) goto L_004b1545;
L_004b12eb:; BB(0x004b12eb);
    /* 004b12eb: mov ecx, dword ptr [ebx + 0x598] */ r_ecx = R32((u32)(r_ebx+0x598u));
    /* 004b12f1: mov esi, dword ptr [ebx + 0x5a0] */ r_esi = R32((u32)(r_ebx+0x5a0u));
    /* 004b12f7: fld dword ptr [ebx + 0x5a8] */ FPUSH(R_F32((u32)(r_ebx+0x5a8u)));
    /* 004b12fd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b12ff: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004b1301: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b1303: mov ebp, dword ptr [ebx + 0x5a8] */ r_ebp = R32((u32)(r_ebx+0x5a8u));
    /* 004b1309: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b130a: jb 0x4b1535 */ if (fC) goto L_004b1535;
L_004b1310:; BB(0x004b1310);
    /* 004b1310: mov eax, dword ptr [ebx + 0x5a4] */ r_eax = R32((u32)(r_ebx+0x5a4u));
    /* 004b1316: mov edx, dword ptr [ebx + 0x5ac] */ r_edx = R32((u32)(r_ebx+0x5acu));
    /* 004b131c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004b131f: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 004b1323: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
L_004b1327:; BB(0x004b1327);
    /* 004b1327: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1329: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4b132eu); f_007751b0();
    /* 004b132e: fld dword ptr [0x906f8c] */ FPUSH(R_F32((u32)(0x906f8cu)));
    /* 004b1334: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b1336: fadd dword ptr [0x906f90] */ ST(0) = ST(0) + R_F32((u32)(0x906f90u));
    /* 004b133c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b133e: fchs  */ ST(0) = -ST(0);
    /* 004b1340: fmul dword ptr [ebx + 0x74c] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x74cu));
    /* 004b1346: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 004b1349: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b134c: mov dword ptr [esp + 4], 0xc0a00000 */ W32((u32)(r_esp+0x4u), 0xc0a00000u);
    /* 004b1354: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b1359u); f_00520bf4();
    /* 004b1359: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004b135d: fadd dword ptr [0x906f88] */ ST(0) = ST(0) + R_F32((u32)(0x906f88u));
    /* 004b1363: fld dword ptr [0x906f84] */ FPUSH(R_F32((u32)(0x906f84u)));
    /* 004b1369: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004b136b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b136d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004b1371: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004b1374: push 0x201 */ { u32 v = 0x201u; r_esp -= 4; W32(r_esp, v); }
    /* 004b1379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b137a: call 0x4be7c0 */ r_esp -= 4; W32(r_esp, 0x4b137fu); f_004be7c0();
    /* 004b137f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b1382: mov ebp, dword ptr [ebx + 0x738] */ r_ebp = R32((u32)(r_ebx+0x738u));
    /* 004b1388: jmp 0x4b1439 */ goto L_004b1439;
L_004b138d:; BB(0x004b138d);
    /* 004b138d: fcom dword ptr [0x906f80] */ fx_compare(ST(0), R_F32((u32)(0x906f80u))); 
    /* 004b1393: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b1395: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b1396: jb 0x4b1437 */ if (fC) goto L_004b1437;
L_004b139c:; BB(0x004b139c);
    /* 004b139c: fcomp dword ptr [0x906f7c] */ fx_compare(ST(0), R_F32((u32)(0x906f7cu))); FPOP();
    /* 004b13a2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b13a4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b13a5: ja 0x4b1439 */ if ((!fC&&!fZ)) goto L_004b1439;
L_004b13ab:; BB(0x004b13ab);
    /* 004b13ab: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b13ae: jl 0x4b1439 */ if ((fS!=fO)) goto L_004b1439;
L_004b13b4:; BB(0x004b13b4);
    /* 004b13b4: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 004b13b7: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004b13ba: mov ebp, dword ptr [ebx + 0x40] */ r_ebp = R32((u32)(r_ebx+0x40u));
    /* 004b13bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b13bf: mov dword ptr [ebx + 0x73c], 0 */ W32((u32)(r_ebx+0x73cu), 0x0u);
    /* 004b13c9: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004b13cd: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004b13d1: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 004b13d5: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4b13dau); f_007751b0();
    /* 004b13da: fld dword ptr [0x906f74] */ FPUSH(R_F32((u32)(0x906f74u)));
    /* 004b13e0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b13e2: fadd dword ptr [0x906f78] */ ST(0) = ST(0) + R_F32((u32)(0x906f78u));
    /* 004b13e8: fmul dword ptr [ebx + 0x74c] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x74cu));
    /* 004b13ee: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 004b13f2: mov dword ptr [esp + 0x10], 0xc0a00000 */ W32((u32)(r_esp+0x10u), 0xc0a00000u);
    /* 004b13fa: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004b13fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1400: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b1405u); f_00520bf4();
    /* 004b1405: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004b1409: fadd dword ptr [0x906f70] */ ST(0) = ST(0) + R_F32((u32)(0x906f70u));
    /* 004b140f: fld dword ptr [0x906f6c] */ FPUSH(R_F32((u32)(0x906f6cu)));
    /* 004b1415: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004b1417: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b1419: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004b141d: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004b1421: push 0x201 */ { u32 v = 0x201u; r_esp -= 4; W32(r_esp, v); }
    /* 004b1426: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b1427: call 0x4be7c0 */ r_esp -= 4; W32(r_esp, 0x4b142cu); f_004be7c0();
    /* 004b142c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b142f: mov ebp, dword ptr [ebx + 0x738] */ r_ebp = R32((u32)(r_ebx+0x738u));
    /* 004b1435: jmp 0x4b1439 */ goto L_004b1439;
L_004b1437:; BB(0x004b1437);
    /* 004b1437: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004b1439:; BB(0x004b1439);
    /* 004b1439: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b143b: je 0x4b167f */ if (fZ) goto L_004b167f;
L_004b1441:; BB(0x004b1441);
    /* 004b1441: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1444: je 0x4b165c */ if (fZ) goto L_004b165c;
L_004b144a:; BB(0x004b144a);
    /* 004b144a: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b144d: je 0x4b17f0 */ if (fZ) goto L_004b17f0;
L_004b1453:; BB(0x004b1453);
    /* 004b1453: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1456: je 0x4b15f9 */ if (fZ) goto L_004b15f9;
L_004b145c:; BB(0x004b145c);
    /* 004b145c: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b145f: je 0x4b14ff */ if (fZ) goto L_004b14ff;
L_004b1465:; BB(0x004b1465);
    /* 004b1465: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1468: jne 0x4b14a0 */ if (!fZ) goto L_004b14a0;
L_004b146a:; BB(0x004b146a);
    /* 004b146a: fld dword ptr [ebx + 0x75c] */ FPUSH(R_F32((u32)(r_ebx+0x75cu)));
    /* 004b1470: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 004b1473: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 004b1476: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1478: call 0x4b1c94 */ r_esp -= 4; W32(r_esp, 0x4b147du); f_004b1c94();
    /* 004b147d: lea ecx, [ebx + 0x678] */ r_ecx = (u32)(r_ebx+0x678u);
    /* 004b1483: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b1488u); f_0042cdc0();
    /* 004b1488: fld dword ptr [ebx + 0x758] */ FPUSH(R_F32((u32)(r_ebx+0x758u)));
    /* 004b148e: fsub dword ptr [ebx + 0x690] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x690u));
    /* 004b1494: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004b1497: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b149a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b149b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b149c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b149d: ret 0xc */ FN_RET(0x004b0ee0); r_esp += 16; return;
L_004b14a0:; BB(0x004b14a0);
    /* 004b14a0: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b14a3: jne 0x4b152c */ if (!fZ) goto L_004b152c;
L_004b14a9:; BB(0x004b14a9);
    /* 004b14a9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b14ab: call 0x4b1c94 */ r_esp -= 4; W32(r_esp, 0x4b14b0u); f_004b1c94();
    /* 004b14b0: lea ecx, [ebx + 0x678] */ r_ecx = (u32)(r_ebx+0x678u);
    /* 004b14b6: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b14bbu); f_0042cdc0();
    /* 004b14bb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b14be: jne 0x4b14ca */ if (!fZ) goto L_004b14ca;
L_004b14c0:; BB(0x004b14c0);
    /* 004b14c0: mov dword ptr [ebx + 0x730], 2 */ W32((u32)(r_ebx+0x730u), 0x2u);
L_004b14ca:; BB(0x004b14ca);
    /* 004b14ca: fld dword ptr [ebx + 0x758] */ FPUSH(R_F32((u32)(r_ebx+0x758u)));
    /* 004b14d0: fsub dword ptr [ebx + 0x690] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x690u));
    /* 004b14d6: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 004b14dd: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004b14e0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b14e3: jne 0x4b152c */ if (!fZ) goto L_004b152c;
L_004b14e5:; BB(0x004b14e5);
    /* 004b14e5: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b14eb: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b14f0: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b14f6: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b14f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b14fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b14fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b14fc: ret 0xc */ FN_RET(0x004b0ee0); r_esp += 16; return;
L_004b14ff:; BB(0x004b14ff);
    /* 004b14ff: fld dword ptr [ebx + 0x75c] */ FPUSH(R_F32((u32)(r_ebx+0x75cu)));
    /* 004b1505: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 004b1508: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 004b150b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b150d: call 0x4b1c94 */ r_esp -= 4; W32(r_esp, 0x4b1512u); f_004b1c94();
    /* 004b1512: lea ecx, [ebx + 0x678] */ r_ecx = (u32)(r_ebx+0x678u);
    /* 004b1518: call 0x42cdc0 */ r_esp -= 4; W32(r_esp, 0x4b151du); f_0042cdc0();
    /* 004b151d: fld dword ptr [ebx + 0x758] */ FPUSH(R_F32((u32)(r_ebx+0x758u)));
    /* 004b1523: fsub dword ptr [ebx + 0x690] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x690u));
    /* 004b1529: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
L_004b152c:; BB(0x004b152c);
    /* 004b152c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b152f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1532: ret 0xc */ FN_RET(0x004b0ee0); r_esp += 16; return;
L_004b1535:; BB(0x004b1535);
    /* 004b1535: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004b1539: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004b153d: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004b1540: jmp 0x4b1327 */ goto L_004b1327;
L_004b1545:; BB(0x004b1545);
    /* 004b1545: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004b1547: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b1549: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004b154d: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 004b1551: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004b1554: jmp 0x4b1327 */ goto L_004b1327;
L_004b1559:; BB(0x004b1559);
    /* 004b1559: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004b155b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b155d: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004b1561: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004b1565: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004b1568: jmp 0x4b1327 */ goto L_004b1327;
L_004b156d:; BB(0x004b156d);
    /* 004b156d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004b156f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b1571: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004b1575: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 004b1579: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004b157c: jmp 0x4b1327 */ goto L_004b1327;
L_004b1581:; BB(0x004b1581);
    /* 004b1581: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004b1583: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b1585: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004b1589: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004b158d: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004b1590: jmp 0x4b1327 */ goto L_004b1327;
L_004b1595:; BB(0x004b1595);
    /* 004b1595: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004b1597: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b1599: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004b159d: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 004b15a1: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004b15a4: jmp 0x4b1327 */ goto L_004b1327;
L_004b15a9:; BB(0x004b15a9);
    /* 004b15a9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004b15ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b15ad: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004b15b1: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004b15b5: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004b15b8: jmp 0x4b1327 */ goto L_004b1327;
L_004b15bd:; BB(0x004b15bd);
    /* 004b15bd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004b15bf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b15c1: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004b15c5: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 004b15c9: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004b15cc: jmp 0x4b1327 */ goto L_004b1327;
L_004b15d1:; BB(0x004b15d1);
    /* 004b15d1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004b15d3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b15d5: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004b15d9: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004b15dd: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004b15e0: jmp 0x4b1327 */ goto L_004b1327;
L_004b15e5:; BB(0x004b15e5);
    /* 004b15e5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004b15e7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004b15e9: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 004b15ed: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 004b15f1: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004b15f4: jmp 0x4b1327 */ goto L_004b1327;
L_004b15f9:; BB(0x004b15f9);
    /* 004b15f9: fld dword ptr [0x906f68] */ FPUSH(R_F32((u32)(0x906f68u)));
    /* 004b15ff: fsub dword ptr [0xa47a7c] */ ST(0) = ST(0) - R_F32((u32)(0xa47a7cu));
    /* 004b1605: fsubr dword ptr [ebx + 0xc0] */ ST(0) = R_F32((u32)(r_ebx+0xc0u)) - ST(0);
    /* 004b160b: fld dword ptr [ebx + 0x75c] */ FPUSH(R_F32((u32)(r_ebx+0x75cu)));
    /* 004b1611: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 004b1614: fld dword ptr [ebx + 0x750] */ FPUSH(R_F32((u32)(r_ebx+0x750u)));
    /* 004b161a: fadd dword ptr [ebx + 0x6f8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x6f8u));
    /* 004b1620: fld dword ptr [ebx + 0x750] */ FPUSH(R_F32((u32)(r_ebx+0x750u)));
    /* 004b1626: fsub dword ptr [ebx + 0x754] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x754u));
    /* 004b162c: fld dword ptr [ebx + 0x758] */ FPUSH(R_F32((u32)(r_ebx+0x758u)));
    /* 004b1632: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 004b1635: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004b1637: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 004b163a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004b163c: fstp dword ptr [ebx + 0xc0] */ W_F32((u32)(r_ebx+0xc0u), ST(0)); FPOP();
    /* 004b1642: fstp dword ptr [ebx + 0x6f8] */ W_F32((u32)(r_ebx+0x6f8u), ST(0)); FPOP();
    /* 004b1648: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b164a: fstp dword ptr [ebx + 0x750] */ W_F32((u32)(r_ebx+0x750u), ST(0)); FPOP();
    /* 004b1650: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004b1653: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b1656: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1657: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1658: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1659: ret 0xc */ FN_RET(0x004b0ee0); r_esp += 16; return;
L_004b165c:; BB(0x004b165c);
    /* 004b165c: fld dword ptr [ebx + 0x75c] */ FPUSH(R_F32((u32)(r_ebx+0x75cu)));
    /* 004b1662: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 004b1665: fld dword ptr [ebx + 0x758] */ FPUSH(R_F32((u32)(r_ebx+0x758u)));
    /* 004b166b: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 004b166e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b1670: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 004b1673: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004b1676: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b1679: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b167a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b167b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b167c: ret 0xc */ FN_RET(0x004b0ee0); r_esp += 16; return;
L_004b167f:; BB(0x004b167f);
    /* 004b167f: fld dword ptr [ebx + 0x758] */ FPUSH(R_F32((u32)(r_ebx+0x758u)));
    /* 004b1685: fsub dword ptr [0x906f64] */ ST(0) = ST(0) - R_F32((u32)(0x906f64u));
    /* 004b168b: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004b168e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b1690: fst dword ptr [ebx + 0x758] */ W_F32((u32)(r_ebx+0x758u), ST(0));
    /* 004b1696: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b1698: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004b169b: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b169e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b169f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b16a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b16a1: ret 0xc */ FN_RET(0x004b0ee0); r_esp += 16; return;
L_004b16a4:; BB(0x004b16a4);
    /* 004b16a4: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004b16aa: fcomp dword ptr [0x906fa8] */ fx_compare(ST(0), R_F32((u32)(0x906fa8u))); FPOP();
    /* 004b16b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b16b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b16b3: jb 0x4b10ba */ if (fC) goto L_004b10ba;
L_004b16b9:; BB(0x004b16b9);
    /* 004b16b9: mov dword ptr [ebx + 0x738], 3 */ W32((u32)(r_ebx+0x738u), 0x3u);
    /* 004b16c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b16c5: call 0x4b1de4 */ r_esp -= 4; W32(r_esp, 0x4b16cau); f_004b1de4();
    /* 004b16ca: fld dword ptr [0x906fe8] */ FPUSH(R_F32((u32)(0x906fe8u)));
    /* 004b16d0: fld dword ptr [ebx + 0x750] */ FPUSH(R_F32((u32)(r_ebx+0x750u)));
    /* 004b16d6: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 004b16d8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b16da: fdiv dword ptr [0x906fec] */ ST(0) = ST(0) / R_F32((u32)(0x906fecu));
    /* 004b16e0: fst dword ptr [ebx + 0x750] */ W_F32((u32)(r_ebx+0x750u), ST(0));
    /* 004b16e6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b16e8: fdiv dword ptr [0xa47a70] */ ST(0) = ST(0) / R_F32((u32)(0xa47a70u));
    /* 004b16ee: fstp dword ptr [ebx + 0x754] */ W_F32((u32)(r_ebx+0x754u), ST(0)); FPOP();
    /* 004b16f4: fld dword ptr [0x906fe4] */ FPUSH(R_F32((u32)(0x906fe4u)));
    /* 004b16fa: fdiv dword ptr [0xa47a70] */ ST(0) = ST(0) / R_F32((u32)(0xa47a70u));
    /* 004b1700: fmul dword ptr [ebx + 0x74c] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x74cu));
    /* 004b1706: fstp dword ptr [ebx + 0x75c] */ W_F32((u32)(r_ebx+0x75cu), ST(0)); FPOP();
    /* 004b170c: mov dword ptr [ebx + 0x73c], 0 */ W32((u32)(r_ebx+0x73cu), 0x0u);
    /* 004b1716: jmp 0x4b10ba */ goto L_004b10ba;
L_004b171b:; BB(0x004b171b);
    /* 004b171b: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004b1721: fcomp dword ptr [0x906fa4] */ fx_compare(ST(0), R_F32((u32)(0x906fa4u))); FPOP();
    /* 004b1727: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b1729: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b172a: jb 0x4b10ba */ if (fC) goto L_004b10ba;
L_004b1730:; BB(0x004b1730);
    /* 004b1730: fld dword ptr [0x906fe0] */ FPUSH(R_F32((u32)(0x906fe0u)));
    /* 004b1736: fld dword ptr [0x906fdc] */ FPUSH(R_F32((u32)(0x906fdcu)));
    /* 004b173c: fld dword ptr [ebx + 0x758] */ FPUSH(R_F32((u32)(r_ebx+0x758u)));
    /* 004b1742: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004b1744: fchs  */ ST(0) = -ST(0);
    /* 004b1746: mov dword ptr [ebx + 0x738], 2 */ W32((u32)(r_ebx+0x738u), 0x2u);
    /* 004b1750: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004b1752: fdiv dword ptr [0xa47a74] */ ST(0) = ST(0) / R_F32((u32)(0xa47a74u));
    /* 004b1758: fmul dword ptr [ebx + 0x74c] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x74cu));
    /* 004b175e: fstp dword ptr [ebx + 0x75c] */ W_F32((u32)(r_ebx+0x75cu), ST(0)); FPOP();
    /* 004b1764: push 0x20f */ { u32 v = 0x20fu; r_esp -= 4; W32(r_esp, v); }
    /* 004b1769: lea eax, [ebx + 0x7bc] */ r_eax = (u32)(r_ebx+0x7bcu);
    /* 004b176f: fld dword ptr [0xa47a70] */ FPUSH(R_F32((u32)(0xa47a70u)));
    /* 004b1775: fld dword ptr [0xa47a74] */ FPUSH(R_F32((u32)(0xa47a74u)));
    /* 004b177b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004b177d: fld dword ptr [0xa47a74] */ FPUSH(R_F32((u32)(0xa47a74u)));
    /* 004b1783: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004b1785: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 004b1787: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004b1789: fadd dword ptr [0x906fa0] */ ST(0) = ST(0) + R_F32((u32)(0x906fa0u));
    /* 004b178f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004b1791: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b1793: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004b1795: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 004b1798: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004b179a: fstp dword ptr [ebx + 0x760] */ W_F32((u32)(r_ebx+0x760u), ST(0)); FPOP();
    /* 004b17a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b17a1: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4b17a6u); f_0050981c();
    /* 004b17a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b17a9: mov dword ptr [ebx + 0x7b8], eax */ W32((u32)(r_ebx+0x7b8u), r_eax);
    /* 004b17af: jmp 0x4b10ba */ goto L_004b10ba;
L_004b17b4:; BB(0x004b17b4);
    /* 004b17b4: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004b17ba: fcomp dword ptr [0x906f9c] */ fx_compare(ST(0), R_F32((u32)(0x906f9cu))); FPOP();
    /* 004b17c0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b17c2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b17c3: jb 0x4b10ba */ if (fC) goto L_004b10ba;
L_004b17c9:; BB(0x004b17c9);
    /* 004b17c9: fld dword ptr [0x906fd8] */ FPUSH(R_F32((u32)(0x906fd8u)));
    /* 004b17cf: mov dword ptr [ebx + 0x738], 1 */ W32((u32)(r_ebx+0x738u), 0x1u);
    /* 004b17d9: fdiv dword ptr [0xa47a78] */ ST(0) = ST(0) / R_F32((u32)(0xa47a78u));
    /* 004b17df: fmul dword ptr [ebx + 0x74c] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x74cu));
    /* 004b17e5: fstp dword ptr [ebx + 0x75c] */ W_F32((u32)(r_ebx+0x75cu), ST(0)); FPOP();
    /* 004b17eb: jmp 0x4b10ba */ goto L_004b10ba;
L_004b17f0:; BB(0x004b17f0);
    /* 004b17f0: fld dword ptr [ebx + 0x75c] */ FPUSH(R_F32((u32)(r_ebx+0x75cu)));
    /* 004b17f6: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 004b17f9: fld dword ptr [ebx + 0x758] */ FPUSH(R_F32((u32)(r_ebx+0x758u)));
    /* 004b17ff: fadd dword ptr [ebx + 0x760] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x760u));
    /* 004b1805: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004b1808: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004b180a: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 004b180d: fst dword ptr [ebx + 0x758] */ W_F32((u32)(r_ebx+0x758u), ST(0));
    /* 004b1813: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b1815: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004b1818: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b181a: call 0x4b1de4 */ r_esp -= 4; W32(r_esp, 0x4b181fu); f_004b1de4();
    /* 004b181f: fstp dword ptr [ebx + 0x750] */ W_F32((u32)(r_ebx+0x750u), ST(0)); FPOP();
    /* 004b1825: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b1828: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1829: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b182a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b182b: ret 0xc */ FN_RET(0x004b0ee0); r_esp += 16; return;
L_004b182e:; BB(0x004b182e);
    /* 004b182e: mov eax, dword ptr [ebx + 0x730] */ r_eax = R32((u32)(r_ebx+0x730u));
    /* 004b1834: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1837: jne 0x4b152c */ if (!fZ) goto L_004b152c;
L_004b183d:; BB(0x004b183d);
    /* 004b183d: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b1843: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1848: je 0x4b1a11 */ if (fZ) goto L_004b1a11;
L_004b184e:; BB(0x004b184e);
    /* 004b184e: mov edx, dword ptr [ebx + 0x6cc] */ r_edx = R32((u32)(r_ebx+0x6ccu));
    /* 004b1854: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b1859: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b185f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1861: jne 0x4b18ab */ if (!fZ) goto L_004b18ab;
L_004b1863:; BB(0x004b1863);
    /* 004b1863: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b1865: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004b1867: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b1869: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b186b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b1871u); call_ind(t); }
    /* 004b1871: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b1875: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b187b: mov byte ptr [esp + 0x20], 0xa9 */ W8((u32)(r_esp+0x20u), 0xa9u);
    /* 004b1880: mov edx, 0xf */ r_edx = 0xfu;
    /* 004b1885: mov byte ptr [esp + 0x21], 2 */ W8((u32)(r_esp+0x21u), 0x2u);
    /* 004b188a: mov word ptr [esp + 0x22], ax */ W16((u32)(r_esp+0x22u), (u16)r_eax);
    /* 004b188f: mov word ptr [esp + 0x24], dx */ W16((u32)(r_esp+0x24u), (u16)r_edx);
    /* 004b1894: mov word ptr [esp + 0x26], bx */ W16((u32)(r_esp+0x26u), (u16)r_ebx);
    /* 004b1899: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 004b189d: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b18a2u); f_008003e0();
    /* 004b18a2: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b18a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b18a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b18a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b18a8: ret 0xc */ FN_RET(0x004b0ee0); r_esp += 16; return;
L_004b18ab:; BB(0x004b18ab);
    /* 004b18ab: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b18ae: jne 0x4b18f8 */ if (!fZ) goto L_004b18f8;
L_004b18b0:; BB(0x004b18b0);
    /* 004b18b0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b18b2: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004b18b4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b18b6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b18b8: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b18beu); call_ind(t); }
    /* 004b18be: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b18c2: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b18c8: mov byte ptr [esp + 0x18], 0xa9 */ W8((u32)(r_esp+0x18u), 0xa9u);
    /* 004b18cd: mov edx, 0x10 */ r_edx = 0x10u;
    /* 004b18d2: mov byte ptr [esp + 0x19], 2 */ W8((u32)(r_esp+0x19u), 0x2u);
    /* 004b18d7: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 004b18dc: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 004b18e1: mov word ptr [esp + 0x1e], bx */ W16((u32)(r_esp+0x1eu), (u16)r_ebx);
    /* 004b18e6: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004b18ea: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b18efu); f_008003e0();
    /* 004b18ef: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b18f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b18f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b18f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b18f5: ret 0xc */ FN_RET(0x004b0ee0); r_esp += 16; return;
L_004b18f8:; BB(0x004b18f8);
    /* 004b18f8: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 004b18fd: mov eax, dword ptr [eax*4 + 0x9abc68] */ r_eax = R32((u32)(r_eax*4+0x9abc68u));
    /* 004b1904: mov ebp, dword ptr [ebx + 0x6bc] */ r_ebp = R32((u32)(r_ebx+0x6bcu));
    /* 004b190a: lea esi, [ebp + 1] */ r_esi = (u32)(r_ebp+0x1u);
    /* 004b190d: mov dword ptr [ebx + 0x6bc], esi */ W32((u32)(r_ebx+0x6bcu), r_esi);
    /* 004b1913: mov ebp, dword ptr [eax + ebp*8 + 8] */ r_ebp = R32((u32)(r_eax+r_ebp*8+0x8u));
    /* 004b1917: lea esi, [ebp - 0x1e] */ r_esi = (u32)(r_ebp+0xffffffe2u);
    /* 004b191a: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b191d: ja 0x4b1a04 */ if ((!fC&&!fZ)) goto L_004b1a04;
L_004b1923:; BB(0x004b1923);
    /* 004b1923: mov esi, dword ptr [esi*4 + 0x904e40] */ r_esi = R32((u32)(r_esi*4+0x904e40u));
    /* 004b192a: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_004b1a04:; BB(0x004b1a04);
    /* 004b1a04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b1a05: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1a07: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1a0cu); f_004b5150();
    /* 004b1a0c: jmp 0x4b152c */ goto L_004b152c;
L_004b1a11:; BB(0x004b1a11);
    /* 004b1a11: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 004b1a16: mov eax, dword ptr [eax*4 + 0x9abc68] */ r_eax = R32((u32)(r_eax*4+0x9abc68u));
    /* 004b1a1d: mov edx, dword ptr [ebx + 0x6bc] */ r_edx = R32((u32)(r_ebx+0x6bcu));
    /* 004b1a23: lea ebp, [edx + 1] */ r_ebp = (u32)(r_edx+0x1u);
    /* 004b1a26: mov dword ptr [ebx + 0x6bc], ebp */ W32((u32)(r_ebx+0x6bcu), r_ebp);
    /* 004b1a2c: mov edx, dword ptr [eax + edx*8 + 8] */ r_edx = R32((u32)(r_eax+r_edx*8+0x8u));
    /* 004b1a30: lea ebp, [edx - 0x1e] */ r_ebp = (u32)(r_edx+0xffffffe2u);
    /* 004b1a33: cmp ebp, 0x27 */ {  u32 a = r_ebp; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b1a36: ja 0x4b1b4a */ if ((!fC&&!fZ)) goto L_004b1b4a;
L_004b1a3c:; BB(0x004b1a3c);
    /* 004b1a3c: mov ebp, dword ptr [ebp*4 + 0x904ee0] */ r_ebp = R32((u32)(r_ebp*4+0x904ee0u));
    /* 004b1a43: jmp ebp */ { u32 t = r_ebp; jmp_ind(t); return; }
L_004b1b4a:; BB(0x004b1b4a);
    /* 004b1b4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b1b4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1b4d: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b1b52u); f_004b5150();
    /* 004b1b52: jmp 0x4b152c */ goto L_004b152c;
L_004b1b57:; BB(0x004b1b57);
    /* 004b1b57: mov eax, dword ptr [ebx + 0x730] */ r_eax = R32((u32)(r_ebx+0x730u));
    /* 004b1b5d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1b60: jne 0x4b152c */ if (!fZ) goto L_004b152c;
L_004b1b66:; BB(0x004b1b66);
    /* 004b1b66: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b1b68: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b1b6a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b1b6c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1b6e: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b1b74u); call_ind(t); }
    /* 004b1b74: movzx ebp, word ptr [ebx + 0x1c] */ r_ebp = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b1b78: mov edx, dword ptr [ebx + 0x6bc] */ r_edx = R32((u32)(r_ebx+0x6bcu));
    /* 004b1b7e: mov byte ptr [esp + 0x28], 0xa9 */ W8((u32)(r_esp+0x28u), 0xa9u);
    /* 004b1b83: mov eax, 2 */ r_eax = 0x2u;
    /* 004b1b88: mov byte ptr [esp + 0x29], al */ W8((u32)(r_esp+0x29u), (u8)r_eax);
    /* 004b1b8c: mov word ptr [esp + 0x2a], bp */ W16((u32)(r_esp+0x2au), (u16)r_ebp);
    /* 004b1b91: mov word ptr [esp + 0x2c], ax */ W16((u32)(r_esp+0x2cu), (u16)r_eax);
    /* 004b1b96: mov word ptr [esp + 0x2e], dx */ W16((u32)(r_esp+0x2eu), (u16)r_edx);
    /* 004b1b9b: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 004b1b9f: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b1ba4u); f_008003e0();
    /* 004b1ba4: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b1ba7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1ba8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1ba9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1baa: ret 0xc */ FN_RET(0x004b0ee0); r_esp += 16; return;
L_004b1bad:; BB(0x004b1bad);
    /* 004b1bad: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b1baf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1bb1: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4b1bb7u); call_ind(t); }
    /* 004b1bb7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004b1bb9:; BB(0x004b1bb9);
    /* 004b1bb9: mov ecx, dword ptr [ebx + ebp*4 + 0x600] */ r_ecx = R32((u32)(r_ebx+r_ebp*4+0x600u));
    /* 004b1bc0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b1bc2: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4b1bc8u); call_ind(t); }
    /* 004b1bc8: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004b1bcb: cmp ebp, 0xa */ {  u32 a = r_ebp; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b1bce: jl 0x4b1bb9 */ if ((fS!=fO)) goto L_004b1bb9;
L_004b1bd0:; BB(0x004b1bd0);
    /* 004b1bd0: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 004b1bd4: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 004b1bd8: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 004b1bdc: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b1be2: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b1be5: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b1bea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b1beb: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b1bf1: mov dword ptr [ebx + 0x6c8], edx */ W32((u32)(r_ebx+0x6c8u), r_edx);
    /* 004b1bf7: mov dword ptr [ebx + 0x6cc], ebp */ W32((u32)(r_ebx+0x6ccu), r_ebp);
    /* 004b1bfd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b1bff: call 0x4b1e58 */ r_esp -= 4; W32(r_esp, 0x4b1c04u); f_004b1e58();
    /* 004b1c04: mov eax, dword ptr [ebx + 0x6c8] */ r_eax = R32((u32)(r_ebx+0x6c8u));
    /* 004b1c0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b1c0c: jne 0x4b1c26 */ if (!fZ) goto L_004b1c26;
L_004b1c0e:; BB(0x004b1c0e);
    /* 004b1c0e: mov dword ptr [ebx + 0x74c], 0xbf800000 */ W32((u32)(r_ebx+0x74cu), 0xbf800000u);
    /* 004b1c18: mov eax, 5 */ r_eax = 0x5u;
    /* 004b1c1d: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004b1c24: jmp 0x4b1c3c */ goto L_004b1c3c;
L_004b1c26:; BB(0x004b1c26);
    /* 004b1c26: mov dword ptr [ebx + 0x74c], 0x3f800000 */ W32((u32)(r_ebx+0x74cu), 0x3f800000u);
    /* 004b1c30: mov eax, 6 */ r_eax = 0x6u;
    /* 004b1c35: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
L_004b1c3c:; BB(0x004b1c3c);
    /* 004b1c3c: mov dword ptr [ebx + 0x750], 0 */ W32((u32)(r_ebx+0x750u), 0x0u);
    /* 004b1c46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b1c48: mov dword ptr [ebx + 0x730], eax */ W32((u32)(r_ebx+0x730u), r_eax);
    /* 004b1c4e: mov dword ptr [ebx + 0x734], eax */ W32((u32)(r_ebx+0x734u), r_eax);
    /* 004b1c54: mov dword ptr [ebx + 0x754], 0 */ W32((u32)(r_ebx+0x754u), 0x0u);
    /* 004b1c5e: mov dword ptr [ebx + 0x738], eax */ W32((u32)(r_ebx+0x738u), r_eax);
    /* 004b1c64: mov dword ptr [ebx + 0x73c], eax */ W32((u32)(r_ebx+0x73cu), r_eax);
    /* 004b1c6a: mov dword ptr [ebx + 0x75c], 0 */ W32((u32)(r_ebx+0x75cu), 0x0u);
    /* 004b1c74: mov dword ptr [ebx + 0x760], 0 */ W32((u32)(r_ebx+0x760u), 0x0u);
    /* 004b1c7e: mov dword ptr [ebx + 0x758], 0 */ W32((u32)(r_ebx+0x758u), 0x0u);
    /* 004b1c88: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b1c8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b1c8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b1c8d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b1c8e: ret 0xc */ FN_RET(0x004b0ee0); r_esp += 16; return;
}

