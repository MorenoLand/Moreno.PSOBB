#include "protos.h"

void f_00608024(void) /* sub_608024 */
{
    FN_ENTER(0x00608024);
    /* 00608024: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00608025: mov esi, ecx */ r_esi = r_ecx;
    /* 00608027: mov eax, dword ptr [esi + 0x3c0] */ r_eax = R32((u32)(r_esi+0x3c0u));
    /* 0060802d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060802f: je 0x608053 */ if (fZ) goto L_00608053;
L_00608031:; BB(0x00608031);
    /* 00608031: push dword ptr [esi + 0x3a4] */ { u32 v = R32((u32)(r_esi+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00608037: push dword ptr [esi + 0x3a0] */ { u32 v = R32((u32)(r_esi+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060803d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0060803f: mov ecx, esi */ r_ecx = r_esi;
    /* 00608041: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x608044u); call_ind(t); }
    /* 00608044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00608046: je 0x608053 */ if (fZ) goto L_00608053;
L_00608048:; BB(0x00608048);
    /* 00608048: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 0060804e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00608051: je 0x608055 */ if (fZ) goto L_00608055;
L_00608053:; BB(0x00608053);
    /* 00608053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00608054: ret  */ FN_RET(0x00608024); r_esp += 4; return;
L_00608055:; BB(0x00608055);
    /* 00608055: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00608056: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x60805bu); f_00794548();
    /* 0060805b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060805c: mov ecx, esi */ r_ecx = r_esi;
    /* 0060805e: call 0x60814c */ r_esp -= 4; W32(r_esp, 0x608063u); f_0060814c();
    /* 00608063: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608065: je 0x608074 */ if (fZ) goto L_00608074;
L_00608067:; BB(0x00608067);
    /* 00608067: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0060806c: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0060806f: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_00608074:; BB(0x00608074);
    /* 00608074: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00608077: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x60807cu); f_00829cc8();
    /* 0060807c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060807e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x608083u); f_0082d990();
    /* 00608083: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00608086: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00608088: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x60808du); f_008316b4();
    /* 0060808d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060808f: mov eax, dword ptr [esi + 0x3c0] */ r_eax = R32((u32)(r_esi+0x3c0u));
    /* 00608095: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00608098: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060809a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060809c: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x6080a1u); f_00830b74();
    /* 006080a1: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006080a4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006080a6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6080abu); f_0082d8bc();
    /* 006080ab: mov ecx, esi */ r_ecx = r_esi;
    /* 006080ad: call 0x6080e4 */ r_esp -= 4; W32(r_esp, 0x6080b2u); f_006080e4();
    /* 006080b2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6080b7u); f_0082da80();
    /* 006080b7: mov ecx, esi */ r_ecx = r_esi;
    /* 006080b9: call 0x60814c */ r_esp -= 4; W32(r_esp, 0x6080beu); f_0060814c();
    /* 006080be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006080c0: je 0x6080cf */ if (fZ) goto L_006080cf;
L_006080c2:; BB(0x006080c2);
    /* 006080c2: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 006080c7: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006080ca: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_006080cf:; BB(0x006080cf);
    /* 006080cf: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x6080d4u); f_00794750();
    /* 006080d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006080d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006080d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006080d8: mov ecx, esi */ r_ecx = r_esi;
    /* 006080da: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x6080dfu); f_00779d4c();
    /* 006080df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006080e0: ret  */ FN_RET(0x00608024); r_esp += 4; return;
}

void f_006080e4(void) /* sub_6080E4 */
{
    FN_ENTER(0x006080e4);
    /* 006080e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006080e5: mov edi, ecx */ r_edi = r_ecx;
    /* 006080e7: mov eax, dword ptr [edi + 0x3c0] */ r_eax = R32((u32)(r_edi+0x3c0u));
    /* 006080ed: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 006080f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006080f3: je 0x60812f */ if (fZ) goto L_0060812f;
L_006080f5:; BB(0x006080f5);
    /* 006080f5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006080f8: je 0x608126 */ if (fZ) goto L_00608126;
L_006080fa:; BB(0x006080fa);
    /* 006080fa: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006080fd: je 0x60810d */ if (fZ) goto L_0060810d;
L_006080ff:; BB(0x006080ff);
    /* 006080ff: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00608102: jne 0x608124 */ if (!fZ) goto L_00608124;
L_00608104:; BB(0x00608104);
    /* 00608104: mov ecx, edi */ r_ecx = r_edi;
    /* 00608106: call 0x7aa714 */ r_esp -= 4; W32(r_esp, 0x60810bu); f_007aa714();
    /* 0060810b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0060810c: ret  */ FN_RET(0x006080e4); r_esp += 4; return;
L_0060810d:; BB(0x0060810d);
    /* 0060810d: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x608112u); f_0082fa9c();
    /* 00608112: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00608115: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x60811au); f_00831758();
    /* 0060811a: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x60811fu); f_007a9044();
    /* 0060811f: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x608124u); f_0082faac();
L_00608124:; BB(0x00608124);
    /* 00608124: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00608125: ret  */ FN_RET(0x006080e4); r_esp += 4; return;
L_00608126:; BB(0x00608126);
    /* 00608126: mov ecx, edi */ r_ecx = r_edi;
    /* 00608128: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x60812du); f_007aa668();
    /* 0060812d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0060812e: ret  */ FN_RET(0x006080e4); r_esp += 4; return;
L_0060812f:; BB(0x0060812f);
    /* 0060812f: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x608134u); f_0082fa9c();
    /* 00608134: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00608137: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x60813cu); f_0082e1e8();
    /* 0060813c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060813d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x608142u); f_007a9044();
    /* 00608142: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x608147u); f_0082faac();
    /* 00608147: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00608148: ret  */ FN_RET(0x006080e4); r_esp += 4; return;
}

void f_0060814c(void) /* sub_60814C */
{
    FN_ENTER(0x0060814c);
    /* 0060814c: mov eax, dword ptr [ecx + 0x3c0] */ r_eax = R32((u32)(r_ecx+0x3c0u));
    /* 00608152: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00608155: cmp edx, 0x3f */ {  u32 a = r_edx; u32 b = 0x3fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00608158: je 0x608160 */ if (fZ) goto L_00608160;
L_0060815a:; BB(0x0060815a);
    /* 0060815a: mov eax, 1 */ r_eax = 0x1u;
    /* 0060815f: ret  */ FN_RET(0x0060814c); r_esp += 4; return;
L_00608160:; BB(0x00608160);
    /* 00608160: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00608162: ret  */ FN_RET(0x0060814c); r_esp += 4; return;
}

void f_00608164(void) /* sub_608164 */
{
    FN_ENTER(0x00608164);
    /* 00608164: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00608165: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00608166: mov edi, ecx */ r_edi = r_ecx;
    /* 00608168: mov ecx, edi */ r_ecx = r_edi;
    /* 0060816a: call 0x607070 */ r_esp -= 4; W32(r_esp, 0x60816fu); f_00607070();
    /* 0060816f: push 0x92f410 */ { u32 v = 0x92f410u; r_esp -= 4; W32(r_esp, v); }
    /* 00608174: push 0x130018 */ { u32 v = 0x130018u; r_esp -= 4; W32(r_esp, v); }
    /* 00608179: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x60817eu); f_0061cdb0();
    /* 0060817e: push 0x92f420 */ { u32 v = 0x92f420u; r_esp -= 4; W32(r_esp, v); }
    /* 00608183: push 0x13001a */ { u32 v = 0x13001au; r_esp -= 4; W32(r_esp, v); }
    /* 00608188: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x60818du); f_0061cdb0();
    /* 0060818d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00608190: movsx eax, word ptr [edi + 0x5c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x5cu));
    /* 00608194: call 0x607ffd */ r_esp -= 4; W32(r_esp, 0x608199u); f_00607ffd();
    /* 00608199: mov edx, dword ptr [edi + 0x3c0] */ r_edx = R32((u32)(r_edi+0x3c0u));
    /* 0060819f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006081a1: je 0x6081b1 */ if (fZ) goto L_006081b1;
L_006081a3:; BB(0x006081a3);
    /* 006081a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006081a4: mov ecx, edi */ r_ecx = r_edi;
    /* 006081a6: call 0x608bfc */ r_esp -= 4; W32(r_esp, 0x6081abu); f_00608bfc();
    /* 006081ab: mov edx, dword ptr [edi + 0x3c0] */ r_edx = R32((u32)(r_edi+0x3c0u));
L_006081b1:; BB(0x006081b1);
    /* 006081b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006081b3: je 0x608203 */ if (fZ) goto L_00608203;
L_006081b5:; BB(0x006081b5);
    /* 006081b5: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 006081b9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006081bc: je 0x6081c6 */ if (fZ) goto L_006081c6;
L_006081be:; BB(0x006081be);
    /* 006081be: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006081c1: je 0x6081c6 */ if (fZ) goto L_006081c6;
L_006081c3:; BB(0x006081c3);
    /* 006081c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006081c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006081c5: ret  */ FN_RET(0x00608164); r_esp += 4; return;
L_006081c6:; BB(0x006081c6);
    /* 006081c6: mov ecx, dword ptr [edi + 0x64] */ r_ecx = R32((u32)(r_edi+0x64u));
    /* 006081c9: movsx eax, word ptr [edx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x20u));
    /* 006081cd: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006081cf: jle 0x6081de */ if ((fZ||fS!=fO)) goto L_006081de;
L_006081d1:; BB(0x006081d1);
    /* 006081d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006081d3: jl 0x6081de */ if ((fS!=fO)) goto L_006081de;
L_006081d5:; BB(0x006081d5);
    /* 006081d5: mov word ptr [edi + 0xb8], cx */ W16((u32)(r_edi+0xb8u), (u16)r_ecx);
    /* 006081dc: jmp 0x6081f9 */ goto L_006081f9;
L_006081de:; BB(0x006081de);
    /* 006081de: push 0x92f430 */ { u32 v = 0x92f430u; r_esp -= 4; W32(r_esp, v); }
    /* 006081e3: push 0x24001a */ { u32 v = 0x24001au; r_esp -= 4; W32(r_esp, v); }
    /* 006081e8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6081edu); f_0061cdb0();
    /* 006081ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006081f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006081f2: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_006081f9:; BB(0x006081f9);
    /* 006081f9: mov ecx, edi */ r_ecx = r_edi;
    /* 006081fb: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x608200u); f_007aa094();
    /* 00608200: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00608201: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00608202: ret  */ FN_RET(0x00608164); r_esp += 4; return;
L_00608203:; BB(0x00608203);
    /* 00608203: push 0x92f430 */ { u32 v = 0x92f430u; r_esp -= 4; W32(r_esp, v); }
    /* 00608208: push 0x240018 */ { u32 v = 0x240018u; r_esp -= 4; W32(r_esp, v); }
    /* 0060820d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x608212u); f_0061cdb0();
    /* 00608212: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00608215: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00608216: ret  */ FN_RET(0x00608164); r_esp += 4; return;
}

void f_00608218(void) /* sub_608218 */
{
    FN_ENTER(0x00608218);
    /* 00608218: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00608219: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060821a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060821c: movsx edi, word ptr [esp + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 00608221: mov ebx, 0xa8e520 */ r_ebx = 0xa8e520u;
    /* 00608226: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608229: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060822b: je 0x608428 */ if (fZ) goto L_00608428;
L_00608231:; BB(0x00608231);
    /* 00608231: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608233: jge 0x608466 */ if ((fS==fO)) goto L_00608466;
L_00608239:; BB(0x00608239);
    /* 00608239: mov eax, 1 */ r_eax = 0x1u;
    /* 0060823e: mov ebx, 0xa8e544 */ r_ebx = 0xa8e544u;
    /* 00608243: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608246: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608248: je 0x608428 */ if (fZ) goto L_00608428;
L_0060824e:; BB(0x0060824e);
    /* 0060824e: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608250: jge 0x608466 */ if ((fS==fO)) goto L_00608466;
L_00608256:; BB(0x00608256);
    /* 00608256: mov eax, 2 */ r_eax = 0x2u;
    /* 0060825b: mov ebx, 0xa8e568 */ r_ebx = 0xa8e568u;
    /* 00608260: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608263: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608265: je 0x608428 */ if (fZ) goto L_00608428;
L_0060826b:; BB(0x0060826b);
    /* 0060826b: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060826d: jge 0x608466 */ if ((fS==fO)) goto L_00608466;
L_00608273:; BB(0x00608273);
    /* 00608273: mov eax, 3 */ r_eax = 0x3u;
    /* 00608278: mov ebx, 0xa8e58c */ r_ebx = 0xa8e58cu;
    /* 0060827d: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608280: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608282: je 0x608428 */ if (fZ) goto L_00608428;
L_00608288:; BB(0x00608288);
    /* 00608288: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060828a: jge 0x608466 */ if ((fS==fO)) goto L_00608466;
L_00608290:; BB(0x00608290);
    /* 00608290: mov eax, 4 */ r_eax = 0x4u;
    /* 00608295: mov ebx, 0xa8e5b0 */ r_ebx = 0xa8e5b0u;
    /* 0060829a: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 0060829d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060829f: je 0x608428 */ if (fZ) goto L_00608428;
L_006082a5:; BB(0x006082a5);
    /* 006082a5: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006082a7: jge 0x608466 */ if ((fS==fO)) goto L_00608466;
L_006082ad:; BB(0x006082ad);
    /* 006082ad: mov eax, 5 */ r_eax = 0x5u;
    /* 006082b2: mov ebx, 0xa8e5d4 */ r_ebx = 0xa8e5d4u;
    /* 006082b7: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006082ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006082bc: je 0x608428 */ if (fZ) goto L_00608428;
L_006082c2:; BB(0x006082c2);
    /* 006082c2: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006082c4: jge 0x608466 */ if ((fS==fO)) goto L_00608466;
L_006082ca:; BB(0x006082ca);
    /* 006082ca: mov eax, 6 */ r_eax = 0x6u;
    /* 006082cf: mov ebx, 0xa8e5f8 */ r_ebx = 0xa8e5f8u;
    /* 006082d4: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006082d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006082d9: je 0x608428 */ if (fZ) goto L_00608428;
L_006082df:; BB(0x006082df);
    /* 006082df: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006082e1: jge 0x608466 */ if ((fS==fO)) goto L_00608466;
L_006082e7:; BB(0x006082e7);
    /* 006082e7: mov eax, 7 */ r_eax = 0x7u;
    /* 006082ec: mov ebx, 0xa8e61c */ r_ebx = 0xa8e61cu;
    /* 006082f1: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006082f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006082f6: je 0x608428 */ if (fZ) goto L_00608428;
L_006082fc:; BB(0x006082fc);
    /* 006082fc: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006082fe: jge 0x608466 */ if ((fS==fO)) goto L_00608466;
L_00608304:; BB(0x00608304);
    /* 00608304: mov eax, 8 */ r_eax = 0x8u;
    /* 00608309: mov ebx, 0xa8e640 */ r_ebx = 0xa8e640u;
    /* 0060830e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608311: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608313: je 0x608428 */ if (fZ) goto L_00608428;
L_00608319:; BB(0x00608319);
    /* 00608319: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060831b: jge 0x608466 */ if ((fS==fO)) goto L_00608466;
L_00608321:; BB(0x00608321);
    /* 00608321: mov eax, 9 */ r_eax = 0x9u;
    /* 00608326: mov ebx, 0xa8e664 */ r_ebx = 0xa8e664u;
    /* 0060832b: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 0060832e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608330: je 0x608428 */ if (fZ) goto L_00608428;
L_00608336:; BB(0x00608336);
    /* 00608336: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608338: jge 0x608466 */ if ((fS==fO)) goto L_00608466;
L_0060833e:; BB(0x0060833e);
    /* 0060833e: mov eax, 0xa */ r_eax = 0xau;
    /* 00608343: mov ebx, 0xa8e688 */ r_ebx = 0xa8e688u;
    /* 00608348: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 0060834b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060834d: je 0x608428 */ if (fZ) goto L_00608428;
L_00608353:; BB(0x00608353);
    /* 00608353: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608355: jge 0x608466 */ if ((fS==fO)) goto L_00608466;
L_0060835b:; BB(0x0060835b);
    /* 0060835b: mov eax, 0xb */ r_eax = 0xbu;
    /* 00608360: mov ebx, 0xa8e6ac */ r_ebx = 0xa8e6acu;
    /* 00608365: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608368: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060836a: je 0x608428 */ if (fZ) goto L_00608428;
L_00608370:; BB(0x00608370);
    /* 00608370: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608372: jge 0x608466 */ if ((fS==fO)) goto L_00608466;
L_00608378:; BB(0x00608378);
    /* 00608378: mov eax, 0xc */ r_eax = 0xcu;
    /* 0060837d: mov ebx, 0xa8e6d0 */ r_ebx = 0xa8e6d0u;
    /* 00608382: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608385: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608387: je 0x608428 */ if (fZ) goto L_00608428;
L_0060838d:; BB(0x0060838d);
    /* 0060838d: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060838f: jge 0x608466 */ if ((fS==fO)) goto L_00608466;
L_00608395:; BB(0x00608395);
    /* 00608395: mov eax, 0xd */ r_eax = 0xdu;
    /* 0060839a: mov ebx, 0xa8e6f4 */ r_ebx = 0xa8e6f4u;
    /* 0060839f: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006083a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006083a4: je 0x608428 */ if (fZ) goto L_00608428;
L_006083aa:; BB(0x006083aa);
    /* 006083aa: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006083ac: jge 0x608466 */ if ((fS==fO)) goto L_00608466;
L_006083b2:; BB(0x006083b2);
    /* 006083b2: mov eax, 0xe */ r_eax = 0xeu;
    /* 006083b7: mov ebx, 0xa8e718 */ r_ebx = 0xa8e718u;
    /* 006083bc: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006083bf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006083c1: je 0x608428 */ if (fZ) goto L_00608428;
L_006083c3:; BB(0x006083c3);
    /* 006083c3: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006083c5: jge 0x608466 */ if ((fS==fO)) goto L_00608466;
L_006083cb:; BB(0x006083cb);
    /* 006083cb: mov eax, 0xf */ r_eax = 0xfu;
    /* 006083d0: mov ebx, 0xa8e73c */ r_ebx = 0xa8e73cu;
    /* 006083d5: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006083d8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006083da: je 0x608428 */ if (fZ) goto L_00608428;
L_006083dc:; BB(0x006083dc);
    /* 006083dc: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006083de: jge 0x608466 */ if ((fS==fO)) goto L_00608466;
L_006083e4:; BB(0x006083e4);
    /* 006083e4: mov eax, 0x10 */ r_eax = 0x10u;
L_006083e9:; BB(0x006083e9);
    /* 006083e9: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006083ec: jge 0x608426 */ if ((fS==fO)) goto L_00608426;
L_006083ee:; BB(0x006083ee);
    /* 006083ee: movsx edx, word ptr [0xa8e73c] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa8e73cu));
    /* 006083f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006083f7: jne 0x608422 */ if (!fZ) goto L_00608422;
L_006083f9:; BB(0x006083f9);
    /* 006083f9: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006083fc: jge 0x608419 */ if ((fS==fO)) goto L_00608419;
L_006083fe:; BB(0x006083fe);
    /* 006083fe: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 00608401: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00608403: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00608405: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00608407: lea eax, [eax + eax*8 + 0x21c] */ r_eax = (u32)(r_eax+r_eax*8+0x21cu);
    /* 0060840e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060840f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00608410: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00608411: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x608416u); f_00858c80();
    /* 00608416: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00608419:; BB(0x00608419);
    /* 00608419: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060841b: call 0x608c80 */ r_esp -= 4; W32(r_esp, 0x608420u); f_00608c80();
    /* 00608420: jmp 0x608428 */ goto L_00608428;
L_00608422:; BB(0x00608422);
    /* 00608422: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00608424: jmp 0x608428 */ goto L_00608428;
L_00608426:; BB(0x00608426);
    /* 00608426: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00608428:; BB(0x00608428);
    /* 00608428: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060842a: je 0x60846c */ if (fZ) goto L_0060846c;
L_0060842c:; BB(0x0060842c);
    /* 0060842c: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00608430: mov word ptr [ebx], di */ W16((u32)(r_ebx), (u16)r_edi);
    /* 00608433: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00608437: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00608439: mov word ptr [ebx + 2], ax */ W16((u32)(r_ebx+0x2u), (u16)r_eax);
    /* 0060843d: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00608440: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00608444: mov dword ptr [ebx + 8], edi */ W32((u32)(r_ebx+0x8u), r_edi);
    /* 00608447: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 0060844a: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0060844e: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 00608451: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 00608454: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 00608457: mov word ptr [ebx + 0x1c], ax */ W16((u32)(r_ebx+0x1cu), (u16)r_eax);
    /* 0060845b: mov word ptr [ebx + 0x1e], ax */ W16((u32)(r_ebx+0x1eu), (u16)r_eax);
    /* 0060845f: mov word ptr [ebx + 0x20], ax */ W16((u32)(r_ebx+0x20u), (u16)r_eax);
    /* 00608463: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00608464: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00608465: ret  */ FN_RET(0x00608218); r_esp += 4; return;
L_00608466:; BB(0x00608466);
    /* 00608466: jne 0x6083e9 */ if (!fZ) goto L_006083e9;
L_00608468:; BB(0x00608468);
    /* 00608468: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0060846a: jmp 0x608428 */ goto L_00608428;
L_0060846c:; BB(0x0060846c);
    /* 0060846c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060846d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0060846e: ret  */ FN_RET(0x00608218); r_esp += 4; return;
}

void f_00608470(void) /* sub_608470 */
{
    FN_ENTER(0x00608470);
    /* 00608470: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00608471: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608472: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00608473: movsx esi, word ptr [esp + 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00608478: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0060847c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060847e: mov ebx, 0xa8e520 */ r_ebx = 0xa8e520u;
    /* 00608483: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608486: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608488: je 0x608685 */ if (fZ) goto L_00608685;
L_0060848e:; BB(0x0060848e);
    /* 0060848e: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608490: jge 0x6086d9 */ if ((fS==fO)) goto L_006086d9;
L_00608496:; BB(0x00608496);
    /* 00608496: mov eax, 1 */ r_eax = 0x1u;
    /* 0060849b: mov ebx, 0xa8e544 */ r_ebx = 0xa8e544u;
    /* 006084a0: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006084a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006084a5: je 0x608685 */ if (fZ) goto L_00608685;
L_006084ab:; BB(0x006084ab);
    /* 006084ab: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006084ad: jge 0x6086d9 */ if ((fS==fO)) goto L_006086d9;
L_006084b3:; BB(0x006084b3);
    /* 006084b3: mov eax, 2 */ r_eax = 0x2u;
    /* 006084b8: mov ebx, 0xa8e568 */ r_ebx = 0xa8e568u;
    /* 006084bd: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006084c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006084c2: je 0x608685 */ if (fZ) goto L_00608685;
L_006084c8:; BB(0x006084c8);
    /* 006084c8: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006084ca: jge 0x6086d9 */ if ((fS==fO)) goto L_006086d9;
L_006084d0:; BB(0x006084d0);
    /* 006084d0: mov eax, 3 */ r_eax = 0x3u;
    /* 006084d5: mov ebx, 0xa8e58c */ r_ebx = 0xa8e58cu;
    /* 006084da: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006084dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006084df: je 0x608685 */ if (fZ) goto L_00608685;
L_006084e5:; BB(0x006084e5);
    /* 006084e5: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006084e7: jge 0x6086d9 */ if ((fS==fO)) goto L_006086d9;
L_006084ed:; BB(0x006084ed);
    /* 006084ed: mov eax, 4 */ r_eax = 0x4u;
    /* 006084f2: mov ebx, 0xa8e5b0 */ r_ebx = 0xa8e5b0u;
    /* 006084f7: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006084fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006084fc: je 0x608685 */ if (fZ) goto L_00608685;
L_00608502:; BB(0x00608502);
    /* 00608502: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608504: jge 0x6086d9 */ if ((fS==fO)) goto L_006086d9;
L_0060850a:; BB(0x0060850a);
    /* 0060850a: mov eax, 5 */ r_eax = 0x5u;
    /* 0060850f: mov ebx, 0xa8e5d4 */ r_ebx = 0xa8e5d4u;
    /* 00608514: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608517: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608519: je 0x608685 */ if (fZ) goto L_00608685;
L_0060851f:; BB(0x0060851f);
    /* 0060851f: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608521: jge 0x6086d9 */ if ((fS==fO)) goto L_006086d9;
L_00608527:; BB(0x00608527);
    /* 00608527: mov eax, 6 */ r_eax = 0x6u;
    /* 0060852c: mov ebx, 0xa8e5f8 */ r_ebx = 0xa8e5f8u;
    /* 00608531: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608534: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608536: je 0x608685 */ if (fZ) goto L_00608685;
L_0060853c:; BB(0x0060853c);
    /* 0060853c: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060853e: jge 0x6086d9 */ if ((fS==fO)) goto L_006086d9;
L_00608544:; BB(0x00608544);
    /* 00608544: mov eax, 7 */ r_eax = 0x7u;
    /* 00608549: mov ebx, 0xa8e61c */ r_ebx = 0xa8e61cu;
    /* 0060854e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608551: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608553: je 0x608685 */ if (fZ) goto L_00608685;
L_00608559:; BB(0x00608559);
    /* 00608559: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060855b: jge 0x6086d9 */ if ((fS==fO)) goto L_006086d9;
L_00608561:; BB(0x00608561);
    /* 00608561: mov eax, 8 */ r_eax = 0x8u;
    /* 00608566: mov ebx, 0xa8e640 */ r_ebx = 0xa8e640u;
    /* 0060856b: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 0060856e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608570: je 0x608685 */ if (fZ) goto L_00608685;
L_00608576:; BB(0x00608576);
    /* 00608576: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608578: jge 0x6086d9 */ if ((fS==fO)) goto L_006086d9;
L_0060857e:; BB(0x0060857e);
    /* 0060857e: mov eax, 9 */ r_eax = 0x9u;
    /* 00608583: mov ebx, 0xa8e664 */ r_ebx = 0xa8e664u;
    /* 00608588: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 0060858b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060858d: je 0x608685 */ if (fZ) goto L_00608685;
L_00608593:; BB(0x00608593);
    /* 00608593: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608595: jge 0x6086d9 */ if ((fS==fO)) goto L_006086d9;
L_0060859b:; BB(0x0060859b);
    /* 0060859b: mov eax, 0xa */ r_eax = 0xau;
    /* 006085a0: mov ebx, 0xa8e688 */ r_ebx = 0xa8e688u;
    /* 006085a5: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006085a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006085aa: je 0x608685 */ if (fZ) goto L_00608685;
L_006085b0:; BB(0x006085b0);
    /* 006085b0: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006085b2: jge 0x6086d9 */ if ((fS==fO)) goto L_006086d9;
L_006085b8:; BB(0x006085b8);
    /* 006085b8: mov eax, 0xb */ r_eax = 0xbu;
    /* 006085bd: mov ebx, 0xa8e6ac */ r_ebx = 0xa8e6acu;
    /* 006085c2: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006085c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006085c7: je 0x608685 */ if (fZ) goto L_00608685;
L_006085cd:; BB(0x006085cd);
    /* 006085cd: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006085cf: jge 0x6086d9 */ if ((fS==fO)) goto L_006086d9;
L_006085d5:; BB(0x006085d5);
    /* 006085d5: mov eax, 0xc */ r_eax = 0xcu;
    /* 006085da: mov ebx, 0xa8e6d0 */ r_ebx = 0xa8e6d0u;
    /* 006085df: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006085e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006085e4: je 0x608685 */ if (fZ) goto L_00608685;
L_006085ea:; BB(0x006085ea);
    /* 006085ea: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006085ec: jge 0x6086d9 */ if ((fS==fO)) goto L_006086d9;
L_006085f2:; BB(0x006085f2);
    /* 006085f2: mov eax, 0xd */ r_eax = 0xdu;
    /* 006085f7: mov ebx, 0xa8e6f4 */ r_ebx = 0xa8e6f4u;
    /* 006085fc: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006085ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608601: je 0x608685 */ if (fZ) goto L_00608685;
L_00608607:; BB(0x00608607);
    /* 00608607: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608609: jge 0x6086d9 */ if ((fS==fO)) goto L_006086d9;
L_0060860f:; BB(0x0060860f);
    /* 0060860f: mov eax, 0xe */ r_eax = 0xeu;
    /* 00608614: mov ebx, 0xa8e718 */ r_ebx = 0xa8e718u;
    /* 00608619: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 0060861c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060861e: je 0x608685 */ if (fZ) goto L_00608685;
L_00608620:; BB(0x00608620);
    /* 00608620: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608622: jge 0x6086d9 */ if ((fS==fO)) goto L_006086d9;
L_00608628:; BB(0x00608628);
    /* 00608628: mov eax, 0xf */ r_eax = 0xfu;
    /* 0060862d: mov ebx, 0xa8e73c */ r_ebx = 0xa8e73cu;
    /* 00608632: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608635: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608637: je 0x608685 */ if (fZ) goto L_00608685;
L_00608639:; BB(0x00608639);
    /* 00608639: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060863b: jge 0x6086d9 */ if ((fS==fO)) goto L_006086d9;
L_00608641:; BB(0x00608641);
    /* 00608641: mov eax, 0x10 */ r_eax = 0x10u;
L_00608646:; BB(0x00608646);
    /* 00608646: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608649: jge 0x608683 */ if ((fS==fO)) goto L_00608683;
L_0060864b:; BB(0x0060864b);
    /* 0060864b: movsx edx, word ptr [0xa8e73c] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa8e73cu));
    /* 00608652: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608654: jne 0x60867f */ if (!fZ) goto L_0060867f;
L_00608656:; BB(0x00608656);
    /* 00608656: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608659: jge 0x608676 */ if ((fS==fO)) goto L_00608676;
L_0060865b:; BB(0x0060865b);
    /* 0060865b: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0060865e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00608660: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00608662: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00608664: lea eax, [eax + eax*8 + 0x21c] */ r_eax = (u32)(r_eax+r_eax*8+0x21cu);
    /* 0060866b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060866c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060866d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060866e: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x608673u); f_00858c80();
    /* 00608673: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00608676:; BB(0x00608676);
    /* 00608676: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00608678: call 0x608c80 */ r_esp -= 4; W32(r_esp, 0x60867du); f_00608c80();
    /* 0060867d: jmp 0x608685 */ goto L_00608685;
L_0060867f:; BB(0x0060867f);
    /* 0060867f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00608681: jmp 0x608685 */ goto L_00608685;
L_00608683:; BB(0x00608683);
    /* 00608683: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00608685:; BB(0x00608685);
    /* 00608685: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00608687: je 0x6086e3 */ if (fZ) goto L_006086e3;
L_00608689:; BB(0x00608689);
    /* 00608689: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0060868d: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 00608690: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00608694: mov eax, 1 */ r_eax = 0x1u;
    /* 00608699: mov word ptr [ebx + 2], ax */ W16((u32)(r_ebx+0x2u), (u16)r_eax);
    /* 0060869d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006086a1: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 006086a4: mov dword ptr [ebx + 8], esi */ W32((u32)(r_ebx+0x8u), r_esi);
    /* 006086a7: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 006086aa: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006086ae: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 006086b1: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006086b4: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 006086b7: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 006086ba: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 006086bd: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006086c1: mov word ptr [ebx + 0x1c], ax */ W16((u32)(r_ebx+0x1cu), (u16)r_eax);
    /* 006086c5: movzx eax, word ptr [ebp + 0xa] */ r_eax = (u32)R16((u32)(r_ebp+0xau));
    /* 006086c9: mov word ptr [ebx + 0x1e], ax */ W16((u32)(r_ebx+0x1eu), (u16)r_eax);
    /* 006086cd: movzx ebp, word ptr [ebp + 0xc] */ r_ebp = (u32)R16((u32)(r_ebp+0xcu));
    /* 006086d1: mov word ptr [ebx + 0x20], bp */ W16((u32)(r_ebx+0x20u), (u16)r_ebp);
    /* 006086d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006086d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006086d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006086d8: ret  */ FN_RET(0x00608470); r_esp += 4; return;
L_006086d9:; BB(0x006086d9);
    /* 006086d9: jne 0x608646 */ if (!fZ) goto L_00608646;
L_006086df:; BB(0x006086df);
    /* 006086df: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006086e1: jmp 0x608685 */ goto L_00608685;
L_006086e3:; BB(0x006086e3);
    /* 006086e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006086e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006086e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006086e6: ret  */ FN_RET(0x00608470); r_esp += 4; return;
}

void f_006086e8(void) /* sub_6086E8 */
{
    FN_ENTER(0x006086e8);
    /* 006086e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006086e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006086ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006086ec: movsx edi, word ptr [esp + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 006086f1: mov ebp, 0xa8e520 */ r_ebp = 0xa8e520u;
    /* 006086f6: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 006086fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006086fc: je 0x608908 */ if (fZ) goto L_00608908;
L_00608702:; BB(0x00608702);
    /* 00608702: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608704: jge 0x60894c */ if ((fS==fO)) goto L_0060894c;
L_0060870a:; BB(0x0060870a);
    /* 0060870a: mov eax, 1 */ r_eax = 0x1u;
    /* 0060870f: mov ebp, 0xa8e544 */ r_ebp = 0xa8e544u;
    /* 00608714: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00608718: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060871a: je 0x608908 */ if (fZ) goto L_00608908;
L_00608720:; BB(0x00608720);
    /* 00608720: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608722: jge 0x60894c */ if ((fS==fO)) goto L_0060894c;
L_00608728:; BB(0x00608728);
    /* 00608728: mov eax, 2 */ r_eax = 0x2u;
    /* 0060872d: mov ebp, 0xa8e568 */ r_ebp = 0xa8e568u;
    /* 00608732: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00608736: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608738: je 0x608908 */ if (fZ) goto L_00608908;
L_0060873e:; BB(0x0060873e);
    /* 0060873e: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608740: jge 0x60894c */ if ((fS==fO)) goto L_0060894c;
L_00608746:; BB(0x00608746);
    /* 00608746: mov eax, 3 */ r_eax = 0x3u;
    /* 0060874b: mov ebp, 0xa8e58c */ r_ebp = 0xa8e58cu;
    /* 00608750: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00608754: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608756: je 0x608908 */ if (fZ) goto L_00608908;
L_0060875c:; BB(0x0060875c);
    /* 0060875c: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060875e: jge 0x60894c */ if ((fS==fO)) goto L_0060894c;
L_00608764:; BB(0x00608764);
    /* 00608764: mov eax, 4 */ r_eax = 0x4u;
    /* 00608769: mov ebp, 0xa8e5b0 */ r_ebp = 0xa8e5b0u;
    /* 0060876e: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00608772: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608774: je 0x608908 */ if (fZ) goto L_00608908;
L_0060877a:; BB(0x0060877a);
    /* 0060877a: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060877c: jge 0x60894c */ if ((fS==fO)) goto L_0060894c;
L_00608782:; BB(0x00608782);
    /* 00608782: mov eax, 5 */ r_eax = 0x5u;
    /* 00608787: mov ebp, 0xa8e5d4 */ r_ebp = 0xa8e5d4u;
    /* 0060878c: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00608790: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608792: je 0x608908 */ if (fZ) goto L_00608908;
L_00608798:; BB(0x00608798);
    /* 00608798: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060879a: jge 0x60894c */ if ((fS==fO)) goto L_0060894c;
L_006087a0:; BB(0x006087a0);
    /* 006087a0: mov eax, 6 */ r_eax = 0x6u;
    /* 006087a5: mov ebp, 0xa8e5f8 */ r_ebp = 0xa8e5f8u;
    /* 006087aa: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 006087ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006087b0: je 0x608908 */ if (fZ) goto L_00608908;
L_006087b6:; BB(0x006087b6);
    /* 006087b6: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006087b8: jge 0x60894c */ if ((fS==fO)) goto L_0060894c;
L_006087be:; BB(0x006087be);
    /* 006087be: mov eax, 7 */ r_eax = 0x7u;
    /* 006087c3: mov ebp, 0xa8e61c */ r_ebp = 0xa8e61cu;
    /* 006087c8: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 006087cc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006087ce: je 0x608908 */ if (fZ) goto L_00608908;
L_006087d4:; BB(0x006087d4);
    /* 006087d4: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006087d6: jge 0x60894c */ if ((fS==fO)) goto L_0060894c;
L_006087dc:; BB(0x006087dc);
    /* 006087dc: mov eax, 8 */ r_eax = 0x8u;
    /* 006087e1: mov ebp, 0xa8e640 */ r_ebp = 0xa8e640u;
    /* 006087e6: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 006087ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006087ec: je 0x608908 */ if (fZ) goto L_00608908;
L_006087f2:; BB(0x006087f2);
    /* 006087f2: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006087f4: jge 0x60894c */ if ((fS==fO)) goto L_0060894c;
L_006087fa:; BB(0x006087fa);
    /* 006087fa: mov eax, 9 */ r_eax = 0x9u;
    /* 006087ff: mov ebp, 0xa8e664 */ r_ebp = 0xa8e664u;
    /* 00608804: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00608808: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060880a: je 0x608908 */ if (fZ) goto L_00608908;
L_00608810:; BB(0x00608810);
    /* 00608810: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608812: jge 0x60894c */ if ((fS==fO)) goto L_0060894c;
L_00608818:; BB(0x00608818);
    /* 00608818: mov eax, 0xa */ r_eax = 0xau;
    /* 0060881d: mov ebp, 0xa8e688 */ r_ebp = 0xa8e688u;
    /* 00608822: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00608826: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608828: je 0x608908 */ if (fZ) goto L_00608908;
L_0060882e:; BB(0x0060882e);
    /* 0060882e: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608830: jge 0x60894c */ if ((fS==fO)) goto L_0060894c;
L_00608836:; BB(0x00608836);
    /* 00608836: mov eax, 0xb */ r_eax = 0xbu;
    /* 0060883b: mov ebp, 0xa8e6ac */ r_ebp = 0xa8e6acu;
    /* 00608840: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00608844: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608846: je 0x608908 */ if (fZ) goto L_00608908;
L_0060884c:; BB(0x0060884c);
    /* 0060884c: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060884e: jge 0x60894c */ if ((fS==fO)) goto L_0060894c;
L_00608854:; BB(0x00608854);
    /* 00608854: mov eax, 0xc */ r_eax = 0xcu;
    /* 00608859: mov ebp, 0xa8e6d0 */ r_ebp = 0xa8e6d0u;
    /* 0060885e: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00608862: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608864: je 0x608908 */ if (fZ) goto L_00608908;
L_0060886a:; BB(0x0060886a);
    /* 0060886a: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060886c: jge 0x60894c */ if ((fS==fO)) goto L_0060894c;
L_00608872:; BB(0x00608872);
    /* 00608872: mov eax, 0xd */ r_eax = 0xdu;
    /* 00608877: mov ebp, 0xa8e6f4 */ r_ebp = 0xa8e6f4u;
    /* 0060887c: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00608880: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608882: je 0x608908 */ if (fZ) goto L_00608908;
L_00608888:; BB(0x00608888);
    /* 00608888: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060888a: jge 0x60894c */ if ((fS==fO)) goto L_0060894c;
L_00608890:; BB(0x00608890);
    /* 00608890: mov eax, 0xe */ r_eax = 0xeu;
    /* 00608895: mov ebp, 0xa8e718 */ r_ebp = 0xa8e718u;
    /* 0060889a: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0060889e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006088a0: je 0x608908 */ if (fZ) goto L_00608908;
L_006088a2:; BB(0x006088a2);
    /* 006088a2: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006088a4: jge 0x60894c */ if ((fS==fO)) goto L_0060894c;
L_006088aa:; BB(0x006088aa);
    /* 006088aa: mov eax, 0xf */ r_eax = 0xfu;
    /* 006088af: mov ebp, 0xa8e73c */ r_ebp = 0xa8e73cu;
    /* 006088b4: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 006088b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006088ba: je 0x608908 */ if (fZ) goto L_00608908;
L_006088bc:; BB(0x006088bc);
    /* 006088bc: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006088be: jge 0x60894c */ if ((fS==fO)) goto L_0060894c;
L_006088c4:; BB(0x006088c4);
    /* 006088c4: mov eax, 0x10 */ r_eax = 0x10u;
L_006088c9:; BB(0x006088c9);
    /* 006088c9: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006088cc: jge 0x608906 */ if ((fS==fO)) goto L_00608906;
L_006088ce:; BB(0x006088ce);
    /* 006088ce: movsx edx, word ptr [0xa8e73c] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa8e73cu));
    /* 006088d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006088d7: jne 0x608902 */ if (!fZ) goto L_00608902;
L_006088d9:; BB(0x006088d9);
    /* 006088d9: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006088dc: jge 0x6088f9 */ if ((fS==fO)) goto L_006088f9;
L_006088de:; BB(0x006088de);
    /* 006088de: lea edx, [ebp + 0x24] */ r_edx = (u32)(r_ebp+0x24u);
    /* 006088e1: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006088e3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006088e5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006088e7: lea eax, [eax + eax*8 + 0x21c] */ r_eax = (u32)(r_eax+r_eax*8+0x21cu);
    /* 006088ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006088ef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006088f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006088f1: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x6088f6u); f_00858c80();
    /* 006088f6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006088f9:; BB(0x006088f9);
    /* 006088f9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006088fb: call 0x608c80 */ r_esp -= 4; W32(r_esp, 0x608900u); f_00608c80();
    /* 00608900: jmp 0x608908 */ goto L_00608908;
L_00608902:; BB(0x00608902);
    /* 00608902: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00608904: jmp 0x608908 */ goto L_00608908;
L_00608906:; BB(0x00608906);
    /* 00608906: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00608908:; BB(0x00608908);
    /* 00608908: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060890a: je 0x608956 */ if (fZ) goto L_00608956;
L_0060890c:; BB(0x0060890c);
    /* 0060890c: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00608910: mov word ptr [ebp], di */ W16((u32)(r_ebp), (u16)r_edi);
    /* 00608914: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00608918: mov eax, 2 */ r_eax = 0x2u;
    /* 0060891d: mov word ptr [ebp + 2], ax */ W16((u32)(r_ebp+0x2u), (u16)r_eax);
    /* 00608921: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00608925: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 00608928: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 0060892b: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0060892e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00608932: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 00608935: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00608937: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 0060893a: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 0060893d: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00608941: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00608945: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 00608949: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060894a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0060894b: ret  */ FN_RET(0x006086e8); r_esp += 4; return;
L_0060894c:; BB(0x0060894c);
    /* 0060894c: jne 0x6088c9 */ if (!fZ) goto L_006088c9;
L_00608952:; BB(0x00608952);
    /* 00608952: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00608954: jmp 0x608908 */ goto L_00608908;
L_00608956:; BB(0x00608956);
    /* 00608956: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608957: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00608958: ret  */ FN_RET(0x006086e8); r_esp += 4; return;
}

void f_0060895c(void) /* sub_60895C */
{
    FN_ENTER(0x0060895c);
    /* 0060895c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0060895d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060895e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060895f: movsx esi, word ptr [esp + 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00608964: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00608968: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060896a: mov ebx, 0xa8e520 */ r_ebx = 0xa8e520u;
    /* 0060896f: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608972: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608974: je 0x608b71 */ if (fZ) goto L_00608b71;
L_0060897a:; BB(0x0060897a);
    /* 0060897a: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060897c: jge 0x608bc5 */ if ((fS==fO)) goto L_00608bc5;
L_00608982:; BB(0x00608982);
    /* 00608982: mov eax, 1 */ r_eax = 0x1u;
    /* 00608987: mov ebx, 0xa8e544 */ r_ebx = 0xa8e544u;
    /* 0060898c: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 0060898f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608991: je 0x608b71 */ if (fZ) goto L_00608b71;
L_00608997:; BB(0x00608997);
    /* 00608997: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608999: jge 0x608bc5 */ if ((fS==fO)) goto L_00608bc5;
L_0060899f:; BB(0x0060899f);
    /* 0060899f: mov eax, 2 */ r_eax = 0x2u;
    /* 006089a4: mov ebx, 0xa8e568 */ r_ebx = 0xa8e568u;
    /* 006089a9: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006089ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006089ae: je 0x608b71 */ if (fZ) goto L_00608b71;
L_006089b4:; BB(0x006089b4);
    /* 006089b4: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006089b6: jge 0x608bc5 */ if ((fS==fO)) goto L_00608bc5;
L_006089bc:; BB(0x006089bc);
    /* 006089bc: mov eax, 3 */ r_eax = 0x3u;
    /* 006089c1: mov ebx, 0xa8e58c */ r_ebx = 0xa8e58cu;
    /* 006089c6: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006089c9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006089cb: je 0x608b71 */ if (fZ) goto L_00608b71;
L_006089d1:; BB(0x006089d1);
    /* 006089d1: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006089d3: jge 0x608bc5 */ if ((fS==fO)) goto L_00608bc5;
L_006089d9:; BB(0x006089d9);
    /* 006089d9: mov eax, 4 */ r_eax = 0x4u;
    /* 006089de: mov ebx, 0xa8e5b0 */ r_ebx = 0xa8e5b0u;
    /* 006089e3: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006089e6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006089e8: je 0x608b71 */ if (fZ) goto L_00608b71;
L_006089ee:; BB(0x006089ee);
    /* 006089ee: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006089f0: jge 0x608bc5 */ if ((fS==fO)) goto L_00608bc5;
L_006089f6:; BB(0x006089f6);
    /* 006089f6: mov eax, 5 */ r_eax = 0x5u;
    /* 006089fb: mov ebx, 0xa8e5d4 */ r_ebx = 0xa8e5d4u;
    /* 00608a00: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608a03: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608a05: je 0x608b71 */ if (fZ) goto L_00608b71;
L_00608a0b:; BB(0x00608a0b);
    /* 00608a0b: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608a0d: jge 0x608bc5 */ if ((fS==fO)) goto L_00608bc5;
L_00608a13:; BB(0x00608a13);
    /* 00608a13: mov eax, 6 */ r_eax = 0x6u;
    /* 00608a18: mov ebx, 0xa8e5f8 */ r_ebx = 0xa8e5f8u;
    /* 00608a1d: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608a20: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608a22: je 0x608b71 */ if (fZ) goto L_00608b71;
L_00608a28:; BB(0x00608a28);
    /* 00608a28: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608a2a: jge 0x608bc5 */ if ((fS==fO)) goto L_00608bc5;
L_00608a30:; BB(0x00608a30);
    /* 00608a30: mov eax, 7 */ r_eax = 0x7u;
    /* 00608a35: mov ebx, 0xa8e61c */ r_ebx = 0xa8e61cu;
    /* 00608a3a: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608a3d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608a3f: je 0x608b71 */ if (fZ) goto L_00608b71;
L_00608a45:; BB(0x00608a45);
    /* 00608a45: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608a47: jge 0x608bc5 */ if ((fS==fO)) goto L_00608bc5;
L_00608a4d:; BB(0x00608a4d);
    /* 00608a4d: mov eax, 8 */ r_eax = 0x8u;
    /* 00608a52: mov ebx, 0xa8e640 */ r_ebx = 0xa8e640u;
    /* 00608a57: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608a5a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608a5c: je 0x608b71 */ if (fZ) goto L_00608b71;
L_00608a62:; BB(0x00608a62);
    /* 00608a62: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608a64: jge 0x608bc5 */ if ((fS==fO)) goto L_00608bc5;
L_00608a6a:; BB(0x00608a6a);
    /* 00608a6a: mov eax, 9 */ r_eax = 0x9u;
    /* 00608a6f: mov ebx, 0xa8e664 */ r_ebx = 0xa8e664u;
    /* 00608a74: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608a77: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608a79: je 0x608b71 */ if (fZ) goto L_00608b71;
L_00608a7f:; BB(0x00608a7f);
    /* 00608a7f: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608a81: jge 0x608bc5 */ if ((fS==fO)) goto L_00608bc5;
L_00608a87:; BB(0x00608a87);
    /* 00608a87: mov eax, 0xa */ r_eax = 0xau;
    /* 00608a8c: mov ebx, 0xa8e688 */ r_ebx = 0xa8e688u;
    /* 00608a91: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608a94: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608a96: je 0x608b71 */ if (fZ) goto L_00608b71;
L_00608a9c:; BB(0x00608a9c);
    /* 00608a9c: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608a9e: jge 0x608bc5 */ if ((fS==fO)) goto L_00608bc5;
L_00608aa4:; BB(0x00608aa4);
    /* 00608aa4: mov eax, 0xb */ r_eax = 0xbu;
    /* 00608aa9: mov ebx, 0xa8e6ac */ r_ebx = 0xa8e6acu;
    /* 00608aae: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608ab1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608ab3: je 0x608b71 */ if (fZ) goto L_00608b71;
L_00608ab9:; BB(0x00608ab9);
    /* 00608ab9: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608abb: jge 0x608bc5 */ if ((fS==fO)) goto L_00608bc5;
L_00608ac1:; BB(0x00608ac1);
    /* 00608ac1: mov eax, 0xc */ r_eax = 0xcu;
    /* 00608ac6: mov ebx, 0xa8e6d0 */ r_ebx = 0xa8e6d0u;
    /* 00608acb: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608ace: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608ad0: je 0x608b71 */ if (fZ) goto L_00608b71;
L_00608ad6:; BB(0x00608ad6);
    /* 00608ad6: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608ad8: jge 0x608bc5 */ if ((fS==fO)) goto L_00608bc5;
L_00608ade:; BB(0x00608ade);
    /* 00608ade: mov eax, 0xd */ r_eax = 0xdu;
    /* 00608ae3: mov ebx, 0xa8e6f4 */ r_ebx = 0xa8e6f4u;
    /* 00608ae8: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608aeb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608aed: je 0x608b71 */ if (fZ) goto L_00608b71;
L_00608af3:; BB(0x00608af3);
    /* 00608af3: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608af5: jge 0x608bc5 */ if ((fS==fO)) goto L_00608bc5;
L_00608afb:; BB(0x00608afb);
    /* 00608afb: mov eax, 0xe */ r_eax = 0xeu;
    /* 00608b00: mov ebx, 0xa8e718 */ r_ebx = 0xa8e718u;
    /* 00608b05: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608b08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608b0a: je 0x608b71 */ if (fZ) goto L_00608b71;
L_00608b0c:; BB(0x00608b0c);
    /* 00608b0c: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608b0e: jge 0x608bc5 */ if ((fS==fO)) goto L_00608bc5;
L_00608b14:; BB(0x00608b14);
    /* 00608b14: mov eax, 0xf */ r_eax = 0xfu;
    /* 00608b19: mov ebx, 0xa8e73c */ r_ebx = 0xa8e73cu;
    /* 00608b1e: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00608b21: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608b23: je 0x608b71 */ if (fZ) goto L_00608b71;
L_00608b25:; BB(0x00608b25);
    /* 00608b25: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608b27: jge 0x608bc5 */ if ((fS==fO)) goto L_00608bc5;
L_00608b2d:; BB(0x00608b2d);
    /* 00608b2d: mov eax, 0x10 */ r_eax = 0x10u;
L_00608b32:; BB(0x00608b32);
    /* 00608b32: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608b35: jge 0x608b6f */ if ((fS==fO)) goto L_00608b6f;
L_00608b37:; BB(0x00608b37);
    /* 00608b37: movsx edx, word ptr [0xa8e73c] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa8e73cu));
    /* 00608b3e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608b40: jne 0x608b6b */ if (!fZ) goto L_00608b6b;
L_00608b42:; BB(0x00608b42);
    /* 00608b42: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608b45: jge 0x608b62 */ if ((fS==fO)) goto L_00608b62;
L_00608b47:; BB(0x00608b47);
    /* 00608b47: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 00608b4a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00608b4c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00608b4e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00608b50: lea eax, [eax + eax*8 + 0x21c] */ r_eax = (u32)(r_eax+r_eax*8+0x21cu);
    /* 00608b57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608b58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00608b59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00608b5a: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x608b5fu); f_00858c80();
    /* 00608b5f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00608b62:; BB(0x00608b62);
    /* 00608b62: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00608b64: call 0x608c80 */ r_esp -= 4; W32(r_esp, 0x608b69u); f_00608c80();
    /* 00608b69: jmp 0x608b71 */ goto L_00608b71;
L_00608b6b:; BB(0x00608b6b);
    /* 00608b6b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00608b6d: jmp 0x608b71 */ goto L_00608b71;
L_00608b6f:; BB(0x00608b6f);
    /* 00608b6f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00608b71:; BB(0x00608b71);
    /* 00608b71: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00608b73: je 0x608bcf */ if (fZ) goto L_00608bcf;
L_00608b75:; BB(0x00608b75);
    /* 00608b75: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00608b79: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 00608b7c: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00608b80: mov eax, 3 */ r_eax = 0x3u;
    /* 00608b85: mov word ptr [ebx + 2], ax */ W16((u32)(r_ebx+0x2u), (u16)r_eax);
    /* 00608b89: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00608b8d: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00608b90: mov dword ptr [ebx + 8], esi */ W32((u32)(r_ebx+0x8u), r_esi);
    /* 00608b93: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 00608b96: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00608b9a: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 00608b9d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00608ba0: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 00608ba3: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00608ba6: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 00608ba9: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00608bad: mov word ptr [ebx + 0x1c], ax */ W16((u32)(r_ebx+0x1cu), (u16)r_eax);
    /* 00608bb1: movzx eax, word ptr [ebp + 0xa] */ r_eax = (u32)R16((u32)(r_ebp+0xau));
    /* 00608bb5: mov word ptr [ebx + 0x1e], ax */ W16((u32)(r_ebx+0x1eu), (u16)r_eax);
    /* 00608bb9: movzx ebp, word ptr [ebp + 0xc] */ r_ebp = (u32)R16((u32)(r_ebp+0xcu));
    /* 00608bbd: mov word ptr [ebx + 0x20], bp */ W16((u32)(r_ebx+0x20u), (u16)r_ebp);
    /* 00608bc1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00608bc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608bc3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00608bc4: ret  */ FN_RET(0x0060895c); r_esp += 4; return;
L_00608bc5:; BB(0x00608bc5);
    /* 00608bc5: jne 0x608b32 */ if (!fZ) goto L_00608b32;
L_00608bcb:; BB(0x00608bcb);
    /* 00608bcb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00608bcd: jmp 0x608b71 */ goto L_00608b71;
L_00608bcf:; BB(0x00608bcf);
    /* 00608bcf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00608bd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608bd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00608bd2: ret  */ FN_RET(0x0060895c); r_esp += 4; return;
}

void f_00608bd4(void) /* sub_608BD4 */
{
    FN_ENTER(0x00608bd4);
    /* 00608bd4: call 0x608bdc */ r_esp -= 4; W32(r_esp, 0x608bd9u); f_00608bdc();
    /* 00608bd9: ret  */ FN_RET(0x00608bd4); r_esp += 4; return;
}

void f_00608bdc(void) /* sub_608BDC */
{
    FN_ENTER(0x00608bdc);
    /* 00608bdc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00608bdd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00608bdf: mov ebx, eax */ r_ebx = r_eax;
L_00608be1:; BB(0x00608be1);
    /* 00608be1: lea ecx, [ebx + 0xa8e520] */ r_ecx = (u32)(r_ebx+0xa8e520u);
    /* 00608be7: call 0x608c80 */ r_esp -= 4; W32(r_esp, 0x608becu); f_00608c80();
    /* 00608bec: add ebx, 0x24 */ {  u32 a = r_ebx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00608bef: cmp ebx, 0x240 */ {  u32 a = r_ebx; u32 b = 0x240u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00608bf5: jl 0x608be1 */ if ((fS!=fO)) goto L_00608be1;
L_00608bf7:; BB(0x00608bf7);
    /* 00608bf7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00608bf8: ret  */ FN_RET(0x00608bdc); r_esp += 4; return;
}

void f_00608bfc(void) /* sub_608BFC */
{
    FN_ENTER(0x00608bfc);
    /* 00608bfc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00608bfd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00608bfe: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00608c00: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00608c04: mov dword ptr [ebx + 0x3c0], eax */ W32((u32)(r_ebx+0x3c0u), r_eax);
    /* 00608c0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608c0c: je 0x608c5c */ if (fZ) goto L_00608c5c;
L_00608c0e:; BB(0x00608c0e);
    /* 00608c0e: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 00608c11: lea edx, [eax + 0x14] */ r_edx = (u32)(r_eax+0x14u);
    /* 00608c14: mov dword ptr [ebx + 0x34], esi */ W32((u32)(r_ebx+0x34u), r_esi);
    /* 00608c17: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00608c1a: mov dword ptr [ebx + 0x24], esi */ W32((u32)(r_ebx+0x24u), r_esi);
    /* 00608c1d: movsx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 00608c21: mov word ptr [ebx + 0xb8], cx */ W16((u32)(r_ebx+0xb8u), (u16)r_ecx);
    /* 00608c28: movzx esi, word ptr [eax + 2] */ r_esi = (u32)R16((u32)(r_eax+0x2u));
    /* 00608c2c: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608c2f: je 0x608c47 */ if (fZ) goto L_00608c47;
L_00608c31:; BB(0x00608c31);
    /* 00608c31: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00608c34: je 0x608c47 */ if (fZ) goto L_00608c47;
L_00608c36:; BB(0x00608c36);
    /* 00608c36: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 00608c3c: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 00608c3f: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00608c42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00608c43: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00608c44: ret 4 */ FN_RET(0x00608bfc); r_esp += 8; return;
L_00608c47:; BB(0x00608c47);
    /* 00608c47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608c48: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00608c4a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00608c4c: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00608c4f: call 0x7aa624 */ r_esp -= 4; W32(r_esp, 0x608c54u); f_007aa624();
    /* 00608c54: mov eax, dword ptr [ebx + 0x3c0] */ r_eax = R32((u32)(r_ebx+0x3c0u));
    /* 00608c5a: jmp 0x608c36 */ goto L_00608c36;
L_00608c5c:; BB(0x00608c5c);
    /* 00608c5c: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 00608c62: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00608c64: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 00608c67: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 00608c6a: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00608c71: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 00608c78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00608c79: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00608c7a: ret 4 */ FN_RET(0x00608bfc); r_esp += 8; return;
}

void f_00608c80(void) /* sub_608C80 */
{
    FN_ENTER(0x00608c80);
    /* 00608c80: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 00608c87: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00608c89: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00608c90: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00608c93: mov eax, 4 */ r_eax = 0x4u;
    /* 00608c98: mov word ptr [ecx + 2], ax */ W16((u32)(r_ecx+0x2u), (u16)r_eax);
    /* 00608c9c: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00608c9f: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00608ca2: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 00608ca5: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 00608ca8: mov word ptr [ecx + 0x1c], dx */ W16((u32)(r_ecx+0x1cu), (u16)r_edx);
    /* 00608cac: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 00608cb0: mov word ptr [ecx + 0x20], dx */ W16((u32)(r_ecx+0x20u), (u16)r_edx);
    /* 00608cb4: ret  */ FN_RET(0x00608c80); r_esp += 4; return;
}

void f_00608cb8(void) /* sub_608CB8 */
{
    FN_ENTER(0x00608cb8);
    /* 00608cb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00608cb9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00608cbb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00608cbd: call 0x608cdc */ r_esp -= 4; W32(r_esp, 0x608cc2u); f_00608cdc();
    /* 00608cc2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00608cc6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00608cc8: jne 0x608cce */ if (!fZ) goto L_00608cce;
L_00608cca:; BB(0x00608cca);
    /* 00608cca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00608ccb: ret 4 */ FN_RET(0x00608cb8); r_esp += 8; return;
L_00608cce:; BB(0x00608cce);
    /* 00608cce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00608ccf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x608cd4u); f_005c2f74();
    /* 00608cd4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00608cd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00608cd6: ret 4 */ FN_RET(0x00608cb8); r_esp += 8; return;
}

void f_00608cdc(void) /* sub_608CDC */
{
    FN_ENTER(0x00608cdc);
    /* 00608cdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608cdd: mov ebp, esp */ r_ebp = r_esp;
    /* 00608cdf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00608ce1: push 0x8df1c4 */ { u32 v = 0x8df1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00608ce6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00608cec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608ced: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00608cf4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00608cf7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00608cfa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00608cfd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00608d00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00608d03: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00608d06: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00608d09: mov dword ptr [ecx], 0xb1e8c0 */ W32((u32)(r_ecx), 0xb1e8c0u);
    /* 00608d0f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00608d16: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x608d1bu); f_0060c7e4();
    /* 00608d1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00608d1e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00608d25: mov esp, ebp */ r_esp = r_ebp;
    /* 00608d27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608d28: ret  */ FN_RET(0x00608cdc); r_esp += 4; return;
}

void f_00608d2c(void) /* sub_608D2C */
{
    FN_ENTER(0x00608d2c);
    /* 00608d2c: mov ecx, dword ptr [0xa8e780] */ r_ecx = R32((u32)(0xa8e780u));
    /* 00608d32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00608d34: je 0x608d49 */ if (fZ) goto L_00608d49;
L_00608d36:; BB(0x00608d36);
    /* 00608d36: je 0x608d3f */ if (fZ) goto L_00608d3f;
L_00608d38:; BB(0x00608d38);
    /* 00608d38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00608d3a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x608d3fu); f_004066a8();
L_00608d3f:; BB(0x00608d3f);
    /* 00608d3f: mov dword ptr [0xa8e780], 0 */ W32((u32)(0xa8e780u), 0x0u);
L_00608d49:; BB(0x00608d49);
    /* 00608d49: ret  */ FN_RET(0x00608d2c); r_esp += 4; return;
}

void f_00608d4c(void)
{
    FN_ENTER(0x00608d4c);
    /* 00608d4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608d4d: mov ebp, esp */ r_ebp = r_esp;
    /* 00608d4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00608d51: push 0x8df206 */ { u32 v = 0x8df206u; r_esp -= 4; W32(r_esp, v); }
    /* 00608d56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00608d5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608d5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00608d64: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00608d67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00608d6a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00608d6d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00608d70: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00608d73: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00608d75: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00608d7c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x608d81u); f_005caba4();
    /* 00608d81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00608d82: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00608d85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608d87: je 0x608e0f */ if (fZ) goto L_00608e0f;
L_00608d8d:; BB(0x00608d8d);
    /* 00608d8d: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00608d94: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00608d9b: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00608da1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00608da4: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x608da9u); f_00787a4c();
    /* 00608da9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00608dac: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00608db3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00608db6:; BB(0x00608db6);
    /* 00608db6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00608dbd: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00608dc4: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00608dc9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x608dceu); f_005caba4();
    /* 00608dce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00608dcf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00608dd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608dd4: je 0x608e0b */ if (fZ) goto L_00608e0b;
L_00608dd6:; BB(0x00608dd6);
    /* 00608dd6: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00608ddd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00608de4: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00608de7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00608dea: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00608ded: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608dee: call 0x608e18 */ r_esp -= 4; W32(r_esp, 0x608df3u); f_00608e18();
    /* 00608df3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00608df6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00608dfd:; BB(0x00608dfd);
    /* 00608dfd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00608e00: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00608e07: mov esp, ebp */ r_esp = r_ebp;
    /* 00608e09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608e0a: ret  */ FN_RET(0x00608d4c); r_esp += 4; return;
L_00608e0b:; BB(0x00608e0b);
    /* 00608e0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00608e0d: jmp 0x608dfd */ goto L_00608dfd;
L_00608e0f:; BB(0x00608e0f);
    /* 00608e0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00608e11: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00608e14: jmp 0x608db6 */ goto L_00608db6;
}

void f_00608e18(void) /* sub_608E18 */
{
    FN_ENTER(0x00608e18);
    /* 00608e18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608e19: mov ebp, esp */ r_ebp = r_esp;
    /* 00608e1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00608e1d: push 0x8df220 */ { u32 v = 0x8df220u; r_esp -= 4; W32(r_esp, v); }
    /* 00608e22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00608e28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608e29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00608e30: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00608e33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00608e36: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00608e39: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00608e3c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00608e3f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00608e42: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00608e45: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00608e48: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00608e4b: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x608e50u); f_0060c858();
    /* 00608e50: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00608e57: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00608e5a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00608e5d: mov dword ptr [ecx], 0xb1e8c0 */ W32((u32)(r_ecx), 0xb1e8c0u);
    /* 00608e63: mov eax, dword ptr [0x9c4100] */ r_eax = R32((u32)(0x9c4100u));
    /* 00608e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00608e69: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00608e6c: call dword ptr [0xb1ea0c] */ { u32 t = R32((u32)(0xb1ea0cu)); r_esp -= 4; W32(r_esp, 0x608e72u); call_ind(t); }
    /* 00608e72: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00608e75: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00608e78: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00608e7b: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00608e7e: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00608e84: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00608e8a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00608e8d: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00608e93: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00608e99: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00608e9f: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00608ea5: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00608eab: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00608eb1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00608eb4: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00608eba: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00608ebd: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00608ec3: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00608ec6: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00608ecc: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00608ecf: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00608ed5: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00608ed8: mov edx, dword ptr [0xa8e780] */ r_edx = R32((u32)(0xa8e780u));
    /* 00608ede: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00608ee4: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00608ee7: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00608eea: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00608ef0: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00608ef3: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00608ef6: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x608efbu); f_00606bc8();
    /* 00608efb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00608efe: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00608f01: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00608f04: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00608f07: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00608f0a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00608f11: mov esp, ebp */ r_esp = r_ebp;
    /* 00608f13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608f14: ret 8 */ FN_RET(0x00608e18); r_esp += 12; return;
}

void f_00608f18(void) /* sub_608F18 */
{
    FN_ENTER(0x00608f18);
    /* 00608f18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608f19: mov ebp, esp */ r_ebp = r_esp;
    /* 00608f1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00608f1d: push 0x8df248 */ { u32 v = 0x8df248u; r_esp -= 4; W32(r_esp, v); }
    /* 00608f22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00608f28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608f29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00608f30: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00608f33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00608f36: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00608f39: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00608f3c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00608f3f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00608f44: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00608f4b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x608f50u); f_008581c5();
    /* 00608f50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00608f51: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00608f54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608f56: je 0x608f97 */ if (fZ) goto L_00608f97;
L_00608f58:; BB(0x00608f58);
    /* 00608f58: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00608f5f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00608f66: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00608f69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00608f6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608f6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608f6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608f6e: push 0x9c40f0 */ { u32 v = 0x9c40f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00608f73: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00608f75: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x608f7au); f_005b7a84();
    /* 00608f7a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00608f7d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00608f84:; BB(0x00608f84);
    /* 00608f84: mov dword ptr [0xa8e780], eax */ W32((u32)(0xa8e780u), r_eax);
    /* 00608f89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00608f8c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00608f93: mov esp, ebp */ r_esp = r_ebp;
    /* 00608f95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608f96: ret  */ FN_RET(0x00608f18); r_esp += 4; return;
L_00608f97:; BB(0x00608f97);
    /* 00608f97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00608f99: jmp 0x608f84 */ goto L_00608f84;
}

void f_00608f9c(void) /* sub_608F9C */
{
    FN_ENTER(0x00608f9c);
    /* 00608f9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00608f9d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00608f9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00608fa1: call 0x608fc0 */ r_esp -= 4; W32(r_esp, 0x608fa6u); f_00608fc0();
    /* 00608fa6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00608faa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00608fac: jne 0x608fb2 */ if (!fZ) goto L_00608fb2;
L_00608fae:; BB(0x00608fae);
    /* 00608fae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00608faf: ret 4 */ FN_RET(0x00608f9c); r_esp += 8; return;
L_00608fb2:; BB(0x00608fb2);
    /* 00608fb2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00608fb3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x608fb8u); f_005c2f74();
    /* 00608fb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00608fb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00608fba: ret 4 */ FN_RET(0x00608f9c); r_esp += 8; return;
}

void f_00608fc0(void) /* sub_608FC0 */
{
    FN_ENTER(0x00608fc0);
    /* 00608fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00608fc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00608fc5: push 0x8df264 */ { u32 v = 0x8df264u; r_esp -= 4; W32(r_esp, v); }
    /* 00608fca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00608fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608fd1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00608fd8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00608fdb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00608fde: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00608fe1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00608fe4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00608fe7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00608fea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00608fed: mov dword ptr [ecx], 0xb1eaa0 */ W32((u32)(r_ecx), 0xb1eaa0u);
    /* 00608ff3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00608ffa: call 0x606190 */ r_esp -= 4; W32(r_esp, 0x608fffu); f_00606190();
    /* 00608fff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00609002: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00609009: mov esp, ebp */ r_esp = r_ebp;
    /* 0060900b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060900c: ret  */ FN_RET(0x00608fc0); r_esp += 4; return;
}

