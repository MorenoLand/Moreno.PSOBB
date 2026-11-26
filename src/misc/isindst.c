#include "protos.h"

void f_008642a1(void) /* __isindst_lk */
{
    FN_ENTER(0x008642a1);
    /* 008642a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008642a2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008642a4: cmp dword ptr [0xa24074], esi */ {  u32 a = R32((u32)(0xa24074u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008642aa: jne 0x8642b0 */ if (!fZ) goto L_008642b0;
L_008642ac:; BB(0x008642ac);
    /* 008642ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008642ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008642af: ret  */ FN_RET(0x008642a1); r_esp += 4; return;
L_008642b0:; BB(0x008642b0);
    /* 008642b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008642b1: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008642b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008642b4: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 008642b7: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008642b8: cmp edi, dword ptr [0xa24108] */ {  u32 a = r_edi; u32 b = R32((u32)(0xa24108u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008642be: jne 0x8642cc */ if (!fZ) goto L_008642cc;
L_008642c0:; BB(0x008642c0);
    /* 008642c0: cmp edi, dword ptr [0xa24114] */ {  u32 a = r_edi; u32 b = R32((u32)(0xa24114u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008642c6: je 0x8643b8 */ if (fZ) goto L_008643b8;
L_008642cc:; BB(0x008642cc);
    /* 008642cc: cmp dword ptr [0xae7ce4], esi */ {  u32 a = R32((u32)(0xae7ce4u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008642d2: je 0x86438c */ if (fZ) goto L_0086438c;
L_008642d8:; BB(0x008642d8);
    /* 008642d8: cmp word ptr [0xae7cd0], si */ {  u32 a = R16((u32)(0xae7cd0u)); u32 b = (u16)r_esi; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008642df: movzx eax, word ptr [0xae7cde] */ r_eax = (u32)R16((u32)(0xae7cdeu));
    /* 008642e6: movzx ecx, word ptr [0xae7cd8] */ r_ecx = (u32)R16((u32)(0xae7cd8u));
    /* 008642ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008642ee: movzx eax, word ptr [0xae7cdc] */ r_eax = (u32)R16((u32)(0xae7cdcu));
    /* 008642f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008642f6: movzx eax, word ptr [0xae7cda] */ r_eax = (u32)R16((u32)(0xae7cdau));
    /* 008642fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008642fe: jne 0x864315 */ if (!fZ) goto L_00864315;
L_00864300:; BB(0x00864300);
    /* 00864300: movzx eax, word ptr [0xae7cd4] */ r_eax = (u32)R16((u32)(0xae7cd4u));
    /* 00864307: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864309: movzx eax, word ptr [0xae7cd6] */ r_eax = (u32)R16((u32)(0xae7cd6u));
    /* 00864310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864311: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00864312: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00864313: jmp 0x864321 */ goto L_00864321;
L_00864315:; BB(0x00864315);
    /* 00864315: movzx eax, word ptr [0xae7cd6] */ r_eax = (u32)R16((u32)(0xae7cd6u));
    /* 0086431c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086431d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086431e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086431f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00864320: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
L_00864321:; BB(0x00864321);
    /* 00864321: movzx eax, word ptr [0xae7cd2] */ r_eax = (u32)R16((u32)(0xae7cd2u));
    /* 00864328: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00864329: call 0x8640e9 */ r_esp -= 4; W32(r_esp, 0x86432eu); f_008640e9();
    /* 0086432e: movzx eax, word ptr [0xae7c8a] */ r_eax = (u32)R16((u32)(0xae7c8au));
    /* 00864335: movzx ecx, word ptr [0xae7c84] */ r_ecx = (u32)R16((u32)(0xae7c84u));
    /* 0086433c: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086433f: cmp word ptr [0xae7c7c], si */ {  u32 a = R16((u32)(0xae7c7cu)); u32 b = (u16)r_esi; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00864346: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864347: movzx eax, word ptr [0xae7c88] */ r_eax = (u32)R16((u32)(0xae7c88u));
    /* 0086434e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086434f: movzx eax, word ptr [0xae7c86] */ r_eax = (u32)R16((u32)(0xae7c86u));
    /* 00864356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864357: jne 0x86437e */ if (!fZ) goto L_0086437e;
L_00864359:; BB(0x00864359);
    /* 00864359: movzx eax, word ptr [0xae7c80] */ r_eax = (u32)R16((u32)(0xae7c80u));
    /* 00864360: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864361: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864362: movzx eax, word ptr [0xae7c82] */ r_eax = (u32)R16((u32)(0xae7c82u));
    /* 00864369: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086436a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086436b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
L_0086436c:; BB(0x0086436c);
    /* 0086436c: movzx eax, word ptr [0xae7c7e] */ r_eax = (u32)R16((u32)(0xae7c7eu));
    /* 00864373: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864374: call 0x8640e9 */ r_esp -= 4; W32(r_esp, 0x864379u); f_008640e9();
    /* 00864379: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086437c: jmp 0x8643b8 */ goto L_008643b8;
L_0086437e:; BB(0x0086437e);
    /* 0086437e: movzx eax, word ptr [0xae7c82] */ r_eax = (u32)R16((u32)(0xae7c82u));
    /* 00864385: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864386: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864387: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864388: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00864389: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086438a: jmp 0x86436c */ goto L_0086436c;
L_0086438c:; BB(0x0086438c);
    /* 0086438c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086438d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086438e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086438f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864390: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864391: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00864392: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00864393: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00864394: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00864395: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00864397: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864398: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0086439a: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0086439b: call 0x8640e9 */ r_esp -= 4; W32(r_esp, 0x8643a0u); f_008640e9();
    /* 008643a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008643a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008643a2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008643a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008643a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008643a5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008643a7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008643a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008643a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008643aa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008643ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008643ad: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 008643af: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008643b0: call 0x8640e9 */ r_esp -= 4; W32(r_esp, 0x8643b5u); f_008640e9();
    /* 008643b5: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008643b8:; BB(0x008643b8);
    /* 008643b8: mov edx, dword ptr [0xa2410c] */ r_edx = R32((u32)(0xa2410cu));
    /* 008643be: mov eax, dword ptr [0xa24118] */ r_eax = R32((u32)(0xa24118u));
    /* 008643c3: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008643c5: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 008643c8: jge 0x8643e4 */ if ((fS==fO)) goto L_008643e4;
L_008643ca:; BB(0x008643ca);
    /* 008643ca: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008643cc: jl 0x8643e0 */ if ((fS!=fO)) goto L_008643e0;
L_008643ce:; BB(0x008643ce);
    /* 008643ce: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008643d0: jg 0x8643e0 */ if ((!fZ&&fS==fO)) goto L_008643e0;
L_008643d2:; BB(0x008643d2);
    /* 008643d2: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008643d4: jle 0x8643f4 */ if ((fZ||fS!=fO)) goto L_008643f4;
L_008643d6:; BB(0x008643d6);
    /* 008643d6: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008643d8: jge 0x8643f4 */ if ((fS==fO)) goto L_008643f4;
L_008643da:; BB(0x008643da);
    /* 008643da: mov eax, ebp */ r_eax = r_ebp;
L_008643dc:; BB(0x008643dc);
    /* 008643dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008643dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008643de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008643df: ret  */ FN_RET(0x008642a1); r_esp += 4; return;
L_008643e0:; BB(0x008643e0);
    /* 008643e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008643e2: jmp 0x8643dc */ goto L_008643dc;
L_008643e4:; BB(0x008643e4);
    /* 008643e4: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008643e6: jl 0x8643da */ if ((fS!=fO)) goto L_008643da;
L_008643e8:; BB(0x008643e8);
    /* 008643e8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008643ea: jg 0x8643da */ if ((!fZ&&fS==fO)) goto L_008643da;
L_008643ec:; BB(0x008643ec);
    /* 008643ec: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008643ee: jle 0x8643f4 */ if ((fZ||fS!=fO)) goto L_008643f4;
L_008643f0:; BB(0x008643f0);
    /* 008643f0: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008643f2: jl 0x8643e0 */ if ((fS!=fO)) goto L_008643e0;
L_008643f4:; BB(0x008643f4);
    /* 008643f4: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008643f7: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008643fa: add eax, dword ptr [ebx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008643fd: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00864400: add eax, dword ptr [ebx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00864402: imul eax, eax, 0x3e8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3e8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00864408: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086440a: jne 0x86441b */ if (!fZ) goto L_0086441b;
L_0086440c:; BB(0x0086440c);
    /* 0086440c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0086440e: cmp eax, dword ptr [0xa24110] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa24110u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00864414: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
L_00864417:; BB(0x00864417);
    /* 00864417: mov eax, ecx */ r_eax = r_ecx;
    /* 00864419: jmp 0x8643dc */ goto L_008643dc;
L_0086441b:; BB(0x0086441b);
    /* 0086441b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0086441d: cmp eax, dword ptr [0xa2411c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa2411cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00864423: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00864426: jmp 0x864417 */ goto L_00864417;
}

