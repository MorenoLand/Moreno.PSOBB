#include "protos.h"

void f_0055b008(void) /* sub_55B008 */
{
    FN_ENTER(0x0055b008);
    /* 0055b008: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055b009: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055b00a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b00b: mov edi, ecx */ r_edi = r_ecx;
    /* 0055b00d: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0055b012: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 0055b018: lea esi, [edi + 0x3c8] */ r_esi = (u32)(r_edi+0x3c8u);
    /* 0055b01e: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b020: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0055b025: mov eax, dword ptr [0xaf0364] */ r_eax = R32((u32)(0xaf0364u));
    /* 0055b02a: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 0055b030: mov dword ptr [0xaab500], eax */ W32((u32)(0xaab500u), r_eax);
    /* 0055b035: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x55b03au); f_005771a4();
    /* 0055b03a: lea ebx, [edi + 0x300] */ r_ebx = (u32)(r_edi+0x300u);
    /* 0055b040: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b041: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b043: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x55b048u); f_0057725c();
    /* 0055b048: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b04a: jne 0x55b090 */ if (!fZ) goto L_0055b090;
L_0055b04c:; BB(0x0055b04c);
    /* 0055b04c: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0055b053: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b056: je 0x55b1d4 */ if (fZ) goto L_0055b1d4;
L_0055b05c:; BB(0x0055b05c);
    /* 0055b05c: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0055b061: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055b066: je 0x55b0cf */ if (fZ) goto L_0055b0cf;
L_0055b068:; BB(0x0055b068);
    /* 0055b068: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0055b06d: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 0055b073: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 0055b079: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0055b07e: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 0055b084: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
    /* 0055b08a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055b08b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055b08c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055b08d: ret 4 */ FN_RET(0x0055b008); r_esp += 8; return;
L_0055b090:; BB(0x0055b090);
    /* 0055b090: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0055b096: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b098: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x55b09bu); call_ind(t); }
    /* 0055b09b: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0055b0a0: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055b0a5: jne 0x55b0cf */ if (!fZ) goto L_0055b0cf;
L_0055b0a7:; BB(0x0055b0a7);
    /* 0055b0a7: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0055b0ac: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 0055b0b2: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 0055b0b8: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0055b0bd: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 0055b0c3: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
    /* 0055b0c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055b0ca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055b0cb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055b0cc: ret 4 */ FN_RET(0x0055b008); r_esp += 8; return;
L_0055b0cf:; BB(0x0055b0cf);
    /* 0055b0cf: mov ecx, edi */ r_ecx = r_edi;
    /* 0055b0d1: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x55b0d6u); f_00520608();
    /* 0055b0d6: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0055b0d9: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x55b0deu); f_00829cc8();
    /* 0055b0de: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x55b0e3u); f_0082d7b0();
    /* 0055b0e3: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0055b0e6: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x55b0ebu); f_0082d838();
    /* 0055b0eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b0ed: push 0x41c00000 */ { u32 v = 0x41c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b0f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055b0f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b0f6: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x55b0fbu); f_00830b74();
    /* 0055b0fb: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0055b0fe: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055b100: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x55b105u); f_0082d8bc();
    /* 0055b105: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x55b10au); f_00520d08();
    /* 0055b10a: mov dword ptr [0xa73c1c], 0 */ W32((u32)(0xa73c1cu), 0x0u);
    /* 0055b114: lea eax, [edi + 0x468] */ r_eax = (u32)(r_edi+0x468u);
    /* 0055b11a: mov ecx, 0x55af1c */ r_ecx = 0x55af1cu;
    /* 0055b11f: mov dword ptr [0xa73c18], eax */ W32((u32)(0xa73c18u), r_eax);
    /* 0055b124: mov dword ptr [edi + 0x468], 0 */ W32((u32)(r_edi+0x468u), 0x0u);
    /* 0055b12e: mov dword ptr [edi + 0x46c], 0 */ W32((u32)(r_edi+0x46cu), 0x0u);
    /* 0055b138: mov dword ptr [edi + 0x470], 0 */ W32((u32)(r_edi+0x470u), 0x0u);
    /* 0055b142: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x55b147u); f_0082fac4();
    /* 0055b147: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x55b14cu); f_00578b38();
    /* 0055b14c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0055b150: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b153: je 0x55b21b */ if (fZ) goto L_0055b21b;
L_0055b159:; BB(0x0055b159);
    /* 0055b159: mov ecx, edi */ r_ecx = r_edi;
    /* 0055b15b: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x55b160u); f_007aa7b8();
L_0055b160:; BB(0x0055b160);
    /* 0055b160: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x55b165u); f_0082dab0();
    /* 0055b165: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055b167: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x55b16cu); f_0082fac4();
    /* 0055b16c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x55b171u); f_0082da80();
    /* 0055b171: mov ecx, edi */ r_ecx = r_edi;
    /* 0055b173: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x55b178u); f_00520610();
    /* 0055b178: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b179: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b17b: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x55b180u); f_0057725c();
    /* 0055b180: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b182: jne 0x55b1a1 */ if (!fZ) goto L_0055b1a1;
L_0055b184:; BB(0x0055b184);
    /* 0055b184: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0055b18b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055b18e: jne 0x55b1ac */ if (!fZ) goto L_0055b1ac;
L_0055b190:; BB(0x0055b190);
    /* 0055b190: mov eax, dword ptr [edi + 0x4c4] */ r_eax = R32((u32)(r_edi+0x4c4u));
    /* 0055b196: lea ecx, [edi + 0x4c4] */ r_ecx = (u32)(r_edi+0x4c4u);
    /* 0055b19c: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x55b19fu); call_ind(t); }
    /* 0055b19f: jmp 0x55b1ac */ goto L_0055b1ac;
L_0055b1a1:; BB(0x0055b1a1);
    /* 0055b1a1: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0055b1a7: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b1a9: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x55b1acu); call_ind(t); }
L_0055b1ac:; BB(0x0055b1ac);
    /* 0055b1ac: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0055b1b1: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 0055b1b7: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 0055b1bd: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0055b1c2: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 0055b1c8: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
    /* 0055b1ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055b1cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055b1d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055b1d1: ret 4 */ FN_RET(0x0055b008); r_esp += 8; return;
L_0055b1d4:; BB(0x0055b1d4);
    /* 0055b1d4: mov eax, dword ptr [edi + 0x4c4] */ r_eax = R32((u32)(r_edi+0x4c4u));
    /* 0055b1da: lea ecx, [edi + 0x4c4] */ r_ecx = (u32)(r_edi+0x4c4u);
    /* 0055b1e0: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x55b1e3u); call_ind(t); }
    /* 0055b1e3: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0055b1e8: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055b1ed: jne 0x55b0cf */ if (!fZ) goto L_0055b0cf;
L_0055b1f3:; BB(0x0055b1f3);
    /* 0055b1f3: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0055b1f8: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 0055b1fe: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 0055b204: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0055b209: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 0055b20f: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
    /* 0055b215: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055b216: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055b217: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055b218: ret 4 */ FN_RET(0x0055b008); r_esp += 8; return;
L_0055b21b:; BB(0x0055b21b);
    /* 0055b21b: mov ecx, edi */ r_ecx = r_edi;
    /* 0055b21d: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x55b222u); f_007aa668();
    /* 0055b222: jmp 0x55b160 */ goto L_0055b160;
}

void f_0055b228(void) /* sub_55B228 */
{
    FN_ENTER(0x0055b228);
    /* 0055b228: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055b229: mov edi, ecx */ r_edi = r_ecx;
    /* 0055b22b: mov eax, dword ptr [edi + 0x474] */ r_eax = R32((u32)(r_edi+0x474u));
    /* 0055b231: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055b233: je 0x55b29f */ if (fZ) goto L_0055b29f;
L_0055b235:; BB(0x0055b235);
    /* 0055b235: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0055b23a: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055b23f: je 0x55b29f */ if (fZ) goto L_0055b29f;
L_0055b241:; BB(0x0055b241);
    /* 0055b241: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0055b244: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x55b249u); f_00829cc8();
    /* 0055b249: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x55b24eu); f_0082d7b0();
    /* 0055b24e: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0055b251: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x55b256u); f_0082d838();
    /* 0055b256: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b258: push 0x41c00000 */ { u32 v = 0x41c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b25d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055b25f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b261: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x55b266u); f_00830b74();
    /* 0055b266: mov eax, dword ptr [edi + 0x460] */ r_eax = R32((u32)(r_edi+0x460u));
    /* 0055b26c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b26d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b26e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055b270: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b271: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x55b276u); f_0082fa0c();
    /* 0055b276: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x55b27bu); f_0082fa9c();
    /* 0055b27b: push dword ptr [edi + 0x45c] */ { u32 v = R32((u32)(r_edi+0x45cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055b281: push dword ptr [edi + 0x450] */ { u32 v = R32((u32)(r_edi+0x450u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055b287: push dword ptr [edi + 0x44c] */ { u32 v = R32((u32)(r_edi+0x44cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055b28d: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x55b292u); f_0083046c();
    /* 0055b292: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055b295: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x55b29au); f_0082faac();
    /* 0055b29a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x55b29fu); f_0082da80();
L_0055b29f:; BB(0x0055b29f);
    /* 0055b29f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055b2a0: ret  */ FN_RET(0x0055b228); r_esp += 4; return;
}

void f_0055b2a4(void) /* sub_55B2A4 */
{
    FN_ENTER(0x0055b2a4);
    /* 0055b2a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055b2a5: mov esi, ecx */ r_esi = r_ecx;
    /* 0055b2a7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055b2a9: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b2ab: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x55b2b1u); call_ind(t); }
    /* 0055b2b1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b2b4: je 0x55b322 */ if (fZ) goto L_0055b322;
L_0055b2b6:; BB(0x0055b2b6);
    /* 0055b2b6: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b2b8: call 0x55b364 */ r_esp -= 4; W32(r_esp, 0x55b2bdu); f_0055b364();
    /* 0055b2bd: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055b2bf: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b2c1: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x55b2c7u); call_ind(t); }
    /* 0055b2c7: mov eax, dword ptr [esi + 0x474] */ r_eax = R32((u32)(r_esi+0x474u));
    /* 0055b2cd: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055b2cf: jne 0x55b2f5 */ if (!fZ) goto L_0055b2f5;
L_0055b2d1:; BB(0x0055b2d1);
    /* 0055b2d1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055b2d3: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b2d5: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x55b2dbu); call_ind(t); }
    /* 0055b2db: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b2dd: call 0x55b338 */ r_esp -= 4; W32(r_esp, 0x55b2e2u); f_0055b338();
    /* 0055b2e2: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b2e4: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x55b2e9u); f_006401f0();
    /* 0055b2e9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055b2eb: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b2ed: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x55b2f3u); call_ind(t); }
    /* 0055b2f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055b2f4: ret  */ FN_RET(0x0055b2a4); r_esp += 4; return;
L_0055b2f5:; BB(0x0055b2f5);
    /* 0055b2f5: movzx eax, word ptr [esi + 0x478] */ r_eax = (u32)R16((u32)(r_esi+0x478u));
    /* 0055b2fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b2fd: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55b302u); f_007b4d18();
    /* 0055b302: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055b303: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055b305: je 0x55b336 */ if (fZ) goto L_0055b336;
L_0055b307:; BB(0x0055b307);
    /* 0055b307: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0055b30a: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 0055b30d: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0055b310: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0055b313: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0055b316: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0055b319: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b31b: call 0x55b338 */ r_esp -= 4; W32(r_esp, 0x55b320u); f_0055b338();
    /* 0055b320: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055b321: ret  */ FN_RET(0x0055b2a4); r_esp += 4; return;
L_0055b322:; BB(0x0055b322);
    /* 0055b322: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0055b329: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055b32b: jne 0x55b336 */ if (!fZ) goto L_0055b336;
L_0055b32d:; BB(0x0055b32d);
    /* 0055b32d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b32f: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b331: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55b336u); f_0051f62c();
L_0055b336:; BB(0x0055b336);
    /* 0055b336: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055b337: ret  */ FN_RET(0x0055b2a4); r_esp += 4; return;
}

void f_0055b338(void) /* sub_55B338 */
{
    FN_ENTER(0x0055b338);
    /* 0055b338: fld dword ptr [0x9254dc] */ FPUSH(R_F32((u32)(0x9254dcu)));
    /* 0055b33e: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0055b341: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0055b344: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0055b347: fst dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0));
    /* 0055b34d: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 0055b350: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 0055b356: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 0055b35c: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 0055b35f: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 0055b362: ret  */ FN_RET(0x0055b338); r_esp += 4; return;
}

void f_0055b364(void) /* sub_55B364 */
{
    FN_ENTER(0x0055b364);
    /* 0055b364: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055b365: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055b366: mov esi, ecx */ r_esi = r_ecx;
    /* 0055b368: mov eax, dword ptr [esi + 0x474] */ r_eax = R32((u32)(r_esi+0x474u));
    /* 0055b36e: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055b370: je 0x55b375 */ if (fZ) goto L_0055b375;
L_0055b372:; BB(0x0055b372);
    /* 0055b372: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055b373: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055b374: ret  */ FN_RET(0x0055b364); r_esp += 4; return;
L_0055b375:; BB(0x0055b375);
    /* 0055b375: movzx eax, word ptr [esi + 0x478] */ r_eax = (u32)R16((u32)(r_esi+0x478u));
    /* 0055b37c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b37d: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55b382u); f_007b4d18();
    /* 0055b382: mov ebp, eax */ r_ebp = r_eax;
    /* 0055b384: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055b387: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b389: je 0x55b3b8 */ if (fZ) goto L_0055b3b8;
L_0055b38b:; BB(0x0055b38b);
    /* 0055b38b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055b38d: call 0x55ac6c */ r_esp -= 4; W32(r_esp, 0x55b392u); f_0055ac6c();
    /* 0055b392: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b395: je 0x55b3b8 */ if (fZ) goto L_0055b3b8;
L_0055b397:; BB(0x0055b397);
    /* 0055b397: mov dword ptr [esi + 0x398], ebp */ W32((u32)(r_esi+0x398u), r_ebp);
    /* 0055b39d: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0055b3a1: mov word ptr [esi + 0x394], ax */ W16((u32)(r_esi+0x394u), (u16)r_eax);
    /* 0055b3a8: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b3aa: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x55b3afu); f_005213d8();
    /* 0055b3af: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b3b1: call 0x55b424 */ r_esp -= 4; W32(r_esp, 0x55b3b6u); f_0055b424();
    /* 0055b3b6: jmp 0x55b3d6 */ goto L_0055b3d6;
L_0055b3b8:; BB(0x0055b3b8);
    /* 0055b3b8: mov eax, dword ptr [esi + 0x474] */ r_eax = R32((u32)(r_esi+0x474u));
    /* 0055b3be: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055b3c0: je 0x55b3cd */ if (fZ) goto L_0055b3cd;
L_0055b3c2:; BB(0x0055b3c2);
    /* 0055b3c2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b3c4: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b3c6: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55b3cbu); f_0051f62c();
    /* 0055b3cb: jmp 0x55b3d6 */ goto L_0055b3d6;
L_0055b3cd:; BB(0x0055b3cd);
    /* 0055b3cd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b3cf: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b3d1: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55b3d6u); f_0051f62c();
L_0055b3d6:; BB(0x0055b3d6);
    /* 0055b3d6: mov eax, dword ptr [esi + 0x474] */ r_eax = R32((u32)(r_esi+0x474u));
    /* 0055b3dc: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055b3de: jne 0x55b40a */ if (!fZ) goto L_0055b40a;
L_0055b3e0:; BB(0x0055b3e0);
    /* 0055b3e0: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0055b3e7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055b3ea: je 0x55b420 */ if (fZ) goto L_0055b420;
L_0055b3ec:; BB(0x0055b3ec);
    /* 0055b3ec: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055b3ef: je 0x55b420 */ if (fZ) goto L_0055b420;
L_0055b3f1:; BB(0x0055b3f1);
    /* 0055b3f1: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0055b3f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055b3f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b3f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b3f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b3f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055b3fa: push 0x2ce */ { u32 v = 0x2ceu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b3ff: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x55b404u); f_008144b0();
    /* 0055b404: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055b407: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055b408: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055b409: ret  */ FN_RET(0x0055b364); r_esp += 4; return;
L_0055b40a:; BB(0x0055b40a);
    /* 0055b40a: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0055b40d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055b40f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b411: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b412: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055b413: push 0x2d1 */ { u32 v = 0x2d1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b418: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x55b41du); f_008144b0();
    /* 0055b41d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0055b420:; BB(0x0055b420);
    /* 0055b420: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055b421: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055b422: ret  */ FN_RET(0x0055b364); r_esp += 4; return;
}

void f_0055b424(void) /* sub_55B424 */
{
    FN_ENTER(0x0055b424);
    /* 0055b424: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b425: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055b428: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0055b42a: mov edx, dword ptr [ebx + 0x474] */ r_edx = R32((u32)(r_ebx+0x474u));
    /* 0055b430: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055b433: je 0x55b716 */ if (fZ) goto L_0055b716;
L_0055b439:; BB(0x0055b439);
    /* 0055b439: mov eax, dword ptr [ebx + 0x454] */ r_eax = R32((u32)(r_ebx+0x454u));
    /* 0055b43f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b441: je 0x55b749 */ if (fZ) goto L_0055b749;
L_0055b447:; BB(0x0055b447);
    /* 0055b447: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b44a: je 0x55b588 */ if (fZ) goto L_0055b588;
L_0055b450:; BB(0x0055b450);
    /* 0055b450: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b453: jne 0x55b4b5 */ if (!fZ) goto L_0055b4b5;
L_0055b455:; BB(0x0055b455);
    /* 0055b455: mov eax, dword ptr [ebx + 0x458] */ r_eax = R32((u32)(r_ebx+0x458u));
    /* 0055b45b: mov ecx, dword ptr [ebx + 0x448] */ r_ecx = R32((u32)(r_ebx+0x448u));
    /* 0055b461: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055b464: mov dword ptr [ebx + 0x458], eax */ W32((u32)(r_ebx+0x458u), r_eax);
    /* 0055b46a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b46c: je 0x55b480 */ if (fZ) goto L_0055b480;
L_0055b46e:; BB(0x0055b46e);
    /* 0055b46e: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 0055b474: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b475: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x55b47au); f_00508db8();
    /* 0055b47a: mov eax, dword ptr [ebx + 0x458] */ r_eax = R32((u32)(r_ebx+0x458u));
L_0055b480:; BB(0x0055b480);
    /* 0055b480: mov edx, dword ptr [0xa73c08] */ r_edx = R32((u32)(0xa73c08u));
    /* 0055b486: cmp eax, dword ptr [edx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b489: jl 0x55b4aa */ if ((fS!=fO)) goto L_0055b4aa;
L_0055b48b:; BB(0x0055b48b);
    /* 0055b48b: fld dword ptr [0x9254d4] */ FPUSH(R_F32((u32)(0x9254d4u)));
    /* 0055b491: mov dword ptr [ebx + 0x460], 0x3f800000 */ W32((u32)(r_ebx+0x460u), 0x3f800000u);
    /* 0055b49b: mov dword ptr [ebx + 0x454], 3 */ W32((u32)(r_ebx+0x454u), 0x3u);
    /* 0055b4a5: jmp 0x55b5e0 */ goto L_0055b5e0;
L_0055b4aa:; BB(0x0055b4aa);
    /* 0055b4aa: fld dword ptr [ebx + 0x460] */ FPUSH(R_F32((u32)(r_ebx+0x460u)));
    /* 0055b4b0: jmp 0x55b5e0 */ goto L_0055b5e0;
L_0055b4b5:; BB(0x0055b4b5);
    /* 0055b4b5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b4b8: jne 0x55b54e */ if (!fZ) goto L_0055b54e;
L_0055b4be:; BB(0x0055b4be);
    /* 0055b4be: fld dword ptr [ebx + 0x460] */ FPUSH(R_F32((u32)(r_ebx+0x460u)));
    /* 0055b4c4: fsub dword ptr [0x9254cc] */ ST(0) = ST(0) - R_F32((u32)(0x9254ccu));
    /* 0055b4ca: mov ecx, dword ptr [ebx + 0x448] */ r_ecx = R32((u32)(r_ebx+0x448u));
    /* 0055b4d0: fst dword ptr [ebx + 0x460] */ W_F32((u32)(r_ebx+0x460u), ST(0));
    /* 0055b4d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b4d8: je 0x55b4ee */ if (fZ) goto L_0055b4ee;
L_0055b4da:; BB(0x0055b4da);
    /* 0055b4da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055b4dc: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 0055b4e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b4e3: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x55b4e8u); f_00508db8();
    /* 0055b4e8: fld dword ptr [ebx + 0x460] */ FPUSH(R_F32((u32)(r_ebx+0x460u)));
L_0055b4ee:; BB(0x0055b4ee);
    /* 0055b4ee: fcom dword ptr [0x9254d8] */ fx_compare(ST(0), R_F32((u32)(0x9254d8u))); 
    /* 0055b4f4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055b4f6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055b4f7: ja 0x55b5e0 */ if ((!fC&&!fZ)) goto L_0055b5e0;
L_0055b4fd:; BB(0x0055b4fd);
    /* 0055b4fd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055b4ff: fld dword ptr [0x9254d8] */ FPUSH(R_F32((u32)(0x9254d8u)));
    /* 0055b505: mov edx, dword ptr [ebx + 0x474] */ r_edx = R32((u32)(r_ebx+0x474u));
    /* 0055b50b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055b50d: mov dword ptr [ebx + 0x460], eax */ W32((u32)(r_ebx+0x460u), r_eax);
    /* 0055b513: and edx, 0xffffffdf */ {  u32 a = r_edx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0055b516: mov dword ptr [ebx + 0x474], edx */ W32((u32)(r_ebx+0x474u), r_edx);
    /* 0055b51c: mov edx, dword ptr [ebx + 0x448] */ r_edx = R32((u32)(r_ebx+0x448u));
    /* 0055b522: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b524: je 0x55b5e0 */ if (fZ) goto L_0055b5e0;
L_0055b52a:; BB(0x0055b52a);
    /* 0055b52a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055b52c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0055b530: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055b535: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0055b539: fld dword ptr [ebx + 0x460] */ FPUSH(R_F32((u32)(r_ebx+0x460u)));
    /* 0055b53f: mov dword ptr [ebx + 0x448], 0 */ W32((u32)(r_ebx+0x448u), 0x0u);
    /* 0055b549: jmp 0x55b5e0 */ goto L_0055b5e0;
L_0055b54e:; BB(0x0055b54e);
    /* 0055b54e: and edx, 0xffffffdf */ {  u32 a = r_edx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0055b551: mov dword ptr [ebx + 0x474], edx */ W32((u32)(r_ebx+0x474u), r_edx);
    /* 0055b557: mov edx, dword ptr [ebx + 0x448] */ r_edx = R32((u32)(r_ebx+0x448u));
    /* 0055b55d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b55f: je 0x55b580 */ if (fZ) goto L_0055b580;
L_0055b561:; BB(0x0055b561);
    /* 0055b561: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0055b565: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055b56a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0055b56e: fld dword ptr [ebx + 0x460] */ FPUSH(R_F32((u32)(r_ebx+0x460u)));
    /* 0055b574: mov dword ptr [ebx + 0x448], 0 */ W32((u32)(r_ebx+0x448u), 0x0u);
    /* 0055b57e: jmp 0x55b5e0 */ goto L_0055b5e0;
L_0055b580:; BB(0x0055b580);
    /* 0055b580: fld dword ptr [ebx + 0x460] */ FPUSH(R_F32((u32)(r_ebx+0x460u)));
    /* 0055b586: jmp 0x55b5e0 */ goto L_0055b5e0;
L_0055b588:; BB(0x0055b588);
    /* 0055b588: fld dword ptr [0x9254cc] */ FPUSH(R_F32((u32)(0x9254ccu)));
    /* 0055b58e: fadd dword ptr [ebx + 0x460] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x460u));
    /* 0055b594: mov ecx, dword ptr [ebx + 0x448] */ r_ecx = R32((u32)(r_ebx+0x448u));
    /* 0055b59a: fst dword ptr [ebx + 0x460] */ W_F32((u32)(r_ebx+0x460u), ST(0));
    /* 0055b5a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b5a2: je 0x55b5b8 */ if (fZ) goto L_0055b5b8;
L_0055b5a4:; BB(0x0055b5a4);
    /* 0055b5a4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055b5a6: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 0055b5ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b5ad: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x55b5b2u); f_00508db8();
    /* 0055b5b2: fld dword ptr [ebx + 0x460] */ FPUSH(R_F32((u32)(r_ebx+0x460u)));
L_0055b5b8:; BB(0x0055b5b8);
    /* 0055b5b8: fcom dword ptr [0x9254d4] */ fx_compare(ST(0), R_F32((u32)(0x9254d4u))); 
    /* 0055b5be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055b5c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055b5c1: jb 0x55b5e0 */ if (fC) goto L_0055b5e0;
L_0055b5c3:; BB(0x0055b5c3);
    /* 0055b5c3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055b5c5: fld dword ptr [0x9254d4] */ FPUSH(R_F32((u32)(0x9254d4u)));
    /* 0055b5cb: mov dword ptr [ebx + 0x454], 2 */ W32((u32)(r_ebx+0x454u), 0x2u);
    /* 0055b5d5: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 0055b5da: mov dword ptr [ebx + 0x460], eax */ W32((u32)(r_ebx+0x460u), r_eax);
L_0055b5e0:; BB(0x0055b5e0);
    /* 0055b5e0: fld dword ptr [0x9254c8] */ FPUSH(R_F32((u32)(0x9254c8u)));
    /* 0055b5e6: fadd dword ptr [ebx + 0x45c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x45cu));
    /* 0055b5ec: mov edx, dword ptr [ebx + 0x450] */ r_edx = R32((u32)(r_ebx+0x450u));
    /* 0055b5f2: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 0055b5f5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0055b5f8: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0055b5fb: fadd dword ptr [eax*4 + 0x925470] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x925470u));
    /* 0055b602: fadd dword ptr [0x9254d0] */ ST(0) = ST(0) + R_F32((u32)(0x9254d0u));
    /* 0055b608: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0055b60a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055b60c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055b60d: jae 0x55b619 */ if (!fC) goto L_0055b619;
L_0055b60f:; BB(0x0055b60f);
    /* 0055b60f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0055b611: fstp dword ptr [ebx + 0x45c] */ W_F32((u32)(r_ebx+0x45cu), ST(0)); FPOP();
    /* 0055b617: jmp 0x55b621 */ goto L_0055b621;
L_0055b619:; BB(0x0055b619);
    /* 0055b619: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055b61b: fstp dword ptr [ebx + 0x45c] */ W_F32((u32)(r_ebx+0x45cu), ST(0)); FPOP();
L_0055b621:; BB(0x0055b621);
    /* 0055b621: fmul dword ptr [0x9254c4] */ ST(0) = ST(0) * R_F32((u32)(0x9254c4u));
    /* 0055b627: mov eax, dword ptr [ebx + 0x464] */ r_eax = R32((u32)(r_ebx+0x464u));
    /* 0055b62d: fstp dword ptr [0x9bdf18] */ W_F32((u32)(0x9bdf18u), ST(0)); FPOP();
    /* 0055b633: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0055b636: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0055b639: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0055b63c: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 0055b63f: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0055b642: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0055b645: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x55b64au); f_007b51c4();
    /* 0055b64a: mov ecx, dword ptr [ebx + 0x464] */ r_ecx = R32((u32)(r_ebx+0x464u));
    /* 0055b650: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x55b655u); f_007b6894();
    /* 0055b655: mov eax, dword ptr [ebx + 0x464] */ r_eax = R32((u32)(r_ebx+0x464u));
    /* 0055b65b: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0055b661: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0055b664: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b669: je 0x55b737 */ if (fZ) goto L_0055b737;
L_0055b66f:; BB(0x0055b66f);
    /* 0055b66f: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0055b673: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0055b677: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0055b67a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055b67c: mov ebp, ebx */ r_ebp = r_ebx;
    /* 0055b67e: mov ebx, eax */ r_ebx = r_eax;
L_0055b680:; BB(0x0055b680);
    /* 0055b680: mov esi, dword ptr [ebx + 0xaad6e0] */ r_esi = R32((u32)(r_ebx+0xaad6e0u));
    /* 0055b686: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0055b689: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b68b: je 0x55b73c */ if (fZ) goto L_0055b73c;
L_0055b691:; BB(0x0055b691);
    /* 0055b691: movzx edx, word ptr [esi + 0x96] */ r_edx = (u32)R16((u32)(r_esi+0x96u));
    /* 0055b698: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b69b: jne 0x55b700 */ if (!fZ) goto L_0055b700;
L_0055b69d:; BB(0x0055b69d);
    /* 0055b69d: movzx edx, word ptr [ebp + 0x478] */ r_edx = (u32)R16((u32)(r_ebp+0x478u));
    /* 0055b6a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6a5: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55b6aau); f_007b4d18();
    /* 0055b6aa: mov edi, eax */ r_edi = r_eax;
    /* 0055b6ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055b6af: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b6b1: je 0x55b700 */ if (fZ) goto L_0055b700;
L_0055b6b3:; BB(0x0055b6b3);
    /* 0055b6b3: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0055b6b5: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b6b7: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x55b6bdu); call_ind(t); }
    /* 0055b6bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b6bf: jne 0x55b700 */ if (!fZ) goto L_0055b700;
L_0055b6c1:; BB(0x0055b6c1);
    /* 0055b6c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0055b6c3: call 0x55aaf0 */ r_esp -= 4; W32(r_esp, 0x55b6c8u); f_0055aaf0();
    /* 0055b6c8: mov edi, dword ptr [0xa73c08] */ r_edi = R32((u32)(0xa73c08u));
    /* 0055b6ce: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 0055b6d1: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0055b6d3: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0055b6d7: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0055b6da: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0055b6de: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0055b6e3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6ea: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b6ec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x55b6efu); call_ind(t); }
    /* 0055b6ef: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0055b6f1: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055b6f4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0055b6f8: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b6fa: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0055b6fd: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x55b700u); call_ind(t); }
L_0055b700:; BB(0x0055b700);
    /* 0055b700: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b703: jl 0x55b680 */ if ((fS!=fO)) goto L_0055b680;
L_0055b709:; BB(0x0055b709);
    /* 0055b709: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0055b70d: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0055b711: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0055b714: jmp 0x55b737 */ goto L_0055b737;
L_0055b716:; BB(0x0055b716);
    /* 0055b716: mov edx, dword ptr [ebx + 0x448] */ r_edx = R32((u32)(r_ebx+0x448u));
    /* 0055b71c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b71e: je 0x55b737 */ if (fZ) goto L_0055b737;
L_0055b720:; BB(0x0055b720);
    /* 0055b720: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0055b724: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055b729: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0055b72d: mov dword ptr [ebx + 0x448], 0 */ W32((u32)(r_ebx+0x448u), 0x0u);
L_0055b737:; BB(0x0055b737);
    /* 0055b737: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055b73a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055b73b: ret  */ FN_RET(0x0055b424); r_esp += 4; return;
L_0055b73c:; BB(0x0055b73c);
    /* 0055b73c: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0055b740: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0055b744: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0055b747: jmp 0x55b737 */ goto L_0055b737;
L_0055b749:; BB(0x0055b749);
    /* 0055b749: mov dword ptr [ebx + 0x460], 0 */ W32((u32)(r_ebx+0x460u), 0x0u);
    /* 0055b753: push 0x221 */ { u32 v = 0x221u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b758: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 0055b75e: mov dword ptr [ebx + 0x458], 0 */ W32((u32)(r_ebx+0x458u), 0x0u);
    /* 0055b768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b769: mov dword ptr [ebx + 0x45c], 0 */ W32((u32)(r_ebx+0x45cu), 0x0u);
    /* 0055b773: mov dword ptr [ebx + 0x454], 1 */ W32((u32)(r_ebx+0x454u), 0x1u);
    /* 0055b77d: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x55b782u); f_00509590();
    /* 0055b782: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055b785: fld dword ptr [ebx + 0x460] */ FPUSH(R_F32((u32)(r_ebx+0x460u)));
    /* 0055b78b: mov dword ptr [ebx + 0x448], eax */ W32((u32)(r_ebx+0x448u), r_eax);
    /* 0055b791: jmp 0x55b5e0 */ goto L_0055b5e0;
}

void f_0055b4ff(void)
{
    FN_ENTER(0x0055b4ff);
    /* 0055b4ff: fld dword ptr [0x9254d8] */ FPUSH(R_F32((u32)(0x9254d8u)));
    /* 0055b505: mov edx, dword ptr [ebx + 0x474] */ r_edx = R32((u32)(r_ebx+0x474u));
    /* 0055b50b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055b50d: mov dword ptr [ebx + 0x460], eax */ W32((u32)(r_ebx+0x460u), r_eax);
    /* 0055b513: and edx, 0xffffffdf */ {  u32 a = r_edx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0055b516: mov dword ptr [ebx + 0x474], edx */ W32((u32)(r_ebx+0x474u), r_edx);
    /* 0055b51c: mov edx, dword ptr [ebx + 0x448] */ r_edx = R32((u32)(r_ebx+0x448u));
    /* 0055b522: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b524: je 0x55b5e0 */ if (fZ) goto L_0055b5e0;
L_0055b52a:; BB(0x0055b52a);
    /* 0055b52a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055b52c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0055b530: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055b535: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0055b539: fld dword ptr [ebx + 0x460] */ FPUSH(R_F32((u32)(r_ebx+0x460u)));
    /* 0055b53f: mov dword ptr [ebx + 0x448], 0 */ W32((u32)(r_ebx+0x448u), 0x0u);
    /* 0055b549: jmp 0x55b5e0 */ goto L_0055b5e0;
L_0055b5e0:; BB(0x0055b5e0);
    /* 0055b5e0: fld dword ptr [0x9254c8] */ FPUSH(R_F32((u32)(0x9254c8u)));
    /* 0055b5e6: fadd dword ptr [ebx + 0x45c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x45cu));
    /* 0055b5ec: mov edx, dword ptr [ebx + 0x450] */ r_edx = R32((u32)(r_ebx+0x450u));
    /* 0055b5f2: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 0055b5f5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0055b5f8: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0055b5fb: fadd dword ptr [eax*4 + 0x925470] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x925470u));
    /* 0055b602: fadd dword ptr [0x9254d0] */ ST(0) = ST(0) + R_F32((u32)(0x9254d0u));
    /* 0055b608: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0055b60a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055b60c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055b60d: jae 0x55b619 */ if (!fC) goto L_0055b619;
L_0055b60f:; BB(0x0055b60f);
    /* 0055b60f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0055b611: fstp dword ptr [ebx + 0x45c] */ W_F32((u32)(r_ebx+0x45cu), ST(0)); FPOP();
    /* 0055b617: jmp 0x55b621 */ goto L_0055b621;
L_0055b619:; BB(0x0055b619);
    /* 0055b619: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055b61b: fstp dword ptr [ebx + 0x45c] */ W_F32((u32)(r_ebx+0x45cu), ST(0)); FPOP();
L_0055b621:; BB(0x0055b621);
    /* 0055b621: fmul dword ptr [0x9254c4] */ ST(0) = ST(0) * R_F32((u32)(0x9254c4u));
    /* 0055b627: mov eax, dword ptr [ebx + 0x464] */ r_eax = R32((u32)(r_ebx+0x464u));
    /* 0055b62d: fstp dword ptr [0x9bdf18] */ W_F32((u32)(0x9bdf18u), ST(0)); FPOP();
    /* 0055b633: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0055b636: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0055b639: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0055b63c: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 0055b63f: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0055b642: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0055b645: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x55b64au); f_007b51c4();
    /* 0055b64a: mov ecx, dword ptr [ebx + 0x464] */ r_ecx = R32((u32)(r_ebx+0x464u));
    /* 0055b650: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x55b655u); f_007b6894();
    /* 0055b655: mov eax, dword ptr [ebx + 0x464] */ r_eax = R32((u32)(r_ebx+0x464u));
    /* 0055b65b: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0055b661: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0055b664: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b669: je 0x55b737 */ if (fZ) goto L_0055b737;
L_0055b66f:; BB(0x0055b66f);
    /* 0055b66f: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0055b673: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0055b677: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0055b67a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055b67c: mov ebp, ebx */ r_ebp = r_ebx;
    /* 0055b67e: mov ebx, eax */ r_ebx = r_eax;
L_0055b680:; BB(0x0055b680);
    /* 0055b680: mov esi, dword ptr [ebx + 0xaad6e0] */ r_esi = R32((u32)(r_ebx+0xaad6e0u));
    /* 0055b686: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0055b689: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b68b: je 0x55b73c */ if (fZ) goto L_0055b73c;
L_0055b691:; BB(0x0055b691);
    /* 0055b691: movzx edx, word ptr [esi + 0x96] */ r_edx = (u32)R16((u32)(r_esi+0x96u));
    /* 0055b698: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b69b: jne 0x55b700 */ if (!fZ) goto L_0055b700;
L_0055b69d:; BB(0x0055b69d);
    /* 0055b69d: movzx edx, word ptr [ebp + 0x478] */ r_edx = (u32)R16((u32)(r_ebp+0x478u));
    /* 0055b6a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6a5: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55b6aau); f_007b4d18();
    /* 0055b6aa: mov edi, eax */ r_edi = r_eax;
    /* 0055b6ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055b6af: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b6b1: je 0x55b700 */ if (fZ) goto L_0055b700;
L_0055b6b3:; BB(0x0055b6b3);
    /* 0055b6b3: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0055b6b5: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b6b7: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x55b6bdu); call_ind(t); }
    /* 0055b6bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b6bf: jne 0x55b700 */ if (!fZ) goto L_0055b700;
L_0055b6c1:; BB(0x0055b6c1);
    /* 0055b6c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0055b6c3: call 0x55aaf0 */ r_esp -= 4; W32(r_esp, 0x55b6c8u); f_0055aaf0();
    /* 0055b6c8: mov edi, dword ptr [0xa73c08] */ r_edi = R32((u32)(0xa73c08u));
    /* 0055b6ce: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 0055b6d1: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0055b6d3: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0055b6d7: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0055b6da: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0055b6de: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0055b6e3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6ea: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b6ec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x55b6efu); call_ind(t); }
    /* 0055b6ef: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0055b6f1: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055b6f4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0055b6f8: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b6fa: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0055b6fd: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x55b700u); call_ind(t); }
L_0055b700:; BB(0x0055b700);
    /* 0055b700: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b703: jl 0x55b680 */ if ((fS!=fO)) goto L_0055b680;
L_0055b709:; BB(0x0055b709);
    /* 0055b709: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0055b70d: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0055b711: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0055b714: jmp 0x55b737 */ goto L_0055b737;
L_0055b737:; BB(0x0055b737);
    /* 0055b737: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055b73a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055b73b: ret  */ FN_RET(0x0055b4ff); r_esp += 4; return;
L_0055b73c:; BB(0x0055b73c);
    /* 0055b73c: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0055b740: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0055b744: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0055b747: jmp 0x55b737 */ goto L_0055b737;
}

void f_0055b798(void) /* sub_55B798 */
{
    FN_ENTER(0x0055b798);
    /* 0055b798: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0055b79c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b79e: je 0x55b7fa */ if (fZ) goto L_0055b7fa;
L_0055b7a0:; BB(0x0055b7a0);
    /* 0055b7a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b7a3: je 0x55b7ed */ if (fZ) goto L_0055b7ed;
L_0055b7a5:; BB(0x0055b7a5);
    /* 0055b7a5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b7a8: je 0x55b7e0 */ if (fZ) goto L_0055b7e0;
L_0055b7aa:; BB(0x0055b7aa);
    /* 0055b7aa: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b7ad: je 0x55b7d3 */ if (fZ) goto L_0055b7d3;
L_0055b7af:; BB(0x0055b7af);
    /* 0055b7af: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b7b2: jne 0x55b7c1 */ if (!fZ) goto L_0055b7c1;
L_0055b7b4:; BB(0x0055b7b4);
    /* 0055b7b4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055b7b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b7b9: call 0x55b850 */ r_esp -= 4; W32(r_esp, 0x55b7beu); f_0055b850();
    /* 0055b7be: ret 8 */ FN_RET(0x0055b798); r_esp += 12; return;
L_0055b7c1:; BB(0x0055b7c1);
    /* 0055b7c1: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055b7c4: jne 0x55b7dd */ if (!fZ) goto L_0055b7dd;
L_0055b7c6:; BB(0x0055b7c6);
    /* 0055b7c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055b7ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b7cb: call 0x55b808 */ r_esp -= 4; W32(r_esp, 0x55b7d0u); f_0055b808();
    /* 0055b7d0: ret 8 */ FN_RET(0x0055b798); r_esp += 12; return;
L_0055b7d3:; BB(0x0055b7d3);
    /* 0055b7d3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055b7d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b7d8: call 0x55b954 */ r_esp -= 4; W32(r_esp, 0x55b7ddu); f_0055b954();
L_0055b7dd:; BB(0x0055b7dd);
    /* 0055b7dd: ret 8 */ FN_RET(0x0055b798); r_esp += 12; return;
L_0055b7e0:; BB(0x0055b7e0);
    /* 0055b7e0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055b7e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b7e5: call 0x55ba0c */ r_esp -= 4; W32(r_esp, 0x55b7eau); f_0055ba0c();
    /* 0055b7ea: ret 8 */ FN_RET(0x0055b798); r_esp += 12; return;
L_0055b7ed:; BB(0x0055b7ed);
    /* 0055b7ed: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055b7f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b7f2: call 0x55bcc8 */ r_esp -= 4; W32(r_esp, 0x55b7f7u); f_0055bcc8();
    /* 0055b7f7: ret 8 */ FN_RET(0x0055b798); r_esp += 12; return;
L_0055b7fa:; BB(0x0055b7fa);
    /* 0055b7fa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055b7fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b7ff: call 0x55bdbc */ r_esp -= 4; W32(r_esp, 0x55b804u); f_0055bdbc();
    /* 0055b804: ret 8 */ FN_RET(0x0055b798); r_esp += 12; return;
}

void f_0055b808(void) /* sub_55B808 */
{
    FN_ENTER(0x0055b808);
    /* 0055b808: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055b809: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0055b80b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055b80f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b812: je 0x55b82a */ if (fZ) goto L_0055b82a;
L_0055b814:; BB(0x0055b814);
    /* 0055b814: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055b817: jne 0x55b826 */ if (!fZ) goto L_0055b826;
L_0055b819:; BB(0x0055b819);
    /* 0055b819: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0055b81d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055b822: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_0055b826:; BB(0x0055b826);
    /* 0055b826: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055b827: ret 4 */ FN_RET(0x0055b808); r_esp += 8; return;
L_0055b82a:; BB(0x0055b82a);
    /* 0055b82a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055b82d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055b82f: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x55b835u); call_ind(t); }
    /* 0055b835: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055b836: mov eax, dword ptr [ebp + 0x474] */ r_eax = R32((u32)(r_ebp+0x474u));
    /* 0055b83c: or eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055b83f: mov dword ptr [ebp + 0x474], eax */ W32((u32)(r_ebp+0x474u), r_eax);
    /* 0055b845: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x55b84au); f_008113e4();
    /* 0055b84a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055b84b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055b84c: ret 4 */ FN_RET(0x0055b808); r_esp += 8; return;
}

void f_0055b850(void) /* sub_55B850 */
{
    FN_ENTER(0x0055b850);
    /* 0055b850: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055b851: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b852: mov esi, ecx */ r_esi = r_ecx;
    /* 0055b854: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0055b858: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b85b: je 0x55b901 */ if (fZ) goto L_0055b901;
L_0055b861:; BB(0x0055b861);
    /* 0055b861: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b864: je 0x55b8e8 */ if (fZ) goto L_0055b8e8;
L_0055b86a:; BB(0x0055b86a);
    /* 0055b86a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055b86c: jne 0x55b8fc */ if (!fZ) goto L_0055b8fc;
L_0055b872:; BB(0x0055b872);
    /* 0055b872: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b874: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55b879u); f_007aa094();
    /* 0055b879: mov eax, dword ptr [esi + 0x43c] */ r_eax = R32((u32)(r_esi+0x43cu));
    /* 0055b87f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055b882: mov dword ptr [esi + 0x43c], eax */ W32((u32)(r_esi+0x43cu), r_eax);
    /* 0055b888: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b88b: jl 0x55b8d9 */ if ((fS!=fO)) goto L_0055b8d9;
L_0055b88d:; BB(0x0055b88d);
    /* 0055b88d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055b88f: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b891: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x55b897u); call_ind(t); }
    /* 0055b897: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055b89a: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0055b89d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b89e: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055b8a1: push 0x9254a8 */ { u32 v = 0x9254a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b8a6: push dword ptr [0xa73b88] */ { u32 v = R32((u32)(0xa73b88u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055b8ac: call 0x578aa0 */ r_esp -= 4; W32(r_esp, 0x55b8b1u); f_00578aa0();
    /* 0055b8b1: lea ebx, [esi + 0x300] */ r_ebx = (u32)(r_esi+0x300u);
    /* 0055b8b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055b8b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b8ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b8bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b8bc: push 0x2d7 */ { u32 v = 0x2d7u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b8c1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x55b8c6u); f_00814298();
    /* 0055b8c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b8c7: call 0x5787d0 */ r_esp -= 4; W32(r_esp, 0x55b8ccu); f_005787d0();
    /* 0055b8cc: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055b8cf: mov dword ptr [esi + 0x438], 1 */ W32((u32)(r_esi+0x438u), 0x1u);
L_0055b8d9:; BB(0x0055b8d9);
    /* 0055b8d9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055b8db: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b8dd: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x55b8e3u); call_ind(t); }
    /* 0055b8e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055b8e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055b8e5: ret 4 */ FN_RET(0x0055b850); r_esp += 8; return;
L_0055b8e8:; BB(0x0055b8e8);
    /* 0055b8e8: mov eax, dword ptr [esi + 0x438] */ r_eax = R32((u32)(r_esi+0x438u));
    /* 0055b8ee: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055b8f1: jne 0x55b8fc */ if (!fZ) goto L_0055b8fc;
L_0055b8f3:; BB(0x0055b8f3);
    /* 0055b8f3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b8f5: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b8f7: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55b8fcu); f_0051f62c();
L_0055b8fc:; BB(0x0055b8fc);
    /* 0055b8fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055b8fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055b8fe: ret 4 */ FN_RET(0x0055b850); r_esp += 8; return;
L_0055b901:; BB(0x0055b901);
    /* 0055b901: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b903: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055b905: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0055b90c: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b90e: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55b913u); f_0051f664();
    /* 0055b913: mov eax, dword ptr [esi + 0x474] */ r_eax = R32((u32)(r_esi+0x474u));
    /* 0055b919: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0055b91b: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055b91e: and eax, 0xffffffeb */ {  u32 a = r_eax; u32 b = 0xffffffebu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055b921: mov dword ptr [esi + 0x474], eax */ W32((u32)(r_esi+0x474u), r_eax);
    /* 0055b927: mov ecx, esi */ r_ecx = r_esi;
    /* 0055b929: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x55b92fu); call_ind(t); }
    /* 0055b92f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b931: lea eax, [esi + 0x468] */ r_eax = (u32)(r_esi+0x468u);
    /* 0055b937: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b938: call 0x5788b8 */ r_esp -= 4; W32(r_esp, 0x55b93du); f_005788b8();
    /* 0055b93d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055b940: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055b942: mov dword ptr [esi + 0x438], eax */ W32((u32)(r_esi+0x438u), r_eax);
    /* 0055b948: mov dword ptr [esi + 0x43c], eax */ W32((u32)(r_esi+0x43cu), r_eax);
    /* 0055b94e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055b94f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055b950: ret 4 */ FN_RET(0x0055b850); r_esp += 8; return;
}

void f_0055b954(void) /* sub_55B954 */
{
    FN_ENTER(0x0055b954);
    /* 0055b954: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055b955: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b956: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0055b958: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0055b95c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b95f: je 0x55b9bc */ if (fZ) goto L_0055b9bc;
L_0055b961:; BB(0x0055b961);
    /* 0055b961: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b964: je 0x55b981 */ if (fZ) goto L_0055b981;
L_0055b966:; BB(0x0055b966);
    /* 0055b966: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055b968: jne 0x55b9b7 */ if (!fZ) goto L_0055b9b7;
L_0055b96a:; BB(0x0055b96a);
    /* 0055b96a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055b96c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55b971u); f_007aa094();
    /* 0055b971: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055b974: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055b976: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x55b97cu); call_ind(t); }
    /* 0055b97c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055b97d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055b97e: ret 4 */ FN_RET(0x0055b954); r_esp += 8; return;
L_0055b981:; BB(0x0055b981);
    /* 0055b981: mov eax, dword ptr [ebp + 0x4c4] */ r_eax = R32((u32)(r_ebp+0x4c4u));
    /* 0055b987: lea ecx, [ebp + 0x4c4] */ r_ecx = (u32)(r_ebp+0x4c4u);
    /* 0055b98d: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x55b990u); call_ind(t); }
    /* 0055b990: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055b992: je 0x55b9b7 */ if (fZ) goto L_0055b9b7;
L_0055b994:; BB(0x0055b994);
    /* 0055b994: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b996: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055b998: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55b99du); f_0051f62c();
    /* 0055b99d: mov eax, dword ptr [ebp + 0x474] */ r_eax = R32((u32)(r_ebp+0x474u));
    /* 0055b9a3: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0055b9a6: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055b9a9: mov dword ptr [ebp + 0x474], eax */ W32((u32)(r_ebp+0x474u), r_eax);
    /* 0055b9af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055b9b1: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x55b9b7u); call_ind(t); }
L_0055b9b7:; BB(0x0055b9b7);
    /* 0055b9b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055b9b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055b9b9: ret 4 */ FN_RET(0x0055b954); r_esp += 8; return;
L_0055b9bc:; BB(0x0055b9bc);
    /* 0055b9bc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b9be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055b9c0: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0055b9c7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055b9c9: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55b9ceu); f_0051f664();
    /* 0055b9ce: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b9d0: mov eax, dword ptr [ebp + 0x4c4] */ r_eax = R32((u32)(r_ebp+0x4c4u));
    /* 0055b9d6: lea ebx, [ebp + 0x4c4] */ r_ebx = (u32)(r_ebp+0x4c4u);
    /* 0055b9dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055b9de: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x55b9e1u); call_ind(t); }
    /* 0055b9e1: mov eax, dword ptr [ebp + 0x4c4] */ r_eax = R32((u32)(r_ebp+0x4c4u));
    /* 0055b9e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055b9e9: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x55b9ecu); call_ind(t); }
    /* 0055b9ec: mov eax, dword ptr [ebp + 0x474] */ r_eax = R32((u32)(r_ebp+0x474u));
    /* 0055b9f2: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0055b9f5: and eax, 0xffffffeb */ {  u32 a = r_eax; u32 b = 0xffffffebu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055b9f8: mov dword ptr [ebp + 0x474], eax */ W32((u32)(r_ebp+0x474u), r_eax);
    /* 0055b9fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ba00: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x55ba06u); call_ind(t); }
    /* 0055ba06: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055ba07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055ba08: ret 4 */ FN_RET(0x0055b954); r_esp += 8; return;
}

void f_0055ba0c(void) /* sub_55BA0C */
{
    FN_ENTER(0x0055ba0c);
    /* 0055ba0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055ba0d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ba0e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055ba11: mov esi, ecx */ r_esi = r_ecx;
    /* 0055ba13: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0055ba17: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ba1a: je 0x55bbdd */ if (fZ) goto L_0055bbdd;
L_0055ba20:; BB(0x0055ba20);
    /* 0055ba20: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ba23: je 0x55bbc2 */ if (fZ) goto L_0055bbc2;
L_0055ba29:; BB(0x0055ba29);
    /* 0055ba29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ba2b: jne 0x55bbd5 */ if (!fZ) goto L_0055bbd5;
L_0055ba31:; BB(0x0055ba31);
    /* 0055ba31: mov ecx, esi */ r_ecx = r_esi;
    /* 0055ba33: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55ba38u); f_007aa094();
    /* 0055ba38: mov eax, dword ptr [esi + 0x438] */ r_eax = R32((u32)(r_esi+0x438u));
    /* 0055ba3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ba40: je 0x55bb29 */ if (fZ) goto L_0055bb29;
L_0055ba46:; BB(0x0055ba46);
    /* 0055ba46: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ba49: jne 0x55bae0 */ if (!fZ) goto L_0055bae0;
L_0055ba4f:; BB(0x0055ba4f);
    /* 0055ba4f: movzx eax, word ptr [esi + 0x478] */ r_eax = (u32)R16((u32)(r_esi+0x478u));
    /* 0055ba56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ba57: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55ba5cu); f_007b4d18();
    /* 0055ba5c: mov ebx, eax */ r_ebx = r_eax;
    /* 0055ba5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ba61: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ba63: je 0x55ba9f */ if (fZ) goto L_0055ba9f;
L_0055ba65:; BB(0x0055ba65);
    /* 0055ba65: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055ba67: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x55ba6cu); f_006dc358();
    /* 0055ba6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ba6f: jne 0x55ba8f */ if (!fZ) goto L_0055ba8f;
L_0055ba71:; BB(0x0055ba71);
    /* 0055ba71: mov eax, dword ptr [esi + 0x474] */ r_eax = R32((u32)(r_esi+0x474u));
    /* 0055ba77: mov dword ptr [esi + 0x438], 2 */ W32((u32)(r_esi+0x438u), 0x2u);
    /* 0055ba81: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055ba84: mov dword ptr [esi + 0x474], eax */ W32((u32)(r_esi+0x474u), r_eax);
    /* 0055ba8a: jmp 0x55bba6 */ goto L_0055bba6;
L_0055ba8f:; BB(0x0055ba8f);
    /* 0055ba8f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055ba91: call 0x55accc */ r_esp -= 4; W32(r_esp, 0x55ba96u); f_0055accc();
    /* 0055ba96: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ba99: je 0x55bba6 */ if (fZ) goto L_0055bba6;
L_0055ba9f:; BB(0x0055ba9f);
    /* 0055ba9f: mov eax, dword ptr [esi + 0x440] */ r_eax = R32((u32)(r_esi+0x440u));
    /* 0055baa5: add eax, dword ptr [esi + 0x444] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x444u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055baab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055baac: mov dword ptr [esi + 0x440], eax */ W32((u32)(r_esi+0x440u), r_eax);
    /* 0055bab2: mov ecx, esi */ r_ecx = r_esi;
    /* 0055bab4: call 0x55bc2c */ r_esp -= 4; W32(r_esp, 0x55bab9u); f_0055bc2c();
    /* 0055bab9: mov ecx, esi */ r_ecx = r_esi;
    /* 0055babb: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x55bac0u); f_00521410();
    /* 0055bac0: mov eax, dword ptr [0xa73c08] */ r_eax = R32((u32)(0xa73c08u));
    /* 0055bac5: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055bac8: push dword ptr [esi + 0x3b0] */ { u32 v = R32((u32)(r_esi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055bace: mov ecx, esi */ r_ecx = r_esi;
    /* 0055bad0: push dword ptr [esi + 0x3a8] */ { u32 v = R32((u32)(r_esi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055bad6: call 0x520adc */ r_esp -= 4; W32(r_esp, 0x55badbu); f_00520adc();
    /* 0055badb: jmp 0x55bba6 */ goto L_0055bba6;
L_0055bae0:; BB(0x0055bae0);
    /* 0055bae0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bae3: jne 0x55bba6 */ if (!fZ) goto L_0055bba6;
L_0055bae9:; BB(0x0055bae9);
    /* 0055bae9: movzx eax, word ptr [esi + 0x478] */ r_eax = (u32)R16((u32)(r_esi+0x478u));
    /* 0055baf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055baf1: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55baf6u); f_007b4d18();
    /* 0055baf6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055baf7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055baf9: je 0x55bba6 */ if (fZ) goto L_0055bba6;
L_0055baff:; BB(0x0055baff);
    /* 0055baff: mov ecx, eax */ r_ecx = r_eax;
    /* 0055bb01: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x55bb06u); f_006dc358();
    /* 0055bb06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bb08: jne 0x55bba6 */ if (!fZ) goto L_0055bba6;
L_0055bb0e:; BB(0x0055bb0e);
    /* 0055bb0e: mov eax, dword ptr [esi + 0x474] */ r_eax = R32((u32)(r_esi+0x474u));
    /* 0055bb14: mov dword ptr [esi + 0x438], 1 */ W32((u32)(r_esi+0x438u), 0x1u);
    /* 0055bb1e: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055bb21: mov dword ptr [esi + 0x474], eax */ W32((u32)(r_esi+0x474u), r_eax);
    /* 0055bb27: jmp 0x55bba6 */ goto L_0055bba6;
L_0055bb29:; BB(0x0055bb29);
    /* 0055bb29: mov edx, dword ptr [0xa73c08] */ r_edx = R32((u32)(0xa73c08u));
    /* 0055bb2f: fld dword ptr [0x9254a0] */ FPUSH(R_F32((u32)(0x9254a0u)));
    /* 0055bb35: mov eax, dword ptr [esi + 0x474] */ r_eax = R32((u32)(r_esi+0x474u));
    /* 0055bb3b: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bb40: je 0x55bb70 */ if (fZ) goto L_0055bb70;
L_0055bb42:; BB(0x0055bb42);
    /* 0055bb42: fld dword ptr [0x92549c] */ FPUSH(R_F32((u32)(0x92549cu)));
    /* 0055bb48: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 0055bb4b: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0055bb4d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0055bb4f: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0055bb51: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0055bb54: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0055bb58: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055bb5d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0055bb61: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0055bb65: fistp dword ptr [esi + 0x444] */ W32((u32)(r_esi+0x444u), (u32)fx_int32(ST(0))); FPOP();
    /* 0055bb6b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0055bb6e: jmp 0x55bb9c */ goto L_0055bb9c;
L_0055bb70:; BB(0x0055bb70);
    /* 0055bb70: fld dword ptr [0x9254a4] */ FPUSH(R_F32((u32)(0x9254a4u)));
    /* 0055bb76: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 0055bb79: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0055bb7b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0055bb7d: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0055bb7f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0055bb82: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0055bb86: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055bb8b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0055bb8f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0055bb93: fistp dword ptr [esi + 0x444] */ W32((u32)(r_esi+0x444u), (u32)fx_int32(ST(0))); FPOP();
    /* 0055bb99: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
L_0055bb9c:; BB(0x0055bb9c);
    /* 0055bb9c: mov dword ptr [esi + 0x438], 1 */ W32((u32)(r_esi+0x438u), 0x1u);
L_0055bba6:; BB(0x0055bba6);
    /* 0055bba6: mov ecx, esi */ r_ecx = r_esi;
    /* 0055bba8: call 0x55bc74 */ r_esp -= 4; W32(r_esp, 0x55bbadu); f_0055bc74();
    /* 0055bbad: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0055bbb0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055bbb2: mov ecx, esi */ r_ecx = r_esi;
    /* 0055bbb4: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x55bbbau); call_ind(t); }
    /* 0055bbba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055bbbd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055bbbe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055bbbf: ret 4 */ FN_RET(0x0055ba0c); r_esp += 8; return;
L_0055bbc2:; BB(0x0055bbc2);
    /* 0055bbc2: mov eax, dword ptr [esi + 0x474] */ r_eax = R32((u32)(r_esi+0x474u));
    /* 0055bbc8: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055bbca: je 0x55bbd5 */ if (fZ) goto L_0055bbd5;
L_0055bbcc:; BB(0x0055bbcc);
    /* 0055bbcc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bbce: mov ecx, esi */ r_ecx = r_esi;
    /* 0055bbd0: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55bbd5u); f_0051f62c();
L_0055bbd5:; BB(0x0055bbd5);
    /* 0055bbd5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055bbd8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055bbd9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055bbda: ret 4 */ FN_RET(0x0055ba0c); r_esp += 8; return;
L_0055bbdd:; BB(0x0055bbdd);
    /* 0055bbdd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bbdf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055bbe1: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0055bbe8: mov ecx, esi */ r_ecx = r_esi;
    /* 0055bbea: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55bbefu); f_0051f664();
    /* 0055bbef: mov eax, dword ptr [esi + 0x474] */ r_eax = R32((u32)(r_esi+0x474u));
    /* 0055bbf5: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0055bbf7: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055bbfa: and eax, 0xffffffe7 */ {  u32 a = r_eax; u32 b = 0xffffffe7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055bbfd: mov dword ptr [esi + 0x474], eax */ W32((u32)(r_esi+0x474u), r_eax);
    /* 0055bc03: mov ecx, esi */ r_ecx = r_esi;
    /* 0055bc05: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x55bc0bu); call_ind(t); }
    /* 0055bc0b: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 0055bc0e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055bc10: mov dword ptr [esi + 0x438], edx */ W32((u32)(r_esi+0x438u), r_edx);
    /* 0055bc16: mov dword ptr [esi + 0x440], eax */ W32((u32)(r_esi+0x440u), r_eax);
    /* 0055bc1c: mov dword ptr [esi + 0x444], edx */ W32((u32)(r_esi+0x444u), r_edx);
    /* 0055bc22: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055bc25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055bc26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055bc27: ret 4 */ FN_RET(0x0055ba0c); r_esp += 8; return;
}

void f_0055bc2c(void) /* sub_55BC2C */
{
    FN_ENTER(0x0055bc2c);
    /* 0055bc2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055bc2d: mov edi, ecx */ r_edi = r_ecx;
    /* 0055bc2f: mov ecx, edi */ r_ecx = r_edi;
    /* 0055bc31: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x55bc36u); f_005213d8();
    /* 0055bc36: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0055bc3a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x55bc3fu); f_0082dcbc();
    /* 0055bc3f: mov eax, dword ptr [0xa73c08] */ r_eax = R32((u32)(0xa73c08u));
    /* 0055bc44: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 0055bc46: fadd dword ptr [edi + 0x39c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x39cu));
    /* 0055bc4c: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0055bc50: fstp dword ptr [edi + 0x39c] */ W_F32((u32)(r_edi+0x39cu), ST(0)); FPOP();
    /* 0055bc56: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x55bc5bu); f_0082ddd8();
    /* 0055bc5b: mov eax, dword ptr [0xa73c08] */ r_eax = R32((u32)(0xa73c08u));
    /* 0055bc60: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 0055bc62: fadd dword ptr [edi + 0x3a4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3a4u));
    /* 0055bc68: fstp dword ptr [edi + 0x3a4] */ W_F32((u32)(r_edi+0x3a4u), ST(0)); FPOP();
    /* 0055bc6e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055bc6f: ret 4 */ FN_RET(0x0055bc2c); r_esp += 8; return;
}

void f_0055bc74(void) /* sub_55BC74 */
{
    FN_ENTER(0x0055bc74);
    /* 0055bc74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055bc75: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055bc78: mov edi, ecx */ r_edi = r_ecx;
    /* 0055bc7a: mov ecx, edi */ r_ecx = r_edi;
    /* 0055bc7c: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x55bc81u); f_005213d8();
    /* 0055bc81: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 0055bc84: fsub dword ptr [edi + 0x39c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x39cu));
    /* 0055bc8a: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 0055bc8d: fsub dword ptr [edi + 0x3a4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3a4u));
    /* 0055bc93: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0055bc95: fmul qword ptr [0x925468] */ ST(0) = ST(0) * R_F64((u32)(0x925468u));
    /* 0055bc9b: fdiv qword ptr [0x925460] */ ST(0) = ST(0) / R_F64((u32)(0x925460u));
    /* 0055bca1: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0055bca4: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0055bca8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055bcad: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0055bcb1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0055bcb5: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0055bcb9: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0055bcbc: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0055bcc0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055bcc3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055bcc4: ret  */ FN_RET(0x0055bc74); r_esp += 4; return;
}

void f_0055bcc8(void) /* sub_55BCC8 */
{
    FN_ENTER(0x0055bcc8);
    /* 0055bcc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055bcc9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0055bccb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055bccf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bcd2: je 0x55bd89 */ if (fZ) goto L_0055bd89;
L_0055bcd8:; BB(0x0055bcd8);
    /* 0055bcd8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bcdb: je 0x55bd72 */ if (fZ) goto L_0055bd72;
L_0055bce1:; BB(0x0055bce1);
    /* 0055bce1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055bce3: jne 0x55bd85 */ if (!fZ) goto L_0055bd85;
L_0055bce9:; BB(0x0055bce9);
    /* 0055bce9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055bceb: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55bcf0u); f_007aa094();
    /* 0055bcf0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055bcf2: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x55bcf7u); f_005213d8();
    /* 0055bcf7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055bcf9: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x55bcfeu); f_00521410();
    /* 0055bcfe: mov edx, dword ptr [ebp + 0x474] */ r_edx = R32((u32)(r_ebp+0x474u));
    /* 0055bd04: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bd0a: jne 0x55bd59 */ if (!fZ) goto L_0055bd59;
L_0055bd0c:; BB(0x0055bd0c);
    /* 0055bd0c: mov eax, dword ptr [0xa73c08] */ r_eax = R32((u32)(0xa73c08u));
    /* 0055bd11: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0055bd14: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0055bd16: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 0055bd19: fcomp dword ptr [ebp + 0x3b4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3b4u))); FPOP();
    /* 0055bd1f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055bd21: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055bd22: jae 0x55bd32 */ if (!fC) goto L_0055bd32;
L_0055bd24:; BB(0x0055bd24);
    /* 0055bd24: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0055bd2a: mov dword ptr [ebp + 0x474], edx */ W32((u32)(r_ebp+0x474u), r_edx);
    /* 0055bd30: jmp 0x55bd59 */ goto L_0055bd59;
L_0055bd32:; BB(0x0055bd32);
    /* 0055bd32: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 0055bd38: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
    /* 0055bd3e: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055bd41: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0055bd45: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055bd47: fchs  */ ST(0) = -ST(0);
    /* 0055bd49: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055bd4c: fchs  */ ST(0) = -ST(0);
    /* 0055bd4e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0055bd52: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055bd54: call 0x520adc */ r_esp -= 4; W32(r_esp, 0x55bd59u); f_00520adc();
L_0055bd59:; BB(0x0055bd59);
    /* 0055bd59: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055bd5b: call 0x55bc74 */ r_esp -= 4; W32(r_esp, 0x55bd60u); f_0055bc74();
    /* 0055bd60: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0055bd63: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055bd66: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055bd68: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x55bd6eu); call_ind(t); }
    /* 0055bd6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055bd6f: ret 4 */ FN_RET(0x0055bcc8); r_esp += 8; return;
L_0055bd72:; BB(0x0055bd72);
    /* 0055bd72: mov eax, dword ptr [ebp + 0x474] */ r_eax = R32((u32)(r_ebp+0x474u));
    /* 0055bd78: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055bd7a: je 0x55bd85 */ if (fZ) goto L_0055bd85;
L_0055bd7c:; BB(0x0055bd7c);
    /* 0055bd7c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bd7e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055bd80: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55bd85u); f_0051f62c();
L_0055bd85:; BB(0x0055bd85);
    /* 0055bd85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055bd86: ret 4 */ FN_RET(0x0055bcc8); r_esp += 8; return;
L_0055bd89:; BB(0x0055bd89);
    /* 0055bd89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bd8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055bd8d: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0055bd94: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055bd96: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55bd9bu); f_0051f664();
    /* 0055bd9b: mov eax, dword ptr [ebp + 0x474] */ r_eax = R32((u32)(r_ebp+0x474u));
    /* 0055bda1: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0055bda4: and eax, 0xfffffde9 */ {  u32 a = r_eax; u32 b = 0xfffffde9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055bda9: mov dword ptr [ebp + 0x474], eax */ W32((u32)(r_ebp+0x474u), r_eax);
    /* 0055bdaf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055bdb1: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x55bdb7u); call_ind(t); }
    /* 0055bdb7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055bdb8: ret 4 */ FN_RET(0x0055bcc8); r_esp += 8; return;
}

void f_0055bdbc(void) /* sub_55BDBC */
{
    FN_ENTER(0x0055bdbc);
    /* 0055bdbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055bdbd: mov esi, ecx */ r_esi = r_ecx;
    /* 0055bdbf: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055bdc3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bdc6: je 0x55bdfb */ if (fZ) goto L_0055bdfb;
L_0055bdc8:; BB(0x0055bdc8);
    /* 0055bdc8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bdcb: je 0x55bde4 */ if (fZ) goto L_0055bde4;
L_0055bdcd:; BB(0x0055bdcd);
    /* 0055bdcd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055bdcf: jne 0x55bdf7 */ if (!fZ) goto L_0055bdf7;
L_0055bdd1:; BB(0x0055bdd1);
    /* 0055bdd1: mov eax, dword ptr [esi + 0x474] */ r_eax = R32((u32)(r_esi+0x474u));
    /* 0055bdd7: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055bdda: mov dword ptr [esi + 0x474], eax */ W32((u32)(r_esi+0x474u), r_eax);
    /* 0055bde0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055bde1: ret 4 */ FN_RET(0x0055bdbc); r_esp += 8; return;
L_0055bde4:; BB(0x0055bde4);
    /* 0055bde4: mov eax, dword ptr [esi + 0x474] */ r_eax = R32((u32)(r_esi+0x474u));
    /* 0055bdea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055bdec: je 0x55bdf7 */ if (fZ) goto L_0055bdf7;
L_0055bdee:; BB(0x0055bdee);
    /* 0055bdee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bdf0: mov ecx, esi */ r_ecx = r_esi;
    /* 0055bdf2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55bdf7u); f_0051f62c();
L_0055bdf7:; BB(0x0055bdf7);
    /* 0055bdf7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055bdf8: ret 4 */ FN_RET(0x0055bdbc); r_esp += 8; return;
L_0055bdfb:; BB(0x0055bdfb);
    /* 0055bdfb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055bdfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055bdfe: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0055be05: mov ecx, esi */ r_ecx = r_esi;
    /* 0055be07: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55be0cu); f_0051f664();
    /* 0055be0c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0055be0e: mov ecx, esi */ r_ecx = r_esi;
    /* 0055be10: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x55be16u); call_ind(t); }
    /* 0055be16: mov eax, dword ptr [esi + 0x474] */ r_eax = R32((u32)(r_esi+0x474u));
    /* 0055be1c: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055be1f: and eax, 0xfffffffa */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055be22: mov dword ptr [esi + 0x474], eax */ W32((u32)(r_esi+0x474u), r_eax);
    /* 0055be28: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055be29: ret 4 */ FN_RET(0x0055bdbc); r_esp += 8; return;
}

void f_0055be2c(void) /* sub_55BE2C */
{
    FN_ENTER(0x0055be2c);
    /* 0055be2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055be2e: lea eax, [ecx + 0x300] */ r_eax = (u32)(r_ecx+0x300u);
    /* 0055be34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055be35: call 0x77535c */ r_esp -= 4; W32(r_esp, 0x55be3au); f_0077535c();
    /* 0055be3a: fld dword ptr [0x925498] */ FPUSH(R_F32((u32)(0x925498u)));
    /* 0055be40: ret 8 */ FN_RET(0x0055be2c); r_esp += 12; return;
}

void f_0055be44(void) /* sub_55BE44 */
{
    FN_ENTER(0x0055be44);
    /* 0055be44: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055be48: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055be4b: je 0x55be64 */ if (fZ) goto L_0055be64;
L_0055be4d:; BB(0x0055be4d);
    /* 0055be4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055be4f: lea eax, [ecx + 0x300] */ r_eax = (u32)(r_ecx+0x300u);
    /* 0055be55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055be56: call 0x77535c */ r_esp -= 4; W32(r_esp, 0x55be5bu); f_0077535c();
    /* 0055be5b: fld dword ptr [0x925494] */ FPUSH(R_F32((u32)(0x925494u)));
    /* 0055be61: ret 0x18 */ FN_RET(0x0055be44); r_esp += 28; return;
L_0055be64:; BB(0x0055be64);
    /* 0055be64: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055be68: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055be6c: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055be70: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055be74: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055be78: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055be7c: call 0x773afc */ r_esp -= 4; W32(r_esp, 0x55be81u); f_00773afc();
    /* 0055be81: ret 0x18 */ FN_RET(0x0055be44); r_esp += 28; return;
}

void f_0055be84(void) /* sub_55BE84 */
{
    FN_ENTER(0x0055be84);
    /* 0055be84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055be86: lea eax, [ecx + 0x300] */ r_eax = (u32)(r_ecx+0x300u);
    /* 0055be8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055be8d: call 0x77535c */ r_esp -= 4; W32(r_esp, 0x55be92u); f_0077535c();
    /* 0055be92: fld dword ptr [0x925490] */ FPUSH(R_F32((u32)(0x925490u)));
    /* 0055be98: ret 8 */ FN_RET(0x0055be84); r_esp += 12; return;
}

void f_0055be9c(void) /* sub_55BE9C */
{
    FN_ENTER(0x0055be9c);
    /* 0055be9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055be9d: mov ebp, esp */ r_ebp = r_esp;
    /* 0055be9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0055bea1: push 0x8d6574 */ { u32 v = 0x8d6574u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bea6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0055beac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055bead: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0055beb4: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055beb7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0055beba: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0055bebd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0055bec0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0055bec3: push 0x4e0 */ { u32 v = 0x4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bec8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0055becf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x55bed4u); f_005caba4();
    /* 0055bed4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0055bed7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055beda: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0055bedd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bedf: je 0x55c00a */ if (fZ) goto L_0055c00a;
L_0055bee5:; BB(0x0055bee5);
    /* 0055bee5: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0055beec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055bef3: mov ecx, eax */ r_ecx = r_eax;
    /* 0055bef5: mov eax, dword ptr [0xaca360] */ r_eax = R32((u32)(0xaca360u));
    /* 0055befa: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0055befd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055befe: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0055bf01: call 0x557974 */ r_esp -= 4; W32(r_esp, 0x55bf06u); f_00557974();
    /* 0055bf06: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0055bf0d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055bf10: mov dword ptr [eax], 0xb04f20 */ W32((u32)(r_eax), 0xb04f20u);
    /* 0055bf16: lea ecx, [eax + 0x4c4] */ r_ecx = (u32)(r_eax+0x4c4u);
    /* 0055bf1c: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x55bf21u); f_00576a48();
    /* 0055bf21: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0055bf28: mov eax, dword ptr [0x9bdf38] */ r_eax = R32((u32)(0x9bdf38u));
    /* 0055bf2d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055bf30: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0055bf33: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055bf34: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0055bf37: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0055bf3b: mov word ptr [ecx + 0x478], dx */ W16((u32)(r_ecx+0x478u), (u16)r_edx);
    /* 0055bf42: call 0x51f760 */ r_esp -= 4; W32(r_esp, 0x55bf47u); f_0051f760();
    /* 0055bf47: movzx edx, word ptr [ebp + 0xc] */ r_edx = (u32)R16((u32)(r_ebp+0xcu));
    /* 0055bf4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055bf4e: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0055bf51: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0055bf54: mov word ptr [ecx + 0x1c], dx */ W16((u32)(r_ecx+0x1cu), (u16)r_edx);
    /* 0055bf58: mov word ptr [ecx + 0x2c], bx */ W16((u32)(r_ecx+0x2cu), (u16)r_ebx);
    /* 0055bf5c: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 0055bf5f: movzx esi, word ptr [eax + 0x28] */ r_esi = (u32)R16((u32)(r_eax+0x28u));
    /* 0055bf63: mov word ptr [ecx + 0x28], si */ W16((u32)(r_ecx+0x28u), (u16)r_esi);
    /* 0055bf67: movzx edi, word ptr [eax + 0x2a] */ r_edi = (u32)R16((u32)(r_eax+0x2au));
    /* 0055bf6b: mov word ptr [ecx + 0x2a], di */ W16((u32)(r_ecx+0x2au), (u16)r_edi);
    /* 0055bf6f: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0055bf71: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0055bf74: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0055bf77: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0055bf7a: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0055bf7d: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 0055bf80: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0055bf83: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 0055bf86: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0055bf89: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 0055bf8c: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 0055bf8f: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 0055bf92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055bf94: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 0055bf97: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 0055bf9a: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0055bf9d: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 0055bfa0: call 0x55c190 */ r_esp -= 4; W32(r_esp, 0x55bfa5u); f_0055c190();
    /* 0055bfa5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055bfa8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055bfaa: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x55bfb0u); call_ind(t); }
    /* 0055bfb0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055bfb3: mov eax, dword ptr [edx + 0x474] */ r_eax = R32((u32)(r_edx+0x474u));
    /* 0055bfb9: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055bfbc: mov dword ptr [edx + 0x474], eax */ W32((u32)(r_edx+0x474u), r_eax);
    /* 0055bfc2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0055bfc4:; BB(0x0055bfc4);
    /* 0055bfc4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055bfc7: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0055bfca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055bfcc: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0055bfcf: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0055bfd1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0055bfd3: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0055bfd5: lea ecx, [edx + esi + 0x3c8] */ r_ecx = (u32)(r_edx+r_esi+0x3c8u);
    /* 0055bfdc: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x55bfe1u); f_0057739c();
    /* 0055bfe1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0055bfe4: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055bfe7: jl 0x55bfc4 */ if ((fS!=fO)) goto L_0055bfc4;
L_0055bfe9:; BB(0x0055bfe9);
    /* 0055bfe9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0055bff0:; BB(0x0055bff0);
    /* 0055bff0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055bff3: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055bff6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055bff9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055bffc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055bfff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055c006: mov esp, ebp */ r_esp = r_ebp;
    /* 0055c008: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055c009: ret  */ FN_RET(0x0055be9c); r_esp += 4; return;
L_0055c00a:; BB(0x0055c00a);
    /* 0055c00a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055c00c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0055c00f: jmp 0x55bff0 */ goto L_0055bff0;
}

