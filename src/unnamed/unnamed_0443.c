#include "protos.h"

void f_00443206(void)
{
    FN_ENTER(0x00443206);
    /* 00443206: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00443209: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044320b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x443210u); f_007aa094();
    /* 00443210: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 00443216: fcomp dword ptr [0x8fe53c] */ fx_compare(ST(0), R_F32((u32)(0x8fe53cu))); FPOP();
    /* 0044321c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044321e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044321f: jb 0x443233 */ if (fC) goto L_00443233;
L_00443221:; BB(0x00443221);
    /* 00443221: mov dword ptr [ebx + 0x384], 7 */ W32((u32)(r_ebx+0x384u), 0x7u);
    /* 0044322b: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 0044322e: jmp 0x443551 */ goto L_00443551;
L_00443233:; BB(0x00443233);
    /* 00443233: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00443236: jmp 0x443551 */ goto L_00443551;
L_00443551:; BB(0x00443551);
    /* 00443551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00443554: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x443559u); f_006946a8();
    /* 00443559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443563: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x443568u); f_00805608();
    /* 00443568: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044356b: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00443571: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443574: je 0x44357c */ if (fZ) goto L_0044357c;
L_00443576:; BB(0x00443576);
    /* 00443576: mov dword ptr [ebx + 0x3ac], eax */ W32((u32)(r_ebx+0x3acu), r_eax);
L_0044357c:; BB(0x0044357c);
    /* 0044357c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044357f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00443580: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443581: ret  */ FN_RET(0x00443206); r_esp += 4; return;
}

void f_0044323b(void)
{
    FN_ENTER(0x0044323b);
    /* 0044323b: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0044323e: jmp 0x443303 */ goto L_00443303;
L_00443303:; BB(0x00443303);
    /* 00443303: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00443306: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00443308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443309: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044330a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044330b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044330c: push 0xa5 */ { u32 v = 0xa5u; r_esp -= 4; W32(r_esp, v); }
    /* 00443311: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x443316u); f_008144b0();
    /* 00443316: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443319: movsx eax, word ptr [ebx + 0x3a0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x3a0u));
    /* 00443320: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00443323: mov word ptr [ebx + 0x3a0], ax */ W16((u32)(r_ebx+0x3a0u), (u16)r_eax);
    /* 0044332a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0044332d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044332f: jle 0x4435d1 */ if ((fZ||fS!=fO)) goto L_004435d1;
L_00443335:; BB(0x00443335);
    /* 00443335: jmp 0x443551 */ goto L_00443551;
L_00443551:; BB(0x00443551);
    /* 00443551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00443554: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x443559u); f_006946a8();
    /* 00443559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443563: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x443568u); f_00805608();
    /* 00443568: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044356b: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00443571: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443574: je 0x44357c */ if (fZ) goto L_0044357c;
L_00443576:; BB(0x00443576);
    /* 00443576: mov dword ptr [ebx + 0x3ac], eax */ W32((u32)(r_ebx+0x3acu), r_eax);
L_0044357c:; BB(0x0044357c);
    /* 0044357c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044357f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00443580: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443581: ret  */ FN_RET(0x0044323b); r_esp += 4; return;
L_004435d1:; BB(0x004435d1);
    /* 004435d1: mov edx, dword ptr [ebx + 0x3b4] */ r_edx = R32((u32)(r_ebx+0x3b4u));
    /* 004435d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004435d9: je 0x4435f2 */ if (fZ) goto L_004435f2;
L_004435db:; BB(0x004435db);
    /* 004435db: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004435df: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004435e4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004435e8: mov dword ptr [ebx + 0x3b4], 0 */ W32((u32)(r_ebx+0x3b4u), 0x0u);
L_004435f2:; BB(0x004435f2);
    /* 004435f2: mov eax, 6 */ r_eax = 0x6u;
    /* 004435f7: mov dword ptr [ebx + 0x3a8], eax */ W32((u32)(r_ebx+0x3a8u), r_eax);
    /* 004435fd: mov dword ptr [ebx + 0x384], eax */ W32((u32)(r_ebx+0x384u), r_eax);
    /* 00443603: jmp 0x443551 */ goto L_00443551;
}

void f_00443243(void)
{
    FN_ENTER(0x00443243);
    /* 00443243: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00443246: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0044324b: mov word ptr [ebx + 0x3a0], ax */ W16((u32)(r_ebx+0x3a0u), (u16)r_eax);
    /* 00443252: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00443257: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x44325cu); f_0082d990();
    /* 0044325c: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0044325f: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00443262: fadd dword ptr [ebx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x394u));
    /* 00443268: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0044326b: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044326e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00443272: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00443275: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00443277: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0044327b: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x443280u); f_00830b74();
    /* 00443280: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00443283: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00443285: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x44328au); f_0082d8bc();
    /* 0044328a: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00443290: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00443292: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x443297u); f_007aaab8();
    /* 00443297: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44329cu); f_0082da80();
    /* 0044329c: mov ecx, dword ptr [0xaab540] */ r_ecx = R32((u32)(0xaab540u));
    /* 004432a2: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 004432aa: add ecx, 0x140 */ {  u32 a = r_ecx; u32 b = 0x140u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004432b0: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 004432b8: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 004432c0: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4432c5u); f_0082d990();
    /* 004432c5: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 004432c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004432ca: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 004432ce: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004432d0: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4432d5u); f_00830aa0();
    /* 004432d5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4432dau); f_0082da80();
    /* 004432da: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 004432de: push 0x11a */ { u32 v = 0x11au; r_esp -= 4; W32(r_esp, v); }
    /* 004432e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004432e4: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4432e9u); f_00509590();
    /* 004432e9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004432ec: mov dword ptr [ebx + 0x3b4], eax */ W32((u32)(r_ebx+0x3b4u), r_eax);
    /* 004432f2: mov eax, 5 */ r_eax = 0x5u;
    /* 004432f7: mov dword ptr [ebx + 0x3a8], eax */ W32((u32)(r_ebx+0x3a8u), r_eax);
    /* 004432fd: mov dword ptr [ebx + 0x384], eax */ W32((u32)(r_ebx+0x384u), r_eax);
    /* 00443303: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00443306: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00443308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443309: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044330a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044330b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044330c: push 0xa5 */ { u32 v = 0xa5u; r_esp -= 4; W32(r_esp, v); }
    /* 00443311: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x443316u); f_008144b0();
    /* 00443316: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443319: movsx eax, word ptr [ebx + 0x3a0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x3a0u));
    /* 00443320: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00443323: mov word ptr [ebx + 0x3a0], ax */ W16((u32)(r_ebx+0x3a0u), (u16)r_eax);
    /* 0044332a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0044332d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044332f: jle 0x4435d1 */ if ((fZ||fS!=fO)) goto L_004435d1;
L_00443335:; BB(0x00443335);
    /* 00443335: jmp 0x443551 */ goto L_00443551;
L_00443551:; BB(0x00443551);
    /* 00443551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00443554: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x443559u); f_006946a8();
    /* 00443559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443563: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x443568u); f_00805608();
    /* 00443568: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044356b: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00443571: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443574: je 0x44357c */ if (fZ) goto L_0044357c;
L_00443576:; BB(0x00443576);
    /* 00443576: mov dword ptr [ebx + 0x3ac], eax */ W32((u32)(r_ebx+0x3acu), r_eax);
L_0044357c:; BB(0x0044357c);
    /* 0044357c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044357f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00443580: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443581: ret  */ FN_RET(0x00443243); r_esp += 4; return;
L_004435d1:; BB(0x004435d1);
    /* 004435d1: mov edx, dword ptr [ebx + 0x3b4] */ r_edx = R32((u32)(r_ebx+0x3b4u));
    /* 004435d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004435d9: je 0x4435f2 */ if (fZ) goto L_004435f2;
L_004435db:; BB(0x004435db);
    /* 004435db: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004435df: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004435e4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004435e8: mov dword ptr [ebx + 0x3b4], 0 */ W32((u32)(r_ebx+0x3b4u), 0x0u);
L_004435f2:; BB(0x004435f2);
    /* 004435f2: mov eax, 6 */ r_eax = 0x6u;
    /* 004435f7: mov dword ptr [ebx + 0x3a8], eax */ W32((u32)(r_ebx+0x3a8u), r_eax);
    /* 004435fd: mov dword ptr [ebx + 0x384], eax */ W32((u32)(r_ebx+0x384u), r_eax);
    /* 00443603: jmp 0x443551 */ goto L_00443551;
}

void f_0044333a(void)
{
    FN_ENTER(0x0044333a);
    /* 0044333a: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0044333d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044333f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x443344u); f_007aa094();
    /* 00443344: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 0044334b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044334e: je 0x443608 */ if (fZ) goto L_00443608;
L_00443354:; BB(0x00443354);
    /* 00443354: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00443357: jmp 0x443551 */ goto L_00443551;
L_00443551:; BB(0x00443551);
    /* 00443551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00443554: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x443559u); f_006946a8();
    /* 00443559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443563: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x443568u); f_00805608();
    /* 00443568: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044356b: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00443571: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443574: je 0x44357c */ if (fZ) goto L_0044357c;
L_00443576:; BB(0x00443576);
    /* 00443576: mov dword ptr [ebx + 0x3ac], eax */ W32((u32)(r_ebx+0x3acu), r_eax);
L_0044357c:; BB(0x0044357c);
    /* 0044357c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044357f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00443580: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443581: ret  */ FN_RET(0x0044333a); r_esp += 4; return;
L_00443608:; BB(0x00443608);
    /* 00443608: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 0044360e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443610: je 0x44362b */ if (fZ) goto L_0044362b;
L_00443612:; BB(0x00443612);
    /* 00443612: mov eax, 4 */ r_eax = 0x4u;
    /* 00443617: mov dword ptr [ebx + 0x3a8], eax */ W32((u32)(r_ebx+0x3a8u), r_eax);
    /* 0044361d: mov dword ptr [ebx + 0x384], eax */ W32((u32)(r_ebx+0x384u), r_eax);
    /* 00443623: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00443626: jmp 0x443551 */ goto L_00443551;
L_0044362b:; BB(0x0044362b);
    /* 0044362b: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 00443631: mov eax, 0xc */ r_eax = 0xcu;
    /* 00443636: mov dword ptr [ebx + 0x3a8], eax */ W32((u32)(r_ebx+0x3a8u), r_eax);
    /* 0044363c: mov dword ptr [ebx + 0x384], eax */ W32((u32)(r_ebx+0x384u), r_eax);
    /* 00443642: and edx, 0xfffeffff */ {  u32 a = r_edx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00443648: mov dword ptr [ebx + 0x390], edx */ W32((u32)(r_ebx+0x390u), r_edx);
    /* 0044364e: mov esi, 0xaf */ r_esi = 0xafu;
    /* 00443653: mov word ptr [ebx + 0x3a0], si */ W16((u32)(r_ebx+0x3a0u), (u16)r_esi);
    /* 0044365a: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 0044365d: jmp 0x443551 */ goto L_00443551;
}

void f_0044335c(void)
{
    FN_ENTER(0x0044335c);
    /* 0044335c: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00443361: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00443364: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00443366: call 0x442c28 */ r_esp -= 4; W32(r_esp, 0x44336bu); f_00442c28();
    /* 0044336b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044336e: je 0x443662 */ if (fZ) goto L_00443662;
L_00443374:; BB(0x00443374);
    /* 00443374: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00443377: jmp 0x443551 */ goto L_00443551;
L_00443551:; BB(0x00443551);
    /* 00443551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00443554: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x443559u); f_006946a8();
    /* 00443559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443563: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x443568u); f_00805608();
    /* 00443568: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044356b: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00443571: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443574: je 0x44357c */ if (fZ) goto L_0044357c;
L_00443576:; BB(0x00443576);
    /* 00443576: mov dword ptr [ebx + 0x3ac], eax */ W32((u32)(r_ebx+0x3acu), r_eax);
L_0044357c:; BB(0x0044357c);
    /* 0044357c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044357f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00443580: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443581: ret  */ FN_RET(0x0044335c); r_esp += 4; return;
L_00443662:; BB(0x00443662);
    /* 00443662: mov eax, 3 */ r_eax = 0x3u;
    /* 00443667: mov dword ptr [ebx + 0x3a8], eax */ W32((u32)(r_ebx+0x3a8u), r_eax);
    /* 0044366d: mov dword ptr [ebx + 0x384], eax */ W32((u32)(r_ebx+0x384u), r_eax);
    /* 00443673: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00443676: jmp 0x443551 */ goto L_00443551;
}

void f_00443374(void)
{
    FN_ENTER(0x00443374);
    /* 00443374: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00443377: jmp 0x443551 */ goto L_00443551;
L_00443551:; BB(0x00443551);
    /* 00443551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00443554: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x443559u); f_006946a8();
    /* 00443559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443563: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x443568u); f_00805608();
    /* 00443568: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044356b: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00443571: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443574: je 0x44357c */ if (fZ) goto L_0044357c;
L_00443576:; BB(0x00443576);
    /* 00443576: mov dword ptr [ebx + 0x3ac], eax */ W32((u32)(r_ebx+0x3acu), r_eax);
L_0044357c:; BB(0x0044357c);
    /* 0044357c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044357f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00443580: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443581: ret  */ FN_RET(0x00443374); r_esp += 4; return;
}

void f_0044337c(void)
{
    FN_ENTER(0x0044337c);
    /* 0044337c: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00443381: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00443384: movsx eax, word ptr [ebx + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x344u));
    /* 0044338b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044338e: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 00443395: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00443398: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044339a: jle 0x44367b */ if ((fZ||fS!=fO)) goto L_0044367b;
L_004433a0:; BB(0x004433a0);
    /* 004433a0: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 004433a3: jmp 0x443551 */ goto L_00443551;
L_00443551:; BB(0x00443551);
    /* 00443551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00443554: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x443559u); f_006946a8();
    /* 00443559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443563: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x443568u); f_00805608();
    /* 00443568: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044356b: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00443571: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443574: je 0x44357c */ if (fZ) goto L_0044357c;
L_00443576:; BB(0x00443576);
    /* 00443576: mov dword ptr [ebx + 0x3ac], eax */ W32((u32)(r_ebx+0x3acu), r_eax);
L_0044357c:; BB(0x0044357c);
    /* 0044357c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044357f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00443580: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443581: ret  */ FN_RET(0x0044337c); r_esp += 4; return;
L_0044367b:; BB(0x0044367b);
    /* 0044367b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044367d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0044367f: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00443682: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443683: push 0x340 */ { u32 v = 0x340u; r_esp -= 4; W32(r_esp, v); }
    /* 00443688: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44368du); f_00814298();
    /* 0044368d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443690: mov dword ptr [ebx + 0x384], 2 */ W32((u32)(r_ebx+0x384u), 0x2u);
    /* 0044369a: jmp 0x443551 */ goto L_00443551;
}

void f_004433a8(void)
{
    FN_ENTER(0x004433a8);
    /* 004433a8: mov dword ptr [ebx + 0x3b4], 0 */ W32((u32)(r_ebx+0x3b4u), 0x0u);
    /* 004433b2: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 004433b5: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 004433bb: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004433c0: je 0x44369f */ if (fZ) goto L_0044369f;
L_004433c6:; BB(0x004433c6);
    /* 004433c6: mov edx, dword ptr [ebx + 0x3a8] */ r_edx = R32((u32)(r_ebx+0x3a8u));
    /* 004433cc: mov dword ptr [ebx + 0x384], edx */ W32((u32)(r_ebx+0x384u), r_edx);
    /* 004433d2: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004433d5: jge 0x4433df */ if ((fS==fO)) goto L_004433df;
L_004433d7:; BB(0x004433d7);
    /* 004433d7: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 004433da: jmp 0x4434f2 */ goto L_004434f2;
L_004433df:; BB(0x004433df);
    /* 004433df: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004433e2: jg 0x4433f8 */ if ((!fZ&&fS==fO)) goto L_004433f8;
L_004433e4:; BB(0x004433e4);
    /* 004433e4: mov edx, 5 */ r_edx = 0x5u;
    /* 004433e9: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 004433f0: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 004433f3: jmp 0x4434f2 */ goto L_004434f2;
L_004433f8:; BB(0x004433f8);
    /* 004433f8: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004433fb: jne 0x4434b8 */ if (!fZ) goto L_004434b8;
L_00443401:; BB(0x00443401);
    /* 00443401: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00443406: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x44340bu); f_0082d990();
    /* 0044340b: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0044340e: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00443411: fadd dword ptr [ebx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x394u));
    /* 00443417: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0044341a: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044341d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00443421: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00443424: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00443426: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0044342a: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x44342fu); f_00830b74();
    /* 0044342f: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00443432: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00443434: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x443439u); f_0082d8bc();
    /* 00443439: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044343f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00443441: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x443446u); f_007aaab8();
    /* 00443446: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44344bu); f_0082da80();
    /* 0044344b: mov ecx, dword ptr [0xaab540] */ r_ecx = R32((u32)(0xaab540u));
    /* 00443451: mov dword ptr [esp + 0x44], 0 */ W32((u32)(r_esp+0x44u), 0x0u);
    /* 00443459: add ecx, 0x140 */ {  u32 a = r_ecx; u32 b = 0x140u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044345f: mov dword ptr [esp + 0x48], 0 */ W32((u32)(r_esp+0x48u), 0x0u);
    /* 00443467: mov dword ptr [esp + 0x4c], 0 */ W32((u32)(r_esp+0x4cu), 0x0u);
    /* 0044346f: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x443474u); f_0082d990();
    /* 00443474: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 00443478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443479: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0044347d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044347f: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x443484u); f_00830aa0();
    /* 00443484: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x443489u); f_0082da80();
    /* 00443489: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 0044348d: push 0x11a */ { u32 v = 0x11au; r_esp -= 4; W32(r_esp, v); }
    /* 00443492: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443493: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x443498u); f_00509590();
    /* 00443498: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044349b: mov dword ptr [ebx + 0x3b4], eax */ W32((u32)(r_ebx+0x3b4u), r_eax);
    /* 004434a1: mov eax, 2 */ r_eax = 0x2u;
    /* 004434a6: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004434ad: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 004434b3: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 004434b6: jmp 0x4434f2 */ goto L_004434f2;
L_004434b8:; BB(0x004434b8);
    /* 004434b8: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004434bb: jne 0x4434ef */ if (!fZ) goto L_004434ef;
L_004434bd:; BB(0x004434bd);
    /* 004434bd: mov eax, 2 */ r_eax = 0x2u;
    /* 004434c2: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004434c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004434cb: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4434d0u); f_007aa094();
    /* 004434d0: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 004434d6: mov dword ptr [ebx + 0xc0], 0x41000000 */ W32((u32)(r_ebx+0xc0u), 0x41000000u);
    /* 004434e0: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 004434e3: mov dword ptr [ebx + 0x384], 7 */ W32((u32)(r_ebx+0x384u), 0x7u);
    /* 004434ed: jmp 0x4434f2 */ goto L_004434f2;
L_004434ef:; BB(0x004434ef);
    /* 004434ef: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
L_004434f2:; BB(0x004434f2);
    /* 004434f2: mov edx, dword ptr [ebx + 0x3b0] */ r_edx = R32((u32)(r_ebx+0x3b0u));
    /* 004434f8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004434fa: je 0x443509 */ if (fZ) goto L_00443509;
L_004434fc:; BB(0x004434fc);
    /* 004434fc: or eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00443501: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 00443507: jmp 0x443514 */ goto L_00443514;
L_00443509:; BB(0x00443509);
    /* 00443509: and eax, 0xfff7ffff */ {  u32 a = r_eax; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044350e: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
L_00443514:; BB(0x00443514);
    /* 00443514: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00443516: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x44351bu); f_007aa094();
    /* 0044351b: jmp 0x443551 */ goto L_00443551;
L_00443551:; BB(0x00443551);
    /* 00443551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00443554: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x443559u); f_006946a8();
    /* 00443559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443563: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x443568u); f_00805608();
    /* 00443568: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044356b: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00443571: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443574: je 0x44357c */ if (fZ) goto L_0044357c;
L_00443576:; BB(0x00443576);
    /* 00443576: mov dword ptr [ebx + 0x3ac], eax */ W32((u32)(r_ebx+0x3acu), r_eax);
L_0044357c:; BB(0x0044357c);
    /* 0044357c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044357f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00443580: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443581: ret  */ FN_RET(0x004433a8); r_esp += 4; return;
L_0044369f:; BB(0x0044369f);
    /* 0044369f: movsx eax, word ptr [ebx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 004436a6: mov edx, eax */ r_edx = r_eax;
    /* 004436a8: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004436aa: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004436ad: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004436af: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004436b2: mov dword ptr [ebx + 0x39c], edx */ W32((u32)(r_ebx+0x39cu), r_edx);
    /* 004436b8: mov esi, 5 */ r_esi = 0x5u;
    /* 004436bd: mov word ptr [ebx + 0xb8], si */ W16((u32)(r_ebx+0xb8u), (u16)r_esi);
    /* 004436c4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004436c6: call 0x443ecc */ r_esp -= 4; W32(r_esp, 0x4436cbu); f_00443ecc();
    /* 004436cb: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 004436d1: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004436d6: mov edx, dword ptr [ebx + 0x3c0] */ r_edx = R32((u32)(r_ebx+0x3c0u));
    /* 004436dc: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 004436e2: mov esi, 0x14 */ r_esi = 0x14u;
    /* 004436e7: mov dword ptr [edx + 0x20], 2 */ W32((u32)(r_edx+0x20u), 0x2u);
    /* 004436ee: mov eax, 1 */ r_eax = 0x1u;
    /* 004436f3: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
    /* 004436fa: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00443700: mov word ptr [ebx + 0x344], si */ W16((u32)(r_ebx+0x344u), (u16)r_esi);
    /* 00443707: mov dword ptr [ebx + 0x3a8], eax */ W32((u32)(r_ebx+0x3a8u), r_eax);
    /* 0044370d: mov dword ptr [ebx + 0x384], eax */ W32((u32)(r_ebx+0x384u), r_eax);
    /* 00443713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00443715: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00443717: jle 0x4437dd */ if ((fZ||fS!=fO)) goto L_004437dd;
L_0044371d:; BB(0x0044371d);
    /* 0044371d: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00443720: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00443724: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00443727: mov ebp, eax */ r_ebp = r_eax;
L_00443729:; BB(0x00443729);
    /* 00443729: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00443730: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443732: je 0x4437e2 */ if (fZ) goto L_004437e2;
L_00443738:; BB(0x00443738);
    /* 00443738: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0044373c: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00443741: jge 0x4437d4 */ if ((fS==fO)) goto L_004437d4;
L_00443747:; BB(0x00443747);
    /* 00443747: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 0044374b: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0044374e: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00443752: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 00443755: mov edx, esi */ r_edx = r_esi;
    /* 00443757: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0044375b: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0044375e: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00443762: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x443767u); f_0082f9c4();
    /* 00443767: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0044376b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0044376d: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00443771: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00443773: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00443775: fcomp dword ptr [0x8fe538] */ fx_compare(ST(0), R_F32((u32)(0x8fe538u))); FPOP();
    /* 0044377b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044377d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044377e: ja 0x4437aa */ if ((!fC&&!fZ)) goto L_004437aa;
L_00443780:; BB(0x00443780);
    /* 00443780: mov dword ptr [esp + 0x3c], 0 */ W32((u32)(r_esp+0x3cu), 0x0u);
    /* 00443788: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 0044378c: push 0x41500000 */ { u32 v = 0x41500000u; r_esp -= 4; W32(r_esp, v); }
    /* 00443791: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443792: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x443797u); f_0078ea90();
    /* 00443797: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00443799: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044379c: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 004437a0: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004437a3: mov ecx, edi */ r_ecx = r_edi;
    /* 004437a5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4437aau); f_0082ebac();
L_004437aa:; BB(0x004437aa);
    /* 004437aa: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004437ad: cmp ebp, dword ptr [0xaae168] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xaae168u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004437b3: jl 0x443729 */ if ((fS!=fO)) goto L_00443729;
L_004437b9:; BB(0x004437b9);
    /* 004437b9: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 004437bc: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_004437c0:; BB(0x004437c0);
    /* 004437c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004437c2: mov word ptr [ebx + 0x3a4], ax */ W16((u32)(r_ebx+0x3a4u), (u16)r_eax);
    /* 004437c9: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 004437cf: jmp 0x4434f2 */ goto L_004434f2;
L_004437d4:; BB(0x004437d4);
    /* 004437d4: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 004437d7: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 004437db: jmp 0x4437c0 */ goto L_004437c0;
L_004437dd:; BB(0x004437dd);
    /* 004437dd: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 004437e0: jmp 0x4437c0 */ goto L_004437c0;
L_004437e2:; BB(0x004437e2);
    /* 004437e2: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 004437e5: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 004437e9: jmp 0x4437c0 */ goto L_004437c0;
}

void f_0044351d(void)
{
    FN_ENTER(0x0044351d);
    /* 0044351d: mov edx, dword ptr [ebx + 0x3b4] */ r_edx = R32((u32)(r_ebx+0x3b4u));
    /* 00443523: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00443526: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443528: je 0x443546 */ if (fZ) goto L_00443546;
L_0044352a:; BB(0x0044352a);
    /* 0044352a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044352e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00443533: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00443537: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 0044353a: mov dword ptr [ebx + 0x3b4], 0 */ W32((u32)(r_ebx+0x3b4u), 0x0u);
    /* 00443544: jmp 0x443551 */ goto L_00443551;
L_00443546:; BB(0x00443546);
    /* 00443546: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 00443549: jmp 0x443551 */ goto L_00443551;
L_00443551:; BB(0x00443551);
    /* 00443551: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443553: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00443554: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x443559u); f_006946a8();
    /* 00443559: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044355d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00443562: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443563: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x443568u); f_00805608();
    /* 00443568: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044356b: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00443571: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443574: je 0x44357c */ if (fZ) goto L_0044357c;
L_00443576:; BB(0x00443576);
    /* 00443576: mov dword ptr [ebx + 0x3ac], eax */ W32((u32)(r_ebx+0x3acu), r_eax);
L_0044357c:; BB(0x0044357c);
    /* 0044357c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044357f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00443580: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443581: ret  */ FN_RET(0x0044351d); r_esp += 4; return;
}

void f_004437ec(void) /* sub_4437EC */
{
    FN_ENTER(0x004437ec);
    /* 004437ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004437ed: mov ebp, esp */ r_ebp = r_esp;
    /* 004437ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004437f1: push 0x8ce6be */ { u32 v = 0x8ce6beu; r_esp -= 4; W32(r_esp, v); }
    /* 004437f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004437fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004437fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00443804: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044380a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044380d: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00443810: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00443813: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00443816: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00443819: mov eax, dword ptr [0xa449fc] */ r_eax = R32((u32)(0xa449fcu));
    /* 0044381e: fild dword ptr [eax + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x18u)));
    /* 00443821: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00443824: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00443826: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00443828: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0044382b: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00443831: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00443833: jle 0x443870 */ if ((fZ||fS!=fO)) goto L_00443870;
L_00443835:; BB(0x00443835);
    /* 00443835: mov eax, dword ptr [ecx*4 + 0xaad720] */ r_eax = R32((u32)(r_ecx*4+0xaad720u));
    /* 0044383c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044383e: je 0x443870 */ if (fZ) goto L_00443870;
L_00443840:; BB(0x00443840);
    /* 00443840: movzx ebx, word ptr [eax + 0x1c] */ r_ebx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00443844: cmp ebx, 0x1000 */ {  u32 a = r_ebx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044384a: jge 0x443870 */ if ((fS==fO)) goto L_00443870;
L_0044384c:; BB(0x0044384c);
    /* 0044384c: mov ebx, dword ptr [eax + 0x30] */ r_ebx = R32((u32)(r_eax+0x30u));
    /* 0044384f: test ebx, 0x2000800 */ {  u32 a = r_ebx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443855: jne 0x443869 */ if (!fZ) goto L_00443869;
L_00443857:; BB(0x00443857);
    /* 00443857: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044385a: mov esi, ebx */ r_esi = r_ebx;
    /* 0044385c: mov dword ptr [ebp + esi*4 - 0x90], eax */ W32((u32)(r_ebp+r_esi*4+0xffffff70u), r_eax);
    /* 00443863: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00443866: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
L_00443869:; BB(0x00443869);
    /* 00443869: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044386c: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044386e: jl 0x443835 */ if ((fS!=fO)) goto L_00443835;
L_00443870:; BB(0x00443870);
    /* 00443870: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00443873: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00443875: jle 0x443af1 */ if ((fZ||fS!=fO)) goto L_00443af1;
L_0044387b:; BB(0x0044387b);
    /* 0044387b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00443880: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x443885u); f_0082d990();
    /* 00443885: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00443888: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0044388b: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 0044388e: fadd dword ptr [edx + 0x394] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x394u));
    /* 00443894: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 00443897: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044389a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0044389e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004438a1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004438a3: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 004438a7: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x4438acu); f_00830b74();
    /* 004438ac: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004438af: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 004438b2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004438b4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4438b9u); f_0082d8bc();
    /* 004438b9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004438bc: push dword ptr [ecx + 0xc0] */ { u32 v = R32((u32)(r_ecx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004438c2: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x4438c7u); f_007aaab8();
    /* 004438c7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4438ccu); f_0082da80();
    /* 004438cc: mov ecx, dword ptr [0xaab540] */ r_ecx = R32((u32)(0xaab540u));
    /* 004438d2: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 004438d9: add ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004438df: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 004438e6: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 004438ed: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4438f2u); f_0082d990();
    /* 004438f2: lea eax, [ebp - 0x74] */ r_eax = (u32)(r_ebp+0xffffff8cu);
    /* 004438f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004438f6: lea edx, [ebp - 0x80] */ r_edx = (u32)(r_ebp+0xffffff80u);
    /* 004438f9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004438fb: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x443900u); f_00830aa0();
    /* 00443900: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x443905u); f_0082da80();
    /* 00443905: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00443908: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044390a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0044390d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044390f: jle 0x443a0d */ if ((fZ||fS!=fO)) goto L_00443a0d;
L_00443915:; BB(0x00443915);
    /* 00443915: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00443918: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 0044391b: mov dword ptr [ebp - 0x54], 3 */ W32((u32)(r_ebp+0xffffffacu), 0x3u);
L_00443922:; BB(0x00443922);
    /* 00443922: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00443925: mov edi, dword ptr [ebp + eax*4 - 0x90] */ r_edi = R32((u32)(r_ebp+r_eax*4+0xffffff70u));
    /* 0044392c: lea edx, [ebp - 0x74] */ r_edx = (u32)(r_ebp+0xffffff8cu);
    /* 0044392f: mov ebx, dword ptr [edi + 0x300] */ r_ebx = R32((u32)(r_edi+0x300u));
    /* 00443935: mov esi, dword ptr [edi + 0x304] */ r_esi = R32((u32)(r_edi+0x304u));
    /* 0044393b: mov ecx, dword ptr [edi + 0x308] */ r_ecx = R32((u32)(r_edi+0x308u));
    /* 00443941: mov dword ptr [ebp - 0x68], ebx */ W32((u32)(r_ebp+0xffffff98u), r_ebx);
    /* 00443944: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 00443947: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0044394a: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 0044394d: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x443952u); f_0082f9c4();
    /* 00443952: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 00443955: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x44395au); f_0082df08();
    /* 0044395a: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0044395d: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00443964: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 00443969: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x44396eu); f_005caba4();
    /* 0044396e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044396f: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00443972: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443974: je 0x4439b3 */ if (fZ) goto L_004439b3;
L_00443976:; BB(0x00443976);
    /* 00443976: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 0044397d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00443984: mov edx, dword ptr [0xaca344] */ r_edx = R32((u32)(0xaca344u));
    /* 0044398a: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0044398d: lea ebx, [ebp - 0x74] */ r_ebx = (u32)(r_ebp+0xffffff8cu);
    /* 00443990: lea esi, [ebp - 0x68] */ r_esi = (u32)(r_ebp+0xffffff98u);
    /* 00443993: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443996: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0044399a: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0044399d: mov ecx, eax */ r_ecx = r_eax;
    /* 0044399f: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004439a3: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004439a7: call 0x6f37c0 */ r_esp -= 4; W32(r_esp, 0x4439acu); f_006f37c0();
    /* 004439ac: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_004439b3:; BB(0x004439b3);
    /* 004439b3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004439ba: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004439bd: mov ecx, dword ptr [ebp + edx*4 - 0x90] */ r_ecx = R32((u32)(r_ebp+r_edx*4+0xffffff70u));
    /* 004439c4: mov ebx, dword ptr [ecx + 0x300] */ r_ebx = R32((u32)(r_ecx+0x300u));
    /* 004439ca: mov esi, dword ptr [ecx + 0x304] */ r_esi = R32((u32)(r_ecx+0x304u));
    /* 004439d0: mov edi, dword ptr [ecx + 0x308] */ r_edi = R32((u32)(r_ecx+0x308u));
    /* 004439d6: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004439db: mov dword ptr [ebp - 0x74], ebx */ W32((u32)(r_ebp+0xffffff8cu), r_ebx);
    /* 004439de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004439df: mov dword ptr [ebp - 0x70], esi */ W32((u32)(r_ebp+0xffffff90u), r_esi);
    /* 004439e2: mov dword ptr [ebp - 0x6c], edi */ W32((u32)(r_ebp+0xffffff94u), r_edi);
    /* 004439e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004439e6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004439e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004439eb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004439ed: push dword ptr [ebp - 0x50] */ { u32 v = R32((u32)(r_ebp+0xffffffb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004439f0: push dword ptr [ebp - 0x54] */ { u32 v = R32((u32)(r_ebp+0xffffffacu)); r_esp -= 4; W32(r_esp, v); }
    /* 004439f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004439f4: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x4439f7u); call_ind(t); }
    /* 004439f7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004439f9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004439fc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004439ff: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00443a02: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00443a05: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00443a07: jl 0x443922 */ if ((fS!=fO)) goto L_00443922;
L_00443a0d:; BB(0x00443a0d);
    /* 00443a0d: movzx eax, word ptr [0x9a4e08] */ r_eax = (u32)R16((u32)(0x9a4e08u));
    /* 00443a14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443a15: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x443a1au); f_007b4d18();
    /* 00443a1a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00443a1d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443a20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443a22: je 0x443adf */ if (fZ) goto L_00443adf;
L_00443a28:; BB(0x00443a28);
    /* 00443a28: mov esi, eax */ r_esi = r_eax;
    /* 00443a2a: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 00443a2d: lea edx, [ebp - 0x74] */ r_edx = (u32)(r_ebp+0xffffff8cu);
    /* 00443a30: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00443a33: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 00443a36: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 00443a39: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00443a3c: mov dword ptr [ebp - 0x48], ebx */ W32((u32)(r_ebp+0xffffffb8u), r_ebx);
    /* 00443a3f: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 00443a42: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x443a47u); f_0082f9c4();
    /* 00443a47: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 00443a4a: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x443a4fu); f_0082df08();
    /* 00443a4f: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00443a52: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00443a59: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 00443a5e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x443a63u); f_005caba4();
    /* 00443a63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00443a64: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00443a67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443a69: je 0x443aa8 */ if (fZ) goto L_00443aa8;
L_00443a6b:; BB(0x00443a6b);
    /* 00443a6b: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00443a72: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00443a79: mov edx, dword ptr [0xaca344] */ r_edx = R32((u32)(0xaca344u));
    /* 00443a7f: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00443a82: lea ebx, [ebp - 0x74] */ r_ebx = (u32)(r_ebp+0xffffff8cu);
    /* 00443a85: lea esi, [ebp - 0x4c] */ r_esi = (u32)(r_ebp+0xffffffb4u);
    /* 00443a88: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443a8b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00443a8f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00443a92: mov ecx, eax */ r_ecx = r_eax;
    /* 00443a94: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00443a98: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00443a9c: call 0x6f37c0 */ r_esp -= 4; W32(r_esp, 0x443aa1u); f_006f37c0();
    /* 00443aa1: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00443aa8:; BB(0x00443aa8);
    /* 00443aa8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00443aaf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00443ab2: call 0x441254 */ r_esp -= 4; W32(r_esp, 0x443ab7u); f_00441254();
    /* 00443ab7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443ab9: je 0x443adf */ if (fZ) goto L_00443adf;
L_00443abb:; BB(0x00443abb);
    /* 00443abb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00443abe: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00443ac2: mov byte ptr [ebp - 0x38], 0x15 */ W8((u32)(r_ebp+0xffffffc8u), 0x15u);
    /* 00443ac6: mov ebx, 2 */ r_ebx = 0x2u;
    /* 00443acb: mov byte ptr [ebp - 0x37], 3 */ W8((u32)(r_ebp+0xffffffc9u), 0x3u);
    /* 00443acf: mov word ptr [ebp - 0x36], dx */ W16((u32)(r_ebp+0xffffffcau), (u16)r_edx);
    /* 00443ad3: mov word ptr [ebp - 0x34], bx */ W16((u32)(r_ebp+0xffffffccu), (u16)r_ebx);
    /* 00443ad7: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00443ada: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x443adfu); f_008003e0();
L_00443adf:; BB(0x00443adf);
    /* 00443adf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00443ae1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443ae2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443ae3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443ae4: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 00443ae9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x443aeeu); f_00814298();
    /* 00443aee: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00443af1:; BB(0x00443af1);
    /* 00443af1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00443af4: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00443af7: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00443afa: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00443afd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00443b00: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00443b07: mov esp, ebp */ r_esp = r_ebp;
    /* 00443b09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443b0a: ret  */ FN_RET(0x004437ec); r_esp += 4; return;
}

void f_00443b0c(void) /* sub_443B0C */
{
    FN_ENTER(0x00443b0c);
    /* 00443b0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443b0d: mov esi, ecx */ r_esi = r_ecx;
    /* 00443b0f: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00443b15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443b17: je 0x443b30 */ if (fZ) goto L_00443b30;
L_00443b19:; BB(0x00443b19);
    /* 00443b19: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00443b1c: je 0x443b86 */ if (fZ) goto L_00443b86;
L_00443b1e:; BB(0x00443b1e);
    /* 00443b1e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00443b21: jne 0x443b86 */ if (!fZ) goto L_00443b86;
L_00443b23:; BB(0x00443b23);
    /* 00443b23: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00443b26: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00443b2b: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00443b2e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443b2f: ret  */ FN_RET(0x00443b0c); r_esp += 4; return;
L_00443b30:; BB(0x00443b30);
    /* 00443b30: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00443b33: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00443b38: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00443b3b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00443b3d: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00443b44: mov ecx, esi */ r_ecx = r_esi;
    /* 00443b46: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x443b4bu); f_007aa094();
    /* 00443b4b: mov edx, dword ptr [esi + 0x3c0] */ r_edx = R32((u32)(r_esi+0x3c0u));
    /* 00443b51: mov dword ptr [esi + 0x394], 0xc2200000 */ W32((u32)(r_esi+0x394u), 0xc2200000u);
    /* 00443b5b: mov eax, 1 */ r_eax = 0x1u;
    /* 00443b60: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00443b63: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00443b65: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00443b68: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 00443b6e: mov dword ptr [esi + 0x3b0], ecx */ W32((u32)(r_esi+0x3b0u), r_ecx);
    /* 00443b74: and edx, 0xfff7ffff */ {  u32 a = r_edx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00443b7a: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 00443b80: mov dword ptr [esi + 0x384], eax */ W32((u32)(r_esi+0x384u), r_eax);
L_00443b86:; BB(0x00443b86);
    /* 00443b86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443b87: ret  */ FN_RET(0x00443b0c); r_esp += 4; return;
}

void f_00443b40(void)
{
    FN_ENTER(0x00443b40);
    /* 00443b40: mov eax, 0x8b000000 */ r_eax = 0x8b000000u;
    /* 00443b45: into  */ UNSUP(0x00443b45, "into ");
    /* 00443b46: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x443b4bu); f_007aa094();
    /* 00443b4b: mov edx, dword ptr [esi + 0x3c0] */ r_edx = R32((u32)(r_esi+0x3c0u));
    /* 00443b51: mov dword ptr [esi + 0x394], 0xc2200000 */ W32((u32)(r_esi+0x394u), 0xc2200000u);
    /* 00443b5b: mov eax, 1 */ r_eax = 0x1u;
    /* 00443b60: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00443b63: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00443b65: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00443b68: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 00443b6e: mov dword ptr [esi + 0x3b0], ecx */ W32((u32)(r_esi+0x3b0u), r_ecx);
    /* 00443b74: and edx, 0xfff7ffff */ {  u32 a = r_edx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00443b7a: mov dword ptr [esi + 0x390], edx */ W32((u32)(r_esi+0x390u), r_edx);
    /* 00443b80: mov dword ptr [esi + 0x384], eax */ W32((u32)(r_esi+0x384u), r_eax);
    /* 00443b86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00443b87: ret  */ FN_RET(0x00443b40); r_esp += 4; return;
}

void f_00443b88(void)
{
    FN_ENTER(0x00443b88);
    /* 00443b88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443b89: mov ebp, esp */ r_ebp = r_esp;
    /* 00443b8b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443b8d: push 0x8ce6e4 */ { u32 v = 0x8ce6e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00443b92: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00443b98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443b99: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00443ba0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00443ba3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00443ba6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00443ba9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00443bac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00443baf: push 0x420 */ { u32 v = 0x420u; r_esp -= 4; W32(r_esp, v); }
    /* 00443bb4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00443bbb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x443bc0u); f_005caba4();
    /* 00443bc0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00443bc1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00443bc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443bc6: je 0x443bff */ if (fZ) goto L_00443bff;
L_00443bc8:; BB(0x00443bc8);
    /* 00443bc8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00443bcf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00443bd6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00443bd9: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00443bdf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00443be2: call 0x443c04 */ r_esp -= 4; W32(r_esp, 0x443be7u); f_00443c04();
    /* 00443be7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00443bea: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00443bf1:; BB(0x00443bf1);
    /* 00443bf1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00443bf4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00443bfb: mov esp, ebp */ r_esp = r_ebp;
    /* 00443bfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443bfe: ret  */ FN_RET(0x00443b88); r_esp += 4; return;
L_00443bff:; BB(0x00443bff);
    /* 00443bff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00443c01: jmp 0x443bf1 */ goto L_00443bf1;
}

void f_00443c04(void) /* sub_443C04 */
{
    FN_ENTER(0x00443c04);
    /* 00443c04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443c05: mov ebp, esp */ r_ebp = r_esp;
    /* 00443c07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443c09: push 0x8ce71a */ { u32 v = 0x8ce71au; r_esp -= 4; W32(r_esp, v); }
    /* 00443c0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00443c14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443c15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00443c1c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00443c1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00443c22: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00443c25: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00443c28: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00443c2b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00443c2e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00443c31: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00443c34: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00443c37: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x443c3cu); f_0052c3fc();
    /* 00443c3c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00443c43: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00443c46: mov dword ptr [edi], 0xaf5ee0 */ W32((u32)(r_edi), 0xaf5ee0u);
    /* 00443c4c: lea ebx, [edi + 0x3c8] */ r_ebx = (u32)(r_edi+0x3c8u);
    /* 00443c52: mov esi, 0xb */ r_esi = 0xbu;
    /* 00443c57: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00443c59:; BB(0x00443c59);
    /* 00443c59: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00443c5e: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 00443c61: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00443c63: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 00443c67: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 00443c6a: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00443c6d: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00443c70: jne 0x443c59 */ if (!fZ) goto L_00443c59;
L_00443c72:; BB(0x00443c72);
    /* 00443c72: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00443c75: mov dword ptr [edi + 0x3c4], 0 */ W32((u32)(r_edi+0x3c4u), 0x0u);
    /* 00443c7f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00443c82: mov eax, dword ptr [0x9a52a0] */ r_eax = R32((u32)(0x9a52a0u));
    /* 00443c87: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00443c89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00443c8a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00443c8d: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x443c93u); call_ind(t); }
    /* 00443c93: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00443c96: call 0x443ef0 */ r_esp -= 4; W32(r_esp, 0x443c9bu); f_00443ef0();
    /* 00443c9b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00443ca2: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00443ca4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x443ca9u); f_005caba4();
    /* 00443ca9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00443cac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443caf: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00443cb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443cb4: je 0x443cf9 */ if (fZ) goto L_00443cf9;
L_00443cb6:; BB(0x00443cb6);
    /* 00443cb6: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00443cbd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00443cc4: mov ecx, eax */ r_ecx = r_eax;
    /* 00443cc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00443cc8: call 0x44b84c */ r_esp -= 4; W32(r_esp, 0x443ccdu); f_0044b84c();
    /* 00443ccd: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00443cd4:; BB(0x00443cd4);
    /* 00443cd4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00443cd7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00443cda: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00443cdd: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00443ce0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00443ce3: mov dword ptr [eax + 0x3c0], edx */ W32((u32)(r_eax+0x3c0u), r_edx);
    /* 00443ce9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00443cec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00443cf3: mov esp, ebp */ r_esp = r_ebp;
    /* 00443cf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443cf6: ret 8 */ FN_RET(0x00443c04); r_esp += 12; return;
L_00443cf9:; BB(0x00443cf9);
    /* 00443cf9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00443cfb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00443cfe: jmp 0x443cd4 */ goto L_00443cd4;
}

void f_00443d00(void) /* sub_443D00 */
{
    FN_ENTER(0x00443d00);
    /* 00443d00: mov ecx, dword ptr [0xa44a0c] */ r_ecx = R32((u32)(0xa44a0cu));
    /* 00443d06: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00443d08: je 0x443d10 */ if (fZ) goto L_00443d10;
L_00443d0a:; BB(0x00443d0a);
    /* 00443d0a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00443d0c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00443d0e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x443d10u); call_ind(t); }
L_00443d10:; BB(0x00443d10);
    /* 00443d10: mov dword ptr [0xa44a0c], 0 */ W32((u32)(0xa44a0cu), 0x0u);
    /* 00443d1a: ret  */ FN_RET(0x00443d00); r_esp += 4; return;
}

void f_00443d1c(void) /* sub_443D1C */
{
    FN_ENTER(0x00443d1c);
    /* 00443d1c: movsx edx, word ptr [ecx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00443d23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00443d25: mov eax, 0 */ r_eax = 0x0u;
    /* 00443d2a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00443d2d: ret  */ FN_RET(0x00443d1c); r_esp += 4; return;
}

void f_00443d30(void) /* sub_443D30 */
{
    FN_ENTER(0x00443d30);
    /* 00443d30: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00443d33: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00443d38: je 0x443d3d */ if (fZ) goto L_00443d3d;
L_00443d3a:; BB(0x00443d3a);
    /* 00443d3a: ret 4 */ FN_RET(0x00443d30); r_esp += 8; return;
L_00443d3d:; BB(0x00443d3d);
    /* 00443d3d: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 00443d43: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00443d46: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00443d4c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00443d4e: jne 0x443d6c */ if (!fZ) goto L_00443d6c;
L_00443d50:; BB(0x00443d50);
    /* 00443d50: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00443d57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00443d5a: je 0x443d6c */ if (fZ) goto L_00443d6c;
L_00443d5c:; BB(0x00443d5c);
    /* 00443d5c: mov dword ptr [ecx + 0x37c], 2 */ W32((u32)(r_ecx+0x37cu), 0x2u);
    /* 00443d66: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
L_00443d6c:; BB(0x00443d6c);
    /* 00443d6c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00443d70: mov dword ptr [ecx + 0x3b0], eax */ W32((u32)(r_ecx+0x3b0u), r_eax);
    /* 00443d76: ret 4 */ FN_RET(0x00443d30); r_esp += 8; return;
}

void f_00443dd0(void) /* sub_443DD0 */
{
    FN_ENTER(0x00443dd0);
    /* 00443dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443dd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00443dd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00443dd5: push 0x8ce740 */ { u32 v = 0x8ce740u; r_esp -= 4; W32(r_esp, v); }
    /* 00443dda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00443de0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443de1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00443de8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00443deb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00443dee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00443df1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00443df4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00443df7: mov eax, dword ptr [0xa447bc] */ r_eax = R32((u32)(0xa447bcu));
    /* 00443dfc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00443e03: mov dword ptr [0xa44a14], eax */ W32((u32)(0xa44a14u), r_eax);
    /* 00443e08: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00443e0a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x443e0fu); f_008581c5();
    /* 00443e0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00443e10: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00443e13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443e15: je 0x443ec7 */ if (fZ) goto L_00443ec7;
L_00443e1b:; BB(0x00443e1b);
    /* 00443e1b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00443e22: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00443e29: mov eax, dword ptr [0xa44a14] */ r_eax = R32((u32)(0xa44a14u));
    /* 00443e2e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00443e31: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00443e37: push dword ptr [edx + 0x118] */ { u32 v = R32((u32)(r_edx+0x118u)); r_esp -= 4; W32(r_esp, v); }
    /* 00443e3d: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x443e42u); f_00511b74();
    /* 00443e42: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00443e45: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00443e4c:; BB(0x00443e4c);
    /* 00443e4c: mov dword ptr [0xa44a0c], eax */ W32((u32)(0xa44a0cu), r_eax);
    /* 00443e51: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00443e58: mov eax, dword ptr [0xa44a14] */ r_eax = R32((u32)(0xa44a14u));
    /* 00443e5d: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00443e5f: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00443e65: push dword ptr [edx + 0x118] */ { u32 v = R32((u32)(r_edx+0x118u)); r_esp -= 4; W32(r_esp, v); }
    /* 00443e6b: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x443e70u); f_0078e934();
    /* 00443e70: mov dword ptr [0xa449f8], eax */ W32((u32)(0xa449f8u), r_eax);
    /* 00443e75: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00443e77: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x443e7cu); f_0077a684();
    /* 00443e7c: mov dword ptr [0xa44a08], eax */ W32((u32)(0xa44a08u), r_eax);
    /* 00443e81: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00443e83: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x443e88u); f_0077a698();
    /* 00443e88: mov dword ptr [0xa44a04], eax */ W32((u32)(0xa44a04u), r_eax);
    /* 00443e8d: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00443e8f: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x443e94u); f_0077a6b4();
    /* 00443e94: mov dword ptr [0xa44a00], eax */ W32((u32)(0xa44a00u), r_eax);
    /* 00443e99: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00443e9b: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x443ea0u); f_0077a6cc();
    /* 00443ea0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00443ea3: mov dword ptr [0xa449fc], eax */ W32((u32)(0xa449fcu), r_eax);
    /* 00443ea8: mov eax, dword ptr [0xa449f8] */ r_eax = R32((u32)(0xa449f8u));
    /* 00443ead: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00443eb0: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00443eb3: mov dword ptr [0xa449e0], ecx */ W32((u32)(0xa449e0u), r_ecx);
    /* 00443eb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00443ebc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00443ec3: mov esp, ebp */ r_esp = r_ebp;
    /* 00443ec5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443ec6: ret  */ FN_RET(0x00443dd0); r_esp += 4; return;
L_00443ec7:; BB(0x00443ec7);
    /* 00443ec7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00443ec9: jmp 0x443e4c */ goto L_00443e4c;
}

void f_00443ecc(void) /* sub_443ECC */
{
    FN_ENTER(0x00443ecc);
    /* 00443ecc: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 00443ed2: mov byte ptr [ecx + 0x398], 0 */ W8((u32)(r_ecx+0x398u), 0x0u);
    /* 00443ed9: mov dword ptr [ecx + 0x394], 0xc2200000 */ W32((u32)(r_ecx+0x394u), 0xc2200000u);
    /* 00443ee3: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00443ee6: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00443ee9: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00443eec: ret  */ FN_RET(0x00443ecc); r_esp += 4; return;
}

void f_00443ef0(void) /* sub_443EF0 */
{
    FN_ENTER(0x00443ef0);
    /* 00443ef0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00443ef1: mov esi, ecx */ r_esi = r_ecx;
    /* 00443ef3: mov ecx, esi */ r_ecx = r_esi;
    /* 00443ef5: mov eax, dword ptr [0xa44a14] */ r_eax = R32((u32)(0xa44a14u));
    /* 00443efa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00443efc: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00443f02: mov dword ptr [esi + 0xdc], edx */ W32((u32)(r_esi+0xdcu), r_edx);
    /* 00443f08: mov dword ptr [esi + 0xd8], 0x9a5240 */ W32((u32)(r_esi+0xd8u), 0x9a5240u);
    /* 00443f12: push 0x9a52c0 */ { u32 v = 0x9a52c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00443f17: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x443f1cu); f_007b9a88();
    /* 00443f1c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00443f21: mov ecx, esi */ r_ecx = r_esi;
    /* 00443f23: mov dword ptr [esi + 0x370], 0 */ W32((u32)(r_esi+0x370u), 0x0u);
    /* 00443f2d: mov dword ptr [esi + 0x358], 0x9a52a4 */ W32((u32)(r_esi+0x358u), 0x9a52a4u);
    /* 00443f37: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00443f3c: push dword ptr [0xa44a00] */ { u32 v = R32((u32)(0xa44a00u)); r_esp -= 4; W32(r_esp, v); }
    /* 00443f42: push dword ptr [0xa44a04] */ { u32 v = R32((u32)(0xa44a04u)); r_esp -= 4; W32(r_esp, v); }
    /* 00443f48: push dword ptr [0xa44a08] */ { u32 v = R32((u32)(0xa44a08u)); r_esp -= 4; W32(r_esp, v); }
    /* 00443f4e: call 0x770da4 */ r_esp -= 4; W32(r_esp, 0x443f53u); f_00770da4();
    /* 00443f53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00443f55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443f56: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00443f5d: mov ecx, esi */ r_ecx = r_esi;
    /* 00443f5f: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x443f64u); f_007aa4c8();
    /* 00443f64: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00443f66: movzx eax, word ptr [esi + 0xb8] */ r_eax = (u32)R16((u32)(r_esi+0xb8u));
    /* 00443f6d: movzx edx, word ptr [esi + 0x2be] */ r_edx = (u32)R16((u32)(r_esi+0x2beu));
    /* 00443f74: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00443f7b: movsx eax, word ptr [esi + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2bcu));
    /* 00443f82: mov word ptr [esi + 0x334], ax */ W16((u32)(r_esi+0x334u), (u16)r_eax);
    /* 00443f89: mov word ptr [esi + 0x336], dx */ W16((u32)(r_esi+0x336u), (u16)r_edx);
    /* 00443f90: mov word ptr [esi + 0x346], ax */ W16((u32)(r_esi+0x346u), (u16)r_eax);
    /* 00443f97: mov ecx, esi */ r_ecx = r_esi;
    /* 00443f99: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x443f9eu); f_00787550();
    /* 00443f9e: mov ecx, esi */ r_ecx = r_esi;
    /* 00443fa0: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x443fa5u); f_0078730c();
    /* 00443fa5: mov ecx, esi */ r_ecx = r_esi;
    /* 00443fa7: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x443facu); f_007b4f54();
    /* 00443fac: mov ecx, dword ptr [0xa44a14] */ r_ecx = R32((u32)(0xa44a14u));
    /* 00443fb2: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 00443fb8: mov edx, dword ptr [eax + 0x118] */ r_edx = R32((u32)(r_eax+0x118u));
    /* 00443fbe: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 00443fc1: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 00443fc7: mov eax, dword ptr [eax + 0x11c] */ r_eax = R32((u32)(r_eax+0x11cu));
    /* 00443fcd: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 00443fd0: mov ecx, esi */ r_ecx = r_esi;
    /* 00443fd2: call 0x443ecc */ r_esp -= 4; W32(r_esp, 0x443fd7u); f_00443ecc();
    /* 00443fd7: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00443fdd: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00443fe0: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00443fe3: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00443fe6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00443fe8: mov dword ptr [esi + 0x3b4], eax */ W32((u32)(r_esi+0x3b4u), r_eax);
    /* 00443fee: mov dword ptr [esi + 0x3b8], eax */ W32((u32)(r_esi+0x3b8u), r_eax);
    /* 00443ff4: mov eax, dword ptr [esi + 0x2e8] */ r_eax = R32((u32)(r_esi+0x2e8u));
    /* 00443ffa: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00443ffd: mov dword ptr [esi + 0x2e8], eax */ W32((u32)(r_esi+0x2e8u), r_eax);
    /* 00444003: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00444006: mov ecx, esi */ r_ecx = r_esi;
    /* 00444008: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044400d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00444010: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00444012: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x444018u); call_ind(t); }
    /* 00444018: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00444019: ret  */ FN_RET(0x00443ef0); r_esp += 4; return;
}

