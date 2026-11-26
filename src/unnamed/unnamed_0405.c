#include "protos.h"

void f_004050f0(void) /* sub_4050F0 */
{
    FN_ENTER(0x004050f0);
    /* 004050f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004050f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004050f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004050f3: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004050f5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004050f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004050f9: mov edi, ebp */ r_edi = r_ebp;
    /* 004050fb: mov ebp, eax */ r_ebp = r_eax;
    /* 004050fd: mov esi, edx */ r_esi = r_edx;
L_004050ff:; BB(0x004050ff);
    /* 004050ff: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00405104: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040510a: lea ecx, [ebp + 0xaae75c] */ r_ecx = (u32)(r_ebp+0xaae75cu);
    /* 00405110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405111: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x405116u); f_007c1160();
    /* 00405116: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405118: je 0x40511f */ if (fZ) goto L_0040511f;
L_0040511a:; BB(0x0040511a);
    /* 0040511a: mov esi, 1 */ r_esi = 0x1u;
L_0040511f:; BB(0x0040511f);
    /* 0040511f: add ebp, 0x50 */ {  u32 a = r_ebp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00405122: cmp ebp, 0x140 */ {  u32 a = r_ebp; u32 b = 0x140u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00405128: jb 0x4050ff */ if (fC) goto L_004050ff;
L_0040512a:; BB(0x0040512a);
    /* 0040512a: mov edx, esi */ r_edx = r_esi;
    /* 0040512c: mov ebp, edi */ r_ebp = r_edi;
    /* 0040512e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405130: je 0x405163 */ if (fZ) goto L_00405163;
L_00405132:; BB(0x00405132);
    /* 00405132: mov dword ptr [ebp + 0x30], 1 */ W32((u32)(r_ebp+0x30u), 0x1u);
    /* 00405139: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0040513b: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x405140u); f_00404a34();
    /* 00405140: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00405143: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00405146: je 0x405163 */ if (fZ) goto L_00405163;
L_00405148:; BB(0x00405148);
    /* 00405148: mov dword ptr [ebp + 0x1c], 0x17 */ W32((u32)(r_ebp+0x1cu), 0x17u);
    /* 0040514f: mov dword ptr [ebp + 0x60], 0 */ W32((u32)(r_ebp+0x60u), 0x0u);
    /* 00405156: mov eax, dword ptr [0x9a2e58] */ r_eax = R32((u32)(0x9a2e58u));
    /* 0040515b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040515d: je 0x405163 */ if (fZ) goto L_00405163;
L_0040515f:; BB(0x0040515f);
    /* 0040515f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00405161: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x405163u); call_ind(t); }
L_00405163:; BB(0x00405163);
    /* 00405163: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405164: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405165: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00405166: ret  */ FN_RET(0x004050f0); r_esp += 4; return;
}

void f_00405168(void) /* sub_405168 */
{
    FN_ENTER(0x00405168);
    /* 00405168: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00405169: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040516a: mov esi, ecx */ r_esi = r_ecx;
    /* 0040516c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040516e: mov word ptr [esi + 0x84], ax */ W16((u32)(r_esi+0x84u), (u16)r_eax);
    /* 00405175: mov ecx, dword ptr [0xa3a93c] */ r_ecx = R32((u32)(0xa3a93cu));
    /* 0040517b: call 0x482488 */ r_esp -= 4; W32(r_esp, 0x405180u); f_00482488();
    /* 00405180: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 00405183: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00405186: ja 0x405328 */ if ((!fC&&!fZ)) goto L_00405328;
L_0040518c:; BB(0x0040518c);
    /* 0040518c: mov eax, dword ptr [eax*4 + 0x8f8744] */ r_eax = R32((u32)(r_eax*4+0x8f8744u));
    /* 00405193: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00405328:; BB(0x00405328);
    /* 00405328: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0040532f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405331: je 0x405355 */ if (fZ) goto L_00405355;
L_00405333:; BB(0x00405333);
    /* 00405333: mov ecx, esi */ r_ecx = r_esi;
    /* 00405335: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x40533au); f_00403784();
    /* 0040533a: lea ebp, [esi + 0x84] */ r_ebp = (u32)(r_esi+0x84u);
    /* 00405340: mov ecx, esi */ r_ecx = r_esi;
    /* 00405342: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x405347u); f_00404a34();
    /* 00405347: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534b: mov ecx, esi */ r_ecx = r_esi;
    /* 0040534d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040534f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405350: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x405355u); f_00402f0c();
L_00405355:; BB(0x00405355);
    /* 00405355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405356: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405357: ret  */ FN_RET(0x00405168); r_esp += 4; return;
}

void f_00405195(void)
{
    FN_ENTER(0x00405195);
    /* 00405195: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00405197: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 00405199: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40519eu); f_00792fe8();
    /* 0040519e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040519f: lea edx, [esi + 0x84] */ r_edx = (u32)(r_esi+0x84u);
    /* 004051a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004051a6: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4051abu); f_00857fc3();
    /* 004051ab: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004051ae: jmp 0x405328 */ goto L_00405328;
L_00405328:; BB(0x00405328);
    /* 00405328: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0040532f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405331: je 0x405355 */ if (fZ) goto L_00405355;
L_00405333:; BB(0x00405333);
    /* 00405333: mov ecx, esi */ r_ecx = r_esi;
    /* 00405335: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x40533au); f_00403784();
    /* 0040533a: lea ebp, [esi + 0x84] */ r_ebp = (u32)(r_esi+0x84u);
    /* 00405340: mov ecx, esi */ r_ecx = r_esi;
    /* 00405342: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x405347u); f_00404a34();
    /* 00405347: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534b: mov ecx, esi */ r_ecx = r_esi;
    /* 0040534d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040534f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405350: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x405355u); f_00402f0c();
L_00405355:; BB(0x00405355);
    /* 00405355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405356: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405357: ret  */ FN_RET(0x00405195); r_esp += 4; return;
}

void f_004051b3(void)
{
    FN_ENTER(0x004051b3);
    /* 004051b3: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 004051b5: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 004051b7: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4051bcu); f_00792fe8();
    /* 004051bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004051bd: lea edx, [esi + 0x84] */ r_edx = (u32)(r_esi+0x84u);
    /* 004051c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004051c4: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4051c9u); f_00857fc3();
    /* 004051c9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004051cc: jmp 0x405328 */ goto L_00405328;
L_00405328:; BB(0x00405328);
    /* 00405328: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0040532f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405331: je 0x405355 */ if (fZ) goto L_00405355;
L_00405333:; BB(0x00405333);
    /* 00405333: mov ecx, esi */ r_ecx = r_esi;
    /* 00405335: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x40533au); f_00403784();
    /* 0040533a: lea ebp, [esi + 0x84] */ r_ebp = (u32)(r_esi+0x84u);
    /* 00405340: mov ecx, esi */ r_ecx = r_esi;
    /* 00405342: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x405347u); f_00404a34();
    /* 00405347: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534b: mov ecx, esi */ r_ecx = r_esi;
    /* 0040534d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040534f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405350: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x405355u); f_00402f0c();
L_00405355:; BB(0x00405355);
    /* 00405355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405356: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405357: ret  */ FN_RET(0x004051b3); r_esp += 4; return;
}

void f_004051d1(void)
{
    FN_ENTER(0x004051d1);
    /* 004051d1: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004051d3: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 004051d5: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4051dau); f_00792fe8();
    /* 004051da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004051db: lea edx, [esi + 0x84] */ r_edx = (u32)(r_esi+0x84u);
    /* 004051e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004051e2: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4051e7u); f_00857fc3();
    /* 004051e7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004051ea: jmp 0x405328 */ goto L_00405328;
L_00405328:; BB(0x00405328);
    /* 00405328: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0040532f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405331: je 0x405355 */ if (fZ) goto L_00405355;
L_00405333:; BB(0x00405333);
    /* 00405333: mov ecx, esi */ r_ecx = r_esi;
    /* 00405335: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x40533au); f_00403784();
    /* 0040533a: lea ebp, [esi + 0x84] */ r_ebp = (u32)(r_esi+0x84u);
    /* 00405340: mov ecx, esi */ r_ecx = r_esi;
    /* 00405342: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x405347u); f_00404a34();
    /* 00405347: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534b: mov ecx, esi */ r_ecx = r_esi;
    /* 0040534d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040534f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405350: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x405355u); f_00402f0c();
L_00405355:; BB(0x00405355);
    /* 00405355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405356: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405357: ret  */ FN_RET(0x004051d1); r_esp += 4; return;
}

void f_004051ef(void)
{
    FN_ENTER(0x004051ef);
    /* 004051ef: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004051f1: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 004051f3: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4051f8u); f_00792fe8();
    /* 004051f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004051f9: lea edx, [esi + 0x84] */ r_edx = (u32)(r_esi+0x84u);
    /* 004051ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405200: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x405205u); f_00857fc3();
    /* 00405205: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405208: jmp 0x405328 */ goto L_00405328;
L_00405328:; BB(0x00405328);
    /* 00405328: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0040532f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405331: je 0x405355 */ if (fZ) goto L_00405355;
L_00405333:; BB(0x00405333);
    /* 00405333: mov ecx, esi */ r_ecx = r_esi;
    /* 00405335: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x40533au); f_00403784();
    /* 0040533a: lea ebp, [esi + 0x84] */ r_ebp = (u32)(r_esi+0x84u);
    /* 00405340: mov ecx, esi */ r_ecx = r_esi;
    /* 00405342: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x405347u); f_00404a34();
    /* 00405347: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534b: mov ecx, esi */ r_ecx = r_esi;
    /* 0040534d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040534f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405350: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x405355u); f_00402f0c();
L_00405355:; BB(0x00405355);
    /* 00405355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405356: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405357: ret  */ FN_RET(0x004051ef); r_esp += 4; return;
}

void f_0040520d(void)
{
    FN_ENTER(0x0040520d);
    /* 0040520d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0040520f: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 00405211: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x405216u); f_00792fe8();
    /* 00405216: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405217: lea edx, [esi + 0x84] */ r_edx = (u32)(r_esi+0x84u);
    /* 0040521d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040521e: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x405223u); f_00857fc3();
    /* 00405223: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405226: jmp 0x405328 */ goto L_00405328;
L_00405328:; BB(0x00405328);
    /* 00405328: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0040532f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405331: je 0x405355 */ if (fZ) goto L_00405355;
L_00405333:; BB(0x00405333);
    /* 00405333: mov ecx, esi */ r_ecx = r_esi;
    /* 00405335: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x40533au); f_00403784();
    /* 0040533a: lea ebp, [esi + 0x84] */ r_ebp = (u32)(r_esi+0x84u);
    /* 00405340: mov ecx, esi */ r_ecx = r_esi;
    /* 00405342: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x405347u); f_00404a34();
    /* 00405347: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534b: mov ecx, esi */ r_ecx = r_esi;
    /* 0040534d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040534f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405350: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x405355u); f_00402f0c();
L_00405355:; BB(0x00405355);
    /* 00405355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405356: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405357: ret  */ FN_RET(0x0040520d); r_esp += 4; return;
}

void f_0040522b(void)
{
    FN_ENTER(0x0040522b);
    /* 0040522b: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0040522d: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 0040522f: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x405234u); f_00792fe8();
    /* 00405234: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405235: lea edx, [esi + 0x84] */ r_edx = (u32)(r_esi+0x84u);
    /* 0040523b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040523c: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x405241u); f_00857fc3();
    /* 00405241: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405244: jmp 0x405328 */ goto L_00405328;
L_00405328:; BB(0x00405328);
    /* 00405328: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0040532f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405331: je 0x405355 */ if (fZ) goto L_00405355;
L_00405333:; BB(0x00405333);
    /* 00405333: mov ecx, esi */ r_ecx = r_esi;
    /* 00405335: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x40533au); f_00403784();
    /* 0040533a: lea ebp, [esi + 0x84] */ r_ebp = (u32)(r_esi+0x84u);
    /* 00405340: mov ecx, esi */ r_ecx = r_esi;
    /* 00405342: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x405347u); f_00404a34();
    /* 00405347: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534b: mov ecx, esi */ r_ecx = r_esi;
    /* 0040534d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040534f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405350: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x405355u); f_00402f0c();
L_00405355:; BB(0x00405355);
    /* 00405355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405356: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405357: ret  */ FN_RET(0x0040522b); r_esp += 4; return;
}

void f_00405249(void)
{
    FN_ENTER(0x00405249);
    /* 00405249: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0040524b: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 0040524d: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x405252u); f_00792fe8();
    /* 00405252: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405253: lea edx, [esi + 0x84] */ r_edx = (u32)(r_esi+0x84u);
    /* 00405259: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040525a: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x40525fu); f_00857fc3();
    /* 0040525f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405262: jmp 0x405328 */ goto L_00405328;
L_00405328:; BB(0x00405328);
    /* 00405328: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0040532f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405331: je 0x405355 */ if (fZ) goto L_00405355;
L_00405333:; BB(0x00405333);
    /* 00405333: mov ecx, esi */ r_ecx = r_esi;
    /* 00405335: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x40533au); f_00403784();
    /* 0040533a: lea ebp, [esi + 0x84] */ r_ebp = (u32)(r_esi+0x84u);
    /* 00405340: mov ecx, esi */ r_ecx = r_esi;
    /* 00405342: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x405347u); f_00404a34();
    /* 00405347: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534b: mov ecx, esi */ r_ecx = r_esi;
    /* 0040534d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040534f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405350: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x405355u); f_00402f0c();
L_00405355:; BB(0x00405355);
    /* 00405355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405356: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405357: ret  */ FN_RET(0x00405249); r_esp += 4; return;
}

void f_00405267(void)
{
    FN_ENTER(0x00405267);
    /* 00405267: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00405269: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 0040526b: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x405270u); f_00792fe8();
    /* 00405270: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405271: lea edx, [esi + 0x84] */ r_edx = (u32)(r_esi+0x84u);
    /* 00405277: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405278: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x40527du); f_00857fc3();
    /* 0040527d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405280: jmp 0x405328 */ goto L_00405328;
L_00405328:; BB(0x00405328);
    /* 00405328: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0040532f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405331: je 0x405355 */ if (fZ) goto L_00405355;
L_00405333:; BB(0x00405333);
    /* 00405333: mov ecx, esi */ r_ecx = r_esi;
    /* 00405335: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x40533au); f_00403784();
    /* 0040533a: lea ebp, [esi + 0x84] */ r_ebp = (u32)(r_esi+0x84u);
    /* 00405340: mov ecx, esi */ r_ecx = r_esi;
    /* 00405342: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x405347u); f_00404a34();
    /* 00405347: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534b: mov ecx, esi */ r_ecx = r_esi;
    /* 0040534d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040534f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405350: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x405355u); f_00402f0c();
L_00405355:; BB(0x00405355);
    /* 00405355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405356: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405357: ret  */ FN_RET(0x00405267); r_esp += 4; return;
}

void f_00405285(void)
{
    FN_ENTER(0x00405285);
    /* 00405285: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00405287: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 00405289: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40528eu); f_00792fe8();
    /* 0040528e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040528f: lea edx, [esi + 0x84] */ r_edx = (u32)(r_esi+0x84u);
    /* 00405295: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405296: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x40529bu); f_00857fc3();
    /* 0040529b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040529e: jmp 0x405328 */ goto L_00405328;
L_00405328:; BB(0x00405328);
    /* 00405328: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0040532f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405331: je 0x405355 */ if (fZ) goto L_00405355;
L_00405333:; BB(0x00405333);
    /* 00405333: mov ecx, esi */ r_ecx = r_esi;
    /* 00405335: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x40533au); f_00403784();
    /* 0040533a: lea ebp, [esi + 0x84] */ r_ebp = (u32)(r_esi+0x84u);
    /* 00405340: mov ecx, esi */ r_ecx = r_esi;
    /* 00405342: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x405347u); f_00404a34();
    /* 00405347: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534b: mov ecx, esi */ r_ecx = r_esi;
    /* 0040534d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040534f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405350: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x405355u); f_00402f0c();
L_00405355:; BB(0x00405355);
    /* 00405355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405356: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405357: ret  */ FN_RET(0x00405285); r_esp += 4; return;
}

void f_004052a3(void)
{
    FN_ENTER(0x004052a3);
    /* 004052a3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004052a5: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 004052a7: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4052acu); f_00792fe8();
    /* 004052ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004052ad: lea edx, [esi + 0x84] */ r_edx = (u32)(r_esi+0x84u);
    /* 004052b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004052b4: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4052b9u); f_00857fc3();
    /* 004052b9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004052bc: jmp 0x405328 */ goto L_00405328;
L_00405328:; BB(0x00405328);
    /* 00405328: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0040532f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405331: je 0x405355 */ if (fZ) goto L_00405355;
L_00405333:; BB(0x00405333);
    /* 00405333: mov ecx, esi */ r_ecx = r_esi;
    /* 00405335: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x40533au); f_00403784();
    /* 0040533a: lea ebp, [esi + 0x84] */ r_ebp = (u32)(r_esi+0x84u);
    /* 00405340: mov ecx, esi */ r_ecx = r_esi;
    /* 00405342: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x405347u); f_00404a34();
    /* 00405347: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534b: mov ecx, esi */ r_ecx = r_esi;
    /* 0040534d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040534f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405350: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x405355u); f_00402f0c();
L_00405355:; BB(0x00405355);
    /* 00405355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405356: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405357: ret  */ FN_RET(0x004052a3); r_esp += 4; return;
}

void f_004052be(void)
{
    FN_ENTER(0x004052be);
    /* 004052be: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004052c0: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 004052c2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4052c7u); f_00792fe8();
    /* 004052c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004052c8: lea edx, [esi + 0x84] */ r_edx = (u32)(r_esi+0x84u);
    /* 004052ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004052cf: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4052d4u); f_00857fc3();
    /* 004052d4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004052d7: jmp 0x405328 */ goto L_00405328;
L_00405328:; BB(0x00405328);
    /* 00405328: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0040532f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405331: je 0x405355 */ if (fZ) goto L_00405355;
L_00405333:; BB(0x00405333);
    /* 00405333: mov ecx, esi */ r_ecx = r_esi;
    /* 00405335: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x40533au); f_00403784();
    /* 0040533a: lea ebp, [esi + 0x84] */ r_ebp = (u32)(r_esi+0x84u);
    /* 00405340: mov ecx, esi */ r_ecx = r_esi;
    /* 00405342: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x405347u); f_00404a34();
    /* 00405347: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534b: mov ecx, esi */ r_ecx = r_esi;
    /* 0040534d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040534f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405350: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x405355u); f_00402f0c();
L_00405355:; BB(0x00405355);
    /* 00405355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405356: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405357: ret  */ FN_RET(0x004052be); r_esp += 4; return;
}

void f_004052d9(void)
{
    FN_ENTER(0x004052d9);
    /* 004052d9: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004052db: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 004052dd: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4052e2u); f_00792fe8();
    /* 004052e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004052e3: lea edx, [esi + 0x84] */ r_edx = (u32)(r_esi+0x84u);
    /* 004052e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004052ea: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4052efu); f_00857fc3();
    /* 004052ef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004052f2: jmp 0x405328 */ goto L_00405328;
L_00405328:; BB(0x00405328);
    /* 00405328: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0040532f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405331: je 0x405355 */ if (fZ) goto L_00405355;
L_00405333:; BB(0x00405333);
    /* 00405333: mov ecx, esi */ r_ecx = r_esi;
    /* 00405335: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x40533au); f_00403784();
    /* 0040533a: lea ebp, [esi + 0x84] */ r_ebp = (u32)(r_esi+0x84u);
    /* 00405340: mov ecx, esi */ r_ecx = r_esi;
    /* 00405342: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x405347u); f_00404a34();
    /* 00405347: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534b: mov ecx, esi */ r_ecx = r_esi;
    /* 0040534d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040534f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405350: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x405355u); f_00402f0c();
L_00405355:; BB(0x00405355);
    /* 00405355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405356: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405357: ret  */ FN_RET(0x004052d9); r_esp += 4; return;
}

void f_004052f4(void)
{
    FN_ENTER(0x004052f4);
    /* 004052f4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004052f6: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 004052f8: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4052fdu); f_00792fe8();
    /* 004052fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004052fe: lea edx, [esi + 0x84] */ r_edx = (u32)(r_esi+0x84u);
    /* 00405304: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405305: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x40530au); f_00857fc3();
    /* 0040530a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040530d: jmp 0x405328 */ goto L_00405328;
L_00405328:; BB(0x00405328);
    /* 00405328: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0040532f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405331: je 0x405355 */ if (fZ) goto L_00405355;
L_00405333:; BB(0x00405333);
    /* 00405333: mov ecx, esi */ r_ecx = r_esi;
    /* 00405335: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x40533au); f_00403784();
    /* 0040533a: lea ebp, [esi + 0x84] */ r_ebp = (u32)(r_esi+0x84u);
    /* 00405340: mov ecx, esi */ r_ecx = r_esi;
    /* 00405342: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x405347u); f_00404a34();
    /* 00405347: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534b: mov ecx, esi */ r_ecx = r_esi;
    /* 0040534d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040534f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405350: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x405355u); f_00402f0c();
L_00405355:; BB(0x00405355);
    /* 00405355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405356: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405357: ret  */ FN_RET(0x004052f4); r_esp += 4; return;
}

void f_0040530f(void)
{
    FN_ENTER(0x0040530f);
    /* 0040530f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00405311: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 00405313: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x405318u); f_00792fe8();
    /* 00405318: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405319: lea edx, [esi + 0x84] */ r_edx = (u32)(r_esi+0x84u);
    /* 0040531f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405320: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x405325u); f_00857fc3();
    /* 00405325: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405328: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0040532f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405331: je 0x405355 */ if (fZ) goto L_00405355;
L_00405333:; BB(0x00405333);
    /* 00405333: mov ecx, esi */ r_ecx = r_esi;
    /* 00405335: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x40533au); f_00403784();
    /* 0040533a: lea ebp, [esi + 0x84] */ r_ebp = (u32)(r_esi+0x84u);
    /* 00405340: mov ecx, esi */ r_ecx = r_esi;
    /* 00405342: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x405347u); f_00404a34();
    /* 00405347: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040534b: mov ecx, esi */ r_ecx = r_esi;
    /* 0040534d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040534f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405350: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x405355u); f_00402f0c();
L_00405355:; BB(0x00405355);
    /* 00405355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405356: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405357: ret  */ FN_RET(0x0040530f); r_esp += 4; return;
}

void f_00405358(void) /* sub_405358 */
{
    FN_ENTER(0x00405358);
    /* 00405358: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405359: mov ebp, esp */ r_ebp = r_esp;
    /* 0040535b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040535d: push 0x8cc1c4 */ { u32 v = 0x8cc1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00405362: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00405368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405369: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00405370: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405373: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00405376: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00405379: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0040537c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0040537f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00405382: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00405389: push 0x19d44 */ { u32 v = 0x19d44u; r_esp -= 4; W32(r_esp, v); }
    /* 0040538e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x405393u); f_005caba4();
    /* 00405393: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00405394: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00405397: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405399: je 0x4053d9 */ if (fZ) goto L_004053d9;
L_0040539b:; BB(0x0040539b);
    /* 0040539b: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004053a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004053a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004053ac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004053af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004053b1: push 0xa46b80 */ { u32 v = 0xa46b80u; r_esp -= 4; W32(r_esp, v); }
    /* 004053b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004053b7: call 0x481ff0 */ r_esp -= 4; W32(r_esp, 0x4053bcu); f_00481ff0();
    /* 004053bc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004053bf: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004053c6:; BB(0x004053c6);
    /* 004053c6: mov dword ptr [0xa3a93c], eax */ W32((u32)(0xa3a93cu), r_eax);
    /* 004053cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004053ce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004053d5: mov esp, ebp */ r_esp = r_ebp;
    /* 004053d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004053d8: ret  */ FN_RET(0x00405358); r_esp += 4; return;
L_004053d9:; BB(0x004053d9);
    /* 004053d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004053db: jmp 0x4053c6 */ goto L_004053c6;
}

void f_004053e0(void) /* sub_4053E0 */
{
    FN_ENTER(0x004053e0);
    /* 004053e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004053e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004053e2: mov esi, ecx */ r_esi = r_ecx;
    /* 004053e4: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 004053e6: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 004053e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004053ea: mov word ptr [esi + 0x84], ax */ W16((u32)(r_esi+0x84u), (u16)r_eax);
    /* 004053f1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4053f6u); f_00792fe8();
    /* 004053f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004053f7: lea ebp, [esi + 0x84] */ r_ebp = (u32)(r_esi+0x84u);
    /* 004053fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004053fe: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x405403u); f_00857fc3();
    /* 00405403: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 00405408: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405409: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x40540eu); f_00857fc3();
    /* 0040540e: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00405410: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00405412: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x405417u); f_00792fe8();
    /* 00405417: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405418: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405419: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x40541eu); f_00857fc3();
    /* 0040541e: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 00405423: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405424: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x405429u); f_00857fc3();
    /* 00405429: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040542c: mov ecx, esi */ r_ecx = r_esi;
    /* 0040542e: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x405433u); f_00403784();
    /* 00405433: mov ecx, esi */ r_ecx = r_esi;
    /* 00405435: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x40543au); f_00404a34();
    /* 0040543a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040543c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040543d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040543e: mov ecx, esi */ r_ecx = r_esi;
    /* 00405440: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00405442: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405443: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x405448u); f_00402f0c();
    /* 00405448: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405449: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040544a: ret  */ FN_RET(0x004053e0); r_esp += 4; return;
}

void f_0040544c(void) /* sub_40544C */
{
    FN_ENTER(0x0040544c);
    /* 0040544c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040544d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040544e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040544f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00405450: mov esi, ecx */ r_esi = r_ecx;
    /* 00405452: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00405454: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00405456: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40545bu); f_00792fe8();
    /* 0040545b: mov ebp, eax */ r_ebp = r_eax;
    /* 0040545d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405460: lea eax, [esi + 0x34] */ r_eax = (u32)(r_esi+0x34u);
    /* 00405463: call 0x403770 */ r_esp -= 4; W32(r_esp, 0x405468u); f_00403770();
    /* 00405468: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040546a: je 0x4054b8 */ if (fZ) goto L_004054b8;
L_0040546c:; BB(0x0040546c);
    /* 0040546c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040546e: jle 0x4054b8 */ if ((fZ||fS!=fO)) goto L_004054b8;
L_00405470:; BB(0x00405470);
    /* 00405470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405471: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405472: lea ebx, [esi + 0x84] */ r_ebx = (u32)(r_esi+0x84u);
    /* 00405478: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00405479: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x40547eu); f_00857e29();
    /* 0040547e: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 00405483: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00405484: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x405489u); f_00857fc3();
    /* 00405489: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0040548b: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0040548d: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x405492u); f_00792fe8();
    /* 00405492: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405493: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00405494: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x405499u); f_00857fc3();
    /* 00405499: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040549c: mov ecx, esi */ r_ecx = r_esi;
    /* 0040549e: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x4054a3u); f_00403784();
    /* 004054a3: mov ecx, esi */ r_ecx = r_esi;
    /* 004054a5: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x4054aau); f_00404a34();
    /* 004054aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004054ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004054ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004054ae: mov ecx, esi */ r_ecx = r_esi;
    /* 004054b0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004054b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004054b3: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x4054b8u); f_00402f0c();
L_004054b8:; BB(0x004054b8);
    /* 004054b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004054b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004054ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004054bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004054bc: ret  */ FN_RET(0x0040544c); r_esp += 4; return;
}

void f_004054c0(void) /* sub_4054C0 */
{
    FN_ENTER(0x004054c0);
    /* 004054c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004054c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004054c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004054c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004054c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004054c5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004054c7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004054c9: mov word ptr [ebp + 0x84], dx */ W16((u32)(r_ebp+0x84u), (u16)r_edx);
    /* 004054d0: lea eax, [ebp + 0x34] */ r_eax = (u32)(r_ebp+0x34u);
    /* 004054d3: call 0x404ae0 */ r_esp -= 4; W32(r_esp, 0x4054d8u); f_00404ae0();
    /* 004054d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004054da: je 0x405512 */ if (fZ) goto L_00405512;
L_004054dc:; BB(0x004054dc);
    /* 004054dc: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004054de: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 004054e0: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4054e5u); f_00792fe8();
    /* 004054e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004054e6: lea ebx, [ebp + 0x84] */ r_ebx = (u32)(r_ebp+0x84u);
    /* 004054ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004054ed: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4054f2u); f_00857fc3();
    /* 004054f2: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 004054f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004054f8: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x4054fdu); f_00857fc3();
    /* 004054fd: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004054ff: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00405501: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x405506u); f_00792fe8();
    /* 00405506: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405507: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00405508: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x40550du); f_00857fc3();
    /* 0040550d: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405510: jmp 0x405546 */ goto L_00405546;
L_00405512:; BB(0x00405512);
    /* 00405512: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00405514: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00405516: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40551bu); f_00792fe8();
    /* 0040551b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040551c: lea ebx, [ebp + 0x84] */ r_ebx = (u32)(r_ebp+0x84u);
    /* 00405522: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00405523: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x405528u); f_00857fc3();
    /* 00405528: push 0x8f8824 */ { u32 v = 0x8f8824u; r_esp -= 4; W32(r_esp, v); }
    /* 0040552d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040552e: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x405533u); f_00857fc3();
    /* 00405533: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00405535: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00405537: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40553cu); f_00792fe8();
    /* 0040553c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040553d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040553e: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x405543u); f_00857fc3();
    /* 00405543: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00405546:; BB(0x00405546);
    /* 00405546: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00405548: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x40554du); f_00403784();
    /* 0040554d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0040554f: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00405551: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x405556u); f_00792fe8();
    /* 00405556: mov edi, eax */ r_edi = r_eax;
    /* 00405558: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0040555a: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0040555c: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x405561u); f_00792fe8();
    /* 00405561: mov esi, eax */ r_esi = r_eax;
    /* 00405563: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405566: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00405568: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x40556du); f_00404a34();
    /* 0040556d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040556e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040556f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00405571: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00405573: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00405574: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x405579u); f_00402f0c();
    /* 00405579: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040557a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040557b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040557c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040557d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040557e: ret  */ FN_RET(0x004054c0); r_esp += 4; return;
}

void f_00405580(void) /* sub_405580 */
{
    FN_ENTER(0x00405580);
    /* 00405580: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00405581: mov esi, ecx */ r_esi = r_ecx;
    /* 00405583: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405585: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x40558au); f_006dc358();
    /* 0040558a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040558b: cmp eax, 0xfff */ {  u32 a = r_eax; u32 b = 0xfffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00405590: jle 0x4055b7 */ if ((fZ||fS!=fO)) goto L_004055b7;
L_00405592:; BB(0x00405592);
    /* 00405592: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00405595: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00405598: je 0x4055b5 */ if (fZ) goto L_004055b5;
L_0040559a:; BB(0x0040559a);
    /* 0040559a: mov dword ptr [esi + 0x1c], 0x16 */ W32((u32)(r_esi+0x1cu), 0x16u);
    /* 004055a1: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 004055a8: mov eax, dword ptr [0x9a2e50] */ r_eax = R32((u32)(0x9a2e50u));
    /* 004055ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004055af: je 0x4055b5 */ if (fZ) goto L_004055b5;
L_004055b1:; BB(0x004055b1);
    /* 004055b1: mov ecx, esi */ r_ecx = r_esi;
    /* 004055b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4055b5u); call_ind(t); }
L_004055b5:; BB(0x004055b5);
    /* 004055b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004055b6: ret  */ FN_RET(0x00405580); r_esp += 4; return;
L_004055b7:; BB(0x004055b7);
    /* 004055b7: push dword ptr [esi + 0x58] */ { u32 v = R32((u32)(r_esi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004055ba: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4055bfu); f_0061cdb0();
    /* 004055bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004055c0: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x4055c5u); f_006c78a0();
    /* 004055c5: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x4055cau); f_007083d4();
    /* 004055ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004055cc: jne 0x4055f3 */ if (!fZ) goto L_004055f3;
L_004055ce:; BB(0x004055ce);
    /* 004055ce: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004055d1: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004055d4: je 0x4055f1 */ if (fZ) goto L_004055f1;
L_004055d6:; BB(0x004055d6);
    /* 004055d6: mov dword ptr [esi + 0x1c], 0x16 */ W32((u32)(r_esi+0x1cu), 0x16u);
    /* 004055dd: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 004055e4: mov eax, dword ptr [0x9a2e50] */ r_eax = R32((u32)(0x9a2e50u));
    /* 004055e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004055eb: je 0x4055f1 */ if (fZ) goto L_004055f1;
L_004055ed:; BB(0x004055ed);
    /* 004055ed: mov ecx, esi */ r_ecx = r_esi;
    /* 004055ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4055f1u); call_ind(t); }
L_004055f1:; BB(0x004055f1);
    /* 004055f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004055f2: ret  */ FN_RET(0x00405580); r_esp += 4; return;
L_004055f3:; BB(0x004055f3);
    /* 004055f3: mov dword ptr [0xa95de0], 0xc */ W32((u32)(0xa95de0u), 0xcu);
    /* 004055fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004055fe: ret  */ FN_RET(0x00405580); r_esp += 4; return;
}

void f_00405600(void) /* sub_405600 */
{
    FN_ENTER(0x00405600);
    /* 00405600: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00405601: mov esi, ecx */ r_esi = r_ecx;
    /* 00405603: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405605: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x40560au); f_006dc358();
    /* 0040560a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040560b: cmp eax, 0xfff */ {  u32 a = r_eax; u32 b = 0xfffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00405610: jle 0x405637 */ if ((fZ||fS!=fO)) goto L_00405637;
L_00405612:; BB(0x00405612);
    /* 00405612: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00405615: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00405618: je 0x405635 */ if (fZ) goto L_00405635;
L_0040561a:; BB(0x0040561a);
    /* 0040561a: mov dword ptr [esi + 0x1c], 0x16 */ W32((u32)(r_esi+0x1cu), 0x16u);
    /* 00405621: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 00405628: mov eax, dword ptr [0x9a2e50] */ r_eax = R32((u32)(0x9a2e50u));
    /* 0040562d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040562f: je 0x405635 */ if (fZ) goto L_00405635;
L_00405631:; BB(0x00405631);
    /* 00405631: mov ecx, esi */ r_ecx = r_esi;
    /* 00405633: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x405635u); call_ind(t); }
L_00405635:; BB(0x00405635);
    /* 00405635: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405636: ret  */ FN_RET(0x00405600); r_esp += 4; return;
L_00405637:; BB(0x00405637);
    /* 00405637: push dword ptr [esi + 0x58] */ { u32 v = R32((u32)(r_esi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040563a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x40563fu); f_0061cdb0();
    /* 0040563f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00405640: call 0x6c3e24 */ r_esp -= 4; W32(r_esp, 0x405645u); f_006c3e24();
    /* 00405645: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00405648: je 0x40566d */ if (fZ) goto L_0040566d;
L_0040564a:; BB(0x0040564a);
    /* 0040564a: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0040564d: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00405650: je 0x40566d */ if (fZ) goto L_0040566d;
L_00405652:; BB(0x00405652);
    /* 00405652: mov dword ptr [esi + 0x1c], 0x16 */ W32((u32)(r_esi+0x1cu), 0x16u);
    /* 00405659: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 00405660: mov eax, dword ptr [0x9a2e50] */ r_eax = R32((u32)(0x9a2e50u));
    /* 00405665: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405667: je 0x40566d */ if (fZ) goto L_0040566d;
L_00405669:; BB(0x00405669);
    /* 00405669: mov ecx, esi */ r_ecx = r_esi;
    /* 0040566b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40566du); call_ind(t); }
L_0040566d:; BB(0x0040566d);
    /* 0040566d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040566e: ret  */ FN_RET(0x00405600); r_esp += 4; return;
}

void f_00405670(void) /* sub_405670 */
{
    FN_ENTER(0x00405670);
    /* 00405670: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00405671: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00405672: mov esi, ecx */ r_esi = r_ecx;
    /* 00405674: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405676: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x40567bu); f_0082c21c();
    /* 0040567b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040567c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040567e: je 0x405687 */ if (fZ) goto L_00405687;
L_00405680:; BB(0x00405680);
    /* 00405680: mov ebx, 0xff7 */ r_ebx = 0xff7u;
    /* 00405685: jmp 0x40568c */ goto L_0040568c;
L_00405687:; BB(0x00405687);
    /* 00405687: mov ebx, 0xfff */ r_ebx = 0xfffu;
L_0040568c:; BB(0x0040568c);
    /* 0040568c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040568e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x405693u); f_006dc358();
    /* 00405693: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00405694: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00405696: jle 0x4056be */ if ((fZ||fS!=fO)) goto L_004056be;
L_00405698:; BB(0x00405698);
    /* 00405698: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0040569b: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040569e: je 0x4056bb */ if (fZ) goto L_004056bb;
L_004056a0:; BB(0x004056a0);
    /* 004056a0: mov dword ptr [esi + 0x1c], 0x16 */ W32((u32)(r_esi+0x1cu), 0x16u);
    /* 004056a7: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 004056ae: mov eax, dword ptr [0x9a2e50] */ r_eax = R32((u32)(0x9a2e50u));
    /* 004056b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004056b5: je 0x4056bb */ if (fZ) goto L_004056bb;
L_004056b7:; BB(0x004056b7);
    /* 004056b7: mov ecx, esi */ r_ecx = r_esi;
    /* 004056b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4056bbu); call_ind(t); }
L_004056bb:; BB(0x004056bb);
    /* 004056bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004056bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004056bd: ret  */ FN_RET(0x00405670); r_esp += 4; return;
L_004056be:; BB(0x004056be);
    /* 004056be: call 0x6c782c */ r_esp -= 4; W32(r_esp, 0x4056c3u); f_006c782c();
    /* 004056c3: call 0x6c29a0 */ r_esp -= 4; W32(r_esp, 0x4056c8u); f_006c29a0();
    /* 004056c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004056ca: jne 0x4056f2 */ if (!fZ) goto L_004056f2;
L_004056cc:; BB(0x004056cc);
    /* 004056cc: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004056cf: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004056d2: je 0x4056ef */ if (fZ) goto L_004056ef;
L_004056d4:; BB(0x004056d4);
    /* 004056d4: mov dword ptr [esi + 0x1c], 0x16 */ W32((u32)(r_esi+0x1cu), 0x16u);
    /* 004056db: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 004056e2: mov eax, dword ptr [0x9a2e50] */ r_eax = R32((u32)(0x9a2e50u));
    /* 004056e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004056e9: je 0x4056ef */ if (fZ) goto L_004056ef;
L_004056eb:; BB(0x004056eb);
    /* 004056eb: mov ecx, esi */ r_ecx = r_esi;
    /* 004056ed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4056efu); call_ind(t); }
L_004056ef:; BB(0x004056ef);
    /* 004056ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004056f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004056f1: ret  */ FN_RET(0x00405670); r_esp += 4; return;
L_004056f2:; BB(0x004056f2);
    /* 004056f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004056f4: call 0x6c2b88 */ r_esp -= 4; W32(r_esp, 0x4056f9u); f_006c2b88();
    /* 004056f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004056fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004056fc: je 0x405724 */ if (fZ) goto L_00405724;
L_004056fe:; BB(0x004056fe);
    /* 004056fe: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00405701: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00405704: je 0x405721 */ if (fZ) goto L_00405721;
L_00405706:; BB(0x00405706);
    /* 00405706: mov dword ptr [esi + 0x1c], 0x16 */ W32((u32)(r_esi+0x1cu), 0x16u);
    /* 0040570d: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 00405714: mov eax, dword ptr [0x9a2e50] */ r_eax = R32((u32)(0x9a2e50u));
    /* 00405719: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040571b: je 0x405721 */ if (fZ) goto L_00405721;
L_0040571d:; BB(0x0040571d);
    /* 0040571d: mov ecx, esi */ r_ecx = r_esi;
    /* 0040571f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x405721u); call_ind(t); }
L_00405721:; BB(0x00405721);
    /* 00405721: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00405722: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405723: ret  */ FN_RET(0x00405670); r_esp += 4; return;
L_00405724:; BB(0x00405724);
    /* 00405724: mov dword ptr [0xa95de0], 0xf */ W32((u32)(0xa95de0u), 0xfu);
    /* 0040572e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040572f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405730: ret  */ FN_RET(0x00405670); r_esp += 4; return;
}

void f_00405734(void) /* sub_405734 */
{
    FN_ENTER(0x00405734);
    /* 00405734: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00405737: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040573a: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
    /* 00405741: je 0x40575c */ if (fZ) goto L_0040575c;
L_00405743:; BB(0x00405743);
    /* 00405743: mov dword ptr [ecx + 0x1c], 6 */ W32((u32)(r_ecx+0x1cu), 0x6u);
    /* 0040574a: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 00405751: mov eax, dword ptr [0x9a2dd0] */ r_eax = R32((u32)(0x9a2dd0u));
    /* 00405756: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405758: je 0x40575c */ if (fZ) goto L_0040575c;
L_0040575a:; BB(0x0040575a);
    /* 0040575a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40575cu); call_ind(t); }
L_0040575c:; BB(0x0040575c);
    /* 0040575c: ret  */ FN_RET(0x00405734); r_esp += 4; return;
}

void f_00405760(void) /* sub_405760 */
{
    FN_ENTER(0x00405760);
    /* 00405760: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x405765u); f_00404a34();
    /* 00405765: ret  */ FN_RET(0x00405760); r_esp += 4; return;
}

void f_00405768(void) /* sub_405768 */
{
    FN_ENTER(0x00405768);
    /* 00405768: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040576a: call 0x82c38c */ r_esp -= 4; W32(r_esp, 0x40576fu); f_0082c38c();
    /* 0040576f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00405770: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 00405772: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405773: mov ecx, 0xaab384 */ r_ecx = 0xaab384u;
    /* 00405778: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040577a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040577c: call 0x7a630c */ r_esp -= 4; W32(r_esp, 0x405781u); f_007a630c();
    /* 00405781: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405783: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x405788u); f_007a60dc();
    /* 00405788: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00405789: ret  */ FN_RET(0x00405768); r_esp += 4; return;
}

void f_0040578c(void) /* sub_40578C */
{
    FN_ENTER(0x0040578c);
    /* 0040578c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040578d: mov ebp, dword ptr [0xa95df0] */ r_ebp = R32((u32)(0xa95df0u));
    /* 00405793: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405795: je 0x4057ce */ if (fZ) goto L_004057ce;
L_00405797:; BB(0x00405797);
    /* 00405797: movsx eax, byte ptr [ebp + 7] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x7u));
    /* 0040579b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040579c: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x4057a1u); f_007083d4();
    /* 004057a1: movsx eax, word ptr [ebp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 004057a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004057a6: call 0x814730 */ r_esp -= 4; W32(r_esp, 0x4057abu); f_00814730();
    /* 004057ab: movsx eax, byte ptr [ebp + 6] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x6u));
    /* 004057af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004057b0: call 0x8147c4 */ r_esp -= 4; W32(r_esp, 0x4057b5u); f_008147c4();
    /* 004057b5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004057b8: call 0x8146f8 */ r_esp -= 4; W32(r_esp, 0x4057bdu); f_008146f8();
    /* 004057bd: call 0x81e268 */ r_esp -= 4; W32(r_esp, 0x4057c2u); f_0081e268();
    /* 004057c2: call 0x8248a4 */ r_esp -= 4; W32(r_esp, 0x4057c7u); f_008248a4();
    /* 004057c7: call 0x8215a0 */ r_esp -= 4; W32(r_esp, 0x4057ccu); f_008215a0();
    /* 004057cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004057cd: ret  */ FN_RET(0x0040578c); r_esp += 4; return;
L_004057ce:; BB(0x004057ce);
    /* 004057ce: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004057d1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004057d4: je 0x4057ef */ if (fZ) goto L_004057ef;
L_004057d6:; BB(0x004057d6);
    /* 004057d6: mov dword ptr [ecx + 0x1c], 3 */ W32((u32)(r_ecx+0x1cu), 0x3u);
    /* 004057dd: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 004057e4: mov eax, dword ptr [0x9a2db8] */ r_eax = R32((u32)(0x9a2db8u));
    /* 004057e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004057eb: je 0x4057ef */ if (fZ) goto L_004057ef;
L_004057ed:; BB(0x004057ed);
    /* 004057ed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4057efu); call_ind(t); }
L_004057ef:; BB(0x004057ef);
    /* 004057ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004057f0: ret  */ FN_RET(0x0040578c); r_esp += 4; return;
}

void f_004057f4(void) /* sub_4057F4 */
{
    FN_ENTER(0x004057f4);
    /* 004057f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004057f5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004057f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004057f9: mov dword ptr [ebp + 0x64], eax */ W32((u32)(r_ebp+0x64u), r_eax);
    /* 004057fc: mov dword ptr [ebp + 0x30], 2 */ W32((u32)(r_ebp+0x30u), 0x2u);
    /* 00405803: mov dword ptr [0xa3a93c], eax */ W32((u32)(0xa3a93cu), r_eax);
    /* 00405808: mov dword ptr [ebp + 0x68], eax */ W32((u32)(r_ebp+0x68u), r_eax);
    /* 0040580b: mov dword ptr [ebp + 0x1c], 0xffffffff */ W32((u32)(r_ebp+0x1cu), 0xffffffffu);
    /* 00405812: mov dword ptr [ebp + 0x6c], eax */ W32((u32)(r_ebp+0x6cu), r_eax);
    /* 00405815: mov dword ptr [ebp + 0x70], eax */ W32((u32)(r_ebp+0x70u), r_eax);
    /* 00405818: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 0040581b: mov dword ptr [ebp + 0x78], eax */ W32((u32)(r_ebp+0x78u), r_eax);
    /* 0040581e: mov dword ptr [ebp + 0x1284], eax */ W32((u32)(r_ebp+0x1284u), r_eax);
    /* 00405824: mov dword ptr [ebp + 0x1288], eax */ W32((u32)(r_ebp+0x1288u), r_eax);
    /* 0040582a: mov dword ptr [ebp + 0x128c], eax */ W32((u32)(r_ebp+0x128cu), r_eax);
    /* 00405830: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00405833: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 00405836: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 00405839: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 0040583c: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 0040583f: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 00405842: mov dword ptr [ebp + 0x80], eax */ W32((u32)(r_ebp+0x80u), r_eax);
    /* 00405848: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x40584du); f_006dc358();
    /* 0040584d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405850: jne 0x405877 */ if (!fZ) goto L_00405877;
L_00405852:; BB(0x00405852);
    /* 00405852: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00405855: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00405858: je 0x40589a */ if (fZ) goto L_0040589a;
L_0040585a:; BB(0x0040585a);
    /* 0040585a: mov dword ptr [ebp + 0x1c], 0x1c */ W32((u32)(r_ebp+0x1cu), 0x1cu);
    /* 00405861: mov dword ptr [ebp + 0x60], 0 */ W32((u32)(r_ebp+0x60u), 0x0u);
    /* 00405868: mov eax, dword ptr [0x9a2e80] */ r_eax = R32((u32)(0x9a2e80u));
    /* 0040586d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040586f: je 0x40589a */ if (fZ) goto L_0040589a;
L_00405871:; BB(0x00405871);
    /* 00405871: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00405873: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x405875u); call_ind(t); }
    /* 00405875: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405876: ret  */ FN_RET(0x004057f4); r_esp += 4; return;
L_00405877:; BB(0x00405877);
    /* 00405877: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0040587a: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040587d: je 0x40589a */ if (fZ) goto L_0040589a;
L_0040587f:; BB(0x0040587f);
    /* 0040587f: mov dword ptr [ebp + 0x1c], 0x1a */ W32((u32)(r_ebp+0x1cu), 0x1au);
    /* 00405886: mov dword ptr [ebp + 0x60], 0 */ W32((u32)(r_ebp+0x60u), 0x0u);
    /* 0040588d: mov eax, dword ptr [0x9a2e70] */ r_eax = R32((u32)(0x9a2e70u));
    /* 00405892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405894: je 0x40589a */ if (fZ) goto L_0040589a;
L_00405896:; BB(0x00405896);
    /* 00405896: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00405898: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40589au); call_ind(t); }
L_0040589a:; BB(0x0040589a);
    /* 0040589a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040589b: ret  */ FN_RET(0x004057f4); r_esp += 4; return;
}

void f_0040589c(void) /* sub_40589C */
{
    FN_ENTER(0x0040589c);
    /* 0040589c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040589d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0040589f: mov edx, dword ptr [ebp + 0x1288] */ r_edx = R32((u32)(r_ebp+0x1288u));
    /* 004058a5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004058a7: mov dword ptr [0xa3a920], 0 */ W32((u32)(0xa3a920u), 0x0u);
    /* 004058b1: je 0x4058ca */ if (fZ) goto L_004058ca;
L_004058b3:; BB(0x004058b3);
    /* 004058b3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004058b7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004058bc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004058c0: mov dword ptr [ebp + 0x1288], 0 */ W32((u32)(r_ebp+0x1288u), 0x0u);
L_004058ca:; BB(0x004058ca);
    /* 004058ca: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 004058cc: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 004058ce: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4058d3u); f_00792fe8();
    /* 004058d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004058d4: lea edx, [ebp + 0x84] */ r_edx = (u32)(r_ebp+0x84u);
    /* 004058da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004058db: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x4058e0u); f_00857fed();
    /* 004058e0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004058e3: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004058e6: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004058e9: je 0x405906 */ if (fZ) goto L_00405906;
L_004058eb:; BB(0x004058eb);
    /* 004058eb: mov dword ptr [ebp + 0x1c], 0x1b */ W32((u32)(r_ebp+0x1cu), 0x1bu);
    /* 004058f2: mov dword ptr [ebp + 0x60], 0 */ W32((u32)(r_ebp+0x60u), 0x0u);
    /* 004058f9: mov eax, dword ptr [0x9a2e78] */ r_eax = R32((u32)(0x9a2e78u));
    /* 004058fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405900: je 0x405906 */ if (fZ) goto L_00405906;
L_00405902:; BB(0x00405902);
    /* 00405902: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00405904: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x405906u); call_ind(t); }
L_00405906:; BB(0x00405906);
    /* 00405906: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405907: ret 8 */ FN_RET(0x0040589c); r_esp += 12; return;
}

void f_0040590c(void) /* sub_40590C */
{
    FN_ENTER(0x0040590c);
    /* 0040590c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040590d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0040590f: mov edx, dword ptr [ebp + 0x1288] */ r_edx = R32((u32)(r_ebp+0x1288u));
    /* 00405915: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405917: mov dword ptr [0xa3a920], 0 */ W32((u32)(0xa3a920u), 0x0u);
    /* 00405921: je 0x40593a */ if (fZ) goto L_0040593a;
L_00405923:; BB(0x00405923);
    /* 00405923: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00405927: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040592c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00405930: mov dword ptr [ebp + 0x1288], 0 */ W32((u32)(r_ebp+0x1288u), 0x0u);
L_0040593a:; BB(0x0040593a);
    /* 0040593a: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0040593c: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 0040593e: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x405943u); f_00792fe8();
    /* 00405943: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405944: lea edx, [ebp + 0x84] */ r_edx = (u32)(r_ebp+0x84u);
    /* 0040594a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040594b: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x405950u); f_00857fed();
    /* 00405950: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405953: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00405956: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00405959: je 0x405976 */ if (fZ) goto L_00405976;
L_0040595b:; BB(0x0040595b);
    /* 0040595b: mov dword ptr [ebp + 0x1c], 0x1b */ W32((u32)(r_ebp+0x1cu), 0x1bu);
    /* 00405962: mov dword ptr [ebp + 0x60], 0 */ W32((u32)(r_ebp+0x60u), 0x0u);
    /* 00405969: mov eax, dword ptr [0x9a2e78] */ r_eax = R32((u32)(0x9a2e78u));
    /* 0040596e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405970: je 0x405976 */ if (fZ) goto L_00405976;
L_00405972:; BB(0x00405972);
    /* 00405972: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00405974: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x405976u); call_ind(t); }
L_00405976:; BB(0x00405976);
    /* 00405976: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405977: ret 8 */ FN_RET(0x0040590c); r_esp += 12; return;
}

void f_0040597c(void)
{
    FN_ENTER(0x0040597c);
    /* 0040597c: mov ecx, dword ptr [0xa3a920] */ r_ecx = R32((u32)(0xa3a920u));
    /* 00405982: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405984: je 0x405993 */ if (fZ) goto L_00405993;
L_00405986:; BB(0x00405986);
    /* 00405986: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040598a: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040598e: call 0x40589c */ r_esp -= 4; W32(r_esp, 0x405993u); f_0040589c();
L_00405993:; BB(0x00405993);
    /* 00405993: ret  */ FN_RET(0x0040597c); r_esp += 4; return;
}

void f_00405994(void)
{
    FN_ENTER(0x00405994);
    /* 00405994: mov ecx, dword ptr [0xa3a920] */ r_ecx = R32((u32)(0xa3a920u));
    /* 0040599a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040599c: je 0x4059ab */ if (fZ) goto L_004059ab;
L_0040599e:; BB(0x0040599e);
    /* 0040599e: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004059a2: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004059a6: call 0x40590c */ r_esp -= 4; W32(r_esp, 0x4059abu); f_0040590c();
L_004059ab:; BB(0x004059ab);
    /* 004059ab: ret  */ FN_RET(0x00405994); r_esp += 4; return;
}

void f_004059ac(void)
{
    FN_ENTER(0x004059ac);
    /* 004059ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004059ad: mov esi, ecx */ r_esi = r_ecx;
    /* 004059af: mov ecx, dword ptr [0xa3b1a0] */ r_ecx = R32((u32)(0xa3b1a0u));
    /* 004059b5: call 0x414d50 */ r_esp -= 4; W32(r_esp, 0x4059bau); f_00414d50();
    /* 004059ba: mov edx, dword ptr [esi + 0x44] */ r_edx = R32((u32)(r_esi+0x44u));
    /* 004059bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004059bf: je 0x4059d5 */ if (fZ) goto L_004059d5;
L_004059c1:; BB(0x004059c1);
    /* 004059c1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004059c5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004059ca: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004059ce: mov dword ptr [esi + 0x44], 0 */ W32((u32)(r_esi+0x44u), 0x0u);
L_004059d5:; BB(0x004059d5);
    /* 004059d5: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 004059d8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004059da: je 0x4059f0 */ if (fZ) goto L_004059f0;
L_004059dc:; BB(0x004059dc);
    /* 004059dc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004059e0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004059e5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004059e9: mov dword ptr [esi + 0x48], 0 */ W32((u32)(r_esi+0x48u), 0x0u);
L_004059f0:; BB(0x004059f0);
    /* 004059f0: mov edx, dword ptr [esi + 0x4c] */ r_edx = R32((u32)(r_esi+0x4cu));
    /* 004059f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004059f5: je 0x405a0b */ if (fZ) goto L_00405a0b;
L_004059f7:; BB(0x004059f7);
    /* 004059f7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004059fb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00405a00: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00405a04: mov dword ptr [esi + 0x4c], 0 */ W32((u32)(r_esi+0x4cu), 0x0u);
L_00405a0b:; BB(0x00405a0b);
    /* 00405a0b: mov ecx, dword ptr [esi + 0x50] */ r_ecx = R32((u32)(r_esi+0x50u));
    /* 00405a0e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405a10: je 0x405a1e */ if (fZ) goto L_00405a1e;
L_00405a12:; BB(0x00405a12);
    /* 00405a12: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405a17u); f_007127b0();
    /* 00405a17: mov dword ptr [esi + 0x50], 0 */ W32((u32)(r_esi+0x50u), 0x0u);
L_00405a1e:; BB(0x00405a1e);
    /* 00405a1e: mov ecx, dword ptr [esi + 0x54] */ r_ecx = R32((u32)(r_esi+0x54u));
    /* 00405a21: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405a23: je 0x405a31 */ if (fZ) goto L_00405a31;
L_00405a25:; BB(0x00405a25);
    /* 00405a25: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405a2au); f_007127b0();
    /* 00405a2a: mov dword ptr [esi + 0x54], 0 */ W32((u32)(r_esi+0x54u), 0x0u);
L_00405a31:; BB(0x00405a31);
    /* 00405a31: mov ecx, dword ptr [esi + 0x58] */ r_ecx = R32((u32)(r_esi+0x58u));
    /* 00405a34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405a36: je 0x405a44 */ if (fZ) goto L_00405a44;
L_00405a38:; BB(0x00405a38);
    /* 00405a38: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405a3du); f_007127b0();
    /* 00405a3d: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
L_00405a44:; BB(0x00405a44);
    /* 00405a44: mov ecx, dword ptr [esi + 0x5c] */ r_ecx = R32((u32)(r_esi+0x5cu));
    /* 00405a47: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405a49: je 0x405a57 */ if (fZ) goto L_00405a57;
L_00405a4b:; BB(0x00405a4b);
    /* 00405a4b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405a50u); f_007127b0();
    /* 00405a50: mov dword ptr [esi + 0x5c], 0 */ W32((u32)(r_esi+0x5cu), 0x0u);
L_00405a57:; BB(0x00405a57);
    /* 00405a57: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00405a5a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405a5c: je 0x405a6a */ if (fZ) goto L_00405a6a;
L_00405a5e:; BB(0x00405a5e);
    /* 00405a5e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405a63u); f_007127b0();
    /* 00405a63: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
L_00405a6a:; BB(0x00405a6a);
    /* 00405a6a: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 00405a6d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405a6f: je 0x405a7d */ if (fZ) goto L_00405a7d;
L_00405a71:; BB(0x00405a71);
    /* 00405a71: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405a76u); f_007127b0();
    /* 00405a76: mov dword ptr [esi + 0x64], 0 */ W32((u32)(r_esi+0x64u), 0x0u);
L_00405a7d:; BB(0x00405a7d);
    /* 00405a7d: mov ecx, dword ptr [esi + 0x68] */ r_ecx = R32((u32)(r_esi+0x68u));
    /* 00405a80: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405a82: je 0x405a90 */ if (fZ) goto L_00405a90;
L_00405a84:; BB(0x00405a84);
    /* 00405a84: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405a89u); f_007127b0();
    /* 00405a89: mov dword ptr [esi + 0x68], 0 */ W32((u32)(r_esi+0x68u), 0x0u);
L_00405a90:; BB(0x00405a90);
    /* 00405a90: mov ecx, dword ptr [esi + 0x6c] */ r_ecx = R32((u32)(r_esi+0x6cu));
    /* 00405a93: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405a95: je 0x405aa3 */ if (fZ) goto L_00405aa3;
L_00405a97:; BB(0x00405a97);
    /* 00405a97: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405a9cu); f_007127b0();
    /* 00405a9c: mov dword ptr [esi + 0x6c], 0 */ W32((u32)(r_esi+0x6cu), 0x0u);
L_00405aa3:; BB(0x00405aa3);
    /* 00405aa3: mov ecx, dword ptr [esi + 0x70] */ r_ecx = R32((u32)(r_esi+0x70u));
    /* 00405aa6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405aa8: je 0x405ab6 */ if (fZ) goto L_00405ab6;
L_00405aaa:; BB(0x00405aaa);
    /* 00405aaa: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405aafu); f_007127b0();
    /* 00405aaf: mov dword ptr [esi + 0x70], 0 */ W32((u32)(r_esi+0x70u), 0x0u);
L_00405ab6:; BB(0x00405ab6);
    /* 00405ab6: mov ecx, dword ptr [esi + 0x74] */ r_ecx = R32((u32)(r_esi+0x74u));
    /* 00405ab9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405abb: je 0x405ac9 */ if (fZ) goto L_00405ac9;
L_00405abd:; BB(0x00405abd);
    /* 00405abd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405ac2u); f_007127b0();
    /* 00405ac2: mov dword ptr [esi + 0x74], 0 */ W32((u32)(r_esi+0x74u), 0x0u);
L_00405ac9:; BB(0x00405ac9);
    /* 00405ac9: mov ecx, dword ptr [esi + 0x78] */ r_ecx = R32((u32)(r_esi+0x78u));
    /* 00405acc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405ace: je 0x405adc */ if (fZ) goto L_00405adc;
L_00405ad0:; BB(0x00405ad0);
    /* 00405ad0: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405ad5u); f_007127b0();
    /* 00405ad5: mov dword ptr [esi + 0x78], 0 */ W32((u32)(r_esi+0x78u), 0x0u);
L_00405adc:; BB(0x00405adc);
    /* 00405adc: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 00405adf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405ae1: je 0x405b27 */ if (fZ) goto L_00405b27;
L_00405ae3:; BB(0x00405ae3);
    /* 00405ae3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405ae6: jne 0x405b0d */ if (!fZ) goto L_00405b0d;
L_00405ae8:; BB(0x00405ae8);
    /* 00405ae8: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 00405aeb: call 0x40f6e8 */ r_esp -= 4; W32(r_esp, 0x405af0u); f_0040f6e8();
    /* 00405af0: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00405af3: call 0x40f6e8 */ r_esp -= 4; W32(r_esp, 0x405af8u); f_0040f6e8();
    /* 00405af8: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 00405afb: call 0x414b68 */ r_esp -= 4; W32(r_esp, 0x405b00u); f_00414b68();
    /* 00405b00: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 00405b03: call 0x414b68 */ r_esp -= 4; W32(r_esp, 0x405b08u); f_00414b68();
    /* 00405b08: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 00405b0b: jmp 0x405b3a */ goto L_00405b3a;
L_00405b0d:; BB(0x00405b0d);
    /* 00405b0d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405b10: jne 0x405b3a */ if (!fZ) goto L_00405b3a;
L_00405b12:; BB(0x00405b12);
    /* 00405b12: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00405b15: call 0x40f6e8 */ r_esp -= 4; W32(r_esp, 0x405b1au); f_0040f6e8();
    /* 00405b1a: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 00405b1d: call 0x414b68 */ r_esp -= 4; W32(r_esp, 0x405b22u); f_00414b68();
    /* 00405b22: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 00405b25: jmp 0x405b3a */ goto L_00405b3a;
L_00405b27:; BB(0x00405b27);
    /* 00405b27: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 00405b2a: call 0x40f6e8 */ r_esp -= 4; W32(r_esp, 0x405b2fu); f_0040f6e8();
    /* 00405b2f: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 00405b32: call 0x414b68 */ r_esp -= 4; W32(r_esp, 0x405b37u); f_00414b68();
    /* 00405b37: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
L_00405b3a:; BB(0x00405b3a);
    /* 00405b3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405b3c: je 0x405b99 */ if (fZ) goto L_00405b99;
L_00405b3e:; BB(0x00405b3e);
    /* 00405b3e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405b41: jne 0x405b65 */ if (!fZ) goto L_00405b65;
L_00405b43:; BB(0x00405b43);
    /* 00405b43: push 0x8f8964 */ { u32 v = 0x8f8964u; r_esp -= 4; W32(r_esp, v); }
    /* 00405b48: mov ecx, dword ptr [0xa3b1a0] */ r_ecx = R32((u32)(0xa3b1a0u));
    /* 00405b4e: call 0x414c94 */ r_esp -= 4; W32(r_esp, 0x405b53u); f_00414c94();
    /* 00405b53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405b55: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00405b57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00405b58: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x405b5du); f_004088b8();
    /* 00405b5d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00405b60: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 00405b63: jmp 0x405bc9 */ goto L_00405bc9;
L_00405b65:; BB(0x00405b65);
    /* 00405b65: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00405b68: jne 0x405bc9 */ if (!fZ) goto L_00405bc9;
L_00405b6a:; BB(0x00405b6a);
    /* 00405b6a: push 0x8f896c */ { u32 v = 0x8f896cu; r_esp -= 4; W32(r_esp, v); }
    /* 00405b6f: mov ecx, dword ptr [0xa3b1a0] */ r_ecx = R32((u32)(0xa3b1a0u));
    /* 00405b75: call 0x414c94 */ r_esp -= 4; W32(r_esp, 0x405b7au); f_00414c94();
    /* 00405b7a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405b7c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00405b7e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00405b7f: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x405b84u); f_004088b8();
    /* 00405b84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405b86: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00405b88: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 00405b8b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00405b8c: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x405b91u); f_004088b8();
    /* 00405b91: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00405b94: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 00405b97: jmp 0x405bc9 */ goto L_00405bc9;
L_00405b99:; BB(0x00405b99);
    /* 00405b99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405b9b: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00405b9d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00405b9e: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x405ba3u); f_004088b8();
    /* 00405ba3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405ba6: push 0x8f8964 */ { u32 v = 0x8f8964u; r_esp -= 4; W32(r_esp, v); }
    /* 00405bab: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 00405bae: mov ecx, dword ptr [0xa3b1a0] */ r_ecx = R32((u32)(0xa3b1a0u));
    /* 00405bb4: call 0x414c94 */ r_esp -= 4; W32(r_esp, 0x405bb9u); f_00414c94();
    /* 00405bb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405bbb: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00405bbd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00405bbe: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x405bc3u); f_004088b8();
    /* 00405bc3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00405bc6: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
L_00405bc9:; BB(0x00405bc9);
    /* 00405bc9: mov dword ptr [esi + 0x24], 1 */ W32((u32)(r_esi+0x24u), 0x1u);
    /* 00405bd0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405bd1: ret  */ FN_RET(0x004059ac); r_esp += 4; return;
}

void f_00405bd4(void) /* sub_405BD4 */
{
    FN_ENTER(0x00405bd4);
    /* 00405bd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00405bd5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00405bd7: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 00405bda: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405bdc: je 0x405bea */ if (fZ) goto L_00405bea;
L_00405bde:; BB(0x00405bde);
    /* 00405bde: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405be3u); f_007127b0();
    /* 00405be3: mov dword ptr [ebx + 0x54], 0 */ W32((u32)(r_ebx+0x54u), 0x0u);
L_00405bea:; BB(0x00405bea);
    /* 00405bea: mov ecx, dword ptr [ebx + 0x58] */ r_ecx = R32((u32)(r_ebx+0x58u));
    /* 00405bed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405bef: je 0x405bfd */ if (fZ) goto L_00405bfd;
L_00405bf1:; BB(0x00405bf1);
    /* 00405bf1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405bf6u); f_007127b0();
    /* 00405bf6: mov dword ptr [ebx + 0x58], 0 */ W32((u32)(r_ebx+0x58u), 0x0u);
L_00405bfd:; BB(0x00405bfd);
    /* 00405bfd: mov ecx, dword ptr [ebx + 0x5c] */ r_ecx = R32((u32)(r_ebx+0x5cu));
    /* 00405c00: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405c02: je 0x405c10 */ if (fZ) goto L_00405c10;
L_00405c04:; BB(0x00405c04);
    /* 00405c04: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405c09u); f_007127b0();
    /* 00405c09: mov dword ptr [ebx + 0x5c], 0 */ W32((u32)(r_ebx+0x5cu), 0x0u);
L_00405c10:; BB(0x00405c10);
    /* 00405c10: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00405c13: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405c15: je 0x405c23 */ if (fZ) goto L_00405c23;
L_00405c17:; BB(0x00405c17);
    /* 00405c17: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405c1cu); f_007127b0();
    /* 00405c1c: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
L_00405c23:; BB(0x00405c23);
    /* 00405c23: mov ecx, dword ptr [ebx + 0x64] */ r_ecx = R32((u32)(r_ebx+0x64u));
    /* 00405c26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405c28: je 0x405c36 */ if (fZ) goto L_00405c36;
L_00405c2a:; BB(0x00405c2a);
    /* 00405c2a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405c2fu); f_007127b0();
    /* 00405c2f: mov dword ptr [ebx + 0x64], 0 */ W32((u32)(r_ebx+0x64u), 0x0u);
L_00405c36:; BB(0x00405c36);
    /* 00405c36: mov ecx, dword ptr [ebx + 0x68] */ r_ecx = R32((u32)(r_ebx+0x68u));
    /* 00405c39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405c3b: je 0x405c49 */ if (fZ) goto L_00405c49;
L_00405c3d:; BB(0x00405c3d);
    /* 00405c3d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405c42u); f_007127b0();
    /* 00405c42: mov dword ptr [ebx + 0x68], 0 */ W32((u32)(r_ebx+0x68u), 0x0u);
L_00405c49:; BB(0x00405c49);
    /* 00405c49: mov ecx, dword ptr [ebx + 0x6c] */ r_ecx = R32((u32)(r_ebx+0x6cu));
    /* 00405c4c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405c4e: je 0x405c5c */ if (fZ) goto L_00405c5c;
L_00405c50:; BB(0x00405c50);
    /* 00405c50: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405c55u); f_007127b0();
    /* 00405c55: mov dword ptr [ebx + 0x6c], 0 */ W32((u32)(r_ebx+0x6cu), 0x0u);
L_00405c5c:; BB(0x00405c5c);
    /* 00405c5c: mov ecx, dword ptr [ebx + 0x70] */ r_ecx = R32((u32)(r_ebx+0x70u));
    /* 00405c5f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405c61: je 0x405c6f */ if (fZ) goto L_00405c6f;
L_00405c63:; BB(0x00405c63);
    /* 00405c63: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405c68u); f_007127b0();
    /* 00405c68: mov dword ptr [ebx + 0x70], 0 */ W32((u32)(r_ebx+0x70u), 0x0u);
L_00405c6f:; BB(0x00405c6f);
    /* 00405c6f: mov ecx, dword ptr [ebx + 0x74] */ r_ecx = R32((u32)(r_ebx+0x74u));
    /* 00405c72: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405c74: je 0x405c82 */ if (fZ) goto L_00405c82;
L_00405c76:; BB(0x00405c76);
    /* 00405c76: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405c7bu); f_007127b0();
    /* 00405c7b: mov dword ptr [ebx + 0x74], 0 */ W32((u32)(r_ebx+0x74u), 0x0u);
L_00405c82:; BB(0x00405c82);
    /* 00405c82: mov ecx, dword ptr [ebx + 0x78] */ r_ecx = R32((u32)(r_ebx+0x78u));
    /* 00405c85: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405c87: je 0x405c95 */ if (fZ) goto L_00405c95;
L_00405c89:; BB(0x00405c89);
    /* 00405c89: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405c8eu); f_007127b0();
    /* 00405c8e: mov dword ptr [ebx + 0x78], 0 */ W32((u32)(r_ebx+0x78u), 0x0u);
L_00405c95:; BB(0x00405c95);
    /* 00405c95: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 00405c98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405c9a: je 0x405d18 */ if (fZ) goto L_00405d18;
L_00405c9c:; BB(0x00405c9c);
    /* 00405c9c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405c9f: jne 0x405d01 */ if (!fZ) goto L_00405d01;
L_00405ca1:; BB(0x00405ca1);
    /* 00405ca1: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 00405ca4: call 0x40f6e8 */ r_esp -= 4; W32(r_esp, 0x405ca9u); f_0040f6e8();
    /* 00405ca9: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00405cac: call 0x40f6e8 */ r_esp -= 4; W32(r_esp, 0x405cb1u); f_0040f6e8();
    /* 00405cb1: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 00405cb4: call 0x414b68 */ r_esp -= 4; W32(r_esp, 0x405cb9u); f_00414b68();
    /* 00405cb9: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 00405cbc: call 0x414b68 */ r_esp -= 4; W32(r_esp, 0x405cc1u); f_00414b68();
    /* 00405cc1: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 00405cc4: call 0x406684 */ r_esp -= 4; W32(r_esp, 0x405cc9u); f_00406684();
    /* 00405cc9: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 00405ccc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405cce: je 0x405ce4 */ if (fZ) goto L_00405ce4;
L_00405cd0:; BB(0x00405cd0);
    /* 00405cd0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00405cd4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00405cd9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00405cdd: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
L_00405ce4:; BB(0x00405ce4);
    /* 00405ce4: mov edx, dword ptr [ebx + 0x4c] */ r_edx = R32((u32)(r_ebx+0x4cu));
    /* 00405ce7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405ce9: je 0x405d30 */ if (fZ) goto L_00405d30;
L_00405ceb:; BB(0x00405ceb);
    /* 00405ceb: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00405cef: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00405cf4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00405cf8: mov dword ptr [ebx + 0x4c], 0 */ W32((u32)(r_ebx+0x4cu), 0x0u);
    /* 00405cff: jmp 0x405d30 */ goto L_00405d30;
L_00405d01:; BB(0x00405d01);
    /* 00405d01: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405d04: jne 0x405d30 */ if (!fZ) goto L_00405d30;
L_00405d06:; BB(0x00405d06);
    /* 00405d06: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00405d09: call 0x40f6e8 */ r_esp -= 4; W32(r_esp, 0x405d0eu); f_0040f6e8();
    /* 00405d0e: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 00405d11: call 0x414b68 */ r_esp -= 4; W32(r_esp, 0x405d16u); f_00414b68();
    /* 00405d16: jmp 0x405d30 */ goto L_00405d30;
L_00405d18:; BB(0x00405d18);
    /* 00405d18: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 00405d1b: call 0x40f6e8 */ r_esp -= 4; W32(r_esp, 0x405d20u); f_0040f6e8();
    /* 00405d20: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 00405d23: call 0x414b68 */ r_esp -= 4; W32(r_esp, 0x405d28u); f_00414b68();
    /* 00405d28: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 00405d2b: call 0x406684 */ r_esp -= 4; W32(r_esp, 0x405d30u); f_00406684();
L_00405d30:; BB(0x00405d30);
    /* 00405d30: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00405d33: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00405d36: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00405d38: jle 0x405d56 */ if ((fZ||fS!=fO)) goto L_00405d56;
L_00405d3a:; BB(0x00405d3a);
    /* 00405d3a: mov ecx, dword ptr [ebx + 0x50] */ r_ecx = R32((u32)(r_ebx+0x50u));
    /* 00405d3d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405d3f: je 0x405d4d */ if (fZ) goto L_00405d4d;
L_00405d41:; BB(0x00405d41);
    /* 00405d41: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405d46u); f_007127b0();
    /* 00405d46: mov dword ptr [ebx + 0x50], 0 */ W32((u32)(r_ebx+0x50u), 0x0u);
L_00405d4d:; BB(0x00405d4d);
    /* 00405d4d: mov dword ptr [ebx + 0x24], 2 */ W32((u32)(r_ebx+0x24u), 0x2u);
L_00405d54:; BB(0x00405d54);
    /* 00405d54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00405d55: ret  */ FN_RET(0x00405bd4); r_esp += 4; return;
L_00405d56:; BB(0x00405d56);
    /* 00405d56: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00405d59: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00405d5c: jle 0x405d54 */ if ((fZ||fS!=fO)) goto L_00405d54;
L_00405d5e:; BB(0x00405d5e);
    /* 00405d5e: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00405d61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405d63: jne 0x405d54 */ if (!fZ) goto L_00405d54;
L_00405d65:; BB(0x00405d65);
    /* 00405d65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405d67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405d68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405d69: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00405d6b: call 0x406374 */ r_esp -= 4; W32(r_esp, 0x405d70u); f_00406374();
    /* 00405d70: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 00405d73: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00405d74: ret  */ FN_RET(0x00405bd4); r_esp += 4; return;
}

void f_00405d78(void)
{
    FN_ENTER(0x00405d78);
    /* 00405d78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405d79: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00405d7b: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00405d7e: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00405d81: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00405d84: jle 0x405da2 */ if ((fZ||fS!=fO)) goto L_00405da2;
L_00405d86:; BB(0x00405d86);
    /* 00405d86: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 00405d89: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405d8b: je 0x405d99 */ if (fZ) goto L_00405d99;
L_00405d8d:; BB(0x00405d8d);
    /* 00405d8d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405d92u); f_007127b0();
    /* 00405d92: mov dword ptr [ebp + 0x60], 0 */ W32((u32)(r_ebp+0x60u), 0x0u);
L_00405d99:; BB(0x00405d99);
    /* 00405d99: mov dword ptr [ebp + 0x24], 6 */ W32((u32)(r_ebp+0x24u), 0x6u);
    /* 00405da0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405da1: ret  */ FN_RET(0x00405d78); r_esp += 4; return;
L_00405da2:; BB(0x00405da2);
    /* 00405da2: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00405da5: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00405da8: jle 0x405db1 */ if ((fZ||fS!=fO)) goto L_00405db1;
L_00405daa:; BB(0x00405daa);
    /* 00405daa: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 00405dad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405daf: je 0x405db3 */ if (fZ) goto L_00405db3;
L_00405db1:; BB(0x00405db1);
    /* 00405db1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405db2: ret  */ FN_RET(0x00405d78); r_esp += 4; return;
L_00405db3:; BB(0x00405db3);
    /* 00405db3: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00405db5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405db7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00405db9: call 0x406374 */ r_esp -= 4; W32(r_esp, 0x405dbeu); f_00406374();
    /* 00405dbe: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 00405dc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405dc2: ret  */ FN_RET(0x00405d78); r_esp += 4; return;
}

void f_00405dc4(void)
{
    FN_ENTER(0x00405dc4);
    /* 00405dc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405dc5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00405dc7: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00405dca: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00405dcd: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00405dd0: jle 0x405dee */ if ((fZ||fS!=fO)) goto L_00405dee;
L_00405dd2:; BB(0x00405dd2);
    /* 00405dd2: mov ecx, dword ptr [ebp + 0x68] */ r_ecx = R32((u32)(r_ebp+0x68u));
    /* 00405dd5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405dd7: je 0x405de5 */ if (fZ) goto L_00405de5;
L_00405dd9:; BB(0x00405dd9);
    /* 00405dd9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405ddeu); f_007127b0();
    /* 00405dde: mov dword ptr [ebp + 0x68], 0 */ W32((u32)(r_ebp+0x68u), 0x0u);
L_00405de5:; BB(0x00405de5);
    /* 00405de5: mov dword ptr [ebp + 0x24], 8 */ W32((u32)(r_ebp+0x24u), 0x8u);
    /* 00405dec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405ded: ret  */ FN_RET(0x00405dc4); r_esp += 4; return;
L_00405dee:; BB(0x00405dee);
    /* 00405dee: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00405df1: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00405df4: jle 0x405dfd */ if ((fZ||fS!=fO)) goto L_00405dfd;
L_00405df6:; BB(0x00405df6);
    /* 00405df6: mov eax, dword ptr [ebp + 0x68] */ r_eax = R32((u32)(r_ebp+0x68u));
    /* 00405df9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405dfb: je 0x405dff */ if (fZ) goto L_00405dff;
L_00405dfd:; BB(0x00405dfd);
    /* 00405dfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405dfe: ret  */ FN_RET(0x00405dc4); r_esp += 4; return;
L_00405dff:; BB(0x00405dff);
    /* 00405dff: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00405e01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405e03: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00405e05: call 0x406374 */ r_esp -= 4; W32(r_esp, 0x405e0au); f_00406374();
    /* 00405e0a: mov dword ptr [ebp + 0x68], eax */ W32((u32)(r_ebp+0x68u), r_eax);
    /* 00405e0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405e0e: ret  */ FN_RET(0x00405dc4); r_esp += 4; return;
}

void f_00405e10(void)
{
    FN_ENTER(0x00405e10);
    /* 00405e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405e11: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00405e13: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00405e16: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00405e19: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00405e1c: jle 0x405e3a */ if ((fZ||fS!=fO)) goto L_00405e3a;
L_00405e1e:; BB(0x00405e1e);
    /* 00405e1e: mov ecx, dword ptr [ebp + 0x70] */ r_ecx = R32((u32)(r_ebp+0x70u));
    /* 00405e21: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405e23: je 0x405e31 */ if (fZ) goto L_00405e31;
L_00405e25:; BB(0x00405e25);
    /* 00405e25: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x405e2au); f_007127b0();
    /* 00405e2a: mov dword ptr [ebp + 0x70], 0 */ W32((u32)(r_ebp+0x70u), 0x0u);
L_00405e31:; BB(0x00405e31);
    /* 00405e31: mov dword ptr [ebp + 0x24], 0xa */ W32((u32)(r_ebp+0x24u), 0xau);
    /* 00405e38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405e39: ret  */ FN_RET(0x00405e10); r_esp += 4; return;
L_00405e3a:; BB(0x00405e3a);
    /* 00405e3a: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00405e3d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00405e40: jle 0x405e49 */ if ((fZ||fS!=fO)) goto L_00405e49;
L_00405e42:; BB(0x00405e42);
    /* 00405e42: mov eax, dword ptr [ebp + 0x70] */ r_eax = R32((u32)(r_ebp+0x70u));
    /* 00405e45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00405e47: je 0x405e4b */ if (fZ) goto L_00405e4b;
L_00405e49:; BB(0x00405e49);
    /* 00405e49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405e4a: ret  */ FN_RET(0x00405e10); r_esp += 4; return;
L_00405e4b:; BB(0x00405e4b);
    /* 00405e4b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00405e4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405e4f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00405e51: call 0x406374 */ r_esp -= 4; W32(r_esp, 0x405e56u); f_00406374();
    /* 00405e56: mov dword ptr [ebp + 0x70], eax */ W32((u32)(r_ebp+0x70u), r_eax);
    /* 00405e59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405e5a: ret  */ FN_RET(0x00405e10); r_esp += 4; return;
}

void f_00405e5c(void)
{
    FN_ENTER(0x00405e5c);
    /* 00405e5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00405e5d: mov edi, ecx */ r_edi = r_ecx;
    /* 00405e5f: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 00405e62: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00405e65: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00405e68: jl 0x405f61 */ if ((fS!=fO)) goto L_00405f61;
L_00405e6e:; BB(0x00405e6e);
    /* 00405e6e: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00405e71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405e73: je 0x405f26 */ if (fZ) goto L_00405f26;
L_00405e79:; BB(0x00405e79);
    /* 00405e79: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405e7c: jne 0x405ef8 */ if (!fZ) goto L_00405ef8;
L_00405e7e:; BB(0x00405e7e);
    /* 00405e7e: push 0x8f8940 */ { u32 v = 0x8f8940u; r_esp -= 4; W32(r_esp, v); }
    /* 00405e83: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00405e86: call 0x40f694 */ r_esp -= 4; W32(r_esp, 0x405e8bu); f_0040f694();
    /* 00405e8b: push 0x8f8948 */ { u32 v = 0x8f8948u; r_esp -= 4; W32(r_esp, v); }
    /* 00405e90: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00405e93: call 0x40f694 */ r_esp -= 4; W32(r_esp, 0x405e98u); f_0040f694();
    /* 00405e98: push 0x8f8950 */ { u32 v = 0x8f8950u; r_esp -= 4; W32(r_esp, v); }
    /* 00405e9d: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00405ea0: call 0x40f694 */ r_esp -= 4; W32(r_esp, 0x405ea5u); f_0040f694();
    /* 00405ea5: push 0x8f8958 */ { u32 v = 0x8f8958u; r_esp -= 4; W32(r_esp, v); }
    /* 00405eaa: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00405ead: call 0x40f694 */ r_esp -= 4; W32(r_esp, 0x405eb2u); f_0040f694();
    /* 00405eb2: push 0x8f8928 */ { u32 v = 0x8f8928u; r_esp -= 4; W32(r_esp, v); }
    /* 00405eb7: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00405eba: call 0x40f694 */ r_esp -= 4; W32(r_esp, 0x405ebfu); f_0040f694();
    /* 00405ebf: push 0x8f8930 */ { u32 v = 0x8f8930u; r_esp -= 4; W32(r_esp, v); }
    /* 00405ec4: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00405ec7: call 0x40f694 */ r_esp -= 4; W32(r_esp, 0x405eccu); f_0040f694();
    /* 00405ecc: push 0x8f8938 */ { u32 v = 0x8f8938u; r_esp -= 4; W32(r_esp, v); }
    /* 00405ed1: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00405ed4: call 0x40f694 */ r_esp -= 4; W32(r_esp, 0x405ed9u); f_0040f694();
    /* 00405ed9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405edb: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00405edd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00405ede: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x405ee3u); f_004088b8();
    /* 00405ee3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405ee5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00405ee7: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 00405eea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00405eeb: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x405ef0u); f_004088b8();
    /* 00405ef0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00405ef3: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 00405ef6: jmp 0x405f5a */ goto L_00405f5a;
L_00405ef8:; BB(0x00405ef8);
    /* 00405ef8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00405efb: jne 0x405f5a */ if (!fZ) goto L_00405f5a;
L_00405efd:; BB(0x00405efd);
    /* 00405efd: push 0x8f8940 */ { u32 v = 0x8f8940u; r_esp -= 4; W32(r_esp, v); }
    /* 00405f02: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00405f05: call 0x40f694 */ r_esp -= 4; W32(r_esp, 0x405f0au); f_0040f694();
    /* 00405f0a: push 0x8f8948 */ { u32 v = 0x8f8948u; r_esp -= 4; W32(r_esp, v); }
    /* 00405f0f: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00405f12: call 0x40f694 */ r_esp -= 4; W32(r_esp, 0x405f17u); f_0040f694();
    /* 00405f17: push 0x8f8950 */ { u32 v = 0x8f8950u; r_esp -= 4; W32(r_esp, v); }
    /* 00405f1c: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00405f1f: call 0x40f694 */ r_esp -= 4; W32(r_esp, 0x405f24u); f_0040f694();
    /* 00405f24: jmp 0x405f5a */ goto L_00405f5a;
L_00405f26:; BB(0x00405f26);
    /* 00405f26: push 0x8f8908 */ { u32 v = 0x8f8908u; r_esp -= 4; W32(r_esp, v); }
    /* 00405f2b: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00405f2e: call 0x40f694 */ r_esp -= 4; W32(r_esp, 0x405f33u); f_0040f694();
    /* 00405f33: push 0x8f8910 */ { u32 v = 0x8f8910u; r_esp -= 4; W32(r_esp, v); }
    /* 00405f38: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00405f3b: call 0x40f694 */ r_esp -= 4; W32(r_esp, 0x405f40u); f_0040f694();
    /* 00405f40: push 0x8f8918 */ { u32 v = 0x8f8918u; r_esp -= 4; W32(r_esp, v); }
    /* 00405f45: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00405f48: call 0x40f694 */ r_esp -= 4; W32(r_esp, 0x405f4du); f_0040f694();
    /* 00405f4d: push 0x8f8920 */ { u32 v = 0x8f8920u; r_esp -= 4; W32(r_esp, v); }
    /* 00405f52: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00405f55: call 0x40f694 */ r_esp -= 4; W32(r_esp, 0x405f5au); f_0040f694();
L_00405f5a:; BB(0x00405f5a);
    /* 00405f5a: mov dword ptr [edi + 0x24], 0xd */ W32((u32)(r_edi+0x24u), 0xdu);
L_00405f61:; BB(0x00405f61);
    /* 00405f61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00405f62: ret  */ FN_RET(0x00405e5c); r_esp += 4; return;
}

void f_00405f20(void)
{
    FN_ENTER(0x00405f20);
    goto L_00405f20;
L_00405eb9:; BB(0x00405eb9);
    /* 00405eb9: xor al, 0xe8 */ {  u32 a = (u8)r_eax; u32 b = 0xe8u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00405ebb: aad 0x97 */ UNSUP(0x00405ebb, "aad 0x97");
    /* 00405ebd: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00405ebf: push 0x8f8930 */ { u32 v = 0x8f8930u; r_esp -= 4; W32(r_esp, v); }
    /* 00405ec4: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00405ec7: call 0x40f694 */ r_esp -= 4; W32(r_esp, 0x405eccu); f_0040f694();
    /* 00405ecc: push 0x8f8938 */ { u32 v = 0x8f8938u; r_esp -= 4; W32(r_esp, v); }
    /* 00405ed1: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00405ed4: call 0x40f694 */ r_esp -= 4; W32(r_esp, 0x405ed9u); f_0040f694();
    /* 00405ed9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405edb: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00405edd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00405ede: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x405ee3u); f_004088b8();
    /* 00405ee3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405ee5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00405ee7: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 00405eea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00405eeb: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x405ef0u); f_004088b8();
    /* 00405ef0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00405ef3: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 00405ef6: jmp 0x405f5a */ goto L_00405f5a;
L_00405f20:; BB(0x00405f20);
    /* 00405f20: jo 0x405eb9 */ if (fO) goto L_00405eb9;
L_00405f22:; BB(0x00405f22);
    /* 00405f22: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00405f24: jmp 0x405f5a */ goto L_00405f5a;
L_00405f5a:; BB(0x00405f5a);
    /* 00405f5a: mov dword ptr [edi + 0x24], 0xd */ W32((u32)(r_edi+0x24u), 0xdu);
    /* 00405f61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00405f62: ret  */ FN_RET(0x00405f20); r_esp += 4; return;
}

void f_00405f64(void) /* sub_405F64 */
{
    FN_ENTER(0x00405f64);
    /* 00405f64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405f65: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405f68: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00405f6a: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00405f6d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00405f6f: call 0x4062f8 */ r_esp -= 4; W32(r_esp, 0x405f74u); f_004062f8();
    /* 00405f74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405f76: je 0x406292 */ if (fZ) goto L_00406292;
L_00405f7c:; BB(0x00405f7c);
    /* 00405f7c: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00405f7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405f81: je 0x4061be */ if (fZ) goto L_004061be;
L_00405f87:; BB(0x00405f87);
    /* 00405f87: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405f8a: je 0x406049 */ if (fZ) goto L_00406049;
L_00405f90:; BB(0x00405f90);
    /* 00405f90: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405f93: jne 0x40628b */ if (!fZ) goto L_0040628b;
L_00405f99:; BB(0x00405f99);
    /* 00405f99: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00405f9d: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00405fa1: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00405fa5: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00405fa8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00405faa: mov edx, 4 */ r_edx = 0x4u;
    /* 00405faf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405fb1: mov ebp, eax */ r_ebp = r_eax;
    /* 00405fb3: mov esi, edx */ r_esi = r_edx;
    /* 00405fb5: mov edi, ecx */ r_edi = r_ecx;
L_00405fb7:; BB(0x00405fb7);
    /* 00405fb7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00405fb8: call 0x6c44d0 */ r_esp -= 4; W32(r_esp, 0x405fbdu); f_006c44d0();
    /* 00405fbd: mov ebx, eax */ r_ebx = r_eax;
    /* 00405fbf: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 00405fc1: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x405fc6u); f_007087dc();
    /* 00405fc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405fc7: push 0xa3ab60 */ { u32 v = 0xa3ab60u; r_esp -= 4; W32(r_esp, v); }
    /* 00405fcc: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x405fd1u); f_00857fed();
    /* 00405fd1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405fd4: mov dword ptr [0xa3ab80], edi */ W32((u32)(0xa3ab80u), r_edi);
    /* 00405fda: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405fdc: je 0x40629e */ if (fZ) goto L_0040629e;
L_00405fe2:; BB(0x00405fe2);
    /* 00405fe2: mov eax, 0xa3ab60 */ r_eax = 0xa3ab60u;
L_00405fe7:; BB(0x00405fe7);
    /* 00405fe7: mov dword ptr [0xa3ab84], eax */ W32((u32)(0xa3ab84u), r_eax);
    /* 00405fec: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405fee: je 0x406297 */ if (fZ) goto L_00406297;
L_00405ff4:; BB(0x00405ff4);
    /* 00405ff4: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00405ff7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00405ffa:; BB(0x00405ffa);
    /* 00405ffa: push 0xa3ab80 */ { u32 v = 0xa3ab80u; r_esp -= 4; W32(r_esp, v); }
    /* 00405fff: mov dword ptr [0xa3ab88], ebx */ W32((u32)(0xa3ab88u), r_ebx);
    /* 00406005: mov ebx, dword ptr [ebp + 0x8f8940] */ r_ebx = R32((u32)(r_ebp+0x8f8940u));
    /* 0040600b: mov dword ptr [0xa3ab8c], ebx */ W32((u32)(0xa3ab8cu), r_ebx);
    /* 00406011: mov ebx, dword ptr [ebp + 0x8f8944] */ r_ebx = R32((u32)(r_ebp+0x8f8944u));
    /* 00406017: mov dword ptr [0xa3ab90], ebx */ W32((u32)(0xa3ab90u), r_ebx);
    /* 0040601d: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00406021: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 00406024: call 0x414a24 */ r_esp -= 4; W32(r_esp, 0x406029u); f_00414a24();
    /* 00406029: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040602c: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040602f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00406032: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00406035: jb 0x405fb7 */ if (fC) goto L_00405fb7;
L_00406037:; BB(0x00406037);
    /* 00406037: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00406039: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0040603d: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00406041: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00406044: jmp 0x40628b */ goto L_0040628b;
L_00406049:; BB(0x00406049);
    /* 00406049: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0040604d: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00406051: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00406054: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00406056: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00406058: mov esi, eax */ r_esi = r_eax;
    /* 0040605a: mov edi, edx */ r_edi = r_edx;
L_0040605c:; BB(0x0040605c);
    /* 0040605c: lea ebx, [esi + 0x8f8940] */ r_ebx = (u32)(r_esi+0x8f8940u);
    /* 00406062: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00406066: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00406067: call 0x6c44d0 */ r_esp -= 4; W32(r_esp, 0x40606cu); f_006c44d0();
    /* 0040606c: mov ebx, eax */ r_ebx = r_eax;
    /* 0040606e: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 00406070: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x406075u); f_007087dc();
    /* 00406075: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406076: push 0xa3ab60 */ { u32 v = 0xa3ab60u; r_esp -= 4; W32(r_esp, v); }
    /* 0040607b: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x406080u); f_00857fed();
    /* 00406080: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406083: mov dword ptr [0xa3ab80], edi */ W32((u32)(0xa3ab80u), r_edi);
    /* 00406089: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040608b: je 0x4062ce */ if (fZ) goto L_004062ce;
L_00406091:; BB(0x00406091);
    /* 00406091: mov eax, 0xa3ab60 */ r_eax = 0xa3ab60u;
L_00406096:; BB(0x00406096);
    /* 00406096: mov dword ptr [0xa3ab84], eax */ W32((u32)(0xa3ab84u), r_eax);
    /* 0040609b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040609d: je 0x4062c7 */ if (fZ) goto L_004062c7;
L_004060a3:; BB(0x004060a3);
    /* 004060a3: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 004060a6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004060a9:; BB(0x004060a9);
    /* 004060a9: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 004060ac: push 0xa3ab80 */ { u32 v = 0xa3ab80u; r_esp -= 4; W32(r_esp, v); }
    /* 004060b1: mov dword ptr [0xa3ab88], ebx */ W32((u32)(0xa3ab88u), r_ebx);
    /* 004060b7: mov ebx, dword ptr [esi + 0x8f8940] */ r_ebx = R32((u32)(r_esi+0x8f8940u));
    /* 004060bd: mov dword ptr [0xa3ab8c], ebx */ W32((u32)(0xa3ab8cu), r_ebx);
    /* 004060c3: mov ebx, dword ptr [esi + 0x8f8944] */ r_ebx = R32((u32)(r_esi+0x8f8944u));
    /* 004060c9: mov dword ptr [0xa3ab90], ebx */ W32((u32)(0xa3ab90u), r_ebx);
    /* 004060cf: call 0x414a24 */ r_esp -= 4; W32(r_esp, 0x4060d4u); f_00414a24();
    /* 004060d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004060d5: call 0x6c44d0 */ r_esp -= 4; W32(r_esp, 0x4060dau); f_006c44d0();
    /* 004060da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004060db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004060dd: je 0x4060f4 */ if (fZ) goto L_004060f4;
L_004060df:; BB(0x004060df);
    /* 004060df: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 004060e2: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004060e5: jne 0x4060f4 */ if (!fZ) goto L_004060f4;
L_004060e7:; BB(0x004060e7);
    /* 004060e7: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 004060eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004060ec: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 004060ef: call 0x406624 */ r_esp -= 4; W32(r_esp, 0x4060f4u); f_00406624();
L_004060f4:; BB(0x004060f4);
    /* 004060f4: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004060f7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004060fa: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004060fd: jb 0x40605c */ if (fC) goto L_0040605c;
L_00406103:; BB(0x00406103);
    /* 00406103: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00406107: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0040610b: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0040610e: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00406112: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00406114: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00406118: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0040611c: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0040611f: mov edx, 4 */ r_edx = 0x4u;
    /* 00406124: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00406126: mov ebp, eax */ r_ebp = r_eax;
    /* 00406128: mov esi, edx */ r_esi = r_edx;
    /* 0040612a: mov edi, ecx */ r_edi = r_ecx;
L_0040612c:; BB(0x0040612c);
    /* 0040612c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040612d: call 0x6c44d0 */ r_esp -= 4; W32(r_esp, 0x406132u); f_006c44d0();
    /* 00406132: mov ebx, eax */ r_ebx = r_eax;
    /* 00406134: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 00406136: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x40613bu); f_007087dc();
    /* 0040613b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040613c: push 0xa3ab60 */ { u32 v = 0xa3ab60u; r_esp -= 4; W32(r_esp, v); }
    /* 00406141: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x406146u); f_00857fed();
    /* 00406146: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406149: mov dword ptr [0xa3ab80], edi */ W32((u32)(0xa3ab80u), r_edi);
    /* 0040614f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406151: je 0x4062b6 */ if (fZ) goto L_004062b6;
L_00406157:; BB(0x00406157);
    /* 00406157: mov eax, 0xa3ab60 */ r_eax = 0xa3ab60u;
L_0040615c:; BB(0x0040615c);
    /* 0040615c: mov dword ptr [0xa3ab84], eax */ W32((u32)(0xa3ab84u), r_eax);
    /* 00406161: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406163: je 0x4062af */ if (fZ) goto L_004062af;
L_00406169:; BB(0x00406169);
    /* 00406169: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 0040616c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0040616f:; BB(0x0040616f);
    /* 0040616f: push 0xa3ab80 */ { u32 v = 0xa3ab80u; r_esp -= 4; W32(r_esp, v); }
    /* 00406174: mov dword ptr [0xa3ab88], ebx */ W32((u32)(0xa3ab88u), r_ebx);
    /* 0040617a: mov ebx, dword ptr [ebp + 0x8f8928] */ r_ebx = R32((u32)(r_ebp+0x8f8928u));
    /* 00406180: mov dword ptr [0xa3ab8c], ebx */ W32((u32)(0xa3ab8cu), r_ebx);
    /* 00406186: mov ebx, dword ptr [ebp + 0x8f892c] */ r_ebx = R32((u32)(r_ebp+0x8f892cu));
    /* 0040618c: mov dword ptr [0xa3ab90], ebx */ W32((u32)(0xa3ab90u), r_ebx);
    /* 00406192: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00406196: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 00406199: call 0x414a24 */ r_esp -= 4; W32(r_esp, 0x40619eu); f_00414a24();
    /* 0040619e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004061a1: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004061a4: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004061a7: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004061aa: jb 0x40612c */ if (fC) goto L_0040612c;
L_004061ac:; BB(0x004061ac);
    /* 004061ac: mov ebp, ebx */ r_ebp = r_ebx;
    /* 004061ae: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 004061b2: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 004061b6: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 004061b9: jmp 0x40628b */ goto L_0040628b;
L_004061be:; BB(0x004061be);
    /* 004061be: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 004061c2: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 004061c6: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 004061ca: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004061cd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004061cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004061d1: mov ebp, eax */ r_ebp = r_eax;
    /* 004061d3: mov esi, edx */ r_esi = r_edx;
L_004061d5:; BB(0x004061d5);
    /* 004061d5: lea edi, [ebp + 0x8f8908] */ r_edi = (u32)(r_ebp+0x8f8908u);
    /* 004061db: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004061dc: call 0x6c44d0 */ r_esp -= 4; W32(r_esp, 0x4061e1u); f_006c44d0();
    /* 004061e1: mov ebx, eax */ r_ebx = r_eax;
    /* 004061e3: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 004061e5: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x4061eau); f_007087dc();
    /* 004061ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004061eb: push 0xa3ab60 */ { u32 v = 0xa3ab60u; r_esp -= 4; W32(r_esp, v); }
    /* 004061f0: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x4061f5u); f_00857fed();
    /* 004061f5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004061f8: mov dword ptr [0xa3ab80], esi */ W32((u32)(0xa3ab80u), r_esi);
    /* 004061fe: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406200: je 0x4062e6 */ if (fZ) goto L_004062e6;
L_00406206:; BB(0x00406206);
    /* 00406206: mov eax, 0xa3ab60 */ r_eax = 0xa3ab60u;
L_0040620b:; BB(0x0040620b);
    /* 0040620b: mov dword ptr [0xa3ab84], eax */ W32((u32)(0xa3ab84u), r_eax);
    /* 00406210: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406212: je 0x4062df */ if (fZ) goto L_004062df;
L_00406218:; BB(0x00406218);
    /* 00406218: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0040621b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0040621e:; BB(0x0040621e);
    /* 0040621e: mov ebx, dword ptr [ebp + 0x8f8908] */ r_ebx = R32((u32)(r_ebp+0x8f8908u));
    /* 00406224: push 0xa3ab80 */ { u32 v = 0xa3ab80u; r_esp -= 4; W32(r_esp, v); }
    /* 00406229: mov dword ptr [0xa3ab88], ecx */ W32((u32)(0xa3ab88u), r_ecx);
    /* 0040622f: mov ecx, dword ptr [ebp + 0x8f890c] */ r_ecx = R32((u32)(r_ebp+0x8f890cu));
    /* 00406235: mov dword ptr [0xa3ab8c], ebx */ W32((u32)(0xa3ab8cu), r_ebx);
    /* 0040623b: mov dword ptr [0xa3ab90], ecx */ W32((u32)(0xa3ab90u), r_ecx);
    /* 00406241: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00406245: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 00406248: call 0x414a24 */ r_esp -= 4; W32(r_esp, 0x40624du); f_00414a24();
    /* 0040624d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040624e: call 0x6c44d0 */ r_esp -= 4; W32(r_esp, 0x406253u); f_006c44d0();
    /* 00406253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00406254: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406256: je 0x40626d */ if (fZ) goto L_0040626d;
L_00406258:; BB(0x00406258);
    /* 00406258: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0040625b: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040625e: jne 0x40626d */ if (!fZ) goto L_0040626d;
L_00406260:; BB(0x00406260);
    /* 00406260: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00406261: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00406265: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 00406268: call 0x406624 */ r_esp -= 4; W32(r_esp, 0x40626du); f_00406624();
L_0040626d:; BB(0x0040626d);
    /* 0040626d: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00406270: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00406273: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00406276: jb 0x4061d5 */ if (fC) goto L_004061d5;
L_0040627c:; BB(0x0040627c);
    /* 0040627c: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00406280: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00406284: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00406288: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0040628b:; BB(0x0040628b);
    /* 0040628b: mov dword ptr [ebp + 0x24], 0xe */ W32((u32)(r_ebp+0x24u), 0xeu);
L_00406292:; BB(0x00406292);
    /* 00406292: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00406295: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406296: ret  */ FN_RET(0x00405f64); r_esp += 4; return;
L_00406297:; BB(0x00406297);
    /* 00406297: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00406299: jmp 0x405ffa */ goto L_00405ffa;
L_0040629e:; BB(0x0040629e);
    /* 0040629e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004062a0: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004062a2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4062a7u); f_00792fe8();
    /* 004062a7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004062aa: jmp 0x405fe7 */ goto L_00405fe7;
L_004062af:; BB(0x004062af);
    /* 004062af: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004062b1: jmp 0x40616f */ goto L_0040616f;
L_004062b6:; BB(0x004062b6);
    /* 004062b6: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004062b8: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004062ba: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4062bfu); f_00792fe8();
    /* 004062bf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004062c2: jmp 0x40615c */ goto L_0040615c;
L_004062c7:; BB(0x004062c7);
    /* 004062c7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004062c9: jmp 0x4060a9 */ goto L_004060a9;
L_004062ce:; BB(0x004062ce);
    /* 004062ce: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004062d0: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004062d2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4062d7u); f_00792fe8();
    /* 004062d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004062da: jmp 0x406096 */ goto L_00406096;
L_004062df:; BB(0x004062df);
    /* 004062df: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004062e1: jmp 0x40621e */ goto L_0040621e;
L_004062e6:; BB(0x004062e6);
    /* 004062e6: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004062e8: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004062ea: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4062efu); f_00792fe8();
    /* 004062ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004062f2: jmp 0x40620b */ goto L_0040620b;
}

