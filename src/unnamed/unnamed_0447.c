#include "protos.h"

void f_00447017(void)
{
    FN_ENTER(0x00447017);
    /* 00447017: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044701a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x44701fu); f_007aa094();
    /* 0044701f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447022: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00447029: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044702c: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 00447033: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00447036: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00447038: jle 0x447b60 */ if ((fZ||fS!=fO)) goto L_00447b60;
L_0044703e:; BB(0x0044703e);
    /* 0044703e: jmp 0x447b49 */ goto L_00447b49;
L_00447b49:; BB(0x00447b49);
    /* 00447b49: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00447b4c: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00447b4f: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00447b52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00447b55: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00447b5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00447b5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447b5f: ret  */ FN_RET(0x00447017); r_esp += 4; return;
L_00447b60:; BB(0x00447b60);
    /* 00447b60: movsx edx, word ptr [eax + 0x3a2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a2u));
    /* 00447b67: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447b6a: mov word ptr [eax + 0x3a2], dx */ W16((u32)(r_eax+0x3a2u), (u16)r_edx);
    /* 00447b71: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00447b74: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00447b77: jge 0x447b85 */ if ((fS==fO)) goto L_00447b85;
L_00447b79:; BB(0x00447b79);
    /* 00447b79: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 00447b83: jmp 0x447b49 */ goto L_00447b49;
L_00447b85:; BB(0x00447b85);
    /* 00447b85: movsx edx, word ptr [eax + 0x3a0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a0u));
    /* 00447b8c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447b8f: mov word ptr [eax + 0x3a0], dx */ W16((u32)(r_eax+0x3a0u), (u16)r_edx);
    /* 00447b96: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00447b99: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00447b9c: jge 0x447baa */ if ((fS==fO)) goto L_00447baa;
L_00447b9e:; BB(0x00447b9e);
    /* 00447b9e: mov dword ptr [eax + 0x384], 1 */ W32((u32)(r_eax+0x384u), 0x1u);
    /* 00447ba8: jmp 0x447b49 */ goto L_00447b49;
L_00447baa:; BB(0x00447baa);
    /* 00447baa: mov ecx, eax */ r_ecx = r_eax;
    /* 00447bac: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00447bae: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x447bb4u); call_ind(t); }
    /* 00447bb4: jmp 0x447b49 */ goto L_00447b49;
}

void f_00447043(void)
{
    FN_ENTER(0x00447043);
    /* 00447043: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447046: movsx eax, word ptr [eax + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 0044704d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00447050: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00447053: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00447055: jle 0x447bb6 */ if ((fZ||fS!=fO)) goto L_00447bb6;
L_0044705b:; BB(0x0044705b);
    /* 0044705b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044705e: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 00447065: jmp 0x447b49 */ goto L_00447b49;
L_00447b49:; BB(0x00447b49);
    /* 00447b49: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00447b4c: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00447b4f: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00447b52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00447b55: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00447b5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00447b5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447b5f: ret  */ FN_RET(0x00447043); r_esp += 4; return;
L_00447bb6:; BB(0x00447bb6);
    /* 00447bb6: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 00447bbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447bbd: je 0x447bcd */ if (fZ) goto L_00447bcd;
L_00447bbf:; BB(0x00447bbf);
    /* 00447bbf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447bc2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447bc4: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 00447bcb: jmp 0x447bdc */ goto L_00447bdc;
L_00447bcd:; BB(0x00447bcd);
    /* 00447bcd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447bd0: mov eax, 5 */ r_eax = 0x5u;
    /* 00447bd5: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
L_00447bdc:; BB(0x00447bdc);
    /* 00447bdc: mov dword ptr [edx + 0x384], 8 */ W32((u32)(r_edx+0x384u), 0x8u);
    /* 00447be6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447be8: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 00447bef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447bf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447bf1: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447bf4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447bf5: push 0x351 */ { u32 v = 0x351u; r_esp -= 4; W32(r_esp, v); }
    /* 00447bfa: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x447bffu); f_00814298();
    /* 00447bff: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00447c02: jmp 0x447b49 */ goto L_00447b49;
}

void f_0044706a(void)
{
    FN_ENTER(0x0044706a);
    /* 0044706a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044706d: lea edi, [eax + 0x38] */ r_edi = (u32)(r_eax+0x38u);
    /* 00447070: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447073: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447075: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447076: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447077: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00447078: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447079: push 0x350 */ { u32 v = 0x350u; r_esp -= 4; W32(r_esp, v); }
    /* 0044707e: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x447083u); f_008144b0();
    /* 00447083: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447086: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447089: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00447090: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447093: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 0044709a: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 0044709d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044709f: jle 0x447c07 */ if ((fZ||fS!=fO)) goto L_00447c07;
L_004470a5:; BB(0x004470a5);
    /* 004470a5: jmp 0x447b49 */ goto L_00447b49;
L_00447b49:; BB(0x00447b49);
    /* 00447b49: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00447b4c: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00447b4f: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00447b52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00447b55: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00447b5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00447b5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447b5f: ret  */ FN_RET(0x0044706a); r_esp += 4; return;
L_00447c07:; BB(0x00447c07);
    /* 00447c07: mov edx, dword ptr [eax + 0x3ec] */ r_edx = R32((u32)(r_eax+0x3ecu));
    /* 00447c0d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447c0f: je 0x447c2b */ if (fZ) goto L_00447c2b;
L_00447c11:; BB(0x00447c11);
    /* 00447c11: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447c15: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447c1a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447c1e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c21: mov dword ptr [edx + 0x3ec], 0 */ W32((u32)(r_edx+0x3ecu), 0x0u);
L_00447c2b:; BB(0x00447c2b);
    /* 00447c2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c2e: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00447c34: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447c36: je 0x447c52 */ if (fZ) goto L_00447c52;
L_00447c38:; BB(0x00447c38);
    /* 00447c38: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447c3c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447c41: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447c45: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c48: mov dword ptr [edx + 0x3f0], 0 */ W32((u32)(r_edx+0x3f0u), 0x0u);
L_00447c52:; BB(0x00447c52);
    /* 00447c52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c55: mov edx, dword ptr [eax + 0x3f4] */ r_edx = R32((u32)(r_eax+0x3f4u));
    /* 00447c5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447c5d: je 0x447c79 */ if (fZ) goto L_00447c79;
L_00447c5f:; BB(0x00447c5f);
    /* 00447c5f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447c63: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447c68: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447c6c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c6f: mov dword ptr [edx + 0x3f4], 0 */ W32((u32)(r_edx+0x3f4u), 0x0u);
L_00447c79:; BB(0x00447c79);
    /* 00447c79: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c7c: mov edx, dword ptr [eax + 0x3f8] */ r_edx = R32((u32)(r_eax+0x3f8u));
    /* 00447c82: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447c84: je 0x447ca0 */ if (fZ) goto L_00447ca0;
L_00447c86:; BB(0x00447c86);
    /* 00447c86: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447c8a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447c8f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447c93: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c96: mov dword ptr [edx + 0x3f8], 0 */ W32((u32)(r_edx+0x3f8u), 0x0u);
L_00447ca0:; BB(0x00447ca0);
    /* 00447ca0: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 00447ca5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00447ca7: je 0x447cc4 */ if (fZ) goto L_00447cc4;
L_00447ca9:; BB(0x00447ca9);
    /* 00447ca9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447cac: movzx eax, word ptr [ecx + 0x3a2] */ r_eax = (u32)R16((u32)(r_ecx+0x3a2u));
    /* 00447cb3: movzx edx, word ptr [eax*2 + 0xa44bcc] */ r_edx = (u32)R16((u32)(r_eax*2+0xa44bccu));
    /* 00447cbb: mov word ptr [ecx + 0x344], dx */ W16((u32)(r_ecx+0x344u), (u16)r_edx);
    /* 00447cc2: jmp 0x447cd3 */ goto L_00447cd3;
L_00447cc4:; BB(0x00447cc4);
    /* 00447cc4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447cc7: mov eax, 0x14 */ r_eax = 0x14u;
    /* 00447ccc: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
L_00447cd3:; BB(0x00447cd3);
    /* 00447cd3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447cd6: mov dword ptr [eax + 0x384], 7 */ W32((u32)(r_eax+0x384u), 0x7u);
    /* 00447ce0: jmp 0x447b49 */ goto L_00447b49;
}

void f_004470aa(void)
{
    FN_ENTER(0x004470aa);
    goto L_004470aa;
L_00447070:; BB(0x00447070);
    /* 00447070: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447073: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447075: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447076: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447077: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00447078: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447079: push 0x350 */ { u32 v = 0x350u; r_esp -= 4; W32(r_esp, v); }
    /* 0044707e: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x447083u); f_008144b0();
    /* 00447083: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447086: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447089: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00447090: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447093: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 0044709a: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 0044709d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044709f: jle 0x447c07 */ if ((fZ||fS!=fO)) goto L_00447c07;
L_004470a5:; BB(0x004470a5);
    /* 004470a5: jmp 0x447b49 */ goto L_00447b49;
L_004470aa:; BB(0x004470aa);
    /* 004470aa: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004470ac: je 0x447e8b */ if (fZ) goto L_00447e8b;
L_004470b2:; BB(0x004470b2);
    /* 004470b2: mov eax, dword ptr [0xa44bbc] */ r_eax = R32((u32)(0xa44bbcu));
    /* 004470b7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004470ba: mov ebx, dword ptr [0xa447c0] */ r_ebx = R32((u32)(0xa447c0u));
    /* 004470c0: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004470c3: mov word ptr [ecx + 0x344], dx */ W16((u32)(r_ecx+0x344u), (u16)r_edx);
    /* 004470ca: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004470cc: je 0x4470d5 */ if (fZ) goto L_004470d5;
L_004470ce:; BB(0x004470ce);
    /* 004470ce: mov edi, 0x471c */ r_edi = 0x471cu;
    /* 004470d3: jmp 0x4470da */ goto L_004470da;
L_004470d5:; BB(0x004470d5);
    /* 004470d5: mov edi, 0x31c7 */ r_edi = 0x31c7u;
L_004470da:; BB(0x004470da);
    /* 004470da: mov edx, ecx */ r_edx = r_ecx;
    /* 004470dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004470de: mov word ptr [edx + 0x3a4], ax */ W16((u32)(r_edx+0x3a4u), (u16)r_eax);
    /* 004470e5: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 004470eb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004470ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004470ef: jle 0x447e84 */ if ((fZ||fS!=fO)) goto L_00447e84;
L_004470f5:; BB(0x004470f5);
    /* 004470f5: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 004470fc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004470fe: je 0x447228 */ if (fZ) goto L_00447228;
L_00447104:; BB(0x00447104);
    /* 00447104: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00447108: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044710d: jge 0x447228 */ if ((fS==fO)) goto L_00447228;
L_00447113:; BB(0x00447113);
    /* 00447113: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00447116: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044711b: jne 0x447228 */ if (!fZ) goto L_00447228;
L_00447121:; BB(0x00447121);
    /* 00447121: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00447124: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 0044712a: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0044712d: mov eax, dword ptr [ebx + 0x304] */ r_eax = R32((u32)(r_ebx+0x304u));
    /* 00447133: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00447136: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 0044713c: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0044713f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447142: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 00447148: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x44714du); f_0082f9c4();
    /* 0044714d: fld dword ptr [ebp - 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff94u)));
    /* 00447150: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00447153: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00447155: fmul qword ptr [0x8fe6d8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6d8u));
    /* 0044715b: fdiv qword ptr [0x8fe6d0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6d0u));
    /* 00447161: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447164: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00447167: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 0044716a: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 0044716e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447173: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00447176: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 00447179: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0044717c: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 0044717f: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447182: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447183: add ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00447189: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044718a: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x44718fu); f_007a9018();
    /* 0044718f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447192: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447194: jle 0x4471a1 */ if ((fZ||fS!=fO)) goto L_004471a1;
L_00447196:; BB(0x00447196);
    /* 00447196: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0044719c: jmp 0x447228 */ goto L_00447228;
L_004471a1:; BB(0x004471a1);
    /* 004471a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004471a4: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004471a8: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004471af: mov word ptr [eax + ecx*2 + 0x3a6], dx */ W16((u32)(r_eax+r_ecx*2+0x3a6u), (u16)r_edx);
    /* 004471b7: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004471be: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004471c0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004471c2: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 004471c5: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004471c7: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004471ca: mov dword ptr [edx + eax + 0x3b0], ecx */ W32((u32)(r_edx+r_eax+0x3b0u), r_ecx);
    /* 004471d1: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004471d8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004471da: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004471dc: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004471df: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004471e1: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004471e4: mov dword ptr [ecx + eax + 0x3b4], edx */ W32((u32)(r_ecx+r_eax+0x3b4u), r_edx);
    /* 004471eb: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004471f2: mov ebx, dword ptr [ebx + 0x40] */ r_ebx = R32((u32)(r_ebx+0x40u));
    /* 004471f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004471f7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004471f9: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 004471fc: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004471fe: mov dword ptr [edx + eax + 0x3b8], ebx */ W32((u32)(r_edx+r_eax+0x3b8u), r_ebx);
    /* 00447205: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 0044720c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044720f: mov word ptr [eax + 0x3a4], dx */ W16((u32)(r_eax+0x3a4u), (u16)r_edx);
    /* 00447216: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00447219: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044721c: jge 0x447ce5 */ if ((fS==fO)) goto L_00447ce5;
L_00447222:; BB(0x00447222);
    /* 00447222: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
L_00447228:; BB(0x00447228);
    /* 00447228: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044722b: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044722d: jl 0x4470f5 */ if ((fS!=fO)) goto L_004470f5;
L_00447233:; BB(0x00447233);
    /* 00447233: jmp 0x447e75 */ goto L_00447e75;
L_00447b49:; BB(0x00447b49);
    /* 00447b49: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00447b4c: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00447b4f: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00447b52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00447b55: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00447b5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00447b5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447b5f: ret  */ FN_RET(0x004470aa); r_esp += 4; return;
L_00447c07:; BB(0x00447c07);
    /* 00447c07: mov edx, dword ptr [eax + 0x3ec] */ r_edx = R32((u32)(r_eax+0x3ecu));
    /* 00447c0d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447c0f: je 0x447c2b */ if (fZ) goto L_00447c2b;
L_00447c11:; BB(0x00447c11);
    /* 00447c11: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447c15: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447c1a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447c1e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c21: mov dword ptr [edx + 0x3ec], 0 */ W32((u32)(r_edx+0x3ecu), 0x0u);
L_00447c2b:; BB(0x00447c2b);
    /* 00447c2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c2e: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00447c34: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447c36: je 0x447c52 */ if (fZ) goto L_00447c52;
L_00447c38:; BB(0x00447c38);
    /* 00447c38: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447c3c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447c41: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447c45: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c48: mov dword ptr [edx + 0x3f0], 0 */ W32((u32)(r_edx+0x3f0u), 0x0u);
L_00447c52:; BB(0x00447c52);
    /* 00447c52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c55: mov edx, dword ptr [eax + 0x3f4] */ r_edx = R32((u32)(r_eax+0x3f4u));
    /* 00447c5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447c5d: je 0x447c79 */ if (fZ) goto L_00447c79;
L_00447c5f:; BB(0x00447c5f);
    /* 00447c5f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447c63: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447c68: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447c6c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c6f: mov dword ptr [edx + 0x3f4], 0 */ W32((u32)(r_edx+0x3f4u), 0x0u);
L_00447c79:; BB(0x00447c79);
    /* 00447c79: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c7c: mov edx, dword ptr [eax + 0x3f8] */ r_edx = R32((u32)(r_eax+0x3f8u));
    /* 00447c82: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447c84: je 0x447ca0 */ if (fZ) goto L_00447ca0;
L_00447c86:; BB(0x00447c86);
    /* 00447c86: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447c8a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447c8f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447c93: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c96: mov dword ptr [edx + 0x3f8], 0 */ W32((u32)(r_edx+0x3f8u), 0x0u);
L_00447ca0:; BB(0x00447ca0);
    /* 00447ca0: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 00447ca5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00447ca7: je 0x447cc4 */ if (fZ) goto L_00447cc4;
L_00447ca9:; BB(0x00447ca9);
    /* 00447ca9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447cac: movzx eax, word ptr [ecx + 0x3a2] */ r_eax = (u32)R16((u32)(r_ecx+0x3a2u));
    /* 00447cb3: movzx edx, word ptr [eax*2 + 0xa44bcc] */ r_edx = (u32)R16((u32)(r_eax*2+0xa44bccu));
    /* 00447cbb: mov word ptr [ecx + 0x344], dx */ W16((u32)(r_ecx+0x344u), (u16)r_edx);
    /* 00447cc2: jmp 0x447cd3 */ goto L_00447cd3;
L_00447cc4:; BB(0x00447cc4);
    /* 00447cc4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447cc7: mov eax, 0x14 */ r_eax = 0x14u;
    /* 00447ccc: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
L_00447cd3:; BB(0x00447cd3);
    /* 00447cd3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447cd6: mov dword ptr [eax + 0x384], 7 */ W32((u32)(r_eax+0x384u), 0x7u);
    /* 00447ce0: jmp 0x447b49 */ goto L_00447b49;
L_00447ce5:; BB(0x00447ce5);
    /* 00447ce5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447ce7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00447cea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00447cec: jle 0x447d5a */ if ((fZ||fS!=fO)) goto L_00447d5a;
L_00447cee:; BB(0x00447cee);
    /* 00447cee: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00447cf5: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00447cfa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x447cffu); f_005caba4();
    /* 00447cff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00447d00: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00447d03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447d05: je 0x447d3c */ if (fZ) goto L_00447d3c;
L_00447d07:; BB(0x00447d07);
    /* 00447d07: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 00447d0e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00447d15: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00447d18: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00447d1b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00447d1c: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00447d1f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00447d21: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00447d24: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00447d26: lea ecx, [edi + esi + 0x3b0] */ r_ecx = (u32)(r_edi+r_esi+0x3b0u);
    /* 00447d2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447d2e: mov ecx, eax */ r_ecx = r_eax;
    /* 00447d30: call 0x44b0bc */ r_esp -= 4; W32(r_esp, 0x447d35u); f_0044b0bc();
    /* 00447d35: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00447d3c:; BB(0x00447d3c);
    /* 00447d3c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00447d43: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00447d46: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447d49: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 00447d50: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447d53: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447d55: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00447d58: jl 0x447cee */ if ((fS!=fO)) goto L_00447cee;
L_00447d5a:; BB(0x00447d5a);
    /* 00447d5a: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00447d5d: lea edi, [edi + 0x38] */ r_edi = (u32)(r_edi+0x38u);
    /* 00447d60: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447d62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447d63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447d64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00447d65: push 0x35c */ { u32 v = 0x35cu; r_esp -= 4; W32(r_esp, v); }
    /* 00447d6a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x447d6fu); f_00814298();
    /* 00447d6f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447d72: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447d75: mov dword ptr [eax + 0x384], 6 */ W32((u32)(r_eax+0x384u), 0x6u);
    /* 00447d7f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00447d81: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00447d86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00447d88: jle 0x447070 */ if ((fZ||fS!=fO)) goto L_00447070;
L_00447d8e:; BB(0x00447d8e);
    /* 00447d8e: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 00447d95: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447d97: je 0x447e65 */ if (fZ) goto L_00447e65;
L_00447d9d:; BB(0x00447d9d);
    /* 00447d9d: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00447da1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447da2: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x447da7u); f_007ba9ec();
    /* 00447da7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00447da8: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00447dab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447dad: je 0x447db9 */ if (fZ) goto L_00447db9;
L_00447daf:; BB(0x00447daf);
    /* 00447daf: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00447db4: jmp 0x447e65 */ goto L_00447e65;
L_00447db9:; BB(0x00447db9);
    /* 00447db9: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00447dbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447dbd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00447dbe: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x447dc3u); f_0078ea50();
    /* 00447dc3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447dc6: fcomp dword ptr [0x8fe75c] */ fx_compare(ST(0), R_F32((u32)(0x8fe75cu))); FPOP();
    /* 00447dcc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00447dce: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00447dcf: jbe 0x447ddb */ if ((fC||fZ)) goto L_00447ddb;
L_00447dd1:; BB(0x00447dd1);
    /* 00447dd1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00447dd6: jmp 0x447e65 */ goto L_00447e65;
L_00447ddb:; BB(0x00447ddb);
    /* 00447ddb: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 00447dde: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00447de1: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00447de4: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00447de7: mov edx, edi */ r_edx = r_edi;
    /* 00447de9: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00447dec: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00447def: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00447df2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x447df7u); f_0082f9c4();
    /* 00447df7: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00447dfa: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00447dfd: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00447dff: fmul qword ptr [0x8fe6d8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6d8u));
    /* 00447e05: fdiv qword ptr [0x8fe6d0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6d0u));
    /* 00447e0b: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 00447e0e: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 00447e12: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447e17: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00447e1a: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 00447e1d: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00447e20: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 00447e23: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447e26: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00447e29: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x447e2eu); f_0082ddd8();
    /* 00447e2e: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00447e34: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00447e37: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 00447e3a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x447e3fu); f_0082dcbc();
    /* 00447e3f: fld dword ptr [0x8fe804] */ FPUSH(R_F32((u32)(0x8fe804u)));
    /* 00447e45: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00447e47: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 00447e4a: mov edx, edi */ r_edx = r_edi;
    /* 00447e4c: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 00447e4f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x447e54u); f_0082ebac();
    /* 00447e54: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00447e57: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00447e5a: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00447e5d: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00447e62: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
L_00447e65:; BB(0x00447e65);
    /* 00447e65: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00447e68: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447e6a: jl 0x447d8e */ if ((fS!=fO)) goto L_00447d8e;
L_00447e70:; BB(0x00447e70);
    /* 00447e70: jmp 0x447070 */ goto L_00447070;
L_00447e75:; BB(0x00447e75);
    /* 00447e75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447e78: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 00447e7f: jmp 0x447ce5 */ goto L_00447ce5;
L_00447e84:; BB(0x00447e84);
    /* 00447e84: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00447e86: jmp 0x447ce5 */ goto L_00447ce5;
L_00447e8b:; BB(0x00447e8b);
    /* 00447e8b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447e8e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00447e90: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x447e96u); call_ind(t); }
    /* 00447e96: jmp 0x447b49 */ goto L_00447b49;
}

void f_004471e1(void)
{
    FN_ENTER(0x004471e1);
    goto L_004471e1;
L_00447070:; BB(0x00447070);
    /* 00447070: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447073: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447075: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447076: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447077: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00447078: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447079: push 0x350 */ { u32 v = 0x350u; r_esp -= 4; W32(r_esp, v); }
    /* 0044707e: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x447083u); f_008144b0();
    /* 00447083: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447086: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447089: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00447090: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447093: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 0044709a: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 0044709d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044709f: jle 0x447c07 */ if ((fZ||fS!=fO)) goto L_00447c07;
L_004470a5:; BB(0x004470a5);
    /* 004470a5: jmp 0x447b49 */ goto L_00447b49;
L_004470f5:; BB(0x004470f5);
    /* 004470f5: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 004470fc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004470fe: je 0x447228 */ if (fZ) goto L_00447228;
L_00447104:; BB(0x00447104);
    /* 00447104: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00447108: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044710d: jge 0x447228 */ if ((fS==fO)) goto L_00447228;
L_00447113:; BB(0x00447113);
    /* 00447113: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00447116: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044711b: jne 0x447228 */ if (!fZ) goto L_00447228;
L_00447121:; BB(0x00447121);
    /* 00447121: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00447124: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 0044712a: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0044712d: mov eax, dword ptr [ebx + 0x304] */ r_eax = R32((u32)(r_ebx+0x304u));
    /* 00447133: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00447136: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 0044713c: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0044713f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447142: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 00447148: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x44714du); f_0082f9c4();
    /* 0044714d: fld dword ptr [ebp - 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff94u)));
    /* 00447150: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00447153: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00447155: fmul qword ptr [0x8fe6d8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6d8u));
    /* 0044715b: fdiv qword ptr [0x8fe6d0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6d0u));
    /* 00447161: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447164: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00447167: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 0044716a: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 0044716e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447173: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00447176: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 00447179: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0044717c: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 0044717f: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447182: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447183: add ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00447189: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044718a: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x44718fu); f_007a9018();
    /* 0044718f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447192: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447194: jle 0x4471a1 */ if ((fZ||fS!=fO)) goto L_004471a1;
L_00447196:; BB(0x00447196);
    /* 00447196: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0044719c: jmp 0x447228 */ goto L_00447228;
L_004471a1:; BB(0x004471a1);
    /* 004471a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004471a4: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004471a8: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004471af: mov word ptr [eax + ecx*2 + 0x3a6], dx */ W16((u32)(r_eax+r_ecx*2+0x3a6u), (u16)r_edx);
    /* 004471b7: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004471be: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004471c0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004471c2: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 004471c5: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004471c7: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004471ca: mov dword ptr [edx + eax + 0x3b0], ecx */ W32((u32)(r_edx+r_eax+0x3b0u), r_ecx);
    /* 004471d1: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004471d8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004471da: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004471dc: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004471df: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_004471e1:; BB(0x004471e1);
    /* 004471e1: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004471e4: mov dword ptr [ecx + eax + 0x3b4], edx */ W32((u32)(r_ecx+r_eax+0x3b4u), r_edx);
    /* 004471eb: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004471f2: mov ebx, dword ptr [ebx + 0x40] */ r_ebx = R32((u32)(r_ebx+0x40u));
    /* 004471f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004471f7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004471f9: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 004471fc: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004471fe: mov dword ptr [edx + eax + 0x3b8], ebx */ W32((u32)(r_edx+r_eax+0x3b8u), r_ebx);
    /* 00447205: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 0044720c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044720f: mov word ptr [eax + 0x3a4], dx */ W16((u32)(r_eax+0x3a4u), (u16)r_edx);
    /* 00447216: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00447219: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044721c: jge 0x447ce5 */ if ((fS==fO)) goto L_00447ce5;
L_00447222:; BB(0x00447222);
    /* 00447222: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
L_00447228:; BB(0x00447228);
    /* 00447228: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044722b: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044722d: jl 0x4470f5 */ if ((fS!=fO)) goto L_004470f5;
L_00447233:; BB(0x00447233);
    /* 00447233: jmp 0x447e75 */ goto L_00447e75;
L_00447b49:; BB(0x00447b49);
    /* 00447b49: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00447b4c: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00447b4f: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00447b52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00447b55: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00447b5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00447b5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447b5f: ret  */ FN_RET(0x004471e1); r_esp += 4; return;
L_00447c07:; BB(0x00447c07);
    /* 00447c07: mov edx, dword ptr [eax + 0x3ec] */ r_edx = R32((u32)(r_eax+0x3ecu));
    /* 00447c0d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447c0f: je 0x447c2b */ if (fZ) goto L_00447c2b;
L_00447c11:; BB(0x00447c11);
    /* 00447c11: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447c15: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447c1a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447c1e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c21: mov dword ptr [edx + 0x3ec], 0 */ W32((u32)(r_edx+0x3ecu), 0x0u);
L_00447c2b:; BB(0x00447c2b);
    /* 00447c2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c2e: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00447c34: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447c36: je 0x447c52 */ if (fZ) goto L_00447c52;
L_00447c38:; BB(0x00447c38);
    /* 00447c38: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447c3c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447c41: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447c45: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c48: mov dword ptr [edx + 0x3f0], 0 */ W32((u32)(r_edx+0x3f0u), 0x0u);
L_00447c52:; BB(0x00447c52);
    /* 00447c52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c55: mov edx, dword ptr [eax + 0x3f4] */ r_edx = R32((u32)(r_eax+0x3f4u));
    /* 00447c5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447c5d: je 0x447c79 */ if (fZ) goto L_00447c79;
L_00447c5f:; BB(0x00447c5f);
    /* 00447c5f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447c63: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447c68: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447c6c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c6f: mov dword ptr [edx + 0x3f4], 0 */ W32((u32)(r_edx+0x3f4u), 0x0u);
L_00447c79:; BB(0x00447c79);
    /* 00447c79: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c7c: mov edx, dword ptr [eax + 0x3f8] */ r_edx = R32((u32)(r_eax+0x3f8u));
    /* 00447c82: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447c84: je 0x447ca0 */ if (fZ) goto L_00447ca0;
L_00447c86:; BB(0x00447c86);
    /* 00447c86: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447c8a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447c8f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447c93: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447c96: mov dword ptr [edx + 0x3f8], 0 */ W32((u32)(r_edx+0x3f8u), 0x0u);
L_00447ca0:; BB(0x00447ca0);
    /* 00447ca0: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 00447ca5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00447ca7: je 0x447cc4 */ if (fZ) goto L_00447cc4;
L_00447ca9:; BB(0x00447ca9);
    /* 00447ca9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447cac: movzx eax, word ptr [ecx + 0x3a2] */ r_eax = (u32)R16((u32)(r_ecx+0x3a2u));
    /* 00447cb3: movzx edx, word ptr [eax*2 + 0xa44bcc] */ r_edx = (u32)R16((u32)(r_eax*2+0xa44bccu));
    /* 00447cbb: mov word ptr [ecx + 0x344], dx */ W16((u32)(r_ecx+0x344u), (u16)r_edx);
    /* 00447cc2: jmp 0x447cd3 */ goto L_00447cd3;
L_00447cc4:; BB(0x00447cc4);
    /* 00447cc4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447cc7: mov eax, 0x14 */ r_eax = 0x14u;
    /* 00447ccc: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
L_00447cd3:; BB(0x00447cd3);
    /* 00447cd3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447cd6: mov dword ptr [eax + 0x384], 7 */ W32((u32)(r_eax+0x384u), 0x7u);
    /* 00447ce0: jmp 0x447b49 */ goto L_00447b49;
L_00447ce5:; BB(0x00447ce5);
    /* 00447ce5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447ce7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00447cea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00447cec: jle 0x447d5a */ if ((fZ||fS!=fO)) goto L_00447d5a;
L_00447cee:; BB(0x00447cee);
    /* 00447cee: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00447cf5: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00447cfa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x447cffu); f_005caba4();
    /* 00447cff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00447d00: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00447d03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447d05: je 0x447d3c */ if (fZ) goto L_00447d3c;
L_00447d07:; BB(0x00447d07);
    /* 00447d07: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 00447d0e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00447d15: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00447d18: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00447d1b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00447d1c: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00447d1f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00447d21: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00447d24: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00447d26: lea ecx, [edi + esi + 0x3b0] */ r_ecx = (u32)(r_edi+r_esi+0x3b0u);
    /* 00447d2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447d2e: mov ecx, eax */ r_ecx = r_eax;
    /* 00447d30: call 0x44b0bc */ r_esp -= 4; W32(r_esp, 0x447d35u); f_0044b0bc();
    /* 00447d35: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00447d3c:; BB(0x00447d3c);
    /* 00447d3c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00447d43: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00447d46: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447d49: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 00447d50: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447d53: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447d55: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00447d58: jl 0x447cee */ if ((fS!=fO)) goto L_00447cee;
L_00447d5a:; BB(0x00447d5a);
    /* 00447d5a: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00447d5d: lea edi, [edi + 0x38] */ r_edi = (u32)(r_edi+0x38u);
    /* 00447d60: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447d62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447d63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447d64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00447d65: push 0x35c */ { u32 v = 0x35cu; r_esp -= 4; W32(r_esp, v); }
    /* 00447d6a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x447d6fu); f_00814298();
    /* 00447d6f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447d72: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447d75: mov dword ptr [eax + 0x384], 6 */ W32((u32)(r_eax+0x384u), 0x6u);
    /* 00447d7f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00447d81: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00447d86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00447d88: jle 0x447070 */ if ((fZ||fS!=fO)) goto L_00447070;
L_00447d8e:; BB(0x00447d8e);
    /* 00447d8e: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 00447d95: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447d97: je 0x447e65 */ if (fZ) goto L_00447e65;
L_00447d9d:; BB(0x00447d9d);
    /* 00447d9d: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00447da1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447da2: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x447da7u); f_007ba9ec();
    /* 00447da7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00447da8: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00447dab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447dad: je 0x447db9 */ if (fZ) goto L_00447db9;
L_00447daf:; BB(0x00447daf);
    /* 00447daf: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00447db4: jmp 0x447e65 */ goto L_00447e65;
L_00447db9:; BB(0x00447db9);
    /* 00447db9: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00447dbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447dbd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00447dbe: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x447dc3u); f_0078ea50();
    /* 00447dc3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447dc6: fcomp dword ptr [0x8fe75c] */ fx_compare(ST(0), R_F32((u32)(0x8fe75cu))); FPOP();
    /* 00447dcc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00447dce: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00447dcf: jbe 0x447ddb */ if ((fC||fZ)) goto L_00447ddb;
L_00447dd1:; BB(0x00447dd1);
    /* 00447dd1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00447dd6: jmp 0x447e65 */ goto L_00447e65;
L_00447ddb:; BB(0x00447ddb);
    /* 00447ddb: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 00447dde: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00447de1: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00447de4: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00447de7: mov edx, edi */ r_edx = r_edi;
    /* 00447de9: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00447dec: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00447def: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00447df2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x447df7u); f_0082f9c4();
    /* 00447df7: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00447dfa: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00447dfd: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00447dff: fmul qword ptr [0x8fe6d8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6d8u));
    /* 00447e05: fdiv qword ptr [0x8fe6d0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6d0u));
    /* 00447e0b: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 00447e0e: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 00447e12: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447e17: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00447e1a: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 00447e1d: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00447e20: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 00447e23: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447e26: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00447e29: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x447e2eu); f_0082ddd8();
    /* 00447e2e: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00447e34: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00447e37: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 00447e3a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x447e3fu); f_0082dcbc();
    /* 00447e3f: fld dword ptr [0x8fe804] */ FPUSH(R_F32((u32)(0x8fe804u)));
    /* 00447e45: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00447e47: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 00447e4a: mov edx, edi */ r_edx = r_edi;
    /* 00447e4c: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 00447e4f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x447e54u); f_0082ebac();
    /* 00447e54: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00447e57: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00447e5a: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00447e5d: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00447e62: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
L_00447e65:; BB(0x00447e65);
    /* 00447e65: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00447e68: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447e6a: jl 0x447d8e */ if ((fS!=fO)) goto L_00447d8e;
L_00447e70:; BB(0x00447e70);
    /* 00447e70: jmp 0x447070 */ goto L_00447070;
L_00447e75:; BB(0x00447e75);
    /* 00447e75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447e78: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 00447e7f: jmp 0x447ce5 */ goto L_00447ce5;
}

void f_00447238(void)
{
    FN_ENTER(0x00447238);
    /* 00447238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044723a: je 0x448013 */ if (fZ) goto L_00448013;
L_00447240:; BB(0x00447240);
    /* 00447240: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447243: push 0xffffc000 */ { u32 v = 0xffffc000u; r_esp -= 4; W32(r_esp, v); }
    /* 00447248: push 0x566 */ { u32 v = 0x566u; r_esp -= 4; W32(r_esp, v); }
    /* 0044724d: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00447250: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00447251: call 0x52cc54 */ r_esp -= 4; W32(r_esp, 0x447256u); f_0052cc54();
    /* 00447256: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447259: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 0044725c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044725e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044725f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447260: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00447261: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447262: push 0x350 */ { u32 v = 0x350u; r_esp -= 4; W32(r_esp, v); }
    /* 00447267: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x44726cu); f_008144b0();
    /* 0044726c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044726f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447272: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x447277u); f_0052cac0();
    /* 00447277: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044727a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044727c: lea eax, [ecx + 0x3e0] */ r_eax = (u32)(r_ecx+0x3e0u);
    /* 00447282: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00447285: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447286: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00447288: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x44728eu); call_ind(t); }
    /* 0044728e: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00447293: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x447298u); f_0082d990();
    /* 00447298: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044729b: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 0044729e: mov dword ptr [ebp - 0x98], 0x42180000 */ W32((u32)(r_ebp+0xffffff68u), 0x42180000u);
    /* 004472a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004472aa: mov dword ptr [ebp - 0x94], 0x41f80000 */ W32((u32)(r_ebp+0xffffff6cu), 0x41f80000u);
    /* 004472b4: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004472be: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4472c3u); f_0082d8bc();
    /* 004472c3: lea eax, [ebp - 0x8c] */ r_eax = (u32)(r_ebp+0xffffff74u);
    /* 004472c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004472ca: lea edx, [ebp - 0x98] */ r_edx = (u32)(r_ebp+0xffffff68u);
    /* 004472d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004472d2: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4472d7u); f_00830aa0();
    /* 004472d7: lea ecx, [ebp - 0x8c] */ r_ecx = (u32)(r_ebp+0xffffff74u);
    /* 004472dd: mov edx, ebx */ r_edx = r_ebx;
    /* 004472df: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4472e4u); f_0082ebac();
    /* 004472e4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4472e9u); f_0082da80();
    /* 004472e9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004472ec: mov ecx, dword ptr [eax + 0x480] */ r_ecx = R32((u32)(r_eax+0x480u));
    /* 004472f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004472f4: je 0x447302 */ if (fZ) goto L_00447302;
L_004472f6:; BB(0x004472f6);
    /* 004472f6: lea eax, [ebp - 0x8c] */ r_eax = (u32)(r_ebp+0xffffff74u);
    /* 004472fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004472fd: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x447302u); f_00508db8();
L_00447302:; BB(0x00447302);
    /* 00447302: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447305: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447307: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447309: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044730a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044730b: push 0x354 */ { u32 v = 0x354u; r_esp -= 4; W32(r_esp, v); }
    /* 00447310: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x447315u); f_008144b0();
    /* 00447315: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447318: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044731b: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00447322: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447325: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 0044732c: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 0044732f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00447331: jle 0x447fd4 */ if ((fZ||fS!=fO)) goto L_00447fd4;
L_00447337:; BB(0x00447337);
    /* 00447337: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 0044733c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044733e: je 0x44734a */ if (fZ) goto L_0044734a;
L_00447340:; BB(0x00447340);
    /* 00447340: mov eax, 0x471c */ r_eax = 0x471cu;
    /* 00447345: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00447348: jmp 0x447352 */ goto L_00447352;
L_0044734a:; BB(0x0044734a);
    /* 0044734a: mov eax, 0x31c7 */ r_eax = 0x31c7u;
    /* 0044734f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_00447352:; BB(0x00447352);
    /* 00447352: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447355: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447357: mov word ptr [edx + 0x3a4], ax */ W16((u32)(r_edx+0x3a4u), (u16)r_eax);
    /* 0044735e: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00447364: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00447366: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00447368: jle 0x447fcd */ if ((fZ||fS!=fO)) goto L_00447fcd;
L_0044736e:; BB(0x0044736e);
    /* 0044736e: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 00447375: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447377: je 0x4474a4 */ if (fZ) goto L_004474a4;
L_0044737d:; BB(0x0044737d);
    /* 0044737d: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00447381: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447386: jge 0x4474a4 */ if ((fS==fO)) goto L_004474a4;
L_0044738c:; BB(0x0044738c);
    /* 0044738c: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0044738f: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447394: jne 0x4474a4 */ if (!fZ) goto L_004474a4;
L_0044739a:; BB(0x0044739a);
    /* 0044739a: lea ecx, [ebp - 0x80] */ r_ecx = (u32)(r_ebp+0xffffff80u);
    /* 0044739d: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 004473a3: mov edi, dword ptr [ebx + 0x304] */ r_edi = R32((u32)(r_ebx+0x304u));
    /* 004473a9: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 004473ac: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 004473b2: mov dword ptr [ebp - 0x7c], edi */ W32((u32)(r_ebp+0xffffff84u), r_edi);
    /* 004473b5: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 004473b8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004473bb: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 004473c1: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4473c6u); f_0082f9c4();
    /* 004473c6: fld dword ptr [ebp - 0x80] */ FPUSH(R_F32((u32)(r_ebp+0xffffff80u)));
    /* 004473c9: fld dword ptr [ebp - 0x78] */ FPUSH(R_F32((u32)(r_ebp+0xffffff88u)));
    /* 004473cc: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004473ce: fmul qword ptr [0x8fe6d8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6d8u));
    /* 004473d4: fdiv qword ptr [0x8fe6d0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6d0u));
    /* 004473da: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004473dd: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 004473e0: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 004473e3: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 004473e7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004473ec: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004473ef: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 004473f2: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 004473f5: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 004473f8: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004473fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004473fc: add ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00447402: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447403: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x447408u); f_007a9018();
    /* 00447408: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044740b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044740e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447410: jle 0x44741d */ if ((fZ||fS!=fO)) goto L_0044741d;
L_00447412:; BB(0x00447412);
    /* 00447412: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00447418: jmp 0x4474a4 */ goto L_004474a4;
L_0044741d:; BB(0x0044741d);
    /* 0044741d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447420: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00447424: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 0044742b: mov word ptr [eax + ecx*2 + 0x3a6], dx */ W16((u32)(r_eax+r_ecx*2+0x3a6u), (u16)r_edx);
    /* 00447433: movsx edi, word ptr [eax + 0x3a4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 0044743a: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0044743d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044743f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00447441: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 00447444: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00447446: mov dword ptr [ecx + eax + 0x3b0], edx */ W32((u32)(r_ecx+r_eax+0x3b0u), r_edx);
    /* 0044744d: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 00447454: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447456: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447458: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0044745b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044745d: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00447460: mov dword ptr [ecx + eax + 0x3b4], edx */ W32((u32)(r_ecx+r_eax+0x3b4u), r_edx);
    /* 00447467: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 0044746e: mov ebx, dword ptr [ebx + 0x40] */ r_ebx = R32((u32)(r_ebx+0x40u));
    /* 00447471: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447473: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447475: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00447478: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044747a: mov dword ptr [ecx + eax + 0x3b8], ebx */ W32((u32)(r_ecx+r_eax+0x3b8u), r_ebx);
    /* 00447481: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 00447488: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044748b: mov word ptr [eax + 0x3a4], dx */ W16((u32)(r_eax+0x3a4u), (u16)r_edx);
    /* 00447492: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00447495: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447498: jge 0x447e9b */ if ((fS==fO)) goto L_00447e9b;
L_0044749e:; BB(0x0044749e);
    /* 0044749e: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
L_004474a4:; BB(0x004474a4);
    /* 004474a4: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004474a7: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004474a9: jl 0x44736e */ if ((fS!=fO)) goto L_0044736e;
L_004474af:; BB(0x004474af);
    /* 004474af: jmp 0x447fbe */ goto L_00447fbe;
L_00447b49:; BB(0x00447b49);
    /* 00447b49: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00447b4c: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00447b4f: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00447b52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00447b55: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00447b5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00447b5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447b5f: ret  */ FN_RET(0x00447238); r_esp += 4; return;
L_00447e9b:; BB(0x00447e9b);
    /* 00447e9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447e9d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00447ea0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00447ea2: jle 0x447f66 */ if ((fZ||fS!=fO)) goto L_00447f66;
L_00447ea8:; BB(0x00447ea8);
    /* 00447ea8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00447eab: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447eae: mov edx, dword ptr [edx + ecx*4 + 0x3ec] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x3ecu));
    /* 00447eb5: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00447eb8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447eba: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00447ebd: je 0x447edc */ if (fZ) goto L_00447edc;
L_00447ebf:; BB(0x00447ebf);
    /* 00447ebf: mov ecx, eax */ r_ecx = r_eax;
    /* 00447ec1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447ec5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447eca: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447ece: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447ed1: mov dword ptr [edx + ecx*2 + 0x3ec], 0 */ W32((u32)(r_edx+r_ecx*2+0x3ecu), 0x0u);
L_00447edc:; BB(0x00447edc);
    /* 00447edc: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 00447ee3: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00447ee5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x447eeau); f_005caba4();
    /* 00447eea: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00447eed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447ef0: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00447ef3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447ef5: je 0x447fb4 */ if (fZ) goto L_00447fb4;
L_00447efb:; BB(0x00447efb);
    /* 00447efb: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 00447f02: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00447f09: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00447f0c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447f0f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00447f12: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00447f15: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447f17: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00447f1a: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00447f1c: lea edi, [ebx + esi + 0x3b0] */ r_edi = (u32)(r_ebx+r_esi+0x3b0u);
    /* 00447f23: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00447f24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447f25: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00447f28: call 0x4496f0 */ r_esp -= 4; W32(r_esp, 0x447f2du); f_004496f0();
    /* 00447f2d: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00447f34:; BB(0x00447f34);
    /* 00447f34: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00447f37: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00447f3a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447f3d: mov dword ptr [edx + ecx*2 + 0x3ec], eax */ W32((u32)(r_edx+r_ecx*2+0x3ecu), r_eax);
    /* 00447f44: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00447f4b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00447f4e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447f51: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 00447f58: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447f5b: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447f5d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00447f60: jl 0x447ea8 */ if ((fS!=fO)) goto L_00447ea8;
L_00447f66:; BB(0x00447f66);
    /* 00447f66: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00447f69: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00447f6c: jge 0x447b49 */ if ((fS==fO)) goto L_00447b49;
L_00447f72:; BB(0x00447f72);
    /* 00447f72: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00447f75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447f78: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00447f7b: mov edx, dword ptr [eax + edx*4 + 0x3ec] */ r_edx = R32((u32)(r_eax+r_edx*4+0x3ecu));
    /* 00447f82: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447f84: je 0x447fa1 */ if (fZ) goto L_00447fa1;
L_00447f86:; BB(0x00447f86);
    /* 00447f86: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447f8a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447f8f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447f93: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447f96: mov dword ptr [edx + ecx*2 + 0x3ec], 0 */ W32((u32)(r_edx+r_ecx*2+0x3ecu), 0x0u);
L_00447fa1:; BB(0x00447fa1);
    /* 00447fa1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00447fa4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00447fa7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00447faa: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00447fad: jl 0x447f72 */ if ((fS!=fO)) goto L_00447f72;
L_00447faf:; BB(0x00447faf);
    /* 00447faf: jmp 0x447b49 */ goto L_00447b49;
L_00447fb4:; BB(0x00447fb4);
    /* 00447fb4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447fb6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00447fb9: jmp 0x447f34 */ goto L_00447f34;
L_00447fbe:; BB(0x00447fbe);
    /* 00447fbe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447fc1: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 00447fc8: jmp 0x447e9b */ goto L_00447e9b;
L_00447fcd:; BB(0x00447fcd);
    /* 00447fcd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00447fcf: jmp 0x447e9b */ goto L_00447e9b;
L_00447fd4:; BB(0x00447fd4);
    /* 00447fd4: mov edx, dword ptr [eax + 0x480] */ r_edx = R32((u32)(r_eax+0x480u));
    /* 00447fda: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447fdc: je 0x447ff8 */ if (fZ) goto L_00447ff8;
L_00447fde:; BB(0x00447fde);
    /* 00447fde: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447fe2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447fe7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447feb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447fee: mov dword ptr [edx + 0x480], 0 */ W32((u32)(r_edx+0x480u), 0x0u);
L_00447ff8:; BB(0x00447ff8);
    /* 00447ff8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447ffb: mov dword ptr [edx + 0x384], 5 */ W32((u32)(r_edx+0x384u), 0x5u);
    /* 00448005: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00448007: mov word ptr [edx + 0x3a2], ax */ W16((u32)(r_edx+0x3a2u), (u16)r_eax);
    /* 0044800e: jmp 0x447337 */ goto L_00447337;
L_00448013:; BB(0x00448013);
    /* 00448013: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00448016: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00448018: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x44801eu); call_ind(t); }
    /* 0044801e: jmp 0x447b49 */ goto L_00447b49;
}

void f_004474b4(void)
{
    FN_ENTER(0x004474b4);
    /* 004474b4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004474b6: je 0x44818e */ if (fZ) goto L_0044818e;
L_004474bc:; BB(0x004474bc);
    /* 004474bc: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004474bf: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 004474c2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004474c5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004474c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004474c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004474c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004474ca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004474cb: push 0x350 */ { u32 v = 0x350u; r_esp -= 4; W32(r_esp, v); }
    /* 004474d0: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4474d5u); f_008144b0();
    /* 004474d5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004474d8: mov ecx, esi */ r_ecx = r_esi;
    /* 004474da: push 0xffffc000 */ { u32 v = 0xffffc000u; r_esp -= 4; W32(r_esp, v); }
    /* 004474df: push 0x566 */ { u32 v = 0x566u; r_esp -= 4; W32(r_esp, v); }
    /* 004474e4: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004474e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004474e8: call 0x52cc54 */ r_esp -= 4; W32(r_esp, 0x4474edu); f_0052cc54();
    /* 004474ed: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004474f0: mov ecx, esi */ r_ecx = r_esi;
    /* 004474f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004474f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004474f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004474f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004474f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004474f8: push 0x348 */ { u32 v = 0x348u; r_esp -= 4; W32(r_esp, v); }
    /* 004474fd: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x447502u); f_008144b0();
    /* 00447502: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447505: mov ecx, esi */ r_ecx = r_esi;
    /* 00447507: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x44750cu); f_007aa094();
    /* 0044750c: mov ecx, esi */ r_ecx = r_esi;
    /* 0044750e: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x447513u); f_0052cac0();
    /* 00447513: mov ecx, esi */ r_ecx = r_esi;
    /* 00447515: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00447517: lea eax, [ecx + 0x3e0] */ r_eax = (u32)(r_ecx+0x3e0u);
    /* 0044751d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00447520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447521: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00447523: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x447529u); call_ind(t); }
    /* 00447529: mov edx, esi */ r_edx = r_esi;
    /* 0044752b: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 00447531: fcomp dword ptr [0x8fe758] */ fx_compare(ST(0), R_F32((u32)(0x8fe758u))); FPOP();
    /* 00447537: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00447539: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044753a: jb 0x447588 */ if (fC) goto L_00447588;
L_0044753c:; BB(0x0044753c);
    /* 0044753c: mov ecx, edx */ r_ecx = r_edx;
    /* 0044753e: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x447543u); f_0052cac0();
    /* 00447543: mov ecx, esi */ r_ecx = r_esi;
    /* 00447545: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 0044754b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044754c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044754e: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00447550: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x447556u); call_ind(t); }
    /* 00447556: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 0044755c: push 0x1a0 */ { u32 v = 0x1a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00447561: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447562: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x447567u); f_00509590();
    /* 00447567: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044756a: mov edx, esi */ r_edx = r_esi;
    /* 0044756c: mov dword ptr [edx + 0x384], 4 */ W32((u32)(r_edx+0x384u), 0x4u);
    /* 00447576: mov dword ptr [edx + 0x480], eax */ W32((u32)(r_edx+0x480u), r_eax);
    /* 0044757c: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00447581: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
L_00447588:; BB(0x00447588);
    /* 00447588: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 0044758d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044758f: je 0x44759b */ if (fZ) goto L_0044759b;
L_00447591:; BB(0x00447591);
    /* 00447591: mov eax, 0x471c */ r_eax = 0x471cu;
    /* 00447596: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00447599: jmp 0x4475a3 */ goto L_004475a3;
L_0044759b:; BB(0x0044759b);
    /* 0044759b: mov eax, 0x31c7 */ r_eax = 0x31c7u;
    /* 004475a0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_004475a3:; BB(0x004475a3);
    /* 004475a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004475a5: mov word ptr [edx + 0x3a4], ax */ W16((u32)(r_edx+0x3a4u), (u16)r_eax);
    /* 004475ac: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 004475b2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004475b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004475b6: jle 0x448187 */ if ((fZ||fS!=fO)) goto L_00448187;
L_004475bc:; BB(0x004475bc);
    /* 004475bc: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 004475c3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004475c5: je 0x447704 */ if (fZ) goto L_00447704;
L_004475cb:; BB(0x004475cb);
    /* 004475cb: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004475cf: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004475d4: jge 0x447704 */ if ((fS==fO)) goto L_00447704;
L_004475da:; BB(0x004475da);
    /* 004475da: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004475dd: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004475e2: jne 0x447704 */ if (!fZ) goto L_00447704;
L_004475e8:; BB(0x004475e8);
    /* 004475e8: lea ecx, [ebp - 0xac] */ r_ecx = (u32)(r_ebp+0xffffff54u);
    /* 004475ee: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 004475f4: mov edi, dword ptr [ebx + 0x304] */ r_edi = R32((u32)(r_ebx+0x304u));
    /* 004475fa: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00447600: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 00447606: mov dword ptr [ebp - 0xa8], edi */ W32((u32)(r_ebp+0xffffff58u), r_edi);
    /* 0044760c: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00447612: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447615: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 0044761b: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x447620u); f_0082f9c4();
    /* 00447620: fld dword ptr [ebp - 0xac] */ FPUSH(R_F32((u32)(r_ebp+0xffffff54u)));
    /* 00447626: fld dword ptr [ebp - 0xa4] */ FPUSH(R_F32((u32)(r_ebp+0xffffff5cu)));
    /* 0044762c: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0044762e: fmul qword ptr [0x8fe6d8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6d8u));
    /* 00447634: fdiv qword ptr [0x8fe6d0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6d0u));
    /* 0044763a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044763d: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00447640: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 00447643: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 00447647: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044764c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0044764f: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 00447652: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00447655: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 00447658: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044765b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044765c: add ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00447662: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447663: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x447668u); f_007a9018();
    /* 00447668: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044766b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044766e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447670: jle 0x44767d */ if ((fZ||fS!=fO)) goto L_0044767d;
L_00447672:; BB(0x00447672);
    /* 00447672: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00447678: jmp 0x447704 */ goto L_00447704;
L_0044767d:; BB(0x0044767d);
    /* 0044767d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447680: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00447684: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 0044768b: mov word ptr [eax + ecx*2 + 0x3a6], dx */ W16((u32)(r_eax+r_ecx*2+0x3a6u), (u16)r_edx);
    /* 00447693: movsx edi, word ptr [eax + 0x3a4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 0044769a: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0044769d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044769f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004476a1: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 004476a4: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004476a6: mov dword ptr [ecx + eax + 0x3b0], edx */ W32((u32)(r_ecx+r_eax+0x3b0u), r_edx);
    /* 004476ad: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004476b4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004476b6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004476b8: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004476bb: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004476bd: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004476c0: mov dword ptr [ecx + eax + 0x3b4], edx */ W32((u32)(r_ecx+r_eax+0x3b4u), r_edx);
    /* 004476c7: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004476ce: mov ebx, dword ptr [ebx + 0x40] */ r_ebx = R32((u32)(r_ebx+0x40u));
    /* 004476d1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004476d3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004476d5: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004476d8: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004476da: mov dword ptr [ecx + eax + 0x3b8], ebx */ W32((u32)(r_ecx+r_eax+0x3b8u), r_ebx);
    /* 004476e1: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004476e8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004476eb: mov word ptr [eax + 0x3a4], dx */ W16((u32)(r_eax+0x3a4u), (u16)r_edx);
    /* 004476f2: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 004476f5: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004476f8: jge 0x448023 */ if ((fS==fO)) goto L_00448023;
L_004476fe:; BB(0x004476fe);
    /* 004476fe: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
L_00447704:; BB(0x00447704);
    /* 00447704: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00447707: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447709: jl 0x4475bc */ if ((fS!=fO)) goto L_004475bc;
L_0044770f:; BB(0x0044770f);
    /* 0044770f: jmp 0x448178 */ goto L_00448178;
L_00447b49:; BB(0x00447b49);
    /* 00447b49: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00447b4c: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00447b4f: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00447b52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00447b55: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00447b5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00447b5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447b5f: ret  */ FN_RET(0x004474b4); r_esp += 4; return;
L_00448023:; BB(0x00448023);
    /* 00448023: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00448025: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00448028: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044802a: jle 0x4480fa */ if ((fZ||fS!=fO)) goto L_004480fa;
L_00448030:; BB(0x00448030);
    /* 00448030: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00448033: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00448036: mov edx, dword ptr [edx + ecx*4 + 0x3ec] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x3ecu));
    /* 0044803d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00448040: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448042: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00448045: je 0x448064 */ if (fZ) goto L_00448064;
L_00448047:; BB(0x00448047);
    /* 00448047: mov ecx, eax */ r_ecx = r_eax;
    /* 00448049: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044804d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00448052: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00448056: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00448059: mov dword ptr [edx + ecx*2 + 0x3ec], 0 */ W32((u32)(r_edx+r_ecx*2+0x3ecu), 0x0u);
L_00448064:; BB(0x00448064);
    /* 00448064: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 0044806e: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00448070: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x448075u); f_005caba4();
    /* 00448075: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00448078: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044807b: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00448081: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448083: je 0x44816e */ if (fZ) goto L_0044816e;
L_00448089:; BB(0x00448089);
    /* 00448089: mov dword ptr [ebp - 0xa0], 1 */ W32((u32)(r_ebp+0xffffff60u), 0x1u);
    /* 00448093: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0044809a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044809d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004480a0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004480a3: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004480a6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004480a8: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004480ab: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004480ad: lea edi, [ebx + esi + 0x3b0] */ r_edi = (u32)(r_ebx+r_esi+0x3b0u);
    /* 004480b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004480b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004480b6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004480b9: call 0x4496f0 */ r_esp -= 4; W32(r_esp, 0x4480beu); f_004496f0();
    /* 004480be: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_004480c8:; BB(0x004480c8);
    /* 004480c8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004480cb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004480ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004480d1: mov dword ptr [edx + ecx*2 + 0x3ec], eax */ W32((u32)(r_edx+r_ecx*2+0x3ecu), r_eax);
    /* 004480d8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004480df: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004480e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004480e5: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004480ec: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004480ef: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004480f1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004480f4: jl 0x448030 */ if ((fS!=fO)) goto L_00448030;
L_004480fa:; BB(0x004480fa);
    /* 004480fa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004480fd: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448100: jge 0x44813f */ if ((fS==fO)) goto L_0044813f;
L_00448102:; BB(0x00448102);
    /* 00448102: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00448105: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00448108: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0044810b: mov edx, dword ptr [eax + edx*4 + 0x3ec] */ r_edx = R32((u32)(r_eax+r_edx*4+0x3ecu));
    /* 00448112: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448114: je 0x448131 */ if (fZ) goto L_00448131;
L_00448116:; BB(0x00448116);
    /* 00448116: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044811a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044811f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00448123: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00448126: mov dword ptr [edx + ecx*2 + 0x3ec], 0 */ W32((u32)(r_edx+r_ecx*2+0x3ecu), 0x0u);
L_00448131:; BB(0x00448131);
    /* 00448131: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00448134: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00448137: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044813a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044813d: jl 0x448102 */ if ((fS!=fO)) goto L_00448102;
L_0044813f:; BB(0x0044813f);
    /* 0044813f: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00448144: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00448147: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x44814cu); f_007aaa30();
    /* 0044814c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044814e: je 0x447b49 */ if (fZ) goto L_00447b49;
L_00448154:; BB(0x00448154);
    /* 00448154: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448157: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00448159: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044815a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044815b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044815c: push 0x352 */ { u32 v = 0x352u; r_esp -= 4; W32(r_esp, v); }
    /* 00448161: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x448166u); f_00814298();
    /* 00448166: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00448169: jmp 0x447b49 */ goto L_00447b49;
L_0044816e:; BB(0x0044816e);
    /* 0044816e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00448170: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00448173: jmp 0x4480c8 */ goto L_004480c8;
L_00448178:; BB(0x00448178);
    /* 00448178: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044817b: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 00448182: jmp 0x448023 */ goto L_00448023;
L_00448187:; BB(0x00448187);
    /* 00448187: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00448189: jmp 0x448023 */ goto L_00448023;
L_0044818e:; BB(0x0044818e);
    /* 0044818e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00448191: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00448193: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x448199u); call_ind(t); }
    /* 00448199: jmp 0x447b49 */ goto L_00447b49;
}

void f_00447714(void)
{
    FN_ENTER(0x00447714);
    /* 00447714: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447716: je 0x448315 */ if (fZ) goto L_00448315;
L_0044771c:; BB(0x0044771c);
    /* 0044771c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044771f: lea esi, [ecx + 0x38] */ r_esi = (u32)(r_ecx+0x38u);
    /* 00447722: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00447724: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447725: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447726: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00447727: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447728: push 0x350 */ { u32 v = 0x350u; r_esp -= 4; W32(r_esp, v); }
    /* 0044772d: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x447732u); f_008144b0();
    /* 00447732: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447735: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447738: push 0xffffc000 */ { u32 v = 0xffffc000u; r_esp -= 4; W32(r_esp, v); }
    /* 0044773d: push 0x566 */ { u32 v = 0x566u; r_esp -= 4; W32(r_esp, v); }
    /* 00447742: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00447745: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00447746: call 0x52cc54 */ r_esp -= 4; W32(r_esp, 0x44774bu); f_0052cc54();
    /* 0044774b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044774e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447750: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447752: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00447753: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447754: push 0x348 */ { u32 v = 0x348u; r_esp -= 4; W32(r_esp, v); }
    /* 00447759: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x44775eu); f_008144b0();
    /* 0044775e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447761: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447764: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x447769u); f_007aa094();
    /* 00447769: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044776c: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x447771u); f_0052cac0();
    /* 00447771: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447774: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00447776: lea eax, [ecx + 0x3e0] */ r_eax = (u32)(r_ecx+0x3e0u);
    /* 0044777c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044777f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447780: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00447782: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x447788u); call_ind(t); }
    /* 00447788: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044778b: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00447792: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447795: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 0044779c: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 0044779f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004477a1: jle 0x4482e3 */ if ((fZ||fS!=fO)) goto L_004482e3;
L_004477a7:; BB(0x004477a7);
    /* 004477a7: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 004477ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004477ae: je 0x4477ba */ if (fZ) goto L_004477ba;
L_004477b0:; BB(0x004477b0);
    /* 004477b0: mov eax, 0x471c */ r_eax = 0x471cu;
    /* 004477b5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004477b8: jmp 0x4477c2 */ goto L_004477c2;
L_004477ba:; BB(0x004477ba);
    /* 004477ba: mov eax, 0x31c7 */ r_eax = 0x31c7u;
    /* 004477bf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_004477c2:; BB(0x004477c2);
    /* 004477c2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004477c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004477c7: mov word ptr [edx + 0x3a4], ax */ W16((u32)(r_edx+0x3a4u), (u16)r_eax);
    /* 004477ce: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 004477d4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004477d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004477d8: jle 0x4482dc */ if ((fZ||fS!=fO)) goto L_004482dc;
L_004477de:; BB(0x004477de);
    /* 004477de: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 004477e5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004477e7: je 0x447926 */ if (fZ) goto L_00447926;
L_004477ed:; BB(0x004477ed);
    /* 004477ed: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004477f1: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004477f6: jge 0x447926 */ if ((fS==fO)) goto L_00447926;
L_004477fc:; BB(0x004477fc);
    /* 004477fc: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004477ff: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447804: jne 0x447926 */ if (!fZ) goto L_00447926;
L_0044780a:; BB(0x0044780a);
    /* 0044780a: lea ecx, [ebp - 0xcc] */ r_ecx = (u32)(r_ebp+0xffffff34u);
    /* 00447810: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 00447816: mov edi, dword ptr [ebx + 0x304] */ r_edi = R32((u32)(r_ebx+0x304u));
    /* 0044781c: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00447822: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 00447828: mov dword ptr [ebp - 0xc8], edi */ W32((u32)(r_ebp+0xffffff38u), r_edi);
    /* 0044782e: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 00447834: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447837: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 0044783d: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x447842u); f_0082f9c4();
    /* 00447842: fld dword ptr [ebp - 0xcc] */ FPUSH(R_F32((u32)(r_ebp+0xffffff34u)));
    /* 00447848: fld dword ptr [ebp - 0xc4] */ FPUSH(R_F32((u32)(r_ebp+0xffffff3cu)));
    /* 0044784e: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00447850: fmul qword ptr [0x8fe6d8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6d8u));
    /* 00447856: fdiv qword ptr [0x8fe6d0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6d0u));
    /* 0044785c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044785f: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00447862: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 00447865: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 00447869: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044786e: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00447871: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 00447874: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00447877: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 0044787a: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044787d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044787e: add ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00447884: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447885: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x44788au); f_007a9018();
    /* 0044788a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044788d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00447890: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447892: jle 0x44789f */ if ((fZ||fS!=fO)) goto L_0044789f;
L_00447894:; BB(0x00447894);
    /* 00447894: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0044789a: jmp 0x447926 */ goto L_00447926;
L_0044789f:; BB(0x0044789f);
    /* 0044789f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004478a2: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004478a6: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004478ad: mov word ptr [eax + ecx*2 + 0x3a6], dx */ W16((u32)(r_eax+r_ecx*2+0x3a6u), (u16)r_edx);
    /* 004478b5: movsx edi, word ptr [eax + 0x3a4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004478bc: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004478bf: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004478c1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004478c3: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 004478c6: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004478c8: mov dword ptr [ecx + eax + 0x3b0], edx */ W32((u32)(r_ecx+r_eax+0x3b0u), r_edx);
    /* 004478cf: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004478d6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004478d8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004478da: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004478dd: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004478df: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004478e2: mov dword ptr [ecx + eax + 0x3b4], edx */ W32((u32)(r_ecx+r_eax+0x3b4u), r_edx);
    /* 004478e9: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004478f0: mov ebx, dword ptr [ebx + 0x40] */ r_ebx = R32((u32)(r_ebx+0x40u));
    /* 004478f3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004478f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004478f7: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004478fa: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004478fc: mov dword ptr [ecx + eax + 0x3b8], ebx */ W32((u32)(r_ecx+r_eax+0x3b8u), r_ebx);
    /* 00447903: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 0044790a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044790d: mov word ptr [eax + 0x3a4], dx */ W16((u32)(r_eax+0x3a4u), (u16)r_edx);
    /* 00447914: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00447917: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044791a: jge 0x44819e */ if ((fS==fO)) goto L_0044819e;
L_00447920:; BB(0x00447920);
    /* 00447920: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
L_00447926:; BB(0x00447926);
    /* 00447926: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00447929: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044792b: jl 0x4477de */ if ((fS!=fO)) goto L_004477de;
L_00447931:; BB(0x00447931);
    /* 00447931: jmp 0x4482cd */ goto L_004482cd;
L_00447b49:; BB(0x00447b49);
    /* 00447b49: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00447b4c: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00447b4f: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00447b52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00447b55: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00447b5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00447b5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447b5f: ret  */ FN_RET(0x00447714); r_esp += 4; return;
L_0044819e:; BB(0x0044819e);
    /* 0044819e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004481a0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004481a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004481a5: jle 0x448275 */ if ((fZ||fS!=fO)) goto L_00448275;
L_004481ab:; BB(0x004481ab);
    /* 004481ab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004481ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004481b1: mov edx, dword ptr [edx + ecx*4 + 0x3ec] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x3ecu));
    /* 004481b8: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004481bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004481bd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004481c0: je 0x4481df */ if (fZ) goto L_004481df;
L_004481c2:; BB(0x004481c2);
    /* 004481c2: mov ecx, eax */ r_ecx = r_eax;
    /* 004481c4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004481c8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004481cd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004481d1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004481d4: mov dword ptr [edx + ecx*2 + 0x3ec], 0 */ W32((u32)(r_edx+r_ecx*2+0x3ecu), 0x0u);
L_004481df:; BB(0x004481df);
    /* 004481df: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
    /* 004481e9: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004481eb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4481f0u); f_005caba4();
    /* 004481f0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004481f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004481f6: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 004481fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004481fe: je 0x4482c3 */ if (fZ) goto L_004482c3;
L_00448204:; BB(0x00448204);
    /* 00448204: mov dword ptr [ebp - 0xc0], 1 */ W32((u32)(r_ebp+0xffffff40u), 0x1u);
    /* 0044820e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00448215: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448218: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044821b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044821e: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00448221: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00448223: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00448226: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00448228: lea edi, [ebx + esi + 0x3b0] */ r_edi = (u32)(r_ebx+r_esi+0x3b0u);
    /* 0044822f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00448230: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448231: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00448234: call 0x4496f0 */ r_esp -= 4; W32(r_esp, 0x448239u); f_004496f0();
    /* 00448239: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_00448243:; BB(0x00448243);
    /* 00448243: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00448246: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00448249: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044824c: mov dword ptr [edx + ecx*2 + 0x3ec], eax */ W32((u32)(r_edx+r_ecx*2+0x3ecu), r_eax);
    /* 00448253: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044825a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044825d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00448260: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 00448267: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044826a: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044826c: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0044826f: jl 0x4481ab */ if ((fS!=fO)) goto L_004481ab;
L_00448275:; BB(0x00448275);
    /* 00448275: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448278: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044827b: jge 0x447b49 */ if ((fS==fO)) goto L_00447b49;
L_00448281:; BB(0x00448281);
    /* 00448281: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448284: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00448287: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0044828a: mov edx, dword ptr [eax + edx*4 + 0x3ec] */ r_edx = R32((u32)(r_eax+r_edx*4+0x3ecu));
    /* 00448291: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448293: je 0x4482b0 */ if (fZ) goto L_004482b0;
L_00448295:; BB(0x00448295);
    /* 00448295: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00448299: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044829e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004482a2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004482a5: mov dword ptr [edx + ecx*2 + 0x3ec], 0 */ W32((u32)(r_edx+r_ecx*2+0x3ecu), 0x0u);
L_004482b0:; BB(0x004482b0);
    /* 004482b0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004482b3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004482b6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004482b9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004482bc: jl 0x448281 */ if ((fS!=fO)) goto L_00448281;
L_004482be:; BB(0x004482be);
    /* 004482be: jmp 0x447b49 */ goto L_00447b49;
L_004482c3:; BB(0x004482c3);
    /* 004482c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004482c5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004482c8: jmp 0x448243 */ goto L_00448243;
L_004482cd:; BB(0x004482cd);
    /* 004482cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004482d0: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004482d7: jmp 0x44819e */ goto L_0044819e;
L_004482dc:; BB(0x004482dc);
    /* 004482dc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004482de: jmp 0x44819e */ goto L_0044819e;
L_004482e3:; BB(0x004482e3);
    /* 004482e3: mov edx, eax */ r_edx = r_eax;
    /* 004482e5: mov eax, 2 */ r_eax = 0x2u;
    /* 004482ea: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 004482f1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004482f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004482f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004482f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004482f6: push 0x351 */ { u32 v = 0x351u; r_esp -= 4; W32(r_esp, v); }
    /* 004482fb: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x448300u); f_00814298();
    /* 00448300: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448303: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00448306: mov dword ptr [eax + 0x384], 3 */ W32((u32)(r_eax+0x384u), 0x3u);
    /* 00448310: jmp 0x4477a7 */ goto L_004477a7;
L_00448315:; BB(0x00448315);
    /* 00448315: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00448318: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0044831a: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x448320u); call_ind(t); }
    /* 00448320: jmp 0x447b49 */ goto L_00447b49;
}

void f_00447936(void)
{
    FN_ENTER(0x00447936);
    goto L_00447936;
L_00447714:; BB(0x00447714);
    /* 00447714: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447716: je 0x448315 */ if (fZ) goto L_00448315;
L_0044771c:; BB(0x0044771c);
    /* 0044771c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044771f: lea esi, [ecx + 0x38] */ r_esi = (u32)(r_ecx+0x38u);
    /* 00447722: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00447724: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447725: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447726: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00447727: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447728: push 0x350 */ { u32 v = 0x350u; r_esp -= 4; W32(r_esp, v); }
    /* 0044772d: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x447732u); f_008144b0();
    /* 00447732: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447735: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447738: push 0xffffc000 */ { u32 v = 0xffffc000u; r_esp -= 4; W32(r_esp, v); }
    /* 0044773d: push 0x566 */ { u32 v = 0x566u; r_esp -= 4; W32(r_esp, v); }
    /* 00447742: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00447745: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00447746: call 0x52cc54 */ r_esp -= 4; W32(r_esp, 0x44774bu); f_0052cc54();
    /* 0044774b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044774e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447750: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447752: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00447753: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447754: push 0x348 */ { u32 v = 0x348u; r_esp -= 4; W32(r_esp, v); }
    /* 00447759: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x44775eu); f_008144b0();
    /* 0044775e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447761: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447764: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x447769u); f_007aa094();
    /* 00447769: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044776c: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x447771u); f_0052cac0();
    /* 00447771: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447774: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00447776: lea eax, [ecx + 0x3e0] */ r_eax = (u32)(r_ecx+0x3e0u);
    /* 0044777c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044777f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447780: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00447782: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x447788u); call_ind(t); }
    /* 00447788: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044778b: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00447792: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447795: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 0044779c: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 0044779f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004477a1: jle 0x4482e3 */ if ((fZ||fS!=fO)) goto L_004482e3;
L_004477a7:; BB(0x004477a7);
    /* 004477a7: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 004477ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004477ae: je 0x4477ba */ if (fZ) goto L_004477ba;
L_004477b0:; BB(0x004477b0);
    /* 004477b0: mov eax, 0x471c */ r_eax = 0x471cu;
    /* 004477b5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004477b8: jmp 0x4477c2 */ goto L_004477c2;
L_004477ba:; BB(0x004477ba);
    /* 004477ba: mov eax, 0x31c7 */ r_eax = 0x31c7u;
    /* 004477bf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_004477c2:; BB(0x004477c2);
    /* 004477c2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004477c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004477c7: mov word ptr [edx + 0x3a4], ax */ W16((u32)(r_edx+0x3a4u), (u16)r_eax);
    /* 004477ce: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 004477d4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004477d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004477d8: jle 0x4482dc */ if ((fZ||fS!=fO)) goto L_004482dc;
L_004477de:; BB(0x004477de);
    /* 004477de: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 004477e5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004477e7: je 0x447926 */ if (fZ) goto L_00447926;
L_004477ed:; BB(0x004477ed);
    /* 004477ed: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004477f1: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004477f6: jge 0x447926 */ if ((fS==fO)) goto L_00447926;
L_004477fc:; BB(0x004477fc);
    /* 004477fc: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004477ff: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447804: jne 0x447926 */ if (!fZ) goto L_00447926;
L_0044780a:; BB(0x0044780a);
    /* 0044780a: lea ecx, [ebp - 0xcc] */ r_ecx = (u32)(r_ebp+0xffffff34u);
    /* 00447810: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 00447816: mov edi, dword ptr [ebx + 0x304] */ r_edi = R32((u32)(r_ebx+0x304u));
    /* 0044781c: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00447822: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 00447828: mov dword ptr [ebp - 0xc8], edi */ W32((u32)(r_ebp+0xffffff38u), r_edi);
    /* 0044782e: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 00447834: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447837: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 0044783d: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x447842u); f_0082f9c4();
    /* 00447842: fld dword ptr [ebp - 0xcc] */ FPUSH(R_F32((u32)(r_ebp+0xffffff34u)));
    /* 00447848: fld dword ptr [ebp - 0xc4] */ FPUSH(R_F32((u32)(r_ebp+0xffffff3cu)));
    /* 0044784e: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00447850: fmul qword ptr [0x8fe6d8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6d8u));
    /* 00447856: fdiv qword ptr [0x8fe6d0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6d0u));
    /* 0044785c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044785f: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00447862: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 00447865: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 00447869: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044786e: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00447871: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 00447874: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00447877: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 0044787a: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044787d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044787e: add ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00447884: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447885: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x44788au); f_007a9018();
    /* 0044788a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044788d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00447890: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447892: jle 0x44789f */ if ((fZ||fS!=fO)) goto L_0044789f;
L_00447894:; BB(0x00447894);
    /* 00447894: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0044789a: jmp 0x447926 */ goto L_00447926;
L_0044789f:; BB(0x0044789f);
    /* 0044789f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004478a2: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004478a6: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004478ad: mov word ptr [eax + ecx*2 + 0x3a6], dx */ W16((u32)(r_eax+r_ecx*2+0x3a6u), (u16)r_edx);
    /* 004478b5: movsx edi, word ptr [eax + 0x3a4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004478bc: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004478bf: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004478c1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004478c3: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 004478c6: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004478c8: mov dword ptr [ecx + eax + 0x3b0], edx */ W32((u32)(r_ecx+r_eax+0x3b0u), r_edx);
    /* 004478cf: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004478d6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004478d8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004478da: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004478dd: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004478df: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004478e2: mov dword ptr [ecx + eax + 0x3b4], edx */ W32((u32)(r_ecx+r_eax+0x3b4u), r_edx);
    /* 004478e9: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004478f0: mov ebx, dword ptr [ebx + 0x40] */ r_ebx = R32((u32)(r_ebx+0x40u));
    /* 004478f3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004478f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004478f7: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004478fa: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004478fc: mov dword ptr [ecx + eax + 0x3b8], ebx */ W32((u32)(r_ecx+r_eax+0x3b8u), r_ebx);
    /* 00447903: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 0044790a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044790d: mov word ptr [eax + 0x3a4], dx */ W16((u32)(r_eax+0x3a4u), (u16)r_edx);
    /* 00447914: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00447917: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044791a: jge 0x44819e */ if ((fS==fO)) goto L_0044819e;
L_00447920:; BB(0x00447920);
    /* 00447920: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
L_00447926:; BB(0x00447926);
    /* 00447926: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00447929: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044792b: jl 0x4477de */ if ((fS!=fO)) goto L_004477de;
L_00447931:; BB(0x00447931);
    /* 00447931: jmp 0x4482cd */ goto L_004482cd;
L_00447936:; BB(0x00447936);
    /* 00447936: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447939: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044793b: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 00447942: mov word ptr [ecx + 0x3a0], dx */ W16((u32)(r_ecx+0x3a0u), (u16)r_edx);
    /* 00447949: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044794c: mov dword ptr [ecx + 0x384], 2 */ W32((u32)(r_ecx+0x384u), 0x2u);
    /* 00447956: mov edx, 0x5a */ r_edx = 0x5au;
    /* 0044795b: mov word ptr [ecx + 0x344], dx */ W16((u32)(r_ecx+0x344u), (u16)r_edx);
    /* 00447962: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00447968: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0044796a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044796c: jle 0x447714 */ if ((fZ||fS!=fO)) goto L_00447714;
L_00447972:; BB(0x00447972);
    /* 00447972: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 00447979: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044797b: je 0x447a76 */ if (fZ) goto L_00447a76;
L_00447981:; BB(0x00447981);
    /* 00447981: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00447985: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447986: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x44798bu); f_007ba9ec();
    /* 0044798b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044798c: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0044798f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447991: je 0x44799e */ if (fZ) goto L_0044799e;
L_00447993:; BB(0x00447993);
    /* 00447993: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00447999: jmp 0x447a76 */ goto L_00447a76;
L_0044799e:; BB(0x0044799e);
    /* 0044799e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004479a1: lea edx, [edx + 0x38] */ r_edx = (u32)(r_edx+0x38u);
    /* 004479a4: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004479a7: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 004479aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004479ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004479ac: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x4479b1u); f_0078ea50();
    /* 004479b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004479b4: fcomp dword ptr [0x8fe75c] */ fx_compare(ST(0), R_F32((u32)(0x8fe75cu))); FPOP();
    /* 004479ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004479bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004479bd: jbe 0x4479ca */ if ((fC||fZ)) goto L_004479ca;
L_004479bf:; BB(0x004479bf);
    /* 004479bf: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 004479c5: jmp 0x447a76 */ goto L_00447a76;
L_004479ca:; BB(0x004479ca);
    /* 004479ca: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004479d0: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 004479d3: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 004479d9: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 004479dc: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 004479e2: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 004479e5: mov dword ptr [ebp - 0xd0], edx */ W32((u32)(r_ebp+0xffffff30u), r_edx);
    /* 004479eb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004479ee: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4479f3u); f_0082f9c4();
    /* 004479f3: fld dword ptr [ebp - 0xd0] */ FPUSH(R_F32((u32)(r_ebp+0xffffff30u)));
    /* 004479f9: fld dword ptr [ebp - 0xd8] */ FPUSH(R_F32((u32)(r_ebp+0xffffff28u)));
    /* 004479ff: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00447a01: fmul qword ptr [0x8fe6d8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6d8u));
    /* 00447a07: fdiv qword ptr [0x8fe6d0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6d0u));
    /* 00447a0d: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 00447a10: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 00447a14: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447a19: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00447a1c: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 00447a1f: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00447a22: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 00447a25: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447a28: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00447a2b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x447a30u); f_0082ddd8();
    /* 00447a30: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00447a36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00447a39: fstp dword ptr [ebp - 0xd8] */ W_F32((u32)(r_ebp+0xffffff28u), ST(0)); FPOP();
    /* 00447a3f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x447a44u); f_0082dcbc();
    /* 00447a44: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00447a4a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00447a4d: fstp dword ptr [ebp - 0xd0] */ W_F32((u32)(r_ebp+0xffffff30u), ST(0)); FPOP();
    /* 00447a53: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 00447a59: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x447a5eu); f_0082ebac();
    /* 00447a5e: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 00447a64: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00447a6a: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 00447a6d: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00447a73: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
L_00447a76:; BB(0x00447a76);
    /* 00447a76: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00447a79: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447a7b: jl 0x447972 */ if ((fS!=fO)) goto L_00447972;
L_00447a81:; BB(0x00447a81);
    /* 00447a81: jmp 0x447714 */ goto L_00447714;
L_00447b49:; BB(0x00447b49);
    /* 00447b49: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00447b4c: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00447b4f: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00447b52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00447b55: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00447b5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00447b5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447b5f: ret  */ FN_RET(0x00447936); r_esp += 4; return;
L_0044819e:; BB(0x0044819e);
    /* 0044819e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004481a0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004481a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004481a5: jle 0x448275 */ if ((fZ||fS!=fO)) goto L_00448275;
L_004481ab:; BB(0x004481ab);
    /* 004481ab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004481ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004481b1: mov edx, dword ptr [edx + ecx*4 + 0x3ec] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x3ecu));
    /* 004481b8: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004481bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004481bd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004481c0: je 0x4481df */ if (fZ) goto L_004481df;
L_004481c2:; BB(0x004481c2);
    /* 004481c2: mov ecx, eax */ r_ecx = r_eax;
    /* 004481c4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004481c8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004481cd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004481d1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004481d4: mov dword ptr [edx + ecx*2 + 0x3ec], 0 */ W32((u32)(r_edx+r_ecx*2+0x3ecu), 0x0u);
L_004481df:; BB(0x004481df);
    /* 004481df: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
    /* 004481e9: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004481eb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4481f0u); f_005caba4();
    /* 004481f0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004481f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004481f6: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 004481fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004481fe: je 0x4482c3 */ if (fZ) goto L_004482c3;
L_00448204:; BB(0x00448204);
    /* 00448204: mov dword ptr [ebp - 0xc0], 1 */ W32((u32)(r_ebp+0xffffff40u), 0x1u);
    /* 0044820e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00448215: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448218: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044821b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044821e: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00448221: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00448223: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00448226: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00448228: lea edi, [ebx + esi + 0x3b0] */ r_edi = (u32)(r_ebx+r_esi+0x3b0u);
    /* 0044822f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00448230: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448231: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00448234: call 0x4496f0 */ r_esp -= 4; W32(r_esp, 0x448239u); f_004496f0();
    /* 00448239: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_00448243:; BB(0x00448243);
    /* 00448243: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00448246: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00448249: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044824c: mov dword ptr [edx + ecx*2 + 0x3ec], eax */ W32((u32)(r_edx+r_ecx*2+0x3ecu), r_eax);
    /* 00448253: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044825a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044825d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00448260: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 00448267: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044826a: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044826c: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0044826f: jl 0x4481ab */ if ((fS!=fO)) goto L_004481ab;
L_00448275:; BB(0x00448275);
    /* 00448275: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448278: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044827b: jge 0x447b49 */ if ((fS==fO)) goto L_00447b49;
L_00448281:; BB(0x00448281);
    /* 00448281: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448284: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00448287: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0044828a: mov edx, dword ptr [eax + edx*4 + 0x3ec] */ r_edx = R32((u32)(r_eax+r_edx*4+0x3ecu));
    /* 00448291: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448293: je 0x4482b0 */ if (fZ) goto L_004482b0;
L_00448295:; BB(0x00448295);
    /* 00448295: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00448299: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044829e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004482a2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004482a5: mov dword ptr [edx + ecx*2 + 0x3ec], 0 */ W32((u32)(r_edx+r_ecx*2+0x3ecu), 0x0u);
L_004482b0:; BB(0x004482b0);
    /* 004482b0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004482b3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004482b6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004482b9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004482bc: jl 0x448281 */ if ((fS!=fO)) goto L_00448281;
L_004482be:; BB(0x004482be);
    /* 004482be: jmp 0x447b49 */ goto L_00447b49;
L_004482c3:; BB(0x004482c3);
    /* 004482c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004482c5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004482c8: jmp 0x448243 */ goto L_00448243;
L_004482cd:; BB(0x004482cd);
    /* 004482cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004482d0: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004482d7: jmp 0x44819e */ goto L_0044819e;
L_004482dc:; BB(0x004482dc);
    /* 004482dc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004482de: jmp 0x44819e */ goto L_0044819e;
L_004482e3:; BB(0x004482e3);
    /* 004482e3: mov edx, eax */ r_edx = r_eax;
    /* 004482e5: mov eax, 2 */ r_eax = 0x2u;
    /* 004482ea: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 004482f1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004482f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004482f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004482f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004482f6: push 0x351 */ { u32 v = 0x351u; r_esp -= 4; W32(r_esp, v); }
    /* 004482fb: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x448300u); f_00814298();
    /* 00448300: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448303: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00448306: mov dword ptr [eax + 0x384], 3 */ W32((u32)(r_eax+0x384u), 0x3u);
    /* 00448310: jmp 0x4477a7 */ goto L_004477a7;
L_00448315:; BB(0x00448315);
    /* 00448315: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00448318: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0044831a: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x448320u); call_ind(t); }
    /* 00448320: jmp 0x447b49 */ goto L_00447b49;
}

void f_00447949(void)
{
    FN_ENTER(0x00447949);
    goto L_00447949;
L_00447714:; BB(0x00447714);
    /* 00447714: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447716: je 0x448315 */ if (fZ) goto L_00448315;
L_0044771c:; BB(0x0044771c);
    /* 0044771c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044771f: lea esi, [ecx + 0x38] */ r_esi = (u32)(r_ecx+0x38u);
    /* 00447722: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00447724: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447725: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447726: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00447727: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447728: push 0x350 */ { u32 v = 0x350u; r_esp -= 4; W32(r_esp, v); }
    /* 0044772d: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x447732u); f_008144b0();
    /* 00447732: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447735: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447738: push 0xffffc000 */ { u32 v = 0xffffc000u; r_esp -= 4; W32(r_esp, v); }
    /* 0044773d: push 0x566 */ { u32 v = 0x566u; r_esp -= 4; W32(r_esp, v); }
    /* 00447742: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00447745: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00447746: call 0x52cc54 */ r_esp -= 4; W32(r_esp, 0x44774bu); f_0052cc54();
    /* 0044774b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044774e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447750: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447752: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00447753: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447754: push 0x348 */ { u32 v = 0x348u; r_esp -= 4; W32(r_esp, v); }
    /* 00447759: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x44775eu); f_008144b0();
    /* 0044775e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447761: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447764: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x447769u); f_007aa094();
    /* 00447769: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044776c: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x447771u); f_0052cac0();
    /* 00447771: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447774: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00447776: lea eax, [ecx + 0x3e0] */ r_eax = (u32)(r_ecx+0x3e0u);
    /* 0044777c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044777f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447780: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00447782: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x447788u); call_ind(t); }
    /* 00447788: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044778b: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00447792: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447795: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 0044779c: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 0044779f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004477a1: jle 0x4482e3 */ if ((fZ||fS!=fO)) goto L_004482e3;
L_004477a7:; BB(0x004477a7);
    /* 004477a7: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 004477ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004477ae: je 0x4477ba */ if (fZ) goto L_004477ba;
L_004477b0:; BB(0x004477b0);
    /* 004477b0: mov eax, 0x471c */ r_eax = 0x471cu;
    /* 004477b5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004477b8: jmp 0x4477c2 */ goto L_004477c2;
L_004477ba:; BB(0x004477ba);
    /* 004477ba: mov eax, 0x31c7 */ r_eax = 0x31c7u;
    /* 004477bf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_004477c2:; BB(0x004477c2);
    /* 004477c2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004477c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004477c7: mov word ptr [edx + 0x3a4], ax */ W16((u32)(r_edx+0x3a4u), (u16)r_eax);
    /* 004477ce: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 004477d4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004477d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004477d8: jle 0x4482dc */ if ((fZ||fS!=fO)) goto L_004482dc;
L_004477de:; BB(0x004477de);
    /* 004477de: mov ebx, dword ptr [esi*4 + 0xaad720] */ r_ebx = R32((u32)(r_esi*4+0xaad720u));
    /* 004477e5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004477e7: je 0x447926 */ if (fZ) goto L_00447926;
L_004477ed:; BB(0x004477ed);
    /* 004477ed: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004477f1: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004477f6: jge 0x447926 */ if ((fS==fO)) goto L_00447926;
L_004477fc:; BB(0x004477fc);
    /* 004477fc: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004477ff: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447804: jne 0x447926 */ if (!fZ) goto L_00447926;
L_0044780a:; BB(0x0044780a);
    /* 0044780a: lea ecx, [ebp - 0xcc] */ r_ecx = (u32)(r_ebp+0xffffff34u);
    /* 00447810: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 00447816: mov edi, dword ptr [ebx + 0x304] */ r_edi = R32((u32)(r_ebx+0x304u));
    /* 0044781c: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00447822: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 00447828: mov dword ptr [ebp - 0xc8], edi */ W32((u32)(r_ebp+0xffffff38u), r_edi);
    /* 0044782e: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 00447834: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447837: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 0044783d: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x447842u); f_0082f9c4();
    /* 00447842: fld dword ptr [ebp - 0xcc] */ FPUSH(R_F32((u32)(r_ebp+0xffffff34u)));
    /* 00447848: fld dword ptr [ebp - 0xc4] */ FPUSH(R_F32((u32)(r_ebp+0xffffff3cu)));
    /* 0044784e: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00447850: fmul qword ptr [0x8fe6d8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6d8u));
    /* 00447856: fdiv qword ptr [0x8fe6d0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6d0u));
    /* 0044785c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044785f: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00447862: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 00447865: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 00447869: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044786e: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00447871: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 00447874: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00447877: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 0044787a: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044787d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044787e: add ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00447884: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00447885: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x44788au); f_007a9018();
    /* 0044788a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044788d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00447890: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447892: jle 0x44789f */ if ((fZ||fS!=fO)) goto L_0044789f;
L_00447894:; BB(0x00447894);
    /* 00447894: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0044789a: jmp 0x447926 */ goto L_00447926;
L_0044789f:; BB(0x0044789f);
    /* 0044789f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004478a2: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004478a6: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004478ad: mov word ptr [eax + ecx*2 + 0x3a6], dx */ W16((u32)(r_eax+r_ecx*2+0x3a6u), (u16)r_edx);
    /* 004478b5: movsx edi, word ptr [eax + 0x3a4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004478bc: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004478bf: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004478c1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004478c3: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 004478c6: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004478c8: mov dword ptr [ecx + eax + 0x3b0], edx */ W32((u32)(r_ecx+r_eax+0x3b0u), r_edx);
    /* 004478cf: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004478d6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004478d8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004478da: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004478dd: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004478df: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004478e2: mov dword ptr [ecx + eax + 0x3b4], edx */ W32((u32)(r_ecx+r_eax+0x3b4u), r_edx);
    /* 004478e9: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004478f0: mov ebx, dword ptr [ebx + 0x40] */ r_ebx = R32((u32)(r_ebx+0x40u));
    /* 004478f3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004478f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004478f7: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004478fa: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004478fc: mov dword ptr [ecx + eax + 0x3b8], ebx */ W32((u32)(r_ecx+r_eax+0x3b8u), r_ebx);
    /* 00447903: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 0044790a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044790d: mov word ptr [eax + 0x3a4], dx */ W16((u32)(r_eax+0x3a4u), (u16)r_edx);
    /* 00447914: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00447917: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044791a: jge 0x44819e */ if ((fS==fO)) goto L_0044819e;
L_00447920:; BB(0x00447920);
    /* 00447920: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
L_00447926:; BB(0x00447926);
    /* 00447926: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00447929: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044792b: jl 0x4477de */ if ((fS!=fO)) goto L_004477de;
L_00447931:; BB(0x00447931);
    /* 00447931: jmp 0x4482cd */ goto L_004482cd;
L_00447949:; BB(0x00447949);
    /* 00447949: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044794c: mov dword ptr [ecx + 0x384], 2 */ W32((u32)(r_ecx+0x384u), 0x2u);
    /* 00447956: mov edx, 0x5a */ r_edx = 0x5au;
    /* 0044795b: mov word ptr [ecx + 0x344], dx */ W16((u32)(r_ecx+0x344u), (u16)r_edx);
    /* 00447962: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00447968: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0044796a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044796c: jle 0x447714 */ if ((fZ||fS!=fO)) goto L_00447714;
L_00447972:; BB(0x00447972);
    /* 00447972: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 00447979: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044797b: je 0x447a76 */ if (fZ) goto L_00447a76;
L_00447981:; BB(0x00447981);
    /* 00447981: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00447985: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00447986: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x44798bu); f_007ba9ec();
    /* 0044798b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044798c: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0044798f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447991: je 0x44799e */ if (fZ) goto L_0044799e;
L_00447993:; BB(0x00447993);
    /* 00447993: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00447999: jmp 0x447a76 */ goto L_00447a76;
L_0044799e:; BB(0x0044799e);
    /* 0044799e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004479a1: lea edx, [edx + 0x38] */ r_edx = (u32)(r_edx+0x38u);
    /* 004479a4: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004479a7: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 004479aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004479ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004479ac: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x4479b1u); f_0078ea50();
    /* 004479b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004479b4: fcomp dword ptr [0x8fe75c] */ fx_compare(ST(0), R_F32((u32)(0x8fe75cu))); FPOP();
    /* 004479ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004479bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004479bd: jbe 0x4479ca */ if ((fC||fZ)) goto L_004479ca;
L_004479bf:; BB(0x004479bf);
    /* 004479bf: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 004479c5: jmp 0x447a76 */ goto L_00447a76;
L_004479ca:; BB(0x004479ca);
    /* 004479ca: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004479d0: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 004479d3: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 004479d9: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 004479dc: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 004479e2: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 004479e5: mov dword ptr [ebp - 0xd0], edx */ W32((u32)(r_ebp+0xffffff30u), r_edx);
    /* 004479eb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004479ee: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4479f3u); f_0082f9c4();
    /* 004479f3: fld dword ptr [ebp - 0xd0] */ FPUSH(R_F32((u32)(r_ebp+0xffffff30u)));
    /* 004479f9: fld dword ptr [ebp - 0xd8] */ FPUSH(R_F32((u32)(r_ebp+0xffffff28u)));
    /* 004479ff: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00447a01: fmul qword ptr [0x8fe6d8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6d8u));
    /* 00447a07: fdiv qword ptr [0x8fe6d0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6d0u));
    /* 00447a0d: fnstcw word ptr [ebp - 0x4c] */ W16((u32)(r_ebp+0xffffffb4u), fcw);
    /* 00447a10: movzx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb4u));
    /* 00447a14: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447a19: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00447a1c: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 00447a1f: fistp dword ptr [ebp - 0x3c] */ W32((u32)(r_ebp+0xffffffc4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00447a22: fldcw word ptr [ebp - 0x4c] */ fcw = R16((u32)(r_ebp+0xffffffb4u));
    /* 00447a25: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00447a28: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00447a2b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x447a30u); f_0082ddd8();
    /* 00447a30: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00447a36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00447a39: fstp dword ptr [ebp - 0xd8] */ W_F32((u32)(r_ebp+0xffffff28u), ST(0)); FPOP();
    /* 00447a3f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x447a44u); f_0082dcbc();
    /* 00447a44: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00447a4a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00447a4d: fstp dword ptr [ebp - 0xd0] */ W_F32((u32)(r_ebp+0xffffff30u), ST(0)); FPOP();
    /* 00447a53: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 00447a59: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x447a5eu); f_0082ebac();
    /* 00447a5e: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 00447a64: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00447a6a: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 00447a6d: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00447a73: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
L_00447a76:; BB(0x00447a76);
    /* 00447a76: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00447a79: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447a7b: jl 0x447972 */ if ((fS!=fO)) goto L_00447972;
L_00447a81:; BB(0x00447a81);
    /* 00447a81: jmp 0x447714 */ goto L_00447714;
L_00447b49:; BB(0x00447b49);
    /* 00447b49: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00447b4c: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00447b4f: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00447b52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00447b55: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00447b5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00447b5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447b5f: ret  */ FN_RET(0x00447949); r_esp += 4; return;
L_0044819e:; BB(0x0044819e);
    /* 0044819e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004481a0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004481a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004481a5: jle 0x448275 */ if ((fZ||fS!=fO)) goto L_00448275;
L_004481ab:; BB(0x004481ab);
    /* 004481ab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004481ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004481b1: mov edx, dword ptr [edx + ecx*4 + 0x3ec] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x3ecu));
    /* 004481b8: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004481bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004481bd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004481c0: je 0x4481df */ if (fZ) goto L_004481df;
L_004481c2:; BB(0x004481c2);
    /* 004481c2: mov ecx, eax */ r_ecx = r_eax;
    /* 004481c4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004481c8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004481cd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004481d1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004481d4: mov dword ptr [edx + ecx*2 + 0x3ec], 0 */ W32((u32)(r_edx+r_ecx*2+0x3ecu), 0x0u);
L_004481df:; BB(0x004481df);
    /* 004481df: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
    /* 004481e9: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004481eb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4481f0u); f_005caba4();
    /* 004481f0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004481f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004481f6: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 004481fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004481fe: je 0x4482c3 */ if (fZ) goto L_004482c3;
L_00448204:; BB(0x00448204);
    /* 00448204: mov dword ptr [ebp - 0xc0], 1 */ W32((u32)(r_ebp+0xffffff40u), 0x1u);
    /* 0044820e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00448215: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448218: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044821b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044821e: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00448221: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00448223: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00448226: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00448228: lea edi, [ebx + esi + 0x3b0] */ r_edi = (u32)(r_ebx+r_esi+0x3b0u);
    /* 0044822f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00448230: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448231: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00448234: call 0x4496f0 */ r_esp -= 4; W32(r_esp, 0x448239u); f_004496f0();
    /* 00448239: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_00448243:; BB(0x00448243);
    /* 00448243: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00448246: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00448249: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044824c: mov dword ptr [edx + ecx*2 + 0x3ec], eax */ W32((u32)(r_edx+r_ecx*2+0x3ecu), r_eax);
    /* 00448253: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044825a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044825d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00448260: movsx ecx, word ptr [eax + 0x3a4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 00448267: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044826a: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044826c: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0044826f: jl 0x4481ab */ if ((fS!=fO)) goto L_004481ab;
L_00448275:; BB(0x00448275);
    /* 00448275: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448278: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044827b: jge 0x447b49 */ if ((fS==fO)) goto L_00447b49;
L_00448281:; BB(0x00448281);
    /* 00448281: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448284: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00448287: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0044828a: mov edx, dword ptr [eax + edx*4 + 0x3ec] */ r_edx = R32((u32)(r_eax+r_edx*4+0x3ecu));
    /* 00448291: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448293: je 0x4482b0 */ if (fZ) goto L_004482b0;
L_00448295:; BB(0x00448295);
    /* 00448295: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00448299: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044829e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004482a2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004482a5: mov dword ptr [edx + ecx*2 + 0x3ec], 0 */ W32((u32)(r_edx+r_ecx*2+0x3ecu), 0x0u);
L_004482b0:; BB(0x004482b0);
    /* 004482b0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004482b3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004482b6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004482b9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004482bc: jl 0x448281 */ if ((fS!=fO)) goto L_00448281;
L_004482be:; BB(0x004482be);
    /* 004482be: jmp 0x447b49 */ goto L_00447b49;
L_004482c3:; BB(0x004482c3);
    /* 004482c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004482c5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004482c8: jmp 0x448243 */ goto L_00448243;
L_004482cd:; BB(0x004482cd);
    /* 004482cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004482d0: movsx edx, word ptr [eax + 0x3a4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a4u));
    /* 004482d7: jmp 0x44819e */ goto L_0044819e;
L_004482dc:; BB(0x004482dc);
    /* 004482dc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004482de: jmp 0x44819e */ goto L_0044819e;
L_004482e3:; BB(0x004482e3);
    /* 004482e3: mov edx, eax */ r_edx = r_eax;
    /* 004482e5: mov eax, 2 */ r_eax = 0x2u;
    /* 004482ea: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 004482f1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004482f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004482f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004482f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004482f6: push 0x351 */ { u32 v = 0x351u; r_esp -= 4; W32(r_esp, v); }
    /* 004482fb: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x448300u); f_00814298();
    /* 00448300: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448303: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00448306: mov dword ptr [eax + 0x384], 3 */ W32((u32)(r_eax+0x384u), 0x3u);
    /* 00448310: jmp 0x4477a7 */ goto L_004477a7;
L_00448315:; BB(0x00448315);
    /* 00448315: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00448318: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0044831a: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x448320u); call_ind(t); }
    /* 00448320: jmp 0x447b49 */ goto L_00447b49;
}

void f_00447a86(void)
{
    FN_ENTER(0x00447a86);
    /* 00447a86: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447a89: mov edx, dword ptr [eax + 0x3ec] */ r_edx = R32((u32)(r_eax+0x3ecu));
    /* 00447a8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447a91: je 0x447aad */ if (fZ) goto L_00447aad;
L_00447a93:; BB(0x00447a93);
    /* 00447a93: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447a97: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447a9c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447aa0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447aa3: mov dword ptr [edx + 0x3ec], 0 */ W32((u32)(r_edx+0x3ecu), 0x0u);
L_00447aad:; BB(0x00447aad);
    /* 00447aad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447ab0: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00447ab6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447ab8: je 0x447ad4 */ if (fZ) goto L_00447ad4;
L_00447aba:; BB(0x00447aba);
    /* 00447aba: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447abe: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447ac3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447ac7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447aca: mov dword ptr [edx + 0x3f0], 0 */ W32((u32)(r_edx+0x3f0u), 0x0u);
L_00447ad4:; BB(0x00447ad4);
    /* 00447ad4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447ad7: mov edx, dword ptr [eax + 0x3f4] */ r_edx = R32((u32)(r_eax+0x3f4u));
    /* 00447add: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447adf: je 0x447afb */ if (fZ) goto L_00447afb;
L_00447ae1:; BB(0x00447ae1);
    /* 00447ae1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447ae5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447aea: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447aee: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447af1: mov dword ptr [edx + 0x3f4], 0 */ W32((u32)(r_edx+0x3f4u), 0x0u);
L_00447afb:; BB(0x00447afb);
    /* 00447afb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447afe: mov edx, dword ptr [eax + 0x3f8] */ r_edx = R32((u32)(r_eax+0x3f8u));
    /* 00447b04: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447b06: je 0x447b22 */ if (fZ) goto L_00447b22;
L_00447b08:; BB(0x00447b08);
    /* 00447b08: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447b0c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00447b11: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447b15: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447b18: mov dword ptr [edx + 0x3f8], 0 */ W32((u32)(r_edx+0x3f8u), 0x0u);
L_00447b22:; BB(0x00447b22);
    /* 00447b22: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447b25: mov edx, dword ptr [eax + 0x480] */ r_edx = R32((u32)(r_eax+0x480u));
    /* 00447b2b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00447b2d: je 0x447b49 */ if (fZ) goto L_00447b49;
L_00447b2f:; BB(0x00447b2f);
    /* 00447b2f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00447b33: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00447b38: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00447b3c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447b3f: mov dword ptr [edx + 0x480], 0 */ W32((u32)(r_edx+0x480u), 0x0u);
L_00447b49:; BB(0x00447b49);
    /* 00447b49: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00447b4c: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00447b4f: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00447b52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00447b55: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00447b5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00447b5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447b5f: ret  */ FN_RET(0x00447a86); r_esp += 4; return;
}

