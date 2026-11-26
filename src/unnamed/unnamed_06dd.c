#include "protos.h"

void f_006dd010(void) /* sub_6DD010 */
{
    FN_ENTER(0x006dd010);
    /* 006dd010: movsx eax, word ptr [ecx + 0xa6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xa6u));
    /* 006dd017: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dd019: jl 0x6dd087 */ if ((fS!=fO)) goto L_006dd087;
L_006dd01b:; BB(0x006dd01b);
    /* 006dd01b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dd01e: jle 0x6dd05e */ if ((fZ||fS!=fO)) goto L_006dd05e;
L_006dd020:; BB(0x006dd020);
    /* 006dd020: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dd023: jl 0x6dd087 */ if ((fS!=fO)) goto L_006dd087;
L_006dd025:; BB(0x006dd025);
    /* 006dd025: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dd028: jle 0x6dd088 */ if ((fZ||fS!=fO)) goto L_006dd088;
L_006dd02a:; BB(0x006dd02a);
    /* 006dd02a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dd02d: jl 0x6dd087 */ if ((fS!=fO)) goto L_006dd087;
L_006dd02f:; BB(0x006dd02f);
    /* 006dd02f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dd032: jg 0x6dd087 */ if ((!fZ&&fS==fO)) goto L_006dd087;
L_006dd034:; BB(0x006dd034);
    /* 006dd034: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006dd037: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006dd039: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd03a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd03b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd03c: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd041: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6dd046u); f_00814298();
    /* 006dd046: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dd049: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dd04b: jl 0x6dd087 */ if ((fS!=fO)) goto L_006dd087;
L_006dd04d:; BB(0x006dd04d);
    /* 006dd04d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd04f: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd054: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd055: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6dd05au); f_00814664();
    /* 006dd05a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006dd05d: ret  */ FN_RET(0x006dd010); r_esp += 4; return;
L_006dd05e:; BB(0x006dd05e);
    /* 006dd05e: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006dd061: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006dd063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd064: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd065: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd066: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd06b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6dd070u); f_00814298();
    /* 006dd070: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dd073: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dd075: jl 0x6dd087 */ if ((fS!=fO)) goto L_006dd087;
L_006dd077:; BB(0x006dd077);
    /* 006dd077: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd079: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd07e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd07f: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6dd084u); f_00814664();
    /* 006dd084: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006dd087:; BB(0x006dd087);
    /* 006dd087: ret  */ FN_RET(0x006dd010); r_esp += 4; return;
L_006dd088:; BB(0x006dd088);
    /* 006dd088: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006dd08b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006dd08d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd08e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd08f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd090: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd095: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6dd09au); f_00814298();
    /* 006dd09a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006dd09d: ret  */ FN_RET(0x006dd010); r_esp += 4; return;
}

void f_006dd0a0(void) /* sub_6DD0A0 */
{
    FN_ENTER(0x006dd0a0);
    /* 006dd0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dd0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006dd0a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dd0a5: push 0x8ee518 */ { u32 v = 0x8ee518u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd0aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006dd0b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd0b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006dd0b8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dd0bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006dd0be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006dd0c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006dd0c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006dd0c7: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd0cc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006dd0d3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6dd0d8u); f_005caba4();
    /* 006dd0d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dd0d9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006dd0dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dd0de: je 0x6dd109 */ if (fZ) goto L_006dd109;
L_006dd0e0:; BB(0x006dd0e0);
    /* 006dd0e0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006dd0e7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006dd0ee: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd0f1: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd0f4: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd0f7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dd0fa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd0fd: call 0x6dd118 */ r_esp -= 4; W32(r_esp, 0x6dd102u); f_006dd118();
    /* 006dd102: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006dd109:; BB(0x006dd109);
    /* 006dd109: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dd10c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dd113: mov esp, ebp */ r_esp = r_ebp;
    /* 006dd115: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dd116: ret  */ FN_RET(0x006dd0a0); r_esp += 4; return;
}

void f_006dd118(void) /* sub_6DD118 */
{
    FN_ENTER(0x006dd118);
    /* 006dd118: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dd119: mov ebp, esp */ r_ebp = r_esp;
    /* 006dd11b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dd11d: push 0x8ee534 */ { u32 v = 0x8ee534u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd122: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006dd128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd129: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006dd130: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dd133: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006dd136: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006dd139: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006dd13c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006dd13f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006dd142: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd145: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd148: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd14b: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006dd14e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006dd151: call 0x6ebd58 */ r_esp -= 4; W32(r_esp, 0x6dd156u); f_006ebd58();
    /* 006dd156: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006dd15d: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006dd160: mov dword ptr [edi], 0xb3cd30 */ W32((u32)(r_edi), 0xb3cd30u);
    /* 006dd166: lea ebx, [edi + 0xe4] */ r_ebx = (u32)(r_edi+0xe4u);
    /* 006dd16c: mov esi, 0xb */ r_esi = 0xbu;
    /* 006dd171: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006dd173:; BB(0x006dd173);
    /* 006dd173: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006dd178: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 006dd17b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006dd17d: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 006dd181: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 006dd184: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006dd187: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006dd18a: jne 0x6dd173 */ if (!fZ) goto L_006dd173;
L_006dd18c:; BB(0x006dd18c);
    /* 006dd18c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dd18f: mov dword ptr [edi + 0xe0], 0 */ W32((u32)(r_edi+0xe0u), 0x0u);
    /* 006dd199: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006dd19c: mov ecx, dword ptr [0x9cf2a0] */ r_ecx = R32((u32)(0x9cf2a0u));
    /* 006dd1a2: mov dword ptr [edx + 0x13c], 1 */ W32((u32)(r_edx+0x13cu), 0x1u);
    /* 006dd1ac: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006dd1af: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 006dd1b1: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 006dd1b4: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 006dd1b7: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006dd1ba: add edx, 0xe0 */ {  u32 a = r_edx; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dd1c0: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 006dd1c2: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 006dd1c5: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 006dd1c8: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006dd1cb: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006dd1ce: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006dd1d1: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006dd1d4: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006dd1d7: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006dd1da: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006dd1dd: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006dd1e0: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006dd1e3: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006dd1e6: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006dd1e9: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006dd1ec: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 006dd1ef: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006dd1f2: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 006dd1f5: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006dd1f8: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 006dd1fb: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006dd1fe: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 006dd201: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006dd204: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 006dd207: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006dd20a: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006dd20d: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006dd210: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006dd213: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006dd216: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 006dd219: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006dd21c: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006dd21f: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006dd222: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006dd225: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006dd228: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 006dd22b: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006dd22e: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 006dd231: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006dd234: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 006dd237: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 006dd23a: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 006dd23d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006dd240: mov edx, dword ptr [0x9cf680] */ r_edx = R32((u32)(0x9cf680u));
    /* 006dd246: mov dword ptr [eax + 0x74], edx */ W32((u32)(r_eax+0x74u), r_edx);
    /* 006dd249: mov ecx, dword ptr [0x9cf684] */ r_ecx = R32((u32)(0x9cf684u));
    /* 006dd24f: mov dword ptr [eax + 0x78], ecx */ W32((u32)(r_eax+0x78u), r_ecx);
    /* 006dd252: mov ebx, dword ptr [0x9cf688] */ r_ebx = R32((u32)(0x9cf688u));
    /* 006dd258: mov dword ptr [eax + 0x7c], ebx */ W32((u32)(r_eax+0x7cu), r_ebx);
    /* 006dd25b: mov esi, dword ptr [0x9cf68c] */ r_esi = R32((u32)(0x9cf68cu));
    /* 006dd261: mov dword ptr [eax + 0x80], esi */ W32((u32)(r_eax+0x80u), r_esi);
    /* 006dd267: mov edi, dword ptr [0x9cf690] */ r_edi = R32((u32)(0x9cf690u));
    /* 006dd26d: mov dword ptr [eax + 0x84], edi */ W32((u32)(r_eax+0x84u), r_edi);
    /* 006dd273: mov edx, dword ptr [0x9cf694] */ r_edx = R32((u32)(0x9cf694u));
    /* 006dd279: mov dword ptr [eax + 0x88], edx */ W32((u32)(r_eax+0x88u), r_edx);
    /* 006dd27f: mov edx, dword ptr [0x9cf698] */ r_edx = R32((u32)(0x9cf698u));
    /* 006dd285: mov dword ptr [eax + 0x8c], edx */ W32((u32)(r_eax+0x8cu), r_edx);
    /* 006dd28b: mov edx, dword ptr [0x9cf69c] */ r_edx = R32((u32)(0x9cf69cu));
    /* 006dd291: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 006dd297: mov edx, dword ptr [0x9cf6a0] */ r_edx = R32((u32)(0x9cf6a0u));
    /* 006dd29d: mov dword ptr [eax + 0x94], edx */ W32((u32)(r_eax+0x94u), r_edx);
    /* 006dd2a3: mov edx, dword ptr [0x9cf6a4] */ r_edx = R32((u32)(0x9cf6a4u));
    /* 006dd2a9: mov dword ptr [eax + 0x98], edx */ W32((u32)(r_eax+0x98u), r_edx);
    /* 006dd2af: mov edx, dword ptr [0x9cf6a8] */ r_edx = R32((u32)(0x9cf6a8u));
    /* 006dd2b5: mov dword ptr [eax + 0x9c], edx */ W32((u32)(r_eax+0x9cu), r_edx);
    /* 006dd2bb: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 006dd2c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd2c3: je 0x6dd2da */ if (fZ) goto L_006dd2da;
L_006dd2c5:; BB(0x006dd2c5);
    /* 006dd2c5: fld dword ptr [0x96c918] */ FPUSH(R_F32((u32)(0x96c918u)));
    /* 006dd2cb: fadd dword ptr [eax + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x7cu));
    /* 006dd2ce: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 006dd2d4: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 006dd2d7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_006dd2da:; BB(0x006dd2da);
    /* 006dd2da: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006dd2dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd2df: je 0x6dd2ec */ if (fZ) goto L_006dd2ec;
L_006dd2e1:; BB(0x006dd2e1);
    /* 006dd2e1: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006dd2e5: mov word ptr [eax + 0xa8], dx */ W16((u32)(r_eax+0xa8u), (u16)r_edx);
L_006dd2ec:; BB(0x006dd2ec);
    /* 006dd2ec: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 006dd2f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dd2f4: je 0x6dd308 */ if (fZ) goto L_006dd308;
L_006dd2f6:; BB(0x006dd2f6);
    /* 006dd2f6: mov ecx, eax */ r_ecx = r_eax;
    /* 006dd2f8: call 0x6dd010 */ r_esp -= 4; W32(r_esp, 0x6dd2fdu); f_006dd010();
    /* 006dd2fd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006dd300: call 0x6ec06c */ r_esp -= 4; W32(r_esp, 0x6dd305u); f_006ec06c();
    /* 006dd305: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_006dd308:; BB(0x006dd308);
    /* 006dd308: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dd30b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006dd30e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006dd311: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dd314: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dd31b: mov esp, ebp */ r_esp = r_ebp;
    /* 006dd31d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dd31e: ret 0x10 */ FN_RET(0x006dd118); r_esp += 20; return;
}

void f_006dd324(void) /* sub_6DD324 */
{
    FN_ENTER(0x006dd324);
    /* 006dd324: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd325: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dd328: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006dd32a: movzx eax, word ptr [ebx + 0xa8] */ r_eax = (u32)R16((u32)(r_ebx+0xa8u));
    /* 006dd331: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd332: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6dd337u); f_007b4d18();
    /* 006dd337: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dd338: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 006dd33b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd33d: je 0x6dd3fd */ if (fZ) goto L_006dd3fd;
L_006dd343:; BB(0x006dd343);
    /* 006dd343: mov edx, dword ptr [ebx + 0x13c] */ r_edx = R32((u32)(r_ebx+0x13cu));
    /* 006dd349: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd34b: je 0x6dd3cf */ if (fZ) goto L_006dd3cf;
L_006dd351:; BB(0x006dd351);
    /* 006dd351: movsx edx, word ptr [ebx + 0xa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xa4u));
    /* 006dd358: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd35a: jne 0x6dd369 */ if (!fZ) goto L_006dd369;
L_006dd35c:; BB(0x006dd35c);
    /* 006dd35c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd35d: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006dd35f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006dd361: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x6dd364u); call_ind(t); }
    /* 006dd364: jmp 0x6dd3eb */ goto L_006dd3eb;
L_006dd369:; BB(0x006dd369);
    /* 006dd369: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd36a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006dd36c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006dd36e: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x6dd371u); call_ind(t); }
    /* 006dd371: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 006dd377: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006dd379: je 0x6dd3eb */ if (fZ) goto L_006dd3eb;
L_006dd37b:; BB(0x006dd37b);
    /* 006dd37b: mov eax, 0 */ r_eax = 0x0u;
    /* 006dd380: jle 0x6dd3eb */ if ((fZ||fS!=fO)) goto L_006dd3eb;
L_006dd382:; BB(0x006dd382);
    /* 006dd382: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006dd386: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006dd389: mov edi, eax */ r_edi = r_eax;
L_006dd38b:; BB(0x006dd38b);
    /* 006dd38b: movzx edx, word ptr [ebx + edi*8 + 0xe4] */ r_edx = (u32)R16((u32)(r_ebx+r_edi*8+0xe4u));
    /* 006dd393: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd394: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6dd399u); f_007b4d18();
    /* 006dd399: mov esi, eax */ r_esi = r_eax;
    /* 006dd39b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dd39c: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6dd3a1u); f_006ea700();
    /* 006dd3a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dd3a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd3a6: je 0x6dd3bb */ if (fZ) goto L_006dd3bb;
L_006dd3a8:; BB(0x006dd3a8);
    /* 006dd3a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dd3a9: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6dd3aeu); f_006ea71c();
    /* 006dd3ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dd3af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd3b1: je 0x6dd3bb */ if (fZ) goto L_006dd3bb;
L_006dd3b3:; BB(0x006dd3b3);
    /* 006dd3b3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dd3b4: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006dd3b6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006dd3b8: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x6dd3bbu); call_ind(t); }
L_006dd3bb:; BB(0x006dd3bb);
    /* 006dd3bb: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006dd3be: cmp edi, dword ptr [ebx + 0xe0] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0xe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dd3c4: jl 0x6dd38b */ if ((fS!=fO)) goto L_006dd38b;
L_006dd3c6:; BB(0x006dd3c6);
    /* 006dd3c6: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006dd3ca: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006dd3cd: jmp 0x6dd3eb */ goto L_006dd3eb;
L_006dd3cf:; BB(0x006dd3cf);
    /* 006dd3cf: movsx edx, word ptr [ebx + 0xa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xa4u));
    /* 006dd3d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd3d8: jne 0x6dd3e4 */ if (!fZ) goto L_006dd3e4;
L_006dd3da:; BB(0x006dd3da);
    /* 006dd3da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd3db: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006dd3dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006dd3df: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x6dd3e2u); call_ind(t); }
    /* 006dd3e2: jmp 0x6dd3eb */ goto L_006dd3eb;
L_006dd3e4:; BB(0x006dd3e4);
    /* 006dd3e4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006dd3e6: call 0x6ebfdc */ r_esp -= 4; W32(r_esp, 0x6dd3ebu); f_006ebfdc();
L_006dd3eb:; BB(0x006dd3eb);
    /* 006dd3eb: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006dd3ef: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006dd3f4: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006dd3f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006dd3fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dd3fc: ret  */ FN_RET(0x006dd324); r_esp += 4; return;
L_006dd3fd:; BB(0x006dd3fd);
    /* 006dd3fd: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006dd401: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006dd406: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006dd40a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006dd40d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dd40e: ret  */ FN_RET(0x006dd324); r_esp += 4; return;
}

void f_006dd410(void) /* sub_6DD410 */
{
    FN_ENTER(0x006dd410);
    /* 006dd410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dd411: mov ebp, esp */ r_ebp = r_esp;
    /* 006dd413: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dd415: push 0x8ee586 */ { u32 v = 0x8ee586u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd41a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006dd420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd421: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006dd428: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dd42b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006dd42e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006dd431: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006dd434: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006dd437: mov eax, dword ptr [ecx + 0x74] */ r_eax = R32((u32)(r_ecx+0x74u));
    /* 006dd43a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006dd43d: movsx edx, word ptr [edx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x32cu));
    /* 006dd444: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006dd447: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006dd44a: jne 0x6dd45c */ if (!fZ) goto L_006dd45c;
L_006dd44c:; BB(0x006dd44c);
    /* 006dd44c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dd44f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dd456: mov esp, ebp */ r_esp = r_ebp;
    /* 006dd458: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dd459: ret 4 */ FN_RET(0x006dd410); r_esp += 8; return;
L_006dd45c:; BB(0x006dd45c);
    /* 006dd45c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006dd45f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006dd462: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 006dd464: movsx edx, word ptr [ebx + 0xa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xa4u));
    /* 006dd46b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006dd46e: mov dword ptr [ebp - 0x40], 7 */ W32((u32)(r_ebp+0xffffffc0u), 0x7u);
    /* 006dd475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd476: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd478: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd47a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd47b: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd47d: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd480: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x6dd483u); call_ind(t); }
    /* 006dd483: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006dd485: mov eax, ebx */ r_eax = r_ebx;
    /* 006dd487: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006dd48a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd48c: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006dd48f: movzx esi, word ptr [edx + 0x1c] */ r_esi = (u32)R16((u32)(r_edx+0x1cu));
    /* 006dd493: movzx ebx, word ptr [ecx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006dd497: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd498: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dd499: call 0x71829c */ r_esp -= 4; W32(r_esp, 0x6dd49eu); f_0071829c();
    /* 006dd49e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dd4a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dd4a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006dd4a7: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006dd4aa: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006dd4ae: movzx esi, word ptr [ecx + 0x1c] */ r_esi = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006dd4b2: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd4b4: jne 0x6dd602 */ if (!fZ) goto L_006dd602;
L_006dd4ba:; BB(0x006dd4ba);
    /* 006dd4ba: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
    /* 006dd4c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd4c2: je 0x6dd66f */ if (fZ) goto L_006dd66f;
L_006dd4c8:; BB(0x006dd4c8);
    /* 006dd4c8: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006dd4cf: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd4d1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6dd4d6u); f_005caba4();
    /* 006dd4d6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006dd4d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dd4dc: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006dd4df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd4e1: je 0x6dd5f0 */ if (fZ) goto L_006dd5f0;
L_006dd4e7:; BB(0x006dd4e7);
    /* 006dd4e7: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006dd4ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006dd4f5: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 006dd4f8: mov ecx, eax */ r_ecx = r_eax;
    /* 006dd4fa: mov edi, dword ptr [0xaca344] */ r_edi = R32((u32)(0xaca344u));
    /* 006dd500: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006dd504: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006dd507: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006dd508: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 006dd50b: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 006dd50e: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 006dd514: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 006dd517: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 006dd51a: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 006dd51d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6dd522u); f_008193cc();
    /* 006dd522: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006dd529: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006dd52c: mov dword ptr [eax], 0xb3cd48 */ W32((u32)(r_eax), 0xb3cd48u);
    /* 006dd532: mov ebx, dword ptr [ebp - 0x50] */ r_ebx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006dd535: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006dd537: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 006dd53a: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 006dd53d: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 006dd540: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 006dd543: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006dd546: mov dword ptr [eax + 0x38], esi */ W32((u32)(r_eax+0x38u), r_esi);
    /* 006dd549: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 006dd54b: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 006dd54e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006dd551: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 006dd554: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006dd557: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 006dd55a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006dd55c:; BB(0x006dd55c);
    /* 006dd55c: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006dd55f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006dd562: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dd564: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dd566: mov ecx, dword ptr [edx + 0x9cf26c] */ r_ecx = R32((u32)(r_edx+0x9cf26cu));
    /* 006dd56c: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006dd56f: je 0x6dd5a8 */ if (fZ) goto L_006dd5a8;
L_006dd571:; BB(0x006dd571);
    /* 006dd571: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006dd574: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd576: lea ecx, [edx + 0x3c] */ r_ecx = (u32)(r_edx+0x3cu);
    /* 006dd579: push dword ptr [eax*8 + 0x9cf264] */ { u32 v = R32((u32)(r_eax*8+0x9cf264u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd580: push dword ptr [eax*8 + 0x9cf260] */ { u32 v = R32((u32)(r_eax*8+0x9cf260u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd587: push dword ptr [eax*8 + 0x9cf268] */ { u32 v = R32((u32)(r_eax*8+0x9cf268u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd58e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd58f: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x6dd594u); f_0050ac1c();
    /* 006dd594: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dd597: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd599: je 0x6dd5dd */ if (fZ) goto L_006dd5dd;
L_006dd59b:; BB(0x006dd59b);
    /* 006dd59b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006dd59e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd59f: mov ecx, eax */ r_ecx = r_eax;
    /* 006dd5a1: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6dd5a6u); f_00508f14();
    /* 006dd5a6: jmp 0x6dd5dd */ goto L_006dd5dd;
L_006dd5a8:; BB(0x006dd5a8);
    /* 006dd5a8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006dd5ab: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd5ad: lea ecx, [edx + 0x30] */ r_ecx = (u32)(r_edx+0x30u);
    /* 006dd5b0: push dword ptr [eax*8 + 0x9cf264] */ { u32 v = R32((u32)(r_eax*8+0x9cf264u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd5b7: push dword ptr [eax*8 + 0x9cf260] */ { u32 v = R32((u32)(r_eax*8+0x9cf260u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd5be: push dword ptr [eax*8 + 0x9cf268] */ { u32 v = R32((u32)(r_eax*8+0x9cf268u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd5c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd5c6: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x6dd5cbu); f_0050ac1c();
    /* 006dd5cb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dd5ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd5d0: je 0x6dd5dd */ if (fZ) goto L_006dd5dd;
L_006dd5d2:; BB(0x006dd5d2);
    /* 006dd5d2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006dd5d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd5d6: mov ecx, eax */ r_ecx = r_eax;
    /* 006dd5d8: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6dd5ddu); f_00508f14();
L_006dd5dd:; BB(0x006dd5dd);
    /* 006dd5dd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006dd5e0: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dd5e3: jl 0x6dd55c */ if ((fS!=fO)) goto L_006dd55c;
L_006dd5e9:; BB(0x006dd5e9);
    /* 006dd5e9: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006dd5f0:; BB(0x006dd5f0);
    /* 006dd5f0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006dd5f7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dd5fa: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
    /* 006dd600: jmp 0x6dd66f */ goto L_006dd66f;
L_006dd602:; BB(0x006dd602);
    /* 006dd602: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
    /* 006dd608: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd60a: je 0x6dd66f */ if (fZ) goto L_006dd66f;
L_006dd60c:; BB(0x006dd60c);
    /* 006dd60c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006dd60f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd611: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd616: lea ebx, [eax + 0x300] */ r_ebx = (u32)(r_eax+0x300u);
    /* 006dd61c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd61d: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6dd622u); f_0050b7a4();
    /* 006dd622: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dd625: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd627: je 0x6dd638 */ if (fZ) goto L_006dd638;
L_006dd629:; BB(0x006dd629);
    /* 006dd629: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006dd62c: movzx esi, word ptr [edx + 0x1c] */ r_esi = (u32)R16((u32)(r_edx+0x1cu));
    /* 006dd630: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dd631: mov ecx, eax */ r_ecx = r_eax;
    /* 006dd633: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6dd638u); f_00508f14();
L_006dd638:; BB(0x006dd638);
    /* 006dd638: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd63a: push 0x1ff */ { u32 v = 0x1ffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dd63f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd640: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6dd645u); f_0050b7a4();
    /* 006dd645: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dd648: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd64a: je 0x6dd666 */ if (fZ) goto L_006dd666;
L_006dd64c:; BB(0x006dd64c);
    /* 006dd64c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006dd64f: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006dd653: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd654: mov ecx, eax */ r_ecx = r_eax;
    /* 006dd656: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6dd65bu); f_00508f14();
    /* 006dd65b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dd65e: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
    /* 006dd664: jmp 0x6dd66f */ goto L_006dd66f;
L_006dd666:; BB(0x006dd666);
    /* 006dd666: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dd669: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
L_006dd66f:; BB(0x006dd66f);
    /* 006dd66f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dd671: je 0x6dd6bc */ if (fZ) goto L_006dd6bc;
L_006dd673:; BB(0x006dd673);
    /* 006dd673: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006dd67a: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd67c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6dd681u); f_005caba4();
    /* 006dd681: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dd682: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006dd685: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dd687: je 0x6dd6bc */ if (fZ) goto L_006dd6bc;
L_006dd689:; BB(0x006dd689);
    /* 006dd689: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006dd690: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006dd697: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd69d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006dd6a0: lea ebx, [edx + 0x300] */ r_ebx = (u32)(r_edx+0x300u);
    /* 006dd6a6: mov ecx, eax */ r_ecx = r_eax;
    /* 006dd6a8: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd6ad: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006dd6af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd6b0: call 0x6eb8c8 */ r_esp -= 4; W32(r_esp, 0x6dd6b5u); f_006eb8c8();
    /* 006dd6b5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006dd6bc:; BB(0x006dd6bc);
    /* 006dd6bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006dd6bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006dd6c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dd6c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dd6c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dd6cf: mov esp, ebp */ r_esp = r_ebp;
    /* 006dd6d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dd6d2: ret 4 */ FN_RET(0x006dd410); r_esp += 8; return;
}

void f_006dd460(void)
{
    FN_ENTER(0x006dd460);
    /* 006dd460: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dd461: in al, dx */ UNSUP(0x006dd461, "in al, dx");
    /* 006dd462: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 006dd464: movsx edx, word ptr [ebx + 0xa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xa4u));
    /* 006dd46b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006dd46e: mov dword ptr [ebp - 0x40], 7 */ W32((u32)(r_ebp+0xffffffc0u), 0x7u);
    /* 006dd475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd476: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd478: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd47a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd47b: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd47d: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd480: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x6dd483u); call_ind(t); }
    /* 006dd483: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006dd485: mov eax, ebx */ r_eax = r_ebx;
    /* 006dd487: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006dd48a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd48c: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006dd48f: movzx esi, word ptr [edx + 0x1c] */ r_esi = (u32)R16((u32)(r_edx+0x1cu));
    /* 006dd493: movzx ebx, word ptr [ecx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006dd497: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd498: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dd499: call 0x71829c */ r_esp -= 4; W32(r_esp, 0x6dd49eu); f_0071829c();
    /* 006dd49e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dd4a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dd4a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006dd4a7: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006dd4aa: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006dd4ae: movzx esi, word ptr [ecx + 0x1c] */ r_esi = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006dd4b2: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd4b4: jne 0x6dd602 */ if (!fZ) goto L_006dd602;
L_006dd4ba:; BB(0x006dd4ba);
    /* 006dd4ba: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
    /* 006dd4c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd4c2: je 0x6dd66f */ if (fZ) goto L_006dd66f;
L_006dd4c8:; BB(0x006dd4c8);
    /* 006dd4c8: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006dd4cf: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd4d1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6dd4d6u); f_005caba4();
    /* 006dd4d6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006dd4d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dd4dc: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006dd4df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd4e1: je 0x6dd5f0 */ if (fZ) goto L_006dd5f0;
L_006dd4e7:; BB(0x006dd4e7);
    /* 006dd4e7: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006dd4ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006dd4f5: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 006dd4f8: mov ecx, eax */ r_ecx = r_eax;
    /* 006dd4fa: mov edi, dword ptr [0xaca344] */ r_edi = R32((u32)(0xaca344u));
    /* 006dd500: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006dd504: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006dd507: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006dd508: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 006dd50b: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 006dd50e: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 006dd514: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 006dd517: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 006dd51a: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 006dd51d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6dd522u); f_008193cc();
    /* 006dd522: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006dd529: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006dd52c: mov dword ptr [eax], 0xb3cd48 */ W32((u32)(r_eax), 0xb3cd48u);
    /* 006dd532: mov ebx, dword ptr [ebp - 0x50] */ r_ebx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006dd535: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006dd537: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 006dd53a: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 006dd53d: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 006dd540: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 006dd543: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006dd546: mov dword ptr [eax + 0x38], esi */ W32((u32)(r_eax+0x38u), r_esi);
    /* 006dd549: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 006dd54b: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 006dd54e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006dd551: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 006dd554: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006dd557: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 006dd55a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006dd55c:; BB(0x006dd55c);
    /* 006dd55c: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006dd55f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006dd562: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dd564: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dd566: mov ecx, dword ptr [edx + 0x9cf26c] */ r_ecx = R32((u32)(r_edx+0x9cf26cu));
    /* 006dd56c: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006dd56f: je 0x6dd5a8 */ if (fZ) goto L_006dd5a8;
L_006dd571:; BB(0x006dd571);
    /* 006dd571: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006dd574: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd576: lea ecx, [edx + 0x3c] */ r_ecx = (u32)(r_edx+0x3cu);
    /* 006dd579: push dword ptr [eax*8 + 0x9cf264] */ { u32 v = R32((u32)(r_eax*8+0x9cf264u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd580: push dword ptr [eax*8 + 0x9cf260] */ { u32 v = R32((u32)(r_eax*8+0x9cf260u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd587: push dword ptr [eax*8 + 0x9cf268] */ { u32 v = R32((u32)(r_eax*8+0x9cf268u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd58e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd58f: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x6dd594u); f_0050ac1c();
    /* 006dd594: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dd597: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd599: je 0x6dd5dd */ if (fZ) goto L_006dd5dd;
L_006dd59b:; BB(0x006dd59b);
    /* 006dd59b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006dd59e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd59f: mov ecx, eax */ r_ecx = r_eax;
    /* 006dd5a1: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6dd5a6u); f_00508f14();
    /* 006dd5a6: jmp 0x6dd5dd */ goto L_006dd5dd;
L_006dd5a8:; BB(0x006dd5a8);
    /* 006dd5a8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006dd5ab: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd5ad: lea ecx, [edx + 0x30] */ r_ecx = (u32)(r_edx+0x30u);
    /* 006dd5b0: push dword ptr [eax*8 + 0x9cf264] */ { u32 v = R32((u32)(r_eax*8+0x9cf264u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd5b7: push dword ptr [eax*8 + 0x9cf260] */ { u32 v = R32((u32)(r_eax*8+0x9cf260u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd5be: push dword ptr [eax*8 + 0x9cf268] */ { u32 v = R32((u32)(r_eax*8+0x9cf268u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd5c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd5c6: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x6dd5cbu); f_0050ac1c();
    /* 006dd5cb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dd5ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd5d0: je 0x6dd5dd */ if (fZ) goto L_006dd5dd;
L_006dd5d2:; BB(0x006dd5d2);
    /* 006dd5d2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006dd5d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd5d6: mov ecx, eax */ r_ecx = r_eax;
    /* 006dd5d8: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6dd5ddu); f_00508f14();
L_006dd5dd:; BB(0x006dd5dd);
    /* 006dd5dd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006dd5e0: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dd5e3: jl 0x6dd55c */ if ((fS!=fO)) goto L_006dd55c;
L_006dd5e9:; BB(0x006dd5e9);
    /* 006dd5e9: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006dd5f0:; BB(0x006dd5f0);
    /* 006dd5f0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006dd5f7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dd5fa: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
    /* 006dd600: jmp 0x6dd66f */ goto L_006dd66f;
L_006dd602:; BB(0x006dd602);
    /* 006dd602: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
    /* 006dd608: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd60a: je 0x6dd66f */ if (fZ) goto L_006dd66f;
L_006dd60c:; BB(0x006dd60c);
    /* 006dd60c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006dd60f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd611: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd616: lea ebx, [eax + 0x300] */ r_ebx = (u32)(r_eax+0x300u);
    /* 006dd61c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd61d: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6dd622u); f_0050b7a4();
    /* 006dd622: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dd625: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd627: je 0x6dd638 */ if (fZ) goto L_006dd638;
L_006dd629:; BB(0x006dd629);
    /* 006dd629: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006dd62c: movzx esi, word ptr [edx + 0x1c] */ r_esi = (u32)R16((u32)(r_edx+0x1cu));
    /* 006dd630: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dd631: mov ecx, eax */ r_ecx = r_eax;
    /* 006dd633: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6dd638u); f_00508f14();
L_006dd638:; BB(0x006dd638);
    /* 006dd638: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd63a: push 0x1ff */ { u32 v = 0x1ffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dd63f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd640: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x6dd645u); f_0050b7a4();
    /* 006dd645: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dd648: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd64a: je 0x6dd666 */ if (fZ) goto L_006dd666;
L_006dd64c:; BB(0x006dd64c);
    /* 006dd64c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006dd64f: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006dd653: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd654: mov ecx, eax */ r_ecx = r_eax;
    /* 006dd656: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x6dd65bu); f_00508f14();
    /* 006dd65b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dd65e: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
    /* 006dd664: jmp 0x6dd66f */ goto L_006dd66f;
L_006dd666:; BB(0x006dd666);
    /* 006dd666: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dd669: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
L_006dd66f:; BB(0x006dd66f);
    /* 006dd66f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dd671: je 0x6dd6bc */ if (fZ) goto L_006dd6bc;
L_006dd673:; BB(0x006dd673);
    /* 006dd673: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006dd67a: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd67c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6dd681u); f_005caba4();
    /* 006dd681: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dd682: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006dd685: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dd687: je 0x6dd6bc */ if (fZ) goto L_006dd6bc;
L_006dd689:; BB(0x006dd689);
    /* 006dd689: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006dd690: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006dd697: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd69d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006dd6a0: lea ebx, [edx + 0x300] */ r_ebx = (u32)(r_edx+0x300u);
    /* 006dd6a6: mov ecx, eax */ r_ecx = r_eax;
    /* 006dd6a8: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd6ad: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006dd6af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dd6b0: call 0x6eb8c8 */ r_esp -= 4; W32(r_esp, 0x6dd6b5u); f_006eb8c8();
    /* 006dd6b5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006dd6bc:; BB(0x006dd6bc);
    /* 006dd6bc: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006dd6bf: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006dd6c2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dd6c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dd6c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dd6cf: mov esp, ebp */ r_esp = r_ebp;
    /* 006dd6d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dd6d2: ret 4 */ FN_RET(0x006dd460); r_esp += 8; return;
}

void f_006dd6d8(void) /* sub_6DD6D8 */
{
    FN_ENTER(0x006dd6d8);
    /* 006dd6d8: mov dword ptr [0xa963c0], 0x3f800000 */ W32((u32)(0xa963c0u), 0x3f800000u);
    /* 006dd6e2: mov dword ptr [0xa963c4], 0x41000000 */ W32((u32)(0xa963c4u), 0x41000000u);
    /* 006dd6ec: mov dword ptr [0xa963c8], 0x3fc00000 */ W32((u32)(0xa963c8u), 0x3fc00000u);
    /* 006dd6f6: ret  */ FN_RET(0x006dd6d8); r_esp += 4; return;
}

void f_006dd6f8(void) /* sub_6DD6F8 */
{
    FN_ENTER(0x006dd6f8);
    /* 006dd6f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dd6f9: mov ebp, esp */ r_ebp = r_esp;
    /* 006dd6fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dd6fd: push 0x8ee5a0 */ { u32 v = 0x8ee5a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd702: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006dd708: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd709: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006dd710: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dd713: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006dd716: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006dd719: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006dd71c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006dd71f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006dd722: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006dd725: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006dd72c: mov eax, ecx */ r_eax = r_ecx;
    /* 006dd72e: movzx edx, word ptr [eax + 0xc6] */ r_edx = (u32)R16((u32)(r_eax+0xc6u));
    /* 006dd735: mov dword ptr [eax], 0xb3ce20 */ W32((u32)(r_eax), 0xb3ce20u);
    /* 006dd73b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006dd73d: mov eax, dword ptr [edx*8 + 0x96ca88] */ r_eax = R32((u32)(r_edx*8+0x96ca88u));
    /* 006dd744: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006dd746: jbe 0x6dd7d9 */ if ((fC||fZ)) goto L_006dd7d9;
L_006dd74c:; BB(0x006dd74c);
    /* 006dd74c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006dd74f: mov esi, dword ptr [edx + 0x130] */ r_esi = R32((u32)(r_edx+0x130u));
L_006dd755:; BB(0x006dd755);
    /* 006dd755: mov ebx, dword ptr [esi + ecx*4] */ r_ebx = R32((u32)(r_esi+r_ecx*4));
    /* 006dd758: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006dd75b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dd75d: je 0x6dd790 */ if (fZ) goto L_006dd790;
L_006dd75f:; BB(0x006dd75f);
    /* 006dd75f: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006dd762: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006dd766: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006dd76b: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006dd76f: mov ebx, dword ptr [esi + 0x130] */ r_ebx = R32((u32)(r_esi+0x130u));
    /* 006dd775: mov dword ptr [ebx + edx*2], 0 */ W32((u32)(r_ebx+r_edx*2), 0x0u);
    /* 006dd77c: movzx edx, word ptr [esi + 0xc6] */ r_edx = (u32)R16((u32)(r_esi+0xc6u));
    /* 006dd783: mov esi, dword ptr [esi + 0x130] */ r_esi = R32((u32)(r_esi+0x130u));
    /* 006dd789: mov eax, dword ptr [edx*8 + 0x96ca88] */ r_eax = R32((u32)(r_edx*8+0x96ca88u));
L_006dd790:; BB(0x006dd790);
    /* 006dd790: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006dd793: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006dd795: jb 0x6dd755 */ if (fC) goto L_006dd755;
L_006dd797:; BB(0x006dd797);
    /* 006dd797: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dd798: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6dd79du); f_00857e98();
    /* 006dd79d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dd79e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006dd7a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006dd7a8: call 0x6efddc */ r_esp -= 4; W32(r_esp, 0x6dd7adu); f_006efddc();
    /* 006dd7ad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006dd7b0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dd7b2: jne 0x6dd7cd */ if (!fZ) goto L_006dd7cd;
L_006dd7b4:; BB(0x006dd7b4);
    /* 006dd7b4: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dd7b7: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006dd7ba: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006dd7bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dd7c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dd7c7: mov esp, ebp */ r_esp = r_ebp;
    /* 006dd7c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dd7ca: ret 4 */ FN_RET(0x006dd6f8); r_esp += 8; return;
L_006dd7cd:; BB(0x006dd7cd);
    /* 006dd7cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dd7d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd7d1: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6dd7d6u); f_005c2f74();
    /* 006dd7d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dd7d7: jmp 0x6dd7b4 */ goto L_006dd7b4;
L_006dd7d9:; BB(0x006dd7d9);
    /* 006dd7d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006dd7dc: mov esi, dword ptr [eax + 0x130] */ r_esi = R32((u32)(r_eax+0x130u));
    /* 006dd7e2: jmp 0x6dd797 */ goto L_006dd797;
}

void f_006dd7e4(void) /* sub_6DD7E4 */
{
    FN_ENTER(0x006dd7e4);
    /* 006dd7e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dd7e5: mov ebp, esp */ r_ebp = r_esp;
    /* 006dd7e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dd7e9: push 0x8ee5c8 */ { u32 v = 0x8ee5c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd7ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006dd7f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd7f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006dd7fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dd7ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006dd802: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006dd805: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006dd808: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006dd80b: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd810: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006dd817: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6dd81cu); f_005caba4();
    /* 006dd81c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dd81d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006dd820: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dd822: je 0x6dd84d */ if (fZ) goto L_006dd84d;
L_006dd824:; BB(0x006dd824);
    /* 006dd824: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006dd82b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006dd832: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd835: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd838: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd83b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dd83e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd841: call 0x6dd85c */ r_esp -= 4; W32(r_esp, 0x6dd846u); f_006dd85c();
    /* 006dd846: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006dd84d:; BB(0x006dd84d);
    /* 006dd84d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dd850: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dd857: mov esp, ebp */ r_esp = r_ebp;
    /* 006dd859: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dd85a: ret  */ FN_RET(0x006dd7e4); r_esp += 4; return;
}

void f_006dd85c(void) /* sub_6DD85C */
{
    FN_ENTER(0x006dd85c);
    /* 006dd85c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dd85d: mov ebp, esp */ r_ebp = r_esp;
    /* 006dd85f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dd861: push 0x8ee5e4 */ { u32 v = 0x8ee5e4u; r_esp -= 4; W32(r_esp, v); }
    /* 006dd866: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006dd86c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd86d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006dd874: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dd877: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006dd87a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006dd87d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006dd880: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006dd883: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd886: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd889: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd88c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dd88f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006dd892: call 0x6efe50 */ r_esp -= 4; W32(r_esp, 0x6dd897u); f_006efe50();
    /* 006dd897: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006dd89e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dd8a1: mov dword ptr [ecx], 0xb3ce20 */ W32((u32)(r_ecx), 0xb3ce20u);
    /* 006dd8a7: mov eax, dword ptr [0x9cf2c0] */ r_eax = R32((u32)(0x9cf2c0u));
    /* 006dd8ac: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006dd8af: call 0x6ddb80 */ r_esp -= 4; W32(r_esp, 0x6dd8b4u); f_006ddb80();
    /* 006dd8b4: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dd8b7: fld dword ptr [0x96c9b4] */ FPUSH(R_F32((u32)(0x96c9b4u)));
    /* 006dd8bd: fadd dword ptr [esi + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x24u));
    /* 006dd8c0: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 006dd8c3: mov ebx, dword ptr [esi + 0x5c] */ r_ebx = R32((u32)(r_esi+0x5cu));
    /* 006dd8c6: movzx edi, word ptr [esi + 0xc6] */ r_edi = (u32)R16((u32)(r_esi+0xc6u));
    /* 006dd8cd: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 006dd8d0: mov dword ptr [esi + 0x114], 0x40003 */ W32((u32)(r_esi+0x114u), 0x40003u);
    /* 006dd8da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006dd8dc: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006dd8e1: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006dd8e4: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 006dd8e7: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 006dd8ea: mov word ptr [esi + 0x134], ax */ W16((u32)(r_esi+0x134u), (u16)r_eax);
    /* 006dd8f1: mov word ptr [esi + 0x136], ax */ W16((u32)(r_esi+0x136u), (u16)r_eax);
    /* 006dd8f8: mov word ptr [esi + 0x138], ax */ W16((u32)(r_esi+0x138u), (u16)r_eax);
    /* 006dd8ff: mov word ptr [esi + 0x13a], ax */ W16((u32)(r_esi+0x13au), (u16)r_eax);
    /* 006dd906: mov word ptr [esi + 0x13c], ax */ W16((u32)(r_esi+0x13cu), (u16)r_eax);
    /* 006dd90d: mov word ptr [esi + 0x13e], ax */ W16((u32)(r_esi+0x13eu), (u16)r_eax);
    /* 006dd914: mov word ptr [esi + 0x140], ax */ W16((u32)(r_esi+0x140u), (u16)r_eax);
    /* 006dd91b: mov word ptr [esi + 0x142], ax */ W16((u32)(r_esi+0x142u), (u16)r_eax);
    /* 006dd922: mov word ptr [esi + 0x144], ax */ W16((u32)(r_esi+0x144u), (u16)r_eax);
    /* 006dd929: mov word ptr [esi + 0x146], ax */ W16((u32)(r_esi+0x146u), (u16)r_eax);
    /* 006dd930: mov word ptr [esi + 0x148], ax */ W16((u32)(r_esi+0x148u), (u16)r_eax);
    /* 006dd937: mov word ptr [esi + 0x14a], ax */ W16((u32)(r_esi+0x14au), (u16)r_eax);
    /* 006dd93e: mov word ptr [esi + 0x14c], ax */ W16((u32)(r_esi+0x14cu), (u16)r_eax);
    /* 006dd945: mov word ptr [esi + 0x14e], ax */ W16((u32)(r_esi+0x14eu), (u16)r_eax);
    /* 006dd94c: mov word ptr [esi + 0x150], ax */ W16((u32)(r_esi+0x150u), (u16)r_eax);
    /* 006dd953: mov word ptr [esi + 0x152], ax */ W16((u32)(r_esi+0x152u), (u16)r_eax);
    /* 006dd95a: mov word ptr [esi + 0x154], ax */ W16((u32)(r_esi+0x154u), (u16)r_eax);
    /* 006dd961: mov word ptr [esi + 0x156], ax */ W16((u32)(r_esi+0x156u), (u16)r_eax);
    /* 006dd968: mov word ptr [esi + 0x158], ax */ W16((u32)(r_esi+0x158u), (u16)r_eax);
    /* 006dd96f: mov word ptr [esi + 0x15a], ax */ W16((u32)(r_esi+0x15au), (u16)r_eax);
    /* 006dd976: mov word ptr [esi + 0x15c], ax */ W16((u32)(r_esi+0x15cu), (u16)r_eax);
    /* 006dd97d: mov word ptr [esi + 0x15e], ax */ W16((u32)(r_esi+0x15eu), (u16)r_eax);
    /* 006dd984: mov word ptr [esi + 0x160], ax */ W16((u32)(r_esi+0x160u), (u16)r_eax);
    /* 006dd98b: mov word ptr [esi + 0x162], ax */ W16((u32)(r_esi+0x162u), (u16)r_eax);
    /* 006dd992: mov word ptr [esi + 0x164], ax */ W16((u32)(r_esi+0x164u), (u16)r_eax);
    /* 006dd999: mov word ptr [esi + 0x166], ax */ W16((u32)(r_esi+0x166u), (u16)r_eax);
    /* 006dd9a0: mov word ptr [esi + 0x168], ax */ W16((u32)(r_esi+0x168u), (u16)r_eax);
    /* 006dd9a7: mov word ptr [esi + 0x16a], ax */ W16((u32)(r_esi+0x16au), (u16)r_eax);
    /* 006dd9ae: mov word ptr [esi + 0x16c], ax */ W16((u32)(r_esi+0x16cu), (u16)r_eax);
    /* 006dd9b5: mov word ptr [esi + 0x16e], ax */ W16((u32)(r_esi+0x16eu), (u16)r_eax);
    /* 006dd9bc: mov word ptr [esi + 0x170], ax */ W16((u32)(r_esi+0x170u), (u16)r_eax);
    /* 006dd9c3: mov word ptr [esi + 0x172], ax */ W16((u32)(r_esi+0x172u), (u16)r_eax);
    /* 006dd9ca: mov eax, dword ptr [edi*8 + 0x96ca88] */ r_eax = R32((u32)(r_edi*8+0x96ca88u));
    /* 006dd9d1: mov dword ptr [esi + 0x174], ecx */ W32((u32)(r_esi+0x174u), r_ecx);
    /* 006dd9d7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dd9d9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006dd9db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dd9dc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6dd9e1u); f_008581c5();
    /* 006dd9e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dd9e2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dd9e5: movsx edx, word ptr [ecx + 0xc6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006dd9ec: mov dword ptr [ecx + 0x130], eax */ W32((u32)(r_ecx+0x130u), r_eax);
    /* 006dd9f2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006dd9f4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dd9f6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dd9f8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dd9fa: mov eax, dword ptr [edx + 0x96ca88] */ r_eax = R32((u32)(r_edx+0x96ca88u));
    /* 006dda00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006dda02: jbe 0x6ddb4b */ if ((fC||fZ)) goto L_006ddb4b;
L_006dda08:; BB(0x006dda08);
    /* 006dda08: mov eax, dword ptr [edx + 0x96ca84] */ r_eax = R32((u32)(r_edx+0x96ca84u));
    /* 006dda0e: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006dda11: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dda13: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 006dda16: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006dda18: mov edx, dword ptr [edi + eax + 4] */ r_edx = R32((u32)(r_edi+r_eax+0x4u));
    /* 006dda1c: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006dda1f: jne 0x6dda87 */ if (!fZ) goto L_006dda87;
L_006dda21:; BB(0x006dda21);
    /* 006dda21: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006dda24: je 0x6dda65 */ if (fZ) goto L_006dda65;
L_006dda26:; BB(0x006dda26);
    /* 006dda26: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 006dda29: mov ebx, dword ptr [ecx + 0x5c] */ r_ebx = R32((u32)(r_ecx+0x5cu));
    /* 006dda2c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006dda33: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006dda36: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006dda3c: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 006dda3f: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006dda42: push dword ptr [edi + eax] */ { u32 v = R32((u32)(r_edi+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 006dda45: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 006dda48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dda49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006dda4a: call 0x509b24 */ r_esp -= 4; W32(r_esp, 0x6dda4fu); f_00509b24();
    /* 006dda4f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dda52: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dda55: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006dda5b: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 006dda5e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006dda60: mov dword ptr [ecx + ebx], eax */ W32((u32)(r_ecx+r_ebx), r_eax);
    /* 006dda63: jmp 0x6ddaab */ goto L_006ddaab;
L_006dda65:; BB(0x006dda65);
    /* 006dda65: push dword ptr [edi + eax] */ { u32 v = R32((u32)(r_edi+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 006dda68: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006dda6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006dda6c: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x6dda71u); f_00509590();
    /* 006dda71: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dda74: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dda77: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006dda7d: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 006dda80: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006dda82: mov dword ptr [ecx + ebx], eax */ W32((u32)(r_ecx+r_ebx), r_eax);
    /* 006dda85: jmp 0x6ddaab */ goto L_006ddaab;
L_006dda87:; BB(0x006dda87);
    /* 006dda87: push dword ptr [edi + eax] */ { u32 v = R32((u32)(r_edi+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 006dda8a: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 006dda8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dda8e: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006dda91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006dda92: call 0x509b24 */ r_esp -= 4; W32(r_esp, 0x6dda97u); f_00509b24();
    /* 006dda97: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dda9a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dda9d: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006ddaa3: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 006ddaa6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ddaa8: mov dword ptr [ecx + ebx], eax */ W32((u32)(r_ecx+r_ebx), r_eax);
L_006ddaab:; BB(0x006ddaab);
    /* 006ddaab: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ddaae: mov eax, dword ptr [ecx + 0x130] */ r_eax = R32((u32)(r_ecx+0x130u));
    /* 006ddab4: mov eax, dword ptr [ebx + eax] */ r_eax = R32((u32)(r_ebx+r_eax));
    /* 006ddab7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ddab9: je 0x6ddb2f */ if (fZ) goto L_006ddb2f;
L_006ddabb:; BB(0x006ddabb);
    /* 006ddabb: movzx edx, word ptr [ecx + 0xc6] */ r_edx = (u32)R16((u32)(r_ecx+0xc6u));
    /* 006ddac2: mov edx, dword ptr [edx*8 + 0x96ca84] */ r_edx = R32((u32)(r_edx*8+0x96ca84u));
    /* 006ddac9: mov ecx, dword ptr [edi + edx + 4] */ r_ecx = R32((u32)(r_edi+r_edx+0x4u));
    /* 006ddacd: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ddad0: je 0x6ddb22 */ if (fZ) goto L_006ddb22;
L_006ddad2:; BB(0x006ddad2);
    /* 006ddad2: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006ddad8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ddada: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6ddadfu); f_005b8610();
    /* 006ddadf: mov edi, eax */ r_edi = r_eax;
    /* 006ddae1: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006ddae7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ddae9: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6ddaeeu); f_005b8638();
    /* 006ddaee: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ddaf1: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006ddaf7: mov edx, dword ptr [ebx + ecx] */ r_edx = R32((u32)(r_ebx+r_ecx));
    /* 006ddafa: mov ebx, dword ptr [0xa96680] */ r_ebx = R32((u32)(0xa96680u));
    /* 006ddb00: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ddb03: mov dword ptr [edx + 0x60], 0x3f800000 */ W32((u32)(r_edx+0x60u), 0x3f800000u);
    /* 006ddb0a: mov dword ptr [edx + 0x50], edi */ W32((u32)(r_edx+0x50u), r_edi);
    /* 006ddb0d: mov dword ptr [edx + 0x54], ebx */ W32((u32)(r_edx+0x54u), r_ebx);
    /* 006ddb10: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 006ddb13: movzx eax, word ptr [edx + 0x2c] */ r_eax = (u32)R16((u32)(r_edx+0x2cu));
    /* 006ddb17: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ddb1c: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 006ddb20: jmp 0x6ddb2f */ goto L_006ddb2f;
L_006ddb22:; BB(0x006ddb22);
    /* 006ddb22: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ddb25: mov edx, dword ptr [edi + edx + 8] */ r_edx = R32((u32)(r_edi+r_edx+0x8u));
    /* 006ddb29: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 006ddb2c: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
L_006ddb2f:; BB(0x006ddb2f);
    /* 006ddb2f: movsx edx, word ptr [ecx + 0xc6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006ddb36: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ddb39: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ddb3b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ddb3d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ddb3f: cmp esi, dword ptr [edx + 0x96ca88] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x96ca88u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006ddb45: jb 0x6dda08 */ if (fC) goto L_006dda08;
L_006ddb4b:; BB(0x006ddb4b);
    /* 006ddb4b: call 0x6ddcbc */ r_esp -= 4; W32(r_esp, 0x6ddb50u); f_006ddcbc();
    /* 006ddb50: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ddb53: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006ddb56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ddb58: je 0x6ddb65 */ if (fZ) goto L_006ddb65;
L_006ddb5a:; BB(0x006ddb5a);
    /* 006ddb5a: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006ddb5e: mov word ptr [edx + 0xc8], ax */ W16((u32)(r_edx+0xc8u), (u16)r_eax);
L_006ddb65:; BB(0x006ddb65);
    /* 006ddb65: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ddb68: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ddb6b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ddb6e: mov eax, edx */ r_eax = r_edx;
    /* 006ddb70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ddb73: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ddb7a: mov esp, ebp */ r_esp = r_ebp;
    /* 006ddb7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ddb7d: ret 0x10 */ FN_RET(0x006dd85c); r_esp += 20; return;
}

void f_006ddb80(void) /* sub_6DDB80 */
{
    FN_ENTER(0x006ddb80);
    /* 006ddb80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ddb81: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ddb84: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ddb86: movsx eax, word ptr [ebx + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xc4u));
    /* 006ddb8d: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ddb92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ddb93: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006ddb95: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6ddb9au); f_006ded14();
    /* 006ddb9a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ddb9d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006ddb9f: mov dword ptr [ebx + 0xcc], edx */ W32((u32)(r_ebx+0xccu), r_edx);
    /* 006ddba5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006ddba8: mov dword ptr [ebx + 0xd0], edx */ W32((u32)(r_ebx+0xd0u), r_edx);
    /* 006ddbae: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006ddbb1: mov dword ptr [ebx + 0xd4], edx */ W32((u32)(r_ebx+0xd4u), r_edx);
    /* 006ddbb7: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006ddbba: mov dword ptr [ebx + 0xd8], edx */ W32((u32)(r_ebx+0xd8u), r_edx);
    /* 006ddbc0: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006ddbc3: mov dword ptr [ebx + 0xdc], edx */ W32((u32)(r_ebx+0xdcu), r_edx);
    /* 006ddbc9: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006ddbcc: mov dword ptr [ebx + 0xe0], edx */ W32((u32)(r_ebx+0xe0u), r_edx);
    /* 006ddbd2: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006ddbd5: mov dword ptr [ebx + 0xe4], edx */ W32((u32)(r_ebx+0xe4u), r_edx);
    /* 006ddbdb: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006ddbde: mov dword ptr [ebx + 0xe8], edx */ W32((u32)(r_ebx+0xe8u), r_edx);
    /* 006ddbe4: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006ddbe7: mov dword ptr [ebx + 0xec], edx */ W32((u32)(r_ebx+0xecu), r_edx);
    /* 006ddbed: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006ddbf0: mov dword ptr [ebx + 0xf0], edx */ W32((u32)(r_ebx+0xf0u), r_edx);
    /* 006ddbf6: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 006ddbf9: mov dword ptr [ebx + 0xf4], eax */ W32((u32)(r_ebx+0xf4u), r_eax);
    /* 006ddbff: movsx eax, word ptr [ebx + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xc4u));
    /* 006ddc06: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ddc09: jl 0x6ddc43 */ if ((fS!=fO)) goto L_006ddc43;
L_006ddc0b:; BB(0x006ddc0b);
    /* 006ddc0b: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6ddc10u); f_00687c48();
    /* 006ddc10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ddc12: jne 0x6ddc3c */ if (!fZ) goto L_006ddc3c;
L_006ddc14:; BB(0x006ddc14);
    /* 006ddc14: movsx edx, word ptr [0x9cf72c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9cf72cu));
    /* 006ddc1b: movsx eax, word ptr [0x9cf72e] */ r_eax = (u32)(i32)(i16)R16((u32)(0x9cf72eu));
    /* 006ddc22: movsx ecx, word ptr [ebx + 0xc4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xc4u));
    /* 006ddc29: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006ddc2c: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ddc2e: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006ddc31: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006ddc34: fstp dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0)); FPOP();
    /* 006ddc3a: jmp 0x6ddc8c */ goto L_006ddc8c;
L_006ddc3c:; BB(0x006ddc3c);
    /* 006ddc3c: movsx eax, word ptr [ebx + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xc4u));
L_006ddc43:; BB(0x006ddc43);
    /* 006ddc43: movsx edx, word ptr [ebx + 0xf0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xf0u));
    /* 006ddc4a: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006ddc4d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006ddc51: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006ddc55: fadd dword ptr [ebx + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xccu));
    /* 006ddc5b: fstp dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0)); FPOP();
    /* 006ddc61: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6ddc66u); f_00687c48();
    /* 006ddc66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ddc68: jne 0x6ddc73 */ if (!fZ) goto L_006ddc73;
L_006ddc6a:; BB(0x006ddc6a);
    /* 006ddc6a: movsx ecx, word ptr [ebx + 0xc4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xc4u));
    /* 006ddc71: jmp 0x6ddc8c */ goto L_006ddc8c;
L_006ddc73:; BB(0x006ddc73);
    /* 006ddc73: fld dword ptr [ebx + 0xcc] */ FPUSH(R_F32((u32)(r_ebx+0xccu)));
    /* 006ddc79: fmul dword ptr [0x9cf798] */ ST(0) = ST(0) * R_F32((u32)(0x9cf798u));
    /* 006ddc7f: movsx ecx, word ptr [ebx + 0xc4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xc4u));
    /* 006ddc86: fstp dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0)); FPOP();
L_006ddc8c:; BB(0x006ddc8c);
    /* 006ddc8c: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006ddc91: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006ddc93: mov eax, dword ptr [ebx + 0xd4] */ r_eax = R32((u32)(r_ebx+0xd4u));
    /* 006ddc99: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006ddc9c: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006ddc9e: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006ddca0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ddca2: mov dword ptr [ebx + 0x70], eax */ W32((u32)(r_ebx+0x70u), r_eax);
    /* 006ddca5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006ddca9: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006ddcad: fadd dword ptr [ebx + 0xd0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xd0u));
    /* 006ddcb3: fstp dword ptr [ebx + 0x64] */ W_F32((u32)(r_ebx+0x64u), ST(0)); FPOP();
    /* 006ddcb6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ddcb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ddcba: ret  */ FN_RET(0x006ddb80); r_esp += 4; return;
}

void f_006ddcbc(void) /* sub_6DDCBC */
{
    FN_ENTER(0x006ddcbc);
    /* 006ddcbc: movsx eax, word ptr [ecx + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006ddcc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ddcc5: je 0x6ddd80 */ if (fZ) goto L_006ddd80;
L_006ddccb:; BB(0x006ddccb);
    /* 006ddccb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ddcce: je 0x6ddd6a */ if (fZ) goto L_006ddd6a;
L_006ddcd4:; BB(0x006ddcd4);
    /* 006ddcd4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ddcd7: jl 0x6ddd69 */ if ((fS!=fO)) goto L_006ddd69;
L_006ddcdd:; BB(0x006ddcdd);
    /* 006ddcdd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ddce0: jle 0x6ddd40 */ if ((fZ||fS!=fO)) goto L_006ddd40;
L_006ddce2:; BB(0x006ddce2);
    /* 006ddce2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ddce5: jne 0x6ddd11 */ if (!fZ) goto L_006ddd11;
L_006ddce7:; BB(0x006ddce7);
    /* 006ddce7: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ddcea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ddcec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ddced: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ddcee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ddcef: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 006ddcf4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ddcf9u); f_00814298();
    /* 006ddcf9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ddcfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ddcfe: jl 0x6ddd69 */ if ((fS!=fO)) goto L_006ddd69;
L_006ddd00:; BB(0x006ddd00);
    /* 006ddd00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd02: push 0xfffffdb0 */ { u32 v = 0xfffffdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd08: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ddd0du); f_00814664();
    /* 006ddd0d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ddd10: ret  */ FN_RET(0x006ddcbc); r_esp += 4; return;
L_006ddd11:; BB(0x006ddd11);
    /* 006ddd11: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ddd14: jne 0x6ddd69 */ if (!fZ) goto L_006ddd69;
L_006ddd16:; BB(0x006ddd16);
    /* 006ddd16: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ddd19: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ddd1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd1e: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd23: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ddd28u); f_00814298();
    /* 006ddd28: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ddd2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ddd2d: jl 0x6ddd69 */ if ((fS!=fO)) goto L_006ddd69;
L_006ddd2f:; BB(0x006ddd2f);
    /* 006ddd2f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd31: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd37: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ddd3cu); f_00814664();
    /* 006ddd3c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ddd3f: ret  */ FN_RET(0x006ddcbc); r_esp += 4; return;
L_006ddd40:; BB(0x006ddd40);
    /* 006ddd40: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ddd43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ddd45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd48: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd4d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ddd52u); f_00814298();
    /* 006ddd52: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ddd55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ddd57: jl 0x6ddd69 */ if ((fS!=fO)) goto L_006ddd69;
L_006ddd59:; BB(0x006ddd59);
    /* 006ddd59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd5b: push 0xfffffe80 */ { u32 v = 0xfffffe80u; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd61: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ddd66u); f_00814664();
    /* 006ddd66: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006ddd69:; BB(0x006ddd69);
    /* 006ddd69: ret  */ FN_RET(0x006ddcbc); r_esp += 4; return;
L_006ddd6a:; BB(0x006ddd6a);
    /* 006ddd6a: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ddd6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ddd6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd72: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd77: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ddd7cu); f_00814298();
    /* 006ddd7c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ddd7f: ret  */ FN_RET(0x006ddcbc); r_esp += 4; return;
L_006ddd80:; BB(0x006ddd80);
    /* 006ddd80: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ddd83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ddd85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd88: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd8d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ddd92u); f_00814298();
    /* 006ddd92: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ddd95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ddd97: jl 0x6ddd69 */ if ((fS!=fO)) goto L_006ddd69;
L_006ddd99:; BB(0x006ddd99);
    /* 006ddd99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ddd9b: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006ddda0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ddda1: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ddda6u); f_00814664();
    /* 006ddda6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ddda9: ret  */ FN_RET(0x006ddcbc); r_esp += 4; return;
}

void f_006dddac(void) /* sub_6DDDAC */
{
    FN_ENTER(0x006dddac);
    /* 006dddac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dddad: mov ebp, esp */ r_ebp = r_esp;
    /* 006dddaf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dddb1: push 0x8ee60c */ { u32 v = 0x8ee60cu; r_esp -= 4; W32(r_esp, v); }
    /* 006dddb6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006dddbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dddbd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006dddc4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dddc7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006dddca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006dddcd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006dddd0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006dddd3: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 006dddd8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006ddddf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ddde4u); f_005caba4();
    /* 006ddde4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ddde5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006ddde8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dddea: je 0x6dde15 */ if (fZ) goto L_006dde15;
L_006dddec:; BB(0x006dddec);
    /* 006dddec: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006dddf3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006dddfa: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dddfd: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dde00: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006dde03: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dde06: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dde09: call 0x6dde24 */ r_esp -= 4; W32(r_esp, 0x6dde0eu); f_006dde24();
    /* 006dde0e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006dde15:; BB(0x006dde15);
    /* 006dde15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006dde18: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006dde1f: mov esp, ebp */ r_esp = r_ebp;
    /* 006dde21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dde22: ret  */ FN_RET(0x006dddac); r_esp += 4; return;
}

void f_006dde24(void) /* sub_6DDE24 */
{
    FN_ENTER(0x006dde24);
    /* 006dde24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dde25: mov ebp, esp */ r_ebp = r_esp;
    /* 006dde27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006dde29: push 0x8ee628 */ { u32 v = 0x8ee628u; r_esp -= 4; W32(r_esp, v); }
    /* 006dde2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006dde34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dde35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006dde3c: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dde3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006dde42: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006dde45: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006dde48: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006dde4b: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dde4e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dde51: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006dde54: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dde57: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006dde5a: call 0x6f0138 */ r_esp -= 4; W32(r_esp, 0x6dde5fu); f_006f0138();
    /* 006dde5f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006dde66: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dde69: mov dword ptr [ecx], 0xb3ce20 */ W32((u32)(r_ecx), 0xb3ce20u);
    /* 006dde6f: mov eax, dword ptr [0x9cf2c0] */ r_eax = R32((u32)(0x9cf2c0u));
    /* 006dde74: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006dde77: call 0x6ddb80 */ r_esp -= 4; W32(r_esp, 0x6dde7cu); f_006ddb80();
    /* 006dde7c: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006dde7f: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 006dde82: mov ebx, dword ptr [esi + 0x5c] */ r_ebx = R32((u32)(r_esi+0x5cu));
    /* 006dde85: movzx edi, word ptr [esi + 0xc6] */ r_edi = (u32)R16((u32)(r_esi+0xc6u));
    /* 006dde8c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006dde8e: mov dword ptr [esi + 0x174], ecx */ W32((u32)(r_esi+0x174u), r_ecx);
    /* 006dde94: mov dword ptr [esi + 0x114], 0x40003 */ W32((u32)(r_esi+0x114u), 0x40003u);
    /* 006dde9e: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006ddea3: mov word ptr [esi + 0x134], ax */ W16((u32)(r_esi+0x134u), (u16)r_eax);
    /* 006ddeaa: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006ddead: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 006ddeb0: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 006ddeb3: mov word ptr [esi + 0x136], ax */ W16((u32)(r_esi+0x136u), (u16)r_eax);
    /* 006ddeba: mov word ptr [esi + 0x138], ax */ W16((u32)(r_esi+0x138u), (u16)r_eax);
    /* 006ddec1: mov word ptr [esi + 0x13a], ax */ W16((u32)(r_esi+0x13au), (u16)r_eax);
    /* 006ddec8: mov word ptr [esi + 0x13c], ax */ W16((u32)(r_esi+0x13cu), (u16)r_eax);
    /* 006ddecf: mov word ptr [esi + 0x13e], ax */ W16((u32)(r_esi+0x13eu), (u16)r_eax);
    /* 006dded6: mov word ptr [esi + 0x140], ax */ W16((u32)(r_esi+0x140u), (u16)r_eax);
    /* 006ddedd: mov word ptr [esi + 0x142], ax */ W16((u32)(r_esi+0x142u), (u16)r_eax);
    /* 006ddee4: mov word ptr [esi + 0x144], ax */ W16((u32)(r_esi+0x144u), (u16)r_eax);
    /* 006ddeeb: mov word ptr [esi + 0x146], ax */ W16((u32)(r_esi+0x146u), (u16)r_eax);
    /* 006ddef2: mov word ptr [esi + 0x148], ax */ W16((u32)(r_esi+0x148u), (u16)r_eax);
    /* 006ddef9: mov word ptr [esi + 0x14a], ax */ W16((u32)(r_esi+0x14au), (u16)r_eax);
    /* 006ddf00: mov word ptr [esi + 0x14c], ax */ W16((u32)(r_esi+0x14cu), (u16)r_eax);
    /* 006ddf07: mov word ptr [esi + 0x14e], ax */ W16((u32)(r_esi+0x14eu), (u16)r_eax);
    /* 006ddf0e: mov word ptr [esi + 0x150], ax */ W16((u32)(r_esi+0x150u), (u16)r_eax);
    /* 006ddf15: mov word ptr [esi + 0x152], ax */ W16((u32)(r_esi+0x152u), (u16)r_eax);
    /* 006ddf1c: mov word ptr [esi + 0x154], ax */ W16((u32)(r_esi+0x154u), (u16)r_eax);
    /* 006ddf23: mov word ptr [esi + 0x156], ax */ W16((u32)(r_esi+0x156u), (u16)r_eax);
    /* 006ddf2a: mov word ptr [esi + 0x158], ax */ W16((u32)(r_esi+0x158u), (u16)r_eax);
    /* 006ddf31: mov word ptr [esi + 0x15a], ax */ W16((u32)(r_esi+0x15au), (u16)r_eax);
    /* 006ddf38: mov word ptr [esi + 0x15c], ax */ W16((u32)(r_esi+0x15cu), (u16)r_eax);
    /* 006ddf3f: mov word ptr [esi + 0x15e], ax */ W16((u32)(r_esi+0x15eu), (u16)r_eax);
    /* 006ddf46: mov word ptr [esi + 0x160], ax */ W16((u32)(r_esi+0x160u), (u16)r_eax);
    /* 006ddf4d: mov word ptr [esi + 0x162], ax */ W16((u32)(r_esi+0x162u), (u16)r_eax);
    /* 006ddf54: mov word ptr [esi + 0x164], ax */ W16((u32)(r_esi+0x164u), (u16)r_eax);
    /* 006ddf5b: mov word ptr [esi + 0x166], ax */ W16((u32)(r_esi+0x166u), (u16)r_eax);
    /* 006ddf62: mov word ptr [esi + 0x168], ax */ W16((u32)(r_esi+0x168u), (u16)r_eax);
    /* 006ddf69: mov word ptr [esi + 0x16a], ax */ W16((u32)(r_esi+0x16au), (u16)r_eax);
    /* 006ddf70: mov word ptr [esi + 0x16c], ax */ W16((u32)(r_esi+0x16cu), (u16)r_eax);
    /* 006ddf77: mov word ptr [esi + 0x16e], ax */ W16((u32)(r_esi+0x16eu), (u16)r_eax);
    /* 006ddf7e: mov word ptr [esi + 0x170], ax */ W16((u32)(r_esi+0x170u), (u16)r_eax);
    /* 006ddf85: mov word ptr [esi + 0x172], ax */ W16((u32)(r_esi+0x172u), (u16)r_eax);
    /* 006ddf8c: mov eax, dword ptr [edi*8 + 0x96ca88] */ r_eax = R32((u32)(r_edi*8+0x96ca88u));
    /* 006ddf93: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ddf95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ddf97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ddf98: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6ddf9du); f_008581c5();
    /* 006ddf9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ddf9e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ddfa1: movsx edx, word ptr [ecx + 0xc6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006ddfa8: mov dword ptr [ecx + 0x130], eax */ W32((u32)(r_ecx+0x130u), r_eax);
    /* 006ddfae: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006ddfb0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ddfb2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ddfb4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ddfb6: mov eax, dword ptr [edx + 0x96ca88] */ r_eax = R32((u32)(r_edx+0x96ca88u));
    /* 006ddfbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006ddfbe: jbe 0x6de107 */ if ((fC||fZ)) goto L_006de107;
L_006ddfc4:; BB(0x006ddfc4);
    /* 006ddfc4: mov eax, dword ptr [edx + 0x96ca84] */ r_eax = R32((u32)(r_edx+0x96ca84u));
    /* 006ddfca: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006ddfcd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ddfcf: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 006ddfd2: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006ddfd4: mov edx, dword ptr [edi + eax + 4] */ r_edx = R32((u32)(r_edi+r_eax+0x4u));
    /* 006ddfd8: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ddfdb: jne 0x6de043 */ if (!fZ) goto L_006de043;
L_006ddfdd:; BB(0x006ddfdd);
    /* 006ddfdd: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ddfe0: je 0x6de021 */ if (fZ) goto L_006de021;
L_006ddfe2:; BB(0x006ddfe2);
    /* 006ddfe2: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 006ddfe5: mov ebx, dword ptr [ecx + 0x5c] */ r_ebx = R32((u32)(r_ecx+0x5cu));
    /* 006ddfe8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006ddfef: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ddff2: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ddff8: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 006ddffb: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006ddffe: push dword ptr [edi + eax] */ { u32 v = R32((u32)(r_edi+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 006de001: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 006de004: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006de005: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006de006: call 0x509b24 */ r_esp -= 4; W32(r_esp, 0x6de00bu); f_00509b24();
    /* 006de00b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006de00e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006de011: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006de017: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 006de01a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006de01c: mov dword ptr [ecx + ebx], eax */ W32((u32)(r_ecx+r_ebx), r_eax);
    /* 006de01f: jmp 0x6de067 */ goto L_006de067;
L_006de021:; BB(0x006de021);
    /* 006de021: push dword ptr [edi + eax] */ { u32 v = R32((u32)(r_edi+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 006de024: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006de027: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006de028: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x6de02du); f_00509590();
    /* 006de02d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006de030: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006de033: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006de039: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 006de03c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006de03e: mov dword ptr [ecx + ebx], eax */ W32((u32)(r_ecx+r_ebx), r_eax);
    /* 006de041: jmp 0x6de067 */ goto L_006de067;
L_006de043:; BB(0x006de043);
    /* 006de043: push dword ptr [edi + eax] */ { u32 v = R32((u32)(r_edi+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 006de046: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 006de049: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006de04a: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006de04d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006de04e: call 0x509b24 */ r_esp -= 4; W32(r_esp, 0x6de053u); f_00509b24();
    /* 006de053: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006de056: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006de059: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006de05f: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 006de062: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006de064: mov dword ptr [ecx + ebx], eax */ W32((u32)(r_ecx+r_ebx), r_eax);
L_006de067:; BB(0x006de067);
    /* 006de067: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006de06a: mov eax, dword ptr [ecx + 0x130] */ r_eax = R32((u32)(r_ecx+0x130u));
    /* 006de070: mov eax, dword ptr [ebx + eax] */ r_eax = R32((u32)(r_ebx+r_eax));
    /* 006de073: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006de075: je 0x6de0eb */ if (fZ) goto L_006de0eb;
L_006de077:; BB(0x006de077);
    /* 006de077: movzx edx, word ptr [ecx + 0xc6] */ r_edx = (u32)R16((u32)(r_ecx+0xc6u));
    /* 006de07e: mov edx, dword ptr [edx*8 + 0x96ca84] */ r_edx = R32((u32)(r_edx*8+0x96ca84u));
    /* 006de085: mov ecx, dword ptr [edi + edx + 4] */ r_ecx = R32((u32)(r_edi+r_edx+0x4u));
    /* 006de089: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006de08c: je 0x6de0de */ if (fZ) goto L_006de0de;
L_006de08e:; BB(0x006de08e);
    /* 006de08e: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006de094: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006de096: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6de09bu); f_005b8610();
    /* 006de09b: mov edi, eax */ r_edi = r_eax;
    /* 006de09d: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006de0a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006de0a5: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6de0aau); f_005b8638();
    /* 006de0aa: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006de0ad: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006de0b3: mov edx, dword ptr [ebx + ecx] */ r_edx = R32((u32)(r_ebx+r_ecx));
    /* 006de0b6: mov ebx, dword ptr [0xa96680] */ r_ebx = R32((u32)(0xa96680u));
    /* 006de0bc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006de0bf: mov dword ptr [edx + 0x60], 0x3f800000 */ W32((u32)(r_edx+0x60u), 0x3f800000u);
    /* 006de0c6: mov dword ptr [edx + 0x50], edi */ W32((u32)(r_edx+0x50u), r_edi);
    /* 006de0c9: mov dword ptr [edx + 0x54], ebx */ W32((u32)(r_edx+0x54u), r_ebx);
    /* 006de0cc: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 006de0cf: movzx eax, word ptr [edx + 0x2c] */ r_eax = (u32)R16((u32)(r_edx+0x2cu));
    /* 006de0d3: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006de0d8: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 006de0dc: jmp 0x6de0eb */ goto L_006de0eb;
L_006de0de:; BB(0x006de0de);
    /* 006de0de: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006de0e1: mov edx, dword ptr [edi + edx + 8] */ r_edx = R32((u32)(r_edi+r_edx+0x8u));
    /* 006de0e5: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 006de0e8: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
L_006de0eb:; BB(0x006de0eb);
    /* 006de0eb: movsx edx, word ptr [ecx + 0xc6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006de0f2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006de0f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006de0f7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006de0f9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006de0fb: cmp esi, dword ptr [edx + 0x96ca88] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x96ca88u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006de101: jb 0x6ddfc4 */ if (fC) goto L_006ddfc4;
L_006de107:; BB(0x006de107);
    /* 006de107: call 0x6ddcbc */ r_esp -= 4; W32(r_esp, 0x6de10cu); f_006ddcbc();
    /* 006de10c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006de10f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006de112: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006de114: je 0x6de121 */ if (fZ) goto L_006de121;
L_006de116:; BB(0x006de116);
    /* 006de116: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006de11a: mov word ptr [edx + 0xc8], ax */ W16((u32)(r_edx+0xc8u), (u16)r_eax);
L_006de121:; BB(0x006de121);
    /* 006de121: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006de124: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006de127: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006de12a: mov eax, edx */ r_eax = r_edx;
    /* 006de12c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006de12f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006de136: mov esp, ebp */ r_esp = r_ebp;
    /* 006de138: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006de139: ret 0x10 */ FN_RET(0x006dde24); r_esp += 20; return;
}

