#include "protos.h"

void f_00460000(void)
{
    FN_ENTER(0x00460000);
    /* 00460000: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 00460001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460002: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460005: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00460008: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460009: call 0x461478 */ r_esp -= 4; W32(r_esp, 0x46000eu); f_00461478();
    /* 0046000e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460011: movzx eax, byte ptr [0xa45a04] */ r_eax = (u32)R8((u32)(0xa45a04u));
    /* 00460018: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0046001a: jne 0x460038 */ if (!fZ) goto L_00460038;
L_0046001c:; BB(0x0046001c);
    /* 0046001c: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 00460022: fdiv dword ptr [0x9005dc] */ ST(0) = ST(0) / R_F32((u32)(0x9005dcu));
    /* 00460028: fstp dword ptr [0xa45a08] */ W_F32((u32)(0xa45a08u), ST(0)); FPOP();
    /* 0046002e: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460033: mov byte ptr [0xa45a04], al */ W8((u32)(0xa45a04u), (u8)r_eax);
L_00460038:; BB(0x00460038);
    /* 00460038: fld dword ptr [ebx + 0x3a0] */ FPUSH(R_F32((u32)(r_ebx+0x3a0u)));
    /* 0046003e: fcom dword ptr [0xa45a08] */ fx_compare(ST(0), R_F32((u32)(0xa45a08u))); 
    /* 00460044: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460046: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460047: ja 0x460052 */ if ((!fC&&!fZ)) goto L_00460052;
L_00460049:; BB(0x00460049);
    /* 00460049: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0046004b: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00460050: jmp 0x46007c */ goto L_0046007c;
L_00460052:; BB(0x00460052);
    /* 00460052: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 00460058: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0046005a: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0046005e: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00460063: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460068: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0046006c: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00460070: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00460074: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00460078: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
L_0046007c:; BB(0x0046007c);
    /* 0046007c: mov edx, 1 */ r_edx = 0x1u;
    /* 00460081: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460084: jle 0x46008c */ if ((fZ||fS!=fO)) goto L_0046008c;
L_00460086:; BB(0x00460086);
    /* 00460086: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460088: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046008a: jl 0x460086 */ if ((fS!=fO)) goto L_00460086;
L_0046008c:; BB(0x0046008c);
    /* 0046008c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046008f: test dword ptr [ebx + 0x3c0], edx */ {  u32 a = R32((u32)(r_ebx+0x3c0u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460095: jne 0x46010a */ if (!fZ) goto L_0046010a;
L_00460097:; BB(0x00460097);
    /* 00460097: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0046009d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a0: je 0x460150 */ if (fZ) goto L_00460150;
L_004600a6:; BB(0x004600a6);
    /* 004600a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a9: je 0x460150 */ if (fZ) goto L_00460150;
L_004600af:; BB(0x004600af);
    /* 004600af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004600b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600b3: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600b5:; BB(0x004600b5);
    /* 004600b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004600b7: push dword ptr [0xa45a0c] */ { u32 v = R32((u32)(0xa45a0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004600bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004600bf: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x4600c4u); f_007714cc();
    /* 004600c4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004600c7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600cc: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600ce:; BB(0x004600ce);
    /* 004600ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004600cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4600d4u); f_0068d5a8();
    /* 004600d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004600d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600d7: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600d9:; BB(0x004600d9);
    /* 004600d9: movsx edi, word ptr [ebx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2ccu));
    /* 004600e0: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004600e4: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004600e8: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004600ea: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004600ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004600f0: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 004600f5: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004600f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004600fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fe: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460105: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x460108u); call_ind(t); }
    /* 00460108: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0046010a:; BB(0x0046010a);
    /* 0046010a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046010c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x460111u); f_0078730c();
    /* 00460111: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00460117: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046011a: je 0x460143 */ if (fZ) goto L_00460143;
L_0046011c:; BB(0x0046011c);
    /* 0046011c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046011e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x460123u); f_007b6880();
    /* 00460123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00460125: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460126: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x46012bu); f_006946a8();
    /* 0046012b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00460135: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046013a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046013b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x460140u); f_00805608();
    /* 00460140: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460143:; BB(0x00460143);
    /* 00460143: add dword ptr [ebx + 0x3c0], 1 */ { u32 ad = (u32)(r_ebx+0x3c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0046014a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046014d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0046014e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0046014f: ret  */ FN_RET(0x00460000); r_esp += 4; return;
L_00460150:; BB(0x00460150);
    /* 00460150: mov eax, 1 */ r_eax = 0x1u;
    /* 00460155: jmp 0x4600b1 */ f_004600b1(); return;
}

void f_00460002(void)
{
    FN_ENTER(0x00460002);
    /* 00460002: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460005: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00460008: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460009: call 0x461478 */ r_esp -= 4; W32(r_esp, 0x46000eu); f_00461478();
    /* 0046000e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460011: movzx eax, byte ptr [0xa45a04] */ r_eax = (u32)R8((u32)(0xa45a04u));
    /* 00460018: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0046001a: jne 0x460038 */ if (!fZ) goto L_00460038;
L_0046001c:; BB(0x0046001c);
    /* 0046001c: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 00460022: fdiv dword ptr [0x9005dc] */ ST(0) = ST(0) / R_F32((u32)(0x9005dcu));
    /* 00460028: fstp dword ptr [0xa45a08] */ W_F32((u32)(0xa45a08u), ST(0)); FPOP();
    /* 0046002e: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460033: mov byte ptr [0xa45a04], al */ W8((u32)(0xa45a04u), (u8)r_eax);
L_00460038:; BB(0x00460038);
    /* 00460038: fld dword ptr [ebx + 0x3a0] */ FPUSH(R_F32((u32)(r_ebx+0x3a0u)));
    /* 0046003e: fcom dword ptr [0xa45a08] */ fx_compare(ST(0), R_F32((u32)(0xa45a08u))); 
    /* 00460044: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460046: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460047: ja 0x460052 */ if ((!fC&&!fZ)) goto L_00460052;
L_00460049:; BB(0x00460049);
    /* 00460049: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0046004b: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00460050: jmp 0x46007c */ goto L_0046007c;
L_00460052:; BB(0x00460052);
    /* 00460052: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 00460058: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0046005a: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0046005e: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00460063: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460068: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0046006c: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00460070: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00460074: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00460078: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
L_0046007c:; BB(0x0046007c);
    /* 0046007c: mov edx, 1 */ r_edx = 0x1u;
    /* 00460081: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460084: jle 0x46008c */ if ((fZ||fS!=fO)) goto L_0046008c;
L_00460086:; BB(0x00460086);
    /* 00460086: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460088: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046008a: jl 0x460086 */ if ((fS!=fO)) goto L_00460086;
L_0046008c:; BB(0x0046008c);
    /* 0046008c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046008f: test dword ptr [ebx + 0x3c0], edx */ {  u32 a = R32((u32)(r_ebx+0x3c0u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460095: jne 0x46010a */ if (!fZ) goto L_0046010a;
L_00460097:; BB(0x00460097);
    /* 00460097: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0046009d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a0: je 0x460150 */ if (fZ) goto L_00460150;
L_004600a6:; BB(0x004600a6);
    /* 004600a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a9: je 0x460150 */ if (fZ) goto L_00460150;
L_004600af:; BB(0x004600af);
    /* 004600af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004600b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600b3: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600b5:; BB(0x004600b5);
    /* 004600b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004600b7: push dword ptr [0xa45a0c] */ { u32 v = R32((u32)(0xa45a0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004600bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004600bf: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x4600c4u); f_007714cc();
    /* 004600c4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004600c7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600cc: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600ce:; BB(0x004600ce);
    /* 004600ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004600cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4600d4u); f_0068d5a8();
    /* 004600d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004600d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600d7: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600d9:; BB(0x004600d9);
    /* 004600d9: movsx edi, word ptr [ebx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2ccu));
    /* 004600e0: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004600e4: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004600e8: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004600ea: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004600ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004600f0: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 004600f5: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004600f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004600fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fe: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460105: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x460108u); call_ind(t); }
    /* 00460108: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0046010a:; BB(0x0046010a);
    /* 0046010a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046010c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x460111u); f_0078730c();
    /* 00460111: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00460117: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046011a: je 0x460143 */ if (fZ) goto L_00460143;
L_0046011c:; BB(0x0046011c);
    /* 0046011c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046011e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x460123u); f_007b6880();
    /* 00460123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00460125: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460126: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x46012bu); f_006946a8();
    /* 0046012b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00460135: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046013a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046013b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x460140u); f_00805608();
    /* 00460140: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460143:; BB(0x00460143);
    /* 00460143: add dword ptr [ebx + 0x3c0], 1 */ { u32 ad = (u32)(r_ebx+0x3c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0046014a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046014d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0046014e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0046014f: ret  */ FN_RET(0x00460002); r_esp += 4; return;
L_00460150:; BB(0x00460150);
    /* 00460150: mov eax, 1 */ r_eax = 0x1u;
    /* 00460155: jmp 0x4600b1 */ f_004600b1(); return;
}

void f_00460020(void)
{
    FN_ENTER(0x00460020);
    /* 00460020: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 00460021: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00460023: xor eax, 0x9005dc */ {  u32 a = r_eax; u32 b = 0x9005dcu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00460028: fstp dword ptr [0xa45a08] */ W_F32((u32)(0xa45a08u), ST(0)); FPOP();
    /* 0046002e: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460033: mov byte ptr [0xa45a04], al */ W8((u32)(0xa45a04u), (u8)r_eax);
    /* 00460038: fld dword ptr [ebx + 0x3a0] */ FPUSH(R_F32((u32)(r_ebx+0x3a0u)));
    /* 0046003e: fcom dword ptr [0xa45a08] */ fx_compare(ST(0), R_F32((u32)(0xa45a08u))); 
    /* 00460044: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460046: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460047: ja 0x460052 */ if ((!fC&&!fZ)) goto L_00460052;
L_00460049:; BB(0x00460049);
    /* 00460049: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0046004b: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00460050: jmp 0x46007c */ goto L_0046007c;
L_00460052:; BB(0x00460052);
    /* 00460052: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 00460058: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0046005a: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0046005e: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00460063: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460068: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0046006c: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00460070: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00460074: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00460078: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
L_0046007c:; BB(0x0046007c);
    /* 0046007c: mov edx, 1 */ r_edx = 0x1u;
    /* 00460081: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460084: jle 0x46008c */ if ((fZ||fS!=fO)) goto L_0046008c;
L_00460086:; BB(0x00460086);
    /* 00460086: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460088: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046008a: jl 0x460086 */ if ((fS!=fO)) goto L_00460086;
L_0046008c:; BB(0x0046008c);
    /* 0046008c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046008f: test dword ptr [ebx + 0x3c0], edx */ {  u32 a = R32((u32)(r_ebx+0x3c0u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460095: jne 0x46010a */ if (!fZ) goto L_0046010a;
L_00460097:; BB(0x00460097);
    /* 00460097: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0046009d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a0: je 0x460150 */ if (fZ) goto L_00460150;
L_004600a6:; BB(0x004600a6);
    /* 004600a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a9: je 0x460150 */ if (fZ) goto L_00460150;
L_004600af:; BB(0x004600af);
    /* 004600af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004600b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600b3: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600b5:; BB(0x004600b5);
    /* 004600b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004600b7: push dword ptr [0xa45a0c] */ { u32 v = R32((u32)(0xa45a0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004600bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004600bf: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x4600c4u); f_007714cc();
    /* 004600c4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004600c7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600cc: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600ce:; BB(0x004600ce);
    /* 004600ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004600cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4600d4u); f_0068d5a8();
    /* 004600d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004600d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600d7: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600d9:; BB(0x004600d9);
    /* 004600d9: movsx edi, word ptr [ebx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2ccu));
    /* 004600e0: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004600e4: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004600e8: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004600ea: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004600ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004600f0: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 004600f5: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004600f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004600fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fe: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460105: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x460108u); call_ind(t); }
    /* 00460108: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0046010a:; BB(0x0046010a);
    /* 0046010a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046010c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x460111u); f_0078730c();
    /* 00460111: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00460117: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046011a: je 0x460143 */ if (fZ) goto L_00460143;
L_0046011c:; BB(0x0046011c);
    /* 0046011c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046011e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x460123u); f_007b6880();
    /* 00460123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00460125: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460126: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x46012bu); f_006946a8();
    /* 0046012b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00460135: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046013a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046013b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x460140u); f_00805608();
    /* 00460140: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460143:; BB(0x00460143);
    /* 00460143: add dword ptr [ebx + 0x3c0], 1 */ { u32 ad = (u32)(r_ebx+0x3c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0046014a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046014d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0046014e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0046014f: ret  */ FN_RET(0x00460020); r_esp += 4; return;
L_00460150:; BB(0x00460150);
    /* 00460150: mov eax, 1 */ r_eax = 0x1u;
    /* 00460155: jmp 0x4600b1 */ f_004600b1(); return;
}

void f_00460027(void)
{
    FN_ENTER(0x00460027);
    /* 00460027: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 00460029: sbb eax, 0xa45a08 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xa45a08u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0046002e: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460033: mov byte ptr [0xa45a04], al */ W8((u32)(0xa45a04u), (u8)r_eax);
    /* 00460038: fld dword ptr [ebx + 0x3a0] */ FPUSH(R_F32((u32)(r_ebx+0x3a0u)));
    /* 0046003e: fcom dword ptr [0xa45a08] */ fx_compare(ST(0), R_F32((u32)(0xa45a08u))); 
    /* 00460044: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460046: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460047: ja 0x460052 */ if ((!fC&&!fZ)) goto L_00460052;
L_00460049:; BB(0x00460049);
    /* 00460049: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0046004b: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00460050: jmp 0x46007c */ goto L_0046007c;
L_00460052:; BB(0x00460052);
    /* 00460052: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 00460058: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0046005a: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0046005e: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00460063: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460068: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0046006c: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00460070: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00460074: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00460078: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
L_0046007c:; BB(0x0046007c);
    /* 0046007c: mov edx, 1 */ r_edx = 0x1u;
    /* 00460081: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460084: jle 0x46008c */ if ((fZ||fS!=fO)) goto L_0046008c;
L_00460086:; BB(0x00460086);
    /* 00460086: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460088: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046008a: jl 0x460086 */ if ((fS!=fO)) goto L_00460086;
L_0046008c:; BB(0x0046008c);
    /* 0046008c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046008f: test dword ptr [ebx + 0x3c0], edx */ {  u32 a = R32((u32)(r_ebx+0x3c0u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460095: jne 0x46010a */ if (!fZ) goto L_0046010a;
L_00460097:; BB(0x00460097);
    /* 00460097: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0046009d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a0: je 0x460150 */ if (fZ) goto L_00460150;
L_004600a6:; BB(0x004600a6);
    /* 004600a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a9: je 0x460150 */ if (fZ) goto L_00460150;
L_004600af:; BB(0x004600af);
    /* 004600af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004600b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600b3: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600b5:; BB(0x004600b5);
    /* 004600b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004600b7: push dword ptr [0xa45a0c] */ { u32 v = R32((u32)(0xa45a0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004600bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004600bf: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x4600c4u); f_007714cc();
    /* 004600c4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004600c7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600cc: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600ce:; BB(0x004600ce);
    /* 004600ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004600cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4600d4u); f_0068d5a8();
    /* 004600d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004600d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600d7: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600d9:; BB(0x004600d9);
    /* 004600d9: movsx edi, word ptr [ebx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2ccu));
    /* 004600e0: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004600e4: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004600e8: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004600ea: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004600ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004600f0: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 004600f5: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004600f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004600fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fe: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460105: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x460108u); call_ind(t); }
    /* 00460108: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0046010a:; BB(0x0046010a);
    /* 0046010a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046010c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x460111u); f_0078730c();
    /* 00460111: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00460117: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046011a: je 0x460143 */ if (fZ) goto L_00460143;
L_0046011c:; BB(0x0046011c);
    /* 0046011c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046011e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x460123u); f_007b6880();
    /* 00460123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00460125: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460126: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x46012bu); f_006946a8();
    /* 0046012b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00460135: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046013a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046013b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x460140u); f_00805608();
    /* 00460140: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460143:; BB(0x00460143);
    /* 00460143: add dword ptr [ebx + 0x3c0], 1 */ { u32 ad = (u32)(r_ebx+0x3c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0046014a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046014d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0046014e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0046014f: ret  */ FN_RET(0x00460027); r_esp += 4; return;
L_00460150:; BB(0x00460150);
    /* 00460150: mov eax, 1 */ r_eax = 0x1u;
    /* 00460155: jmp 0x4600b1 */ f_004600b1(); return;
}

void f_00460041(void)
{
    FN_ENTER(0x00460041);
    goto L_00460041;
L_0045ffe5:; BB(0x0045ffe5);
    /* 0045ffe5: add byte ptr [ebx + 0x37c83], cl */ { u32 ad = (u32)(r_ebx+0x37c83u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045ffeb: add byte ptr [ebx + 0xd7403f8], al */ { u32 ad = (u32)(r_ebx+0xd7403f8u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045fff1: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 0045fff4: add eax, 0x1111 */ {  u32 a = r_eax; u32 b = 0x1111u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045fff9: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0045fffc: jmp 0x460001 */ goto L_00460001;
L_00460001:; BB(0x00460001);
    /* 00460001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460002: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460005: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00460008: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460009: call 0x461478 */ r_esp -= 4; W32(r_esp, 0x46000eu); f_00461478();
    /* 0046000e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460011: movzx eax, byte ptr [0xa45a04] */ r_eax = (u32)R8((u32)(0xa45a04u));
    /* 00460018: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0046001a: jne 0x460038 */ if (!fZ) goto L_00460038;
L_0046001c:; BB(0x0046001c);
    /* 0046001c: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 00460022: fdiv dword ptr [0x9005dc] */ ST(0) = ST(0) / R_F32((u32)(0x9005dcu));
    /* 00460028: fstp dword ptr [0xa45a08] */ W_F32((u32)(0xa45a08u), ST(0)); FPOP();
    /* 0046002e: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460033: mov byte ptr [0xa45a04], al */ W8((u32)(0xa45a04u), (u8)r_eax);
L_00460038:; BB(0x00460038);
    /* 00460038: fld dword ptr [ebx + 0x3a0] */ FPUSH(R_F32((u32)(r_ebx+0x3a0u)));
    /* 0046003e: fcom dword ptr [0xa45a08] */ fx_compare(ST(0), R_F32((u32)(0xa45a08u))); 
L_00460041:; BB(0x00460041);
    /* 00460041: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 00460042: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 00460043: add bh, bl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fC = (r < a); }
    /* 00460044: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460045: loopne 0x45ffe5 */ r_ecx--; if (r_ecx && !fZ) goto L_0045ffe5;
    /* 00460046: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460047: ja 0x460052 */ if ((!fC&&!fZ)) goto L_00460052;
L_00460049:; BB(0x00460049);
    /* 00460049: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0046004b: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00460050: jmp 0x46007c */ goto L_0046007c;
L_00460052:; BB(0x00460052);
    /* 00460052: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 00460058: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0046005a: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0046005e: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00460063: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460068: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0046006c: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00460070: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00460074: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00460078: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
L_0046007c:; BB(0x0046007c);
    /* 0046007c: mov edx, 1 */ r_edx = 0x1u;
    /* 00460081: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460084: jle 0x46008c */ if ((fZ||fS!=fO)) goto L_0046008c;
L_00460086:; BB(0x00460086);
    /* 00460086: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460088: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046008a: jl 0x460086 */ if ((fS!=fO)) goto L_00460086;
L_0046008c:; BB(0x0046008c);
    /* 0046008c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046008f: test dword ptr [ebx + 0x3c0], edx */ {  u32 a = R32((u32)(r_ebx+0x3c0u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460095: jne 0x46010a */ if (!fZ) goto L_0046010a;
L_00460097:; BB(0x00460097);
    /* 00460097: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0046009d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a0: je 0x460150 */ if (fZ) goto L_00460150;
L_004600a6:; BB(0x004600a6);
    /* 004600a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a9: je 0x460150 */ if (fZ) goto L_00460150;
L_004600af:; BB(0x004600af);
    /* 004600af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004600b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600b3: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600b5:; BB(0x004600b5);
    /* 004600b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004600b7: push dword ptr [0xa45a0c] */ { u32 v = R32((u32)(0xa45a0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004600bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004600bf: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x4600c4u); f_007714cc();
    /* 004600c4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004600c7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600cc: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600ce:; BB(0x004600ce);
    /* 004600ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004600cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4600d4u); f_0068d5a8();
    /* 004600d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004600d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600d7: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600d9:; BB(0x004600d9);
    /* 004600d9: movsx edi, word ptr [ebx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2ccu));
    /* 004600e0: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004600e4: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004600e8: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004600ea: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004600ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004600f0: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 004600f5: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004600f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004600fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fe: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460105: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x460108u); call_ind(t); }
    /* 00460108: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0046010a:; BB(0x0046010a);
    /* 0046010a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046010c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x460111u); f_0078730c();
    /* 00460111: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00460117: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046011a: je 0x460143 */ if (fZ) goto L_00460143;
L_0046011c:; BB(0x0046011c);
    /* 0046011c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046011e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x460123u); f_007b6880();
    /* 00460123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00460125: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460126: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x46012bu); f_006946a8();
    /* 0046012b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00460135: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046013a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046013b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x460140u); f_00805608();
    /* 00460140: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460143:; BB(0x00460143);
    /* 00460143: add dword ptr [ebx + 0x3c0], 1 */ { u32 ad = (u32)(r_ebx+0x3c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0046014a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046014d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0046014e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0046014f: ret  */ FN_RET(0x00460041); r_esp += 4; return;
L_00460150:; BB(0x00460150);
    /* 00460150: mov eax, 1 */ r_eax = 0x1u;
    /* 00460155: jmp 0x4600b1 */ f_004600b1(); return;
}

void f_00460046(void)
{
    FN_ENTER(0x00460046);
    /* 00460046: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460047: ja 0x460052 */ if ((!fC&&!fZ)) goto L_00460052;
L_00460049:; BB(0x00460049);
    /* 00460049: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0046004b: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00460050: jmp 0x46007c */ goto L_0046007c;
L_00460052:; BB(0x00460052);
    /* 00460052: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 00460058: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0046005a: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0046005e: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00460063: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460068: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0046006c: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00460070: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00460074: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00460078: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
L_0046007c:; BB(0x0046007c);
    /* 0046007c: mov edx, 1 */ r_edx = 0x1u;
    /* 00460081: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460084: jle 0x46008c */ if ((fZ||fS!=fO)) goto L_0046008c;
L_00460086:; BB(0x00460086);
    /* 00460086: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460088: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046008a: jl 0x460086 */ if ((fS!=fO)) goto L_00460086;
L_0046008c:; BB(0x0046008c);
    /* 0046008c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046008f: test dword ptr [ebx + 0x3c0], edx */ {  u32 a = R32((u32)(r_ebx+0x3c0u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460095: jne 0x46010a */ if (!fZ) goto L_0046010a;
L_00460097:; BB(0x00460097);
    /* 00460097: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0046009d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a0: je 0x460150 */ if (fZ) goto L_00460150;
L_004600a6:; BB(0x004600a6);
    /* 004600a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a9: je 0x460150 */ if (fZ) goto L_00460150;
L_004600af:; BB(0x004600af);
    /* 004600af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004600b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600b3: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600b5:; BB(0x004600b5);
    /* 004600b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004600b7: push dword ptr [0xa45a0c] */ { u32 v = R32((u32)(0xa45a0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004600bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004600bf: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x4600c4u); f_007714cc();
    /* 004600c4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004600c7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600cc: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600ce:; BB(0x004600ce);
    /* 004600ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004600cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4600d4u); f_0068d5a8();
    /* 004600d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004600d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600d7: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600d9:; BB(0x004600d9);
    /* 004600d9: movsx edi, word ptr [ebx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2ccu));
    /* 004600e0: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004600e4: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004600e8: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004600ea: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004600ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004600f0: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 004600f5: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004600f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004600fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fe: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460105: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x460108u); call_ind(t); }
    /* 00460108: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0046010a:; BB(0x0046010a);
    /* 0046010a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046010c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x460111u); f_0078730c();
    /* 00460111: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00460117: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046011a: je 0x460143 */ if (fZ) goto L_00460143;
L_0046011c:; BB(0x0046011c);
    /* 0046011c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046011e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x460123u); f_007b6880();
    /* 00460123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00460125: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460126: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x46012bu); f_006946a8();
    /* 0046012b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00460135: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046013a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046013b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x460140u); f_00805608();
    /* 00460140: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460143:; BB(0x00460143);
    /* 00460143: add dword ptr [ebx + 0x3c0], 1 */ { u32 ad = (u32)(r_ebx+0x3c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0046014a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046014d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0046014e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0046014f: ret  */ FN_RET(0x00460046); r_esp += 4; return;
L_00460150:; BB(0x00460150);
    /* 00460150: mov eax, 1 */ r_eax = 0x1u;
    /* 00460155: jmp 0x4600b1 */ f_004600b1(); return;
}

void f_00460049(void)
{
    FN_ENTER(0x00460049);
    /* 00460049: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0046004b: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00460050: jmp 0x46007c */ goto L_0046007c;
L_0046007c:; BB(0x0046007c);
    /* 0046007c: mov edx, 1 */ r_edx = 0x1u;
    /* 00460081: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460084: jle 0x46008c */ if ((fZ||fS!=fO)) goto L_0046008c;
L_00460086:; BB(0x00460086);
    /* 00460086: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460088: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046008a: jl 0x460086 */ if ((fS!=fO)) goto L_00460086;
L_0046008c:; BB(0x0046008c);
    /* 0046008c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046008f: test dword ptr [ebx + 0x3c0], edx */ {  u32 a = R32((u32)(r_ebx+0x3c0u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460095: jne 0x46010a */ if (!fZ) goto L_0046010a;
L_00460097:; BB(0x00460097);
    /* 00460097: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0046009d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a0: je 0x460150 */ if (fZ) goto L_00460150;
L_004600a6:; BB(0x004600a6);
    /* 004600a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a9: je 0x460150 */ if (fZ) goto L_00460150;
L_004600af:; BB(0x004600af);
    /* 004600af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004600b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600b3: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600b5:; BB(0x004600b5);
    /* 004600b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004600b7: push dword ptr [0xa45a0c] */ { u32 v = R32((u32)(0xa45a0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004600bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004600bf: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x4600c4u); f_007714cc();
    /* 004600c4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004600c7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600cc: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600ce:; BB(0x004600ce);
    /* 004600ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004600cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4600d4u); f_0068d5a8();
    /* 004600d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004600d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600d7: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600d9:; BB(0x004600d9);
    /* 004600d9: movsx edi, word ptr [ebx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2ccu));
    /* 004600e0: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004600e4: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004600e8: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004600ea: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004600ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004600f0: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 004600f5: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004600f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004600fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fe: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460105: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x460108u); call_ind(t); }
    /* 00460108: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0046010a:; BB(0x0046010a);
    /* 0046010a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046010c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x460111u); f_0078730c();
    /* 00460111: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00460117: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046011a: je 0x460143 */ if (fZ) goto L_00460143;
L_0046011c:; BB(0x0046011c);
    /* 0046011c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046011e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x460123u); f_007b6880();
    /* 00460123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00460125: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460126: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x46012bu); f_006946a8();
    /* 0046012b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00460135: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046013a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046013b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x460140u); f_00805608();
    /* 00460140: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460143:; BB(0x00460143);
    /* 00460143: add dword ptr [ebx + 0x3c0], 1 */ { u32 ad = (u32)(r_ebx+0x3c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0046014a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046014d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0046014e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0046014f: ret  */ FN_RET(0x00460049); r_esp += 4; return;
L_00460150:; BB(0x00460150);
    /* 00460150: mov eax, 1 */ r_eax = 0x1u;
    /* 00460155: jmp 0x4600b1 */ f_004600b1(); return;
}

void f_0046004f(void)
{
    FN_ENTER(0x0046004f);
    /* 0046004f: add bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00460051: sub bl, cl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00460053: add eax, 0xa45a0c */ {  u32 a = r_eax; u32 b = 0xa45a0cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00460058: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0046005a: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0046005e: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00460063: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460068: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0046006c: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00460070: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00460074: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00460078: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0046007c: mov edx, 1 */ r_edx = 0x1u;
    /* 00460081: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460084: jle 0x46008c */ if ((fZ||fS!=fO)) goto L_0046008c;
L_00460086:; BB(0x00460086);
    /* 00460086: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460088: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046008a: jl 0x460086 */ if ((fS!=fO)) goto L_00460086;
L_0046008c:; BB(0x0046008c);
    /* 0046008c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046008f: test dword ptr [ebx + 0x3c0], edx */ {  u32 a = R32((u32)(r_ebx+0x3c0u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460095: jne 0x46010a */ if (!fZ) goto L_0046010a;
L_00460097:; BB(0x00460097);
    /* 00460097: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0046009d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a0: je 0x460150 */ if (fZ) goto L_00460150;
L_004600a6:; BB(0x004600a6);
    /* 004600a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a9: je 0x460150 */ if (fZ) goto L_00460150;
L_004600af:; BB(0x004600af);
    /* 004600af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004600b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600b3: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600b5:; BB(0x004600b5);
    /* 004600b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004600b7: push dword ptr [0xa45a0c] */ { u32 v = R32((u32)(0xa45a0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004600bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004600bf: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x4600c4u); f_007714cc();
    /* 004600c4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004600c7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600cc: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600ce:; BB(0x004600ce);
    /* 004600ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004600cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4600d4u); f_0068d5a8();
    /* 004600d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004600d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600d7: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600d9:; BB(0x004600d9);
    /* 004600d9: movsx edi, word ptr [ebx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2ccu));
    /* 004600e0: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004600e4: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004600e8: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004600ea: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004600ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004600f0: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 004600f5: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004600f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004600fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fe: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460105: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x460108u); call_ind(t); }
    /* 00460108: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0046010a:; BB(0x0046010a);
    /* 0046010a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046010c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x460111u); f_0078730c();
    /* 00460111: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00460117: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046011a: je 0x460143 */ if (fZ) goto L_00460143;
L_0046011c:; BB(0x0046011c);
    /* 0046011c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046011e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x460123u); f_007b6880();
    /* 00460123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00460125: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460126: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x46012bu); f_006946a8();
    /* 0046012b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00460135: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046013a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046013b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x460140u); f_00805608();
    /* 00460140: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460143:; BB(0x00460143);
    /* 00460143: add dword ptr [ebx + 0x3c0], 1 */ { u32 ad = (u32)(r_ebx+0x3c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0046014a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046014d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0046014e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0046014f: ret  */ FN_RET(0x0046004f); r_esp += 4; return;
L_00460150:; BB(0x00460150);
    /* 00460150: mov eax, 1 */ r_eax = 0x1u;
    /* 00460155: jmp 0x4600b1 */ f_004600b1(); return;
}

void f_0046005f(void)
{
    FN_ENTER(0x0046005f);
    /* 0046005f: mov bh, 0x44 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x44u) & 0xffu) << 8);
    /* 00460061: and al, 0x14 */ {  u32 a = (u8)r_eax; u32 b = 0x14u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00460063: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460068: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0046006c: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00460070: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00460074: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00460078: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0046007c: mov edx, 1 */ r_edx = 0x1u;
    /* 00460081: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460084: jle 0x46008c */ if ((fZ||fS!=fO)) goto L_0046008c;
L_00460086:; BB(0x00460086);
    /* 00460086: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460088: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046008a: jl 0x460086 */ if ((fS!=fO)) goto L_00460086;
L_0046008c:; BB(0x0046008c);
    /* 0046008c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046008f: test dword ptr [ebx + 0x3c0], edx */ {  u32 a = R32((u32)(r_ebx+0x3c0u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460095: jne 0x46010a */ if (!fZ) goto L_0046010a;
L_00460097:; BB(0x00460097);
    /* 00460097: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0046009d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a0: je 0x460150 */ if (fZ) goto L_00460150;
L_004600a6:; BB(0x004600a6);
    /* 004600a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a9: je 0x460150 */ if (fZ) goto L_00460150;
L_004600af:; BB(0x004600af);
    /* 004600af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004600b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600b3: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600b5:; BB(0x004600b5);
    /* 004600b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004600b7: push dword ptr [0xa45a0c] */ { u32 v = R32((u32)(0xa45a0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004600bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004600bf: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x4600c4u); f_007714cc();
    /* 004600c4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004600c7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600cc: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600ce:; BB(0x004600ce);
    /* 004600ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004600cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4600d4u); f_0068d5a8();
    /* 004600d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004600d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600d7: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600d9:; BB(0x004600d9);
    /* 004600d9: movsx edi, word ptr [ebx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2ccu));
    /* 004600e0: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004600e4: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004600e8: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004600ea: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004600ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004600f0: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 004600f5: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004600f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004600fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fe: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460105: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x460108u); call_ind(t); }
    /* 00460108: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0046010a:; BB(0x0046010a);
    /* 0046010a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046010c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x460111u); f_0078730c();
    /* 00460111: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00460117: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046011a: je 0x460143 */ if (fZ) goto L_00460143;
L_0046011c:; BB(0x0046011c);
    /* 0046011c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046011e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x460123u); f_007b6880();
    /* 00460123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00460125: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460126: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x46012bu); f_006946a8();
    /* 0046012b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00460135: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046013a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046013b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x460140u); f_00805608();
    /* 00460140: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460143:; BB(0x00460143);
    /* 00460143: add dword ptr [ebx + 0x3c0], 1 */ { u32 ad = (u32)(r_ebx+0x3c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0046014a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046014d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0046014e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0046014f: ret  */ FN_RET(0x0046005f); r_esp += 4; return;
L_00460150:; BB(0x00460150);
    /* 00460150: mov eax, 1 */ r_eax = 0x1u;
    /* 00460155: jmp 0x4600b1 */ f_004600b1(); return;
}

void f_00460062(void)
{
    FN_ENTER(0x00460062);
    /* 00460062: adc al, 0xd */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xdu; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00460064: add byte ptr [eax + eax], cl */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00460067: add byte ptr [ecx - 0x26e3dbbc], cl */ { u32 ad = (u32)(r_ecx+0xd91c2444u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0046006d: insb byte ptr es:[edi], dx */ UNSUP(0x0046006d, "insb byte ptr es:[edi], dx");
    /* 0046006e: and al, 0x1c */ {  u32 a = (u8)r_eax; u32 b = 0x1cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00460070: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00460074: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00460078: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0046007c: mov edx, 1 */ r_edx = 0x1u;
    /* 00460081: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460084: jle 0x46008c */ if ((fZ||fS!=fO)) goto L_0046008c;
L_00460086:; BB(0x00460086);
    /* 00460086: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460088: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046008a: jl 0x460086 */ if ((fS!=fO)) goto L_00460086;
L_0046008c:; BB(0x0046008c);
    /* 0046008c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046008f: test dword ptr [ebx + 0x3c0], edx */ {  u32 a = R32((u32)(r_ebx+0x3c0u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460095: jne 0x46010a */ if (!fZ) goto L_0046010a;
L_00460097:; BB(0x00460097);
    /* 00460097: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0046009d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a0: je 0x460150 */ if (fZ) goto L_00460150;
L_004600a6:; BB(0x004600a6);
    /* 004600a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a9: je 0x460150 */ if (fZ) goto L_00460150;
L_004600af:; BB(0x004600af);
    /* 004600af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004600b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600b3: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600b5:; BB(0x004600b5);
    /* 004600b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004600b7: push dword ptr [0xa45a0c] */ { u32 v = R32((u32)(0xa45a0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004600bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004600bf: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x4600c4u); f_007714cc();
    /* 004600c4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004600c7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600cc: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600ce:; BB(0x004600ce);
    /* 004600ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004600cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4600d4u); f_0068d5a8();
    /* 004600d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004600d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600d7: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600d9:; BB(0x004600d9);
    /* 004600d9: movsx edi, word ptr [ebx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2ccu));
    /* 004600e0: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004600e4: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004600e8: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004600ea: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004600ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004600f0: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 004600f5: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004600f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004600fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fe: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460105: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x460108u); call_ind(t); }
    /* 00460108: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0046010a:; BB(0x0046010a);
    /* 0046010a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046010c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x460111u); f_0078730c();
    /* 00460111: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00460117: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046011a: je 0x460143 */ if (fZ) goto L_00460143;
L_0046011c:; BB(0x0046011c);
    /* 0046011c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046011e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x460123u); f_007b6880();
    /* 00460123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00460125: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460126: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x46012bu); f_006946a8();
    /* 0046012b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00460135: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046013a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046013b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x460140u); f_00805608();
    /* 00460140: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460143:; BB(0x00460143);
    /* 00460143: add dword ptr [ebx + 0x3c0], 1 */ { u32 ad = (u32)(r_ebx+0x3c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0046014a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046014d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0046014e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0046014f: ret  */ FN_RET(0x00460062); r_esp += 4; return;
L_00460150:; BB(0x00460150);
    /* 00460150: mov eax, 1 */ r_eax = 0x1u;
    /* 00460155: jmp 0x4600b1 */ f_004600b1(); return;
}

void f_00460080(void)
{
    FN_ENTER(0x00460080);
    /* 00460080: add byte ptr [ebx + 0x67e01f8], al */ { u32 ad = (u32)(r_ebx+0x67e01f8u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00460086:; BB(0x00460086);
    /* 00460086: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460088: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046008a: jl 0x460086 */ if ((fS!=fO)) goto L_00460086;
L_0046008c:; BB(0x0046008c);
    /* 0046008c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046008f: test dword ptr [ebx + 0x3c0], edx */ {  u32 a = R32((u32)(r_ebx+0x3c0u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460095: jne 0x46010a */ if (!fZ) goto L_0046010a;
L_00460097:; BB(0x00460097);
    /* 00460097: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0046009d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a0: je 0x460150 */ if (fZ) goto L_00460150;
L_004600a6:; BB(0x004600a6);
    /* 004600a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600a9: je 0x460150 */ if (fZ) goto L_00460150;
L_004600af:; BB(0x004600af);
    /* 004600af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004600b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600b3: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600b5:; BB(0x004600b5);
    /* 004600b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004600b7: push dword ptr [0xa45a0c] */ { u32 v = R32((u32)(0xa45a0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004600bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004600bf: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x4600c4u); f_007714cc();
    /* 004600c4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004600c7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600cc: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600ce:; BB(0x004600ce);
    /* 004600ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004600cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4600d4u); f_0068d5a8();
    /* 004600d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004600d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600d7: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600d9:; BB(0x004600d9);
    /* 004600d9: movsx edi, word ptr [ebx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2ccu));
    /* 004600e0: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004600e4: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004600e8: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004600ea: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004600ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004600f0: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 004600f5: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004600f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004600fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fe: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460105: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x460108u); call_ind(t); }
    /* 00460108: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0046010a:; BB(0x0046010a);
    /* 0046010a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046010c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x460111u); f_0078730c();
    /* 00460111: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00460117: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046011a: je 0x460143 */ if (fZ) goto L_00460143;
L_0046011c:; BB(0x0046011c);
    /* 0046011c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046011e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x460123u); f_007b6880();
    /* 00460123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00460125: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460126: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x46012bu); f_006946a8();
    /* 0046012b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00460135: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046013a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046013b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x460140u); f_00805608();
    /* 00460140: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460143:; BB(0x00460143);
    /* 00460143: add dword ptr [ebx + 0x3c0], 1 */ { u32 ad = (u32)(r_ebx+0x3c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0046014a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046014d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0046014e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0046014f: ret  */ FN_RET(0x00460080); r_esp += 4; return;
L_00460150:; BB(0x00460150);
    /* 00460150: mov eax, 1 */ r_eax = 0x1u;
    /* 00460155: jmp 0x4600b1 */ f_004600b1(); return;
}

void f_004600bc(void)
{
    FN_ENTER(0x004600bc);
    /* 004600bc: add byte ptr [ebx + 0x1408e8cb], cl */ { u32 ad = (u32)(r_ebx+0x1408e8cbu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004600c2: xor dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 004600c4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004600c7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600cc: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600ce:; BB(0x004600ce);
    /* 004600ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004600cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4600d4u); f_0068d5a8();
    /* 004600d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004600d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600d7: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600d9:; BB(0x004600d9);
    /* 004600d9: movsx edi, word ptr [ebx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2ccu));
    /* 004600e0: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004600e4: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004600e8: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004600ea: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004600ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004600f0: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 004600f5: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004600f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004600fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fe: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460105: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x460108u); call_ind(t); }
    /* 00460108: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0046010a:; BB(0x0046010a);
    /* 0046010a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046010c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x460111u); f_0078730c();
    /* 00460111: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00460117: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046011a: je 0x460143 */ if (fZ) goto L_00460143;
L_0046011c:; BB(0x0046011c);
    /* 0046011c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046011e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x460123u); f_007b6880();
    /* 00460123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00460125: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460126: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x46012bu); f_006946a8();
    /* 0046012b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00460135: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046013a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046013b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x460140u); f_00805608();
    /* 00460140: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460143:; BB(0x00460143);
    /* 00460143: add dword ptr [ebx + 0x3c0], 1 */ { u32 ad = (u32)(r_ebx+0x3c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0046014a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046014d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0046014e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0046014f: ret  */ FN_RET(0x004600bc); r_esp += 4; return;
}

void f_004601b0(void)
{
    FN_ENTER(0x004601b0);
    /* 004601b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004601b1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004601b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004601b5: call 0x4601e8 */ r_esp -= 4; W32(r_esp, 0x4601bau); f_004601e8();
    /* 004601ba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004601bc: call 0x46032c */ r_esp -= 4; W32(r_esp, 0x4601c1u); f_0046032c();
    /* 004601c1: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 004601c4: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 004601c7: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 004601ca: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 004601cd: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 004601d0: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 004601d3: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 004601d6: add ebp, 0x394 */ {  u32 a = r_ebp; u32 b = 0x394u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004601dc: mov edx, ebp */ r_edx = r_ebp;
    /* 004601de: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4601e3u); f_0082ebac();
    /* 004601e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004601e4: ret  */ FN_RET(0x004601b0); r_esp += 4; return;
}

void f_004601e8(void)
{
    FN_ENTER(0x004601e8);
    /* 004601e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004601e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004601ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004601eb: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004601ee: mov edi, ecx */ r_edi = r_ecx;
    /* 004601f0: mov eax, dword ptr [edi + 0x3c0] */ r_eax = R32((u32)(r_edi+0x3c0u));
    /* 004601f6: test al, 0x7f */ {  u32 a = (u8)r_eax; u32 b = 0x7fu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004601f8: jne 0x4602e5 */ if (!fZ) goto L_004602e5;
L_004601fe:; BB(0x004601fe);
    /* 004601fe: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00460204: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460209: je 0x4602ec */ if (fZ) goto L_004602ec;
L_0046020f:; BB(0x0046020f);
    /* 0046020f: mov eax, dword ptr [edi + 0x380] */ r_eax = R32((u32)(r_edi+0x380u));
    /* 00460215: mov dword ptr [edi + 0x390], 0xffff */ W32((u32)(r_edi+0x390u), 0xffffu);
    /* 0046021f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460221: je 0x4602e5 */ if (fZ) goto L_004602e5;
L_00460227:; BB(0x00460227);
    /* 00460227: mov ebp, dword ptr [0xa44d64] */ r_ebp = R32((u32)(0xa44d64u));
    /* 0046022d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046022f: je 0x4602e5 */ if (fZ) goto L_004602e5;
L_00460235:; BB(0x00460235);
    /* 00460235: movzx eax, byte ptr [0xa459a4] */ r_eax = (u32)R8((u32)(0xa459a4u));
    /* 0046023c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0046023e: jne 0x46025c */ if (!fZ) goto L_0046025c;
L_00460240:; BB(0x00460240);
    /* 00460240: fld dword ptr [0xa45a1c] */ FPUSH(R_F32((u32)(0xa45a1cu)));
    /* 00460246: fadd dword ptr [0x9005cc] */ ST(0) = ST(0) + R_F32((u32)(0x9005ccu));
    /* 0046024c: fstp dword ptr [0xa459a8] */ W_F32((u32)(0xa459a8u), ST(0)); FPOP();
    /* 00460252: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460257: mov byte ptr [0xa459a4], al */ W8((u32)(0xa459a4u), (u8)r_eax);
L_0046025c:; BB(0x0046025c);
    /* 0046025c: mov ecx, edi */ r_ecx = r_edi;
    /* 0046025e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x460263u); f_007751b0();
    /* 00460263: fld dword ptr [0x9005d8] */ FPUSH(R_F32((u32)(0x9005d8u)));
    /* 00460269: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0046026b: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0046026e: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00460272: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460277: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0046027b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0046027f: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00460283: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00460286: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00460289: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0046028d: mov dword ptr [edi + 0x3cc], eax */ W32((u32)(r_edi+0x3ccu), r_eax);
    /* 00460293: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00460296: mov dword ptr [edi + 0x3d0], edx */ W32((u32)(r_edi+0x3d0u), r_edx);
    /* 0046029c: mov ebp, dword ptr [ebp + 0x40] */ r_ebp = R32((u32)(r_ebp+0x40u));
    /* 0046029f: mov dword ptr [edi + 0x3d0], 0 */ W32((u32)(r_edi+0x3d0u), 0x0u);
    /* 004602a9: mov dword ptr [edi + 0x3d4], ebp */ W32((u32)(r_edi+0x3d4u), r_ebp);
    /* 004602af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004602b1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4602b6u); f_0082dcbc();
    /* 004602b6: fld dword ptr [0xa459a8] */ FPUSH(R_F32((u32)(0xa459a8u)));
    /* 004602bc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004602be: fadd dword ptr [edi + 0x3cc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3ccu));
    /* 004602c4: fstp dword ptr [edi + 0x3cc] */ W_F32((u32)(r_edi+0x3ccu), ST(0)); FPOP();
    /* 004602ca: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004602cc: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4602d1u); f_0082ddd8();
    /* 004602d1: fld dword ptr [0xa459a8] */ FPUSH(R_F32((u32)(0xa459a8u)));
    /* 004602d7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004602d9: fadd dword ptr [edi + 0x3d4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3d4u));
    /* 004602df: fstp dword ptr [edi + 0x3d4] */ W_F32((u32)(r_edi+0x3d4u), ST(0)); FPOP();
L_004602e5:; BB(0x004602e5);
    /* 004602e5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004602e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004602e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004602ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004602eb: ret  */ FN_RET(0x004601e8); r_esp += 4; return;
L_004602ec:; BB(0x004602ec);
    /* 004602ec: movzx eax, byte ptr [0xa459a4] */ r_eax = (u32)R8((u32)(0xa459a4u));
    /* 004602f3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004602f5: jne 0x46030b */ if (!fZ) goto L_0046030b;
L_004602f7:; BB(0x004602f7);
    /* 004602f7: mov dword ptr [0xa459ac], 0x438fc000 */ W32((u32)(0xa459acu), 0x438fc000u);
    /* 00460301: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460306: mov byte ptr [0xa459a4], al */ W8((u32)(0xa459a4u), (u8)r_eax);
L_0046030b:; BB(0x0046030b);
    /* 0046030b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046030d: push dword ptr [0xa459ac] */ { u32 v = R32((u32)(0xa459acu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460313: mov ecx, edi */ r_ecx = r_edi;
    /* 00460315: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x46031au); f_007714cc();
    /* 0046031a: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0046031d: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 00460323: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00460326: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00460327: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460328: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00460329: ret  */ FN_RET(0x004601e8); r_esp += 4; return;
}

void f_0046032c(void)
{
    FN_ENTER(0x0046032c);
    /* 0046032c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0046032d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0046032e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0046032f: mov esi, ecx */ r_esi = r_ecx;
    /* 00460331: movzx edx, byte ptr [0xa459b0] */ r_edx = (u32)R8((u32)(0xa459b0u));
    /* 00460338: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0046033b: jne 0x460358 */ if (!fZ) goto L_00460358;
L_0046033d:; BB(0x0046033d);
    /* 0046033d: fld dword ptr [0x9005c8] */ FPUSH(R_F32((u32)(0x9005c8u)));
    /* 00460343: fmul dword ptr [0xa45a18] */ ST(0) = ST(0) * R_F32((u32)(0xa45a18u));
    /* 00460349: fstp dword ptr [0xa459b4] */ W_F32((u32)(0xa459b4u), ST(0)); FPOP();
    /* 0046034f: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00460352: mov byte ptr [0xa459b0], dl */ W8((u32)(0xa459b0u), (u8)r_edx);
L_00460358:; BB(0x00460358);
    /* 00460358: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0046035e: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460363: je 0x460396 */ if (fZ) goto L_00460396;
L_00460365:; BB(0x00460365);
    /* 00460365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460366: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x46036bu); f_0068d5a8();
    /* 0046036b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0046036c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046036e: je 0x4604b0 */ if (fZ) goto L_004604b0;
L_00460374:; BB(0x00460374);
    /* 00460374: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00460377: mov dword ptr [esi + 0x3cc], edx */ W32((u32)(r_esi+0x3ccu), r_edx);
    /* 0046037d: movzx edx, byte ptr [0xa459b0] */ r_edx = (u32)R8((u32)(0xa459b0u));
    /* 00460384: mov edi, dword ptr [eax + 0x3c] */ r_edi = R32((u32)(r_eax+0x3cu));
    /* 00460387: mov dword ptr [esi + 0x3d0], edi */ W32((u32)(r_esi+0x3d0u), r_edi);
    /* 0046038d: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00460390: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
L_00460396:; BB(0x00460396);
    /* 00460396: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00460399: jne 0x4603b5 */ if (!fZ) goto L_004603b5;
L_0046039b:; BB(0x0046039b);
    /* 0046039b: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 004603a1: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004603a3: fstp dword ptr [0xa459b8] */ W_F32((u32)(0xa459b8u), ST(0)); FPOP();
    /* 004603a9: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004603af: mov byte ptr [0xa459b0], dl */ W8((u32)(0xa459b0u), (u8)r_edx);
L_004603b5:; BB(0x004603b5);
    /* 004603b5: movzx edi, word ptr [esi + 0x1c] */ r_edi = (u32)R16((u32)(r_esi+0x1cu));
    /* 004603b9: shl edi, 0xd */ { u32 c = (13u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004603bc: mov ecx, edi */ r_ecx = r_edi;
    /* 004603be: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4603c3u); f_0082dcbc();
    /* 004603c3: fld dword ptr [0xa459b8] */ FPUSH(R_F32((u32)(0xa459b8u)));
    /* 004603c9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004603cb: fadd dword ptr [esi + 0x3cc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3ccu));
    /* 004603d1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004603d4: mov ecx, edi */ r_ecx = r_edi;
    /* 004603d6: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4603dbu); f_0082ddd8();
    /* 004603db: fld dword ptr [0xa459b8] */ FPUSH(R_F32((u32)(0xa459b8u)));
    /* 004603e1: fld dword ptr [0xa459b4] */ FPUSH(R_F32((u32)(0xa459b4u)));
    /* 004603e7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004603e9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004603eb: fadd dword ptr [esi + 0x3d4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3d4u));
    /* 004603f1: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004603f4: fcomp dword ptr [esi + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x38u))); FPOP();
    /* 004603f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004603f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004603fa: mov dword ptr [esi + 0x398], 0 */ W32((u32)(r_esi+0x398u), 0x0u);
    /* 00460404: jbe 0x460416 */ if ((fC||fZ)) goto L_00460416;
L_00460406:; BB(0x00460406);
    /* 00460406: fld dword ptr [esi + 0x394] */ FPUSH(R_F32((u32)(r_esi+0x394u)));
    /* 0046040c: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0046040e: fstp dword ptr [esi + 0x394] */ W_F32((u32)(r_esi+0x394u), ST(0)); FPOP();
    /* 00460414: jmp 0x460424 */ goto L_00460424;
L_00460416:; BB(0x00460416);
    /* 00460416: fld dword ptr [esi + 0x394] */ FPUSH(R_F32((u32)(r_esi+0x394u)));
    /* 0046041c: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0046041e: fstp dword ptr [esi + 0x394] */ W_F32((u32)(r_esi+0x394u), ST(0)); FPOP();
L_00460424:; BB(0x00460424);
    /* 00460424: fcomp dword ptr [esi + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x40u))); FPOP();
    /* 00460427: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460429: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0046042a: jbe 0x46043c */ if ((fC||fZ)) goto L_0046043c;
L_0046042c:; BB(0x0046042c);
    /* 0046042c: fld dword ptr [esi + 0x39c] */ FPUSH(R_F32((u32)(r_esi+0x39cu)));
    /* 00460432: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00460434: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
    /* 0046043a: jmp 0x46044a */ goto L_0046044a;
L_0046043c:; BB(0x0046043c);
    /* 0046043c: fld dword ptr [esi + 0x39c] */ FPUSH(R_F32((u32)(r_esi+0x39cu)));
    /* 00460442: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00460444: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
L_0046044a:; BB(0x0046044a);
    /* 0046044a: mov ecx, esi */ r_ecx = r_esi;
    /* 0046044c: call 0x4604bc */ r_esp -= 4; W32(r_esp, 0x460451u); f_004604bc();
    /* 00460451: lea edi, [esi + 0x394] */ r_edi = (u32)(r_esi+0x394u);
    /* 00460457: mov ecx, edi */ r_ecx = r_edi;
    /* 00460459: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x46045eu); f_0083173c();
    /* 0046045e: fcom dword ptr [esi + 0x3a8] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x3a8u))); 
    /* 00460464: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460466: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460467: ja 0x460473 */ if ((!fC&&!fZ)) goto L_00460473;
L_00460469:; BB(0x00460469);
    /* 00460469: fstp dword ptr [esi + 0x3a0] */ W_F32((u32)(r_esi+0x3a0u), ST(0)); FPOP();
    /* 0046046f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00460470: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00460471: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00460472: ret  */ FN_RET(0x0046032c); r_esp += 4; return;
L_00460473:; BB(0x00460473);
    /* 00460473: fld dword ptr [0xa459b4] */ FPUSH(R_F32((u32)(0xa459b4u)));
    /* 00460479: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0046047b: fstp dword ptr [esi + 0x3a0] */ W_F32((u32)(r_esi+0x3a0u), ST(0)); FPOP();
    /* 00460481: mov ecx, edi */ r_ecx = r_edi;
    /* 00460483: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x460488u); f_0082df08();
    /* 00460488: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0046048a: fld dword ptr [esi + 0x3a0] */ FPUSH(R_F32((u32)(r_esi+0x3a0u)));
    /* 00460490: fld dword ptr [esi + 0x394] */ FPUSH(R_F32((u32)(r_esi+0x394u)));
    /* 00460496: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00460498: fld dword ptr [esi + 0x39c] */ FPUSH(R_F32((u32)(r_esi+0x39cu)));
    /* 0046049e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004604a0: fstp dword ptr [esi + 0x394] */ W_F32((u32)(r_esi+0x394u), ST(0)); FPOP();
    /* 004604a6: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
    /* 004604ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004604ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004604ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004604af: ret  */ FN_RET(0x0046032c); r_esp += 4; return;
L_004604b0:; BB(0x004604b0);
    /* 004604b0: movzx edx, byte ptr [0xa459b0] */ r_edx = (u32)R8((u32)(0xa459b0u));
    /* 004604b7: jmp 0x460396 */ f_00460396(); return;
}

void f_004604bc(void) /* sub_4604BC */
{
    FN_ENTER(0x004604bc);
    /* 004604bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004604bd: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004604c0: mov esi, ecx */ r_esi = r_ecx;
    /* 004604c2: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 004604c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004604ca: je 0x46058b */ if (fZ) goto L_0046058b;
L_004604d0:; BB(0x004604d0);
    /* 004604d0: mov edx, dword ptr [0xa44d64] */ r_edx = R32((u32)(0xa44d64u));
    /* 004604d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004604d8: je 0x46058b */ if (fZ) goto L_0046058b;
L_004604de:; BB(0x004604de);
    /* 004604de: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004604e2: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 004604e5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004604e8: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004604eb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004604ef: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004604f2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004604f6: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 004604f9: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004604fd: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00460500: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00460503: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00460507: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0046050a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0046050e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x460513u); f_0082f9c4();
    /* 00460513: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0046051b: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0046051f: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x460524u); f_0083173c();
    /* 00460524: fld dword ptr [0xa45a1c] */ FPUSH(R_F32((u32)(0xa45a1cu)));
    /* 0046052a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0046052c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046052e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0046052f: jbe 0x460587 */ if ((fC||fZ)) goto L_00460587;
L_00460531:; BB(0x00460531);
    /* 00460531: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00460533: fcomp dword ptr [0x9005bc] */ fx_compare(ST(0), R_F32((u32)(0x9005bcu))); FPOP();
    /* 00460539: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046053b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0046053c: ja 0x460550 */ if ((!fC&&!fZ)) goto L_00460550;
L_0046053e:; BB(0x0046053e);
    /* 0046053e: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 00460546: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0046054e: jmp 0x460563 */ goto L_00460563;
L_00460550:; BB(0x00460550);
    /* 00460550: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00460552: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00460556: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x46055bu); f_0082df08();
    /* 0046055b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0046055d: fld dword ptr [0xa45a1c] */ FPUSH(R_F32((u32)(0xa45a1cu)));
L_00460563:; BB(0x00460563);
    /* 00460563: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00460567: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00460569: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0046056b: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 0046056f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00460571: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 00460574: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00460576: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0046057a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0046057c: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 0046057f: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 00460582: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00460585: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00460586: ret  */ FN_RET(0x004604bc); r_esp += 4; return;
L_00460587:; BB(0x00460587);
    /* 00460587: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00460589: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0046058b:; BB(0x0046058b);
    /* 0046058b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046058e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0046058f: ret  */ FN_RET(0x004604bc); r_esp += 4; return;
}

void f_00460502(void)
{
    FN_ENTER(0x00460502);
    /* 00460502: cmp al, 0x89 */ {  u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a - b) & 0xffu;   }
    /* 00460504: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460505: and al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00460507: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0046050a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0046050e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x460513u); f_0082f9c4();
    /* 00460513: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0046051b: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0046051f: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x460524u); f_0083173c();
    /* 00460524: fld dword ptr [0xa45a1c] */ FPUSH(R_F32((u32)(0xa45a1cu)));
    /* 0046052a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0046052c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046052e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0046052f: jbe 0x460587 */ if ((fC||fZ)) goto L_00460587;
L_00460531:; BB(0x00460531);
    /* 00460531: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00460533: fcomp dword ptr [0x9005bc] */ fx_compare(ST(0), R_F32((u32)(0x9005bcu))); FPOP();
    /* 00460539: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046053b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0046053c: ja 0x460550 */ if ((!fC&&!fZ)) goto L_00460550;
L_0046053e:; BB(0x0046053e);
    /* 0046053e: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 00460546: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0046054e: jmp 0x460563 */ goto L_00460563;
L_00460550:; BB(0x00460550);
    /* 00460550: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00460552: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00460556: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x46055bu); f_0082df08();
    /* 0046055b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0046055d: fld dword ptr [0xa45a1c] */ FPUSH(R_F32((u32)(0xa45a1cu)));
L_00460563:; BB(0x00460563);
    /* 00460563: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00460567: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00460569: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0046056b: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 0046056f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00460571: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 00460574: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00460576: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0046057a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0046057c: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 0046057f: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 00460582: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00460585: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00460586: ret  */ FN_RET(0x00460502); r_esp += 4; return;
L_00460587:; BB(0x00460587);
    /* 00460587: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00460589: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0046058b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046058e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0046058f: ret  */ FN_RET(0x00460502); r_esp += 4; return;
}

void f_00460590(void)
{
    FN_ENTER(0x00460590);
    /* 00460590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460591: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00460593: movzx eax, byte ptr [0xa459bc] */ r_eax = (u32)R8((u32)(0xa459bcu));
    /* 0046059a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0046059c: jne 0x4605ba */ if (!fZ) goto L_004605ba;
L_0046059e:; BB(0x0046059e);
    /* 0046059e: fld dword ptr [0x9005b4] */ FPUSH(R_F32((u32)(0x9005b4u)));
    /* 004605a4: mov dword ptr [0xa459c0], 0xbeaaaaab */ W32((u32)(0xa459c0u), 0xbeaaaaabu);
    /* 004605ae: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004605b3: mov byte ptr [0xa459bc], al */ W8((u32)(0xa459bcu), (u8)r_eax);
    /* 004605b8: jmp 0x4605c0 */ goto L_004605c0;
L_004605ba:; BB(0x004605ba);
    /* 004605ba: fld dword ptr [0xa459c0] */ FPUSH(R_F32((u32)(0xa459c0u)));
L_004605c0:; BB(0x004605c0);
    /* 004605c0: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 004605c2: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 004605c5: fcom dword ptr [0x9005b0] */ fx_compare(ST(0), R_F32((u32)(0x9005b0u))); 
    /* 004605cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004605cd: fst dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0));
    /* 004605d0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004605d1: jae 0x4605f6 */ if (!fC) goto L_004605f6;
L_004605d3:; BB(0x004605d3);
    /* 004605d3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004605d5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004605d7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004605d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004605db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004605dc: jb 0x4605f8 */ if (fC) goto L_004605f8;
L_004605de:; BB(0x004605de);
    /* 004605de: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004605e0: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 004605e5: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 004605e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004605e9: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x4605eeu); f_0050b510();
    /* 004605ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004605f1: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004605f4: jmp 0x4605f8 */ goto L_004605f8;
L_004605f6:; BB(0x004605f6);
    /* 004605f6: fstp st(1) */ ST(1) = ST(0); FPOP();
L_004605f8:; BB(0x004605f8);
    /* 004605f8: fcomp dword ptr [0x9005ac] */ fx_compare(ST(0), R_F32((u32)(0x9005acu))); FPOP();
    /* 004605fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460600: mov edx, dword ptr [ebp + 0x5c] */ r_edx = R32((u32)(r_ebp+0x5cu));
    /* 00460603: add edx, 0x111 */ {  u32 a = r_edx; u32 b = 0x111u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00460609: mov dword ptr [ebp + 0x5c], edx */ W32((u32)(r_ebp+0x5cu), r_edx);
    /* 0046060c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0046060d: jae 0x46061e */ if (!fC) goto L_0046061e;
L_0046060f:; BB(0x0046060f);
    /* 0046060f: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00460613: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00460618: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0046061c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046061d: ret  */ FN_RET(0x00460590); r_esp += 4; return;
L_0046061e:; BB(0x0046061e);
    /* 0046061e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046061f: ret  */ FN_RET(0x00460590); r_esp += 4; return;
}

void f_00460620(void)
{
    FN_ENTER(0x00460620);
    /* 00460620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460621: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00460623: movzx eax, byte ptr [0xa459c4] */ r_eax = (u32)R8((u32)(0xa459c4u));
    /* 0046062a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0046062c: jne 0x460642 */ if (!fZ) goto L_00460642;
L_0046062e:; BB(0x0046062e);
    /* 0046062e: mov dword ptr [0xa459c8], 0xbc75c290 */ W32((u32)(0xa459c8u), 0xbc75c290u);
    /* 00460638: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0046063d: mov byte ptr [0xa459c4], al */ W8((u32)(0xa459c4u), (u8)r_eax);
L_00460642:; BB(0x00460642);
    /* 00460642: fld dword ptr [0xa459c8] */ FPUSH(R_F32((u32)(0xa459c8u)));
    /* 00460648: fadd dword ptr [ebp + 0x398] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x398u));
    /* 0046064e: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00460651: fstp dword ptr [ebp + 0x398] */ W_F32((u32)(r_ebp+0x398u), ST(0)); FPOP();
    /* 00460657: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 0046065a: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 0046065d: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
    /* 00460660: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00460663: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 00460666: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00460669: lea edx, [ebp + 0x394] */ r_edx = (u32)(r_ebp+0x394u);
    /* 0046066f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x460674u); f_0082ebac();
    /* 00460674: movzx eax, byte ptr [0xa459c4] */ r_eax = (u32)R8((u32)(0xa459c4u));
    /* 0046067b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 0046067d: jne 0x46069b */ if (!fZ) goto L_0046069b;
L_0046067f:; BB(0x0046067f);
    /* 0046067f: fld dword ptr [0x9005a4] */ FPUSH(R_F32((u32)(0x9005a4u)));
    /* 00460685: mov dword ptr [0xa459cc], 0x40c00000 */ W32((u32)(0xa459ccu), 0x40c00000u);
    /* 0046068f: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 00460694: mov byte ptr [0xa459c4], al */ W8((u32)(0xa459c4u), (u8)r_eax);
    /* 00460699: jmp 0x4606a1 */ goto L_004606a1;
L_0046069b:; BB(0x0046069b);
    /* 0046069b: fld dword ptr [0xa459cc] */ FPUSH(R_F32((u32)(0xa459ccu)));
L_004606a1:; BB(0x004606a1);
    /* 004606a1: fcom dword ptr [ebp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3cu))); 
    /* 004606a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004606a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004606a7: jbe 0x4606c2 */ if ((fC||fZ)) goto L_004606c2;
L_004606a9:; BB(0x004606a9);
    /* 004606a9: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004606ac: mov dword ptr [ebp + 0x398], 0 */ W32((u32)(r_ebp+0x398u), 0x0u);
    /* 004606b6: mov dword ptr [ebp + 0x37c], 2 */ W32((u32)(r_ebp+0x37cu), 0x2u);
    /* 004606c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004606c1: ret  */ FN_RET(0x00460620); r_esp += 4; return;
L_004606c2:; BB(0x004606c2);
    /* 004606c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004606c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004606c5: ret  */ FN_RET(0x00460620); r_esp += 4; return;
}

void f_004606c8(void) /* sub_4606C8 */
{
    FN_ENTER(0x004606c8);
    /* 004606c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004606c9: mov ebp, esp */ r_ebp = r_esp;
    /* 004606cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004606cd: push 0x8cf5de */ { u32 v = 0x8cf5deu; r_esp -= 4; W32(r_esp, v); }
    /* 004606d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004606d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004606d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004606e0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004606e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004606e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004606e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004606ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004606ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004606f1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004606f4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004606f7: push 0x3d8 */ { u32 v = 0x3d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004606fc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x460701u); f_005caba4();
    /* 00460701: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00460702: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00460705: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460707: je 0x460774 */ if (fZ) goto L_00460774;
L_00460709:; BB(0x00460709);
    /* 00460709: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00460710: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00460717: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00460719: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x46071eu); f_005caba4();
    /* 0046071e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0046071f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00460722: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460724: je 0x460770 */ if (fZ) goto L_00460770;
L_00460726:; BB(0x00460726);
    /* 00460726: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0046072d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00460734: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0046073a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046073d: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x460742u); f_00787a4c();
    /* 00460742: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460745: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0046074c:; BB(0x0046074c);
    /* 0046074c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0046074f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00460752: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460753: call 0x460778 */ r_esp -= 4; W32(r_esp, 0x460758u); f_00460778();
    /* 00460758: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046075b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00460762:; BB(0x00460762);
    /* 00460762: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00460765: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0046076c: mov esp, ebp */ r_esp = r_ebp;
    /* 0046076e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046076f: ret  */ FN_RET(0x004606c8); r_esp += 4; return;
L_00460770:; BB(0x00460770);
    /* 00460770: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00460772: jmp 0x46074c */ goto L_0046074c;
L_00460774:; BB(0x00460774);
    /* 00460774: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00460776: jmp 0x460762 */ goto L_00460762;
}

void f_00460774(void)
{
    FN_ENTER(0x00460774);
    goto L_00460774;
L_00460762:; BB(0x00460762);
    /* 00460762: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00460765: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0046076c: mov esp, ebp */ r_esp = r_ebp;
    /* 0046076e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046076f: ret  */ FN_RET(0x00460774); r_esp += 4; return;
L_00460774:; BB(0x00460774);
    /* 00460774: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00460776: jmp 0x460762 */ goto L_00460762;
}

void f_00460778(void) /* sub_460778 */
{
    FN_ENTER(0x00460778);
    /* 00460778: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460779: mov ebp, esp */ r_ebp = r_esp;
    /* 0046077b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046077d: push 0x8cf5f8 */ { u32 v = 0x8cf5f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00460782: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00460788: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460789: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00460790: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460793: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00460796: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00460799: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0046079c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0046079f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004607a2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004607a5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004607a8: call 0x45fbd4 */ r_esp -= 4; W32(r_esp, 0x4607adu); f_0045fbd4();
    /* 004607ad: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004607b4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004607b7: mov dword ptr [ecx], 0xaf7ec0 */ W32((u32)(r_ecx), 0xaf7ec0u);
    /* 004607bd: mov eax, dword ptr [0x9a67c0] */ r_eax = R32((u32)(0x9a67c0u));
    /* 004607c2: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004607c5: movzx eax, byte ptr [0xa459d0] */ r_eax = (u32)R8((u32)(0xa459d0u));
    /* 004607cc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004607ce: jne 0x4607e2 */ if (!fZ) goto L_004607e2;
L_004607d0:; BB(0x004607d0);
    /* 004607d0: mov dword ptr [0xa459d4], 0x3fd55555 */ W32((u32)(0xa459d4u), 0x3fd55555u);
    /* 004607da: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004607dd: mov byte ptr [0xa459d0], al */ W8((u32)(0xa459d0u), (u8)r_eax);
L_004607e2:; BB(0x004607e2);
    /* 004607e2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004607e4: jne 0x460802 */ if (!fZ) goto L_00460802;
L_004607e6:; BB(0x004607e6);
    /* 004607e6: fld dword ptr [0x900598] */ FPUSH(R_F32((u32)(0x900598u)));
    /* 004607ec: fmul dword ptr [0xa459d4] */ ST(0) = ST(0) * R_F32((u32)(0xa459d4u));
    /* 004607f2: fstp dword ptr [0xa459d8] */ W_F32((u32)(0xa459d8u), ST(0)); FPOP();
    /* 004607f8: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004607fd: mov byte ptr [0xa459d0], al */ W8((u32)(0xa459d0u), (u8)r_eax);
L_00460802:; BB(0x00460802);
    /* 00460802: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 00460805: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 00460808: mov dword ptr [ecx + 0x398], 0 */ W32((u32)(r_ecx+0x398u), 0x0u);
    /* 00460812: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00460814: fchs  */ ST(0) = -ST(0);
    /* 00460816: fstp dword ptr [ecx + 0x394] */ W_F32((u32)(r_ecx+0x394u), ST(0)); FPOP();
    /* 0046081c: fchs  */ ST(0) = -ST(0);
    /* 0046081e: fstp dword ptr [ecx + 0x39c] */ W_F32((u32)(r_ecx+0x39cu), ST(0)); FPOP();
    /* 00460824: add ecx, 0x394 */ {  u32 a = r_ecx; u32 b = 0x394u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046082a: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x46082fu); f_0083173c();
    /* 0046082f: fcomp dword ptr [0x900590] */ fx_compare(ST(0), R_F32((u32)(0x900590u))); FPOP();
    /* 00460835: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460837: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460838: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046083b: jae 0x460851 */ if (!fC) goto L_00460851;
L_0046083d:; BB(0x0046083d);
    /* 0046083d: mov dword ptr [ecx + 0x394], 0x3f800000 */ W32((u32)(r_ecx+0x394u), 0x3f800000u);
    /* 00460847: mov dword ptr [ecx + 0x39c], 0 */ W32((u32)(r_ecx+0x39cu), 0x0u);
L_00460851:; BB(0x00460851);
    /* 00460851: add ecx, 0x394 */ {  u32 a = r_ecx; u32 b = 0x394u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00460857: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x46085cu); f_0082df08();
    /* 0046085c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0046085e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460861: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x460866u); f_007751b0();
    /* 00460866: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460869: fld dword ptr [0xa459d8] */ FPUSH(R_F32((u32)(0xa459d8u)));
    /* 0046086f: fld dword ptr [edx + 0x394] */ FPUSH(R_F32((u32)(r_edx+0x394u)));
    /* 00460875: fld dword ptr [edx + 0x39c] */ FPUSH(R_F32((u32)(r_edx+0x39cu)));
    /* 0046087b: mov eax, dword ptr [edx + 0x38c] */ r_eax = R32((u32)(r_edx+0x38cu));
    /* 00460881: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00460883: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00460885: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00460887: fadd dword ptr [0xa459d4] */ ST(0) = ST(0) + R_F32((u32)(0xa459d4u));
    /* 0046088d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0046088f: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00460891: fstp dword ptr [edx + 0x3a0] */ W_F32((u32)(r_edx+0x3a0u), ST(0)); FPOP();
    /* 00460897: fstp dword ptr [edx + 0x394] */ W_F32((u32)(r_edx+0x394u), ST(0)); FPOP();
    /* 0046089d: fstp dword ptr [edx + 0x39c] */ W_F32((u32)(r_edx+0x39cu), ST(0)); FPOP();
    /* 004608a3: mov dword ptr [edx + 0x390], 0xffff */ W32((u32)(r_edx+0x390u), 0xffffu);
    /* 004608ad: mov dword ptr [edx + 0x3cc], 0 */ W32((u32)(r_edx+0x3ccu), 0x0u);
    /* 004608b7: mov dword ptr [edx + 0x3d0], 0 */ W32((u32)(r_edx+0x3d0u), 0x0u);
    /* 004608c1: mov dword ptr [edx + 0x3d4], 0 */ W32((u32)(r_edx+0x3d4u), 0x0u);
    /* 004608cb: mov dword ptr [edx + 0x37c], 4 */ W32((u32)(r_edx+0x37cu), 0x4u);
    /* 004608d5: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 004608d8: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004608db: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 004608de: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004608e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004608e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004608eb: mov esp, ebp */ r_esp = r_ebp;
    /* 004608ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004608ee: ret 8 */ FN_RET(0x00460778); r_esp += 12; return;
}

void f_004608f4(void) /* sub_4608F4 */
{
    FN_ENTER(0x004608f4);
    /* 004608f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004608f5: mov edi, ecx */ r_edi = r_ecx;
    /* 004608f7: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 004608fd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00460900: je 0x460910 */ if (fZ) goto L_00460910;
L_00460902:; BB(0x00460902);
    /* 00460902: mov ecx, edi */ r_ecx = r_edi;
    /* 00460904: call 0x787348 */ r_esp -= 4; W32(r_esp, 0x460909u); f_00787348();
    /* 00460909: mov ecx, edi */ r_ecx = r_edi;
    /* 0046090b: call 0x460914 */ r_esp -= 4; W32(r_esp, 0x460910u); f_00460914();
L_00460910:; BB(0x00460910);
    /* 00460910: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00460911: ret  */ FN_RET(0x004608f4); r_esp += 4; return;
}

void f_00460900(void)
{
    FN_ENTER(0x00460900);
    /* 00460900: je 0x460910 */ if (fZ) goto L_00460910;
L_00460902:; BB(0x00460902);
    /* 00460902: mov ecx, edi */ r_ecx = r_edi;
    /* 00460904: call 0x787348 */ r_esp -= 4; W32(r_esp, 0x460909u); f_00787348();
    /* 00460909: mov ecx, edi */ r_ecx = r_edi;
    /* 0046090b: call 0x460914 */ r_esp -= 4; W32(r_esp, 0x460910u); f_00460914();
L_00460910:; BB(0x00460910);
    /* 00460910: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00460911: ret  */ FN_RET(0x00460900); r_esp += 4; return;
}

void f_00460914(void) /* sub_460914 */
{
    FN_ENTER(0x00460914);
    /* 00460914: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 0046091a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0046091d: je 0x460937 */ if (fZ) goto L_00460937;
L_0046091f:; BB(0x0046091f);
    /* 0046091f: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 00460925: add dword ptr [eax + 0x394], 1 */ { u32 ad = (u32)(r_eax+0x394u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046092c: mov dword ptr [ecx + 0x37c], 3 */ W32((u32)(r_ecx+0x37cu), 0x3u);
    /* 00460936: ret  */ FN_RET(0x00460914); r_esp += 4; return;
L_00460937:; BB(0x00460937);
    /* 00460937: ret  */ FN_RET(0x00460914); r_esp += 4; return;
}

void f_00460938(void) /* sub_460938 */
{
    FN_ENTER(0x00460938);
    /* 00460938: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460939: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0046093a: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046093d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0046093f: mov ebp, dword ptr [ebx + 0x37c] */ r_ebp = R32((u32)(r_ebx+0x37cu));
    /* 00460945: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460948: je 0x460968 */ if (fZ) goto L_00460968;
L_0046094a:; BB(0x0046094a);
    /* 0046094a: mov eax, dword ptr [ebx + 0x380] */ r_eax = R32((u32)(r_ebx+0x380u));
    /* 00460950: mov edx, dword ptr [eax + 0x384] */ r_edx = R32((u32)(r_eax+0x384u));
    /* 00460956: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460959: je 0x460968 */ if (fZ) goto L_00460968;
L_0046095b:; BB(0x0046095b);
    /* 0046095b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046095d: call 0x460914 */ r_esp -= 4; W32(r_esp, 0x460962u); f_00460914();
L_00460962:; BB(0x00460962);
    /* 00460962: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00460965: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00460966: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460967: ret  */ FN_RET(0x00460938); r_esp += 4; return;
L_00460968:; BB(0x00460968);
    /* 00460968: mov eax, dword ptr [ebp*4 + 0x9a67a8] */ r_eax = R32((u32)(r_ebp*4+0x9a67a8u));
    /* 0046096f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460971: je 0x460962 */ if (fZ) goto L_00460962;
L_00460973:; BB(0x00460973);
    /* 00460973: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00460975: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x460977u); call_ind(t); }
    /* 00460977: mov ebp, dword ptr [ebx + 0x37c] */ r_ebp = R32((u32)(r_ebx+0x37cu));
    /* 0046097d: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460980: je 0x460b34 */ if (fZ) goto L_00460b34;
L_00460986:; BB(0x00460986);
    /* 00460986: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
L_00460989:; BB(0x00460989);
    /* 00460989: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0046098c: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0046098f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00460992: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00460996: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460999: je 0x4609a7 */ if (fZ) goto L_004609a7;
L_0046099b:; BB(0x0046099b);
    /* 0046099b: fadd dword ptr [0x900528] */ ST(0) = ST(0) + R_F32((u32)(0x900528u));
    /* 004609a1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004609a5: jmp 0x4609b1 */ goto L_004609b1;
L_004609a7:; BB(0x004609a7);
    /* 004609a7: fadd dword ptr [0x90052c] */ ST(0) = ST(0) + R_F32((u32)(0x90052cu));
    /* 004609ad: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_004609b1:; BB(0x004609b1);
    /* 004609b1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004609b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004609b5: mov ecx, dword ptr [ebx + 0x3bc] */ r_ecx = R32((u32)(r_ebx+0x3bcu));
    /* 004609bb: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4609c0u); f_00508db8();
    /* 004609c0: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 004609c6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004609c9: je 0x4609d8 */ if (fZ) goto L_004609d8;
L_004609cb:; BB(0x004609cb);
    /* 004609cb: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 004609ce: add eax, 0x1111 */ {  u32 a = r_eax; u32 b = 0x1111u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004609d3: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 004609d6: jmp 0x4609db */ goto L_004609db;
L_004609d8:; BB(0x004609d8);
    /* 004609d8: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
L_004609db:; BB(0x004609db);
    /* 004609db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004609dc: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004609df: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 004609e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004609e3: call 0x461478 */ r_esp -= 4; W32(r_esp, 0x4609e8u); f_00461478();
    /* 004609e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004609eb: movzx eax, byte ptr [0xa45a04] */ r_eax = (u32)R8((u32)(0xa45a04u));
    /* 004609f2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004609f4: jne 0x460a12 */ if (!fZ) goto L_00460a12;
L_004609f6:; BB(0x004609f6);
    /* 004609f6: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 004609fc: fdiv dword ptr [0x900584] */ ST(0) = ST(0) / R_F32((u32)(0x900584u));
    /* 00460a02: fstp dword ptr [0xa45a08] */ W_F32((u32)(0xa45a08u), ST(0)); FPOP();
    /* 00460a08: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460a0d: mov byte ptr [0xa45a04], al */ W8((u32)(0xa45a04u), (u8)r_eax);
L_00460a12:; BB(0x00460a12);
    /* 00460a12: fld dword ptr [ebx + 0x3a0] */ FPUSH(R_F32((u32)(r_ebx+0x3a0u)));
    /* 00460a18: fcom dword ptr [0xa45a08] */ fx_compare(ST(0), R_F32((u32)(0xa45a08u))); 
    /* 00460a1e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460a20: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460a21: ja 0x460a2c */ if ((!fC&&!fZ)) goto L_00460a2c;
L_00460a23:; BB(0x00460a23);
    /* 00460a23: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00460a25: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00460a2a: jmp 0x460a56 */ goto L_00460a56;
L_00460a2c:; BB(0x00460a2c);
    /* 00460a2c: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 00460a32: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00460a34: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00460a38: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00460a3d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460a42: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00460a46: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00460a4a: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00460a4e: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00460a52: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
L_00460a56:; BB(0x00460a56);
    /* 00460a56: mov edx, 1 */ r_edx = 0x1u;
    /* 00460a5b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460a5e: jle 0x460a66 */ if ((fZ||fS!=fO)) goto L_00460a66;
L_00460a60:; BB(0x00460a60);
    /* 00460a60: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460a62: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00460a64: jl 0x460a60 */ if ((fS!=fO)) goto L_00460a60;
L_00460a66:; BB(0x00460a66);
    /* 00460a66: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460a69: test dword ptr [ebx + 0x3c0], edx */ {  u32 a = R32((u32)(r_ebx+0x3c0u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460a6f: jne 0x460ae4 */ if (!fZ) goto L_00460ae4;
L_00460a71:; BB(0x00460a71);
    /* 00460a71: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00460a77: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460a7a: je 0x460b2a */ if (fZ) goto L_00460b2a;
L_00460a80:; BB(0x00460a80);
    /* 00460a80: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460a83: je 0x460b2a */ if (fZ) goto L_00460b2a;
L_00460a89:; BB(0x00460a89);
    /* 00460a89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00460a8b:; BB(0x00460a8b);
    /* 00460a8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460a8d: je 0x460ae4 */ if (fZ) goto L_00460ae4;
L_00460a8f:; BB(0x00460a8f);
    /* 00460a8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460a91: push dword ptr [0xa45a0c] */ { u32 v = R32((u32)(0xa45a0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460a97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00460a99: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x460a9eu); f_007714cc();
    /* 00460a9e: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00460aa1: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460aa6: je 0x460ae4 */ if (fZ) goto L_00460ae4;
L_00460aa8:; BB(0x00460aa8);
    /* 00460aa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460aa9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x460aaeu); f_0068d5a8();
    /* 00460aae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00460aaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460ab1: je 0x460ae4 */ if (fZ) goto L_00460ae4;
L_00460ab3:; BB(0x00460ab3);
    /* 00460ab3: movsx ebp, word ptr [ebx + 0x2cc] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+0x2ccu));
    /* 00460aba: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00460abe: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 00460ac2: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 00460ac4: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00460ac8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00460aca: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00460acf: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00460ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460ad4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00460ad5: mov ecx, eax */ r_ecx = r_eax;
    /* 00460ad7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00460ad8: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460adc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460ade: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460adf: call dword ptr [ebp + 0x60] */ { u32 t = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, 0x460ae2u); call_ind(t); }
    /* 00460ae2: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00460ae4:; BB(0x00460ae4);
    /* 00460ae4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00460ae6: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x460aebu); f_0078730c();
    /* 00460aeb: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00460af1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460af4: je 0x460b1d */ if (fZ) goto L_00460b1d;
L_00460af6:; BB(0x00460af6);
    /* 00460af6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00460af8: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x460afdu); f_007b6880();
    /* 00460afd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00460aff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460b00: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x460b05u); f_006946a8();
    /* 00460b05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460b07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00460b09: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00460b0f: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00460b14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460b15: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x460b1au); f_00805608();
    /* 00460b1a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460b1d:; BB(0x00460b1d);
    /* 00460b1d: add dword ptr [ebx + 0x3c0], 1 */ { u32 ad = (u32)(r_ebx+0x3c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00460b24: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00460b27: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00460b28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460b29: ret  */ FN_RET(0x00460938); r_esp += 4; return;
L_00460b2a:; BB(0x00460b2a);
    /* 00460b2a: mov eax, 1 */ r_eax = 0x1u;
    /* 00460b2f: jmp 0x460a8b */ goto L_00460a8b;
L_00460b34:; BB(0x00460b34);
    /* 00460b34: movzx eax, byte ptr [0xa459dc] */ r_eax = (u32)R8((u32)(0xa459dcu));
    /* 00460b3b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00460b3d: jne 0x460b53 */ if (!fZ) goto L_00460b53;
L_00460b3f:; BB(0x00460b3f);
    /* 00460b3f: mov dword ptr [0xa459e0], 0x3dcccccc */ W32((u32)(0xa459e0u), 0x3dccccccu);
    /* 00460b49: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460b4e: mov byte ptr [0xa459dc], al */ W8((u32)(0xa459dcu), (u8)r_eax);
L_00460b53:; BB(0x00460b53);
    /* 00460b53: mov ecx, dword ptr [ebx + 0x3c4] */ r_ecx = R32((u32)(r_ebx+0x3c4u));
    /* 00460b59: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x460b5eu); f_0082dcbc();
    /* 00460b5e: fld dword ptr [0xa459e0] */ FPUSH(R_F32((u32)(0xa459e0u)));
    /* 00460b64: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00460b66: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 00460b69: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 00460b6f: mov ebp, dword ptr [ebx + 0x37c] */ r_ebp = R32((u32)(r_ebx+0x37cu));
    /* 00460b75: fst dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0));
    /* 00460b78: add dword ptr [ebx + 0x3c4], eax */ { u32 ad = (u32)(r_ebx+0x3c4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00460b7e: jmp 0x460989 */ goto L_00460989;
}

void f_00460b84(void) /* sub_460B84 */
{
    FN_ENTER(0x00460b84);
    /* 00460b84: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00460b87: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 00460b8a: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00460b8d: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 00460b90: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 00460b93: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00460b96: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 00460b99: movzx eax, byte ptr [0xa459e4] */ r_eax = (u32)R8((u32)(0xa459e4u));
    /* 00460ba0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00460ba2: jne 0x460bbe */ if (!fZ) goto L_00460bbe;
L_00460ba4:; BB(0x00460ba4);
    /* 00460ba4: fld dword ptr [0x900580] */ FPUSH(R_F32((u32)(0x900580u)));
    /* 00460baa: mov dword ptr [0xa459e8], 0x40c00000 */ W32((u32)(0xa459e8u), 0x40c00000u);
    /* 00460bb4: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460bb7: mov byte ptr [0xa459e4], al */ W8((u32)(0xa459e4u), (u8)r_eax);
    /* 00460bbc: jmp 0x460bc4 */ goto L_00460bc4;
L_00460bbe:; BB(0x00460bbe);
    /* 00460bbe: fld dword ptr [0xa459e8] */ FPUSH(R_F32((u32)(0xa459e8u)));
L_00460bc4:; BB(0x00460bc4);
    /* 00460bc4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 00460bc6: jne 0x460bdc */ if (!fZ) goto L_00460bdc;
L_00460bc8:; BB(0x00460bc8);
    /* 00460bc8: mov dword ptr [0xa459ec], 0x3f8e38e4 */ W32((u32)(0xa459ecu), 0x3f8e38e4u);
    /* 00460bd2: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 00460bd7: mov byte ptr [0xa459e4], al */ W8((u32)(0xa459e4u), (u8)r_eax);
L_00460bdc:; BB(0x00460bdc);
    /* 00460bdc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00460bde: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460be0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460be1: jbe 0x460c08 */ if ((fC||fZ)) goto L_00460c08;
L_00460be3:; BB(0x00460be3);
    /* 00460be3: fld dword ptr [0xa459ec] */ FPUSH(R_F32((u32)(0xa459ecu)));
    /* 00460be9: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00460beb: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00460bed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460bef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460bf0: jae 0x460c02 */ if (!fC) goto L_00460c02;
L_00460bf2:; BB(0x00460bf2);
    /* 00460bf2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00460bf4: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 00460bf7: mov dword ptr [ecx + 0x37c], 2 */ W32((u32)(r_ecx+0x37cu), 0x2u);
    /* 00460c01: ret  */ FN_RET(0x00460b84); r_esp += 4; return;
L_00460c02:; BB(0x00460c02);
    /* 00460c02: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00460c04: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 00460c07: ret  */ FN_RET(0x00460b84); r_esp += 4; return;
L_00460c08:; BB(0x00460c08);
    /* 00460c08: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00460c0a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00460c0c: ret  */ FN_RET(0x00460b84); r_esp += 4; return;
}

void f_00460c02(void)
{
    FN_ENTER(0x00460c02);
    /* 00460c02: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00460c04: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 00460c07: ret  */ FN_RET(0x00460c02); r_esp += 4; return;
}

void f_00460c10(void) /* sub_460C10 */
{
    FN_ENTER(0x00460c10);
    /* 00460c10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00460c11: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460c14: mov esi, ecx */ r_esi = r_ecx;
    /* 00460c16: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00460c19: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 00460c1c: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00460c1f: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 00460c22: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00460c25: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 00460c28: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00460c2b: lea edx, [esi + 0x394] */ r_edx = (u32)(r_esi+0x394u);
    /* 00460c31: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x460c36u); f_0082ebac();
    /* 00460c36: movzx eax, byte ptr [0xa459f0] */ r_eax = (u32)R8((u32)(0xa459f0u));
    /* 00460c3d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00460c3f: jne 0x460c55 */ if (!fZ) goto L_00460c55;
L_00460c41:; BB(0x00460c41);
    /* 00460c41: mov dword ptr [0xa459f4], 0x43820000 */ W32((u32)(0xa459f4u), 0x43820000u);
    /* 00460c4b: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460c50: mov byte ptr [0xa459f0], al */ W8((u32)(0xa459f0u), (u8)r_eax);
L_00460c55:; BB(0x00460c55);
    /* 00460c55: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00460c58: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00460c5b: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00460c63: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00460c66: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00460c6c: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00460c70: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00460c73: mov dword ptr [esi + 0x384], eax */ W32((u32)(r_esi+0x384u), r_eax);
    /* 00460c79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00460c7b: jl 0x460c95 */ if ((fS!=fO)) goto L_00460c95;
L_00460c7d:; BB(0x00460c7d);
    /* 00460c7d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00460c80: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x460c85u); f_0083173c();
    /* 00460c85: fcomp dword ptr [0xa459f4] */ fx_compare(ST(0), R_F32((u32)(0xa459f4u))); FPOP();
    /* 00460c8b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460c8d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460c8e: ja 0x460c95 */ if ((!fC&&!fZ)) goto L_00460c95;
L_00460c90:; BB(0x00460c90);
    /* 00460c90: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00460c93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00460c94: ret  */ FN_RET(0x00460c10); r_esp += 4; return;
L_00460c95:; BB(0x00460c95);
    /* 00460c95: mov ecx, esi */ r_ecx = r_esi;
    /* 00460c97: call 0x460914 */ r_esp -= 4; W32(r_esp, 0x460c9cu); f_00460914();
    /* 00460c9c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00460c9f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00460ca0: ret  */ FN_RET(0x00460c10); r_esp += 4; return;
}

void f_00460ca4(void) /* sub_460CA4 */
{
    FN_ENTER(0x00460ca4);
    /* 00460ca4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460ca5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00460ca7: movzx eax, byte ptr [0xa459f8] */ r_eax = (u32)R8((u32)(0xa459f8u));
    /* 00460cae: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00460cb0: jne 0x460cce */ if (!fZ) goto L_00460cce;
L_00460cb2:; BB(0x00460cb2);
    /* 00460cb2: fld dword ptr [0x900570] */ FPUSH(R_F32((u32)(0x900570u)));
    /* 00460cb8: mov dword ptr [0xa459fc], 0xbeaaaaab */ W32((u32)(0xa459fcu), 0xbeaaaaabu);
    /* 00460cc2: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460cc7: mov byte ptr [0xa459f8], al */ W8((u32)(0xa459f8u), (u8)r_eax);
    /* 00460ccc: jmp 0x460cd4 */ goto L_00460cd4;
L_00460cce:; BB(0x00460cce);
    /* 00460cce: fld dword ptr [0xa459fc] */ FPUSH(R_F32((u32)(0xa459fcu)));
L_00460cd4:; BB(0x00460cd4);
    /* 00460cd4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00460cd6: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 00460cd9: fcom dword ptr [0x90056c] */ fx_compare(ST(0), R_F32((u32)(0x90056cu))); 
    /* 00460cdf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460ce1: fst dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0));
    /* 00460ce4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460ce5: jae 0x460d0a */ if (!fC) goto L_00460d0a;
L_00460ce7:; BB(0x00460ce7);
    /* 00460ce7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00460ce9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00460ceb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00460ced: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460cef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460cf0: jb 0x460d0c */ if (fC) goto L_00460d0c;
L_00460cf2:; BB(0x00460cf2);
    /* 00460cf2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00460cf4: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 00460cf9: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00460cfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460cfd: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x460d02u); f_0050b510();
    /* 00460d02: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00460d05: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00460d08: jmp 0x460d0c */ goto L_00460d0c;
L_00460d0a:; BB(0x00460d0a);
    /* 00460d0a: fstp st(1) */ ST(1) = ST(0); FPOP();
L_00460d0c:; BB(0x00460d0c);
    /* 00460d0c: fcomp dword ptr [0x900568] */ fx_compare(ST(0), R_F32((u32)(0x900568u))); FPOP();
    /* 00460d12: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460d14: mov edx, dword ptr [ebp + 0x5c] */ r_edx = R32((u32)(r_ebp+0x5cu));
    /* 00460d17: add edx, 0x111 */ {  u32 a = r_edx; u32 b = 0x111u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00460d1d: mov dword ptr [ebp + 0x5c], edx */ W32((u32)(r_ebp+0x5cu), r_edx);
    /* 00460d20: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460d21: jae 0x460d32 */ if (!fC) goto L_00460d32;
L_00460d23:; BB(0x00460d23);
    /* 00460d23: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00460d27: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00460d2c: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00460d30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460d31: ret  */ FN_RET(0x00460ca4); r_esp += 4; return;
L_00460d32:; BB(0x00460d32);
    /* 00460d32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460d33: ret  */ FN_RET(0x00460ca4); r_esp += 4; return;
}

void f_00460d34(void) /* sub_460D34 */
{
    FN_ENTER(0x00460d34);
    /* 00460d34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460d35: mov ebp, esp */ r_ebp = r_esp;
    /* 00460d37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00460d39: push 0x8cf63a */ { u32 v = 0x8cf63au; r_esp -= 4; W32(r_esp, v); }
    /* 00460d3e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00460d44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460d45: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00460d4c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460d4f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00460d52: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00460d55: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00460d58: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00460d5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00460d5d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00460d60: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00460d63: push 0x3cc */ { u32 v = 0x3ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00460d68: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x460d6du); f_005caba4();
    /* 00460d6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00460d6e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00460d71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460d73: je 0x460de0 */ if (fZ) goto L_00460de0;
L_00460d75:; BB(0x00460d75);
    /* 00460d75: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00460d7c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00460d83: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00460d85: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x460d8au); f_005caba4();
    /* 00460d8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00460d8b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00460d8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460d90: je 0x460ddc */ if (fZ) goto L_00460ddc;
L_00460d92:; BB(0x00460d92);
    /* 00460d92: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00460d99: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00460da0: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00460da6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460da9: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x460daeu); f_00787a4c();
    /* 00460dae: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460db1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00460db8:; BB(0x00460db8);
    /* 00460db8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00460dbb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00460dbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460dbf: call 0x460de4 */ r_esp -= 4; W32(r_esp, 0x460dc4u); f_00460de4();
    /* 00460dc4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00460dc7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00460dce:; BB(0x00460dce);
    /* 00460dce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00460dd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00460dd8: mov esp, ebp */ r_esp = r_ebp;
    /* 00460dda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00460ddb: ret  */ FN_RET(0x00460d34); r_esp += 4; return;
L_00460ddc:; BB(0x00460ddc);
    /* 00460ddc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00460dde: jmp 0x460db8 */ goto L_00460db8;
L_00460de0:; BB(0x00460de0);
    /* 00460de0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00460de2: jmp 0x460dce */ goto L_00460dce;
}

void f_00460de4(void) /* sub_460DE4 */
{
    FN_ENTER(0x00460de4);
    /* 00460de4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00460de5: mov ebp, esp */ r_ebp = r_esp;
    /* 00460de7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00460de9: push 0x8cf654 */ { u32 v = 0x8cf654u; r_esp -= 4; W32(r_esp, v); }
    /* 00460dee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00460df4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460df5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00460dfc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00460dff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00460e02: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00460e05: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00460e08: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00460e0b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460e0e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00460e11: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00460e14: call 0x45fbd4 */ r_esp -= 4; W32(r_esp, 0x460e19u); f_0045fbd4();
    /* 00460e19: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00460e20: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460e23: mov dword ptr [ecx], 0xaf8020 */ W32((u32)(r_ecx), 0xaf8020u);
    /* 00460e29: mov eax, dword ptr [0x9a67c4] */ r_eax = R32((u32)(0x9a67c4u));
    /* 00460e2e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00460e31: movzx eax, byte ptr [0xa45a00] */ r_eax = (u32)R8((u32)(0xa45a00u));
    /* 00460e38: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00460e3a: jne 0x460e50 */ if (!fZ) goto L_00460e50;
L_00460e3c:; BB(0x00460e3c);
    /* 00460e3c: mov dword ptr [0xa45a20], 0x42c80000 */ W32((u32)(0xa45a20u), 0x42c80000u);
    /* 00460e46: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00460e4b: mov byte ptr [0xa45a00], al */ W8((u32)(0xa45a00u), (u8)r_eax);
L_00460e50:; BB(0x00460e50);
    /* 00460e50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460e52: push dword ptr [0xa45a20] */ { u32 v = R32((u32)(0xa45a20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00460e58: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x460e5du); f_007714cc();
    /* 00460e5d: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00460e60: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460e65: jne 0x460e83 */ if (!fZ) goto L_00460e83;
L_00460e67:; BB(0x00460e67);
    /* 00460e67: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460e6a: mov dword ptr [edx + 0x39c], 0 */ W32((u32)(r_edx+0x39cu), 0x0u);
    /* 00460e74: mov dword ptr [edx + 0x394], 0 */ W32((u32)(r_edx+0x394u), 0x0u);
    /* 00460e7e: jmp 0x460f53 */ goto L_00460f53;
L_00460e83:; BB(0x00460e83);
    /* 00460e83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00460e84: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x460e89u); f_0068d5a8();
    /* 00460e89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00460e8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00460e8c: je 0x460e67 */ if (fZ) goto L_00460e67;
L_00460e8e:; BB(0x00460e8e);
    /* 00460e8e: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460e91: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00460e94: mov dword ptr [ebx + 0x394], edx */ W32((u32)(r_ebx+0x394u), r_edx);
    /* 00460e9a: movzx edx, byte ptr [0xa45a00] */ r_edx = (u32)R8((u32)(0xa45a00u));
    /* 00460ea1: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00460ea4: mov dword ptr [ebx + 0x398], ecx */ W32((u32)(r_ebx+0x398u), r_ecx);
    /* 00460eaa: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00460ead: mov dword ptr [ebx + 0x39c], eax */ W32((u32)(r_ebx+0x39cu), r_eax);
    /* 00460eb3: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00460eb6: jne 0x460ed3 */ if (!fZ) goto L_00460ed3;
L_00460eb8:; BB(0x00460eb8);
    /* 00460eb8: fld dword ptr [0x900560] */ FPUSH(R_F32((u32)(0x900560u)));
    /* 00460ebe: fmul dword ptr [0xa45a0c] */ ST(0) = ST(0) * R_F32((u32)(0xa45a0cu));
    /* 00460ec4: fstp dword ptr [0xa45a24] */ W_F32((u32)(0xa45a24u), ST(0)); FPOP();
    /* 00460eca: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00460ecd: mov byte ptr [0xa45a00], dl */ W8((u32)(0xa45a00u), (u8)r_edx);
L_00460ed3:; BB(0x00460ed3);
    /* 00460ed3: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00460ed6: jne 0x460f1d */ if (!fZ) goto L_00460f1d;
L_00460ed8:; BB(0x00460ed8);
    /* 00460ed8: fld dword ptr [0xa45a24] */ FPUSH(R_F32((u32)(0xa45a24u)));
    /* 00460ede: mov eax, dword ptr [0xa45a24] */ r_eax = R32((u32)(0xa45a24u));
    /* 00460ee3: mov dword ptr [0xa45a30], eax */ W32((u32)(0xa45a30u), r_eax);
    /* 00460ee8: fchs  */ ST(0) = -ST(0);
    /* 00460eea: fst dword ptr [0xa45a28] */ W_F32((u32)(0xa45a28u), ST(0));
    /* 00460ef0: fst dword ptr [0xa45a2c] */ W_F32((u32)(0xa45a2cu), ST(0));
    /* 00460ef6: fst dword ptr [0xa45a34] */ W_F32((u32)(0xa45a34u), ST(0));
    /* 00460efc: fstp dword ptr [0xa45a38] */ W_F32((u32)(0xa45a38u), ST(0)); FPOP();
    /* 00460f02: mov dword ptr [0xa45a3c], eax */ W32((u32)(0xa45a3cu), r_eax);
    /* 00460f07: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00460f0d: mov dword ptr [0xa45a40], eax */ W32((u32)(0xa45a40u), r_eax);
    /* 00460f12: mov dword ptr [0xa45a44], eax */ W32((u32)(0xa45a44u), r_eax);
    /* 00460f17: mov byte ptr [0xa45a00], dl */ W8((u32)(0xa45a00u), (u8)r_edx);
L_00460f1d:; BB(0x00460f1d);
    /* 00460f1d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460f20: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 00460f24: fld dword ptr [edx + 0x394] */ FPUSH(R_F32((u32)(r_edx+0x394u)));
    /* 00460f2a: fld dword ptr [edx + 0x39c] */ FPUSH(R_F32((u32)(r_edx+0x39cu)));
    /* 00460f30: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00460f33: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00460f35: fadd dword ptr [eax*8 + 0xa45a28] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0xa45a28u));
    /* 00460f3c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00460f3e: fadd dword ptr [eax*8 + 0xa45a2c] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0xa45a2cu));
    /* 00460f45: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00460f47: fstp dword ptr [edx + 0x394] */ W_F32((u32)(r_edx+0x394u), ST(0)); FPOP();
    /* 00460f4d: fstp dword ptr [edx + 0x39c] */ W_F32((u32)(r_edx+0x39cu), ST(0)); FPOP();
L_00460f53:; BB(0x00460f53);
    /* 00460f53: lea ecx, [edx + 0x394] */ r_ecx = (u32)(r_edx+0x394u);
    /* 00460f59: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00460f5c: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x460f61u); f_0082f9c4();
    /* 00460f61: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460f64: mov dword ptr [ecx + 0x398], 0 */ W32((u32)(r_ecx+0x398u), 0x0u);
    /* 00460f6e: add ecx, 0x394 */ {  u32 a = r_ecx; u32 b = 0x394u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00460f74: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x460f79u); f_0083173c();
    /* 00460f79: fld dword ptr [0x90055c] */ FPUSH(R_F32((u32)(0x90055cu)));
    /* 00460f7f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00460f81: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00460f83: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460f85: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460f86: jne 0x460fa5 */ if (!fZ) goto L_00460fa5;
L_00460f88:; BB(0x00460f88);
    /* 00460f88: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460f8b: fld dword ptr [0x900558] */ FPUSH(R_F32((u32)(0x900558u)));
    /* 00460f91: mov dword ptr [ecx + 0x394], 0x3f800000 */ W32((u32)(r_ecx+0x394u), 0x3f800000u);
    /* 00460f9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00460f9d: mov dword ptr [ecx + 0x39c], eax */ W32((u32)(r_ecx+0x39cu), r_eax);
    /* 00460fa3: jmp 0x460fc6 */ goto L_00460fc6;
L_00460fa5:; BB(0x00460fa5);
    /* 00460fa5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00460fa7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460faa: add ecx, 0x394 */ {  u32 a = r_ecx; u32 b = 0x394u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00460fb0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x460fb5u); f_0082df08();
    /* 00460fb5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00460fb7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00460fba: fld dword ptr [ecx + 0x39c] */ FPUSH(R_F32((u32)(r_ecx+0x39cu)));
    /* 00460fc0: fld dword ptr [ecx + 0x394] */ FPUSH(R_F32((u32)(r_ecx+0x394u)));
L_00460fc6:; BB(0x00460fc6);
    /* 00460fc6: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00460fc9: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 00460fcf: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 00460fd5: mov eax, dword ptr [ecx + 0x38c] */ r_eax = R32((u32)(r_ecx+0x38cu));
    /* 00460fdb: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00460fdd: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00460fdf: fstp dword ptr [ecx + 0x394] */ W_F32((u32)(r_ecx+0x394u), ST(0)); FPOP();
    /* 00460fe5: fstp dword ptr [ecx + 0x39c] */ W_F32((u32)(r_ecx+0x39cu), ST(0)); FPOP();
    /* 00460feb: mov dword ptr [ecx + 0x3c], 0xc1500000 */ W32((u32)(r_ecx+0x3cu), 0xc1500000u);
    /* 00460ff2: mov dword ptr [ecx + 0x3a0], edx */ W32((u32)(r_ecx+0x3a0u), r_edx);
    /* 00460ff8: mov dword ptr [ecx + 0x384], 0x96 */ W32((u32)(r_ecx+0x384u), 0x96u);
    /* 00461002: mov dword ptr [ecx + 0x37c], 0 */ W32((u32)(r_ecx+0x37cu), 0x0u);
    /* 0046100c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0046100f: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00461012: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 00461015: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00461018: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046101b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00461022: mov esp, ebp */ r_esp = r_ebp;
    /* 00461024: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00461025: ret 8 */ FN_RET(0x00460de4); r_esp += 12; return;
}

