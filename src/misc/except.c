#include "protos.h"

void f_0085b6a4(void) /* __except_handler3 */
{
    FN_ENTER(0x0085b6a4);
    /* 0085b6a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085b6a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0085b6a7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085b6aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b6ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b6ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b6ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085b6ae: cld  */ rt_df = 0;
    /* 0085b6af: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0085b6b2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085b6b5: test dword ptr [eax + 4], 6 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x6u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b6bc: jne 0x85b76d */ if (!fZ) goto L_0085b76d;
L_0085b6c2:; BB(0x0085b6c2);
    /* 0085b6c2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0085b6c5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0085b6c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0085b6cb: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0085b6ce: mov dword ptr [ebx - 4], eax */ W32((u32)(r_ebx+0xfffffffcu), r_eax);
    /* 0085b6d1: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 0085b6d4: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0085b6d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b6d8: call 0x8654f2 */ r_esp -= 4; W32(r_esp, 0x85b6ddu); f_008654f2();
    /* 0085b6dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b6e0: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085b6e2: je 0x85b75f */ if (fZ) goto L_0085b75f;
L_0085b6e4:; BB(0x0085b6e4);
    /* 0085b6e4: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085b6e7: je 0x85b766 */ if (fZ) goto L_0085b766;
L_0085b6e9:; BB(0x0085b6e9);
    /* 0085b6e9: lea ecx, [esi + esi*2] */ r_ecx = (u32)(r_esi+r_esi*2);
    /* 0085b6ec: mov eax, dword ptr [edi + ecx*4 + 4] */ r_eax = R32((u32)(r_edi+r_ecx*4+0x4u));
    /* 0085b6f0: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085b6f2: je 0x85b74d */ if (fZ) goto L_0085b74d;
L_0085b6f4:; BB(0x0085b6f4);
    /* 0085b6f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b6f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085b6f6: lea ebp, [ebx + 0x10] */ r_ebp = (u32)(r_ebx+0x10u);
    /* 0085b6f9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085b6fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0085b6fd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0085b6ff: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0085b701: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085b703: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x85b705u); call_ind(t); }
    /* 0085b705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085b706: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085b707: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0085b70a: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b70c: je 0x85b74d */ if (fZ) goto L_0085b74d;
L_0085b70e:; BB(0x0085b70e);
    /* 0085b70e: js 0x85b758 */ if (fS) goto L_0085b758;
L_0085b710:; BB(0x0085b710);
    /* 0085b710: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0085b713: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b714: call 0x8578cc */ r_esp -= 4; W32(r_esp, 0x85b719u); f_008578cc();
    /* 0085b719: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b71c: lea ebp, [ebx + 0x10] */ r_ebp = (u32)(r_ebx+0x10u);
    /* 0085b71f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b720: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b721: call 0x85790e */ r_esp -= 4; W32(r_esp, 0x85b726u); f_0085790e();
    /* 0085b726: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b729: lea ecx, [esi + esi*2] */ r_ecx = (u32)(r_esi+r_esi*2);
    /* 0085b72c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b72e: mov eax, dword ptr [edi + ecx*4 + 8] */ r_eax = R32((u32)(r_edi+r_ecx*4+0x8u));
    /* 0085b732: call 0x8579a2 */ r_esp -= 4; W32(r_esp, 0x85b737u); f_008579a2();
    /* 0085b737: mov eax, dword ptr [edi + ecx*4] */ r_eax = R32((u32)(r_edi+r_ecx*4));
    /* 0085b73a: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 0085b73d: mov eax, dword ptr [edi + ecx*4 + 8] */ r_eax = R32((u32)(r_edi+r_ecx*4+0x8u));
    /* 0085b741: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085b743: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0085b745: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0085b747: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0085b749: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085b74b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x85b74du); call_ind(t); }
L_0085b74d:; BB(0x0085b74d);
    /* 0085b74d: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0085b750: lea ecx, [esi + esi*2] */ r_ecx = (u32)(r_esi+r_esi*2);
    /* 0085b753: mov esi, dword ptr [edi + ecx*4] */ r_esi = R32((u32)(r_edi+r_ecx*4));
    /* 0085b756: jmp 0x85b6e4 */ goto L_0085b6e4;
L_0085b758:; BB(0x0085b758);
    /* 0085b758: mov eax, 0 */ r_eax = 0x0u;
    /* 0085b75d: jmp 0x85b782 */ goto L_0085b782;
L_0085b75f:; BB(0x0085b75f);
    /* 0085b75f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085b762: or dword ptr [eax + 4], 8 */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0085b766:; BB(0x0085b766);
    /* 0085b766: mov eax, 1 */ r_eax = 0x1u;
    /* 0085b76b: jmp 0x85b782 */ goto L_0085b782;
L_0085b76d:; BB(0x0085b76d);
    /* 0085b76d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085b76e: lea ebp, [ebx + 0x10] */ r_ebp = (u32)(r_ebx+0x10u);
    /* 0085b771: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0085b773: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b774: call 0x85790e */ r_esp -= 4; W32(r_esp, 0x85b779u); f_0085790e();
    /* 0085b779: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085b77c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085b77d: mov eax, 1 */ r_eax = 0x1u;
L_0085b782:; BB(0x0085b782);
    /* 0085b782: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085b783: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085b784: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085b785: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085b786: mov esp, ebp */ r_esp = r_ebp;
    /* 0085b788: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085b789: ret  */ FN_RET(0x0085b6a4); r_esp += 4; return;
}

