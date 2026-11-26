#include "protos.h"

void f_0053b4f8(void) /* sub_53B4F8 */
{
    FN_ENTER(0x0053b4f8);
    /* 0053b4f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b4f9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0053b4fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053b4fd: push 0x1d3 */ { u32 v = 0x1d3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b502: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x53b507u); f_007879b8();
    /* 0053b507: mov ecx, eax */ r_ecx = r_eax;
    /* 0053b509: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0053b50c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053b50e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b50f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b511: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b512: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b513: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x53b518u); f_008144b0();
    /* 0053b518: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053b51b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053b51c: ret  */ FN_RET(0x0053b4f8); r_esp += 4; return;
}

void f_0053b520(void) /* sub_53B520 */
{
    FN_ENTER(0x0053b520);
    /* 0053b520: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053b521: mov esi, ecx */ r_esi = r_ecx;
    /* 0053b523: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053b527: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b52a: je 0x53b626 */ if (fZ) goto L_0053b626;
L_0053b530:; BB(0x0053b530);
    /* 0053b530: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b533: je 0x53b5e1 */ if (fZ) goto L_0053b5e1;
L_0053b539:; BB(0x0053b539);
    /* 0053b539: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b53b: jne 0x53b5b7 */ if (!fZ) goto L_0053b5b7;
L_0053b53d:; BB(0x0053b53d);
    /* 0053b53d: mov ecx, esi */ r_ecx = r_esi;
    /* 0053b53f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53b544u); f_007aa094();
    /* 0053b544: mov eax, dword ptr [esi + 0x48c] */ r_eax = R32((u32)(r_esi+0x48cu));
    /* 0053b54a: mov ecx, dword ptr [esi + 0x4cc] */ r_ecx = R32((u32)(r_esi+0x4ccu));
    /* 0053b550: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053b553: mov dword ptr [esi + 0x48c], eax */ W32((u32)(r_esi+0x48cu), r_eax);
    /* 0053b559: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b55b: je 0x53b5f8 */ if (fZ) goto L_0053b5f8;
L_0053b561:; BB(0x0053b561);
    /* 0053b561: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053b563: je 0x53b573 */ if (fZ) goto L_0053b573;
L_0053b565:; BB(0x0053b565);
    /* 0053b565: lea eax, [esi + 0x458] */ r_eax = (u32)(r_esi+0x458u);
    /* 0053b56b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b56c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x53b571u); f_00508db8();
    /* 0053b571: jmp 0x53b57f */ goto L_0053b57f;
L_0053b573:; BB(0x0053b573);
    /* 0053b573: lea eax, [esi + 0x464] */ r_eax = (u32)(r_esi+0x464u);
    /* 0053b579: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b57a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x53b57fu); f_00508db8();
L_0053b57f:; BB(0x0053b57f);
    /* 0053b57f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053b581: mov ecx, esi */ r_ecx = r_esi;
    /* 0053b583: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x53b589u); call_ind(t); }
    /* 0053b589: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053b58b: mov ecx, esi */ r_ecx = r_esi;
    /* 0053b58d: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53b593u); call_ind(t); }
    /* 0053b593: push 0x1da */ { u32 v = 0x1dau; r_esp -= 4; W32(r_esp, v); }
    /* 0053b598: mov ecx, esi */ r_ecx = r_esi;
    /* 0053b59a: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x53b59fu); f_007879b8();
    /* 0053b59f: mov ecx, eax */ r_ecx = r_eax;
    /* 0053b5a1: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0053b5a4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053b5a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b5a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b5a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b5a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053b5aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b5ab: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x53b5b0u); f_008144b0();
    /* 0053b5b0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053b5b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053b5b4: ret 4 */ FN_RET(0x0053b520); r_esp += 8; return;
L_0053b5b7:; BB(0x0053b5b7);
    /* 0053b5b7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053b5ba: jne 0x53b5f4 */ if (!fZ) goto L_0053b5f4;
L_0053b5bc:; BB(0x0053b5bc);
    /* 0053b5bc: mov edx, dword ptr [esi + 0x4cc] */ r_edx = R32((u32)(r_esi+0x4ccu));
    /* 0053b5c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053b5c4: je 0x53b5f4 */ if (fZ) goto L_0053b5f4;
L_0053b5c6:; BB(0x0053b5c6);
    /* 0053b5c6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0053b5ca: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053b5cf: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0053b5d3: mov dword ptr [esi + 0x4cc], 0 */ W32((u32)(r_esi+0x4ccu), 0x0u);
    /* 0053b5dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053b5de: ret 4 */ FN_RET(0x0053b520); r_esp += 8; return;
L_0053b5e1:; BB(0x0053b5e1);
    /* 0053b5e1: mov eax, dword ptr [esi + 0x48c] */ r_eax = R32((u32)(r_esi+0x48cu));
    /* 0053b5e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053b5e9: jg 0x53b5f4 */ if ((!fZ&&fS==fO)) goto L_0053b5f4;
L_0053b5eb:; BB(0x0053b5eb);
    /* 0053b5eb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b5ed: mov ecx, esi */ r_ecx = r_esi;
    /* 0053b5ef: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53b5f4u); f_0051f62c();
L_0053b5f4:; BB(0x0053b5f4);
    /* 0053b5f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053b5f5: ret 4 */ FN_RET(0x0053b520); r_esp += 8; return;
L_0053b5f8:; BB(0x0053b5f8);
    /* 0053b5f8: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b5fd: lea eax, [esi + 0x458] */ r_eax = (u32)(r_esi+0x458u);
    /* 0053b603: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b604: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x53b609u); f_00509590();
    /* 0053b609: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b60c: mov dword ptr [esi + 0x4cc], eax */ W32((u32)(r_esi+0x4ccu), r_eax);
    /* 0053b612: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b614: je 0x53b57f */ if (fZ) goto L_0053b57f;
L_0053b61a:; BB(0x0053b61a);
    /* 0053b61a: mov ecx, eax */ r_ecx = r_eax;
    /* 0053b61c: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x53b621u); f_00508f48();
    /* 0053b621: jmp 0x53b57f */ goto L_0053b57f;
L_0053b626:; BB(0x0053b626);
    /* 0053b626: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b628: mov eax, 8 */ r_eax = 0x8u;
    /* 0053b62d: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0053b634: mov ecx, esi */ r_ecx = r_esi;
    /* 0053b636: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53b63bu); f_0051f664();
    /* 0053b63b: mov dword ptr [esi + 0x4cc], 0 */ W32((u32)(r_esi+0x4ccu), 0x0u);
    /* 0053b645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053b646: ret 4 */ FN_RET(0x0053b520); r_esp += 8; return;
}

void f_0053b64c(void) /* sub_53B64C */
{
    FN_ENTER(0x0053b64c);
    /* 0053b64c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053b64d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b64e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b64f: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053b652: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053b654: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0053b658: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b65b: je 0x53b931 */ if (fZ) goto L_0053b931;
L_0053b661:; BB(0x0053b661);
    /* 0053b661: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b664: je 0x53b8d1 */ if (fZ) goto L_0053b8d1;
L_0053b66a:; BB(0x0053b66a);
    /* 0053b66a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b66c: jne 0x53b8dc */ if (!fZ) goto L_0053b8dc;
L_0053b672:; BB(0x0053b672);
    /* 0053b672: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053b674: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53b679u); f_007aa094();
    /* 0053b679: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b67e: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b683: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 0053b686: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b687: push dword ptr [ebx + 0x488] */ { u32 v = R32((u32)(r_ebx+0x488u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053b68d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b68e: call 0x782ac0 */ r_esp -= 4; W32(r_esp, 0x53b693u); f_00782ac0();
    /* 0053b693: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b696: mov dword ptr [ebx + 0x488], eax */ W32((u32)(r_ebx+0x488u), r_eax);
    /* 0053b69c: mov eax, dword ptr [ebx + 0x4b8] */ r_eax = R32((u32)(r_ebx+0x4b8u));
    /* 0053b6a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b6a4: jne 0x53b880 */ if (!fZ) goto L_0053b880;
L_0053b6aa:; BB(0x0053b6aa);
    /* 0053b6aa: push 0x41300000 */ { u32 v = 0x41300000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b6af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053b6b1: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x53b6b6u); f_007aaa30();
    /* 0053b6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b6b8: je 0x53b6c1 */ if (fZ) goto L_0053b6c1;
L_0053b6ba:; BB(0x0053b6ba);
    /* 0053b6ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053b6bc: call 0x53b9a8 */ r_esp -= 4; W32(r_esp, 0x53b6c1u); f_0053b9a8();
L_0053b6c1:; BB(0x0053b6c1);
    /* 0053b6c1: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053b6c7: mov ecx, dword ptr [0xa7363c] */ r_ecx = R32((u32)(0xa7363cu));
    /* 0053b6cd: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x53b6d2u); f_00579de0();
    /* 0053b6d2: mov edi, eax */ r_edi = r_eax;
    /* 0053b6d4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b6d6: je 0x53b727 */ if (fZ) goto L_0053b727;
L_0053b6d8:; BB(0x0053b6d8);
    /* 0053b6d8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x53b6ddu); f_0082d7b0();
    /* 0053b6dd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053b6df: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x53b6e4u); f_00830cd8();
    /* 0053b6e4: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0053b6e7: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x53b6ecu); f_0082d838();
    /* 0053b6ec: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0053b6ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053b6f1: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x53b6f6u); f_0082d8bc();
    /* 0053b6f6: lea ebp, [esp] */ r_ebp = (u32)(r_esp);
    /* 0053b6f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b6fa: lea edx, [edi + 0x18] */ r_edx = (u32)(r_edi+0x18u);
    /* 0053b6fd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053b6ff: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x53b704u); f_00830aa0();
    /* 0053b704: lea ebp, [esp + 0xc] */ r_ebp = (u32)(r_esp+0xcu);
    /* 0053b708: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b709: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053b70b: mov edx, edi */ r_edx = r_edi;
    /* 0053b70d: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x53b712u); f_00830aa0();
    /* 0053b712: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x53b717u); f_0082da80();
    /* 0053b717: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0053b71a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b71b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b71c: mov ecx, dword ptr [ebx + 0x4ac] */ r_ecx = R32((u32)(r_ebx+0x4acu));
    /* 0053b722: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053b724: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x53b727u); call_ind(t); }
L_0053b727:; BB(0x0053b727);
    /* 0053b727: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x53b72cu); f_00520e6c();
    /* 0053b72c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b72e: je 0x53b738 */ if (fZ) goto L_0053b738;
L_0053b730:; BB(0x0053b730);
    /* 0053b730: fld dword ptr [0x923238] */ FPUSH(R_F32((u32)(0x923238u)));
    /* 0053b736: jmp 0x53b73e */ goto L_0053b73e;
L_0053b738:; BB(0x0053b738);
    /* 0053b738: fld dword ptr [0x92323c] */ FPUSH(R_F32((u32)(0x92323cu)));
L_0053b73e:; BB(0x0053b73e);
    /* 0053b73e: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0053b744: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0053b746: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053b748: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053b74a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053b74c: mov edx, dword ptr [ebx + 0xc0] */ r_edx = R32((u32)(r_ebx+0xc0u));
    /* 0053b752: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053b753: jb 0x53b822 */ if (fC) goto L_0053b822;
L_0053b759:; BB(0x0053b759);
    /* 0053b759: fcomp dword ptr [0x92329c] */ fx_compare(ST(0), R_F32((u32)(0x92329cu))); FPOP();
    /* 0053b75f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053b761: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053b762: ja 0x53b824 */ if ((!fC&&!fZ)) goto L_0053b824;
L_0053b768:; BB(0x0053b768);
    /* 0053b768: mov ecx, dword ptr [0xa7363c] */ r_ecx = R32((u32)(0xa7363cu));
    /* 0053b76e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b76f: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x53b774u); f_00579de0();
    /* 0053b774: mov ecx, dword ptr [ebx + 0x4a0] */ r_ecx = R32((u32)(r_ebx+0x4a0u));
    /* 0053b77a: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0053b77d: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0053b780: mov ebp, dword ptr [ebx + 0x3c] */ r_ebp = R32((u32)(r_ebx+0x3cu));
    /* 0053b783: mov dword ptr [ecx + 0x3c], ebp */ W32((u32)(r_ecx+0x3cu), r_ebp);
    /* 0053b786: mov edi, dword ptr [ebx + 0x40] */ r_edi = R32((u32)(r_ebx+0x40u));
    /* 0053b789: mov dword ptr [ecx + 0x40], edi */ W32((u32)(r_ecx+0x40u), r_edi);
    /* 0053b78c: mov ebp, dword ptr [ebx + 0x4a0] */ r_ebp = R32((u32)(r_ebx+0x4a0u));
    /* 0053b792: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0053b795: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 0053b798: mov edx, dword ptr [ebx + 0x4a0] */ r_edx = R32((u32)(r_ebx+0x4a0u));
    /* 0053b79e: mov ebp, dword ptr [edx + 0xa4] */ r_ebp = R32((u32)(r_edx+0xa4u));
    /* 0053b7a4: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0053b7a7: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 0053b7aa: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0053b7ad: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0053b7b0: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0053b7b3: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0053b7b6: mov edx, dword ptr [ebx + 0x4a0] */ r_edx = R32((u32)(r_ebx+0x4a0u));
    /* 0053b7bc: mov ebp, dword ptr [edx + 0xa4] */ r_ebp = R32((u32)(r_edx+0xa4u));
    /* 0053b7c2: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0053b7c5: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 0053b7c8: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0053b7cb: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0053b7ce: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0053b7d1: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 0053b7d4: push dword ptr [ebx + 0x4a0] */ { u32 v = R32((u32)(r_ebx+0x4a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053b7da: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x53b7dfu); f_007b999c();
    /* 0053b7df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053b7e0: mov eax, dword ptr [0x923138] */ r_eax = R32((u32)(0x923138u));
    /* 0053b7e5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0053b7e7: mov dword ptr [esp + 0x18], 0x40400000 */ W32((u32)(r_esp+0x18u), 0x40400000u);
    /* 0053b7ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053b7f1: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0053b7f5: call dword ptr [edx + 0x194] */ { u32 t = R32((u32)(r_edx+0x194u)); r_esp -= 4; W32(r_esp, 0x53b7fbu); call_ind(t); }
    /* 0053b7fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b7fd: je 0x53b80a */ if (fZ) goto L_0053b80a;
L_0053b7ff:; BB(0x0053b7ff);
    /* 0053b7ff: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0053b803: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053b806: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
L_0053b80a:; BB(0x0053b80a);
    /* 0053b80a: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0053b80e: push dword ptr [ebx + 0x4a4] */ { u32 v = R32((u32)(r_ebx+0x4a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053b814: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b815: mov ecx, dword ptr [ebx + 0x4a0] */ r_ecx = R32((u32)(r_ebx+0x4a0u));
    /* 0053b81b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053b81d: call dword ptr [edx + 0x40] */ { u32 t = R32((u32)(r_edx+0x40u)); r_esp -= 4; W32(r_esp, 0x53b820u); call_ind(t); }
    /* 0053b820: jmp 0x53b824 */ goto L_0053b824;
L_0053b822:; BB(0x0053b822);
    /* 0053b822: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0053b824:; BB(0x0053b824);
    /* 0053b824: push 0x412ccccd */ { u32 v = 0x412ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0053b829: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053b82b: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x53b830u); f_007aaa30();
    /* 0053b830: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b832: je 0x53b85b */ if (fZ) goto L_0053b85b;
L_0053b834:; BB(0x0053b834);
    /* 0053b834: push 0x1d7 */ { u32 v = 0x1d7u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b839: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053b83b: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x53b840u); f_007879b8();
    /* 0053b840: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0053b843: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053b845: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b846: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b847: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b849: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x53b84eu); f_00814298();
    /* 0053b84e: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b853: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x53b858u); f_00814680();
    /* 0053b858: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053b85b:; BB(0x0053b85b);
    /* 0053b85b: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 0053b861: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053b863: je 0x53b8b4 */ if (fZ) goto L_0053b8b4;
L_0053b865:; BB(0x0053b865);
    /* 0053b865: mov dword ptr [ebx + 0x4b8], 1 */ W32((u32)(r_ebx+0x4b8u), 0x1u);
    /* 0053b86f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053b871: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0053b878: mov dword ptr [ebx + 0x4b4], eax */ W32((u32)(r_ebx+0x4b4u), r_eax);
    /* 0053b87e: jmp 0x53b8b4 */ goto L_0053b8b4;
L_0053b880:; BB(0x0053b880);
    /* 0053b880: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b883: jne 0x53b8b4 */ if (!fZ) goto L_0053b8b4;
L_0053b885:; BB(0x0053b885);
    /* 0053b885: mov edx, dword ptr [ebx + 0x4b4] */ r_edx = R32((u32)(r_ebx+0x4b4u));
    /* 0053b88b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053b88e: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0053b892: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0053b896: mov dword ptr [ebx + 0x4b4], edx */ W32((u32)(r_ebx+0x4b4u), r_edx);
    /* 0053b89c: mov ebp, dword ptr [0xa7362c] */ r_ebp = R32((u32)(0xa7362cu));
    /* 0053b8a2: fcomp dword ptr [ebp + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x14u))); FPOP();
    /* 0053b8a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053b8a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053b8a8: jb 0x53b8b4 */ if (fC) goto L_0053b8b4;
L_0053b8aa:; BB(0x0053b8aa);
    /* 0053b8aa: mov dword ptr [ebx + 0x4b8], 2 */ W32((u32)(r_ebx+0x4b8u), 0x2u);
L_0053b8b4:; BB(0x0053b8b4);
    /* 0053b8b4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0053b8b6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053b8b8: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x53b8beu); call_ind(t); }
    /* 0053b8be: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0053b8c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053b8c2: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53b8c8u); call_ind(t); }
    /* 0053b8c8: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053b8cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053b8cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053b8cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053b8ce: ret 4 */ FN_RET(0x0053b64c); r_esp += 8; return;
L_0053b8d1:; BB(0x0053b8d1);
    /* 0053b8d1: mov eax, dword ptr [ebx + 0x4b8] */ r_eax = R32((u32)(r_ebx+0x4b8u));
    /* 0053b8d7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b8da: je 0x53b8e5 */ if (fZ) goto L_0053b8e5;
L_0053b8dc:; BB(0x0053b8dc);
    /* 0053b8dc: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053b8df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053b8e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053b8e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053b8e2: ret 4 */ FN_RET(0x0053b64c); r_esp += 8; return;
L_0053b8e5:; BB(0x0053b8e5);
    /* 0053b8e5: mov eax, dword ptr [ebx + 0x494] */ r_eax = R32((u32)(r_ebx+0x494u));
    /* 0053b8eb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053b8ee: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053b8f1: jl 0x53b90e */ if ((fS!=fO)) goto L_0053b90e;
L_0053b8f3:; BB(0x0053b8f3);
    /* 0053b8f3: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0053b8f9: mov dword ptr [ebx + 0x494], 0 */ W32((u32)(r_ebx+0x494u), 0x0u);
    /* 0053b903: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053b906: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0053b90c: jmp 0x53b914 */ goto L_0053b914;
L_0053b90e:; BB(0x0053b90e);
    /* 0053b90e: mov dword ptr [ebx + 0x494], eax */ W32((u32)(r_ebx+0x494u), r_eax);
L_0053b914:; BB(0x0053b914);
    /* 0053b914: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053b916: call 0x53ac08 */ r_esp -= 4; W32(r_esp, 0x53b91bu); f_0053ac08();
    /* 0053b91b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053b91d: jne 0x53b8dc */ if (!fZ) goto L_0053b8dc;
L_0053b91f:; BB(0x0053b91f);
    /* 0053b91f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b921: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053b923: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53b928u); f_0051f62c();
    /* 0053b928: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053b92b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053b92c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053b92d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053b92e: ret 4 */ FN_RET(0x0053b64c); r_esp += 8; return;
L_0053b931:; BB(0x0053b931);
    /* 0053b931: mov eax, 4 */ r_eax = 0x4u;
    /* 0053b936: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b937: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0053b93e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053b940: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53b945u); f_0051f664();
    /* 0053b945: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0053b94b: mov edx, dword ptr [ebx + 0x4a4] */ r_edx = R32((u32)(r_ebx+0x4a4u));
    /* 0053b951: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053b954: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053b957: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0053b95d: mov ebp, dword ptr [edx + 0xc] */ r_ebp = R32((u32)(r_edx+0xcu));
    /* 0053b960: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053b962: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0053b964: jle 0x53b976 */ if ((fZ||fS!=fO)) goto L_0053b976;
L_0053b966:; BB(0x0053b966);
    /* 0053b966: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0053b968: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 0053b96b: mov dword ptr [edi + eax*4], ebp */ W32((u32)(r_edi+r_eax*4), r_ebp);
    /* 0053b96e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053b971: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053b974: jl 0x53b966 */ if ((fS!=fO)) goto L_0053b966;
L_0053b976:; BB(0x0053b976);
    /* 0053b976: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0053b97d: mov ecx, dword ptr [ebx + 0x4ac] */ r_ecx = R32((u32)(r_ebx+0x4acu));
    /* 0053b983: call 0x7a7d3c */ r_esp -= 4; W32(r_esp, 0x53b988u); f_007a7d3c();
    /* 0053b988: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053b98a: mov dword ptr [ebx + 0x4b4], eax */ W32((u32)(r_ebx+0x4b4u), r_eax);
    /* 0053b990: mov dword ptr [ebx + 0x4b8], eax */ W32((u32)(r_ebx+0x4b8u), r_eax);
    /* 0053b996: mov dword ptr [ebx + 0x498], eax */ W32((u32)(r_ebx+0x498u), r_eax);
    /* 0053b99c: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053b99f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053b9a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053b9a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053b9a2: ret 4 */ FN_RET(0x0053b64c); r_esp += 8; return;
}

void f_0053b9a8(void) /* sub_53B9A8 */
{
    FN_ENTER(0x0053b9a8);
    /* 0053b9a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053b9a9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053b9ac: mov esi, ecx */ r_esi = r_ecx;
    /* 0053b9ae: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0053b9b1: mov dword ptr [esp], 0xc0a00000 */ W32((u32)(r_esp), 0xc0a00000u);
    /* 0053b9b8: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0053b9bc: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0053b9c4: mov dword ptr [esp + 8], 0x40e00000 */ W32((u32)(r_esp+0x8u), 0x40e00000u);
    /* 0053b9cc: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053b9cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b9d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053b9d1: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x53b9d6u); f_00782b64();
    /* 0053b9d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053b9d9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0053b9dc: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0053b9df: mov edx, esi */ r_edx = r_esi;
    /* 0053b9e1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x53b9e6u); f_0082ebac();
    /* 0053b9e6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0053b9e9: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053b9ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053b9ef: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x53b9f4u); f_0050b510();
    /* 0053b9f4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053b9f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053b9f8: ret  */ FN_RET(0x0053b9a8); r_esp += 4; return;
}

void f_0053b9fc(void) /* sub_53B9FC */
{
    FN_ENTER(0x0053b9fc);
    /* 0053b9fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053b9fd: mov ebp, esp */ r_ebp = r_esp;
    /* 0053b9ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ba01: push 0x8d5332 */ { u32 v = 0x8d5332u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ba06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053ba0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ba0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053ba14: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053ba17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053ba1a: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0053ba1d: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0053ba20: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0053ba23: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0053ba26: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053ba29: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ba2c: je 0x53c11e */ if (fZ) goto L_0053c11e;
L_0053ba32:; BB(0x0053ba32);
    /* 0053ba32: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ba35: je 0x53c07a */ if (fZ) goto L_0053c07a;
L_0053ba3b:; BB(0x0053ba3b);
    /* 0053ba3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ba3d: jne 0x53c04d */ if (!fZ) goto L_0053c04d;
L_0053ba43:; BB(0x0053ba43);
    /* 0053ba43: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53ba48u); f_007aa094();
    /* 0053ba48: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053ba4b: mov eax, dword ptr [eax + 0x4b4] */ r_eax = R32((u32)(r_eax+0x4b4u));
    /* 0053ba51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ba53: je 0x53bf44 */ if (fZ) goto L_0053bf44;
L_0053ba59:; BB(0x0053ba59);
    /* 0053ba59: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ba5c: jne 0x53bd83 */ if (!fZ) goto L_0053bd83;
L_0053ba62:; BB(0x0053ba62);
    /* 0053ba62: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053ba65: call 0x53c194 */ r_esp -= 4; W32(r_esp, 0x53ba6au); f_0053c194();
    /* 0053ba6a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053ba6d: mov esi, dword ptr [0xa7362c] */ r_esi = R32((u32)(0xa7362cu));
    /* 0053ba73: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 0053ba79: mov ebx, dword ptr [ecx + 0x3b0] */ r_ebx = R32((u32)(r_ecx+0x3b0u));
    /* 0053ba7f: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0053ba81: fmul dword ptr [0x923218] */ ST(0) = ST(0) * R_F32((u32)(0x923218u));
    /* 0053ba87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053ba89: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0053ba8c: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ba8f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0053ba93: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0053ba96: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0053ba9a: call 0x520940 */ r_esp -= 4; W32(r_esp, 0x53ba9fu); f_00520940();
    /* 0053ba9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053baa1: je 0x53baab */ if (fZ) goto L_0053baab;
L_0053baa3:; BB(0x0053baa3);
    /* 0053baa3: mov eax, 1 */ r_eax = 0x1u;
    /* 0053baa8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0053baab:; BB(0x0053baab);
    /* 0053baab: mov eax, dword ptr [0xa7362c] */ r_eax = R32((u32)(0xa7362cu));
    /* 0053bab0: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0053bab2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bab5: push dword ptr [ecx + 0x3b0] */ { u32 v = R32((u32)(r_ecx+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053babb: push dword ptr [ecx + 0x3a8] */ { u32 v = R32((u32)(r_ecx+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053bac1: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x53bac6u); f_005209d4();
    /* 0053bac6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bac9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bacb: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x53bad0u); f_00520bb8();
    /* 0053bad0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bad2: je 0x53badc */ if (fZ) goto L_0053badc;
L_0053bad4:; BB(0x0053bad4);
    /* 0053bad4: mov eax, 1 */ r_eax = 0x1u;
    /* 0053bad9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0053badc:; BB(0x0053badc);
    /* 0053badc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053badf: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x53bae4u); f_007b7e9c();
    /* 0053bae4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bae7: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0053baed: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0053baf0: test ecx, 0x200000 */ {  u32 a = r_ecx; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053baf6: je 0x53bb00 */ if (fZ) goto L_0053bb00;
L_0053baf8:; BB(0x0053baf8);
    /* 0053baf8: mov eax, 1 */ r_eax = 0x1u;
    /* 0053bafd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0053bb00:; BB(0x0053bb00);
    /* 0053bb00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053bb02: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053bb05: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x53bb0au); f_007b51c4();
    /* 0053bb0a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bb0d: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x53bb12u); f_007b6894();
    /* 0053bb12: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bb15: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x53bb1au); f_007b798c();
    /* 0053bb1a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bb1d: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0053bb23: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0053bb26: test ecx, 0x180000 */ {  u32 a = r_ecx; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bb2c: je 0x53bc69 */ if (fZ) goto L_0053bc69;
L_0053bb32:; BB(0x0053bb32);
    /* 0053bb32: mov eax, 1 */ r_eax = 0x1u;
    /* 0053bb37: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053bb3a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053bb3c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0053bb3f:; BB(0x0053bb3f);
    /* 0053bb3f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053bb42: mov edx, dword ptr [eax*4 + 0xaad6e0] */ r_edx = R32((u32)(r_eax*4+0xaad6e0u));
    /* 0053bb49: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0053bb4c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bb4e: je 0x53bc69 */ if (fZ) goto L_0053bc69;
L_0053bb54:; BB(0x0053bb54);
    /* 0053bb54: mov eax, edx */ r_eax = r_edx;
    /* 0053bb56: movzx edx, word ptr [eax + 0x96] */ r_edx = (u32)R16((u32)(r_eax+0x96u));
    /* 0053bb5d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bb60: jne 0x53bc57 */ if (!fZ) goto L_0053bc57;
L_0053bb66:; BB(0x0053bb66);
    /* 0053bb66: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bb69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053bb6a: mov ecx, dword ptr [edx + 0x4a4] */ r_ecx = R32((u32)(r_edx+0x4a4u));
    /* 0053bb70: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x53bb75u); f_00521b18();
    /* 0053bb75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bb77: je 0x53bc57 */ if (fZ) goto L_0053bc57;
L_0053bb7d:; BB(0x0053bb7d);
    /* 0053bb7d: mov edx, dword ptr [0xa7362c] */ r_edx = R32((u32)(0xa7362cu));
    /* 0053bb83: fild dword ptr [edx + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x20u)));
    /* 0053bb86: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053bb89: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053bb8b: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bb8e: fstp dword ptr [ebp - 0x64] */ W_F32((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 0053bb91: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0053bb93: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0053bb98: mov dword ptr [ebp - 0x68], esi */ W32((u32)(r_ebp+0xffffff98u), r_esi);
    /* 0053bb9b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bb9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bb9d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053bb9e: push dword ptr [ebp - 0x64] */ { u32 v = R32((u32)(r_ebp+0xffffff9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0053bba1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bba3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053bba4: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x53bba7u); call_ind(t); }
    /* 0053bba7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053bba9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053bbac: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0053bbb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bbb1: call 0x51f8d8 */ r_esp -= 4; W32(r_esp, 0x53bbb6u); f_0051f8d8();
    /* 0053bbb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053bbb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bbb9: je 0x53bc11 */ if (fZ) goto L_0053bc11;
L_0053bbbb:; BB(0x0053bbbb);
    /* 0053bbbb: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x53bbc0u); f_00520e6c();
    /* 0053bbc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bbc2: je 0x53bbf4 */ if (fZ) goto L_0053bbf4;
L_0053bbc4:; BB(0x0053bbc4);
    /* 0053bbc4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053bbc7: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0053bbce: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bbd1: jne 0x53bc11 */ if (!fZ) goto L_0053bc11;
L_0053bbd3:; BB(0x0053bbd3);
    /* 0053bbd3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bbd5: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 0053bbdb: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x53bbe0u); f_0069792c();
    /* 0053bbe0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bbe2: je 0x53bc11 */ if (fZ) goto L_0053bc11;
L_0053bbe4:; BB(0x0053bbe4);
    /* 0053bbe4: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053bbea: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053bbed: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x53bbf2u); f_0068dfd8();
    /* 0053bbf2: jmp 0x53bc11 */ goto L_0053bc11;
L_0053bbf4:; BB(0x0053bbf4);
    /* 0053bbf4: mov ecx, edi */ r_ecx = r_edi;
    /* 0053bbf6: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x53bbfbu); f_007751b0();
    /* 0053bbfb: fcomp dword ptr [0x923220] */ fx_compare(ST(0), R_F32((u32)(0x923220u))); FPOP();
    /* 0053bc01: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053bc03: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053bc04: ja 0x53bc11 */ if ((!fC&&!fZ)) goto L_0053bc11;
L_0053bc06:; BB(0x0053bc06);
    /* 0053bc06: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053bc09: mov ecx, edi */ r_ecx = r_edi;
    /* 0053bc0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053bc0c: call 0x51fe4c */ r_esp -= 4; W32(r_esp, 0x53bc11u); f_0051fe4c();
L_0053bc11:; BB(0x0053bc11);
    /* 0053bc11: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0053bc18: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bc1a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x53bc1fu); f_005caba4();
    /* 0053bc1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053bc20: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0053bc23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bc25: je 0x53bc50 */ if (fZ) goto L_0053bc50;
L_0053bc27:; BB(0x0053bc27);
    /* 0053bc27: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 0053bc2e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0053bc35: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bc3a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053bc3d: mov ecx, eax */ r_ecx = r_eax;
    /* 0053bc3f: mov ebx, edi */ r_ebx = r_edi;
    /* 0053bc41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bc42: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bc43: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bc44: call 0x53d258 */ r_esp -= 4; W32(r_esp, 0x53bc49u); f_0053d258();
    /* 0053bc49: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0053bc50:; BB(0x0053bc50);
    /* 0053bc50: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0053bc57:; BB(0x0053bc57);
    /* 0053bc57: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053bc5a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053bc5d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0053bc60: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053bc63: jl 0x53bb3f */ if ((fS!=fO)) goto L_0053bb3f;
L_0053bc69:; BB(0x0053bc69);
    /* 0053bc69: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053bc6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bc6e: je 0x53bc78 */ if (fZ) goto L_0053bc78;
L_0053bc70:; BB(0x0053bc70);
    /* 0053bc70: mov eax, 1 */ r_eax = 0x1u;
    /* 0053bc75: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0053bc78:; BB(0x0053bc78);
    /* 0053bc78: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bc7b: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x53bc80u); f_0052126c();
    /* 0053bc80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bc82: jne 0x53bc8c */ if (!fZ) goto L_0053bc8c;
L_0053bc84:; BB(0x0053bc84);
    /* 0053bc84: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bc87: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 0053bc8a: jmp 0x53bcf8 */ goto L_0053bcf8;
L_0053bc8c:; BB(0x0053bc8c);
    /* 0053bc8c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bc8f: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 0053bc92: mov esi, dword ptr [edx + 0x398] */ r_esi = R32((u32)(r_edx+0x398u));
    /* 0053bc98: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0053bc9b: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 0053bc9e: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 0053bca1: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0053bca4: mov dword ptr [ebp - 0x54], ebx */ W32((u32)(r_ebp+0xffffffacu), r_ebx);
    /* 0053bca7: mov dword ptr [ebp - 0x50], edi */ W32((u32)(r_ebp+0xffffffb0u), r_edi);
    /* 0053bcaa: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 0053bcad: mov edx, ebx */ r_edx = r_ebx;
    /* 0053bcaf: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x53bcb4u); f_0082f9c4();
    /* 0053bcb4: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 0053bcb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053bcb8: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x53bcbdu); f_007828e4();
    /* 0053bcbd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053bcbe: fcomp dword ptr [0x923208] */ fx_compare(ST(0), R_F32((u32)(0x923208u))); FPOP();
    /* 0053bcc4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053bcc6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053bcc7: jb 0x53bcf8 */ if (fC) goto L_0053bcf8;
L_0053bcc9:; BB(0x0053bcc9);
    /* 0053bcc9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bccc: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0053bccf: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x53bcd4u); f_0082dcbc();
    /* 0053bcd4: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0053bcd7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bcda: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0053bcdd: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x53bce2u); f_0082ddd8();
    /* 0053bce2: fmul dword ptr [ebp - 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffb0u));
    /* 0053bce5: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 0053bce8: fmul dword ptr [ebp - 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffa8u));
    /* 0053bceb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0053bced: fcomp dword ptr [0x923214] */ fx_compare(ST(0), R_F32((u32)(0x923214u))); FPOP();
    /* 0053bcf3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053bcf5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053bcf6: jb 0x53bcff */ if (fC) goto L_0053bcff;
L_0053bcf8:; BB(0x0053bcf8);
    /* 0053bcf8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053bcfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bcfd: je 0x53bd5f */ if (fZ) goto L_0053bd5f;
L_0053bcff:; BB(0x0053bcff);
    /* 0053bcff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bd02: mov edi, dword ptr [ecx + 0x3c8] */ r_edi = R32((u32)(r_ecx+0x3c8u));
    /* 0053bd08: mov dword ptr [ecx + 0x4b4], 2 */ W32((u32)(r_ecx+0x4b4u), 0x2u);
    /* 0053bd12: and edi, 0xfffffffb */ {  u32 a = r_edi; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0053bd15: mov dword ptr [ecx + 0x4b8], 0 */ W32((u32)(r_ecx+0x4b8u), 0x0u);
    /* 0053bd1f: mov eax, dword ptr [0xa7362c] */ r_eax = R32((u32)(0xa7362cu));
    /* 0053bd24: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 0053bd27: mov dword ptr [ecx + 0x48c], esi */ W32((u32)(r_ecx+0x48cu), r_esi);
    /* 0053bd2d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd2f: mov dword ptr [ecx + 0x3c8], edi */ W32((u32)(r_ecx+0x3c8u), r_edi);
    /* 0053bd35: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53bd3au); f_0051f664();
    /* 0053bd3a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bd3d: push 0x1d9 */ { u32 v = 0x1d9u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd42: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x53bd47u); f_007879b8();
    /* 0053bd47: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053bd49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd4b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd4d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x53bd52u); f_00814298();
    /* 0053bd52: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd57: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x53bd5cu); f_00814680();
    /* 0053bd5c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053bd5f:; BB(0x0053bd5f);
    /* 0053bd5f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bd62: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd67: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x53bd6cu); f_007879b8();
    /* 0053bd6c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bd6f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053bd71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd73: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053bd76: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x53bd7bu); f_008144b0();
    /* 0053bd7b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053bd7e: jmp 0x53c087 */ goto L_0053c087;
L_0053bd83:; BB(0x0053bd83);
    /* 0053bd83: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053bd86: jne 0x53c087 */ if (!fZ) goto L_0053c087;
L_0053bd8c:; BB(0x0053bd8c);
    /* 0053bd8c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bd8f: mov edx, dword ptr [eax + 0x4b8] */ r_edx = R32((u32)(r_eax+0x4b8u));
    /* 0053bd95: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053bd98: mov dword ptr [eax + 0x4b8], edx */ W32((u32)(r_eax+0x4b8u), r_edx);
    /* 0053bd9e: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053bda1: jge 0x53c0a0 */ if ((fS==fO)) goto L_0053c0a0;
L_0053bda7:; BB(0x0053bda7);
    /* 0053bda7: fld dword ptr [eax + 0x4c4] */ FPUSH(R_F32((u32)(r_eax+0x4c4u)));
L_0053bdad:; BB(0x0053bdad);
    /* 0053bdad: fcomp dword ptr [0x923224] */ fx_compare(ST(0), R_F32((u32)(0x923224u))); FPOP();
    /* 0053bdb3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053bdb5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053bdb6: jb 0x53bf1a */ if (fC) goto L_0053bf1a;
L_0053bdbc:; BB(0x0053bdbc);
    /* 0053bdbc: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x53bdc1u); f_007b51c4();
    /* 0053bdc1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bdc4: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x53bdc9u); f_007b6894();
    /* 0053bdc9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bdcc: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x53bdd1u); f_007b798c();
    /* 0053bdd1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bdd4: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 0053bdda: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0053bddd: test ecx, 0x180000 */ {  u32 a = r_ecx; u32 b = 0x180000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bde3: je 0x53bf25 */ if (fZ) goto L_0053bf25;
L_0053bde9:; BB(0x0053bde9);
    /* 0053bde9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053bdeb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_0053bdee:; BB(0x0053bdee);
    /* 0053bdee: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053bdf1: mov edx, dword ptr [eax*4 + 0xaad6e0] */ r_edx = R32((u32)(r_eax*4+0xaad6e0u));
    /* 0053bdf8: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0053bdfb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bdfd: je 0x53bf25 */ if (fZ) goto L_0053bf25;
L_0053be03:; BB(0x0053be03);
    /* 0053be03: mov eax, edx */ r_eax = r_edx;
    /* 0053be05: movzx edx, word ptr [eax + 0x96] */ r_edx = (u32)R16((u32)(r_eax+0x96u));
    /* 0053be0c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053be0f: jne 0x53bf06 */ if (!fZ) goto L_0053bf06;
L_0053be15:; BB(0x0053be15);
    /* 0053be15: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053be18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053be19: mov ecx, dword ptr [edx + 0x4a4] */ r_ecx = R32((u32)(r_edx+0x4a4u));
    /* 0053be1f: call 0x521b18 */ r_esp -= 4; W32(r_esp, 0x53be24u); f_00521b18();
    /* 0053be24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053be26: je 0x53bf06 */ if (fZ) goto L_0053bf06;
L_0053be2c:; BB(0x0053be2c);
    /* 0053be2c: mov edx, dword ptr [0xa7362c] */ r_edx = R32((u32)(0xa7362cu));
    /* 0053be32: fild dword ptr [edx + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x20u)));
    /* 0053be35: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053be38: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053be3a: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0053be3d: fstp dword ptr [ebp - 0x74] */ W_F32((u32)(r_ebp+0xffffff8cu), ST(0)); FPOP();
    /* 0053be40: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0053be42: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0053be47: mov dword ptr [ebp - 0x78], esi */ W32((u32)(r_ebp+0xffffff88u), r_esi);
    /* 0053be4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053be4b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053be4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053be4d: push dword ptr [ebp - 0x74] */ { u32 v = R32((u32)(r_ebp+0xffffff8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0053be50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053be52: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053be53: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x53be56u); call_ind(t); }
    /* 0053be56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053be58: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053be5b: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0053be5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053be60: call 0x51f8d8 */ r_esp -= 4; W32(r_esp, 0x53be65u); f_0051f8d8();
    /* 0053be65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053be66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053be68: je 0x53bec0 */ if (fZ) goto L_0053bec0;
L_0053be6a:; BB(0x0053be6a);
    /* 0053be6a: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x53be6fu); f_00520e6c();
    /* 0053be6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053be71: je 0x53bea3 */ if (fZ) goto L_0053bea3;
L_0053be73:; BB(0x0053be73);
    /* 0053be73: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053be76: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0053be7d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053be80: jne 0x53bec0 */ if (!fZ) goto L_0053bec0;
L_0053be82:; BB(0x0053be82);
    /* 0053be82: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0053be84: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 0053be8a: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x53be8fu); f_0069792c();
    /* 0053be8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053be91: je 0x53bec0 */ if (fZ) goto L_0053bec0;
L_0053be93:; BB(0x0053be93);
    /* 0053be93: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053be99: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053be9c: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x53bea1u); f_0068dfd8();
    /* 0053bea1: jmp 0x53bec0 */ goto L_0053bec0;
L_0053bea3:; BB(0x0053bea3);
    /* 0053bea3: mov ecx, edi */ r_ecx = r_edi;
    /* 0053bea5: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x53beaau); f_007751b0();
    /* 0053beaa: fcomp dword ptr [0x923220] */ fx_compare(ST(0), R_F32((u32)(0x923220u))); FPOP();
    /* 0053beb0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053beb2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053beb3: ja 0x53bec0 */ if ((!fC&&!fZ)) goto L_0053bec0;
L_0053beb5:; BB(0x0053beb5);
    /* 0053beb5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053beb8: mov ecx, edi */ r_ecx = r_edi;
    /* 0053beba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053bebb: call 0x51fe4c */ r_esp -= 4; W32(r_esp, 0x53bec0u); f_0051fe4c();
L_0053bec0:; BB(0x0053bec0);
    /* 0053bec0: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 0053bec7: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bec9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x53beceu); f_005caba4();
    /* 0053bece: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053becf: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0053bed2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bed4: je 0x53beff */ if (fZ) goto L_0053beff;
L_0053bed6:; BB(0x0053bed6);
    /* 0053bed6: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
    /* 0053bedd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053bee4: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bee9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053beec: mov ecx, eax */ r_ecx = r_eax;
    /* 0053beee: mov ebx, edi */ r_ebx = r_edi;
    /* 0053bef0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bef1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bef2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053bef3: call 0x53d258 */ r_esp -= 4; W32(r_esp, 0x53bef8u); f_0053d258();
    /* 0053bef8: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0053beff:; BB(0x0053beff);
    /* 0053beff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0053bf06:; BB(0x0053bf06);
    /* 0053bf06: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053bf09: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053bf0c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053bf0f: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053bf12: jl 0x53bdee */ if ((fS!=fO)) goto L_0053bdee;
L_0053bf18:; BB(0x0053bf18);
    /* 0053bf18: jmp 0x53bf25 */ goto L_0053bf25;
L_0053bf1a:; BB(0x0053bf1a);
    /* 0053bf1a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bf1d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053bf1f: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53bf25u); call_ind(t); }
L_0053bf25:; BB(0x0053bf25);
    /* 0053bf25: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bf28: push dword ptr [ecx + 0x4c4] */ { u32 v = R32((u32)(r_ecx+0x4c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053bf2e: push dword ptr [ecx + 0x3b0] */ { u32 v = R32((u32)(r_ecx+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053bf34: push dword ptr [ecx + 0x3a8] */ { u32 v = R32((u32)(r_ecx+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053bf3a: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x53bf3fu); f_005209d4();
    /* 0053bf3f: jmp 0x53c087 */ goto L_0053c087;
L_0053bf44:; BB(0x0053bf44);
    /* 0053bf44: push 0x41300000 */ { u32 v = 0x41300000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bf49: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bf4c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x53bf51u); f_007aaa30();
    /* 0053bf51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bf53: jne 0x53bf66 */ if (!fZ) goto L_0053bf66;
L_0053bf55:; BB(0x0053bf55);
    /* 0053bf55: push 0x41a80000 */ { u32 v = 0x41a80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053bf5a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bf5d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x53bf62u); f_007aaa30();
    /* 0053bf62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bf64: je 0x53bf6e */ if (fZ) goto L_0053bf6e;
L_0053bf66:; BB(0x0053bf66);
    /* 0053bf66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bf69: call 0x53b9a8 */ r_esp -= 4; W32(r_esp, 0x53bf6eu); f_0053b9a8();
L_0053bf6e:; BB(0x0053bf6e);
    /* 0053bf6e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bf71: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0053bf77: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053bf7a: je 0x53bfb5 */ if (fZ) goto L_0053bfb5;
L_0053bf7c:; BB(0x0053bf7c);
    /* 0053bf7c: mov ecx, eax */ r_ecx = r_eax;
    /* 0053bf7e: mov edx, dword ptr [ecx + 0x3c8] */ r_edx = R32((u32)(r_ecx+0x3c8u));
    /* 0053bf84: mov esi, dword ptr [ecx + 0xa4] */ r_esi = R32((u32)(r_ecx+0xa4u));
    /* 0053bf8a: mov eax, 2 */ r_eax = 0x2u;
    /* 0053bf8f: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0053bf96: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0053bf99: mov dword ptr [ecx + 0x4b4], 1 */ W32((u32)(r_ecx+0x4b4u), 0x1u);
    /* 0053bfa3: mov dword ptr [ecx + 0x3c8], edx */ W32((u32)(r_ecx+0x3c8u), r_edx);
    /* 0053bfa9: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 0053bfac: or ebx, 0x700 */ {  u32 a = r_ebx; u32 b = 0x700u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0053bfb2: mov dword ptr [esi + 0x18], ebx */ W32((u32)(r_esi+0x18u), r_ebx);
L_0053bfb5:; BB(0x0053bfb5);
    /* 0053bfb5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bfb8: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x53bfbdu); f_0052126c();
    /* 0053bfbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053bfbf: je 0x53bfd1 */ if (fZ) goto L_0053bfd1;
L_0053bfc1:; BB(0x0053bfc1);
    /* 0053bfc1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bfc4: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x53bfc9u); f_005213d8();
    /* 0053bfc9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bfcc: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x53bfd1u); f_00521410();
L_0053bfd1:; BB(0x0053bfd1);
    /* 0053bfd1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bfd4: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 0053bfda: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 0053bfe0: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0053bfe2: fmul qword ptr [0x923178] */ ST(0) = ST(0) * R_F64((u32)(0x923178u));
    /* 0053bfe8: fdiv qword ptr [0x923170] */ ST(0) = ST(0) / R_F64((u32)(0x923170u));
    /* 0053bfee: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053bff1: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 0053bff4: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 0053bff8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053bffd: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0053c000: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 0053c003: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0053c006: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 0053c009: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053c00c: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c011: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c012: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053c015: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x53c01au); f_007a8c74();
    /* 0053c01a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053c01d: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c022: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c027: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 0053c02a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c02b: push dword ptr [edx + 0x488] */ { u32 v = R32((u32)(r_edx+0x488u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053c031: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c032: call 0x782ac0 */ r_esp -= 4; W32(r_esp, 0x53c037u); f_00782ac0();
    /* 0053c037: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053c03a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053c03d: mov dword ptr [ecx + 0x488], eax */ W32((u32)(r_ecx+0x488u), r_eax);
    /* 0053c043: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053c045: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53c04bu); call_ind(t); }
    /* 0053c04b: jmp 0x53c087 */ goto L_0053c087;
L_0053c04d:; BB(0x0053c04d);
    /* 0053c04d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053c050: jne 0x53c087 */ if (!fZ) goto L_0053c087;
L_0053c052:; BB(0x0053c052);
    /* 0053c052: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0053c058: mov ebx, dword ptr [ecx + 0xa4] */ r_ebx = R32((u32)(r_ecx+0xa4u));
    /* 0053c05e: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053c061: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 0053c067: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 0053c06a: and edx, 0xfffff8ff */ {  u32 a = r_edx; u32 b = 0xfffff8ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0053c070: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 0053c073: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x53c078u); f_00520be8();
    /* 0053c078: jmp 0x53c087 */ goto L_0053c087;
L_0053c07a:; BB(0x0053c07a);
    /* 0053c07a: mov eax, ecx */ r_eax = r_ecx;
    /* 0053c07c: mov edx, dword ptr [eax + 0x4b4] */ r_edx = R32((u32)(r_eax+0x4b4u));
    /* 0053c082: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053c085: je 0x53c0e2 */ if (fZ) goto L_0053c0e2;
L_0053c087:; BB(0x0053c087);
    /* 0053c087: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0053c08a: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053c08d: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053c090: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053c093: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053c09a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053c09c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053c09d: ret 4 */ FN_RET(0x0053b9fc); r_esp += 8; return;
L_0053c0a0:; BB(0x0053c0a0);
    /* 0053c0a0: mov ecx, eax */ r_ecx = r_eax;
    /* 0053c0a2: mov eax, 3 */ r_eax = 0x3u;
    /* 0053c0a7: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0053c0ae: call 0x53cd1c */ r_esp -= 4; W32(r_esp, 0x53c0b3u); f_0053cd1c();
    /* 0053c0b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053c0b6: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0053c0bc: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0053c0bf: je 0x53c0cb */ if (fZ) goto L_0053c0cb;
L_0053c0c1:; BB(0x0053c0c1);
    /* 0053c0c1: mov dword ptr [eax + 0x4b4], 3 */ W32((u32)(r_eax+0x4b4u), 0x3u);
L_0053c0cb:; BB(0x0053c0cb);
    /* 0053c0cb: fld dword ptr [eax + 0x4c4] */ FPUSH(R_F32((u32)(r_eax+0x4c4u)));
    /* 0053c0d1: fmul dword ptr [0x923228] */ ST(0) = ST(0) * R_F32((u32)(0x923228u));
    /* 0053c0d7: fst dword ptr [eax + 0x4c4] */ W_F32((u32)(r_eax+0x4c4u), ST(0));
    /* 0053c0dd: jmp 0x53bdad */ goto L_0053bdad;
L_0053c0e2:; BB(0x0053c0e2);
    /* 0053c0e2: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0053c0e8: mov dword ptr [ecx + 0x494], 0 */ W32((u32)(r_ecx+0x494u), 0x0u);
    /* 0053c0f2: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053c0f5: add dword ptr [ecx + 0x498], 1 */ { u32 ad = (u32)(r_ecx+0x498u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0053c0fc: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 0053c102: call 0x53ac08 */ r_esp -= 4; W32(r_esp, 0x53c107u); f_0053ac08();
    /* 0053c107: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053c109: jne 0x53c087 */ if (!fZ) goto L_0053c087;
L_0053c10f:; BB(0x0053c10f);
    /* 0053c10f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053c112: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c114: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x53c119u); f_0051f62c();
    /* 0053c119: jmp 0x53c087 */ goto L_0053c087;
L_0053c11e:; BB(0x0053c11e);
    /* 0053c11e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c120: mov eax, 7 */ r_eax = 0x7u;
    /* 0053c125: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0053c12c: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x53c131u); f_0051f664();
    /* 0053c131: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0053c134: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0053c13a: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053c13d: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0053c143: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053c145: mov dword ptr [esi + 0x4b4], edx */ W32((u32)(r_esi+0x4b4u), r_edx);
    /* 0053c14b: mov dword ptr [esi + 0x4b8], edx */ W32((u32)(r_esi+0x4b8u), r_edx);
    /* 0053c151: mov ecx, dword ptr [0xa7362c] */ r_ecx = R32((u32)(0xa7362cu));
    /* 0053c157: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0053c159: mov dword ptr [esi + 0x4c4], ebx */ W32((u32)(r_esi+0x4c4u), r_ebx);
    /* 0053c15f: mov ebx, dword ptr [esi + 0x4a4] */ r_ebx = R32((u32)(r_esi+0x4a4u));
    /* 0053c165: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0053c168: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053c16a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0053c16c: jle 0x53c17e */ if ((fZ||fS!=fO)) goto L_0053c17e;
L_0053c16e:; BB(0x0053c16e);
    /* 0053c16e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0053c170: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0053c173: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 0053c176: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053c179: cmp ecx, dword ptr [ebx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053c17c: jl 0x53c16e */ if ((fS!=fO)) goto L_0053c16e;
L_0053c17e:; BB(0x0053c17e);
    /* 0053c17e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053c181: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 0053c188: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x53c18du); f_00520bdc();
    /* 0053c18d: jmp 0x53c087 */ goto L_0053c087;
}

