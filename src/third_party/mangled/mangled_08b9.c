#include "protos.h"

void f_008b938c(void) /* ?init_error_limit@D3DX@@YAXPAUjpeg_decompress_struct@1@@Z */
{
    FN_ENTER(0x008b938c);
    /* 008b938c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008b938f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9390: mov esi, dword ptr [eax + 0x1a4] */ r_esi = R32((u32)(r_eax+0x1a4u));
    /* 008b9396: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9397: push 0x7fc */ { u32 v = 0x7fcu; r_esp -= 4; W32(r_esp, v); }
    /* 008b939c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b939e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b939f: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8b93a1u); call_ind(t); }
    /* 008b93a1: add eax, 0x3fc */ {  u32 a = r_eax; u32 b = 0x3fcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b93a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b93a9: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 008b93ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b93ae: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b93b0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008b93b2: mov esi, eax */ r_esi = r_eax;
L_008b93b4:; BB(0x008b93b4);
    /* 008b93b4: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 008b93b7: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008b93b9: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b93ba: sub esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008b93bd: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b93be: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008b93bf: cmp ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b93c2: jl 0x8b93b4 */ if ((fS!=fO)) goto L_008b93b4;
L_008b93c4:; BB(0x008b93c4);
    /* 008b93c4: cmp ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b93c7: jge 0x8b93ef */ if ((fS==fO)) goto L_008b93ef;
L_008b93c9:; BB(0x008b93c9);
    /* 008b93c9: mov esi, ecx */ r_esi = r_ecx;
    /* 008b93cb: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008b93ce: mov edi, esi */ r_edi = r_esi;
    /* 008b93d0: mov esi, eax */ r_esi = r_eax;
    /* 008b93d2: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_008b93d4:; BB(0x008b93d4);
    /* 008b93d4: mov edi, edx */ r_edi = r_edx;
    /* 008b93d6: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008b93d8: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 008b93db: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008b93dd: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b93de: mov edi, ecx */ r_edi = r_ecx;
    /* 008b93e0: not edi */ r_edi = ~r_edi;
    /* 008b93e2: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008b93e5: sub esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008b93e8: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b93ea: cmp ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b93ed: jl 0x8b93d4 */ if ((fS!=fO)) goto L_008b93d4;
L_008b93ef:; BB(0x008b93ef);
    /* 008b93ef: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b93f5: jg 0x8b9419 */ if ((!fZ&&fS==fO)) goto L_008b9419;
L_008b93f7:; BB(0x008b93f7);
    /* 008b93f7: mov esi, ecx */ r_esi = r_ecx;
    /* 008b93f9: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008b93fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b93fd: mov ebx, esi */ r_ebx = r_esi;
    /* 008b93ff: mov edi, edx */ r_edi = r_edx;
    /* 008b9401: mov esi, eax */ r_esi = r_eax;
    /* 008b9403: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008b9405: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008b9407: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b9408:; BB(0x008b9408);
    /* 008b9408: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 008b940b: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008b940d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b940e: sub esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008b9411: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b9417: jle 0x8b9408 */ if ((fZ||fS!=fO)) goto L_008b9408;
L_008b9419:; BB(0x008b9419);
    /* 008b9419: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b941a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b941b: ret  */ FN_RET(0x008b938c); r_esp += 4; return;
}

