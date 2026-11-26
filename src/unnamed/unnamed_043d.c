#include "protos.h"

void f_0043d408(void) /* sub_43D408 */
{
    FN_ENTER(0x0043d408);
    /* 0043d408: movzx eax, word ptr [0x9a4e04] */ r_eax = (u32)R16((u32)(0x9a4e04u));
    /* 0043d40f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d410: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43d415u); f_007b4d18();
    /* 0043d415: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043d416: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d418: je 0x43d42b */ if (fZ) goto L_0043d42b;
L_0043d41a:; BB(0x0043d41a);
    /* 0043d41a: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0043d421: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043d423: jne 0x43d42b */ if (!fZ) goto L_0043d42b;
L_0043d425:; BB(0x0043d425);
    /* 0043d425: mov eax, 1 */ r_eax = 0x1u;
    /* 0043d42a: ret  */ FN_RET(0x0043d408); r_esp += 4; return;
L_0043d42b:; BB(0x0043d42b);
    /* 0043d42b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043d42d: ret  */ FN_RET(0x0043d408); r_esp += 4; return;
}

void f_0043d430(void) /* sub_43D430 */
{
    FN_ENTER(0x0043d430);
    /* 0043d430: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0043d432: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x43d437u); f_006bb100();
    /* 0043d437: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043d438: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x43d43du); f_007a61a4();
    /* 0043d43d: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d440: je 0x43d473 */ if (fZ) goto L_0043d473;
L_0043d442:; BB(0x0043d442);
    /* 0043d442: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x43d447u); f_006dc358();
    /* 0043d447: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d44a: je 0x43d46a */ if (fZ) goto L_0043d46a;
L_0043d44c:; BB(0x0043d44c);
    /* 0043d44c: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d44e: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x43d453u); f_006bb254();
    /* 0043d453: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043d454: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d456: je 0x43d461 */ if (fZ) goto L_0043d461;
L_0043d458:; BB(0x0043d458);
    /* 0043d458: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d45a: call 0x4408b4 */ r_esp -= 4; W32(r_esp, 0x43d45fu); f_004408b4();
    /* 0043d45f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043d460: ret  */ FN_RET(0x0043d430); r_esp += 4; return;
L_0043d461:; BB(0x0043d461);
    /* 0043d461: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d463: call 0x4408b4 */ r_esp -= 4; W32(r_esp, 0x43d468u); f_004408b4();
    /* 0043d468: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043d469: ret  */ FN_RET(0x0043d430); r_esp += 4; return;
L_0043d46a:; BB(0x0043d46a);
    /* 0043d46a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d46c: call 0x4408b4 */ r_esp -= 4; W32(r_esp, 0x43d471u); f_004408b4();
    /* 0043d471: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043d472: ret  */ FN_RET(0x0043d430); r_esp += 4; return;
L_0043d473:; BB(0x0043d473);
    /* 0043d473: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d475: call 0x4408b4 */ r_esp -= 4; W32(r_esp, 0x43d47au); f_004408b4();
    /* 0043d47a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043d47b: ret  */ FN_RET(0x0043d430); r_esp += 4; return;
}

void f_0043d47c(void) /* sub_43D47C */
{
    FN_ENTER(0x0043d47c);
    /* 0043d47c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043d47d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043d480: mov esi, ecx */ r_esi = r_ecx;
    /* 0043d482: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 0043d488: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d48a: je 0x43d5a2 */ if (fZ) goto L_0043d5a2;
L_0043d490:; BB(0x0043d490);
    /* 0043d490: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d493: je 0x43d57f */ if (fZ) goto L_0043d57f;
L_0043d499:; BB(0x0043d499);
    /* 0043d499: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d49c: je 0x43d558 */ if (fZ) goto L_0043d558;
L_0043d4a2:; BB(0x0043d4a2);
    /* 0043d4a2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d4a5: je 0x43d4ef */ if (fZ) goto L_0043d4ef;
L_0043d4a7:; BB(0x0043d4a7);
    /* 0043d4a7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d4aa: jne 0x43d4c2 */ if (!fZ) goto L_0043d4c2;
L_0043d4ac:; BB(0x0043d4ac);
    /* 0043d4ac: call 0x4d6864 */ r_esp -= 4; W32(r_esp, 0x43d4b1u); f_004d6864();
    /* 0043d4b1: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 0043d4b5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0043d4b7: je 0x43d53f */ if (fZ) goto L_0043d53f;
L_0043d4bd:; BB(0x0043d4bd);
    /* 0043d4bd: jmp 0x43d544 */ goto L_0043d544;
L_0043d4c2:; BB(0x0043d4c2);
    /* 0043d4c2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d4c5: jne 0x43d53f */ if (!fZ) goto L_0043d53f;
L_0043d4c7:; BB(0x0043d4c7);
    /* 0043d4c7: movzx eax, word ptr [0x9a4e04] */ r_eax = (u32)R16((u32)(0x9a4e04u));
    /* 0043d4ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d4cf: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43d4d4u); f_007b4d18();
    /* 0043d4d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043d4d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d4d7: je 0x43d4e0 */ if (fZ) goto L_0043d4e0;
L_0043d4d9:; BB(0x0043d4d9);
    /* 0043d4d9: mov ecx, eax */ r_ecx = r_eax;
    /* 0043d4db: call 0x44126c */ r_esp -= 4; W32(r_esp, 0x43d4e0u); f_0044126c();
L_0043d4e0:; BB(0x0043d4e0);
    /* 0043d4e0: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x43d4e5u); f_00717f38();
    /* 0043d4e5: call 0x6944b8 */ r_esp -= 4; W32(r_esp, 0x43d4eau); f_006944b8();
    /* 0043d4ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d4ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d4ee: ret  */ FN_RET(0x0043d47c); r_esp += 4; return;
L_0043d4ef:; BB(0x0043d4ef);
    /* 0043d4ef: mov byte ptr [esp], 2 */ W8((u32)(r_esp), 0x2u);
    /* 0043d4f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043d4f5: mov byte ptr [esp + 1], al */ W8((u32)(r_esp+0x1u), (u8)r_eax);
    /* 0043d4f9: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0043d501: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0043d506: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 0043d50e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d510: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x43d515u); f_004d31f4();
    /* 0043d515: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0043d519: push 0x160a */ { u32 v = 0x160au; r_esp -= 4; W32(r_esp, v); }
    /* 0043d51e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d51f: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x43d524u); f_004d6770();
    /* 0043d524: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0043d527: lea eax, [esi + 0x5c] */ r_eax = (u32)(r_esi+0x5cu);
    /* 0043d52a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d52b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d52c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d52d: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x43d532u); f_004d681c();
    /* 0043d532: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d535: mov dword ptr [esi + 0x384], 4 */ W32((u32)(r_esi+0x384u), 0x4u);
L_0043d53f:; BB(0x0043d53f);
    /* 0043d53f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d542: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d543: ret  */ FN_RET(0x0043d47c); r_esp += 4; return;
L_0043d544:; BB(0x0043d544);
    /* 0043d544: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x43d549u); f_004d3250();
    /* 0043d549: mov dword ptr [esi + 0x37c], 4 */ W32((u32)(r_esi+0x37cu), 0x4u);
    /* 0043d553: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d556: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d557: ret  */ FN_RET(0x0043d47c); r_esp += 4; return;
L_0043d558:; BB(0x0043d558);
    /* 0043d558: mov eax, dword ptr [esi + 0x38c] */ r_eax = R32((u32)(r_esi+0x38cu));
    /* 0043d55e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043d561: mov dword ptr [esi + 0x38c], eax */ W32((u32)(r_esi+0x38cu), r_eax);
    /* 0043d567: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043d569: jg 0x43d53f */ if ((!fZ&&fS==fO)) goto L_0043d53f;
L_0043d56b:; BB(0x0043d56b);
    /* 0043d56b: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x43d570u); f_004d3250();
    /* 0043d570: mov dword ptr [esi + 0x384], 3 */ W32((u32)(r_esi+0x384u), 0x3u);
    /* 0043d57a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d57d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d57e: ret  */ FN_RET(0x0043d47c); r_esp += 4; return;
L_0043d57f:; BB(0x0043d57f);
    /* 0043d57f: mov eax, dword ptr [0xa44c3c] */ r_eax = R32((u32)(0xa44c3cu));
    /* 0043d584: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d587: jne 0x43d53f */ if (!fZ) goto L_0043d53f;
L_0043d589:; BB(0x0043d589);
    /* 0043d589: mov dword ptr [esi + 0x38c], 0x96 */ W32((u32)(r_esi+0x38cu), 0x96u);
    /* 0043d593: mov dword ptr [esi + 0x384], 2 */ W32((u32)(r_esi+0x384u), 0x2u);
    /* 0043d59d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d5a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d5a1: ret  */ FN_RET(0x0043d47c); r_esp += 4; return;
L_0043d5a2:; BB(0x0043d5a2);
    /* 0043d5a2: mov ecx, esi */ r_ecx = r_esi;
    /* 0043d5a4: call 0x43eda4 */ r_esp -= 4; W32(r_esp, 0x43d5a9u); f_0043eda4();
    /* 0043d5a9: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5ab: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x43d5b0u); f_004d31f4();
    /* 0043d5b0: push 0x9a4e18 */ { u32 v = 0x9a4e18u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5b5: push 0x9a4e0c */ { u32 v = 0x9a4e0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5ba: call 0x4d33c0 */ r_esp -= 4; W32(r_esp, 0x43d5bfu); f_004d33c0();
    /* 0043d5bf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d5c2: call 0x69448c */ r_esp -= 4; W32(r_esp, 0x43d5c7u); f_0069448c();
    /* 0043d5c7: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x43d5ccu); f_00717f74();
    /* 0043d5cc: movzx eax, word ptr [0x9a4e04] */ r_eax = (u32)R16((u32)(0x9a4e04u));
    /* 0043d5d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5d4: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43d5d9u); f_007b4d18();
    /* 0043d5d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043d5da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d5dc: je 0x43d5e5 */ if (fZ) goto L_0043d5e5;
L_0043d5de:; BB(0x0043d5de);
    /* 0043d5de: mov ecx, eax */ r_ecx = r_eax;
    /* 0043d5e0: call 0x44127c */ r_esp -= 4; W32(r_esp, 0x43d5e5u); f_0044127c();
L_0043d5e5:; BB(0x0043d5e5);
    /* 0043d5e5: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 0043d5ef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d5f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d5f3: ret  */ FN_RET(0x0043d47c); r_esp += 4; return;
}

void f_0043d560(void)
{
    FN_ENTER(0x0043d560);
    /* 0043d560: dec dword ptr [ecx + 0x38c86] */ { u32 ad = (u32)(r_ecx+0x38c86u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0043d566: add byte ptr [ebp - 0x172b8040], al */ { u32 ad = (u32)(r_ebp+0xe8d47fc0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0043d56c: loopne 0x43d5ca */ r_ecx--; if (r_ecx && !fZ) goto L_0043d5ca;
    /* 0043d56e: or dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0043d570: mov dword ptr [esi + 0x384], 3 */ W32((u32)(r_esi+0x384u), 0x3u);
    /* 0043d57a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d57d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d57e: ret  */ FN_RET(0x0043d560); r_esp += 4; return;
L_0043d5ca:; BB(0x0043d5ca);
    /* 0043d5ca: sub eax, 0x5b70f00 */ {  u32 a = r_eax; u32 b = 0x5b70f00u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043d5cf: add al, 0x4e */ {  u32 a = (u8)r_eax; u32 b = 0x4eu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0043d5d1: lcall 0x3777, 0x3fe85000 */ UNSUP(0x0043d5d1, "lcall 0x3777, 0x3fe85000");
    /* 0043d5d8: add byte ptr [ecx - 0x7b], bl */ { u32 ad = (u32)(r_ecx+0xffffff85u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0043d5db: sal byte ptr [edi + eax - 0x75], 0xc8 */ { u32 ad = (u32)(r_edi+r_eax+0xffffff8bu); u32 c = (8u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 0043d5e0: call 0x44127c */ r_esp -= 4; W32(r_esp, 0x43d5e5u); f_0044127c();
    /* 0043d5e5: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 0043d5ef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d5f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043d5f3: ret  */ FN_RET(0x0043d560); r_esp += 4; return;
}

void f_0043d5f4(void) /* sub_43D5F4 */
{
    FN_ENTER(0x0043d5f4);
    /* 0043d5f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5f5: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d5f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5f9: push 0x8ce35e */ { u32 v = 0x8ce35eu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d5fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043d604: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d605: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043d60c: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043d60f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043d612: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0043d615: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0043d618: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0043d61b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043d61d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0043d620: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d621: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d622: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d624: push 0x33a */ { u32 v = 0x33au; r_esp -= 4; W32(r_esp, v); }
    /* 0043d629: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x43d62eu); f_008144b0();
    /* 0043d62e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d631: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d634: mov eax, dword ptr [eax + 0x384] */ r_eax = R32((u32)(r_eax+0x384u));
    /* 0043d63a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d63c: je 0x43d911 */ if (fZ) goto L_0043d911;
L_0043d642:; BB(0x0043d642);
    /* 0043d642: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d645: je 0x43d890 */ if (fZ) goto L_0043d890;
L_0043d64b:; BB(0x0043d64b);
    /* 0043d64b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d64e: je 0x43d811 */ if (fZ) goto L_0043d811;
L_0043d654:; BB(0x0043d654);
    /* 0043d654: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d657: je 0x43d732 */ if (fZ) goto L_0043d732;
L_0043d65d:; BB(0x0043d65d);
    /* 0043d65d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d660: je 0x43d6ca */ if (fZ) goto L_0043d6ca;
L_0043d662:; BB(0x0043d662);
    /* 0043d662: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d665: jne 0x43d687 */ if (!fZ) goto L_0043d687;
L_0043d667:; BB(0x0043d667);
    /* 0043d667: mov eax, dword ptr [0xa44c40] */ r_eax = R32((u32)(0xa44c40u));
    /* 0043d66c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043d66f: jne 0x43d71b */ if (!fZ) goto L_0043d71b;
L_0043d675:; BB(0x0043d675);
    /* 0043d675: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d678: mov dword ptr [eax + 0x37c], 3 */ W32((u32)(r_eax+0x37cu), 0x3u);
    /* 0043d682: jmp 0x43d71b */ goto L_0043d71b;
L_0043d687:; BB(0x0043d687);
    /* 0043d687: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043d68a: jne 0x43d71b */ if (!fZ) goto L_0043d71b;
L_0043d690:; BB(0x0043d690);
    /* 0043d690: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 0043d697: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d699: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43d69eu); f_005caba4();
    /* 0043d69e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043d69f: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0043d6a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043d6a4: je 0x43d71b */ if (fZ) goto L_0043d71b;
L_0043d6a6:; BB(0x0043d6a6);
    /* 0043d6a6: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 0043d6ad: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043d6b4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d6b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6ba: mov ecx, eax */ r_ecx = r_eax;
    /* 0043d6bc: call 0x449b4c */ r_esp -= 4; W32(r_esp, 0x43d6c1u); f_00449b4c();
    /* 0043d6c1: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 0043d6c8: jmp 0x43d71b */ goto L_0043d71b;
L_0043d6ca:; BB(0x0043d6ca);
    /* 0043d6ca: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0043d6d1: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6d3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43d6d8u); f_005caba4();
    /* 0043d6d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043d6d9: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0043d6dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d6de: je 0x43d702 */ if (fZ) goto L_0043d702;
L_0043d6e0:; BB(0x0043d6e0);
    /* 0043d6e0: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 0043d6e7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0043d6ee: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d6f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d6f4: mov ecx, eax */ r_ecx = r_eax;
    /* 0043d6f6: call 0x449ac0 */ r_esp -= 4; W32(r_esp, 0x43d6fbu); f_00449ac0();
    /* 0043d6fb: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0043d702:; BB(0x0043d702);
    /* 0043d702: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043d709: call 0x43e948 */ r_esp -= 4; W32(r_esp, 0x43d70eu); f_0043e948();
    /* 0043d70e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d711: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
L_0043d71b:; BB(0x0043d71b);
    /* 0043d71b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043d71e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043d721: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043d724: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d727: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043d72e: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d730: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d731: ret  */ FN_RET(0x0043d5f4); r_esp += 4; return;
L_0043d732:; BB(0x0043d732);
    /* 0043d732: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d735: mov edx, dword ptr [eax + 0x38c] */ r_edx = R32((u32)(r_eax+0x38cu));
    /* 0043d73b: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043d73e: mov dword ptr [eax + 0x38c], edx */ W32((u32)(r_eax+0x38cu), r_edx);
    /* 0043d744: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043d746: jg 0x43d752 */ if ((!fZ&&fS==fO)) goto L_0043d752;
L_0043d748:; BB(0x0043d748);
    /* 0043d748: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
L_0043d752:; BB(0x0043d752);
    /* 0043d752: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x43d757u); f_008587a5();
    /* 0043d757: fld dword ptr [0x8fdbfc] */ FPUSH(R_F32((u32)(0x8fdbfcu)));
    /* 0043d75d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0043d760: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 0043d763: fdiv dword ptr [0x8fdc00] */ ST(0) = ST(0) / R_F32((u32)(0x8fdc00u));
    /* 0043d769: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0043d76b: fmul dword ptr [0x8fdbf8] */ ST(0) = ST(0) * R_F32((u32)(0x8fdbf8u));
    /* 0043d771: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0043d773: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 0043d776: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 0043d77a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043d77f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0043d782: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0043d785: fistp dword ptr [ebp - 0x34] */ W32((u32)(r_ebp+0xffffffccu), (u32)fx_int32(ST(0))); FPOP();
    /* 0043d788: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 0043d78b: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043d78e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x43d793u); f_008587a5();
    /* 0043d793: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0043d796: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 0043d799: fdiv dword ptr [0x8fdc00] */ ST(0) = ST(0) / R_F32((u32)(0x8fdc00u));
    /* 0043d79f: fmul dword ptr [0x8fdbf0] */ ST(0) = ST(0) * R_F32((u32)(0x8fdbf0u));
    /* 0043d7a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043d7a7: fadd dword ptr [0x8fdbf4] */ ST(0) = ST(0) + R_F32((u32)(0x8fdbf4u));
    /* 0043d7ad: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0043d7b0: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x43d7b5u); f_0082ddd8();
    /* 0043d7b5: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0043d7b8: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 0043d7bb: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x43d7c0u); f_008587a5();
    /* 0043d7c0: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0043d7c3: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 0043d7c6: fdiv dword ptr [0x8fdc00] */ ST(0) = ST(0) / R_F32((u32)(0x8fdc00u));
    /* 0043d7cc: fmul dword ptr [0x8fdbe8] */ ST(0) = ST(0) * R_F32((u32)(0x8fdbe8u));
    /* 0043d7d2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043d7d4: fadd dword ptr [0x8fdbec] */ ST(0) = ST(0) + R_F32((u32)(0x8fdbecu));
    /* 0043d7da: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 0043d7dd: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x43d7e2u); f_0082dcbc();
    /* 0043d7e2: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0043d7e5: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 0043d7e8: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 0043d7eb: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d7f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d7f1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x43d7f6u); f_0050b510();
    /* 0043d7f6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d7f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043d7fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d7fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d7fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d7fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d7ff: push 0x35b */ { u32 v = 0x35bu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d804: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x43d809u); f_008144b0();
    /* 0043d809: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d80c: jmp 0x43d71b */ goto L_0043d71b;
L_0043d811:; BB(0x0043d811);
    /* 0043d811: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d814: mov dword ptr [eax + 0x38c], 0x96 */ W32((u32)(r_eax+0x38cu), 0x96u);
    /* 0043d81e: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d823: push 0x3cf5c28f */ { u32 v = 0x3cf5c28fu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d828: call 0x4d430c */ r_esp -= 4; W32(r_esp, 0x43d82du); f_004d430c();
    /* 0043d82d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d830: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043d832:; BB(0x0043d832);
    /* 0043d832: movzx eax, word ptr [ebx*2 + 0x9a4df4] */ r_eax = (u32)R16((u32)(r_ebx*2+0x9a4df4u));
    /* 0043d83a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d83b: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43d840u); f_007b4d18();
    /* 0043d840: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043d841: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d843: je 0x43d853 */ if (fZ) goto L_0043d853;
L_0043d845:; BB(0x0043d845);
    /* 0043d845: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0043d849: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0043d84f: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
L_0043d853:; BB(0x0043d853);
    /* 0043d853: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043d856: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043d859: jl 0x43d832 */ if ((fS!=fO)) goto L_0043d832;
L_0043d85b:; BB(0x0043d85b);
    /* 0043d85b: movzx eax, word ptr [0x9a4e00] */ r_eax = (u32)R16((u32)(0x9a4e00u));
    /* 0043d862: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d863: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43d868u); f_007b4d18();
    /* 0043d868: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043d869: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d86b: je 0x43d879 */ if (fZ) goto L_0043d879;
L_0043d86d:; BB(0x0043d86d);
    /* 0043d86d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0043d870: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0043d876: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
L_0043d879:; BB(0x0043d879);
    /* 0043d879: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d87c: mov dword ptr [eax + 0x384], 3 */ W32((u32)(r_eax+0x384u), 0x3u);
    /* 0043d886: call 0x43d924 */ r_esp -= 4; W32(r_esp, 0x43d88bu); f_0043d924();
    /* 0043d88b: jmp 0x43d732 */ goto L_0043d732;
L_0043d890:; BB(0x0043d890);
    /* 0043d890: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x43d895u); f_007a61a4();
    /* 0043d895: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d898: je 0x43d8fe */ if (fZ) goto L_0043d8fe;
L_0043d89a:; BB(0x0043d89a);
    /* 0043d89a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d89d: call 0x43d934 */ r_esp -= 4; W32(r_esp, 0x43d8a2u); f_0043d934();
L_0043d8a2:; BB(0x0043d8a2);
    /* 0043d8a2: movzx eax, word ptr [0x9a4e00] */ r_eax = (u32)R16((u32)(0x9a4e00u));
    /* 0043d8a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d8aa: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43d8afu); f_007b4d18();
    /* 0043d8af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043d8b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d8b2: je 0x43d8be */ if (fZ) goto L_0043d8be;
L_0043d8b4:; BB(0x0043d8b4);
    /* 0043d8b4: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0043d8b7: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043d8bc: jne 0x43d8ec */ if (!fZ) goto L_0043d8ec;
L_0043d8be:; BB(0x0043d8be);
    /* 0043d8be: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0043d8c0:; BB(0x0043d8c0);
    /* 0043d8c0: movzx eax, word ptr [ebx*2 + 0x9a4df4] */ r_eax = (u32)R16((u32)(r_ebx*2+0x9a4df4u));
    /* 0043d8c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d8c9: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43d8ceu); f_007b4d18();
    /* 0043d8ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043d8cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d8d1: je 0x43d8e4 */ if (fZ) goto L_0043d8e4;
L_0043d8d3:; BB(0x0043d8d3);
    /* 0043d8d3: mov eax, dword ptr [eax + 0x390] */ r_eax = R32((u32)(r_eax+0x390u));
    /* 0043d8d9: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043d8de: je 0x43d71b */ if (fZ) goto L_0043d71b;
L_0043d8e4:; BB(0x0043d8e4);
    /* 0043d8e4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043d8e7: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043d8ea: jl 0x43d8c0 */ if ((fS!=fO)) goto L_0043d8c0;
L_0043d8ec:; BB(0x0043d8ec);
    /* 0043d8ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d8ef: mov dword ptr [eax + 0x384], 2 */ W32((u32)(r_eax+0x384u), 0x2u);
    /* 0043d8f9: jmp 0x43d71b */ goto L_0043d71b;
L_0043d8fe:; BB(0x0043d8fe);
    /* 0043d8fe: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x43d903u); f_0052cf54();
    /* 0043d903: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d905: je 0x43d8a2 */ if (fZ) goto L_0043d8a2;
L_0043d907:; BB(0x0043d907);
    /* 0043d907: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d90a: call 0x43d934 */ r_esp -= 4; W32(r_esp, 0x43d90fu); f_0043d934();
    /* 0043d90f: jmp 0x43d8a2 */ goto L_0043d8a2;
L_0043d911:; BB(0x0043d911);
    /* 0043d911: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d914: mov dword ptr [eax + 0x384], 1 */ W32((u32)(r_eax+0x384u), 0x1u);
    /* 0043d91e: jmp 0x43d890 */ goto L_0043d890;
}

void f_0043d924(void) /* sub_43D924 */
{
    FN_ENTER(0x0043d924);
    /* 0043d924: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d926: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d92b: call 0x6ff894 */ r_esp -= 4; W32(r_esp, 0x43d930u); f_006ff894();
    /* 0043d930: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d933: ret  */ FN_RET(0x0043d924); r_esp += 4; return;
}

void f_0043d934(void) /* sub_43D934 */
{
    FN_ENTER(0x0043d934);
    /* 0043d934: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043d935: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d936: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043d93c: mov edi, ecx */ r_edi = r_ecx;
    /* 0043d93e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0043d940:; BB(0x0043d940);
    /* 0043d940: movzx eax, word ptr [ebp + 0x9a4df4] */ r_eax = (u32)R16((u32)(r_ebp+0x9a4df4u));
    /* 0043d947: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d948: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43d94du); f_007b4d18();
    /* 0043d94d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043d94e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d950: je 0x43d96b */ if (fZ) goto L_0043d96b;
L_0043d952:; BB(0x0043d952);
    /* 0043d952: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 0043d958: test edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d95e: jne 0x43d96b */ if (!fZ) goto L_0043d96b;
L_0043d960:; BB(0x0043d960);
    /* 0043d960: mov ecx, eax */ r_ecx = r_eax;
    /* 0043d962: call 0x443d1c */ r_esp -= 4; W32(r_esp, 0x43d967u); f_00443d1c();
    /* 0043d967: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d969: je 0x43d9a9 */ if (fZ) goto L_0043d9a9;
L_0043d96b:; BB(0x0043d96b);
    /* 0043d96b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0043d96e: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043d971: jl 0x43d940 */ if ((fS!=fO)) goto L_0043d940;
L_0043d973:; BB(0x0043d973);
    /* 0043d973: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d975: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d97a: mov ecx, edi */ r_ecx = r_edi;
    /* 0043d97c: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x43d981u); f_007714cc();
    /* 0043d981: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0043d984: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d989: je 0x43d9a9 */ if (fZ) goto L_0043d9a9;
L_0043d98b:; BB(0x0043d98b);
    /* 0043d98b: movsx eax, word ptr [edi + 0x3fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3fau));
    /* 0043d992: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043d994: jle 0x43d9b2 */ if ((fZ||fS!=fO)) goto L_0043d9b2;
L_0043d996:; BB(0x0043d996);
    /* 0043d996: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043d999: mov word ptr [edi + 0x3fa], ax */ W16((u32)(r_edi+0x3fau), (u16)r_eax);
    /* 0043d9a0: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d9a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d9a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d9a8: ret  */ FN_RET(0x0043d934); r_esp += 4; return;
L_0043d9a9:; BB(0x0043d9a9);
    /* 0043d9a9: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d9af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d9b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d9b1: ret  */ FN_RET(0x0043d934); r_esp += 4; return;
L_0043d9b2:; BB(0x0043d9b2);
    /* 0043d9b2: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 0043d9b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d9b9: je 0x43dc4f */ if (fZ) goto L_0043dc4f;
L_0043d9bf:; BB(0x0043d9bf);
    /* 0043d9bf: movsx eax, word ptr [edi + 0x3f8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3f8u));
    /* 0043d9c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d9c8: je 0x43deb0 */ if (fZ) goto L_0043deb0;
L_0043d9ce:; BB(0x0043d9ce);
    /* 0043d9ce: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d9d1: je 0x43dc31 */ if (fZ) goto L_0043dc31;
L_0043d9d7:; BB(0x0043d9d7);
    /* 0043d9d7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d9da: jne 0x43d9f8 */ if (!fZ) goto L_0043d9f8;
L_0043d9dc:; BB(0x0043d9dc);
    /* 0043d9dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043d9de: mov dword ptr [0xa44798], eax */ W32((u32)(0xa44798u), r_eax);
    /* 0043d9e3: mov word ptr [edi + 0x400], ax */ W16((u32)(r_edi+0x400u), (u16)r_eax);
    /* 0043d9ea: mov edx, 3 */ r_edx = 0x3u;
    /* 0043d9ef: mov word ptr [edi + 0x3f8], dx */ W16((u32)(r_edi+0x3f8u), (u16)r_edx);
    /* 0043d9f6: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043d9f8:; BB(0x0043d9f8);
    /* 0043d9f8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d9fb: jne 0x43d9a9 */ if (!fZ) goto L_0043d9a9;
L_0043d9fd:; BB(0x0043d9fd);
    /* 0043d9fd: mov eax, dword ptr [0xa44798] */ r_eax = R32((u32)(0xa44798u));
    /* 0043da02: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043da05: je 0x43da13 */ if (fZ) goto L_0043da13;
L_0043da07:; BB(0x0043da07);
    /* 0043da07: movsx eax, word ptr [edi + 0x400] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x400u));
    /* 0043da0e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043da11: jl 0x43da59 */ if ((fS!=fO)) goto L_0043da59;
L_0043da13:; BB(0x0043da13);
    /* 0043da13: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0043da17: mov byte ptr [esp + 0x74], 0x15 */ W8((u32)(r_esp+0x74u), 0x15u);
    /* 0043da1c: mov edx, 1 */ r_edx = 0x1u;
    /* 0043da21: mov dword ptr [0xa44798], edx */ W32((u32)(0xa44798u), r_edx);
    /* 0043da27: mov byte ptr [esp + 0x75], 3 */ W8((u32)(r_esp+0x75u), 0x3u);
    /* 0043da2c: mov word ptr [esp + 0x76], ax */ W16((u32)(r_esp+0x76u), (u16)r_eax);
    /* 0043da31: mov word ptr [esp + 0x78], dx */ W16((u32)(r_esp+0x78u), (u16)r_edx);
    /* 0043da36: lea ecx, [esp + 0x74] */ r_ecx = (u32)(r_esp+0x74u);
    /* 0043da3a: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43da3fu); f_008003e0();
    /* 0043da3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043da41: mov word ptr [edi + 0x3f8], ax */ W16((u32)(r_edi+0x3f8u), (u16)r_eax);
    /* 0043da48: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 0043da4d: mov word ptr [edi + 0x3fa], dx */ W16((u32)(r_edi+0x3fau), (u16)r_edx);
    /* 0043da54: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043da59:; BB(0x0043da59);
    /* 0043da59: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 0043da5d: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 0043da61: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043da64: mov word ptr [edi + 0x400], ax */ W16((u32)(r_edi+0x400u), (u16)r_eax);
    /* 0043da6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043da6d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043da6f: mov ebp, eax */ r_ebp = r_eax;
    /* 0043da71: mov ebx, edx */ r_ebx = r_edx;
L_0043da73:; BB(0x0043da73);
    /* 0043da73: movzx ecx, word ptr [ebx*2 + 0x9a4df4] */ r_ecx = (u32)R16((u32)(r_ebx*2+0x9a4df4u));
    /* 0043da7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043da7c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43da81u); f_007b4d18();
    /* 0043da81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043da82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043da84: je 0x43daac */ if (fZ) goto L_0043daac;
L_0043da86:; BB(0x0043da86);
    /* 0043da86: mov ecx, dword ptr [eax + 0x390] */ r_ecx = R32((u32)(r_eax+0x390u));
    /* 0043da8c: test ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043da92: je 0x43da9b */ if (fZ) goto L_0043da9b;
L_0043da94:; BB(0x0043da94);
    /* 0043da94: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0043da99: jmp 0x43da9d */ goto L_0043da9d;
L_0043da9b:; BB(0x0043da9b);
    /* 0043da9b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0043da9d:; BB(0x0043da9d);
    /* 0043da9d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043da9f: jne 0x43daac */ if (!fZ) goto L_0043daac;
L_0043daa1:; BB(0x0043daa1);
    /* 0043daa1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043daa3: mov byte ptr [ecx + 0xa44768], bl */ W8((u32)(r_ecx+0xa44768u), (u8)r_ebx);
    /* 0043daa9: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0043daac:; BB(0x0043daac);
    /* 0043daac: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043daaf: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043dab2: jl 0x43da73 */ if ((fS!=fO)) goto L_0043da73;
L_0043dab4:; BB(0x0043dab4);
    /* 0043dab4: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0043dab8: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0043dabc: mov eax, ebp */ r_eax = r_ebp;
    /* 0043dabe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043dac1: jle 0x43db91 */ if ((fZ||fS!=fO)) goto L_0043db91;
L_0043dac7:; BB(0x0043dac7);
    /* 0043dac7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0043dac9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043dacc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043dace: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043dad0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043dad2: jle 0x43db91 */ if ((fZ||fS!=fO)) goto L_0043db91;
L_0043dad8:; BB(0x0043dad8);
    /* 0043dad8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0043dadb: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0043dade: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0043dae2: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0043dae6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0043daea: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 0043daee: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 0043daf2: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
L_0043daf6:; BB(0x0043daf6);
    /* 0043daf6: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0043dafa: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43daffu); f_007751b0();
    /* 0043daff: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0043db03: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0043db07: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043db0b: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043db10: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043db15: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043db19: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043db1d: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043db21: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043db25: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0043db29: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43db2eu); f_007751b0();
    /* 0043db2e: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0043db32: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043db36: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043db3b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043db40: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043db44: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043db48: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043db4c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043db50: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0043db54: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043db56: je 0x43db72 */ if (fZ) goto L_0043db72;
L_0043db58:; BB(0x0043db58);
    /* 0043db58: movzx eax, byte ptr [ebx + 0xa44768] */ r_eax = (u32)R8((u32)(r_ebx+0xa44768u));
    /* 0043db5f: movzx edx, byte ptr [ecx + 0xa44768] */ r_edx = (u32)R8((u32)(r_ecx+0xa44768u));
    /* 0043db66: mov byte ptr [ebx + 0xa44768], dl */ W8((u32)(r_ebx+0xa44768u), (u8)r_edx);
    /* 0043db6c: mov byte ptr [ecx + 0xa44768], al */ W8((u32)(r_ecx+0xa44768u), (u8)r_eax);
L_0043db72:; BB(0x0043db72);
    /* 0043db72: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0043db76: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0043db79: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043db7b: jl 0x43daf6 */ if ((fS!=fO)) goto L_0043daf6;
L_0043db81:; BB(0x0043db81);
    /* 0043db81: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0043db85: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 0043db89: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0043db8d: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_0043db91:; BB(0x0043db91);
    /* 0043db91: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0043db95: mov byte ptr [esp + 0x64], 0x84 */ W8((u32)(r_esp+0x64u), 0x84u);
    /* 0043db9a: mov word ptr [esp + 0x66], dx */ W16((u32)(r_esp+0x66u), (u16)r_edx);
    /* 0043db9f: movsx edx, word ptr [edi + 0x404] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x404u));
    /* 0043dba6: mov byte ptr [esp + 0x65], 4 */ W8((u32)(r_esp+0x65u), 0x4u);
    /* 0043dbab: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043dbad: jl 0x43dbb1 */ if ((fS!=fO)) goto L_0043dbb1;
L_0043dbaf:; BB(0x0043dbaf);
    /* 0043dbaf: mov edx, eax */ r_edx = r_eax;
L_0043dbb1:; BB(0x0043dbb1);
    /* 0043dbb1: mov word ptr [esp + 0x6e], dx */ W16((u32)(r_esp+0x6eu), (u16)r_edx);
    /* 0043dbb6: mov ecx, edi */ r_ecx = r_edi;
    /* 0043dbb8: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43dbbdu); f_007751b0();
    /* 0043dbbd: fld dword ptr [0x8fdbdc] */ FPUSH(R_F32((u32)(0x8fdbdcu)));
    /* 0043dbc3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043dbc5: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043dbc9: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043dbce: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043dbd3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043dbd7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043dbdb: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043dbdf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043dbe3: mov ebp, 0xa44768 */ r_ebp = 0xa44768u;
    /* 0043dbe8: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0043dbec: mov word ptr [esp + 0x70], ax */ W16((u32)(r_esp+0x70u), (u16)r_eax);
    /* 0043dbf1: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0043dbf4: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 0043dbf8: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0043dbfc: mov word ptr [esp + 0x6c], ax */ W16((u32)(r_esp+0x6cu), (u16)r_eax);
    /* 0043dc01: lea ecx, [esp + 0x64] */ r_ecx = (u32)(r_esp+0x64u);
    /* 0043dc05: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43dc0au); f_008003e0();
    /* 0043dc0a: movsx eax, word ptr [edi + 0x404] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x404u));
    /* 0043dc11: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043dc14: jge 0x43dc20 */ if ((fS==fO)) goto L_0043dc20;
L_0043dc16:; BB(0x0043dc16);
    /* 0043dc16: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043dc19: mov word ptr [edi + 0x404], ax */ W16((u32)(r_edi+0x404u), (u16)r_eax);
L_0043dc20:; BB(0x0043dc20);
    /* 0043dc20: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 0043dc25: mov word ptr [edi + 0x3fa], ax */ W16((u32)(r_edi+0x3fau), (u16)r_eax);
    /* 0043dc2c: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043dc31:; BB(0x0043dc31);
    /* 0043dc31: mov eax, dword ptr [0xa447e8] */ r_eax = R32((u32)(0xa447e8u));
    /* 0043dc36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dc38: je 0x43d9a9 */ if (fZ) goto L_0043d9a9;
L_0043dc3e:; BB(0x0043dc3e);
    /* 0043dc3e: mov eax, 2 */ r_eax = 0x2u;
    /* 0043dc43: mov word ptr [edi + 0x3f8], ax */ W16((u32)(r_edi+0x3f8u), (u16)r_eax);
    /* 0043dc4a: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043dc4f:; BB(0x0043dc4f);
    /* 0043dc4f: movsx eax, word ptr [edi + 0x3f8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3f8u));
    /* 0043dc56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dc58: je 0x43dffc */ if (fZ) goto L_0043dffc;
L_0043dc5e:; BB(0x0043dc5e);
    /* 0043dc5e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dc61: je 0x43de92 */ if (fZ) goto L_0043de92;
L_0043dc67:; BB(0x0043dc67);
    /* 0043dc67: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dc6a: jne 0x43dc8b */ if (!fZ) goto L_0043dc8b;
L_0043dc6c:; BB(0x0043dc6c);
    /* 0043dc6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043dc6e: mov dword ptr [0xa44798], eax */ W32((u32)(0xa44798u), r_eax);
    /* 0043dc73: mov word ptr [edi + 0x400], ax */ W16((u32)(r_edi+0x400u), (u16)r_eax);
    /* 0043dc7a: mov edx, 3 */ r_edx = 0x3u;
    /* 0043dc7f: mov word ptr [edi + 0x3f8], dx */ W16((u32)(r_edi+0x3f8u), (u16)r_edx);
    /* 0043dc86: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043dc8b:; BB(0x0043dc8b);
    /* 0043dc8b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dc8e: jne 0x43d9a9 */ if (!fZ) goto L_0043d9a9;
L_0043dc94:; BB(0x0043dc94);
    /* 0043dc94: mov eax, dword ptr [0xa44798] */ r_eax = R32((u32)(0xa44798u));
    /* 0043dc99: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dc9c: je 0x43dcaa */ if (fZ) goto L_0043dcaa;
L_0043dc9e:; BB(0x0043dc9e);
    /* 0043dc9e: movsx eax, word ptr [edi + 0x400] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x400u));
    /* 0043dca5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043dca8: jl 0x43dcf0 */ if ((fS!=fO)) goto L_0043dcf0;
L_0043dcaa:; BB(0x0043dcaa);
    /* 0043dcaa: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0043dcae: mov byte ptr [esp + 0x4c], 0x15 */ W8((u32)(r_esp+0x4cu), 0x15u);
    /* 0043dcb3: mov edx, 1 */ r_edx = 0x1u;
    /* 0043dcb8: mov dword ptr [0xa44798], edx */ W32((u32)(0xa44798u), r_edx);
    /* 0043dcbe: mov byte ptr [esp + 0x4d], 3 */ W8((u32)(r_esp+0x4du), 0x3u);
    /* 0043dcc3: mov word ptr [esp + 0x4e], ax */ W16((u32)(r_esp+0x4eu), (u16)r_eax);
    /* 0043dcc8: mov word ptr [esp + 0x50], dx */ W16((u32)(r_esp+0x50u), (u16)r_edx);
    /* 0043dccd: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 0043dcd1: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43dcd6u); f_008003e0();
    /* 0043dcd6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043dcd8: mov word ptr [edi + 0x3f8], ax */ W16((u32)(r_edi+0x3f8u), (u16)r_eax);
    /* 0043dcdf: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 0043dce4: mov word ptr [edi + 0x3fa], dx */ W16((u32)(r_edi+0x3fau), (u16)r_edx);
    /* 0043dceb: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043dcf0:; BB(0x0043dcf0);
    /* 0043dcf0: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 0043dcf4: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 0043dcf8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043dcfb: mov word ptr [edi + 0x400], ax */ W16((u32)(r_edi+0x400u), (u16)r_eax);
    /* 0043dd02: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0043dd04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043dd06: mov ebx, eax */ r_ebx = r_eax;
L_0043dd08:; BB(0x0043dd08);
    /* 0043dd08: movzx edx, word ptr [ebx*2 + 0x9a4df4] */ r_edx = (u32)R16((u32)(r_ebx*2+0x9a4df4u));
    /* 0043dd10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043dd11: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43dd16u); f_007b4d18();
    /* 0043dd16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043dd17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dd19: je 0x43dd41 */ if (fZ) goto L_0043dd41;
L_0043dd1b:; BB(0x0043dd1b);
    /* 0043dd1b: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 0043dd21: test edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dd27: je 0x43dd30 */ if (fZ) goto L_0043dd30;
L_0043dd29:; BB(0x0043dd29);
    /* 0043dd29: mov edx, 1 */ r_edx = 0x1u;
    /* 0043dd2e: jmp 0x43dd32 */ goto L_0043dd32;
L_0043dd30:; BB(0x0043dd30);
    /* 0043dd30: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0043dd32:; BB(0x0043dd32);
    /* 0043dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dd34: jne 0x43dd41 */ if (!fZ) goto L_0043dd41;
L_0043dd36:; BB(0x0043dd36);
    /* 0043dd36: mov edx, ebp */ r_edx = r_ebp;
    /* 0043dd38: mov byte ptr [edx + 0xa44768], bl */ W8((u32)(r_edx+0xa44768u), (u8)r_ebx);
    /* 0043dd3e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0043dd41:; BB(0x0043dd41);
    /* 0043dd41: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043dd44: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043dd47: jl 0x43dd08 */ if ((fS!=fO)) goto L_0043dd08;
L_0043dd49:; BB(0x0043dd49);
    /* 0043dd49: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0043dd4d: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0043dd51: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043dd54: jle 0x43de29 */ if ((fZ||fS!=fO)) goto L_0043de29;
L_0043dd5a:; BB(0x0043dd5a);
    /* 0043dd5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043dd5c: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0043dd60: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043dd62: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043dd64: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043dd66: jle 0x43de29 */ if ((fZ||fS!=fO)) goto L_0043de29;
L_0043dd6c:; BB(0x0043dd6c);
    /* 0043dd6c: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0043dd70: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0043dd74: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0043dd78: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0043dd7c: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 0043dd80: mov ebp, eax */ r_ebp = r_eax;
    /* 0043dd82: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 0043dd86: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 0043dd8a: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
L_0043dd8e:; BB(0x0043dd8e);
    /* 0043dd8e: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0043dd92: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43dd97u); f_007751b0();
    /* 0043dd97: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0043dd9b: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0043dd9f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043dda3: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043dda8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043ddad: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043ddb1: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043ddb5: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043ddb9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043ddbd: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0043ddc1: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43ddc6u); f_007751b0();
    /* 0043ddc6: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0043ddca: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043ddce: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043ddd3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043ddd8: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043dddc: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043dde0: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043dde4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043dde8: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0043ddec: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ddee: je 0x43de0a */ if (fZ) goto L_0043de0a;
L_0043ddf0:; BB(0x0043ddf0);
    /* 0043ddf0: movzx eax, byte ptr [ebx + 0xa44768] */ r_eax = (u32)R8((u32)(r_ebx+0xa44768u));
    /* 0043ddf7: movzx edx, byte ptr [ecx + 0xa44768] */ r_edx = (u32)R8((u32)(r_ecx+0xa44768u));
    /* 0043ddfe: mov byte ptr [ebx + 0xa44768], dl */ W8((u32)(r_ebx+0xa44768u), (u8)r_edx);
    /* 0043de04: mov byte ptr [ecx + 0xa44768], al */ W8((u32)(r_ecx+0xa44768u), (u8)r_eax);
L_0043de0a:; BB(0x0043de0a);
    /* 0043de0a: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0043de0e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0043de11: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043de13: jl 0x43dd8e */ if ((fS!=fO)) goto L_0043dd8e;
L_0043de19:; BB(0x0043de19);
    /* 0043de19: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 0043de1d: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 0043de21: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0043de25: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_0043de29:; BB(0x0043de29);
    /* 0043de29: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0043de2d: mov byte ptr [esp + 0x40], 0x16 */ W8((u32)(r_esp+0x40u), 0x16u);
    /* 0043de32: mov word ptr [esp + 0x42], ax */ W16((u32)(r_esp+0x42u), (u16)r_eax);
    /* 0043de37: movsx eax, word ptr [edi + 0x404] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x404u));
    /* 0043de3e: mov byte ptr [esp + 0x41], 3 */ W8((u32)(r_esp+0x41u), 0x3u);
    /* 0043de43: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043de45: jl 0x43de49 */ if ((fS!=fO)) goto L_0043de49;
L_0043de47:; BB(0x0043de47);
    /* 0043de47: mov eax, ebp */ r_eax = r_ebp;
L_0043de49:; BB(0x0043de49);
    /* 0043de49: mov word ptr [esp + 0x4a], ax */ W16((u32)(r_esp+0x4au), (u16)r_eax);
    /* 0043de4e: mov edx, 0xa44768 */ r_edx = 0xa44768u;
    /* 0043de53: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043de55: movzx ebp, word ptr [edx + 4] */ r_ebp = (u32)R16((u32)(r_edx+0x4u));
    /* 0043de59: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0043de5d: mov word ptr [esp + 0x48], bp */ W16((u32)(r_esp+0x48u), (u16)r_ebp);
    /* 0043de62: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 0043de66: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43de6bu); f_008003e0();
    /* 0043de6b: movsx eax, word ptr [edi + 0x404] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x404u));
    /* 0043de72: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043de75: jge 0x43de81 */ if ((fS==fO)) goto L_0043de81;
L_0043de77:; BB(0x0043de77);
    /* 0043de77: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043de7a: mov word ptr [edi + 0x404], ax */ W16((u32)(r_edi+0x404u), (u16)r_eax);
L_0043de81:; BB(0x0043de81);
    /* 0043de81: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 0043de86: mov word ptr [edi + 0x3fa], ax */ W16((u32)(r_edi+0x3fau), (u16)r_eax);
    /* 0043de8d: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043de92:; BB(0x0043de92);
    /* 0043de92: mov eax, dword ptr [0xa447e8] */ r_eax = R32((u32)(0xa447e8u));
    /* 0043de97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043de99: je 0x43d9a9 */ if (fZ) goto L_0043d9a9;
L_0043de9f:; BB(0x0043de9f);
    /* 0043de9f: mov eax, 2 */ r_eax = 0x2u;
    /* 0043dea4: mov word ptr [edi + 0x3f8], ax */ W16((u32)(r_edi+0x3f8u), (u16)r_eax);
    /* 0043deab: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043deb0:; BB(0x0043deb0);
    /* 0043deb0: movsx edx, byte ptr [0xa4498c] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa4498cu));
    /* 0043deb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043deb9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043debb: jne 0x43dec2 */ if (!fZ) goto L_0043dec2;
L_0043debd:; BB(0x0043debd);
    /* 0043debd: mov eax, 1 */ r_eax = 0x1u;
L_0043dec2:; BB(0x0043dec2);
    /* 0043dec2: movsx edx, byte ptr [0xa44990] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa44990u));
    /* 0043dec9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043decb: jne 0x43ded2 */ if (!fZ) goto L_0043ded2;
L_0043decd:; BB(0x0043decd);
    /* 0043decd: mov eax, 1 */ r_eax = 0x1u;
L_0043ded2:; BB(0x0043ded2);
    /* 0043ded2: movsx edx, byte ptr [0xa44994] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa44994u));
    /* 0043ded9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dedb: jne 0x43dee2 */ if (!fZ) goto L_0043dee2;
L_0043dedd:; BB(0x0043dedd);
    /* 0043dedd: mov eax, 1 */ r_eax = 0x1u;
L_0043dee2:; BB(0x0043dee2);
    /* 0043dee2: movsx edx, byte ptr [0xa44998] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa44998u));
    /* 0043dee9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043deeb: jne 0x43def2 */ if (!fZ) goto L_0043def2;
L_0043deed:; BB(0x0043deed);
    /* 0043deed: mov eax, 1 */ r_eax = 0x1u;
L_0043def2:; BB(0x0043def2);
    /* 0043def2: movsx edx, byte ptr [0xa4499c] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa4499cu));
    /* 0043def9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043defb: jne 0x43df02 */ if (!fZ) goto L_0043df02;
L_0043defd:; BB(0x0043defd);
    /* 0043defd: mov eax, 1 */ r_eax = 0x1u;
L_0043df02:; BB(0x0043df02);
    /* 0043df02: movsx edx, byte ptr [0xa449a0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa449a0u));
    /* 0043df09: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043df0b: jne 0x43df12 */ if (!fZ) goto L_0043df12;
L_0043df0d:; BB(0x0043df0d);
    /* 0043df0d: mov eax, 1 */ r_eax = 0x1u;
L_0043df12:; BB(0x0043df12);
    /* 0043df12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043df14: jne 0x43df27 */ if (!fZ) goto L_0043df27;
L_0043df16:; BB(0x0043df16);
    /* 0043df16: mov eax, 2 */ r_eax = 0x2u;
    /* 0043df1b: mov word ptr [edi + 0x3f8], ax */ W16((u32)(r_edi+0x3f8u), (u16)r_eax);
    /* 0043df22: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043df27:; BB(0x0043df27);
    /* 0043df27: movzx eax, word ptr [0x9a4e00] */ r_eax = (u32)R16((u32)(0x9a4e00u));
    /* 0043df2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043df2f: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43df34u); f_007b4d18();
    /* 0043df34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043df35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043df37: je 0x43d9a9 */ if (fZ) goto L_0043d9a9;
L_0043df3d:; BB(0x0043df3d);
    /* 0043df3d: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0043df44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043df46: jne 0x43d9a9 */ if (!fZ) goto L_0043d9a9;
L_0043df4c:; BB(0x0043df4c);
    /* 0043df4c: mov ecx, edi */ r_ecx = r_edi;
    /* 0043df4e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43df53u); f_007751b0();
    /* 0043df53: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0043df55: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043df59: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043df5e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043df63: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043df67: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043df6b: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043df6f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043df73: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0043df77: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0043df7b: mov byte ptr [esp + 0x80], 0x15 */ W8((u32)(r_esp+0x80u), 0x15u);
    /* 0043df83: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0043df86: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043df88: mov byte ptr [esp + 0x81], 3 */ W8((u32)(r_esp+0x81u), 0x3u);
    /* 0043df90: mov word ptr [esp + 0x82], ax */ W16((u32)(r_esp+0x82u), (u16)r_eax);
    /* 0043df98: mov eax, dword ptr [edi + 0x3ac] */ r_eax = R32((u32)(r_edi+0x3acu));
    /* 0043df9e: mov word ptr [esp + 0x84], dx */ W16((u32)(r_esp+0x84u), (u16)r_edx);
    /* 0043dfa6: mov word ptr [esp + 0x88], ax */ W16((u32)(r_esp+0x88u), (u16)r_eax);
    /* 0043dfae: mov word ptr [esp + 0x8a], bp */ W16((u32)(r_esp+0x8au), (u16)r_ebp);
    /* 0043dfb6: lea ecx, [esp + 0x80] */ r_ecx = (u32)(r_esp+0x80u);
    /* 0043dfbd: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43dfc2u); f_008003e0();
    /* 0043dfc2: mov eax, dword ptr [edi + 0x3ac] */ r_eax = R32((u32)(r_edi+0x3acu));
    /* 0043dfc8: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043dfca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0043dfcc: jl 0x43dff1 */ if ((fS!=fO)) goto L_0043dff1;
L_0043dfce:; BB(0x0043dfce);
    /* 0043dfce: mov dword ptr [edi + 0x3ac], eax */ W32((u32)(r_edi+0x3acu), r_eax);
L_0043dfd4:; BB(0x0043dfd4);
    /* 0043dfd4: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 0043dfd9: mov word ptr [edi + 0x3fa], ax */ W16((u32)(r_edi+0x3fau), (u16)r_eax);
    /* 0043dfe0: mov edx, 1 */ r_edx = 0x1u;
    /* 0043dfe5: mov word ptr [edi + 0x3f8], dx */ W16((u32)(r_edi+0x3f8u), (u16)r_edx);
    /* 0043dfec: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043dff1:; BB(0x0043dff1);
    /* 0043dff1: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043dff4: mov dword ptr [edi + 0x3ac], eax */ W32((u32)(r_edi+0x3acu), r_eax);
    /* 0043dffa: jmp 0x43dfd4 */ goto L_0043dfd4;
L_0043dffc:; BB(0x0043dffc);
    /* 0043dffc: movsx edx, byte ptr [0xa4498c] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa4498cu));
    /* 0043e003: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043e005: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e007: jne 0x43e00e */ if (!fZ) goto L_0043e00e;
L_0043e009:; BB(0x0043e009);
    /* 0043e009: mov eax, 1 */ r_eax = 0x1u;
L_0043e00e:; BB(0x0043e00e);
    /* 0043e00e: movsx edx, byte ptr [0xa44990] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa44990u));
    /* 0043e015: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e017: jne 0x43e01e */ if (!fZ) goto L_0043e01e;
L_0043e019:; BB(0x0043e019);
    /* 0043e019: mov eax, 1 */ r_eax = 0x1u;
L_0043e01e:; BB(0x0043e01e);
    /* 0043e01e: movsx edx, byte ptr [0xa44994] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa44994u));
    /* 0043e025: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e027: jne 0x43e02e */ if (!fZ) goto L_0043e02e;
L_0043e029:; BB(0x0043e029);
    /* 0043e029: mov eax, 1 */ r_eax = 0x1u;
L_0043e02e:; BB(0x0043e02e);
    /* 0043e02e: movsx edx, byte ptr [0xa44998] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa44998u));
    /* 0043e035: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e037: jne 0x43e03e */ if (!fZ) goto L_0043e03e;
L_0043e039:; BB(0x0043e039);
    /* 0043e039: mov eax, 1 */ r_eax = 0x1u;
L_0043e03e:; BB(0x0043e03e);
    /* 0043e03e: movsx edx, byte ptr [0xa4499c] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa4499cu));
    /* 0043e045: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e047: jne 0x43e04e */ if (!fZ) goto L_0043e04e;
L_0043e049:; BB(0x0043e049);
    /* 0043e049: mov eax, 1 */ r_eax = 0x1u;
L_0043e04e:; BB(0x0043e04e);
    /* 0043e04e: movsx edx, byte ptr [0xa449a0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa449a0u));
    /* 0043e055: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e057: jne 0x43e05e */ if (!fZ) goto L_0043e05e;
L_0043e059:; BB(0x0043e059);
    /* 0043e059: mov eax, 1 */ r_eax = 0x1u;
L_0043e05e:; BB(0x0043e05e);
    /* 0043e05e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e060: jne 0x43e073 */ if (!fZ) goto L_0043e073;
L_0043e062:; BB(0x0043e062);
    /* 0043e062: mov eax, 2 */ r_eax = 0x2u;
    /* 0043e067: mov word ptr [edi + 0x3f8], ax */ W16((u32)(r_edi+0x3f8u), (u16)r_eax);
    /* 0043e06e: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043e073:; BB(0x0043e073);
    /* 0043e073: movzx eax, word ptr [0x9a4e00] */ r_eax = (u32)R16((u32)(0x9a4e00u));
    /* 0043e07a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e07b: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e080u); f_007b4d18();
    /* 0043e080: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e081: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e083: je 0x43d9a9 */ if (fZ) goto L_0043d9a9;
L_0043e089:; BB(0x0043e089);
    /* 0043e089: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0043e090: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e092: jne 0x43d9a9 */ if (!fZ) goto L_0043d9a9;
L_0043e098:; BB(0x0043e098);
    /* 0043e098: mov ecx, edi */ r_ecx = r_edi;
    /* 0043e09a: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43e09fu); f_007751b0();
    /* 0043e09f: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0043e0a1: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043e0a5: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043e0aa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043e0af: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043e0b3: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043e0b7: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043e0bb: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043e0bf: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0043e0c3: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0043e0c7: mov byte ptr [esp + 0x58], 0x15 */ W8((u32)(r_esp+0x58u), 0x15u);
    /* 0043e0cc: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0043e0cf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043e0d1: mov byte ptr [esp + 0x59], 3 */ W8((u32)(r_esp+0x59u), 0x3u);
    /* 0043e0d6: mov word ptr [esp + 0x5a], ax */ W16((u32)(r_esp+0x5au), (u16)r_eax);
    /* 0043e0db: mov eax, dword ptr [edi + 0x3ac] */ r_eax = R32((u32)(r_edi+0x3acu));
    /* 0043e0e1: mov word ptr [esp + 0x5c], dx */ W16((u32)(r_esp+0x5cu), (u16)r_edx);
    /* 0043e0e6: mov word ptr [esp + 0x60], ax */ W16((u32)(r_esp+0x60u), (u16)r_eax);
    /* 0043e0eb: mov word ptr [esp + 0x62], bp */ W16((u32)(r_esp+0x62u), (u16)r_ebp);
    /* 0043e0f0: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 0043e0f4: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43e0f9u); f_008003e0();
    /* 0043e0f9: mov eax, dword ptr [edi + 0x3ac] */ r_eax = R32((u32)(r_edi+0x3acu));
    /* 0043e0ff: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043e101: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0043e103: jl 0x43e128 */ if ((fS!=fO)) goto L_0043e128;
L_0043e105:; BB(0x0043e105);
    /* 0043e105: mov dword ptr [edi + 0x3ac], eax */ W32((u32)(r_edi+0x3acu), r_eax);
L_0043e10b:; BB(0x0043e10b);
    /* 0043e10b: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 0043e110: mov word ptr [edi + 0x3fa], ax */ W16((u32)(r_edi+0x3fau), (u16)r_eax);
    /* 0043e117: mov edx, 1 */ r_edx = 0x1u;
    /* 0043e11c: mov word ptr [edi + 0x3f8], dx */ W16((u32)(r_edi+0x3f8u), (u16)r_edx);
    /* 0043e123: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043e128:; BB(0x0043e128);
    /* 0043e128: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043e12b: mov dword ptr [edi + 0x3ac], eax */ W32((u32)(r_edi+0x3acu), r_eax);
    /* 0043e131: jmp 0x43e10b */ goto L_0043e10b;
}

void f_0043d949(void)
{
    FN_ENTER(0x0043d949);
    /* 0043d949: retf  */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
    /* 0043d94a: jae 0x43d983 */ if (!fC) goto L_0043d983;
L_0043d94c:; BB(0x0043d94c);
    /* 0043d94c: add byte ptr [ecx - 0x7b], bl */ { u32 ad = (u32)(r_ecx+0xffffff85u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0043d94f: sal byte ptr [ecx + ebx - 0x75], 0x90 */ { u32 ad = (u32)(r_ecx+r_ebx+0xffffff8bu); u32 c = (16u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 0043d954: nop  */ ;
    /* 0043d955: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043d957: add bh, dh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0043d959: ret 0 */ FN_RET(0x0043d949); r_esp += 4; return;
L_0043d983:; BB(0x0043d983);
    /* 0043d983: sar byte ptr [0xffff], 0x74 */ { u32 ad = (u32)(0xffffu); u32 c = (20u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; W8(ad, r);  } }
    /* 0043d98a: push ds */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d98b: movsx eax, word ptr [edi + 0x3fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3fau));
    /* 0043d992: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043d994: jle 0x43d9b2 */ if ((fZ||fS!=fO)) goto L_0043d9b2;
L_0043d996:; BB(0x0043d996);
    /* 0043d996: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043d999: mov word ptr [edi + 0x3fa], ax */ W16((u32)(r_edi+0x3fau), (u16)r_eax);
    /* 0043d9a0: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d9a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d9a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d9a8: ret  */ FN_RET(0x0043d949); r_esp += 4; return;
L_0043d9a9:; BB(0x0043d9a9);
    /* 0043d9a9: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043d9af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d9b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043d9b1: ret  */ FN_RET(0x0043d949); r_esp += 4; return;
L_0043d9b2:; BB(0x0043d9b2);
    /* 0043d9b2: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 0043d9b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d9b9: je 0x43dc4f */ if (fZ) goto L_0043dc4f;
L_0043d9bf:; BB(0x0043d9bf);
    /* 0043d9bf: movsx eax, word ptr [edi + 0x3f8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3f8u));
    /* 0043d9c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d9c8: je 0x43deb0 */ if (fZ) goto L_0043deb0;
L_0043d9ce:; BB(0x0043d9ce);
    /* 0043d9ce: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d9d1: je 0x43dc31 */ if (fZ) goto L_0043dc31;
L_0043d9d7:; BB(0x0043d9d7);
    /* 0043d9d7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d9da: jne 0x43d9f8 */ if (!fZ) goto L_0043d9f8;
L_0043d9dc:; BB(0x0043d9dc);
    /* 0043d9dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043d9de: mov dword ptr [0xa44798], eax */ W32((u32)(0xa44798u), r_eax);
    /* 0043d9e3: mov word ptr [edi + 0x400], ax */ W16((u32)(r_edi+0x400u), (u16)r_eax);
    /* 0043d9ea: mov edx, 3 */ r_edx = 0x3u;
    /* 0043d9ef: mov word ptr [edi + 0x3f8], dx */ W16((u32)(r_edi+0x3f8u), (u16)r_edx);
    /* 0043d9f6: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043d9f8:; BB(0x0043d9f8);
    /* 0043d9f8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d9fb: jne 0x43d9a9 */ if (!fZ) goto L_0043d9a9;
L_0043d9fd:; BB(0x0043d9fd);
    /* 0043d9fd: mov eax, dword ptr [0xa44798] */ r_eax = R32((u32)(0xa44798u));
    /* 0043da02: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043da05: je 0x43da13 */ if (fZ) goto L_0043da13;
L_0043da07:; BB(0x0043da07);
    /* 0043da07: movsx eax, word ptr [edi + 0x400] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x400u));
    /* 0043da0e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043da11: jl 0x43da59 */ if ((fS!=fO)) goto L_0043da59;
L_0043da13:; BB(0x0043da13);
    /* 0043da13: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0043da17: mov byte ptr [esp + 0x74], 0x15 */ W8((u32)(r_esp+0x74u), 0x15u);
    /* 0043da1c: mov edx, 1 */ r_edx = 0x1u;
    /* 0043da21: mov dword ptr [0xa44798], edx */ W32((u32)(0xa44798u), r_edx);
    /* 0043da27: mov byte ptr [esp + 0x75], 3 */ W8((u32)(r_esp+0x75u), 0x3u);
    /* 0043da2c: mov word ptr [esp + 0x76], ax */ W16((u32)(r_esp+0x76u), (u16)r_eax);
    /* 0043da31: mov word ptr [esp + 0x78], dx */ W16((u32)(r_esp+0x78u), (u16)r_edx);
    /* 0043da36: lea ecx, [esp + 0x74] */ r_ecx = (u32)(r_esp+0x74u);
    /* 0043da3a: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43da3fu); f_008003e0();
    /* 0043da3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043da41: mov word ptr [edi + 0x3f8], ax */ W16((u32)(r_edi+0x3f8u), (u16)r_eax);
    /* 0043da48: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 0043da4d: mov word ptr [edi + 0x3fa], dx */ W16((u32)(r_edi+0x3fau), (u16)r_edx);
    /* 0043da54: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043da59:; BB(0x0043da59);
    /* 0043da59: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 0043da5d: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 0043da61: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043da64: mov word ptr [edi + 0x400], ax */ W16((u32)(r_edi+0x400u), (u16)r_eax);
    /* 0043da6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043da6d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043da6f: mov ebp, eax */ r_ebp = r_eax;
    /* 0043da71: mov ebx, edx */ r_ebx = r_edx;
L_0043da73:; BB(0x0043da73);
    /* 0043da73: movzx ecx, word ptr [ebx*2 + 0x9a4df4] */ r_ecx = (u32)R16((u32)(r_ebx*2+0x9a4df4u));
    /* 0043da7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043da7c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43da81u); f_007b4d18();
    /* 0043da81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043da82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043da84: je 0x43daac */ if (fZ) goto L_0043daac;
L_0043da86:; BB(0x0043da86);
    /* 0043da86: mov ecx, dword ptr [eax + 0x390] */ r_ecx = R32((u32)(r_eax+0x390u));
    /* 0043da8c: test ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043da92: je 0x43da9b */ if (fZ) goto L_0043da9b;
L_0043da94:; BB(0x0043da94);
    /* 0043da94: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0043da99: jmp 0x43da9d */ goto L_0043da9d;
L_0043da9b:; BB(0x0043da9b);
    /* 0043da9b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0043da9d:; BB(0x0043da9d);
    /* 0043da9d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043da9f: jne 0x43daac */ if (!fZ) goto L_0043daac;
L_0043daa1:; BB(0x0043daa1);
    /* 0043daa1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043daa3: mov byte ptr [ecx + 0xa44768], bl */ W8((u32)(r_ecx+0xa44768u), (u8)r_ebx);
    /* 0043daa9: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0043daac:; BB(0x0043daac);
    /* 0043daac: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043daaf: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043dab2: jl 0x43da73 */ if ((fS!=fO)) goto L_0043da73;
L_0043dab4:; BB(0x0043dab4);
    /* 0043dab4: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0043dab8: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0043dabc: mov eax, ebp */ r_eax = r_ebp;
    /* 0043dabe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043dac1: jle 0x43db91 */ if ((fZ||fS!=fO)) goto L_0043db91;
L_0043dac7:; BB(0x0043dac7);
    /* 0043dac7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0043dac9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043dacc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043dace: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043dad0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043dad2: jle 0x43db91 */ if ((fZ||fS!=fO)) goto L_0043db91;
L_0043dad8:; BB(0x0043dad8);
    /* 0043dad8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0043dadb: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0043dade: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0043dae2: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0043dae6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0043daea: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 0043daee: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 0043daf2: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
L_0043daf6:; BB(0x0043daf6);
    /* 0043daf6: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0043dafa: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43daffu); f_007751b0();
    /* 0043daff: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0043db03: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0043db07: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043db0b: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043db10: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043db15: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043db19: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043db1d: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043db21: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043db25: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0043db29: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43db2eu); f_007751b0();
    /* 0043db2e: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0043db32: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043db36: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043db3b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043db40: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043db44: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043db48: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043db4c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043db50: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0043db54: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043db56: je 0x43db72 */ if (fZ) goto L_0043db72;
L_0043db58:; BB(0x0043db58);
    /* 0043db58: movzx eax, byte ptr [ebx + 0xa44768] */ r_eax = (u32)R8((u32)(r_ebx+0xa44768u));
    /* 0043db5f: movzx edx, byte ptr [ecx + 0xa44768] */ r_edx = (u32)R8((u32)(r_ecx+0xa44768u));
    /* 0043db66: mov byte ptr [ebx + 0xa44768], dl */ W8((u32)(r_ebx+0xa44768u), (u8)r_edx);
    /* 0043db6c: mov byte ptr [ecx + 0xa44768], al */ W8((u32)(r_ecx+0xa44768u), (u8)r_eax);
L_0043db72:; BB(0x0043db72);
    /* 0043db72: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0043db76: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0043db79: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043db7b: jl 0x43daf6 */ if ((fS!=fO)) goto L_0043daf6;
L_0043db81:; BB(0x0043db81);
    /* 0043db81: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0043db85: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 0043db89: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0043db8d: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_0043db91:; BB(0x0043db91);
    /* 0043db91: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0043db95: mov byte ptr [esp + 0x64], 0x84 */ W8((u32)(r_esp+0x64u), 0x84u);
    /* 0043db9a: mov word ptr [esp + 0x66], dx */ W16((u32)(r_esp+0x66u), (u16)r_edx);
    /* 0043db9f: movsx edx, word ptr [edi + 0x404] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x404u));
    /* 0043dba6: mov byte ptr [esp + 0x65], 4 */ W8((u32)(r_esp+0x65u), 0x4u);
    /* 0043dbab: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043dbad: jl 0x43dbb1 */ if ((fS!=fO)) goto L_0043dbb1;
L_0043dbaf:; BB(0x0043dbaf);
    /* 0043dbaf: mov edx, eax */ r_edx = r_eax;
L_0043dbb1:; BB(0x0043dbb1);
    /* 0043dbb1: mov word ptr [esp + 0x6e], dx */ W16((u32)(r_esp+0x6eu), (u16)r_edx);
    /* 0043dbb6: mov ecx, edi */ r_ecx = r_edi;
    /* 0043dbb8: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43dbbdu); f_007751b0();
    /* 0043dbbd: fld dword ptr [0x8fdbdc] */ FPUSH(R_F32((u32)(0x8fdbdcu)));
    /* 0043dbc3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043dbc5: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043dbc9: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043dbce: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043dbd3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043dbd7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043dbdb: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043dbdf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043dbe3: mov ebp, 0xa44768 */ r_ebp = 0xa44768u;
    /* 0043dbe8: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0043dbec: mov word ptr [esp + 0x70], ax */ W16((u32)(r_esp+0x70u), (u16)r_eax);
    /* 0043dbf1: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0043dbf4: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 0043dbf8: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0043dbfc: mov word ptr [esp + 0x6c], ax */ W16((u32)(r_esp+0x6cu), (u16)r_eax);
    /* 0043dc01: lea ecx, [esp + 0x64] */ r_ecx = (u32)(r_esp+0x64u);
    /* 0043dc05: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43dc0au); f_008003e0();
    /* 0043dc0a: movsx eax, word ptr [edi + 0x404] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x404u));
    /* 0043dc11: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043dc14: jge 0x43dc20 */ if ((fS==fO)) goto L_0043dc20;
L_0043dc16:; BB(0x0043dc16);
    /* 0043dc16: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043dc19: mov word ptr [edi + 0x404], ax */ W16((u32)(r_edi+0x404u), (u16)r_eax);
L_0043dc20:; BB(0x0043dc20);
    /* 0043dc20: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 0043dc25: mov word ptr [edi + 0x3fa], ax */ W16((u32)(r_edi+0x3fau), (u16)r_eax);
    /* 0043dc2c: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043dc31:; BB(0x0043dc31);
    /* 0043dc31: mov eax, dword ptr [0xa447e8] */ r_eax = R32((u32)(0xa447e8u));
    /* 0043dc36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dc38: je 0x43d9a9 */ if (fZ) goto L_0043d9a9;
L_0043dc3e:; BB(0x0043dc3e);
    /* 0043dc3e: mov eax, 2 */ r_eax = 0x2u;
    /* 0043dc43: mov word ptr [edi + 0x3f8], ax */ W16((u32)(r_edi+0x3f8u), (u16)r_eax);
    /* 0043dc4a: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043dc4f:; BB(0x0043dc4f);
    /* 0043dc4f: movsx eax, word ptr [edi + 0x3f8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3f8u));
    /* 0043dc56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dc58: je 0x43dffc */ if (fZ) goto L_0043dffc;
L_0043dc5e:; BB(0x0043dc5e);
    /* 0043dc5e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dc61: je 0x43de92 */ if (fZ) goto L_0043de92;
L_0043dc67:; BB(0x0043dc67);
    /* 0043dc67: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dc6a: jne 0x43dc8b */ if (!fZ) goto L_0043dc8b;
L_0043dc6c:; BB(0x0043dc6c);
    /* 0043dc6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043dc6e: mov dword ptr [0xa44798], eax */ W32((u32)(0xa44798u), r_eax);
    /* 0043dc73: mov word ptr [edi + 0x400], ax */ W16((u32)(r_edi+0x400u), (u16)r_eax);
    /* 0043dc7a: mov edx, 3 */ r_edx = 0x3u;
    /* 0043dc7f: mov word ptr [edi + 0x3f8], dx */ W16((u32)(r_edi+0x3f8u), (u16)r_edx);
    /* 0043dc86: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043dc8b:; BB(0x0043dc8b);
    /* 0043dc8b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dc8e: jne 0x43d9a9 */ if (!fZ) goto L_0043d9a9;
L_0043dc94:; BB(0x0043dc94);
    /* 0043dc94: mov eax, dword ptr [0xa44798] */ r_eax = R32((u32)(0xa44798u));
    /* 0043dc99: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dc9c: je 0x43dcaa */ if (fZ) goto L_0043dcaa;
L_0043dc9e:; BB(0x0043dc9e);
    /* 0043dc9e: movsx eax, word ptr [edi + 0x400] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x400u));
    /* 0043dca5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043dca8: jl 0x43dcf0 */ if ((fS!=fO)) goto L_0043dcf0;
L_0043dcaa:; BB(0x0043dcaa);
    /* 0043dcaa: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0043dcae: mov byte ptr [esp + 0x4c], 0x15 */ W8((u32)(r_esp+0x4cu), 0x15u);
    /* 0043dcb3: mov edx, 1 */ r_edx = 0x1u;
    /* 0043dcb8: mov dword ptr [0xa44798], edx */ W32((u32)(0xa44798u), r_edx);
    /* 0043dcbe: mov byte ptr [esp + 0x4d], 3 */ W8((u32)(r_esp+0x4du), 0x3u);
    /* 0043dcc3: mov word ptr [esp + 0x4e], ax */ W16((u32)(r_esp+0x4eu), (u16)r_eax);
    /* 0043dcc8: mov word ptr [esp + 0x50], dx */ W16((u32)(r_esp+0x50u), (u16)r_edx);
    /* 0043dccd: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 0043dcd1: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43dcd6u); f_008003e0();
    /* 0043dcd6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043dcd8: mov word ptr [edi + 0x3f8], ax */ W16((u32)(r_edi+0x3f8u), (u16)r_eax);
    /* 0043dcdf: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 0043dce4: mov word ptr [edi + 0x3fa], dx */ W16((u32)(r_edi+0x3fau), (u16)r_edx);
    /* 0043dceb: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043dcf0:; BB(0x0043dcf0);
    /* 0043dcf0: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 0043dcf4: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 0043dcf8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043dcfb: mov word ptr [edi + 0x400], ax */ W16((u32)(r_edi+0x400u), (u16)r_eax);
    /* 0043dd02: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0043dd04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043dd06: mov ebx, eax */ r_ebx = r_eax;
L_0043dd08:; BB(0x0043dd08);
    /* 0043dd08: movzx edx, word ptr [ebx*2 + 0x9a4df4] */ r_edx = (u32)R16((u32)(r_ebx*2+0x9a4df4u));
    /* 0043dd10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043dd11: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43dd16u); f_007b4d18();
    /* 0043dd16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043dd17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dd19: je 0x43dd41 */ if (fZ) goto L_0043dd41;
L_0043dd1b:; BB(0x0043dd1b);
    /* 0043dd1b: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 0043dd21: test edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dd27: je 0x43dd30 */ if (fZ) goto L_0043dd30;
L_0043dd29:; BB(0x0043dd29);
    /* 0043dd29: mov edx, 1 */ r_edx = 0x1u;
    /* 0043dd2e: jmp 0x43dd32 */ goto L_0043dd32;
L_0043dd30:; BB(0x0043dd30);
    /* 0043dd30: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0043dd32:; BB(0x0043dd32);
    /* 0043dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dd34: jne 0x43dd41 */ if (!fZ) goto L_0043dd41;
L_0043dd36:; BB(0x0043dd36);
    /* 0043dd36: mov edx, ebp */ r_edx = r_ebp;
    /* 0043dd38: mov byte ptr [edx + 0xa44768], bl */ W8((u32)(r_edx+0xa44768u), (u8)r_ebx);
    /* 0043dd3e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0043dd41:; BB(0x0043dd41);
    /* 0043dd41: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043dd44: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043dd47: jl 0x43dd08 */ if ((fS!=fO)) goto L_0043dd08;
L_0043dd49:; BB(0x0043dd49);
    /* 0043dd49: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0043dd4d: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0043dd51: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043dd54: jle 0x43de29 */ if ((fZ||fS!=fO)) goto L_0043de29;
L_0043dd5a:; BB(0x0043dd5a);
    /* 0043dd5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043dd5c: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0043dd60: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043dd62: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043dd64: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043dd66: jle 0x43de29 */ if ((fZ||fS!=fO)) goto L_0043de29;
L_0043dd6c:; BB(0x0043dd6c);
    /* 0043dd6c: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0043dd70: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0043dd74: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0043dd78: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0043dd7c: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 0043dd80: mov ebp, eax */ r_ebp = r_eax;
    /* 0043dd82: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 0043dd86: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 0043dd8a: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
L_0043dd8e:; BB(0x0043dd8e);
    /* 0043dd8e: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0043dd92: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43dd97u); f_007751b0();
    /* 0043dd97: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0043dd9b: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0043dd9f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043dda3: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043dda8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043ddad: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043ddb1: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043ddb5: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043ddb9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043ddbd: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0043ddc1: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43ddc6u); f_007751b0();
    /* 0043ddc6: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0043ddca: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043ddce: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043ddd3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043ddd8: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043dddc: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043dde0: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043dde4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043dde8: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0043ddec: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ddee: je 0x43de0a */ if (fZ) goto L_0043de0a;
L_0043ddf0:; BB(0x0043ddf0);
    /* 0043ddf0: movzx eax, byte ptr [ebx + 0xa44768] */ r_eax = (u32)R8((u32)(r_ebx+0xa44768u));
    /* 0043ddf7: movzx edx, byte ptr [ecx + 0xa44768] */ r_edx = (u32)R8((u32)(r_ecx+0xa44768u));
    /* 0043ddfe: mov byte ptr [ebx + 0xa44768], dl */ W8((u32)(r_ebx+0xa44768u), (u8)r_edx);
    /* 0043de04: mov byte ptr [ecx + 0xa44768], al */ W8((u32)(r_ecx+0xa44768u), (u8)r_eax);
L_0043de0a:; BB(0x0043de0a);
    /* 0043de0a: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0043de0e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0043de11: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043de13: jl 0x43dd8e */ if ((fS!=fO)) goto L_0043dd8e;
L_0043de19:; BB(0x0043de19);
    /* 0043de19: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 0043de1d: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 0043de21: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0043de25: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_0043de29:; BB(0x0043de29);
    /* 0043de29: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0043de2d: mov byte ptr [esp + 0x40], 0x16 */ W8((u32)(r_esp+0x40u), 0x16u);
    /* 0043de32: mov word ptr [esp + 0x42], ax */ W16((u32)(r_esp+0x42u), (u16)r_eax);
    /* 0043de37: movsx eax, word ptr [edi + 0x404] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x404u));
    /* 0043de3e: mov byte ptr [esp + 0x41], 3 */ W8((u32)(r_esp+0x41u), 0x3u);
    /* 0043de43: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043de45: jl 0x43de49 */ if ((fS!=fO)) goto L_0043de49;
L_0043de47:; BB(0x0043de47);
    /* 0043de47: mov eax, ebp */ r_eax = r_ebp;
L_0043de49:; BB(0x0043de49);
    /* 0043de49: mov word ptr [esp + 0x4a], ax */ W16((u32)(r_esp+0x4au), (u16)r_eax);
    /* 0043de4e: mov edx, 0xa44768 */ r_edx = 0xa44768u;
    /* 0043de53: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0043de55: movzx ebp, word ptr [edx + 4] */ r_ebp = (u32)R16((u32)(r_edx+0x4u));
    /* 0043de59: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0043de5d: mov word ptr [esp + 0x48], bp */ W16((u32)(r_esp+0x48u), (u16)r_ebp);
    /* 0043de62: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 0043de66: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43de6bu); f_008003e0();
    /* 0043de6b: movsx eax, word ptr [edi + 0x404] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x404u));
    /* 0043de72: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043de75: jge 0x43de81 */ if ((fS==fO)) goto L_0043de81;
L_0043de77:; BB(0x0043de77);
    /* 0043de77: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043de7a: mov word ptr [edi + 0x404], ax */ W16((u32)(r_edi+0x404u), (u16)r_eax);
L_0043de81:; BB(0x0043de81);
    /* 0043de81: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 0043de86: mov word ptr [edi + 0x3fa], ax */ W16((u32)(r_edi+0x3fau), (u16)r_eax);
    /* 0043de8d: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043de92:; BB(0x0043de92);
    /* 0043de92: mov eax, dword ptr [0xa447e8] */ r_eax = R32((u32)(0xa447e8u));
    /* 0043de97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043de99: je 0x43d9a9 */ if (fZ) goto L_0043d9a9;
L_0043de9f:; BB(0x0043de9f);
    /* 0043de9f: mov eax, 2 */ r_eax = 0x2u;
    /* 0043dea4: mov word ptr [edi + 0x3f8], ax */ W16((u32)(r_edi+0x3f8u), (u16)r_eax);
    /* 0043deab: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043deb0:; BB(0x0043deb0);
    /* 0043deb0: movsx edx, byte ptr [0xa4498c] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa4498cu));
    /* 0043deb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043deb9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043debb: jne 0x43dec2 */ if (!fZ) goto L_0043dec2;
L_0043debd:; BB(0x0043debd);
    /* 0043debd: mov eax, 1 */ r_eax = 0x1u;
L_0043dec2:; BB(0x0043dec2);
    /* 0043dec2: movsx edx, byte ptr [0xa44990] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa44990u));
    /* 0043dec9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043decb: jne 0x43ded2 */ if (!fZ) goto L_0043ded2;
L_0043decd:; BB(0x0043decd);
    /* 0043decd: mov eax, 1 */ r_eax = 0x1u;
L_0043ded2:; BB(0x0043ded2);
    /* 0043ded2: movsx edx, byte ptr [0xa44994] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa44994u));
    /* 0043ded9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043dedb: jne 0x43dee2 */ if (!fZ) goto L_0043dee2;
L_0043dedd:; BB(0x0043dedd);
    /* 0043dedd: mov eax, 1 */ r_eax = 0x1u;
L_0043dee2:; BB(0x0043dee2);
    /* 0043dee2: movsx edx, byte ptr [0xa44998] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa44998u));
    /* 0043dee9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043deeb: jne 0x43def2 */ if (!fZ) goto L_0043def2;
L_0043deed:; BB(0x0043deed);
    /* 0043deed: mov eax, 1 */ r_eax = 0x1u;
L_0043def2:; BB(0x0043def2);
    /* 0043def2: movsx edx, byte ptr [0xa4499c] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa4499cu));
    /* 0043def9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043defb: jne 0x43df02 */ if (!fZ) goto L_0043df02;
L_0043defd:; BB(0x0043defd);
    /* 0043defd: mov eax, 1 */ r_eax = 0x1u;
L_0043df02:; BB(0x0043df02);
    /* 0043df02: movsx edx, byte ptr [0xa449a0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa449a0u));
    /* 0043df09: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043df0b: jne 0x43df12 */ if (!fZ) goto L_0043df12;
L_0043df0d:; BB(0x0043df0d);
    /* 0043df0d: mov eax, 1 */ r_eax = 0x1u;
L_0043df12:; BB(0x0043df12);
    /* 0043df12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043df14: jne 0x43df27 */ if (!fZ) goto L_0043df27;
L_0043df16:; BB(0x0043df16);
    /* 0043df16: mov eax, 2 */ r_eax = 0x2u;
    /* 0043df1b: mov word ptr [edi + 0x3f8], ax */ W16((u32)(r_edi+0x3f8u), (u16)r_eax);
    /* 0043df22: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043df27:; BB(0x0043df27);
    /* 0043df27: movzx eax, word ptr [0x9a4e00] */ r_eax = (u32)R16((u32)(0x9a4e00u));
    /* 0043df2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043df2f: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43df34u); f_007b4d18();
    /* 0043df34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043df35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043df37: je 0x43d9a9 */ if (fZ) goto L_0043d9a9;
L_0043df3d:; BB(0x0043df3d);
    /* 0043df3d: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0043df44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043df46: jne 0x43d9a9 */ if (!fZ) goto L_0043d9a9;
L_0043df4c:; BB(0x0043df4c);
    /* 0043df4c: mov ecx, edi */ r_ecx = r_edi;
    /* 0043df4e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43df53u); f_007751b0();
    /* 0043df53: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0043df55: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043df59: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043df5e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043df63: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043df67: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043df6b: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043df6f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043df73: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0043df77: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0043df7b: mov byte ptr [esp + 0x80], 0x15 */ W8((u32)(r_esp+0x80u), 0x15u);
    /* 0043df83: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0043df86: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043df88: mov byte ptr [esp + 0x81], 3 */ W8((u32)(r_esp+0x81u), 0x3u);
    /* 0043df90: mov word ptr [esp + 0x82], ax */ W16((u32)(r_esp+0x82u), (u16)r_eax);
    /* 0043df98: mov eax, dword ptr [edi + 0x3ac] */ r_eax = R32((u32)(r_edi+0x3acu));
    /* 0043df9e: mov word ptr [esp + 0x84], dx */ W16((u32)(r_esp+0x84u), (u16)r_edx);
    /* 0043dfa6: mov word ptr [esp + 0x88], ax */ W16((u32)(r_esp+0x88u), (u16)r_eax);
    /* 0043dfae: mov word ptr [esp + 0x8a], bp */ W16((u32)(r_esp+0x8au), (u16)r_ebp);
    /* 0043dfb6: lea ecx, [esp + 0x80] */ r_ecx = (u32)(r_esp+0x80u);
    /* 0043dfbd: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43dfc2u); f_008003e0();
    /* 0043dfc2: mov eax, dword ptr [edi + 0x3ac] */ r_eax = R32((u32)(r_edi+0x3acu));
    /* 0043dfc8: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043dfca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0043dfcc: jl 0x43dff1 */ if ((fS!=fO)) goto L_0043dff1;
L_0043dfce:; BB(0x0043dfce);
    /* 0043dfce: mov dword ptr [edi + 0x3ac], eax */ W32((u32)(r_edi+0x3acu), r_eax);
L_0043dfd4:; BB(0x0043dfd4);
    /* 0043dfd4: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 0043dfd9: mov word ptr [edi + 0x3fa], ax */ W16((u32)(r_edi+0x3fau), (u16)r_eax);
    /* 0043dfe0: mov edx, 1 */ r_edx = 0x1u;
    /* 0043dfe5: mov word ptr [edi + 0x3f8], dx */ W16((u32)(r_edi+0x3f8u), (u16)r_edx);
    /* 0043dfec: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043dff1:; BB(0x0043dff1);
    /* 0043dff1: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043dff4: mov dword ptr [edi + 0x3ac], eax */ W32((u32)(r_edi+0x3acu), r_eax);
    /* 0043dffa: jmp 0x43dfd4 */ goto L_0043dfd4;
L_0043dffc:; BB(0x0043dffc);
    /* 0043dffc: movsx edx, byte ptr [0xa4498c] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa4498cu));
    /* 0043e003: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043e005: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e007: jne 0x43e00e */ if (!fZ) goto L_0043e00e;
L_0043e009:; BB(0x0043e009);
    /* 0043e009: mov eax, 1 */ r_eax = 0x1u;
L_0043e00e:; BB(0x0043e00e);
    /* 0043e00e: movsx edx, byte ptr [0xa44990] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa44990u));
    /* 0043e015: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e017: jne 0x43e01e */ if (!fZ) goto L_0043e01e;
L_0043e019:; BB(0x0043e019);
    /* 0043e019: mov eax, 1 */ r_eax = 0x1u;
L_0043e01e:; BB(0x0043e01e);
    /* 0043e01e: movsx edx, byte ptr [0xa44994] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa44994u));
    /* 0043e025: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e027: jne 0x43e02e */ if (!fZ) goto L_0043e02e;
L_0043e029:; BB(0x0043e029);
    /* 0043e029: mov eax, 1 */ r_eax = 0x1u;
L_0043e02e:; BB(0x0043e02e);
    /* 0043e02e: movsx edx, byte ptr [0xa44998] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa44998u));
    /* 0043e035: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e037: jne 0x43e03e */ if (!fZ) goto L_0043e03e;
L_0043e039:; BB(0x0043e039);
    /* 0043e039: mov eax, 1 */ r_eax = 0x1u;
L_0043e03e:; BB(0x0043e03e);
    /* 0043e03e: movsx edx, byte ptr [0xa4499c] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa4499cu));
    /* 0043e045: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e047: jne 0x43e04e */ if (!fZ) goto L_0043e04e;
L_0043e049:; BB(0x0043e049);
    /* 0043e049: mov eax, 1 */ r_eax = 0x1u;
L_0043e04e:; BB(0x0043e04e);
    /* 0043e04e: movsx edx, byte ptr [0xa449a0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa449a0u));
    /* 0043e055: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e057: jne 0x43e05e */ if (!fZ) goto L_0043e05e;
L_0043e059:; BB(0x0043e059);
    /* 0043e059: mov eax, 1 */ r_eax = 0x1u;
L_0043e05e:; BB(0x0043e05e);
    /* 0043e05e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e060: jne 0x43e073 */ if (!fZ) goto L_0043e073;
L_0043e062:; BB(0x0043e062);
    /* 0043e062: mov eax, 2 */ r_eax = 0x2u;
    /* 0043e067: mov word ptr [edi + 0x3f8], ax */ W16((u32)(r_edi+0x3f8u), (u16)r_eax);
    /* 0043e06e: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043e073:; BB(0x0043e073);
    /* 0043e073: movzx eax, word ptr [0x9a4e00] */ r_eax = (u32)R16((u32)(0x9a4e00u));
    /* 0043e07a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043e07b: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x43e080u); f_007b4d18();
    /* 0043e080: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043e081: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e083: je 0x43d9a9 */ if (fZ) goto L_0043d9a9;
L_0043e089:; BB(0x0043e089);
    /* 0043e089: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0043e090: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043e092: jne 0x43d9a9 */ if (!fZ) goto L_0043d9a9;
L_0043e098:; BB(0x0043e098);
    /* 0043e098: mov ecx, edi */ r_ecx = r_edi;
    /* 0043e09a: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x43e09fu); f_007751b0();
    /* 0043e09f: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0043e0a1: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0043e0a5: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0043e0aa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043e0af: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0043e0b3: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0043e0b7: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043e0bb: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0043e0bf: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0043e0c3: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0043e0c7: mov byte ptr [esp + 0x58], 0x15 */ W8((u32)(r_esp+0x58u), 0x15u);
    /* 0043e0cc: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0043e0cf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043e0d1: mov byte ptr [esp + 0x59], 3 */ W8((u32)(r_esp+0x59u), 0x3u);
    /* 0043e0d6: mov word ptr [esp + 0x5a], ax */ W16((u32)(r_esp+0x5au), (u16)r_eax);
    /* 0043e0db: mov eax, dword ptr [edi + 0x3ac] */ r_eax = R32((u32)(r_edi+0x3acu));
    /* 0043e0e1: mov word ptr [esp + 0x5c], dx */ W16((u32)(r_esp+0x5cu), (u16)r_edx);
    /* 0043e0e6: mov word ptr [esp + 0x60], ax */ W16((u32)(r_esp+0x60u), (u16)r_eax);
    /* 0043e0eb: mov word ptr [esp + 0x62], bp */ W16((u32)(r_esp+0x62u), (u16)r_ebp);
    /* 0043e0f0: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 0043e0f4: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x43e0f9u); f_008003e0();
    /* 0043e0f9: mov eax, dword ptr [edi + 0x3ac] */ r_eax = R32((u32)(r_edi+0x3acu));
    /* 0043e0ff: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043e101: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0043e103: jl 0x43e128 */ if ((fS!=fO)) goto L_0043e128;
L_0043e105:; BB(0x0043e105);
    /* 0043e105: mov dword ptr [edi + 0x3ac], eax */ W32((u32)(r_edi+0x3acu), r_eax);
L_0043e10b:; BB(0x0043e10b);
    /* 0043e10b: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 0043e110: mov word ptr [edi + 0x3fa], ax */ W16((u32)(r_edi+0x3fau), (u16)r_eax);
    /* 0043e117: mov edx, 1 */ r_edx = 0x1u;
    /* 0043e11c: mov word ptr [edi + 0x3f8], dx */ W16((u32)(r_edi+0x3f8u), (u16)r_edx);
    /* 0043e123: jmp 0x43d9a9 */ goto L_0043d9a9;
L_0043e128:; BB(0x0043e128);
    /* 0043e128: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043e12b: mov dword ptr [edi + 0x3ac], eax */ W32((u32)(r_edi+0x3acu), r_eax);
    /* 0043e131: jmp 0x43e10b */ goto L_0043e10b;
}

