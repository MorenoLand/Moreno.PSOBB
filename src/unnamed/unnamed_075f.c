#include "protos.h"

void f_0075f00c(void)
{
    FN_ENTER(0x0075f00c);
    /* 0075f00c: jb 0x75f012 */ if (fC) goto L_0075f012;
L_0075f00e:; BB(0x0075f00e);
    /* 0075f00e: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0075f011: mov dword ptr [edx + 0x24], 0xffffffff */ W32((u32)(r_edx+0x24u), 0xffffffffu);
L_0075f012:; BB(0x0075f012);
    /* 0075f012: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075f013: and al, 0xff */ {  u32 a = (u8)r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    UNSUP(0x0075f015, "falls out of decoded code");
    /* 0075f018: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f01b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0075f01e: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0075f021: mov dword ptr [edx + 0x2c], edi */ W32((u32)(r_edx+0x2cu), r_edi);
    /* 0075f024: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0075f027: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0075f02a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f02d: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0075f030: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0075f033: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0075f036: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0075f039: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0075f03c: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0075f03f: call 0x718168 */ r_esp -= 4; W32(r_esp, 0x75f044u); f_00718168();
    /* 0075f044: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f047: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f04a: call 0x717fe0 */ r_esp -= 4; W32(r_esp, 0x75f04fu); f_00717fe0();
    /* 0075f04f: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f052: call 0x826048 */ r_esp -= 4; W32(r_esp, 0x75f057u); f_00826048();
    /* 0075f057: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f05a: call 0x826eb4 */ r_esp -= 4; W32(r_esp, 0x75f05fu); f_00826eb4();
    /* 0075f05f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f062: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075f065: call 0x732950 */ r_esp -= 4; W32(r_esp, 0x75f06au); f_00732950();
    /* 0075f06a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f06d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f070: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75f075u); f_0068d5a8();
    /* 0075f075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f078: je 0x75f081 */ if (fZ) goto L_0075f081;
L_0075f07a:; BB(0x0075f07a);
    /* 0075f07a: mov ecx, eax */ r_ecx = r_eax;
    /* 0075f07c: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x75f081u); f_00685550();
L_0075f081:; BB(0x0075f081);
    /* 0075f081: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f084: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075f087: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075f08a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f08d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f094: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f097: ret 8 */ FN_RET(0x0075f00c); r_esp += 12; return;
}

void f_0075f01e(void)
{
    FN_ENTER(0x0075f01e);
    /* 0075f01e: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0075f021: mov dword ptr [edx + 0x2c], edi */ W32((u32)(r_edx+0x2cu), r_edi);
    /* 0075f024: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0075f027: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0075f02a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f02d: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0075f030: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0075f033: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0075f036: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0075f039: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0075f03c: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0075f03f: call 0x718168 */ r_esp -= 4; W32(r_esp, 0x75f044u); f_00718168();
    /* 0075f044: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f047: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f04a: call 0x717fe0 */ r_esp -= 4; W32(r_esp, 0x75f04fu); f_00717fe0();
    /* 0075f04f: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f052: call 0x826048 */ r_esp -= 4; W32(r_esp, 0x75f057u); f_00826048();
    /* 0075f057: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f05a: call 0x826eb4 */ r_esp -= 4; W32(r_esp, 0x75f05fu); f_00826eb4();
    /* 0075f05f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f062: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075f065: call 0x732950 */ r_esp -= 4; W32(r_esp, 0x75f06au); f_00732950();
    /* 0075f06a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f06d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f070: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75f075u); f_0068d5a8();
    /* 0075f075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f078: je 0x75f081 */ if (fZ) goto L_0075f081;
L_0075f07a:; BB(0x0075f07a);
    /* 0075f07a: mov ecx, eax */ r_ecx = r_eax;
    /* 0075f07c: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x75f081u); f_00685550();
L_0075f081:; BB(0x0075f081);
    /* 0075f081: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f084: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075f087: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075f08a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f08d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f094: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f097: ret 8 */ FN_RET(0x0075f01e); r_esp += 12; return;
}

void f_0075f02e(void)
{
    FN_ENTER(0x0075f02e);
    /* 0075f02e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075f02f: cmp al, 0x89 */ {  u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a - b) & 0xffu;   }
    /* 0075f031: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075f032: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075f033: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0075f036: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0075f039: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0075f03c: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0075f03f: call 0x718168 */ r_esp -= 4; W32(r_esp, 0x75f044u); f_00718168();
    /* 0075f044: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f047: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f04a: call 0x717fe0 */ r_esp -= 4; W32(r_esp, 0x75f04fu); f_00717fe0();
    /* 0075f04f: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f052: call 0x826048 */ r_esp -= 4; W32(r_esp, 0x75f057u); f_00826048();
    /* 0075f057: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f05a: call 0x826eb4 */ r_esp -= 4; W32(r_esp, 0x75f05fu); f_00826eb4();
    /* 0075f05f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f062: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075f065: call 0x732950 */ r_esp -= 4; W32(r_esp, 0x75f06au); f_00732950();
    /* 0075f06a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f06d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f070: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75f075u); f_0068d5a8();
    /* 0075f075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f078: je 0x75f081 */ if (fZ) goto L_0075f081;
L_0075f07a:; BB(0x0075f07a);
    /* 0075f07a: mov ecx, eax */ r_ecx = r_eax;
    /* 0075f07c: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x75f081u); f_00685550();
L_0075f081:; BB(0x0075f081);
    /* 0075f081: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f084: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075f087: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075f08a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f08d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f094: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f097: ret 8 */ FN_RET(0x0075f02e); r_esp += 12; return;
}

void f_0075f04a(void)
{
    FN_ENTER(0x0075f04a);
    /* 0075f04a: call 0x717fe0 */ r_esp -= 4; W32(r_esp, 0x75f04fu); f_00717fe0();
    /* 0075f04f: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f052: call 0x826048 */ r_esp -= 4; W32(r_esp, 0x75f057u); f_00826048();
    /* 0075f057: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f05a: call 0x826eb4 */ r_esp -= 4; W32(r_esp, 0x75f05fu); f_00826eb4();
    /* 0075f05f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f062: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0075f065: call 0x732950 */ r_esp -= 4; W32(r_esp, 0x75f06au); f_00732950();
    /* 0075f06a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f06d: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f070: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x75f075u); f_0068d5a8();
    /* 0075f075: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f076: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f078: je 0x75f081 */ if (fZ) goto L_0075f081;
L_0075f07a:; BB(0x0075f07a);
    /* 0075f07a: mov ecx, eax */ r_ecx = r_eax;
    /* 0075f07c: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x75f081u); f_00685550();
L_0075f081:; BB(0x0075f081);
    /* 0075f081: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f084: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075f087: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075f08a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f08d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f094: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f097: ret 8 */ FN_RET(0x0075f04a); r_esp += 12; return;
}

void f_0075f064(void)
{
    FN_ENTER(0x0075f064);
    /* 0075f064: sub al, 0xe8 */ {  u32 a = (u8)r_eax; u32 b = 0xe8u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075f066: out 0x38, al */ UNSUP(0x0075f066, "out 0x38, al");
    /* 0075f068: std  */ rt_df = 1;
    /* 0075f069: dec dword ptr [ebx + 0x70ffd845] */ { u32 ad = (u32)(r_ebx+0x70ffd845u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0075f06f: sub al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075f071: xor esp, ebp */ {  u32 a = r_esp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_esp = r;  }
    /* 0075f073: bnd call ptr [ecx - 0x7b] */ ;
    /* 0075f077: sal byte ptr [edi + eax - 0x75], 0xc8 */ { u32 ad = (u32)(r_edi+r_eax+0xffffff8bu); u32 c = (8u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 0075f07c: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x75f081u); f_00685550();
    /* 0075f081: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f084: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075f087: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075f08a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f08d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f094: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f097: ret 8 */ FN_RET(0x0075f064); r_esp += 12; return;
}

void f_0075f07c(void)
{
    FN_ENTER(0x0075f07c);
    /* 0075f07c: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x75f081u); f_00685550();
    /* 0075f081: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075f084: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075f087: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075f08a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f08d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f094: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f097: ret 8 */ FN_RET(0x0075f07c); r_esp += 12; return;
}

void f_0075f096(void)
{
    FN_ENTER(0x0075f096);
    /* 0075f096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f097: ret 8 */ FN_RET(0x0075f096); r_esp += 12; return;
}

void f_0075f09c(void) /* sub_75F09C */
{
    FN_ENTER(0x0075f09c);
    /* 0075f09c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075f09d: mov ebp, esp */ r_ebp = r_esp;
    /* 0075f09f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f0a1: push 0x8f3498 */ { u32 v = 0x8f3498u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f0a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075f0ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f0ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075f0b4: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075f0b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075f0ba: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0075f0bd: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0075f0c0: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0075f0c3: push dword ptr [ecx + 0x28] */ { u32 v = R32((u32)(r_ecx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f0c6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0075f0c9: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x75f0ceu); f_00719140();
    /* 0075f0ce: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075f0d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f0d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f0d7: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f0da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f0dc: je 0x75ff75 */ if (fZ) goto L_0075ff75;
L_0075f0e2:; BB(0x0075f0e2);
    /* 0075f0e2: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f0e6: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075f0e9: je 0x75f12d */ if (fZ) goto L_0075f12d;
L_0075f0eb:; BB(0x0075f0eb);
    /* 0075f0eb: lea edx, [eax + 0x54] */ r_edx = (u32)(r_eax+0x54u);
    /* 0075f0ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075f0ef: call 0x77d6e4 */ r_esp -= 4; W32(r_esp, 0x75f0f4u); f_0077d6e4();
    /* 0075f0f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f0f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f0f7: jne 0x75f105 */ if (!fZ) goto L_0075f105;
L_0075f0f9:; BB(0x0075f0f9);
    /* 0075f0f9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f0fc: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f0ff: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f103: jmp 0x75f12d */ goto L_0075f12d;
L_0075f105:; BB(0x0075f105);
    /* 0075f105: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f108: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f10b: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f10f: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075f112: je 0x75f12d */ if (fZ) goto L_0075f12d;
L_0075f114:; BB(0x0075f114);
    /* 0075f114: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075f11a: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0075f11e: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x75f123u); f_007138e0();
    /* 0075f123: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f126: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f129: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
L_0075f12d:; BB(0x0075f12d);
    /* 0075f12d: mov eax, edx */ r_eax = r_edx;
    /* 0075f12f: and eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0075f132: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f134:; BB(0x0075f134);
    /* 0075f134: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f136: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f138:; BB(0x0075f138);
    /* 0075f138: and edx, 0xffdf */ {  u32 a = r_edx; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075f13e: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0075f142: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x75f147u); f_007138e0();
    /* 0075f147: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f14a: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
L_0075f14d:; BB(0x0075f14d);
    /* 0075f14d: call 0x714090 */ r_esp -= 4; W32(r_esp, 0x75f152u); f_00714090();
    /* 0075f152: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f154: je 0x75f27e */ if (fZ) goto L_0075f27e;
L_0075f15a:; BB(0x0075f15a);
    /* 0075f15a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f15d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f160: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f162: je 0x75f178 */ if (fZ) goto L_0075f178;
L_0075f164:; BB(0x0075f164);
    /* 0075f164: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f166: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f16bu); f_0073ec50();
    /* 0075f16b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f16c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f170: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f173: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f178u); f_0075ffec();
L_0075f178:; BB(0x0075f178);
    /* 0075f178: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f17b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f17e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f180: je 0x75f196 */ if (fZ) goto L_0075f196;
L_0075f182:; BB(0x0075f182);
    /* 0075f182: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f184: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f189u); f_0073ec50();
    /* 0075f189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f18a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f18d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f18e: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f191: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f196u); f_0075ffec();
L_0075f196:; BB(0x0075f196);
    /* 0075f196: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f199: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f19c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f19e: je 0x75f1b4 */ if (fZ) goto L_0075f1b4;
L_0075f1a0:; BB(0x0075f1a0);
    /* 0075f1a0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1a7u); f_0073ec50();
    /* 0075f1a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1ac: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f1af: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f1b4u); f_0073d1c4();
L_0075f1b4:; BB(0x0075f1b4);
    /* 0075f1b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1b7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f1ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1bc: je 0x75f1dd */ if (fZ) goto L_0075f1dd;
L_0075f1be:; BB(0x0075f1be);
    /* 0075f1be: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1c3: je 0x75fdab */ if (fZ) goto L_0075fdab;
L_0075f1c9:; BB(0x0075f1c9);
    /* 0075f1c9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1cb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1d0u); f_0073ec50();
    /* 0075f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
L_0075f1dd:; BB(0x0075f1dd);
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f27e:; BB(0x0075f27e);
    /* 0075f27e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f281: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f284: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f286: je 0x75f29c */ if (fZ) goto L_0075f29c;
L_0075f288:; BB(0x0075f288);
    /* 0075f288: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f28a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f28fu); f_0073ec50();
    /* 0075f28f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f290: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f294: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f297: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f29cu); f_0075ffec();
L_0075f29c:; BB(0x0075f29c);
    /* 0075f29c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f29f: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f2a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2a4: je 0x75f2ba */ if (fZ) goto L_0075f2ba;
L_0075f2a6:; BB(0x0075f2a6);
    /* 0075f2a6: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2a8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2adu); f_0073ec50();
    /* 0075f2ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b2: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b5: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f2bau); f_0075ffec();
L_0075f2ba:; BB(0x0075f2ba);
    /* 0075f2ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2bd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f2c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2c2: je 0x75f2d8 */ if (fZ) goto L_0075f2d8;
L_0075f2c4:; BB(0x0075f2c4);
    /* 0075f2c4: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2c6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2cbu); f_0073ec50();
    /* 0075f2cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2d0: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f2d3: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f2d8u); f_0073d1c4();
L_0075f2d8:; BB(0x0075f2d8);
    /* 0075f2d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2db: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f2de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e0: je 0x75f301 */ if (fZ) goto L_0075f301;
L_0075f2e2:; BB(0x0075f2e2);
    /* 0075f2e2: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f2e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e7: je 0x75ff5c */ if (fZ) goto L_0075ff5c;
L_0075f2ed:; BB(0x0075f2ed);
    /* 0075f2ed: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2ef: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2f4u); f_0073ec50();
    /* 0075f2f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2f9: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2fc: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f301u); f_0075ffec();
L_0075f301:; BB(0x0075f301);
    /* 0075f301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f304: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f309: je 0x75f32a */ if (fZ) goto L_0075f32a;
L_0075f30b:; BB(0x0075f30b);
    /* 0075f30b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f310: je 0x75ff43 */ if (fZ) goto L_0075ff43;
L_0075f316:; BB(0x0075f316);
    /* 0075f316: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
L_0075f32a:; BB(0x0075f32a);
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f09c); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
L_0075fdab:; BB(0x0075fdab);
    /* 0075fdab: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdad: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fdb2u); f_0073ec50();
    /* 0075fdb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fdb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdb7: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fdba: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fdbfu); f_0075ffec();
    /* 0075fdbf: jmp 0x75f1dd */ goto L_0075f1dd;
L_0075ff43:; BB(0x0075ff43);
    /* 0075ff43: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff45: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff4au); f_0073ec50();
    /* 0075ff4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff4f: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff52: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff57u); f_0075ffec();
    /* 0075ff57: jmp 0x75f32a */ goto L_0075f32a;
L_0075ff5c:; BB(0x0075ff5c);
    /* 0075ff5c: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff5e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff63u); f_0073ec50();
    /* 0075ff63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff68: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff6b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff70u); f_0075ffec();
    /* 0075ff70: jmp 0x75f301 */ goto L_0075f301;
L_0075ff75:; BB(0x0075ff75);
    /* 0075ff75: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x75ff7au); f_006dc358();
    /* 0075ff7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ff7c: jne 0x75f3a5 */ if (!fZ) goto L_0075f3a5;
L_0075ff82:; BB(0x0075ff82);
    /* 0075ff82: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0075ff89: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff8b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x75ff90u); f_005caba4();
    /* 0075ff90: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0075ff93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ff96: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0075ff99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ff9b: je 0x75ffe5 */ if (fZ) goto L_0075ffe5;
L_0075ff9d:; BB(0x0075ff9d);
    /* 0075ff9d: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0075ffa4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075ffab: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ffae: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ffb0: lea eax, [edx + 0x54] */ r_eax = (u32)(r_edx+0x54u);
    /* 0075ffb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ffb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ffb5: call 0x713540 */ r_esp -= 4; W32(r_esp, 0x75ffbau); f_00713540();
    /* 0075ffba: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0075ffc1:; BB(0x0075ffc1);
    /* 0075ffc1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075ffc4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ffc7: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0075ffca: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ffd1: mov edx, eax */ r_edx = r_eax;
    /* 0075ffd3: movzx eax, word ptr [edx + 0x1e] */ r_eax = (u32)R16((u32)(r_edx+0x1eu));
    /* 0075ffd7: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ffdc: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 0075ffe0: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075ffe5:; BB(0x0075ffe5);
    /* 0075ffe5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075ffe7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0075ffea: jmp 0x75ffc1 */ goto L_0075ffc1;
}

void f_0075f0b0(void)
{
    FN_ENTER(0x0075f0b0);
    /* 0075f0b0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f0b2: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f0b4: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075f0b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075f0ba: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0075f0bd: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0075f0c0: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0075f0c3: push dword ptr [ecx + 0x28] */ { u32 v = R32((u32)(r_ecx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f0c6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0075f0c9: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x75f0ceu); f_00719140();
    /* 0075f0ce: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075f0d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f0d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f0d7: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f0da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f0dc: je 0x75ff75 */ if (fZ) goto L_0075ff75;
L_0075f0e2:; BB(0x0075f0e2);
    /* 0075f0e2: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f0e6: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075f0e9: je 0x75f12d */ if (fZ) goto L_0075f12d;
L_0075f0eb:; BB(0x0075f0eb);
    /* 0075f0eb: lea edx, [eax + 0x54] */ r_edx = (u32)(r_eax+0x54u);
    /* 0075f0ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075f0ef: call 0x77d6e4 */ r_esp -= 4; W32(r_esp, 0x75f0f4u); f_0077d6e4();
    /* 0075f0f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f0f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f0f7: jne 0x75f105 */ if (!fZ) goto L_0075f105;
L_0075f0f9:; BB(0x0075f0f9);
    /* 0075f0f9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f0fc: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f0ff: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f103: jmp 0x75f12d */ goto L_0075f12d;
L_0075f105:; BB(0x0075f105);
    /* 0075f105: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f108: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f10b: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f10f: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075f112: je 0x75f12d */ if (fZ) goto L_0075f12d;
L_0075f114:; BB(0x0075f114);
    /* 0075f114: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075f11a: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0075f11e: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x75f123u); f_007138e0();
    /* 0075f123: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f126: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f129: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
L_0075f12d:; BB(0x0075f12d);
    /* 0075f12d: mov eax, edx */ r_eax = r_edx;
    /* 0075f12f: and eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0075f132: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f134:; BB(0x0075f134);
    /* 0075f134: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f136: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f138:; BB(0x0075f138);
    /* 0075f138: and edx, 0xffdf */ {  u32 a = r_edx; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075f13e: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0075f142: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x75f147u); f_007138e0();
    /* 0075f147: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f14a: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
L_0075f14d:; BB(0x0075f14d);
    /* 0075f14d: call 0x714090 */ r_esp -= 4; W32(r_esp, 0x75f152u); f_00714090();
    /* 0075f152: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f154: je 0x75f27e */ if (fZ) goto L_0075f27e;
L_0075f15a:; BB(0x0075f15a);
    /* 0075f15a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f15d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f160: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f162: je 0x75f178 */ if (fZ) goto L_0075f178;
L_0075f164:; BB(0x0075f164);
    /* 0075f164: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f166: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f16bu); f_0073ec50();
    /* 0075f16b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f16c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f170: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f173: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f178u); f_0075ffec();
L_0075f178:; BB(0x0075f178);
    /* 0075f178: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f17b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f17e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f180: je 0x75f196 */ if (fZ) goto L_0075f196;
L_0075f182:; BB(0x0075f182);
    /* 0075f182: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f184: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f189u); f_0073ec50();
    /* 0075f189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f18a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f18d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f18e: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f191: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f196u); f_0075ffec();
L_0075f196:; BB(0x0075f196);
    /* 0075f196: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f199: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f19c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f19e: je 0x75f1b4 */ if (fZ) goto L_0075f1b4;
L_0075f1a0:; BB(0x0075f1a0);
    /* 0075f1a0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1a7u); f_0073ec50();
    /* 0075f1a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1ac: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f1af: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f1b4u); f_0073d1c4();
L_0075f1b4:; BB(0x0075f1b4);
    /* 0075f1b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1b7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f1ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1bc: je 0x75f1dd */ if (fZ) goto L_0075f1dd;
L_0075f1be:; BB(0x0075f1be);
    /* 0075f1be: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1c3: je 0x75fdab */ if (fZ) goto L_0075fdab;
L_0075f1c9:; BB(0x0075f1c9);
    /* 0075f1c9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1cb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1d0u); f_0073ec50();
    /* 0075f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
L_0075f1dd:; BB(0x0075f1dd);
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f27e:; BB(0x0075f27e);
    /* 0075f27e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f281: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f284: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f286: je 0x75f29c */ if (fZ) goto L_0075f29c;
L_0075f288:; BB(0x0075f288);
    /* 0075f288: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f28a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f28fu); f_0073ec50();
    /* 0075f28f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f290: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f294: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f297: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f29cu); f_0075ffec();
L_0075f29c:; BB(0x0075f29c);
    /* 0075f29c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f29f: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f2a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2a4: je 0x75f2ba */ if (fZ) goto L_0075f2ba;
L_0075f2a6:; BB(0x0075f2a6);
    /* 0075f2a6: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2a8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2adu); f_0073ec50();
    /* 0075f2ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b2: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b5: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f2bau); f_0075ffec();
L_0075f2ba:; BB(0x0075f2ba);
    /* 0075f2ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2bd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f2c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2c2: je 0x75f2d8 */ if (fZ) goto L_0075f2d8;
L_0075f2c4:; BB(0x0075f2c4);
    /* 0075f2c4: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2c6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2cbu); f_0073ec50();
    /* 0075f2cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2d0: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f2d3: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f2d8u); f_0073d1c4();
L_0075f2d8:; BB(0x0075f2d8);
    /* 0075f2d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2db: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f2de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e0: je 0x75f301 */ if (fZ) goto L_0075f301;
L_0075f2e2:; BB(0x0075f2e2);
    /* 0075f2e2: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f2e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e7: je 0x75ff5c */ if (fZ) goto L_0075ff5c;
L_0075f2ed:; BB(0x0075f2ed);
    /* 0075f2ed: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2ef: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2f4u); f_0073ec50();
    /* 0075f2f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2f9: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2fc: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f301u); f_0075ffec();
L_0075f301:; BB(0x0075f301);
    /* 0075f301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f304: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f309: je 0x75f32a */ if (fZ) goto L_0075f32a;
L_0075f30b:; BB(0x0075f30b);
    /* 0075f30b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f310: je 0x75ff43 */ if (fZ) goto L_0075ff43;
L_0075f316:; BB(0x0075f316);
    /* 0075f316: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
L_0075f32a:; BB(0x0075f32a);
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f0b0); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
L_0075fdab:; BB(0x0075fdab);
    /* 0075fdab: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdad: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fdb2u); f_0073ec50();
    /* 0075fdb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fdb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdb7: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fdba: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fdbfu); f_0075ffec();
    /* 0075fdbf: jmp 0x75f1dd */ goto L_0075f1dd;
L_0075ff43:; BB(0x0075ff43);
    /* 0075ff43: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff45: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff4au); f_0073ec50();
    /* 0075ff4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff4f: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff52: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff57u); f_0075ffec();
    /* 0075ff57: jmp 0x75f32a */ goto L_0075f32a;
L_0075ff5c:; BB(0x0075ff5c);
    /* 0075ff5c: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff5e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff63u); f_0073ec50();
    /* 0075ff63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff68: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff6b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff70u); f_0075ffec();
    /* 0075ff70: jmp 0x75f301 */ goto L_0075f301;
L_0075ff75:; BB(0x0075ff75);
    /* 0075ff75: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x75ff7au); f_006dc358();
    /* 0075ff7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ff7c: jne 0x75f3a5 */ if (!fZ) goto L_0075f3a5;
L_0075ff82:; BB(0x0075ff82);
    /* 0075ff82: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0075ff89: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff8b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x75ff90u); f_005caba4();
    /* 0075ff90: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0075ff93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ff96: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0075ff99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ff9b: je 0x75ffe5 */ if (fZ) goto L_0075ffe5;
L_0075ff9d:; BB(0x0075ff9d);
    /* 0075ff9d: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0075ffa4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075ffab: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ffae: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ffb0: lea eax, [edx + 0x54] */ r_eax = (u32)(r_edx+0x54u);
    /* 0075ffb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ffb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ffb5: call 0x713540 */ r_esp -= 4; W32(r_esp, 0x75ffbau); f_00713540();
    /* 0075ffba: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0075ffc1:; BB(0x0075ffc1);
    /* 0075ffc1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075ffc4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ffc7: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0075ffca: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ffd1: mov edx, eax */ r_edx = r_eax;
    /* 0075ffd3: movzx eax, word ptr [edx + 0x1e] */ r_eax = (u32)R16((u32)(r_edx+0x1eu));
    /* 0075ffd7: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ffdc: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 0075ffe0: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075ffe5:; BB(0x0075ffe5);
    /* 0075ffe5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075ffe7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0075ffea: jmp 0x75ffc1 */ goto L_0075ffc1;
}

void f_0075f0c2(void)
{
    FN_ENTER(0x0075f0c2);
    /* 0075f0c2: loopne 0x75f0c3 */ r_ecx--; if (r_ecx && !fZ) goto L_0075f0c3;
L_0075f0c3:; BB(0x0075f0c3);
    /* 0075f0c3: push dword ptr [ecx + 0x28] */ { u32 v = R32((u32)(r_ecx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f0c4: jno 0x75f0ee */ if (!fO) goto L_0075f0ee;
L_0075f0c6:; BB(0x0075f0c6);
    /* 0075f0c6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0075f0c9: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x75f0ceu); f_00719140();
    /* 0075f0ce: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075f0d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f0d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f0d7: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f0da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f0dc: je 0x75ff75 */ if (fZ) goto L_0075ff75;
L_0075f0e2:; BB(0x0075f0e2);
    /* 0075f0e2: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f0e6: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075f0e9: je 0x75f12d */ if (fZ) goto L_0075f12d;
L_0075f0eb:; BB(0x0075f0eb);
    /* 0075f0eb: lea edx, [eax + 0x54] */ r_edx = (u32)(r_eax+0x54u);
L_0075f0ee:; BB(0x0075f0ee);
    /* 0075f0ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075f0ef: call 0x77d6e4 */ r_esp -= 4; W32(r_esp, 0x75f0f4u); f_0077d6e4();
    /* 0075f0f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f0f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f0f7: jne 0x75f105 */ if (!fZ) goto L_0075f105;
L_0075f0f9:; BB(0x0075f0f9);
    /* 0075f0f9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f0fc: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f0ff: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f103: jmp 0x75f12d */ goto L_0075f12d;
L_0075f105:; BB(0x0075f105);
    /* 0075f105: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f108: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f10b: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f10f: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075f112: je 0x75f12d */ if (fZ) goto L_0075f12d;
L_0075f114:; BB(0x0075f114);
    /* 0075f114: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075f11a: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0075f11e: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x75f123u); f_007138e0();
    /* 0075f123: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f126: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f129: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
L_0075f12d:; BB(0x0075f12d);
    /* 0075f12d: mov eax, edx */ r_eax = r_edx;
    /* 0075f12f: and eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0075f132: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f134:; BB(0x0075f134);
    /* 0075f134: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f136: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f138:; BB(0x0075f138);
    /* 0075f138: and edx, 0xffdf */ {  u32 a = r_edx; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075f13e: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0075f142: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x75f147u); f_007138e0();
    /* 0075f147: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f14a: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
L_0075f14d:; BB(0x0075f14d);
    /* 0075f14d: call 0x714090 */ r_esp -= 4; W32(r_esp, 0x75f152u); f_00714090();
    /* 0075f152: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f154: je 0x75f27e */ if (fZ) goto L_0075f27e;
L_0075f15a:; BB(0x0075f15a);
    /* 0075f15a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f15d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f160: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f162: je 0x75f178 */ if (fZ) goto L_0075f178;
L_0075f164:; BB(0x0075f164);
    /* 0075f164: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f166: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f16bu); f_0073ec50();
    /* 0075f16b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f16c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f170: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f173: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f178u); f_0075ffec();
L_0075f178:; BB(0x0075f178);
    /* 0075f178: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f17b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f17e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f180: je 0x75f196 */ if (fZ) goto L_0075f196;
L_0075f182:; BB(0x0075f182);
    /* 0075f182: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f184: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f189u); f_0073ec50();
    /* 0075f189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f18a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f18d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f18e: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f191: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f196u); f_0075ffec();
L_0075f196:; BB(0x0075f196);
    /* 0075f196: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f199: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f19c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f19e: je 0x75f1b4 */ if (fZ) goto L_0075f1b4;
L_0075f1a0:; BB(0x0075f1a0);
    /* 0075f1a0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1a7u); f_0073ec50();
    /* 0075f1a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1ac: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f1af: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f1b4u); f_0073d1c4();
L_0075f1b4:; BB(0x0075f1b4);
    /* 0075f1b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1b7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f1ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1bc: je 0x75f1dd */ if (fZ) goto L_0075f1dd;
L_0075f1be:; BB(0x0075f1be);
    /* 0075f1be: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1c3: je 0x75fdab */ if (fZ) goto L_0075fdab;
L_0075f1c9:; BB(0x0075f1c9);
    /* 0075f1c9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1cb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1d0u); f_0073ec50();
    /* 0075f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
L_0075f1dd:; BB(0x0075f1dd);
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f27e:; BB(0x0075f27e);
    /* 0075f27e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f281: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f284: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f286: je 0x75f29c */ if (fZ) goto L_0075f29c;
L_0075f288:; BB(0x0075f288);
    /* 0075f288: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f28a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f28fu); f_0073ec50();
    /* 0075f28f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f290: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f294: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f297: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f29cu); f_0075ffec();
L_0075f29c:; BB(0x0075f29c);
    /* 0075f29c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f29f: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f2a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2a4: je 0x75f2ba */ if (fZ) goto L_0075f2ba;
L_0075f2a6:; BB(0x0075f2a6);
    /* 0075f2a6: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2a8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2adu); f_0073ec50();
    /* 0075f2ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b2: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b5: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f2bau); f_0075ffec();
L_0075f2ba:; BB(0x0075f2ba);
    /* 0075f2ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2bd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f2c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2c2: je 0x75f2d8 */ if (fZ) goto L_0075f2d8;
L_0075f2c4:; BB(0x0075f2c4);
    /* 0075f2c4: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2c6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2cbu); f_0073ec50();
    /* 0075f2cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2d0: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f2d3: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f2d8u); f_0073d1c4();
L_0075f2d8:; BB(0x0075f2d8);
    /* 0075f2d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2db: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f2de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e0: je 0x75f301 */ if (fZ) goto L_0075f301;
L_0075f2e2:; BB(0x0075f2e2);
    /* 0075f2e2: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f2e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e7: je 0x75ff5c */ if (fZ) goto L_0075ff5c;
L_0075f2ed:; BB(0x0075f2ed);
    /* 0075f2ed: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2ef: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2f4u); f_0073ec50();
    /* 0075f2f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2f9: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2fc: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f301u); f_0075ffec();
L_0075f301:; BB(0x0075f301);
    /* 0075f301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f304: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f309: je 0x75f32a */ if (fZ) goto L_0075f32a;
L_0075f30b:; BB(0x0075f30b);
    /* 0075f30b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f310: je 0x75ff43 */ if (fZ) goto L_0075ff43;
L_0075f316:; BB(0x0075f316);
    /* 0075f316: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
L_0075f32a:; BB(0x0075f32a);
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f0c2); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
L_0075fdab:; BB(0x0075fdab);
    /* 0075fdab: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdad: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fdb2u); f_0073ec50();
    /* 0075fdb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fdb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdb7: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fdba: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fdbfu); f_0075ffec();
    /* 0075fdbf: jmp 0x75f1dd */ goto L_0075f1dd;
L_0075ff43:; BB(0x0075ff43);
    /* 0075ff43: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff45: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff4au); f_0073ec50();
    /* 0075ff4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff4f: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff52: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff57u); f_0075ffec();
    /* 0075ff57: jmp 0x75f32a */ goto L_0075f32a;
L_0075ff5c:; BB(0x0075ff5c);
    /* 0075ff5c: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff5e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff63u); f_0073ec50();
    /* 0075ff63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff68: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff6b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff70u); f_0075ffec();
    /* 0075ff70: jmp 0x75f301 */ goto L_0075f301;
L_0075ff75:; BB(0x0075ff75);
    /* 0075ff75: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x75ff7au); f_006dc358();
    /* 0075ff7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ff7c: jne 0x75f3a5 */ if (!fZ) goto L_0075f3a5;
L_0075ff82:; BB(0x0075ff82);
    /* 0075ff82: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0075ff89: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff8b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x75ff90u); f_005caba4();
    /* 0075ff90: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0075ff93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ff96: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0075ff99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ff9b: je 0x75ffe5 */ if (fZ) goto L_0075ffe5;
L_0075ff9d:; BB(0x0075ff9d);
    /* 0075ff9d: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0075ffa4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075ffab: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ffae: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ffb0: lea eax, [edx + 0x54] */ r_eax = (u32)(r_edx+0x54u);
    /* 0075ffb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ffb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ffb5: call 0x713540 */ r_esp -= 4; W32(r_esp, 0x75ffbau); f_00713540();
    /* 0075ffba: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0075ffc1:; BB(0x0075ffc1);
    /* 0075ffc1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075ffc4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ffc7: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0075ffca: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ffd1: mov edx, eax */ r_edx = r_eax;
    /* 0075ffd3: movzx eax, word ptr [edx + 0x1e] */ r_eax = (u32)R16((u32)(r_edx+0x1eu));
    /* 0075ffd7: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ffdc: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 0075ffe0: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075ffe5:; BB(0x0075ffe5);
    /* 0075ffe5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075ffe7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0075ffea: jmp 0x75ffc1 */ goto L_0075ffc1;
}

void f_0075f0d2(void)
{
    FN_ENTER(0x0075f0d2);
    /* 0075f0d2: les eax, ptr [ebx + ecx*4] */ UNSUP(0x0075f0d2, "les eax, ptr [ebx + ecx*4]");
    /* 0075f0d5: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0075f0d6: in al, dx */ UNSUP(0x0075f0d6, "in al, dx");
    /* 0075f0d7: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f0da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f0dc: je 0x75ff75 */ if (fZ) goto L_0075ff75;
L_0075f0e2:; BB(0x0075f0e2);
    /* 0075f0e2: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f0e6: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075f0e9: je 0x75f12d */ if (fZ) goto L_0075f12d;
L_0075f0eb:; BB(0x0075f0eb);
    /* 0075f0eb: lea edx, [eax + 0x54] */ r_edx = (u32)(r_eax+0x54u);
    /* 0075f0ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075f0ef: call 0x77d6e4 */ r_esp -= 4; W32(r_esp, 0x75f0f4u); f_0077d6e4();
    /* 0075f0f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f0f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f0f7: jne 0x75f105 */ if (!fZ) goto L_0075f105;
L_0075f0f9:; BB(0x0075f0f9);
    /* 0075f0f9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f0fc: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f0ff: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f103: jmp 0x75f12d */ goto L_0075f12d;
L_0075f105:; BB(0x0075f105);
    /* 0075f105: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f108: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f10b: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f10f: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075f112: je 0x75f12d */ if (fZ) goto L_0075f12d;
L_0075f114:; BB(0x0075f114);
    /* 0075f114: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075f11a: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0075f11e: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x75f123u); f_007138e0();
    /* 0075f123: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f126: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f129: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
L_0075f12d:; BB(0x0075f12d);
    /* 0075f12d: mov eax, edx */ r_eax = r_edx;
    /* 0075f12f: and eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0075f132: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f134:; BB(0x0075f134);
    /* 0075f134: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f136: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f138:; BB(0x0075f138);
    /* 0075f138: and edx, 0xffdf */ {  u32 a = r_edx; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075f13e: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0075f142: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x75f147u); f_007138e0();
    /* 0075f147: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f14a: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
L_0075f14d:; BB(0x0075f14d);
    /* 0075f14d: call 0x714090 */ r_esp -= 4; W32(r_esp, 0x75f152u); f_00714090();
    /* 0075f152: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f154: je 0x75f27e */ if (fZ) goto L_0075f27e;
L_0075f15a:; BB(0x0075f15a);
    /* 0075f15a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f15d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f160: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f162: je 0x75f178 */ if (fZ) goto L_0075f178;
L_0075f164:; BB(0x0075f164);
    /* 0075f164: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f166: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f16bu); f_0073ec50();
    /* 0075f16b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f16c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f170: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f173: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f178u); f_0075ffec();
L_0075f178:; BB(0x0075f178);
    /* 0075f178: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f17b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f17e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f180: je 0x75f196 */ if (fZ) goto L_0075f196;
L_0075f182:; BB(0x0075f182);
    /* 0075f182: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f184: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f189u); f_0073ec50();
    /* 0075f189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f18a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f18d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f18e: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f191: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f196u); f_0075ffec();
L_0075f196:; BB(0x0075f196);
    /* 0075f196: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f199: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f19c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f19e: je 0x75f1b4 */ if (fZ) goto L_0075f1b4;
L_0075f1a0:; BB(0x0075f1a0);
    /* 0075f1a0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1a7u); f_0073ec50();
    /* 0075f1a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1ac: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f1af: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f1b4u); f_0073d1c4();
L_0075f1b4:; BB(0x0075f1b4);
    /* 0075f1b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1b7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f1ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1bc: je 0x75f1dd */ if (fZ) goto L_0075f1dd;
L_0075f1be:; BB(0x0075f1be);
    /* 0075f1be: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1c3: je 0x75fdab */ if (fZ) goto L_0075fdab;
L_0075f1c9:; BB(0x0075f1c9);
    /* 0075f1c9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1cb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1d0u); f_0073ec50();
    /* 0075f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
L_0075f1dd:; BB(0x0075f1dd);
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f27e:; BB(0x0075f27e);
    /* 0075f27e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f281: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f284: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f286: je 0x75f29c */ if (fZ) goto L_0075f29c;
L_0075f288:; BB(0x0075f288);
    /* 0075f288: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f28a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f28fu); f_0073ec50();
    /* 0075f28f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f290: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f294: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f297: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f29cu); f_0075ffec();
L_0075f29c:; BB(0x0075f29c);
    /* 0075f29c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f29f: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f2a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2a4: je 0x75f2ba */ if (fZ) goto L_0075f2ba;
L_0075f2a6:; BB(0x0075f2a6);
    /* 0075f2a6: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2a8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2adu); f_0073ec50();
    /* 0075f2ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b2: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b5: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f2bau); f_0075ffec();
L_0075f2ba:; BB(0x0075f2ba);
    /* 0075f2ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2bd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f2c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2c2: je 0x75f2d8 */ if (fZ) goto L_0075f2d8;
L_0075f2c4:; BB(0x0075f2c4);
    /* 0075f2c4: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2c6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2cbu); f_0073ec50();
    /* 0075f2cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2d0: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f2d3: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f2d8u); f_0073d1c4();
L_0075f2d8:; BB(0x0075f2d8);
    /* 0075f2d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2db: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f2de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e0: je 0x75f301 */ if (fZ) goto L_0075f301;
L_0075f2e2:; BB(0x0075f2e2);
    /* 0075f2e2: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f2e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e7: je 0x75ff5c */ if (fZ) goto L_0075ff5c;
L_0075f2ed:; BB(0x0075f2ed);
    /* 0075f2ed: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2ef: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2f4u); f_0073ec50();
    /* 0075f2f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2f9: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2fc: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f301u); f_0075ffec();
L_0075f301:; BB(0x0075f301);
    /* 0075f301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f304: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f309: je 0x75f32a */ if (fZ) goto L_0075f32a;
L_0075f30b:; BB(0x0075f30b);
    /* 0075f30b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f310: je 0x75ff43 */ if (fZ) goto L_0075ff43;
L_0075f316:; BB(0x0075f316);
    /* 0075f316: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
L_0075f32a:; BB(0x0075f32a);
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f0d2); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
L_0075fdab:; BB(0x0075fdab);
    /* 0075fdab: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdad: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fdb2u); f_0073ec50();
    /* 0075fdb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fdb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdb7: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fdba: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fdbfu); f_0075ffec();
    /* 0075fdbf: jmp 0x75f1dd */ goto L_0075f1dd;
L_0075ff43:; BB(0x0075ff43);
    /* 0075ff43: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff45: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff4au); f_0073ec50();
    /* 0075ff4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff4f: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff52: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff57u); f_0075ffec();
    /* 0075ff57: jmp 0x75f32a */ goto L_0075f32a;
L_0075ff5c:; BB(0x0075ff5c);
    /* 0075ff5c: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff5e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff63u); f_0073ec50();
    /* 0075ff63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff68: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff6b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff70u); f_0075ffec();
    /* 0075ff70: jmp 0x75f301 */ goto L_0075f301;
L_0075ff75:; BB(0x0075ff75);
    /* 0075ff75: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x75ff7au); f_006dc358();
    /* 0075ff7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ff7c: jne 0x75f3a5 */ if (!fZ) goto L_0075f3a5;
L_0075ff82:; BB(0x0075ff82);
    /* 0075ff82: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0075ff89: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff8b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x75ff90u); f_005caba4();
    /* 0075ff90: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0075ff93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ff96: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0075ff99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ff9b: je 0x75ffe5 */ if (fZ) goto L_0075ffe5;
L_0075ff9d:; BB(0x0075ff9d);
    /* 0075ff9d: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0075ffa4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075ffab: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ffae: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ffb0: lea eax, [edx + 0x54] */ r_eax = (u32)(r_edx+0x54u);
    /* 0075ffb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ffb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ffb5: call 0x713540 */ r_esp -= 4; W32(r_esp, 0x75ffbau); f_00713540();
    /* 0075ffba: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0075ffc1:; BB(0x0075ffc1);
    /* 0075ffc1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075ffc4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ffc7: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0075ffca: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075ffd1: mov edx, eax */ r_edx = r_eax;
    /* 0075ffd3: movzx eax, word ptr [edx + 0x1e] */ r_eax = (u32)R16((u32)(r_edx+0x1eu));
    /* 0075ffd7: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ffdc: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 0075ffe0: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075ffe5:; BB(0x0075ffe5);
    /* 0075ffe5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075ffe7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0075ffea: jmp 0x75ffc1 */ goto L_0075ffc1;
}

void f_0075f0e2(void)
{
    FN_ENTER(0x0075f0e2);
    /* 0075f0e2: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f0e6: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075f0e9: je 0x75f12d */ if (fZ) goto L_0075f12d;
L_0075f0eb:; BB(0x0075f0eb);
    /* 0075f0eb: lea edx, [eax + 0x54] */ r_edx = (u32)(r_eax+0x54u);
    /* 0075f0ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075f0ef: call 0x77d6e4 */ r_esp -= 4; W32(r_esp, 0x75f0f4u); f_0077d6e4();
    /* 0075f0f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f0f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f0f7: jne 0x75f105 */ if (!fZ) goto L_0075f105;
L_0075f0f9:; BB(0x0075f0f9);
    /* 0075f0f9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f0fc: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f0ff: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f103: jmp 0x75f12d */ goto L_0075f12d;
L_0075f105:; BB(0x0075f105);
    /* 0075f105: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f108: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f10b: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f10f: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075f112: je 0x75f12d */ if (fZ) goto L_0075f12d;
L_0075f114:; BB(0x0075f114);
    /* 0075f114: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075f11a: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0075f11e: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x75f123u); f_007138e0();
    /* 0075f123: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f126: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f129: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
L_0075f12d:; BB(0x0075f12d);
    /* 0075f12d: mov eax, edx */ r_eax = r_edx;
    /* 0075f12f: and eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0075f132: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f134:; BB(0x0075f134);
    /* 0075f134: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f136: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f138:; BB(0x0075f138);
    /* 0075f138: and edx, 0xffdf */ {  u32 a = r_edx; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075f13e: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0075f142: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x75f147u); f_007138e0();
    /* 0075f147: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f14a: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
L_0075f14d:; BB(0x0075f14d);
    /* 0075f14d: call 0x714090 */ r_esp -= 4; W32(r_esp, 0x75f152u); f_00714090();
    /* 0075f152: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f154: je 0x75f27e */ if (fZ) goto L_0075f27e;
L_0075f15a:; BB(0x0075f15a);
    /* 0075f15a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f15d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f160: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f162: je 0x75f178 */ if (fZ) goto L_0075f178;
L_0075f164:; BB(0x0075f164);
    /* 0075f164: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f166: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f16bu); f_0073ec50();
    /* 0075f16b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f16c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f170: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f173: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f178u); f_0075ffec();
L_0075f178:; BB(0x0075f178);
    /* 0075f178: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f17b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f17e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f180: je 0x75f196 */ if (fZ) goto L_0075f196;
L_0075f182:; BB(0x0075f182);
    /* 0075f182: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f184: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f189u); f_0073ec50();
    /* 0075f189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f18a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f18d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f18e: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f191: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f196u); f_0075ffec();
L_0075f196:; BB(0x0075f196);
    /* 0075f196: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f199: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f19c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f19e: je 0x75f1b4 */ if (fZ) goto L_0075f1b4;
L_0075f1a0:; BB(0x0075f1a0);
    /* 0075f1a0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1a7u); f_0073ec50();
    /* 0075f1a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1ac: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f1af: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f1b4u); f_0073d1c4();
L_0075f1b4:; BB(0x0075f1b4);
    /* 0075f1b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1b7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f1ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1bc: je 0x75f1dd */ if (fZ) goto L_0075f1dd;
L_0075f1be:; BB(0x0075f1be);
    /* 0075f1be: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1c3: je 0x75fdab */ if (fZ) goto L_0075fdab;
L_0075f1c9:; BB(0x0075f1c9);
    /* 0075f1c9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1cb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1d0u); f_0073ec50();
    /* 0075f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
L_0075f1dd:; BB(0x0075f1dd);
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f27e:; BB(0x0075f27e);
    /* 0075f27e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f281: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f284: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f286: je 0x75f29c */ if (fZ) goto L_0075f29c;
L_0075f288:; BB(0x0075f288);
    /* 0075f288: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f28a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f28fu); f_0073ec50();
    /* 0075f28f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f290: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f294: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f297: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f29cu); f_0075ffec();
L_0075f29c:; BB(0x0075f29c);
    /* 0075f29c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f29f: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f2a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2a4: je 0x75f2ba */ if (fZ) goto L_0075f2ba;
L_0075f2a6:; BB(0x0075f2a6);
    /* 0075f2a6: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2a8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2adu); f_0073ec50();
    /* 0075f2ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b2: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b5: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f2bau); f_0075ffec();
L_0075f2ba:; BB(0x0075f2ba);
    /* 0075f2ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2bd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f2c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2c2: je 0x75f2d8 */ if (fZ) goto L_0075f2d8;
L_0075f2c4:; BB(0x0075f2c4);
    /* 0075f2c4: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2c6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2cbu); f_0073ec50();
    /* 0075f2cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2d0: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f2d3: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f2d8u); f_0073d1c4();
L_0075f2d8:; BB(0x0075f2d8);
    /* 0075f2d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2db: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f2de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e0: je 0x75f301 */ if (fZ) goto L_0075f301;
L_0075f2e2:; BB(0x0075f2e2);
    /* 0075f2e2: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f2e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e7: je 0x75ff5c */ if (fZ) goto L_0075ff5c;
L_0075f2ed:; BB(0x0075f2ed);
    /* 0075f2ed: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2ef: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2f4u); f_0073ec50();
    /* 0075f2f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2f9: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2fc: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f301u); f_0075ffec();
L_0075f301:; BB(0x0075f301);
    /* 0075f301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f304: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f309: je 0x75f32a */ if (fZ) goto L_0075f32a;
L_0075f30b:; BB(0x0075f30b);
    /* 0075f30b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f310: je 0x75ff43 */ if (fZ) goto L_0075ff43;
L_0075f316:; BB(0x0075f316);
    /* 0075f316: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
L_0075f32a:; BB(0x0075f32a);
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f0e2); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
L_0075fdab:; BB(0x0075fdab);
    /* 0075fdab: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdad: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fdb2u); f_0073ec50();
    /* 0075fdb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fdb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdb7: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fdba: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fdbfu); f_0075ffec();
    /* 0075fdbf: jmp 0x75f1dd */ goto L_0075f1dd;
L_0075ff43:; BB(0x0075ff43);
    /* 0075ff43: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff45: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff4au); f_0073ec50();
    /* 0075ff4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff4f: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff52: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff57u); f_0075ffec();
    /* 0075ff57: jmp 0x75f32a */ goto L_0075f32a;
L_0075ff5c:; BB(0x0075ff5c);
    /* 0075ff5c: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff5e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff63u); f_0073ec50();
    /* 0075ff63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff68: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff6b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff70u); f_0075ffec();
    /* 0075ff70: jmp 0x75f301 */ goto L_0075f301;
}

void f_0075f0f8(void)
{
    FN_ENTER(0x0075f0f8);
    /* 0075f0f8: or al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075f0fa: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0075f0fb: in al, dx */ UNSUP(0x0075f0fb, "in al, dx");
    /* 0075f0fc: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f0ff: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f103: jmp 0x75f12d */ goto L_0075f12d;
L_0075f12d:; BB(0x0075f12d);
    /* 0075f12d: mov eax, edx */ r_eax = r_edx;
    /* 0075f12f: and eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0075f132: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f134:; BB(0x0075f134);
    /* 0075f134: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f136: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f138:; BB(0x0075f138);
    /* 0075f138: and edx, 0xffdf */ {  u32 a = r_edx; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075f13e: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0075f142: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x75f147u); f_007138e0();
    /* 0075f147: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f14a: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
L_0075f14d:; BB(0x0075f14d);
    /* 0075f14d: call 0x714090 */ r_esp -= 4; W32(r_esp, 0x75f152u); f_00714090();
    /* 0075f152: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f154: je 0x75f27e */ if (fZ) goto L_0075f27e;
L_0075f15a:; BB(0x0075f15a);
    /* 0075f15a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f15d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f160: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f162: je 0x75f178 */ if (fZ) goto L_0075f178;
L_0075f164:; BB(0x0075f164);
    /* 0075f164: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f166: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f16bu); f_0073ec50();
    /* 0075f16b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f16c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f170: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f173: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f178u); f_0075ffec();
L_0075f178:; BB(0x0075f178);
    /* 0075f178: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f17b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f17e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f180: je 0x75f196 */ if (fZ) goto L_0075f196;
L_0075f182:; BB(0x0075f182);
    /* 0075f182: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f184: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f189u); f_0073ec50();
    /* 0075f189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f18a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f18d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f18e: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f191: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f196u); f_0075ffec();
L_0075f196:; BB(0x0075f196);
    /* 0075f196: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f199: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f19c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f19e: je 0x75f1b4 */ if (fZ) goto L_0075f1b4;
L_0075f1a0:; BB(0x0075f1a0);
    /* 0075f1a0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1a7u); f_0073ec50();
    /* 0075f1a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1ac: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f1af: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f1b4u); f_0073d1c4();
L_0075f1b4:; BB(0x0075f1b4);
    /* 0075f1b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1b7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f1ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1bc: je 0x75f1dd */ if (fZ) goto L_0075f1dd;
L_0075f1be:; BB(0x0075f1be);
    /* 0075f1be: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1c3: je 0x75fdab */ if (fZ) goto L_0075fdab;
L_0075f1c9:; BB(0x0075f1c9);
    /* 0075f1c9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1cb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1d0u); f_0073ec50();
    /* 0075f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
L_0075f1dd:; BB(0x0075f1dd);
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f27e:; BB(0x0075f27e);
    /* 0075f27e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f281: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f284: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f286: je 0x75f29c */ if (fZ) goto L_0075f29c;
L_0075f288:; BB(0x0075f288);
    /* 0075f288: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f28a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f28fu); f_0073ec50();
    /* 0075f28f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f290: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f294: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f297: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f29cu); f_0075ffec();
L_0075f29c:; BB(0x0075f29c);
    /* 0075f29c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f29f: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f2a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2a4: je 0x75f2ba */ if (fZ) goto L_0075f2ba;
L_0075f2a6:; BB(0x0075f2a6);
    /* 0075f2a6: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2a8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2adu); f_0073ec50();
    /* 0075f2ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b2: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b5: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f2bau); f_0075ffec();
L_0075f2ba:; BB(0x0075f2ba);
    /* 0075f2ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2bd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f2c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2c2: je 0x75f2d8 */ if (fZ) goto L_0075f2d8;
L_0075f2c4:; BB(0x0075f2c4);
    /* 0075f2c4: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2c6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2cbu); f_0073ec50();
    /* 0075f2cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2d0: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f2d3: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f2d8u); f_0073d1c4();
L_0075f2d8:; BB(0x0075f2d8);
    /* 0075f2d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2db: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f2de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e0: je 0x75f301 */ if (fZ) goto L_0075f301;
L_0075f2e2:; BB(0x0075f2e2);
    /* 0075f2e2: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f2e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e7: je 0x75ff5c */ if (fZ) goto L_0075ff5c;
L_0075f2ed:; BB(0x0075f2ed);
    /* 0075f2ed: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2ef: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2f4u); f_0073ec50();
    /* 0075f2f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2f9: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2fc: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f301u); f_0075ffec();
L_0075f301:; BB(0x0075f301);
    /* 0075f301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f304: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f309: je 0x75f32a */ if (fZ) goto L_0075f32a;
L_0075f30b:; BB(0x0075f30b);
    /* 0075f30b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f310: je 0x75ff43 */ if (fZ) goto L_0075ff43;
L_0075f316:; BB(0x0075f316);
    /* 0075f316: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
L_0075f32a:; BB(0x0075f32a);
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f0f8); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
L_0075fdab:; BB(0x0075fdab);
    /* 0075fdab: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdad: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fdb2u); f_0073ec50();
    /* 0075fdb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fdb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdb7: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fdba: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fdbfu); f_0075ffec();
    /* 0075fdbf: jmp 0x75f1dd */ goto L_0075f1dd;
L_0075ff43:; BB(0x0075ff43);
    /* 0075ff43: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff45: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff4au); f_0073ec50();
    /* 0075ff4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff4f: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff52: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff57u); f_0075ffec();
    /* 0075ff57: jmp 0x75f32a */ goto L_0075f32a;
L_0075ff5c:; BB(0x0075ff5c);
    /* 0075ff5c: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff5e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff63u); f_0073ec50();
    /* 0075ff63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff68: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff6b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff70u); f_0075ffec();
    /* 0075ff70: jmp 0x75f301 */ goto L_0075f301;
}

void f_0075f10a(void)
{
    FN_ENTER(0x0075f10a);
    /* 0075f10a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f10b: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f10f: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075f112: je 0x75f12d */ if (fZ) goto L_0075f12d;
L_0075f114:; BB(0x0075f114);
    /* 0075f114: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075f11a: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0075f11e: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x75f123u); f_007138e0();
    /* 0075f123: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f126: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f129: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
L_0075f12d:; BB(0x0075f12d);
    /* 0075f12d: mov eax, edx */ r_eax = r_edx;
    /* 0075f12f: and eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0075f132: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f134:; BB(0x0075f134);
    /* 0075f134: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f136: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f138:; BB(0x0075f138);
    /* 0075f138: and edx, 0xffdf */ {  u32 a = r_edx; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075f13e: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0075f142: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x75f147u); f_007138e0();
    /* 0075f147: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f14a: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
L_0075f14d:; BB(0x0075f14d);
    /* 0075f14d: call 0x714090 */ r_esp -= 4; W32(r_esp, 0x75f152u); f_00714090();
    /* 0075f152: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f154: je 0x75f27e */ if (fZ) goto L_0075f27e;
L_0075f15a:; BB(0x0075f15a);
    /* 0075f15a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f15d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f160: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f162: je 0x75f178 */ if (fZ) goto L_0075f178;
L_0075f164:; BB(0x0075f164);
    /* 0075f164: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f166: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f16bu); f_0073ec50();
    /* 0075f16b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f16c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f170: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f173: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f178u); f_0075ffec();
L_0075f178:; BB(0x0075f178);
    /* 0075f178: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f17b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f17e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f180: je 0x75f196 */ if (fZ) goto L_0075f196;
L_0075f182:; BB(0x0075f182);
    /* 0075f182: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f184: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f189u); f_0073ec50();
    /* 0075f189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f18a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f18d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f18e: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f191: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f196u); f_0075ffec();
L_0075f196:; BB(0x0075f196);
    /* 0075f196: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f199: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f19c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f19e: je 0x75f1b4 */ if (fZ) goto L_0075f1b4;
L_0075f1a0:; BB(0x0075f1a0);
    /* 0075f1a0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1a7u); f_0073ec50();
    /* 0075f1a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1ac: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f1af: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f1b4u); f_0073d1c4();
L_0075f1b4:; BB(0x0075f1b4);
    /* 0075f1b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1b7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f1ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1bc: je 0x75f1dd */ if (fZ) goto L_0075f1dd;
L_0075f1be:; BB(0x0075f1be);
    /* 0075f1be: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1c3: je 0x75fdab */ if (fZ) goto L_0075fdab;
L_0075f1c9:; BB(0x0075f1c9);
    /* 0075f1c9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1cb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1d0u); f_0073ec50();
    /* 0075f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
L_0075f1dd:; BB(0x0075f1dd);
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f27e:; BB(0x0075f27e);
    /* 0075f27e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f281: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f284: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f286: je 0x75f29c */ if (fZ) goto L_0075f29c;
L_0075f288:; BB(0x0075f288);
    /* 0075f288: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f28a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f28fu); f_0073ec50();
    /* 0075f28f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f290: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f294: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f297: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f29cu); f_0075ffec();
L_0075f29c:; BB(0x0075f29c);
    /* 0075f29c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f29f: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f2a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2a4: je 0x75f2ba */ if (fZ) goto L_0075f2ba;
L_0075f2a6:; BB(0x0075f2a6);
    /* 0075f2a6: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2a8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2adu); f_0073ec50();
    /* 0075f2ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b2: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b5: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f2bau); f_0075ffec();
L_0075f2ba:; BB(0x0075f2ba);
    /* 0075f2ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2bd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f2c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2c2: je 0x75f2d8 */ if (fZ) goto L_0075f2d8;
L_0075f2c4:; BB(0x0075f2c4);
    /* 0075f2c4: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2c6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2cbu); f_0073ec50();
    /* 0075f2cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2d0: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f2d3: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f2d8u); f_0073d1c4();
L_0075f2d8:; BB(0x0075f2d8);
    /* 0075f2d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2db: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f2de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e0: je 0x75f301 */ if (fZ) goto L_0075f301;
L_0075f2e2:; BB(0x0075f2e2);
    /* 0075f2e2: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f2e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e7: je 0x75ff5c */ if (fZ) goto L_0075ff5c;
L_0075f2ed:; BB(0x0075f2ed);
    /* 0075f2ed: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2ef: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2f4u); f_0073ec50();
    /* 0075f2f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2f9: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2fc: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f301u); f_0075ffec();
L_0075f301:; BB(0x0075f301);
    /* 0075f301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f304: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f309: je 0x75f32a */ if (fZ) goto L_0075f32a;
L_0075f30b:; BB(0x0075f30b);
    /* 0075f30b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f310: je 0x75ff43 */ if (fZ) goto L_0075ff43;
L_0075f316:; BB(0x0075f316);
    /* 0075f316: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
L_0075f32a:; BB(0x0075f32a);
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f10a); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
L_0075fdab:; BB(0x0075fdab);
    /* 0075fdab: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdad: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fdb2u); f_0073ec50();
    /* 0075fdb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fdb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdb7: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fdba: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fdbfu); f_0075ffec();
    /* 0075fdbf: jmp 0x75f1dd */ goto L_0075f1dd;
L_0075ff43:; BB(0x0075ff43);
    /* 0075ff43: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff45: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff4au); f_0073ec50();
    /* 0075ff4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff4f: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff52: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff57u); f_0075ffec();
    /* 0075ff57: jmp 0x75f32a */ goto L_0075f32a;
L_0075ff5c:; BB(0x0075ff5c);
    /* 0075ff5c: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff5e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff63u); f_0073ec50();
    /* 0075ff63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff68: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff6b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff70u); f_0075ffec();
    /* 0075ff70: jmp 0x75f301 */ goto L_0075f301;
}

void f_0075f11c(void)
{
    FN_ENTER(0x0075f11c);
    /* 0075f11c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075f11d: push ds */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f11e: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x75f123u); f_007138e0();
    /* 0075f123: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f126: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0075f129: movzx edx, word ptr [ecx + 0x1e] */ r_edx = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0075f12d: mov eax, edx */ r_eax = r_edx;
    /* 0075f12f: and eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0075f132: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f134:; BB(0x0075f134);
    /* 0075f134: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f136: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f138:; BB(0x0075f138);
    /* 0075f138: and edx, 0xffdf */ {  u32 a = r_edx; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075f13e: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0075f142: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x75f147u); f_007138e0();
    /* 0075f147: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f14a: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
L_0075f14d:; BB(0x0075f14d);
    /* 0075f14d: call 0x714090 */ r_esp -= 4; W32(r_esp, 0x75f152u); f_00714090();
    /* 0075f152: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f154: je 0x75f27e */ if (fZ) goto L_0075f27e;
L_0075f15a:; BB(0x0075f15a);
    /* 0075f15a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f15d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f160: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f162: je 0x75f178 */ if (fZ) goto L_0075f178;
L_0075f164:; BB(0x0075f164);
    /* 0075f164: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f166: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f16bu); f_0073ec50();
    /* 0075f16b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f16c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f170: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f173: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f178u); f_0075ffec();
L_0075f178:; BB(0x0075f178);
    /* 0075f178: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f17b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f17e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f180: je 0x75f196 */ if (fZ) goto L_0075f196;
L_0075f182:; BB(0x0075f182);
    /* 0075f182: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f184: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f189u); f_0073ec50();
    /* 0075f189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f18a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f18d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f18e: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f191: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f196u); f_0075ffec();
L_0075f196:; BB(0x0075f196);
    /* 0075f196: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f199: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f19c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f19e: je 0x75f1b4 */ if (fZ) goto L_0075f1b4;
L_0075f1a0:; BB(0x0075f1a0);
    /* 0075f1a0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1a7u); f_0073ec50();
    /* 0075f1a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1ac: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f1af: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f1b4u); f_0073d1c4();
L_0075f1b4:; BB(0x0075f1b4);
    /* 0075f1b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1b7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f1ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1bc: je 0x75f1dd */ if (fZ) goto L_0075f1dd;
L_0075f1be:; BB(0x0075f1be);
    /* 0075f1be: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1c3: je 0x75fdab */ if (fZ) goto L_0075fdab;
L_0075f1c9:; BB(0x0075f1c9);
    /* 0075f1c9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1cb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1d0u); f_0073ec50();
    /* 0075f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
L_0075f1dd:; BB(0x0075f1dd);
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f27e:; BB(0x0075f27e);
    /* 0075f27e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f281: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f284: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f286: je 0x75f29c */ if (fZ) goto L_0075f29c;
L_0075f288:; BB(0x0075f288);
    /* 0075f288: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f28a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f28fu); f_0073ec50();
    /* 0075f28f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f290: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f294: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f297: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f29cu); f_0075ffec();
L_0075f29c:; BB(0x0075f29c);
    /* 0075f29c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f29f: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f2a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2a4: je 0x75f2ba */ if (fZ) goto L_0075f2ba;
L_0075f2a6:; BB(0x0075f2a6);
    /* 0075f2a6: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2a8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2adu); f_0073ec50();
    /* 0075f2ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b2: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b5: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f2bau); f_0075ffec();
L_0075f2ba:; BB(0x0075f2ba);
    /* 0075f2ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2bd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f2c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2c2: je 0x75f2d8 */ if (fZ) goto L_0075f2d8;
L_0075f2c4:; BB(0x0075f2c4);
    /* 0075f2c4: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2c6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2cbu); f_0073ec50();
    /* 0075f2cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2d0: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f2d3: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f2d8u); f_0073d1c4();
L_0075f2d8:; BB(0x0075f2d8);
    /* 0075f2d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2db: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f2de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e0: je 0x75f301 */ if (fZ) goto L_0075f301;
L_0075f2e2:; BB(0x0075f2e2);
    /* 0075f2e2: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f2e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e7: je 0x75ff5c */ if (fZ) goto L_0075ff5c;
L_0075f2ed:; BB(0x0075f2ed);
    /* 0075f2ed: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2ef: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2f4u); f_0073ec50();
    /* 0075f2f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2f9: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2fc: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f301u); f_0075ffec();
L_0075f301:; BB(0x0075f301);
    /* 0075f301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f304: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f309: je 0x75f32a */ if (fZ) goto L_0075f32a;
L_0075f30b:; BB(0x0075f30b);
    /* 0075f30b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f310: je 0x75ff43 */ if (fZ) goto L_0075ff43;
L_0075f316:; BB(0x0075f316);
    /* 0075f316: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
L_0075f32a:; BB(0x0075f32a);
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f11c); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
L_0075fdab:; BB(0x0075fdab);
    /* 0075fdab: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdad: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fdb2u); f_0073ec50();
    /* 0075fdb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fdb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdb7: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fdba: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fdbfu); f_0075ffec();
    /* 0075fdbf: jmp 0x75f1dd */ goto L_0075f1dd;
L_0075ff43:; BB(0x0075ff43);
    /* 0075ff43: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff45: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff4au); f_0073ec50();
    /* 0075ff4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff4f: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff52: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff57u); f_0075ffec();
    /* 0075ff57: jmp 0x75f32a */ goto L_0075f32a;
L_0075ff5c:; BB(0x0075ff5c);
    /* 0075ff5c: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff5e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff63u); f_0073ec50();
    /* 0075ff63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff68: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff6b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff70u); f_0075ffec();
    /* 0075ff70: jmp 0x75f301 */ goto L_0075f301;
}

void f_0075f130(void)
{
    FN_ENTER(0x0075f130);
    /* 0075f130: loopne 0x75f152 */ r_ecx--; if (r_ecx && !fZ) goto L_0075f152;
    /* 0075f132: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f134:; BB(0x0075f134);
    /* 0075f134: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f136: je 0x75f14d */ if (fZ) goto L_0075f14d;
L_0075f138:; BB(0x0075f138);
    /* 0075f138: and edx, 0xffdf */ {  u32 a = r_edx; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075f13e: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 0075f142: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x75f147u); f_007138e0();
    /* 0075f147: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f14a: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
L_0075f14d:; BB(0x0075f14d);
    /* 0075f14d: call 0x714090 */ r_esp -= 4; W32(r_esp, 0x75f152u); f_00714090();
L_0075f152:; BB(0x0075f152);
    /* 0075f152: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f154: je 0x75f27e */ if (fZ) goto L_0075f27e;
L_0075f15a:; BB(0x0075f15a);
    /* 0075f15a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f15d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f160: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f162: je 0x75f178 */ if (fZ) goto L_0075f178;
L_0075f164:; BB(0x0075f164);
    /* 0075f164: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f166: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f16bu); f_0073ec50();
    /* 0075f16b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f16c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f170: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f173: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f178u); f_0075ffec();
L_0075f178:; BB(0x0075f178);
    /* 0075f178: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f17b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f17e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f180: je 0x75f196 */ if (fZ) goto L_0075f196;
L_0075f182:; BB(0x0075f182);
    /* 0075f182: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f184: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f189u); f_0073ec50();
    /* 0075f189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f18a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f18d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f18e: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f191: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f196u); f_0075ffec();
L_0075f196:; BB(0x0075f196);
    /* 0075f196: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f199: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f19c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f19e: je 0x75f1b4 */ if (fZ) goto L_0075f1b4;
L_0075f1a0:; BB(0x0075f1a0);
    /* 0075f1a0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1a7u); f_0073ec50();
    /* 0075f1a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1ac: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f1af: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f1b4u); f_0073d1c4();
L_0075f1b4:; BB(0x0075f1b4);
    /* 0075f1b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1b7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f1ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1bc: je 0x75f1dd */ if (fZ) goto L_0075f1dd;
L_0075f1be:; BB(0x0075f1be);
    /* 0075f1be: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1c3: je 0x75fdab */ if (fZ) goto L_0075fdab;
L_0075f1c9:; BB(0x0075f1c9);
    /* 0075f1c9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1cb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1d0u); f_0073ec50();
    /* 0075f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
L_0075f1dd:; BB(0x0075f1dd);
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f27e:; BB(0x0075f27e);
    /* 0075f27e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f281: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f284: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f286: je 0x75f29c */ if (fZ) goto L_0075f29c;
L_0075f288:; BB(0x0075f288);
    /* 0075f288: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f28a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f28fu); f_0073ec50();
    /* 0075f28f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f290: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f294: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f297: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f29cu); f_0075ffec();
L_0075f29c:; BB(0x0075f29c);
    /* 0075f29c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f29f: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f2a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2a4: je 0x75f2ba */ if (fZ) goto L_0075f2ba;
L_0075f2a6:; BB(0x0075f2a6);
    /* 0075f2a6: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2a8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2adu); f_0073ec50();
    /* 0075f2ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b2: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b5: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f2bau); f_0075ffec();
L_0075f2ba:; BB(0x0075f2ba);
    /* 0075f2ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2bd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f2c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2c2: je 0x75f2d8 */ if (fZ) goto L_0075f2d8;
L_0075f2c4:; BB(0x0075f2c4);
    /* 0075f2c4: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2c6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2cbu); f_0073ec50();
    /* 0075f2cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2d0: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f2d3: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f2d8u); f_0073d1c4();
L_0075f2d8:; BB(0x0075f2d8);
    /* 0075f2d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2db: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f2de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e0: je 0x75f301 */ if (fZ) goto L_0075f301;
L_0075f2e2:; BB(0x0075f2e2);
    /* 0075f2e2: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f2e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e7: je 0x75ff5c */ if (fZ) goto L_0075ff5c;
L_0075f2ed:; BB(0x0075f2ed);
    /* 0075f2ed: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2ef: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2f4u); f_0073ec50();
    /* 0075f2f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2f9: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2fc: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f301u); f_0075ffec();
L_0075f301:; BB(0x0075f301);
    /* 0075f301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f304: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f309: je 0x75f32a */ if (fZ) goto L_0075f32a;
L_0075f30b:; BB(0x0075f30b);
    /* 0075f30b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f310: je 0x75ff43 */ if (fZ) goto L_0075ff43;
L_0075f316:; BB(0x0075f316);
    /* 0075f316: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
L_0075f32a:; BB(0x0075f32a);
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f130); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
L_0075fdab:; BB(0x0075fdab);
    /* 0075fdab: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdad: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fdb2u); f_0073ec50();
    /* 0075fdb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fdb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdb7: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fdba: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fdbfu); f_0075ffec();
    /* 0075fdbf: jmp 0x75f1dd */ goto L_0075f1dd;
L_0075ff43:; BB(0x0075ff43);
    /* 0075ff43: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff45: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff4au); f_0073ec50();
    /* 0075ff4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff4f: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff52: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff57u); f_0075ffec();
    /* 0075ff57: jmp 0x75f32a */ goto L_0075f32a;
L_0075ff5c:; BB(0x0075ff5c);
    /* 0075ff5c: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff5e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff63u); f_0073ec50();
    /* 0075ff63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff68: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff6b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff70u); f_0075ffec();
    /* 0075ff70: jmp 0x75f301 */ goto L_0075f301;
}

void f_0075f14e(void)
{
    FN_ENTER(0x0075f14e);
    /* 0075f14e: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0075f150: sti  */ UNSUP(0x0075f150, "sti ");
    /* 0075f151: inc dword ptr [ebp + 0x24840fc0] */ { u32 ad = (u32)(r_ebp+0x24840fc0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0075f157: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0075f159: add byte ptr [ebx + 0x508bec45], cl */ { u32 ad = (u32)(r_ebx+0x508bec45u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f15f: xor byte ptr [ebp + 0x6a1474d2], al */ { u32 ad = (u32)(r_ebp+0x6a1474d2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 0075f165: imul ebp, eax, 0xfffdfae5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xfffdfae5u; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0075f16b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f16c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f170: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f173: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f178u); f_0075ffec();
    /* 0075f178: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f17b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f17e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f180: je 0x75f196 */ if (fZ) goto L_0075f196;
L_0075f182:; BB(0x0075f182);
    /* 0075f182: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f184: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f189u); f_0073ec50();
    /* 0075f189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f18a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f18d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f18e: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f191: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f196u); f_0075ffec();
L_0075f196:; BB(0x0075f196);
    /* 0075f196: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f199: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f19c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f19e: je 0x75f1b4 */ if (fZ) goto L_0075f1b4;
L_0075f1a0:; BB(0x0075f1a0);
    /* 0075f1a0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1a7u); f_0073ec50();
    /* 0075f1a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1ac: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f1af: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f1b4u); f_0073d1c4();
L_0075f1b4:; BB(0x0075f1b4);
    /* 0075f1b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1b7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f1ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1bc: je 0x75f1dd */ if (fZ) goto L_0075f1dd;
L_0075f1be:; BB(0x0075f1be);
    /* 0075f1be: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1c3: je 0x75fdab */ if (fZ) goto L_0075fdab;
L_0075f1c9:; BB(0x0075f1c9);
    /* 0075f1c9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1cb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1d0u); f_0073ec50();
    /* 0075f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
L_0075f1dd:; BB(0x0075f1dd);
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f14e); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
L_0075fdab:; BB(0x0075fdab);
    /* 0075fdab: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdad: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fdb2u); f_0073ec50();
    /* 0075fdb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fdb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdb7: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fdba: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fdbfu); f_0075ffec();
    /* 0075fdbf: jmp 0x75f1dd */ goto L_0075f1dd;
}

void f_0075f15e(void)
{
    FN_ENTER(0x0075f15e);
    /* 0075f15e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f15f: xor byte ptr [ebp + 0x6a1474d2], al */ { u32 ad = (u32)(r_ebp+0x6a1474d2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 0075f165: imul ebp, eax, 0xfffdfae5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xfffdfae5u; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0075f16b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f16c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f170: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f173: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f178u); f_0075ffec();
    /* 0075f178: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f17b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f17e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f180: je 0x75f196 */ if (fZ) goto L_0075f196;
L_0075f182:; BB(0x0075f182);
    /* 0075f182: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f184: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f189u); f_0073ec50();
    /* 0075f189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f18a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f18d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f18e: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f191: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f196u); f_0075ffec();
L_0075f196:; BB(0x0075f196);
    /* 0075f196: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f199: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f19c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f19e: je 0x75f1b4 */ if (fZ) goto L_0075f1b4;
L_0075f1a0:; BB(0x0075f1a0);
    /* 0075f1a0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1a7u); f_0073ec50();
    /* 0075f1a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1ac: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f1af: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f1b4u); f_0073d1c4();
L_0075f1b4:; BB(0x0075f1b4);
    /* 0075f1b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1b7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f1ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1bc: je 0x75f1dd */ if (fZ) goto L_0075f1dd;
L_0075f1be:; BB(0x0075f1be);
    /* 0075f1be: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1c3: je 0x75fdab */ if (fZ) goto L_0075fdab;
L_0075f1c9:; BB(0x0075f1c9);
    /* 0075f1c9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1cb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1d0u); f_0073ec50();
    /* 0075f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
L_0075f1dd:; BB(0x0075f1dd);
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f15e); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
L_0075fdab:; BB(0x0075fdab);
    /* 0075fdab: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdad: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fdb2u); f_0073ec50();
    /* 0075fdb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fdb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdb7: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fdba: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fdbfu); f_0075ffec();
    /* 0075fdbf: jmp 0x75f1dd */ goto L_0075f1dd;
}

void f_0075f16e(void)
{
    FN_ENTER(0x0075f16e);
    /* 0075f16e: in al, dx */ UNSUP(0x0075f16e, "in al, dx");
    /* 0075f16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f170: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f173: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f178u); f_0075ffec();
    /* 0075f178: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f17b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f17e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f180: je 0x75f196 */ if (fZ) goto L_0075f196;
L_0075f182:; BB(0x0075f182);
    /* 0075f182: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f184: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f189u); f_0073ec50();
    /* 0075f189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f18a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f18d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f18e: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f191: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f196u); f_0075ffec();
L_0075f196:; BB(0x0075f196);
    /* 0075f196: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f199: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f19c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f19e: je 0x75f1b4 */ if (fZ) goto L_0075f1b4;
L_0075f1a0:; BB(0x0075f1a0);
    /* 0075f1a0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1a7u); f_0073ec50();
    /* 0075f1a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1ac: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f1af: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f1b4u); f_0073d1c4();
L_0075f1b4:; BB(0x0075f1b4);
    /* 0075f1b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1b7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f1ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1bc: je 0x75f1dd */ if (fZ) goto L_0075f1dd;
L_0075f1be:; BB(0x0075f1be);
    /* 0075f1be: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1c3: je 0x75fdab */ if (fZ) goto L_0075fdab;
L_0075f1c9:; BB(0x0075f1c9);
    /* 0075f1c9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1cb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1d0u); f_0073ec50();
    /* 0075f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
L_0075f1dd:; BB(0x0075f1dd);
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f16e); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
L_0075fdab:; BB(0x0075fdab);
    /* 0075fdab: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdad: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fdb2u); f_0073ec50();
    /* 0075fdb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fdb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdb7: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fdba: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fdbfu); f_0075ffec();
    /* 0075fdbf: jmp 0x75f1dd */ goto L_0075f1dd;
}

void f_0075f178(void)
{
    FN_ENTER(0x0075f178);
    /* 0075f178: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f17b: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f17e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f180: je 0x75f196 */ if (fZ) goto L_0075f196;
L_0075f182:; BB(0x0075f182);
    /* 0075f182: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f184: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f189u); f_0073ec50();
    /* 0075f189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f18a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f18d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f18e: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f191: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f196u); f_0075ffec();
L_0075f196:; BB(0x0075f196);
    /* 0075f196: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f199: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f19c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f19e: je 0x75f1b4 */ if (fZ) goto L_0075f1b4;
L_0075f1a0:; BB(0x0075f1a0);
    /* 0075f1a0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1a7u); f_0073ec50();
    /* 0075f1a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1ac: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f1af: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f1b4u); f_0073d1c4();
L_0075f1b4:; BB(0x0075f1b4);
    /* 0075f1b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1b7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f1ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1bc: je 0x75f1dd */ if (fZ) goto L_0075f1dd;
L_0075f1be:; BB(0x0075f1be);
    /* 0075f1be: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1c3: je 0x75fdab */ if (fZ) goto L_0075fdab;
L_0075f1c9:; BB(0x0075f1c9);
    /* 0075f1c9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1cb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1d0u); f_0073ec50();
    /* 0075f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
L_0075f1dd:; BB(0x0075f1dd);
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f178); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
L_0075fdab:; BB(0x0075fdab);
    /* 0075fdab: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdad: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fdb2u); f_0073ec50();
    /* 0075fdb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fdb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdb7: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fdba: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fdbfu); f_0075ffec();
    /* 0075fdbf: jmp 0x75f1dd */ goto L_0075f1dd;
}

void f_0075f184(void)
{
    FN_ENTER(0x0075f184);
    /* 0075f184: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f189u); f_0073ec50();
    /* 0075f189: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f18a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f18d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f18e: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f191: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f196u); f_0075ffec();
    /* 0075f196: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f199: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f19c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f19e: je 0x75f1b4 */ if (fZ) goto L_0075f1b4;
L_0075f1a0:; BB(0x0075f1a0);
    /* 0075f1a0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1a7u); f_0073ec50();
    /* 0075f1a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1ac: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f1af: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f1b4u); f_0073d1c4();
L_0075f1b4:; BB(0x0075f1b4);
    /* 0075f1b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1b7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f1ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1bc: je 0x75f1dd */ if (fZ) goto L_0075f1dd;
L_0075f1be:; BB(0x0075f1be);
    /* 0075f1be: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1c3: je 0x75fdab */ if (fZ) goto L_0075fdab;
L_0075f1c9:; BB(0x0075f1c9);
    /* 0075f1c9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1cb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1d0u); f_0073ec50();
    /* 0075f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
L_0075f1dd:; BB(0x0075f1dd);
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f184); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
L_0075fdab:; BB(0x0075fdab);
    /* 0075fdab: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdad: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fdb2u); f_0073ec50();
    /* 0075fdb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fdb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdb7: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fdba: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fdbfu); f_0075ffec();
    /* 0075fdbf: jmp 0x75f1dd */ goto L_0075f1dd;
}

void f_0075f190(void)
{
    FN_ENTER(0x0075f190);
    /* 0075f190: xor al, 0xe8 */ {  u32 a = (u8)r_eax; u32 b = 0xe8u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075f192: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075f193: push cs */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f194: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f196: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f199: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f19c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f19e: je 0x75f1b4 */ if (fZ) goto L_0075f1b4;
L_0075f1a0:; BB(0x0075f1a0);
    /* 0075f1a0: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1a7u); f_0073ec50();
    /* 0075f1a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1ac: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f1af: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f1b4u); f_0073d1c4();
L_0075f1b4:; BB(0x0075f1b4);
    /* 0075f1b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1b7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f1ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1bc: je 0x75f1dd */ if (fZ) goto L_0075f1dd;
L_0075f1be:; BB(0x0075f1be);
    /* 0075f1be: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1c3: je 0x75fdab */ if (fZ) goto L_0075fdab;
L_0075f1c9:; BB(0x0075f1c9);
    /* 0075f1c9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1cb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1d0u); f_0073ec50();
    /* 0075f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
L_0075f1dd:; BB(0x0075f1dd);
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f190); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
L_0075fdab:; BB(0x0075fdab);
    /* 0075fdab: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdad: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fdb2u); f_0073ec50();
    /* 0075fdb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fdb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdb7: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fdba: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fdbfu); f_0075ffec();
    /* 0075fdbf: jmp 0x75f1dd */ goto L_0075f1dd;
}

void f_0075f1a6(void)
{
    FN_ENTER(0x0075f1a6);
    /* 0075f1a6: call ptr [ecx + 0x50] */ { u32 t = R32((u32)(r_ecx+0x50u)); r_esp -= 4; W32(r_esp, 0x75f1a9u); call_ind(t); }
    /* 0075f1a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1ac: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f1af: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f1b4u); f_0073d1c4();
    /* 0075f1b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1b7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f1ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1bc: je 0x75f1dd */ if (fZ) goto L_0075f1dd;
L_0075f1be:; BB(0x0075f1be);
    /* 0075f1be: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1c3: je 0x75fdab */ if (fZ) goto L_0075fdab;
L_0075f1c9:; BB(0x0075f1c9);
    /* 0075f1c9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1cb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1d0u); f_0073ec50();
    /* 0075f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
L_0075f1dd:; BB(0x0075f1dd);
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f1a6); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
L_0075fdab:; BB(0x0075fdab);
    /* 0075fdab: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdad: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fdb2u); f_0073ec50();
    /* 0075fdb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fdb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdb7: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fdba: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fdbfu); f_0075ffec();
    /* 0075fdbf: jmp 0x75f1dd */ goto L_0075f1dd;
}

void f_0075f1b8(void)
{
    FN_ENTER(0x0075f1b8);
    /* 0075f1b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1b9: cmp al, 0x85 */ {  u32 a = (u8)r_eax; u32 b = 0x85u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0075f1bb: sal byte ptr [edi + ebx - 0x75], cl */ { u32 ad = (u32)(r_edi+r_ebx+0xffffff8bu); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 0075f1bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1c0: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f1c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1c3: je 0x75fdab */ if (fZ) goto L_0075fdab;
L_0075f1c9:; BB(0x0075f1c9);
    /* 0075f1c9: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1cb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1d0u); f_0073ec50();
    /* 0075f1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
L_0075f1dd:; BB(0x0075f1dd);
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f1b8); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
L_0075fdab:; BB(0x0075fdab);
    /* 0075fdab: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdad: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fdb2u); f_0073ec50();
    /* 0075fdb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fdb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdb7: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fdba: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fdbfu); f_0075ffec();
    /* 0075fdbf: jmp 0x75f1dd */ goto L_0075f1dd;
}

void f_0075f1ce(void)
{
    FN_ENTER(0x0075f1ce);
    /* 0075f1ce: std  */ rt_df = 1;
    /* 0075f1cf: call ptr [ecx - 0x75] */ { u32 t = R32((u32)(r_ecx+0xffffff8bu)); r_esp -= 4; W32(r_esp, 0x75f1d2u); call_ind(t); }
    /* 0075f1d2: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0075f1d3: in al, dx */ UNSUP(0x0075f1d3, "in al, dx");
    /* 0075f1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d5: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f1d8: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f1ddu); f_0075ffec();
    /* 0075f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f1ce); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
}

void f_0075f1de(void)
{
    FN_ENTER(0x0075f1de);
    /* 0075f1de: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0075f1df: in al, dx */ UNSUP(0x0075f1df, "in al, dx");
    /* 0075f1e0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f1e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1e5: je 0x75f206 */ if (fZ) goto L_0075f206;
L_0075f1e7:; BB(0x0075f1e7);
    /* 0075f1e7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f1ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f1ec: je 0x75fd92 */ if (fZ) goto L_0075fd92;
L_0075f1f2:; BB(0x0075f1f2);
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
L_0075f206:; BB(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f1de); r_esp += 4; return;
L_0075fd92:; BB(0x0075fd92);
    /* 0075fd92: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd94: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fd99u); f_0073ec50();
    /* 0075fd99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd9e: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fda1: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75fda6u); f_0075ffec();
    /* 0075fda6: jmp 0x75f206 */ goto L_0075f206;
}

void f_0075f1f0(void)
{
    FN_ENTER(0x0075f1f0);
    /* 0075f1f0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f1f2: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1f4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f1f9u); f_0073ec50();
    /* 0075f1f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f1fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f1fe: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f201: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f206u); f_0075ffec();
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f1f0); r_esp += 4; return;
}

void f_0075f206(void)
{
    FN_ENTER(0x0075f206);
    /* 0075f206: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f209: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f20c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f20e: je 0x75f224 */ if (fZ) goto L_0075f224;
L_0075f210:; BB(0x0075f210);
    /* 0075f210: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f212: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f217u); f_0073ec50();
    /* 0075f217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
L_0075f224:; BB(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f206); r_esp += 4; return;
}

void f_0075f214(void)
{
    FN_ENTER(0x0075f214);
    /* 0075f214: cli  */ UNSUP(0x0075f214, "cli ");
    /* 0075f215: std  */ rt_df = 1;
    /* 0075f216: call ptr [ecx - 0x75] */ { u32 t = R32((u32)(r_ecx+0xffffff8bu)); r_esp -= 4; W32(r_esp, 0x75f219u); call_ind(t); }
    /* 0075f219: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0075f21a: in al, dx */ UNSUP(0x0075f21a, "in al, dx");
    /* 0075f21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f21c: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f21f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f224u); f_0075ffec();
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f214); r_esp += 4; return;
}

void f_0075f224(void)
{
    FN_ENTER(0x0075f224);
    /* 0075f224: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f227: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f22a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f22c: je 0x75f242 */ if (fZ) goto L_0075f242;
L_0075f22e:; BB(0x0075f22e);
    /* 0075f22e: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 0075f230: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f235u); f_0073ec50();
    /* 0075f235: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
L_0075f242:; BB(0x0075f242);
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f224); r_esp += 4; return;
}

void f_0075f236(void)
{
    FN_ENTER(0x0075f236);
    /* 0075f236: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f23a: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f23d: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f242u); f_0075ffec();
    /* 0075f242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f245: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f236); r_esp += 4; return;
}

void f_0075f248(void)
{
    FN_ENTER(0x0075f248);
    /* 0075f248: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f24a: je 0x75f260 */ if (fZ) goto L_0075f260;
L_0075f24c:; BB(0x0075f24c);
    /* 0075f24c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f24e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f253u); f_0073ec50();
    /* 0075f253: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f254: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f258: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
L_0075f260:; BB(0x0075f260);
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f248); r_esp += 4; return;
}

void f_0075f25a(void)
{
    FN_ENTER(0x0075f25a);
    /* 0075f25a: dec esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075f25b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f260u); f_0075ffec();
    /* 0075f260: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f265: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f26au); f_00760014();
    /* 0075f26a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f25a); r_esp += 4; return;
}

void f_0075f266(void)
{
    FN_ENTER(0x0075f266);
    /* 0075f266: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 0075f267: or eax, 0x558b0000 */ {  u32 a = r_eax; u32 b = 0x558b0000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f26c: in al, dx */ UNSUP(0x0075f26c, "in al, dx");
    /* 0075f26d: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f271: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f276: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f279: jmp 0x75f3a5 */ goto L_0075f3a5;
L_0075f3a5:; BB(0x0075f3a5);
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f266); r_esp += 4; return;
}

void f_0075f280(void)
{
    FN_ENTER(0x0075f280);
    /* 0075f280: in al, dx */ UNSUP(0x0075f280, "in al, dx");
    /* 0075f281: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0075f284: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f286: je 0x75f29c */ if (fZ) goto L_0075f29c;
L_0075f288:; BB(0x0075f288);
    /* 0075f288: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f28a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f28fu); f_0073ec50();
    /* 0075f28f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f290: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f294: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f297: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f29cu); f_0075ffec();
L_0075f29c:; BB(0x0075f29c);
    /* 0075f29c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f29f: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f2a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2a4: je 0x75f2ba */ if (fZ) goto L_0075f2ba;
L_0075f2a6:; BB(0x0075f2a6);
    /* 0075f2a6: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2a8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2adu); f_0073ec50();
    /* 0075f2ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b2: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b5: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f2bau); f_0075ffec();
L_0075f2ba:; BB(0x0075f2ba);
    /* 0075f2ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2bd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f2c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2c2: je 0x75f2d8 */ if (fZ) goto L_0075f2d8;
L_0075f2c4:; BB(0x0075f2c4);
    /* 0075f2c4: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2c6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2cbu); f_0073ec50();
    /* 0075f2cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2d0: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f2d3: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f2d8u); f_0073d1c4();
L_0075f2d8:; BB(0x0075f2d8);
    /* 0075f2d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2db: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f2de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e0: je 0x75f301 */ if (fZ) goto L_0075f301;
L_0075f2e2:; BB(0x0075f2e2);
    /* 0075f2e2: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f2e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e7: je 0x75ff5c */ if (fZ) goto L_0075ff5c;
L_0075f2ed:; BB(0x0075f2ed);
    /* 0075f2ed: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2ef: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2f4u); f_0073ec50();
    /* 0075f2f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2f9: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2fc: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f301u); f_0075ffec();
L_0075f301:; BB(0x0075f301);
    /* 0075f301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f304: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f309: je 0x75f32a */ if (fZ) goto L_0075f32a;
L_0075f30b:; BB(0x0075f30b);
    /* 0075f30b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f310: je 0x75ff43 */ if (fZ) goto L_0075ff43;
L_0075f316:; BB(0x0075f316);
    /* 0075f316: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
L_0075f32a:; BB(0x0075f32a);
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f280); r_esp += 4; return;
L_0075ff43:; BB(0x0075ff43);
    /* 0075ff43: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff45: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff4au); f_0073ec50();
    /* 0075ff4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff4f: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff52: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff57u); f_0075ffec();
    /* 0075ff57: jmp 0x75f32a */ goto L_0075f32a;
L_0075ff5c:; BB(0x0075ff5c);
    /* 0075ff5c: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff5e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff63u); f_0073ec50();
    /* 0075ff63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff68: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff6b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff70u); f_0075ffec();
    /* 0075ff70: jmp 0x75f301 */ goto L_0075f301;
}

void f_0075f290(void)
{
    FN_ENTER(0x0075f290);
    /* 0075f290: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f293: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f294: push dword ptr [ecx + 0x30] */ { u32 v = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f297: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f29cu); f_0075ffec();
    /* 0075f29c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f29f: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0075f2a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2a4: je 0x75f2ba */ if (fZ) goto L_0075f2ba;
L_0075f2a6:; BB(0x0075f2a6);
    /* 0075f2a6: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2a8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2adu); f_0073ec50();
    /* 0075f2ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b2: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b5: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f2bau); f_0075ffec();
L_0075f2ba:; BB(0x0075f2ba);
    /* 0075f2ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2bd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f2c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2c2: je 0x75f2d8 */ if (fZ) goto L_0075f2d8;
L_0075f2c4:; BB(0x0075f2c4);
    /* 0075f2c4: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2c6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2cbu); f_0073ec50();
    /* 0075f2cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2d0: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f2d3: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f2d8u); f_0073d1c4();
L_0075f2d8:; BB(0x0075f2d8);
    /* 0075f2d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2db: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f2de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e0: je 0x75f301 */ if (fZ) goto L_0075f301;
L_0075f2e2:; BB(0x0075f2e2);
    /* 0075f2e2: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f2e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e7: je 0x75ff5c */ if (fZ) goto L_0075ff5c;
L_0075f2ed:; BB(0x0075f2ed);
    /* 0075f2ed: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2ef: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2f4u); f_0073ec50();
    /* 0075f2f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2f9: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2fc: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f301u); f_0075ffec();
L_0075f301:; BB(0x0075f301);
    /* 0075f301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f304: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f309: je 0x75f32a */ if (fZ) goto L_0075f32a;
L_0075f30b:; BB(0x0075f30b);
    /* 0075f30b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f310: je 0x75ff43 */ if (fZ) goto L_0075ff43;
L_0075f316:; BB(0x0075f316);
    /* 0075f316: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
L_0075f32a:; BB(0x0075f32a);
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f290); r_esp += 4; return;
L_0075ff43:; BB(0x0075ff43);
    /* 0075ff43: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff45: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff4au); f_0073ec50();
    /* 0075ff4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff4f: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff52: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff57u); f_0075ffec();
    /* 0075ff57: jmp 0x75f32a */ goto L_0075f32a;
L_0075ff5c:; BB(0x0075ff5c);
    /* 0075ff5c: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff5e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff63u); f_0073ec50();
    /* 0075ff63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff68: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff6b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff70u); f_0075ffec();
    /* 0075ff70: jmp 0x75f301 */ goto L_0075f301;
}

void f_0075f2a6(void)
{
    FN_ENTER(0x0075f2a6);
    /* 0075f2a6: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2a8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2adu); f_0073ec50();
    /* 0075f2ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b2: push dword ptr [ecx + 0x34] */ { u32 v = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2b5: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f2bau); f_0075ffec();
    /* 0075f2ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2bd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f2c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2c2: je 0x75f2d8 */ if (fZ) goto L_0075f2d8;
L_0075f2c4:; BB(0x0075f2c4);
    /* 0075f2c4: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2c6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2cbu); f_0073ec50();
    /* 0075f2cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2d0: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f2d3: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f2d8u); f_0073d1c4();
L_0075f2d8:; BB(0x0075f2d8);
    /* 0075f2d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2db: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f2de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e0: je 0x75f301 */ if (fZ) goto L_0075f301;
L_0075f2e2:; BB(0x0075f2e2);
    /* 0075f2e2: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f2e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e7: je 0x75ff5c */ if (fZ) goto L_0075ff5c;
L_0075f2ed:; BB(0x0075f2ed);
    /* 0075f2ed: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2ef: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2f4u); f_0073ec50();
    /* 0075f2f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2f9: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2fc: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f301u); f_0075ffec();
L_0075f301:; BB(0x0075f301);
    /* 0075f301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f304: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f309: je 0x75f32a */ if (fZ) goto L_0075f32a;
L_0075f30b:; BB(0x0075f30b);
    /* 0075f30b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f310: je 0x75ff43 */ if (fZ) goto L_0075ff43;
L_0075f316:; BB(0x0075f316);
    /* 0075f316: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
L_0075f32a:; BB(0x0075f32a);
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f2a6); r_esp += 4; return;
L_0075ff43:; BB(0x0075ff43);
    /* 0075ff43: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff45: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff4au); f_0073ec50();
    /* 0075ff4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff4f: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff52: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff57u); f_0075ffec();
    /* 0075ff57: jmp 0x75f32a */ goto L_0075f32a;
L_0075ff5c:; BB(0x0075ff5c);
    /* 0075ff5c: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff5e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff63u); f_0073ec50();
    /* 0075ff63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff68: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff6b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff70u); f_0075ffec();
    /* 0075ff70: jmp 0x75f301 */ goto L_0075f301;
}

void f_0075f2b8(void)
{
    FN_ENTER(0x0075f2b8);
    /* 0075f2b8: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f2ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2bd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075f2c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2c2: je 0x75f2d8 */ if (fZ) goto L_0075f2d8;
L_0075f2c4:; BB(0x0075f2c4);
    /* 0075f2c4: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2c6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2cbu); f_0073ec50();
    /* 0075f2cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2d0: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f2d3: call 0x73d1c4 */ r_esp -= 4; W32(r_esp, 0x75f2d8u); f_0073d1c4();
L_0075f2d8:; BB(0x0075f2d8);
    /* 0075f2d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2db: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f2de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e0: je 0x75f301 */ if (fZ) goto L_0075f301;
L_0075f2e2:; BB(0x0075f2e2);
    /* 0075f2e2: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f2e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e7: je 0x75ff5c */ if (fZ) goto L_0075ff5c;
L_0075f2ed:; BB(0x0075f2ed);
    /* 0075f2ed: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2ef: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2f4u); f_0073ec50();
    /* 0075f2f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2f9: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2fc: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f301u); f_0075ffec();
L_0075f301:; BB(0x0075f301);
    /* 0075f301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f304: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f309: je 0x75f32a */ if (fZ) goto L_0075f32a;
L_0075f30b:; BB(0x0075f30b);
    /* 0075f30b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f310: je 0x75ff43 */ if (fZ) goto L_0075ff43;
L_0075f316:; BB(0x0075f316);
    /* 0075f316: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
L_0075f32a:; BB(0x0075f32a);
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f2b8); r_esp += 4; return;
L_0075ff43:; BB(0x0075ff43);
    /* 0075ff43: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff45: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff4au); f_0073ec50();
    /* 0075ff4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff4f: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff52: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff57u); f_0075ffec();
    /* 0075ff57: jmp 0x75f32a */ goto L_0075f32a;
L_0075ff5c:; BB(0x0075ff5c);
    /* 0075ff5c: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff5e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff63u); f_0073ec50();
    /* 0075ff63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff68: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff6b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff70u); f_0075ffec();
    /* 0075ff70: jmp 0x75f301 */ goto L_0075f301;
}

void f_0075f2d4(void)
{
    FN_ENTER(0x0075f2d4);
    /* 0075f2d4: in al, dx */ UNSUP(0x0075f2d4, "in al, dx");
    /* 0075f2d5: fdivp st(5) */ ST(5) = ST(5) / ST(0); FPOP();
    /* 0075f2d7: dec dword ptr [ebx + 0x508bec45] */ { u32 ad = (u32)(r_ebx+0x508bec45u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0075f2dd: cmp al, 0x85 */ {  u32 a = (u8)r_eax; u32 b = 0x85u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0075f2df: sal byte ptr [edi + ebx - 0x75], cl */ { u32 ad = (u32)(r_edi+r_ebx+0xffffff8bu); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 0075f2e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2e4: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f2e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f2e7: je 0x75ff5c */ if (fZ) goto L_0075ff5c;
L_0075f2ed:; BB(0x0075f2ed);
    /* 0075f2ed: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2ef: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2f4u); f_0073ec50();
    /* 0075f2f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2f9: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2fc: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f301u); f_0075ffec();
L_0075f301:; BB(0x0075f301);
    /* 0075f301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f304: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f309: je 0x75f32a */ if (fZ) goto L_0075f32a;
L_0075f30b:; BB(0x0075f30b);
    /* 0075f30b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f310: je 0x75ff43 */ if (fZ) goto L_0075ff43;
L_0075f316:; BB(0x0075f316);
    /* 0075f316: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
L_0075f32a:; BB(0x0075f32a);
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f2d4); r_esp += 4; return;
L_0075ff43:; BB(0x0075ff43);
    /* 0075ff43: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff45: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff4au); f_0073ec50();
    /* 0075ff4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff4f: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff52: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff57u); f_0075ffec();
    /* 0075ff57: jmp 0x75f32a */ goto L_0075f32a;
L_0075ff5c:; BB(0x0075ff5c);
    /* 0075ff5c: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff5e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff63u); f_0073ec50();
    /* 0075ff63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff68: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff6b: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff70u); f_0075ffec();
    /* 0075ff70: jmp 0x75f301 */ goto L_0075f301;
}

void f_0075f2e6(void)
{
    FN_ENTER(0x0075f2e6);
    /* 0075f2e6: ror byte ptr [edi], cl */ { u32 ad = (u32)(r_edi); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 0075f2e8: test byte ptr [edi + 0xc], ch */ {  u32 a = R8((u32)(r_edi+0xcu)); u32 b = (u8)(r_ecx>>8); u32 r = (a & b) & 0xffu;   }
    /* 0075f2eb: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f2ed: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2ef: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f2f4u); f_0073ec50();
    /* 0075f2f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f2f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2f9: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2fc: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f301u); f_0075ffec();
    /* 0075f301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f304: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f309: je 0x75f32a */ if (fZ) goto L_0075f32a;
L_0075f30b:; BB(0x0075f30b);
    /* 0075f30b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f310: je 0x75ff43 */ if (fZ) goto L_0075ff43;
L_0075f316:; BB(0x0075f316);
    /* 0075f316: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
L_0075f32a:; BB(0x0075f32a);
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f2e6); r_esp += 4; return;
L_0075ff43:; BB(0x0075ff43);
    /* 0075ff43: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff45: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff4au); f_0073ec50();
    /* 0075ff4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff4f: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff52: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff57u); f_0075ffec();
    /* 0075ff57: jmp 0x75f32a */ goto L_0075f32a;
}

void f_0075f2f6(void)
{
    FN_ENTER(0x0075f2f6);
    /* 0075f2f6: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0075f2f7: in al, dx */ UNSUP(0x0075f2f7, "in al, dx");
    /* 0075f2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f2f9: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f2fc: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f301u); f_0075ffec();
    /* 0075f301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f304: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f309: je 0x75f32a */ if (fZ) goto L_0075f32a;
L_0075f30b:; BB(0x0075f30b);
    /* 0075f30b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f310: je 0x75ff43 */ if (fZ) goto L_0075ff43;
L_0075f316:; BB(0x0075f316);
    /* 0075f316: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
L_0075f32a:; BB(0x0075f32a);
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f2f6); r_esp += 4; return;
L_0075ff43:; BB(0x0075ff43);
    /* 0075ff43: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff45: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff4au); f_0073ec50();
    /* 0075ff4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff4f: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff52: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff57u); f_0075ffec();
    /* 0075ff57: jmp 0x75f32a */ goto L_0075f32a;
}

void f_0075f304(void)
{
    FN_ENTER(0x0075f304);
    /* 0075f304: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f309: je 0x75f32a */ if (fZ) goto L_0075f32a;
L_0075f30b:; BB(0x0075f30b);
    /* 0075f30b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f30e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f310: je 0x75ff43 */ if (fZ) goto L_0075ff43;
L_0075f316:; BB(0x0075f316);
    /* 0075f316: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
L_0075f32a:; BB(0x0075f32a);
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f304); r_esp += 4; return;
L_0075ff43:; BB(0x0075ff43);
    /* 0075ff43: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff45: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75ff4au); f_0073ec50();
    /* 0075ff4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075ff4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ff4f: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ff52: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75ff57u); f_0075ffec();
    /* 0075ff57: jmp 0x75f32a */ goto L_0075f32a;
}

void f_0075f318(void)
{
    FN_ENTER(0x0075f318);
    /* 0075f318: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f31du); f_0073ec50();
    /* 0075f31d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f31e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f322: push dword ptr [ecx + 0x40] */ { u32 v = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f325: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f32au); f_0075ffec();
    /* 0075f32a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f32d: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f318); r_esp += 4; return;
}

void f_0075f32e(void)
{
    FN_ENTER(0x0075f32e);
    /* 0075f32e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f32f: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f332: je 0x75f348 */ if (fZ) goto L_0075f348;
L_0075f334:; BB(0x0075f334);
    /* 0075f334: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f336: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f33bu); f_0073ec50();
    /* 0075f33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f33c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
L_0075f348:; BB(0x0075f348);
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f32e); r_esp += 4; return;
}

void f_0075f340(void)
{
    FN_ENTER(0x0075f340);
    /* 0075f340: push dword ptr [ecx + 0x44] */ { u32 v = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f343: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f348u); f_0075ffec();
    /* 0075f348: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f34b: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f340); r_esp += 4; return;
}

void f_0075f34e(void)
{
    FN_ENTER(0x0075f34e);
    /* 0075f34e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f350: je 0x75f366 */ if (fZ) goto L_0075f366;
L_0075f352:; BB(0x0075f352);
    /* 0075f352: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f354: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f359u); f_0073ec50();
    /* 0075f359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f35a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
L_0075f366:; BB(0x0075f366);
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f34e); r_esp += 4; return;
}

void f_0075f35c(void)
{
    FN_ENTER(0x0075f35c);
    /* 0075f35c: in al, dx */ UNSUP(0x0075f35c, "in al, dx");
    /* 0075f35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f35e: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f361: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f366u); f_0075ffec();
    /* 0075f366: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f35c); r_esp += 4; return;
}

void f_0075f368(void)
{
    FN_ENTER(0x0075f368);
    /* 0075f368: in al, dx */ UNSUP(0x0075f368, "in al, dx");
    /* 0075f369: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f36c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f36e: je 0x75f384 */ if (fZ) goto L_0075f384;
L_0075f370:; BB(0x0075f370);
    /* 0075f370: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f372: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75f377u); f_0073ec50();
    /* 0075f377: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
L_0075f384:; BB(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f368); r_esp += 4; return;
}

void f_0075f378(void)
{
    FN_ENTER(0x0075f378);
    /* 0075f378: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f37b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f37c: push dword ptr [ecx + 0x4c] */ { u32 v = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f37f: call 0x75ffec */ r_esp -= 4; W32(r_esp, 0x75f384u); f_0075ffec();
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f378); r_esp += 4; return;
}

void f_0075f384(void)
{
    FN_ENTER(0x0075f384);
    /* 0075f384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f389: call 0x760014 */ r_esp -= 4; W32(r_esp, 0x75f38eu); f_00760014();
    /* 0075f38e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f393: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 0075f397: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f39c: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0075f39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75f3a4u); f_00791748();
    /* 0075f3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075f3a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f384); r_esp += 4; return;
}

void f_0075f394(void)
{
    FN_ENTER(0x0075f394);
    /* 0075f394: mov dh, 0x42 */ r_edx = (r_edx & 0xffff00ffu) | (((0x42u) & 0xffu) << 8);
    /* 0075f396: sbb eax, 0xfe25 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xfe25u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0075f39b: add byte ptr [eax - 0x5b17e2be], cl */ { u32 ad = (u32)(r_eax+0xa4e81d42u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f3a1: and eax, dword ptr [ebx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f3a3: add byte ptr [ecx - 0x75], bl */ { u32 ad = (u32)(r_ecx+0xffffff8bu);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f3a6: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0075f3a7: in al, dx */ UNSUP(0x0075f3a7, "in al, dx");
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f394); r_esp += 4; return;
}

void f_0075f3a6(void)
{
    FN_ENTER(0x0075f3a6);
    /* 0075f3a6: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0075f3a7: in al, dx */ UNSUP(0x0075f3a7, "in al, dx");
    /* 0075f3a8: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 0075f3ac: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075f3af: ja 0x75fd81 */ if ((!fC&&!fZ)) goto L_0075fd81;
L_0075f3b5:; BB(0x0075f3b5);
    /* 0075f3b5: mov eax, dword ptr [eax*4 + 0x974a80] */ r_eax = R32((u32)(r_eax*4+0x974a80u));
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f3a6); r_esp += 4; return;
}

void f_0075f3b6(void)
{
    FN_ENTER(0x0075f3b6);
    /* 0075f3b6: add al, 0x85 */ {  u32 a = (u8)r_eax; u32 b = 0x85u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075f3b8: or byte ptr [edx - 0x69], 0 */ { u32 ad = (u32)(r_edx+0xffffff97u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0075f3bc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
}

void f_0075f3be(void)
{
    FN_ENTER(0x0075f3be);
    /* 0075f3be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3c1: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 0075f3c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075f3c6: jle 0x75fdc4 */ if ((fZ||fS!=fO)) goto L_0075fdc4;
L_0075f3cc:; BB(0x0075f3cc);
    /* 0075f3cc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3cf: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075f3d2: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0075f3d5: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f3be); r_esp += 4; return;
L_0075fdc4:; BB(0x0075fdc4);
    /* 0075fdc4: call 0x824dc0 */ r_esp -= 4; W32(r_esp, 0x75fdc9u); f_00824dc0();
    /* 0075fdc9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdcc: call 0x7606fc */ r_esp -= 4; W32(r_esp, 0x75fdd1u); f_007606fc();
    /* 0075fdd1: jmp 0x75fd81 */ goto L_0075fd81;
}

void f_0075f3c4(void)
{
    FN_ENTER(0x0075f3c4);
    /* 0075f3c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075f3c6: jle 0x75fdc4 */ if ((fZ||fS!=fO)) goto L_0075fdc4;
L_0075f3cc:; BB(0x0075f3cc);
    /* 0075f3cc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3cf: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075f3d2: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0075f3d5: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f3c4); r_esp += 4; return;
L_0075fdc4:; BB(0x0075fdc4);
    /* 0075fdc4: call 0x824dc0 */ r_esp -= 4; W32(r_esp, 0x75fdc9u); f_00824dc0();
    /* 0075fdc9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdcc: call 0x7606fc */ r_esp -= 4; W32(r_esp, 0x75fdd1u); f_007606fc();
    /* 0075fdd1: jmp 0x75fd81 */ goto L_0075fd81;
}

void f_0075f3d2(void)
{
    FN_ENTER(0x0075f3d2);
    /* 0075f3d2: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0075f3d5: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f3d2); r_esp += 4; return;
}

void f_0075f3da(void)
{
    FN_ENTER(0x0075f3da);
    /* 0075f3da: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3dd: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 0075f3e0: jmp 0x75f418 */ goto L_0075f418;
L_0075f418:; BB(0x0075f418);
    /* 0075f418: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075f41a: jle 0x75fdd3 */ if ((fZ||fS!=fO)) goto L_0075fdd3;
L_0075f420:; BB(0x0075f420);
    /* 0075f420: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f423: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075f426: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0075f429: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f3da); r_esp += 4; return;
L_0075fdd3:; BB(0x0075fdd3);
    /* 0075fdd3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdd6: movzx edx, byte ptr [eax + 0x1d] */ r_edx = (u32)R8((u32)(r_eax+0x1du));
    /* 0075fdda: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fddd: jne 0x75fd81 */ if (!fZ) goto L_0075fd81;
L_0075fddf:; BB(0x0075fddf);
    /* 0075fddf: mov ebx, dword ptr [0xa0f678] */ r_ebx = R32((u32)(0xa0f678u));
    /* 0075fde5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075fde8: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0075fdeb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075fded: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075fdef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075fdf1: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0075fdf8: or ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0075fdfa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdfb: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75fe00u); f_007c1160();
    /* 0075fe00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fe02: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075fe08:; BB(0x0075fe08);
    /* 0075fe08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075fe0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe0d: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe12: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75fe17u); f_00814298();
    /* 0075fe17: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075fe1a: call 0x827064 */ r_esp -= 4; W32(r_esp, 0x75fe1fu); f_00827064();
    /* 0075fe1f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fe22: mov dword ptr [eax + 0x20], 0x384 */ W32((u32)(r_eax+0x20u), 0x384u);
    /* 0075fe29: mov byte ptr [eax + 0x1c], 0x20 */ W8((u32)(r_eax+0x1cu), 0x20u);
    /* 0075fe2d: jmp 0x75fd81 */ goto L_0075fd81;
}

void f_0075f3e2(void)
{
    FN_ENTER(0x0075f3e2);
    /* 0075f3e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3e5: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f3e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f3ea: je 0x75f3fb */ if (fZ) goto L_0075f3fb;
L_0075f3ec:; BB(0x0075f3ec);
    /* 0075f3ec: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75f3f1u); f_0073d160();
    /* 0075f3f1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f3f4: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075f3fb:; BB(0x0075f3fb);
    /* 0075f3fb: mov ecx, eax */ r_ecx = r_eax;
    /* 0075f3fd: call 0x7606e4 */ r_esp -= 4; W32(r_esp, 0x75f402u); f_007606e4();
    /* 0075f402: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f405: mov dword ptr [edx + 0x20], 0x384 */ W32((u32)(r_edx+0x20u), 0x384u);
    /* 0075f40c: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f40f: mov eax, 0x384 */ r_eax = 0x384u;
    /* 0075f414: mov byte ptr [edx + 0x1c], 0x1f */ W8((u32)(r_edx+0x1cu), 0x1fu);
    /* 0075f418: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075f41a: jle 0x75fdd3 */ if ((fZ||fS!=fO)) goto L_0075fdd3;
L_0075f420:; BB(0x0075f420);
    /* 0075f420: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f423: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075f426: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0075f429: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f3e2); r_esp += 4; return;
L_0075fdd3:; BB(0x0075fdd3);
    /* 0075fdd3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdd6: movzx edx, byte ptr [eax + 0x1d] */ r_edx = (u32)R8((u32)(r_eax+0x1du));
    /* 0075fdda: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fddd: jne 0x75fd81 */ if (!fZ) goto L_0075fd81;
L_0075fddf:; BB(0x0075fddf);
    /* 0075fddf: mov ebx, dword ptr [0xa0f678] */ r_ebx = R32((u32)(0xa0f678u));
    /* 0075fde5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075fde8: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0075fdeb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075fded: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075fdef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075fdf1: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0075fdf8: or ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0075fdfa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdfb: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75fe00u); f_007c1160();
    /* 0075fe00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fe02: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075fe08:; BB(0x0075fe08);
    /* 0075fe08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075fe0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe0d: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe12: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75fe17u); f_00814298();
    /* 0075fe17: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075fe1a: call 0x827064 */ r_esp -= 4; W32(r_esp, 0x75fe1fu); f_00827064();
    /* 0075fe1f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fe22: mov dword ptr [eax + 0x20], 0x384 */ W32((u32)(r_eax+0x20u), 0x384u);
    /* 0075fe29: mov byte ptr [eax + 0x1c], 0x20 */ W8((u32)(r_eax+0x1cu), 0x20u);
    /* 0075fe2d: jmp 0x75fd81 */ goto L_0075fd81;
}

void f_0075f3f4(void)
{
    FN_ENTER(0x0075f3f4);
    /* 0075f3f4: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 0075f3fb: mov ecx, eax */ r_ecx = r_eax;
    /* 0075f3fd: call 0x7606e4 */ r_esp -= 4; W32(r_esp, 0x75f402u); f_007606e4();
    /* 0075f402: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f405: mov dword ptr [edx + 0x20], 0x384 */ W32((u32)(r_edx+0x20u), 0x384u);
    /* 0075f40c: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f40f: mov eax, 0x384 */ r_eax = 0x384u;
    /* 0075f414: mov byte ptr [edx + 0x1c], 0x1f */ W8((u32)(r_edx+0x1cu), 0x1fu);
    /* 0075f418: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075f41a: jle 0x75fdd3 */ if ((fZ||fS!=fO)) goto L_0075fdd3;
L_0075f420:; BB(0x0075f420);
    /* 0075f420: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f423: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075f426: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0075f429: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f3f4); r_esp += 4; return;
L_0075fdd3:; BB(0x0075fdd3);
    /* 0075fdd3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdd6: movzx edx, byte ptr [eax + 0x1d] */ r_edx = (u32)R8((u32)(r_eax+0x1du));
    /* 0075fdda: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fddd: jne 0x75fd81 */ if (!fZ) goto L_0075fd81;
L_0075fddf:; BB(0x0075fddf);
    /* 0075fddf: mov ebx, dword ptr [0xa0f678] */ r_ebx = R32((u32)(0xa0f678u));
    /* 0075fde5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075fde8: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0075fdeb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075fded: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075fdef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075fdf1: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0075fdf8: or ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0075fdfa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdfb: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75fe00u); f_007c1160();
    /* 0075fe00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fe02: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075fe08:; BB(0x0075fe08);
    /* 0075fe08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075fe0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe0d: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe12: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75fe17u); f_00814298();
    /* 0075fe17: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075fe1a: call 0x827064 */ r_esp -= 4; W32(r_esp, 0x75fe1fu); f_00827064();
    /* 0075fe1f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fe22: mov dword ptr [eax + 0x20], 0x384 */ W32((u32)(r_eax+0x20u), 0x384u);
    /* 0075fe29: mov byte ptr [eax + 0x1c], 0x20 */ W8((u32)(r_eax+0x1cu), 0x20u);
    /* 0075fe2d: jmp 0x75fd81 */ goto L_0075fd81;
}

void f_0075f404(void)
{
    FN_ENTER(0x0075f404);
    /* 0075f404: in al, dx */ UNSUP(0x0075f404, "in al, dx");
    /* 0075f405: mov dword ptr [edx + 0x20], 0x384 */ W32((u32)(r_edx+0x20u), 0x384u);
    /* 0075f40c: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f40f: mov eax, 0x384 */ r_eax = 0x384u;
    /* 0075f414: mov byte ptr [edx + 0x1c], 0x1f */ W8((u32)(r_edx+0x1cu), 0x1fu);
    /* 0075f418: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075f41a: jle 0x75fdd3 */ if ((fZ||fS!=fO)) goto L_0075fdd3;
L_0075f420:; BB(0x0075f420);
    /* 0075f420: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f423: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075f426: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0075f429: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f404); r_esp += 4; return;
L_0075fdd3:; BB(0x0075fdd3);
    /* 0075fdd3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdd6: movzx edx, byte ptr [eax + 0x1d] */ r_edx = (u32)R8((u32)(r_eax+0x1du));
    /* 0075fdda: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fddd: jne 0x75fd81 */ if (!fZ) goto L_0075fd81;
L_0075fddf:; BB(0x0075fddf);
    /* 0075fddf: mov ebx, dword ptr [0xa0f678] */ r_ebx = R32((u32)(0xa0f678u));
    /* 0075fde5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075fde8: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0075fdeb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075fded: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075fdef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075fdf1: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0075fdf8: or ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0075fdfa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdfb: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75fe00u); f_007c1160();
    /* 0075fe00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fe02: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075fe08:; BB(0x0075fe08);
    /* 0075fe08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075fe0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe0d: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe12: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75fe17u); f_00814298();
    /* 0075fe17: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075fe1a: call 0x827064 */ r_esp -= 4; W32(r_esp, 0x75fe1fu); f_00827064();
    /* 0075fe1f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fe22: mov dword ptr [eax + 0x20], 0x384 */ W32((u32)(r_eax+0x20u), 0x384u);
    /* 0075fe29: mov byte ptr [eax + 0x1c], 0x20 */ W8((u32)(r_eax+0x1cu), 0x20u);
    /* 0075fe2d: jmp 0x75fd81 */ goto L_0075fd81;
}

void f_0075f412(void)
{
    FN_ENTER(0x0075f412);
    /* 0075f412: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f414: mov byte ptr [edx + 0x1c], 0x1f */ W8((u32)(r_edx+0x1cu), 0x1fu);
    /* 0075f418: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075f41a: jle 0x75fdd3 */ if ((fZ||fS!=fO)) goto L_0075fdd3;
L_0075f420:; BB(0x0075f420);
    /* 0075f420: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f423: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075f426: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0075f429: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f412); r_esp += 4; return;
L_0075fdd3:; BB(0x0075fdd3);
    /* 0075fdd3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fdd6: movzx edx, byte ptr [eax + 0x1d] */ r_edx = (u32)R8((u32)(r_eax+0x1du));
    /* 0075fdda: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fddd: jne 0x75fd81 */ if (!fZ) goto L_0075fd81;
L_0075fddf:; BB(0x0075fddf);
    /* 0075fddf: mov ebx, dword ptr [0xa0f678] */ r_ebx = R32((u32)(0xa0f678u));
    /* 0075fde5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075fde8: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0075fdeb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075fded: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075fdef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075fdf1: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0075fdf8: or ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0075fdfa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075fdfb: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75fe00u); f_007c1160();
    /* 0075fe00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fe02: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075fe08:; BB(0x0075fe08);
    /* 0075fe08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075fe0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe0d: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe12: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75fe17u); f_00814298();
    /* 0075fe17: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075fe1a: call 0x827064 */ r_esp -= 4; W32(r_esp, 0x75fe1fu); f_00827064();
    /* 0075fe1f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fe22: mov dword ptr [eax + 0x20], 0x384 */ W32((u32)(r_eax+0x20u), 0x384u);
    /* 0075fe29: mov byte ptr [eax + 0x1c], 0x20 */ W8((u32)(r_eax+0x1cu), 0x20u);
    /* 0075fe2d: jmp 0x75fd81 */ goto L_0075fd81;
}

void f_0075f41e(void)
{
    FN_ENTER(0x0075f41e);
    /* 0075f41e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f420: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f423: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075f426: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0075f429: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f41e); r_esp += 4; return;
}

void f_0075f42c(void)
{
    FN_ENTER(0x0075f42c);
    /* 0075f42c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f42e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f431: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f434: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f436: je 0x75f447 */ if (fZ) goto L_0075f447;
L_0075f438:; BB(0x0075f438);
    /* 0075f438: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75f43du); f_0073d160();
    /* 0075f43d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f440: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075f447:; BB(0x0075f447);
    /* 0075f447: mov byte ptr [eax + 0x1c], 0x14 */ W8((u32)(r_eax+0x1cu), 0x14u);
    /* 0075f44b: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f42c); r_esp += 4; return;
}

void f_0075f42e(void)
{
    FN_ENTER(0x0075f42e);
    /* 0075f42e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f431: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f434: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f436: je 0x75f447 */ if (fZ) goto L_0075f447;
L_0075f438:; BB(0x0075f438);
    /* 0075f438: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75f43du); f_0073d160();
    /* 0075f43d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f440: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075f447:; BB(0x0075f447);
    /* 0075f447: mov byte ptr [eax + 0x1c], 0x14 */ W8((u32)(r_eax+0x1cu), 0x14u);
    /* 0075f44b: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f42e); r_esp += 4; return;
}

void f_0075f43c(void)
{
    FN_ENTER(0x0075f43c);
    /* 0075f43c: dec dword ptr [ebx + 0x40c7ec45] */ { u32 ad = (u32)(r_ebx+0x40c7ec45u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0075f442: cmp byte ptr [eax], al */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;   }
    /* 0075f444: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f446: add dh, al */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8); fC = (r < a); }
    /* 0075f448: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075f449: sbb al, 0x14 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x14u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = ((u64)a < (u64)b + c); }
    /* 0075f44b: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f43c); r_esp += 4; return;
}

void f_0075f450(void)
{
    FN_ENTER(0x0075f450);
    /* 0075f450: call 0x826508 */ r_esp -= 4; W32(r_esp, 0x75f455u); f_00826508();
    /* 0075f455: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f457: je 0x75f49f */ if (fZ) goto L_0075f49f;
L_0075f459:; BB(0x0075f459);
    /* 0075f459: call 0x8264f0 */ r_esp -= 4; W32(r_esp, 0x75f45eu); f_008264f0();
    /* 0075f45e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f460: jne 0x75fd81 */ if (!fZ) goto L_0075fd81;
L_0075f466:; BB(0x0075f466);
    /* 0075f466: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f469: movzx edx, byte ptr [eax + 0x1d] */ r_edx = (u32)R8((u32)(r_eax+0x1du));
    /* 0075f46d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f470: jne 0x75fd81 */ if (!fZ) goto L_0075fd81;
L_0075f476:; BB(0x0075f476);
    /* 0075f476: mov ebx, dword ptr [0xa0f678] */ r_ebx = R32((u32)(0xa0f678u));
    /* 0075f47c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075f47f: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0075f482: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075f484: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075f486: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075f488: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0075f48f: or ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0075f491: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075f492: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75f497u); f_007c1160();
    /* 0075f497: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f499: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f49f:; BB(0x0075f49f);
    /* 0075f49f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075f4a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a4: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75f4aeu); f_00814298();
    /* 0075f4ae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f4b1: call 0x8264dc */ r_esp -= 4; W32(r_esp, 0x75f4b6u); f_008264dc();
    /* 0075f4b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f4b9: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f4bd: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f450); r_esp += 4; return;
}

void f_0075f464(void)
{
    FN_ENTER(0x0075f464);
    /* 0075f464: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f466: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f469: movzx edx, byte ptr [eax + 0x1d] */ r_edx = (u32)R8((u32)(r_eax+0x1du));
    /* 0075f46d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f470: jne 0x75fd81 */ if (!fZ) goto L_0075fd81;
L_0075f476:; BB(0x0075f476);
    /* 0075f476: mov ebx, dword ptr [0xa0f678] */ r_ebx = R32((u32)(0xa0f678u));
    /* 0075f47c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075f47f: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0075f482: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075f484: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075f486: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075f488: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0075f48f: or ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0075f491: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075f492: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75f497u); f_007c1160();
    /* 0075f497: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f499: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f49f:; BB(0x0075f49f);
    /* 0075f49f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075f4a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a4: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75f4aeu); f_00814298();
    /* 0075f4ae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f4b1: call 0x8264dc */ r_esp -= 4; W32(r_esp, 0x75f4b6u); f_008264dc();
    /* 0075f4b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f4b9: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f4bd: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f464); r_esp += 4; return;
}

void f_0075f470(void)
{
    FN_ENTER(0x0075f470);
    /* 0075f470: jne 0x75fd81 */ if (!fZ) goto L_0075fd81;
L_0075f476:; BB(0x0075f476);
    /* 0075f476: mov ebx, dword ptr [0xa0f678] */ r_ebx = R32((u32)(0xa0f678u));
    /* 0075f47c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075f47f: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0075f482: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075f484: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075f486: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075f488: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0075f48f: or ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0075f491: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075f492: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75f497u); f_007c1160();
    /* 0075f497: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f499: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f49f:; BB(0x0075f49f);
    /* 0075f49f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075f4a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a4: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75f4aeu); f_00814298();
    /* 0075f4ae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f4b1: call 0x8264dc */ r_esp -= 4; W32(r_esp, 0x75f4b6u); f_008264dc();
    /* 0075f4b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f4b9: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f4bd: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f470); r_esp += 4; return;
}

void f_0075f47c(void)
{
    FN_ENTER(0x0075f47c);
    /* 0075f47c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075f47f: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0075f482: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075f484: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075f486: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075f488: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0075f48f: or ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0075f491: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075f492: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75f497u); f_007c1160();
    /* 0075f497: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f499: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f49f:; BB(0x0075f49f);
    /* 0075f49f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075f4a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a4: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75f4aeu); f_00814298();
    /* 0075f4ae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f4b1: call 0x8264dc */ r_esp -= 4; W32(r_esp, 0x75f4b6u); f_008264dc();
    /* 0075f4b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f4b9: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f4bd: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f47c); r_esp += 4; return;
}

void f_0075f48a(void)
{
    FN_ENTER(0x0075f48a);
    /* 0075f48a: adc bl, byte ptr [edi - 0x56] */ { u32 c = fC; u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edi+0xffffffaau)); u32 r = (a + b + c) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075f48e: add byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 0075f490: fist dword ptr [ebx - 0x18] */ W32((u32)(r_ebx+0xffffffe8u), (u32)fx_int32(ST(0)));
    /* 0075f493: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0075f494: sbb al, 6 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x6u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075f496: add byte ptr [ebp - 0x1d7bf040], al */ { u32 ad = (u32)(r_ebp+0xe2840fc0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f49c: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0075f49e: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0075f4a0: rcl byte ptr [eax + 0x50], 0x50 */ UNSUP(0x0075f4a0, "rcl byte ptr [eax + 0x50], 0x50");
    /* 0075f4a4: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75f4aeu); f_00814298();
    /* 0075f4ae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f4b1: call 0x8264dc */ r_esp -= 4; W32(r_esp, 0x75f4b6u); f_008264dc();
    /* 0075f4b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f4b9: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f4bd: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f48a); r_esp += 4; return;
}

void f_0075f49c(void)
{
    FN_ENTER(0x0075f49c);
    /* 0075f49c: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0075f49e: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0075f4a0: rcl byte ptr [eax + 0x50], 0x50 */ UNSUP(0x0075f4a0, "rcl byte ptr [eax + 0x50], 0x50");
    /* 0075f4a4: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f4a9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75f4aeu); f_00814298();
    /* 0075f4ae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f4b1: call 0x8264dc */ r_esp -= 4; W32(r_esp, 0x75f4b6u); f_008264dc();
    /* 0075f4b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f4b9: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f4bd: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f49c); r_esp += 4; return;
}

void f_0075f4ac(void)
{
    FN_ENTER(0x0075f4ac);
    /* 0075f4ac: or eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075f4ae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075f4b1: call 0x8264dc */ r_esp -= 4; W32(r_esp, 0x75f4b6u); f_008264dc();
    /* 0075f4b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f4b9: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f4bd: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f4ac); r_esp += 4; return;
}

void f_0075f4bc(void)
{
    FN_ENTER(0x0075f4bc);
    /* 0075f4bc: sbb eax, 0x8bfe9 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x8bfe9u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0075f4c1: add byte ptr [ebx + 0x488bec45], cl */ { u32 ad = (u32)(r_ebx+0x488bec45u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f4c7: xor byte ptr [ebp - 0x17fa8b37], al */ { u32 ad = (u32)(r_ebp+0xe80574c9u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 0075f4cd: div dword ptr [edx] */ { u32 d = R32((u32)(r_edx)); if (!d) UNSUP(0x0075f4cd, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0075f4cd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0075f4cf: sti  */ UNSUP(0x0075f4cf, "sti ");
    UNSUP(0x0075f4d0, "falls out of decoded code");
}

void f_0075f4c2(void)
{
    FN_ENTER(0x0075f4c2);
    /* 0075f4c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f4c5: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075f4c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f4ca: je 0x75f4d1 */ if (fZ) goto L_0075f4d1;
L_0075f4cc:; BB(0x0075f4cc);
    /* 0075f4cc: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x75f4d1u); f_007127c8();
L_0075f4d1:; BB(0x0075f4d1);
    /* 0075f4d1: call 0x826524 */ r_esp -= 4; W32(r_esp, 0x75f4d6u); f_00826524();
    /* 0075f4d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f4d8: je 0x75fe45 */ if (fZ) goto L_0075fe45;
L_0075f4de:; BB(0x0075f4de);
    /* 0075f4de: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f4e1: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0075f4e4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f4e6: je 0x75fe32 */ if (fZ) goto L_0075fe32;
L_0075f4ec:; BB(0x0075f4ec);
    /* 0075f4ec: mov eax, edx */ r_eax = r_edx;
    /* 0075f4ee: mov byte ptr [eax + 0x1c], 0x1c */ W8((u32)(r_eax+0x1cu), 0x1cu);
L_0075f4f2:; BB(0x0075f4f2);
    /* 0075f4f2: call 0x826508 */ r_esp -= 4; W32(r_esp, 0x75f4f7u); f_00826508();
    /* 0075f4f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f4f9: jne 0x75f502 */ if (!fZ) goto L_0075f502;
L_0075f4fb:; BB(0x0075f4fb);
    /* 0075f4fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f4fe: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
L_0075f502:; BB(0x0075f502);
    /* 0075f502: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f505: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f508: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75f50du); f_0073d114();
    /* 0075f50d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f50f: je 0x75f526 */ if (fZ) goto L_0075f526;
L_0075f511:; BB(0x0075f511);
    /* 0075f511: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f514: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f518: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f51b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f522: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f524: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f525: ret  */ FN_RET(0x0075f4c2); r_esp += 4; return;
L_0075f526:; BB(0x0075f526);
    /* 0075f526: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f529: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f52c: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75f531u); f_0073ce50();
    /* 0075f531: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f533: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f539:; BB(0x0075f539);
    /* 0075f539: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f53c: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f53f: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75f544u); f_0073d134();
    /* 0075f544: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f546: je 0x75f554 */ if (fZ) goto L_0075f554;
L_0075f548:; BB(0x0075f548);
    /* 0075f548: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f54b: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f54f: jmp 0x75fd81 */ goto L_0075fd81;
L_0075f554:; BB(0x0075f554);
    /* 0075f554: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f557: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f55a: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75f55fu); f_0073d160();
    /* 0075f55f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f562: call 0x7606d0 */ r_esp -= 4; W32(r_esp, 0x75f567u); f_007606d0();
    /* 0075f567: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f56a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f56d: call 0x8264c8 */ r_esp -= 4; W32(r_esp, 0x75f572u); f_008264c8();
    /* 0075f572: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f575: mov byte ptr [eax + 0x1c], 0x1c */ W8((u32)(r_eax+0x1cu), 0x1cu);
    /* 0075f579: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f4c2); r_esp += 4; return;
L_0075fe32:; BB(0x0075fe32);
    /* 0075fe32: mov ecx, edx */ r_ecx = r_edx;
    /* 0075fe34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe35: call 0x75ef80 */ r_esp -= 4; W32(r_esp, 0x75fe3au); f_0075ef80();
    /* 0075fe3a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fe3d: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075fe40: jmp 0x75f4ec */ goto L_0075f4ec;
L_0075fe45:; BB(0x0075fe45);
    /* 0075fe45: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fe48: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0075fe4b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fe4d: je 0x75fe5b */ if (fZ) goto L_0075fe5b;
L_0075fe4f:; BB(0x0075fe4f);
    /* 0075fe4f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fe52: mov byte ptr [eax + 0x1c], 0x1b */ W8((u32)(r_eax+0x1cu), 0x1bu);
    /* 0075fe56: jmp 0x75f4f2 */ goto L_0075f4f2;
L_0075fe5b:; BB(0x0075fe5b);
    /* 0075fe5b: mov ecx, eax */ r_ecx = r_eax;
    /* 0075fe5d: call 0x760684 */ r_esp -= 4; W32(r_esp, 0x75fe62u); f_00760684();
    /* 0075fe62: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fe65: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075fe68: jmp 0x75fe4f */ goto L_0075fe4f;
}

void f_0075f4d0(void)
{
    FN_ENTER(0x0075f4d0);
}

void f_0075f4de(void)
{
    FN_ENTER(0x0075f4de);
    /* 0075f4de: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f4e1: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0075f4e4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f4e6: je 0x75fe32 */ if (fZ) goto L_0075fe32;
L_0075f4ec:; BB(0x0075f4ec);
    /* 0075f4ec: mov eax, edx */ r_eax = r_edx;
    /* 0075f4ee: mov byte ptr [eax + 0x1c], 0x1c */ W8((u32)(r_eax+0x1cu), 0x1cu);
    /* 0075f4f2: call 0x826508 */ r_esp -= 4; W32(r_esp, 0x75f4f7u); f_00826508();
    /* 0075f4f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f4f9: jne 0x75f502 */ if (!fZ) goto L_0075f502;
L_0075f4fb:; BB(0x0075f4fb);
    /* 0075f4fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f4fe: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
L_0075f502:; BB(0x0075f502);
    /* 0075f502: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f505: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f508: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75f50du); f_0073d114();
    /* 0075f50d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f50f: je 0x75f526 */ if (fZ) goto L_0075f526;
L_0075f511:; BB(0x0075f511);
    /* 0075f511: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f514: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f518: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f51b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f522: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f524: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f525: ret  */ FN_RET(0x0075f4de); r_esp += 4; return;
L_0075f526:; BB(0x0075f526);
    /* 0075f526: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f529: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f52c: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75f531u); f_0073ce50();
    /* 0075f531: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f533: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f539:; BB(0x0075f539);
    /* 0075f539: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f53c: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f53f: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75f544u); f_0073d134();
    /* 0075f544: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f546: je 0x75f554 */ if (fZ) goto L_0075f554;
L_0075f548:; BB(0x0075f548);
    /* 0075f548: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f54b: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f54f: jmp 0x75fd81 */ goto L_0075fd81;
L_0075f554:; BB(0x0075f554);
    /* 0075f554: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f557: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f55a: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75f55fu); f_0073d160();
    /* 0075f55f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f562: call 0x7606d0 */ r_esp -= 4; W32(r_esp, 0x75f567u); f_007606d0();
    /* 0075f567: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f56a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f56d: call 0x8264c8 */ r_esp -= 4; W32(r_esp, 0x75f572u); f_008264c8();
    /* 0075f572: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f575: mov byte ptr [eax + 0x1c], 0x1c */ W8((u32)(r_eax+0x1cu), 0x1cu);
    /* 0075f579: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f4de); r_esp += 4; return;
L_0075fe32:; BB(0x0075fe32);
    /* 0075fe32: mov ecx, edx */ r_ecx = r_edx;
    /* 0075fe34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fe35: call 0x75ef80 */ r_esp -= 4; W32(r_esp, 0x75fe3au); f_0075ef80();
    /* 0075fe3a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fe3d: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075fe40: jmp 0x75f4ec */ goto L_0075f4ec;
}

void f_0075f4ea(void)
{
    FN_ENTER(0x0075f4ea);
    /* 0075f4ea: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f4ec: mov eax, edx */ r_eax = r_edx;
    /* 0075f4ee: mov byte ptr [eax + 0x1c], 0x1c */ W8((u32)(r_eax+0x1cu), 0x1cu);
    /* 0075f4f2: call 0x826508 */ r_esp -= 4; W32(r_esp, 0x75f4f7u); f_00826508();
    /* 0075f4f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f4f9: jne 0x75f502 */ if (!fZ) goto L_0075f502;
L_0075f4fb:; BB(0x0075f4fb);
    /* 0075f4fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f4fe: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
L_0075f502:; BB(0x0075f502);
    /* 0075f502: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f505: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f508: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75f50du); f_0073d114();
    /* 0075f50d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f50f: je 0x75f526 */ if (fZ) goto L_0075f526;
L_0075f511:; BB(0x0075f511);
    /* 0075f511: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f514: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f518: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f51b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f522: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f524: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f525: ret  */ FN_RET(0x0075f4ea); r_esp += 4; return;
L_0075f526:; BB(0x0075f526);
    /* 0075f526: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f529: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f52c: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75f531u); f_0073ce50();
    /* 0075f531: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f533: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f539:; BB(0x0075f539);
    /* 0075f539: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f53c: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f53f: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75f544u); f_0073d134();
    /* 0075f544: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f546: je 0x75f554 */ if (fZ) goto L_0075f554;
L_0075f548:; BB(0x0075f548);
    /* 0075f548: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f54b: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f54f: jmp 0x75fd81 */ goto L_0075fd81;
L_0075f554:; BB(0x0075f554);
    /* 0075f554: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f557: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f55a: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75f55fu); f_0073d160();
    /* 0075f55f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f562: call 0x7606d0 */ r_esp -= 4; W32(r_esp, 0x75f567u); f_007606d0();
    /* 0075f567: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f56a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f56d: call 0x8264c8 */ r_esp -= 4; W32(r_esp, 0x75f572u); f_008264c8();
    /* 0075f572: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f575: mov byte ptr [eax + 0x1c], 0x1c */ W8((u32)(r_eax+0x1cu), 0x1cu);
    /* 0075f579: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f4ea); r_esp += 4; return;
}

void f_0075f4f2(void)
{
    FN_ENTER(0x0075f4f2);
    /* 0075f4f2: call 0x826508 */ r_esp -= 4; W32(r_esp, 0x75f4f7u); f_00826508();
    /* 0075f4f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f4f9: jne 0x75f502 */ if (!fZ) goto L_0075f502;
L_0075f4fb:; BB(0x0075f4fb);
    /* 0075f4fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f4fe: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
L_0075f502:; BB(0x0075f502);
    /* 0075f502: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f505: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f508: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75f50du); f_0073d114();
    /* 0075f50d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f50f: je 0x75f526 */ if (fZ) goto L_0075f526;
L_0075f511:; BB(0x0075f511);
    /* 0075f511: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f514: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f518: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f51b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f522: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f524: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f525: ret  */ FN_RET(0x0075f4f2); r_esp += 4; return;
L_0075f526:; BB(0x0075f526);
    /* 0075f526: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f529: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f52c: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75f531u); f_0073ce50();
    /* 0075f531: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f533: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f539:; BB(0x0075f539);
    /* 0075f539: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f53c: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f53f: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75f544u); f_0073d134();
    /* 0075f544: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f546: je 0x75f554 */ if (fZ) goto L_0075f554;
L_0075f548:; BB(0x0075f548);
    /* 0075f548: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f54b: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f54f: jmp 0x75fd81 */ goto L_0075fd81;
L_0075f554:; BB(0x0075f554);
    /* 0075f554: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f557: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f55a: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75f55fu); f_0073d160();
    /* 0075f55f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f562: call 0x7606d0 */ r_esp -= 4; W32(r_esp, 0x75f567u); f_007606d0();
    /* 0075f567: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f56a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f56d: call 0x8264c8 */ r_esp -= 4; W32(r_esp, 0x75f572u); f_008264c8();
    /* 0075f572: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f575: mov byte ptr [eax + 0x1c], 0x1c */ W8((u32)(r_eax+0x1cu), 0x1cu);
    /* 0075f579: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f4f2); r_esp += 4; return;
}

void f_0075f4fc(void)
{
    FN_ENTER(0x0075f4fc);
    /* 0075f4fc: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0075f4fd: in al, dx */ UNSUP(0x0075f4fd, "in al, dx");
    /* 0075f4fe: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f502: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f505: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f508: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75f50du); f_0073d114();
    /* 0075f50d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f50f: je 0x75f526 */ if (fZ) goto L_0075f526;
L_0075f511:; BB(0x0075f511);
    /* 0075f511: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f514: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f518: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f51b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f522: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f524: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f525: ret  */ FN_RET(0x0075f4fc); r_esp += 4; return;
L_0075f526:; BB(0x0075f526);
    /* 0075f526: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f529: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f52c: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75f531u); f_0073ce50();
    /* 0075f531: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f533: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f539:; BB(0x0075f539);
    /* 0075f539: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f53c: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f53f: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75f544u); f_0073d134();
    /* 0075f544: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f546: je 0x75f554 */ if (fZ) goto L_0075f554;
L_0075f548:; BB(0x0075f548);
    /* 0075f548: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f54b: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f54f: jmp 0x75fd81 */ goto L_0075fd81;
L_0075f554:; BB(0x0075f554);
    /* 0075f554: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f557: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f55a: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75f55fu); f_0073d160();
    /* 0075f55f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f562: call 0x7606d0 */ r_esp -= 4; W32(r_esp, 0x75f567u); f_007606d0();
    /* 0075f567: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f56a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f56d: call 0x8264c8 */ r_esp -= 4; W32(r_esp, 0x75f572u); f_008264c8();
    /* 0075f572: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f575: mov byte ptr [eax + 0x1c], 0x1c */ W8((u32)(r_eax+0x1cu), 0x1cu);
    /* 0075f579: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f4fc); r_esp += 4; return;
}

void f_0075f50c(void)
{
    FN_ENTER(0x0075f50c);
    /* 0075f50c: inc dword ptr [ebp - 0x74ea8b40] */ { u32 ad = (u32)(r_ebp+0x8b1574c0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0075f512: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0075f513: in al, dx */ UNSUP(0x0075f513, "in al, dx");
    /* 0075f514: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f518: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f51b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f522: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f524: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f525: ret  */ FN_RET(0x0075f50c); r_esp += 4; return;
}

void f_0075f51a(void)
{
    FN_ENTER(0x0075f51a);
    /* 0075f51a: hlt  */ UNSUP(0x0075f51a, "hlt");
}

void f_0075f52c(void)
{
    FN_ENTER(0x0075f52c);
    /* 0075f52c: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75f531u); f_0073ce50();
    /* 0075f531: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f533: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f539:; BB(0x0075f539);
    /* 0075f539: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f53c: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f53f: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75f544u); f_0073d134();
    /* 0075f544: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f546: je 0x75f554 */ if (fZ) goto L_0075f554;
L_0075f548:; BB(0x0075f548);
    /* 0075f548: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f54b: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 0075f54f: jmp 0x75fd81 */ goto L_0075fd81;
L_0075f554:; BB(0x0075f554);
    /* 0075f554: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f557: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f55a: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75f55fu); f_0073d160();
    /* 0075f55f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f562: call 0x7606d0 */ r_esp -= 4; W32(r_esp, 0x75f567u); f_007606d0();
    /* 0075f567: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f56a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f56d: call 0x8264c8 */ r_esp -= 4; W32(r_esp, 0x75f572u); f_008264c8();
    /* 0075f572: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f575: mov byte ptr [eax + 0x1c], 0x1c */ W8((u32)(r_eax+0x1cu), 0x1cu);
    /* 0075f579: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f52c); r_esp += 4; return;
}

void f_0075f53e(void)
{
    FN_ENTER(0x0075f53e);
    /* 0075f53e: cmp al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a - b) & 0xffu;   }
    UNSUP(0x0075f540, "falls out of decoded code");
}

void f_0075f55a(void)
{
    FN_ENTER(0x0075f55a);
    /* 0075f55a: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75f55fu); f_0073d160();
    /* 0075f55f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f562: call 0x7606d0 */ r_esp -= 4; W32(r_esp, 0x75f567u); f_007606d0();
    /* 0075f567: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f56a: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0075f56d: call 0x8264c8 */ r_esp -= 4; W32(r_esp, 0x75f572u); f_008264c8();
    /* 0075f572: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f575: mov byte ptr [eax + 0x1c], 0x1c */ W8((u32)(r_eax+0x1cu), 0x1cu);
    /* 0075f579: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f55a); r_esp += 4; return;
}

void f_0075f56e(void)
{
    FN_ENTER(0x0075f56e);
    /* 0075f56e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075f56f: outsd dx, dword ptr [esi] */ UNSUP(0x0075f56f, "outsd dx, dword ptr [esi]");
    /* 0075f570: or al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f572: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f575: mov byte ptr [eax + 0x1c], 0x1c */ W8((u32)(r_eax+0x1cu), 0x1cu);
    /* 0075f579: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f56e); r_esp += 4; return;
}

void f_0075f57e(void)
{
    FN_ENTER(0x0075f57e);
    /* 0075f57e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f581: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f584: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f586: je 0x75f597 */ if (fZ) goto L_0075f597;
L_0075f588:; BB(0x0075f588);
    /* 0075f588: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75f58du); f_0073d160();
    /* 0075f58d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f590: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075f597:; BB(0x0075f597);
    /* 0075f597: call 0x8264b4 */ r_esp -= 4; W32(r_esp, 0x75f59cu); f_008264b4();
    /* 0075f59c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f59e: je 0x75f5ac */ if (fZ) goto L_0075f5ac;
L_0075f5a0:; BB(0x0075f5a0);
    /* 0075f5a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f5a3: mov byte ptr [eax + 0x1c], 0x14 */ W8((u32)(r_eax+0x1cu), 0x14u);
    /* 0075f5a7: jmp 0x75fd81 */ goto L_0075fd81;
L_0075f5ac:; BB(0x0075f5ac);
    /* 0075f5ac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f5af: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0075f5b3: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f57e); r_esp += 4; return;
}

void f_0075f580(void)
{
    FN_ENTER(0x0075f580);
    /* 0075f580: in al, dx */ UNSUP(0x0075f580, "in al, dx");
    /* 0075f581: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f584: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f586: je 0x75f597 */ if (fZ) goto L_0075f597;
L_0075f588:; BB(0x0075f588);
    /* 0075f588: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75f58du); f_0073d160();
    /* 0075f58d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f590: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_0075f597:; BB(0x0075f597);
    /* 0075f597: call 0x8264b4 */ r_esp -= 4; W32(r_esp, 0x75f59cu); f_008264b4();
    /* 0075f59c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f59e: je 0x75f5ac */ if (fZ) goto L_0075f5ac;
L_0075f5a0:; BB(0x0075f5a0);
    /* 0075f5a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f5a3: mov byte ptr [eax + 0x1c], 0x14 */ W8((u32)(r_eax+0x1cu), 0x14u);
    /* 0075f5a7: jmp 0x75fd81 */ goto L_0075fd81;
L_0075f5ac:; BB(0x0075f5ac);
    /* 0075f5ac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f5af: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0075f5b3: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f580); r_esp += 4; return;
}

void f_0075f592(void)
{
    FN_ENTER(0x0075f592);
    /* 0075f592: cmp byte ptr [eax], al */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;   }
    /* 0075f594: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f596: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 0075f598: sbb byte ptr [edi + 0xc], ch */ { u32 ad = (u32)(r_edi+0xcu); u32 c = fC; u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a - b - c) & 0xffu; W8(ad, r);  }
    /* 0075f59b: add byte ptr [ebp - 0x74f38b40], al */ { u32 ad = (u32)(r_ebp+0x8b0c74c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 0075f5a1: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0075f5a2: in al, dx */ UNSUP(0x0075f5a2, "in al, dx");
    /* 0075f5a3: mov byte ptr [eax + 0x1c], 0x14 */ W8((u32)(r_eax+0x1cu), 0x14u);
    /* 0075f5a7: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f592); r_esp += 4; return;
}

void f_0075f5a6(void)
{
    FN_ENTER(0x0075f5a6);
    /* 0075f5a6: adc al, 0xe9 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xe9u; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0075f5a8: aad 7 */ UNSUP(0x0075f5a8, "aad 7");
    /* 0075f5aa: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0075f5ac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f5af: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0075f5b3: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f5a6); r_esp += 4; return;
}

void f_0075f5b8(void)
{
    FN_ENTER(0x0075f5b8);
    /* 0075f5b8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f5bb: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f5be: jmp 0x75f5e4 */ goto L_0075f5e4;
L_0075f5e4:; BB(0x0075f5e4);
    /* 0075f5e4: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75f5e9u); f_0073d114();
    /* 0075f5e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f5eb: je 0x75f602 */ if (fZ) goto L_0075f602;
L_0075f5ed:; BB(0x0075f5ed);
    /* 0075f5ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f5f0: mov byte ptr [eax + 0x1c], 0x19 */ W8((u32)(r_eax+0x1cu), 0x19u);
    /* 0075f5f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f5f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f5fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f601: ret  */ FN_RET(0x0075f5b8); r_esp += 4; return;
L_0075f602:; BB(0x0075f602);
    /* 0075f602: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f605: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f608: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75f60du); f_0073ce50();
    /* 0075f60d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f60f: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f615:; BB(0x0075f615);
    /* 0075f615: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f618: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f61b: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75f620u); f_0073d134();
    /* 0075f620: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f622: je 0x75f630 */ if (fZ) goto L_0075f630;
L_0075f624:; BB(0x0075f624);
    /* 0075f624: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f627: mov byte ptr [eax + 0x1c], 0x19 */ W8((u32)(r_eax+0x1cu), 0x19u);
    /* 0075f62b: jmp 0x75fd81 */ goto L_0075fd81;
L_0075f630:; BB(0x0075f630);
    /* 0075f630: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f633: call 0x7606fc */ r_esp -= 4; W32(r_esp, 0x75f638u); f_007606fc();
    /* 0075f638: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f5b8); r_esp += 4; return;
}

void f_0075f5c0(void)
{
    FN_ENTER(0x0075f5c0);
    /* 0075f5c0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f5c3: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075f5c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f5c8: je 0x75f5cf */ if (fZ) goto L_0075f5cf;
L_0075f5ca:; BB(0x0075f5ca);
    /* 0075f5ca: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x75f5cfu); f_007127c8();
L_0075f5cf:; BB(0x0075f5cf);
    /* 0075f5cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f5d2: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f5d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f5d7: je 0x75fe6a */ if (fZ) goto L_0075fe6a;
L_0075f5dd:; BB(0x0075f5dd);
    /* 0075f5dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f5e0: mov byte ptr [eax + 0x1c], 0x18 */ W8((u32)(r_eax+0x1cu), 0x18u);
    /* 0075f5e4: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75f5e9u); f_0073d114();
    /* 0075f5e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f5eb: je 0x75f602 */ if (fZ) goto L_0075f602;
L_0075f5ed:; BB(0x0075f5ed);
    /* 0075f5ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f5f0: mov byte ptr [eax + 0x1c], 0x19 */ W8((u32)(r_eax+0x1cu), 0x19u);
    /* 0075f5f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f5f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f5fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f601: ret  */ FN_RET(0x0075f5c0); r_esp += 4; return;
L_0075f602:; BB(0x0075f602);
    /* 0075f602: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f605: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f608: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75f60du); f_0073ce50();
    /* 0075f60d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f60f: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f615:; BB(0x0075f615);
    /* 0075f615: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f618: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f61b: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75f620u); f_0073d134();
    /* 0075f620: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f622: je 0x75f630 */ if (fZ) goto L_0075f630;
L_0075f624:; BB(0x0075f624);
    /* 0075f624: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f627: mov byte ptr [eax + 0x1c], 0x19 */ W8((u32)(r_eax+0x1cu), 0x19u);
    /* 0075f62b: jmp 0x75fd81 */ goto L_0075fd81;
L_0075f630:; BB(0x0075f630);
    /* 0075f630: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f633: call 0x7606fc */ r_esp -= 4; W32(r_esp, 0x75f638u); f_007606fc();
    /* 0075f638: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f5c0); r_esp += 4; return;
L_0075fe6a:; BB(0x0075fe6a);
    /* 0075fe6a: mov ecx, eax */ r_ecx = r_eax;
    /* 0075fe6c: call 0x7607c0 */ r_esp -= 4; W32(r_esp, 0x75fe71u); f_007607c0();
    /* 0075fe71: mov ecx, eax */ r_ecx = r_eax;
    /* 0075fe73: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fe76: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0075fe79: jmp 0x75f5dd */ goto L_0075f5dd;
}

void f_0075f5c2(void)
{
    FN_ENTER(0x0075f5c2);
    /* 0075f5c2: in al, dx */ UNSUP(0x0075f5c2, "in al, dx");
    /* 0075f5c3: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075f5c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f5c8: je 0x75f5cf */ if (fZ) goto L_0075f5cf;
L_0075f5ca:; BB(0x0075f5ca);
    /* 0075f5ca: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x75f5cfu); f_007127c8();
L_0075f5cf:; BB(0x0075f5cf);
    /* 0075f5cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f5d2: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f5d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f5d7: je 0x75fe6a */ if (fZ) goto L_0075fe6a;
L_0075f5dd:; BB(0x0075f5dd);
    /* 0075f5dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f5e0: mov byte ptr [eax + 0x1c], 0x18 */ W8((u32)(r_eax+0x1cu), 0x18u);
    /* 0075f5e4: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75f5e9u); f_0073d114();
    /* 0075f5e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f5eb: je 0x75f602 */ if (fZ) goto L_0075f602;
L_0075f5ed:; BB(0x0075f5ed);
    /* 0075f5ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f5f0: mov byte ptr [eax + 0x1c], 0x19 */ W8((u32)(r_eax+0x1cu), 0x19u);
    /* 0075f5f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f5f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f5fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f601: ret  */ FN_RET(0x0075f5c2); r_esp += 4; return;
L_0075f602:; BB(0x0075f602);
    /* 0075f602: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f605: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f608: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75f60du); f_0073ce50();
    /* 0075f60d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f60f: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f615:; BB(0x0075f615);
    /* 0075f615: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f618: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f61b: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75f620u); f_0073d134();
    /* 0075f620: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f622: je 0x75f630 */ if (fZ) goto L_0075f630;
L_0075f624:; BB(0x0075f624);
    /* 0075f624: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f627: mov byte ptr [eax + 0x1c], 0x19 */ W8((u32)(r_eax+0x1cu), 0x19u);
    /* 0075f62b: jmp 0x75fd81 */ goto L_0075fd81;
L_0075f630:; BB(0x0075f630);
    /* 0075f630: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f633: call 0x7606fc */ r_esp -= 4; W32(r_esp, 0x75f638u); f_007606fc();
    /* 0075f638: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f5c2); r_esp += 4; return;
L_0075fe6a:; BB(0x0075fe6a);
    /* 0075fe6a: mov ecx, eax */ r_ecx = r_eax;
    /* 0075fe6c: call 0x7607c0 */ r_esp -= 4; W32(r_esp, 0x75fe71u); f_007607c0();
    /* 0075fe71: mov ecx, eax */ r_ecx = r_eax;
    /* 0075fe73: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fe76: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0075fe79: jmp 0x75f5dd */ goto L_0075f5dd;
}

void f_0075f5d2(void)
{
    FN_ENTER(0x0075f5d2);
    /* 0075f5d2: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f5d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f5d7: je 0x75fe6a */ if (fZ) goto L_0075fe6a;
L_0075f5dd:; BB(0x0075f5dd);
    /* 0075f5dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f5e0: mov byte ptr [eax + 0x1c], 0x18 */ W8((u32)(r_eax+0x1cu), 0x18u);
    /* 0075f5e4: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75f5e9u); f_0073d114();
    /* 0075f5e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f5eb: je 0x75f602 */ if (fZ) goto L_0075f602;
L_0075f5ed:; BB(0x0075f5ed);
    /* 0075f5ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f5f0: mov byte ptr [eax + 0x1c], 0x19 */ W8((u32)(r_eax+0x1cu), 0x19u);
    /* 0075f5f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f5f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f5fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f601: ret  */ FN_RET(0x0075f5d2); r_esp += 4; return;
L_0075f602:; BB(0x0075f602);
    /* 0075f602: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f605: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f608: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75f60du); f_0073ce50();
    /* 0075f60d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f60f: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f615:; BB(0x0075f615);
    /* 0075f615: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f618: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f61b: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75f620u); f_0073d134();
    /* 0075f620: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f622: je 0x75f630 */ if (fZ) goto L_0075f630;
L_0075f624:; BB(0x0075f624);
    /* 0075f624: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f627: mov byte ptr [eax + 0x1c], 0x19 */ W8((u32)(r_eax+0x1cu), 0x19u);
    /* 0075f62b: jmp 0x75fd81 */ goto L_0075fd81;
L_0075f630:; BB(0x0075f630);
    /* 0075f630: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f633: call 0x7606fc */ r_esp -= 4; W32(r_esp, 0x75f638u); f_007606fc();
    /* 0075f638: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f5d2); r_esp += 4; return;
L_0075fe6a:; BB(0x0075fe6a);
    /* 0075fe6a: mov ecx, eax */ r_ecx = r_eax;
    /* 0075fe6c: call 0x7607c0 */ r_esp -= 4; W32(r_esp, 0x75fe71u); f_007607c0();
    /* 0075fe71: mov ecx, eax */ r_ecx = r_eax;
    /* 0075fe73: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fe76: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0075fe79: jmp 0x75f5dd */ goto L_0075f5dd;
}

void f_0075f5e0(void)
{
    FN_ENTER(0x0075f5e0);
    /* 0075f5e0: mov byte ptr [eax + 0x1c], 0x18 */ W8((u32)(r_eax+0x1cu), 0x18u);
    /* 0075f5e4: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75f5e9u); f_0073d114();
    /* 0075f5e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f5eb: je 0x75f602 */ if (fZ) goto L_0075f602;
L_0075f5ed:; BB(0x0075f5ed);
    /* 0075f5ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f5f0: mov byte ptr [eax + 0x1c], 0x19 */ W8((u32)(r_eax+0x1cu), 0x19u);
    /* 0075f5f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f5f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f5fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f601: ret  */ FN_RET(0x0075f5e0); r_esp += 4; return;
L_0075f602:; BB(0x0075f602);
    /* 0075f602: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f605: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f608: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75f60du); f_0073ce50();
    /* 0075f60d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f60f: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f615:; BB(0x0075f615);
    /* 0075f615: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f618: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f61b: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75f620u); f_0073d134();
    /* 0075f620: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f622: je 0x75f630 */ if (fZ) goto L_0075f630;
L_0075f624:; BB(0x0075f624);
    /* 0075f624: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f627: mov byte ptr [eax + 0x1c], 0x19 */ W8((u32)(r_eax+0x1cu), 0x19u);
    /* 0075f62b: jmp 0x75fd81 */ goto L_0075fd81;
L_0075f630:; BB(0x0075f630);
    /* 0075f630: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f633: call 0x7606fc */ r_esp -= 4; W32(r_esp, 0x75f638u); f_007606fc();
    /* 0075f638: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f5e0); r_esp += 4; return;
}

void f_0075f5f2(void)
{
    FN_ENTER(0x0075f5f2);
    /* 0075f5f2: sbb al, 0x19 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x19u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = ((u64)a < (u64)b + c); }
    /* 0075f5f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f5f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f5fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f601: ret  */ FN_RET(0x0075f5f2); r_esp += 4; return;
}

void f_0075f5fe(void)
{
    FN_ENTER(0x0075f5fe);
    /* 0075f5fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f601: ret  */ FN_RET(0x0075f5fe); r_esp += 4; return;
}

void f_0075f608(void)
{
    FN_ENTER(0x0075f608);
    /* 0075f608: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x75f60du); f_0073ce50();
    /* 0075f60d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f60f: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f615:; BB(0x0075f615);
    /* 0075f615: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f618: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075f61b: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x75f620u); f_0073d134();
    /* 0075f620: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f622: je 0x75f630 */ if (fZ) goto L_0075f630;
L_0075f624:; BB(0x0075f624);
    /* 0075f624: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f627: mov byte ptr [eax + 0x1c], 0x19 */ W8((u32)(r_eax+0x1cu), 0x19u);
    /* 0075f62b: jmp 0x75fd81 */ goto L_0075fd81;
L_0075f630:; BB(0x0075f630);
    /* 0075f630: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f633: call 0x7606fc */ r_esp -= 4; W32(r_esp, 0x75f638u); f_007606fc();
    /* 0075f638: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f608); r_esp += 4; return;
}

void f_0075f614(void)
{
    FN_ENTER(0x0075f614);
    /* 0075f614: add byte ptr [ebx + 0x488bec45], cl */ { u32 ad = (u32)(r_ebx+0x488bec45u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f61a: cmp al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 0075f61c: adc al, 0xdb */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xdbu; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (unsigned)((((u64)a + b + c) >> 8) & 1); }
    /* 0075f61e: std  */ rt_df = 1;
    /* 0075f61f: inc dword ptr [ebp - 0x74f38b40] */ { u32 ad = (u32)(r_ebp+0x8b0c74c0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0075f625: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0075f626: in al, dx */ UNSUP(0x0075f626, "in al, dx");
    /* 0075f627: mov byte ptr [eax + 0x1c], 0x19 */ W8((u32)(r_eax+0x1cu), 0x19u);
    /* 0075f62b: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f614); r_esp += 4; return;
}

void f_0075f61e(void)
{
    FN_ENTER(0x0075f61e);
    /* 0075f61e: std  */ rt_df = 1;
    /* 0075f61f: inc dword ptr [ebp - 0x74f38b40] */ { u32 ad = (u32)(r_ebp+0x8b0c74c0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0075f625: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0075f626: in al, dx */ UNSUP(0x0075f626, "in al, dx");
    /* 0075f627: mov byte ptr [eax + 0x1c], 0x19 */ W8((u32)(r_eax+0x1cu), 0x19u);
    /* 0075f62b: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f61e); r_esp += 4; return;
}

void f_0075f630(void)
{
    FN_ENTER(0x0075f630);
    /* 0075f630: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f633: call 0x7606fc */ r_esp -= 4; W32(r_esp, 0x75f638u); f_007606fc();
    /* 0075f638: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f630); r_esp += 4; return;
}

void f_0075f63c(void)
{
    FN_ENTER(0x0075f63c);
    /* 0075f63c: add byte ptr [ebx + 0x488bec45], cl */ { u32 ad = (u32)(r_ebx+0x488bec45u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f642: xor al, 0x85 */ {  u32 a = (u8)r_eax; u32 b = 0x85u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0075f644: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0075f645: je 0x75f656 */ if (fZ) goto L_0075f656;
L_0075f647:; BB(0x0075f647);
    /* 0075f647: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75f64cu); f_007127b0();
    /* 0075f64c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f64f: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075f656:; BB(0x0075f656);
    /* 0075f656: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075f659: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f65b: je 0x75f662 */ if (fZ) goto L_0075f662;
L_0075f65d:; BB(0x0075f65d);
    /* 0075f65d: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x75f662u); f_0073605c();
L_0075f662:; BB(0x0075f662);
    /* 0075f662: call 0x8264a0 */ r_esp -= 4; W32(r_esp, 0x75f667u); f_008264a0();
    /* 0075f667: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f66a: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0075f66e: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f63c); r_esp += 4; return;
}

void f_0075f63d(void)
{
    FN_ENTER(0x0075f63d);
    /* 0075f63d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f640: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075f643: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f645: je 0x75f656 */ if (fZ) goto L_0075f656;
L_0075f647:; BB(0x0075f647);
    /* 0075f647: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75f64cu); f_007127b0();
    /* 0075f64c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f64f: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075f656:; BB(0x0075f656);
    /* 0075f656: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075f659: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f65b: je 0x75f662 */ if (fZ) goto L_0075f662;
L_0075f65d:; BB(0x0075f65d);
    /* 0075f65d: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x75f662u); f_0073605c();
L_0075f662:; BB(0x0075f662);
    /* 0075f662: call 0x8264a0 */ r_esp -= 4; W32(r_esp, 0x75f667u); f_008264a0();
    /* 0075f667: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f66a: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0075f66e: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f63d); r_esp += 4; return;
}

void f_0075f652(void)
{
    FN_ENTER(0x0075f652);
    /* 0075f652: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f654: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0075f656: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075f659: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f65b: je 0x75f662 */ if (fZ) goto L_0075f662;
L_0075f65d:; BB(0x0075f65d);
    /* 0075f65d: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x75f662u); f_0073605c();
L_0075f662:; BB(0x0075f662);
    /* 0075f662: call 0x8264a0 */ r_esp -= 4; W32(r_esp, 0x75f667u); f_008264a0();
    /* 0075f667: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f66a: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0075f66e: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f652); r_esp += 4; return;
}

void f_0075f664(void)
{
    FN_ENTER(0x0075f664);
    /* 0075f664: outsb dx, byte ptr [esi] */ UNSUP(0x0075f664, "outsb dx, byte ptr [esi]");
    /* 0075f665: or al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f667: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f66a: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0075f66e: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f664); r_esp += 4; return;
}

void f_0075f673(void)
{
    FN_ENTER(0x0075f673);
    /* 0075f673: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f676: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075f679: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f67b: je 0x75f688 */ if (fZ) goto L_0075f688;
L_0075f67d:; BB(0x0075f67d);
    /* 0075f67d: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x75f682u); f_0073600c();
    /* 0075f682: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f685: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
L_0075f688:; BB(0x0075f688);
    /* 0075f688: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x75f68du); f_00712714();
    /* 0075f68d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f690: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075f693: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f695: je 0x75fe7e */ if (fZ) goto L_0075fe7e;
L_0075f69b:; BB(0x0075f69b);
    /* 0075f69b: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x75f6a0u); f_00712714();
    /* 0075f6a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f6a3: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075f6a6: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0075f6ad: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075f6b3: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0075f6ba: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0075f6bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f6bf: je 0x75f6c8 */ if (fZ) goto L_0075f6c8;
L_0075f6c1:; BB(0x0075f6c1);
    /* 0075f6c1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f6c3: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75f6c8u); f_00760acc();
L_0075f6c8:; BB(0x0075f6c8);
    /* 0075f6c8: call 0x82648c */ r_esp -= 4; W32(r_esp, 0x75f6cdu); f_0082648c();
    /* 0075f6cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f6d0: mov byte ptr [eax + 0x1c], 0x15 */ W8((u32)(r_eax+0x1cu), 0x15u);
    /* 0075f6d4: call 0x826508 */ r_esp -= 4; W32(r_esp, 0x75f6d9u); f_00826508();
    /* 0075f6d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f6db: je 0x75f6f1 */ if (fZ) goto L_0075f6f1;
L_0075f6dd:; BB(0x0075f6dd);
    /* 0075f6dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f6e0: push 0xffee946e */ { u32 v = 0xffee946eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f6e5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f6e7: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075f6ea: call 0x736608 */ r_esp -= 4; W32(r_esp, 0x75f6efu); f_00736608();
    /* 0075f6ef: jmp 0x75f6fe */ goto L_0075f6fe;
L_0075f6f1:; BB(0x0075f6f1);
    /* 0075f6f1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f6f4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f6f6: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075f6f9: call 0x73662c */ r_esp -= 4; W32(r_esp, 0x75f6feu); f_0073662c();
L_0075f6fe:; BB(0x0075f6fe);
    /* 0075f6fe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f701: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075f704: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0075f70b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f70d: je 0x75f724 */ if (fZ) goto L_0075f724;
L_0075f70f:; BB(0x0075f70f);
    /* 0075f70f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f712: mov byte ptr [eax + 0x1c], 0x16 */ W8((u32)(r_eax+0x1cu), 0x16u);
    /* 0075f716: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f719: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f720: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f722: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f723: ret  */ FN_RET(0x0075f673); r_esp += 4; return;
L_0075f724:; BB(0x0075f724);
    /* 0075f724: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f726: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f72c:; BB(0x0075f72c);
    /* 0075f72c: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75f731u); f_007365f4();
    /* 0075f731: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f734: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0075f737: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0075f73a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f73c: je 0x75f743 */ if (fZ) goto L_0075f743;
L_0075f73e:; BB(0x0075f73e);
    /* 0075f73e: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x75f743u); f_007127c8();
L_0075f743:; BB(0x0075f743);
    /* 0075f743: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f746: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075f749: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f74b: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f751:; BB(0x0075f751);
    /* 0075f751: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x75f756u); f_0073605c();
    /* 0075f756: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f673); r_esp += 4; return;
L_0075fe7e:; BB(0x0075fe7e);
    /* 0075fe7e: mov ecx, eax */ r_ecx = r_eax;
    /* 0075fe80: call 0x7605dc */ r_esp -= 4; W32(r_esp, 0x75fe85u); f_007605dc();
    /* 0075fe85: mov ecx, eax */ r_ecx = r_eax;
    /* 0075fe87: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fe8a: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0075fe8d: jmp 0x75f69b */ goto L_0075f69b;
}

void f_0075f6d4(void)
{
    FN_ENTER(0x0075f6d4);
    /* 0075f6d4: call 0x826508 */ r_esp -= 4; W32(r_esp, 0x75f6d9u); f_00826508();
    /* 0075f6d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f6db: je 0x75f6f1 */ if (fZ) goto L_0075f6f1;
L_0075f6dd:; BB(0x0075f6dd);
    /* 0075f6dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f6e0: push 0xffee946e */ { u32 v = 0xffee946eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075f6e5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f6e7: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075f6ea: call 0x736608 */ r_esp -= 4; W32(r_esp, 0x75f6efu); f_00736608();
    /* 0075f6ef: jmp 0x75f6fe */ goto L_0075f6fe;
L_0075f6f1:; BB(0x0075f6f1);
    /* 0075f6f1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f6f4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f6f6: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075f6f9: call 0x73662c */ r_esp -= 4; W32(r_esp, 0x75f6feu); f_0073662c();
L_0075f6fe:; BB(0x0075f6fe);
    /* 0075f6fe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f701: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0075f704: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0075f70b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f70d: je 0x75f724 */ if (fZ) goto L_0075f724;
L_0075f70f:; BB(0x0075f70f);
    /* 0075f70f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f712: mov byte ptr [eax + 0x1c], 0x16 */ W8((u32)(r_eax+0x1cu), 0x16u);
    /* 0075f716: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f719: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f720: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f722: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f723: ret  */ FN_RET(0x0075f6d4); r_esp += 4; return;
L_0075f724:; BB(0x0075f724);
    /* 0075f724: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f726: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f72c:; BB(0x0075f72c);
    /* 0075f72c: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75f731u); f_007365f4();
    /* 0075f731: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f734: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0075f737: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0075f73a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f73c: je 0x75f743 */ if (fZ) goto L_0075f743;
L_0075f73e:; BB(0x0075f73e);
    /* 0075f73e: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x75f743u); f_007127c8();
L_0075f743:; BB(0x0075f743);
    /* 0075f743: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f746: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075f749: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f74b: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f751:; BB(0x0075f751);
    /* 0075f751: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x75f756u); f_0073605c();
    /* 0075f756: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f6d4); r_esp += 4; return;
}

void f_0075f75b(void)
{
    FN_ENTER(0x0075f75b);
    /* 0075f75b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f75e: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0075f761: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f763: je 0x75f774 */ if (fZ) goto L_0075f774;
L_0075f765:; BB(0x0075f765);
    /* 0075f765: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75f76au); f_007127b0();
    /* 0075f76a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f76d: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0075f774:; BB(0x0075f774);
    /* 0075f774: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f777: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f779: je 0x75f7bd */ if (fZ) goto L_0075f7bd;
L_0075f77b:; BB(0x0075f77b);
    /* 0075f77b: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0075f782: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f787: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0075f78a: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0075f791: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f793: je 0x75f79c */ if (fZ) goto L_0075f79c;
L_0075f795:; BB(0x0075f795);
    /* 0075f795: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f797: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75f79cu); f_00760acc();
L_0075f79c:; BB(0x0075f79c);
    /* 0075f79c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f79f: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0075f7a2: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0075f7a9: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f7ae: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0075f7b5: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 0075f7b8: call 0x737e10 */ r_esp -= 4; W32(r_esp, 0x75f7bdu); f_00737e10();
L_0075f7bd:; BB(0x0075f7bd);
    /* 0075f7bd: call 0x8264b4 */ r_esp -= 4; W32(r_esp, 0x75f7c2u); f_008264b4();
    /* 0075f7c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f7c4: je 0x75f7d2 */ if (fZ) goto L_0075f7d2;
L_0075f7c6:; BB(0x0075f7c6);
    /* 0075f7c6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f7c9: mov byte ptr [eax + 0x1c], 0x14 */ W8((u32)(r_eax+0x1cu), 0x14u);
    /* 0075f7cd: jmp 0x75fd81 */ goto L_0075fd81;
L_0075f7d2:; BB(0x0075f7d2);
    /* 0075f7d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f7d5: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0075f7d9: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f75b); r_esp += 4; return;
}

void f_0075f7de(void)
{
    FN_ENTER(0x0075f7de);
    /* 0075f7de: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f7e1: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075f7e4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f7e6: je 0x75f7ed */ if (fZ) goto L_0075f7ed;
L_0075f7e8:; BB(0x0075f7e8);
    /* 0075f7e8: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x75f7edu); f_007127c8();
L_0075f7ed:; BB(0x0075f7ed);
    /* 0075f7ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f7f0: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075f7f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f7f5: je 0x75f816 */ if (fZ) goto L_0075f816;
L_0075f7f7:; BB(0x0075f7f7);
    /* 0075f7f7: call 0x737e34 */ r_esp -= 4; W32(r_esp, 0x75f7fcu); f_00737e34();
    /* 0075f7fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f7ff: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075f802: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0075f809: or edx, 0xffff0200 */ {  u32 a = r_edx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075f80f: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
L_0075f816:; BB(0x0075f816);
    /* 0075f816: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075f819: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f81b: je 0x75fe92 */ if (fZ) goto L_0075fe92;
L_0075f821:; BB(0x0075f821);
    /* 0075f821: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f824: mov byte ptr [eax + 0x1c], 0x12 */ W8((u32)(r_eax+0x1cu), 0x12u);
    /* 0075f828: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f82b: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075f82e: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x75f833u); f_00737d90();
    /* 0075f833: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f836: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f837: call 0x7605b8 */ r_esp -= 4; W32(r_esp, 0x75f83cu); f_007605b8();
    /* 0075f83c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f83f: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f842: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0075f849: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f84b: je 0x75f862 */ if (fZ) goto L_0075f862;
L_0075f84d:; BB(0x0075f84d);
    /* 0075f84d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f850: mov byte ptr [eax + 0x1c], 0x13 */ W8((u32)(r_eax+0x1cu), 0x13u);
    /* 0075f854: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f857: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f85e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f860: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f861: ret  */ FN_RET(0x0075f7de); r_esp += 4; return;
L_0075f862:; BB(0x0075f862);
    /* 0075f862: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f864: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f86a:; BB(0x0075f86a);
    /* 0075f86a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f86d: mov byte ptr [eax + 0x1c], 0x13 */ W8((u32)(r_eax+0x1cu), 0x13u);
    /* 0075f871: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f7de); r_esp += 4; return;
L_0075fe92:; BB(0x0075fe92);
    /* 0075fe92: mov ecx, eax */ r_ecx = r_eax;
    /* 0075fe94: call 0x760528 */ r_esp -= 4; W32(r_esp, 0x75fe99u); f_00760528();
    /* 0075fe99: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fe9c: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0075fe9f: jmp 0x75f821 */ goto L_0075f821;
}

void f_0075f828(void)
{
    FN_ENTER(0x0075f828);
    /* 0075f828: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f82b: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075f82e: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x75f833u); f_00737d90();
    /* 0075f833: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f836: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f837: call 0x7605b8 */ r_esp -= 4; W32(r_esp, 0x75f83cu); f_007605b8();
    /* 0075f83c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f83f: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075f842: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0075f849: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f84b: je 0x75f862 */ if (fZ) goto L_0075f862;
L_0075f84d:; BB(0x0075f84d);
    /* 0075f84d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f850: mov byte ptr [eax + 0x1c], 0x13 */ W8((u32)(r_eax+0x1cu), 0x13u);
    /* 0075f854: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f857: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f85e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f860: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f861: ret  */ FN_RET(0x0075f828); r_esp += 4; return;
L_0075f862:; BB(0x0075f862);
    /* 0075f862: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f864: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f86a:; BB(0x0075f86a);
    /* 0075f86a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f86d: mov byte ptr [eax + 0x1c], 0x13 */ W8((u32)(r_eax+0x1cu), 0x13u);
    /* 0075f871: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f828); r_esp += 4; return;
}

void f_0075f876(void)
{
    FN_ENTER(0x0075f876);
    /* 0075f876: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f879: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075f87c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f87e: je 0x75f88f */ if (fZ) goto L_0075f88f;
L_0075f880:; BB(0x0075f880);
    /* 0075f880: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75f885u); f_007127b0();
    /* 0075f885: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f888: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0075f88f:; BB(0x0075f88f);
    /* 0075f88f: mov byte ptr [eax + 0x1c], 0xc */ W8((u32)(r_eax+0x1cu), 0xcu);
    /* 0075f893: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f876); r_esp += 4; return;
}

void f_0075f898(void)
{
    FN_ENTER(0x0075f898);
    /* 0075f898: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f89b: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075f89e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f8a0: je 0x75f8b1 */ if (fZ) goto L_0075f8b1;
L_0075f8a2:; BB(0x0075f8a2);
    /* 0075f8a2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75f8a7u); f_007127b0();
    /* 0075f8a7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f8aa: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0075f8b1:; BB(0x0075f8b1);
    /* 0075f8b1: mov byte ptr [eax + 0x1c], 0xa */ W8((u32)(r_eax+0x1cu), 0xau);
    /* 0075f8b5: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f898); r_esp += 4; return;
}

void f_0075f8ba(void)
{
    FN_ENTER(0x0075f8ba);
    /* 0075f8ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f8bd: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075f8c0: jmp 0x75f90c */ goto L_0075f90c;
L_0075f90c:; BB(0x0075f90c);
    /* 0075f90c: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 0075f910: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075f912: je 0x75f91f */ if (fZ) goto L_0075f91f;
L_0075f914:; BB(0x0075f914);
    /* 0075f914: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f917: mov byte ptr [eax + 0x1c], 0xf */ W8((u32)(r_eax+0x1cu), 0xfu);
    /* 0075f91b: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
L_0075f91f:; BB(0x0075f91f);
    /* 0075f91f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f921: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f927:; BB(0x0075f927);
    /* 0075f927: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f92a: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075f92d: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x75f932u); f_00737d90();
    /* 0075f932: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f935: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 0075f938: push dword ptr [ecx + 0x70] */ { u32 v = R32((u32)(r_ecx+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f93b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f93c: call 0x826130 */ r_esp -= 4; W32(r_esp, 0x75f941u); f_00826130();
    /* 0075f941: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075f944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f947: mov byte ptr [eax + 0x1c], 0x10 */ W8((u32)(r_eax+0x1cu), 0x10u);
    /* 0075f94b: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f8ba); r_esp += 4; return;
}

void f_0075f8c2(void)
{
    FN_ENTER(0x0075f8c2);
    /* 0075f8c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f8c5: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0075f8c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f8ca: je 0x75f8db */ if (fZ) goto L_0075f8db;
L_0075f8cc:; BB(0x0075f8cc);
    /* 0075f8cc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75f8d1u); f_007127b0();
    /* 0075f8d1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f8d4: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0075f8db:; BB(0x0075f8db);
    /* 0075f8db: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075f8de: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x75f8e3u); f_00737d90();
    /* 0075f8e3: mov ebx, eax */ r_ebx = r_eax;
    /* 0075f8e5: call 0x8260b4 */ r_esp -= 4; W32(r_esp, 0x75f8eau); f_008260b4();
    /* 0075f8ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075f8eb: mov ecx, eax */ r_ecx = r_eax;
    /* 0075f8ed: call 0x824b58 */ r_esp -= 4; W32(r_esp, 0x75f8f2u); f_00824b58();
    /* 0075f8f2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075f8f5: jle 0x75f950 */ if ((fZ||fS!=fO)) goto L_0075f950;
L_0075f8f7:; BB(0x0075f8f7);
    /* 0075f8f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f8fa: mov edx, dword ptr [edx + 0x48] */ r_edx = R32((u32)(r_edx+0x48u));
    /* 0075f8fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f8ff: je 0x75fea4 */ if (fZ) goto L_0075fea4;
L_0075f905:; BB(0x0075f905);
    /* 0075f905: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f908: mov byte ptr [eax + 0x1c], 0xe */ W8((u32)(r_eax+0x1cu), 0xeu);
    /* 0075f90c: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 0075f910: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075f912: je 0x75f91f */ if (fZ) goto L_0075f91f;
L_0075f914:; BB(0x0075f914);
    /* 0075f914: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f917: mov byte ptr [eax + 0x1c], 0xf */ W8((u32)(r_eax+0x1cu), 0xfu);
    /* 0075f91b: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
L_0075f91f:; BB(0x0075f91f);
    /* 0075f91f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f921: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075f927:; BB(0x0075f927);
    /* 0075f927: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f92a: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075f92d: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x75f932u); f_00737d90();
    /* 0075f932: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f935: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 0075f938: push dword ptr [ecx + 0x70] */ { u32 v = R32((u32)(r_ecx+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075f93b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075f93c: call 0x826130 */ r_esp -= 4; W32(r_esp, 0x75f941u); f_00826130();
    /* 0075f941: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075f944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f947: mov byte ptr [eax + 0x1c], 0x10 */ W8((u32)(r_eax+0x1cu), 0x10u);
    /* 0075f94b: jmp 0x75fd81 */ goto L_0075fd81;
L_0075f950:; BB(0x0075f950);
    /* 0075f950: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f952: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075f953: call 0x826130 */ r_esp -= 4; W32(r_esp, 0x75f958u); f_00826130();
    /* 0075f958: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075f95b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f95e: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075f961: mov byte ptr [eax + 0x1c], 0x10 */ W8((u32)(r_eax+0x1cu), 0x10u);
    /* 0075f965: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075f968: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075f96f: mov esp, ebp */ r_esp = r_ebp;
    /* 0075f971: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075f972: ret  */ FN_RET(0x0075f8c2); r_esp += 4; return;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f8c2); r_esp += 4; return;
L_0075fea4:; BB(0x0075fea4);
    /* 0075fea4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fea7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fea8: call 0x760468 */ r_esp -= 4; W32(r_esp, 0x75feadu); f_00760468();
    /* 0075fead: mov edx, eax */ r_edx = r_eax;
    /* 0075feaf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075feb2: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 0075feb5: jmp 0x75f905 */ goto L_0075f905;
}

void f_0075f973(void)
{
    FN_ENTER(0x0075f973);
    /* 0075f973: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f976: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0075f979: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f97b: je 0x75f98c */ if (fZ) goto L_0075f98c;
L_0075f97d:; BB(0x0075f97d);
    /* 0075f97d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75f982u); f_007127b0();
    /* 0075f982: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f985: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0075f98c:; BB(0x0075f98c);
    /* 0075f98c: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075f98f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075f991: je 0x75f9d5 */ if (fZ) goto L_0075f9d5;
L_0075f993:; BB(0x0075f993);
    /* 0075f993: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0075f99a: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f99f: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0075f9a2: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0075f9a9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f9ab: je 0x75f9b4 */ if (fZ) goto L_0075f9b4;
L_0075f9ad:; BB(0x0075f9ad);
    /* 0075f9ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075f9af: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75f9b4u); f_00760acc();
L_0075f9b4:; BB(0x0075f9b4);
    /* 0075f9b4: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f9b7: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0075f9ba: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0075f9c1: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075f9c6: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0075f9cd: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0075f9d0: call 0x737e10 */ r_esp -= 4; W32(r_esp, 0x75f9d5u); f_00737e10();
L_0075f9d5:; BB(0x0075f9d5);
    /* 0075f9d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f9d8: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0075f9dc: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f973); r_esp += 4; return;
}

void f_0075f9e1(void)
{
    FN_ENTER(0x0075f9e1);
    /* 0075f9e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f9e4: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075f9e7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f9e9: je 0x75f9f0 */ if (fZ) goto L_0075f9f0;
L_0075f9eb:; BB(0x0075f9eb);
    /* 0075f9eb: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x75f9f0u); f_007127c8();
L_0075f9f0:; BB(0x0075f9f0);
    /* 0075f9f0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075f9f3: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075f9f6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075f9f8: je 0x75f9ff */ if (fZ) goto L_0075f9ff;
L_0075f9fa:; BB(0x0075f9fa);
    /* 0075f9fa: call 0x737e34 */ r_esp -= 4; W32(r_esp, 0x75f9ffu); f_00737e34();
L_0075f9ff:; BB(0x0075f9ff);
    /* 0075f9ff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fa02: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075fa05: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fa07: je 0x75feba */ if (fZ) goto L_0075feba;
L_0075fa0d:; BB(0x0075fa0d);
    /* 0075fa0d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fa10: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075fa13: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0075fa1a: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075fa20: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0075fa27: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0075fa2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fa2c: je 0x75fa35 */ if (fZ) goto L_0075fa35;
L_0075fa2e:; BB(0x0075fa2e);
    /* 0075fa2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075fa30: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75fa35u); f_00760acc();
L_0075fa35:; BB(0x0075fa35);
    /* 0075fa35: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fa38: mov byte ptr [eax + 0x1c], 0xb */ W8((u32)(r_eax+0x1cu), 0xbu);
    /* 0075fa3c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fa3f: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075fa42: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x75fa47u); f_00737d90();
    /* 0075fa47: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fa4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fa4b: call 0x7605b8 */ r_esp -= 4; W32(r_esp, 0x75fa50u); f_007605b8();
    /* 0075fa50: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fa53: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075fa56: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0075fa5d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fa5f: je 0x75fa76 */ if (fZ) goto L_0075fa76;
L_0075fa61:; BB(0x0075fa61);
    /* 0075fa61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fa64: mov byte ptr [eax + 0x1c], 0xc */ W8((u32)(r_eax+0x1cu), 0xcu);
    /* 0075fa68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fa6b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fa72: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fa74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fa75: ret  */ FN_RET(0x0075f9e1); r_esp += 4; return;
L_0075fa76:; BB(0x0075fa76);
    /* 0075fa76: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fa78: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075fa7e:; BB(0x0075fa7e);
    /* 0075fa7e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fa81: mov byte ptr [eax + 0x1c], 0xd */ W8((u32)(r_eax+0x1cu), 0xdu);
    /* 0075fa85: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075f9e1); r_esp += 4; return;
L_0075feba:; BB(0x0075feba);
    /* 0075feba: mov ecx, eax */ r_ecx = r_eax;
    /* 0075febc: call 0x760528 */ r_esp -= 4; W32(r_esp, 0x75fec1u); f_00760528();
    /* 0075fec1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fec4: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0075fec7: jmp 0x75fa0d */ goto L_0075fa0d;
}

void f_0075fa3c(void)
{
    FN_ENTER(0x0075fa3c);
    /* 0075fa3c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fa3f: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075fa42: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x75fa47u); f_00737d90();
    /* 0075fa47: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fa4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fa4b: call 0x7605b8 */ r_esp -= 4; W32(r_esp, 0x75fa50u); f_007605b8();
    /* 0075fa50: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fa53: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075fa56: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0075fa5d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fa5f: je 0x75fa76 */ if (fZ) goto L_0075fa76;
L_0075fa61:; BB(0x0075fa61);
    /* 0075fa61: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fa64: mov byte ptr [eax + 0x1c], 0xc */ W8((u32)(r_eax+0x1cu), 0xcu);
    /* 0075fa68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fa6b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fa72: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fa74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fa75: ret  */ FN_RET(0x0075fa3c); r_esp += 4; return;
L_0075fa76:; BB(0x0075fa76);
    /* 0075fa76: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fa78: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075fa7e:; BB(0x0075fa7e);
    /* 0075fa7e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fa81: mov byte ptr [eax + 0x1c], 0xd */ W8((u32)(r_eax+0x1cu), 0xdu);
    /* 0075fa85: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075fa3c); r_esp += 4; return;
}

void f_0075fa8a(void)
{
    FN_ENTER(0x0075fa8a);
    /* 0075fa8a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fa8d: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075fa90: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fa92: je 0x75faa3 */ if (fZ) goto L_0075faa3;
L_0075fa94:; BB(0x0075fa94);
    /* 0075fa94: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75fa99u); f_007127b0();
    /* 0075fa99: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fa9c: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0075faa3:; BB(0x0075faa3);
    /* 0075faa3: mov byte ptr [eax + 0x1c], 5 */ W8((u32)(r_eax+0x1cu), 0x5u);
    /* 0075faa7: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075fa8a); r_esp += 4; return;
}

void f_0075faac(void)
{
    FN_ENTER(0x0075faac);
    /* 0075faac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075faaf: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075fab2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fab4: je 0x75fac5 */ if (fZ) goto L_0075fac5;
L_0075fab6:; BB(0x0075fab6);
    /* 0075fab6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75fabbu); f_007127b0();
    /* 0075fabb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fabe: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0075fac5:; BB(0x0075fac5);
    /* 0075fac5: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 0075fac9: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075faac); r_esp += 4; return;
}

void f_0075face(void)
{
    FN_ENTER(0x0075face);
    /* 0075face: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fad1: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075fad4: jmp 0x75fb20 */ goto L_0075fb20;
L_0075fb20:; BB(0x0075fb20);
    /* 0075fb20: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 0075fb24: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075fb26: je 0x75fb33 */ if (fZ) goto L_0075fb33;
L_0075fb28:; BB(0x0075fb28);
    /* 0075fb28: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fb2b: mov byte ptr [eax + 0x1c], 8 */ W8((u32)(r_eax+0x1cu), 0x8u);
    /* 0075fb2f: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
L_0075fb33:; BB(0x0075fb33);
    /* 0075fb33: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fb35: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075fb3b:; BB(0x0075fb3b);
    /* 0075fb3b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fb3e: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075fb41: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x75fb46u); f_00737d90();
    /* 0075fb46: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fb49: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 0075fb4c: push dword ptr [ecx + 0x70] */ { u32 v = R32((u32)(r_ecx+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fb4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fb50: call 0x8260cc */ r_esp -= 4; W32(r_esp, 0x75fb55u); f_008260cc();
    /* 0075fb55: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075fb58: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fb5b: mov byte ptr [eax + 0x1c], 9 */ W8((u32)(r_eax+0x1cu), 0x9u);
    /* 0075fb5f: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075face); r_esp += 4; return;
}

void f_0075fad6(void)
{
    FN_ENTER(0x0075fad6);
    /* 0075fad6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fad9: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0075fadc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fade: je 0x75faef */ if (fZ) goto L_0075faef;
L_0075fae0:; BB(0x0075fae0);
    /* 0075fae0: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75fae5u); f_007127b0();
    /* 0075fae5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fae8: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0075faef:; BB(0x0075faef);
    /* 0075faef: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075faf2: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x75faf7u); f_00737d90();
    /* 0075faf7: mov ebx, eax */ r_ebx = r_eax;
    /* 0075faf9: call 0x8260c4 */ r_esp -= 4; W32(r_esp, 0x75fafeu); f_008260c4();
    /* 0075fafe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075faff: mov ecx, eax */ r_ecx = r_eax;
    /* 0075fb01: call 0x824b58 */ r_esp -= 4; W32(r_esp, 0x75fb06u); f_00824b58();
    /* 0075fb06: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075fb09: jle 0x75fb64 */ if ((fZ||fS!=fO)) goto L_0075fb64;
L_0075fb0b:; BB(0x0075fb0b);
    /* 0075fb0b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fb0e: mov edx, dword ptr [edx + 0x48] */ r_edx = R32((u32)(r_edx+0x48u));
    /* 0075fb11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fb13: je 0x75fecc */ if (fZ) goto L_0075fecc;
L_0075fb19:; BB(0x0075fb19);
    /* 0075fb19: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fb1c: mov byte ptr [eax + 0x1c], 7 */ W8((u32)(r_eax+0x1cu), 0x7u);
    /* 0075fb20: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 0075fb24: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075fb26: je 0x75fb33 */ if (fZ) goto L_0075fb33;
L_0075fb28:; BB(0x0075fb28);
    /* 0075fb28: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fb2b: mov byte ptr [eax + 0x1c], 8 */ W8((u32)(r_eax+0x1cu), 0x8u);
    /* 0075fb2f: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
L_0075fb33:; BB(0x0075fb33);
    /* 0075fb33: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fb35: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075fb3b:; BB(0x0075fb3b);
    /* 0075fb3b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fb3e: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075fb41: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x75fb46u); f_00737d90();
    /* 0075fb46: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fb49: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 0075fb4c: push dword ptr [ecx + 0x70] */ { u32 v = R32((u32)(r_ecx+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075fb4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fb50: call 0x8260cc */ r_esp -= 4; W32(r_esp, 0x75fb55u); f_008260cc();
    /* 0075fb55: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075fb58: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fb5b: mov byte ptr [eax + 0x1c], 9 */ W8((u32)(r_eax+0x1cu), 0x9u);
    /* 0075fb5f: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fb64:; BB(0x0075fb64);
    /* 0075fb64: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075fb66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075fb67: call 0x8260cc */ r_esp -= 4; W32(r_esp, 0x75fb6cu); f_008260cc();
    /* 0075fb6c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075fb6f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fb72: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fb75: mov byte ptr [eax + 0x1c], 9 */ W8((u32)(r_eax+0x1cu), 0x9u);
    /* 0075fb79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fb7c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fb83: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fb85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fb86: ret  */ FN_RET(0x0075fad6); r_esp += 4; return;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075fad6); r_esp += 4; return;
L_0075fecc:; BB(0x0075fecc);
    /* 0075fecc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fecf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fed0: call 0x760468 */ r_esp -= 4; W32(r_esp, 0x75fed5u); f_00760468();
    /* 0075fed5: mov edx, eax */ r_edx = r_eax;
    /* 0075fed7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075feda: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 0075fedd: jmp 0x75fb19 */ goto L_0075fb19;
}

void f_0075fb87(void)
{
    FN_ENTER(0x0075fb87);
    /* 0075fb87: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fb8a: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0075fb8d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fb8f: je 0x75fba0 */ if (fZ) goto L_0075fba0;
L_0075fb91:; BB(0x0075fb91);
    /* 0075fb91: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75fb96u); f_007127b0();
    /* 0075fb96: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fb99: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0075fba0:; BB(0x0075fba0);
    /* 0075fba0: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075fba3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fba5: je 0x75fbb6 */ if (fZ) goto L_0075fbb6;
L_0075fba7:; BB(0x0075fba7);
    /* 0075fba7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75fbacu); f_007127b0();
    /* 0075fbac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fbaf: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0075fbb6:; BB(0x0075fbb6);
    /* 0075fbb6: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075fbb9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fbbb: je 0x75fbd1 */ if (fZ) goto L_0075fbd1;
L_0075fbbd:; BB(0x0075fbbd);
    /* 0075fbbd: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0075fbbf: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fbc4u); f_0073ec50();
    /* 0075fbc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fbc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fbc6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fbc9: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075fbcc: call 0x712be4 */ r_esp -= 4; W32(r_esp, 0x75fbd1u); f_00712be4();
L_0075fbd1:; BB(0x0075fbd1);
    /* 0075fbd1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fbd4: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075fbd7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fbd9: je 0x75fbef */ if (fZ) goto L_0075fbef;
L_0075fbdb:; BB(0x0075fbdb);
    /* 0075fbdb: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0075fbdd: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fbe2u); f_0073ec50();
    /* 0075fbe2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fbe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fbe4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fbe7: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075fbea: call 0x712be4 */ r_esp -= 4; W32(r_esp, 0x75fbefu); f_00712be4();
L_0075fbef:; BB(0x0075fbef);
    /* 0075fbef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fbf2: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0075fbf6: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075fb87); r_esp += 4; return;
}

void f_0075fbfb(void)
{
    FN_ENTER(0x0075fbfb);
    /* 0075fbfb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fbfe: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075fc01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fc03: je 0x75fc0a */ if (fZ) goto L_0075fc0a;
L_0075fc05:; BB(0x0075fc05);
    /* 0075fc05: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x75fc0au); f_007127c8();
L_0075fc0a:; BB(0x0075fc0a);
    /* 0075fc0a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fc0d: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075fc10: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fc12: je 0x75fc28 */ if (fZ) goto L_0075fc28;
L_0075fc14:; BB(0x0075fc14);
    /* 0075fc14: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0075fc16: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fc1bu); f_0073ec50();
    /* 0075fc1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fc1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fc1d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fc20: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075fc23: call 0x712be4 */ r_esp -= 4; W32(r_esp, 0x75fc28u); f_00712be4();
L_0075fc28:; BB(0x0075fc28);
    /* 0075fc28: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fc2b: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075fc2e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fc30: je 0x75fc46 */ if (fZ) goto L_0075fc46;
L_0075fc32:; BB(0x0075fc32);
    /* 0075fc32: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0075fc34: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75fc39u); f_0073ec50();
    /* 0075fc39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075fc3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fc3b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fc3e: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075fc41: call 0x712be4 */ r_esp -= 4; W32(r_esp, 0x75fc46u); f_00712be4();
L_0075fc46:; BB(0x0075fc46);
    /* 0075fc46: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fc49: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075fc4c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fc4e: je 0x75fef7 */ if (fZ) goto L_0075fef7;
L_0075fc54:; BB(0x0075fc54);
    /* 0075fc54: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fc57: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0075fc5a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fc5c: je 0x75fee2 */ if (fZ) goto L_0075fee2;
L_0075fc62:; BB(0x0075fc62);
    /* 0075fc62: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0075fc69: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075fc6e: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 0075fc75: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0075fc78: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fc7a: je 0x75fc83 */ if (fZ) goto L_0075fc83;
L_0075fc7c:; BB(0x0075fc7c);
    /* 0075fc7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075fc7e: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75fc83u); f_00760acc();
L_0075fc83:; BB(0x0075fc83);
    /* 0075fc83: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fc86: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 0075fc8a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fc8d: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075fc90: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x75fc95u); f_00737d90();
    /* 0075fc95: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fc98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fc99: call 0x7605b8 */ r_esp -= 4; W32(r_esp, 0x75fc9eu); f_007605b8();
    /* 0075fc9e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fca1: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075fca4: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0075fcab: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fcad: je 0x75fcc4 */ if (fZ) goto L_0075fcc4;
L_0075fcaf:; BB(0x0075fcaf);
    /* 0075fcaf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fcb2: mov byte ptr [eax + 0x1c], 5 */ W8((u32)(r_eax+0x1cu), 0x5u);
    /* 0075fcb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fcb9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fcc0: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fcc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fcc3: ret  */ FN_RET(0x0075fbfb); r_esp += 4; return;
L_0075fcc4:; BB(0x0075fcc4);
    /* 0075fcc4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fcc6: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075fccc:; BB(0x0075fccc);
    /* 0075fccc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fccf: mov byte ptr [eax + 0x1c], 6 */ W8((u32)(r_eax+0x1cu), 0x6u);
    /* 0075fcd3: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075fbfb); r_esp += 4; return;
L_0075fee2:; BB(0x0075fee2);
    /* 0075fee2: mov ecx, eax */ r_ecx = r_eax;
    /* 0075fee4: call 0x760528 */ r_esp -= 4; W32(r_esp, 0x75fee9u); f_00760528();
    /* 0075fee9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075feec: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 0075feef: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0075fef2: jmp 0x75fc62 */ goto L_0075fc62;
L_0075fef7:; BB(0x0075fef7);
    /* 0075fef7: mov ecx, eax */ r_ecx = r_eax;
    /* 0075fef9: call 0x760414 */ r_esp -= 4; W32(r_esp, 0x75fefeu); f_00760414();
    /* 0075fefe: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ff00: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff03: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 0075ff06: jmp 0x75fc54 */ goto L_0075fc54;
}

void f_0075fc8a(void)
{
    FN_ENTER(0x0075fc8a);
    /* 0075fc8a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fc8d: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075fc90: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x75fc95u); f_00737d90();
    /* 0075fc95: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fc98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075fc99: call 0x7605b8 */ r_esp -= 4; W32(r_esp, 0x75fc9eu); f_007605b8();
    /* 0075fc9e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fca1: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075fca4: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0075fcab: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fcad: je 0x75fcc4 */ if (fZ) goto L_0075fcc4;
L_0075fcaf:; BB(0x0075fcaf);
    /* 0075fcaf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fcb2: mov byte ptr [eax + 0x1c], 5 */ W8((u32)(r_eax+0x1cu), 0x5u);
    /* 0075fcb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fcb9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fcc0: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fcc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fcc3: ret  */ FN_RET(0x0075fc8a); r_esp += 4; return;
L_0075fcc4:; BB(0x0075fcc4);
    /* 0075fcc4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fcc6: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075fccc:; BB(0x0075fccc);
    /* 0075fccc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fccf: mov byte ptr [eax + 0x1c], 6 */ W8((u32)(r_eax+0x1cu), 0x6u);
    /* 0075fcd3: jmp 0x75fd81 */ goto L_0075fd81;
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075fc8a); r_esp += 4; return;
}

void f_0075fcd8(void)
{
    FN_ENTER(0x0075fcd8);
    /* 0075fcd8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fcdb: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0075fcde: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fce0: je 0x75ff31 */ if (fZ) goto L_0075ff31;
L_0075fce6:; BB(0x0075fce6);
    /* 0075fce6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fce9: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0075fcec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fcee: je 0x75ff1f */ if (fZ) goto L_0075ff1f;
L_0075fcf4:; BB(0x0075fcf4);
    /* 0075fcf4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fcf7: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075fcfa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fcfc: je 0x75ff0b */ if (fZ) goto L_0075ff0b;
L_0075fd02:; BB(0x0075fd02);
    /* 0075fd02: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x75fd07u); f_00712714();
    /* 0075fd07: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd0a: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075fd0d: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0075fd14: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075fd1a: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0075fd21: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0075fd24: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075fd26: je 0x75fd2f */ if (fZ) goto L_0075fd2f;
L_0075fd28:; BB(0x0075fd28);
    /* 0075fd28: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075fd2a: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75fd2fu); f_00760acc();
L_0075fd2f:; BB(0x0075fd2f);
    /* 0075fd2f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd32: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0075fd35: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0075fd3c: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075fd41: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0075fd48: mov byte ptr [ecx + 0x1c], 2 */ W8((u32)(r_ecx+0x1cu), 0x2u);
    /* 0075fd4c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd4f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075fd52: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0075fd59: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fd5b: je 0x75fd72 */ if (fZ) goto L_0075fd72;
L_0075fd5d:; BB(0x0075fd5d);
    /* 0075fd5d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd60: mov byte ptr [eax + 0x1c], 0x17 */ W8((u32)(r_eax+0x1cu), 0x17u);
    /* 0075fd64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd67: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd6e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd71: ret  */ FN_RET(0x0075fcd8); r_esp += 4; return;
L_0075fd72:; BB(0x0075fd72);
    /* 0075fd72: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fd74: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075fd76:; BB(0x0075fd76);
    /* 0075fd76: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75fd7bu); f_007365f4();
    /* 0075fd7b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd7e: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075fcd8); r_esp += 4; return;
L_0075ff0b:; BB(0x0075ff0b);
    /* 0075ff0b: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ff0d: call 0x760358 */ r_esp -= 4; W32(r_esp, 0x75ff12u); f_00760358();
    /* 0075ff12: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ff14: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff17: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 0075ff1a: jmp 0x75fd02 */ goto L_0075fd02;
L_0075ff1f:; BB(0x0075ff1f);
    /* 0075ff1f: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ff21: call 0x7602d8 */ r_esp -= 4; W32(r_esp, 0x75ff26u); f_007602d8();
    /* 0075ff26: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff29: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0075ff2c: jmp 0x75fcf4 */ goto L_0075fcf4;
L_0075ff31:; BB(0x0075ff31);
    /* 0075ff31: mov ecx, eax */ r_ecx = r_eax;
    /* 0075ff33: call 0x760254 */ r_esp -= 4; W32(r_esp, 0x75ff38u); f_00760254();
    /* 0075ff38: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075ff3b: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0075ff3e: jmp 0x75fce6 */ goto L_0075fce6;
}

void f_0075fd4c(void)
{
    FN_ENTER(0x0075fd4c);
    /* 0075fd4c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd4f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075fd52: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0075fd59: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fd5b: je 0x75fd72 */ if (fZ) goto L_0075fd72;
L_0075fd5d:; BB(0x0075fd5d);
    /* 0075fd5d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd60: mov byte ptr [eax + 0x1c], 0x17 */ W8((u32)(r_eax+0x1cu), 0x17u);
    /* 0075fd64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd67: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd6e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd71: ret  */ FN_RET(0x0075fd4c); r_esp += 4; return;
L_0075fd72:; BB(0x0075fd72);
    /* 0075fd72: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075fd74: je 0x75fd81 */ if (fZ) goto L_0075fd81;
L_0075fd76:; BB(0x0075fd76);
    /* 0075fd76: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75fd7bu); f_007365f4();
    /* 0075fd7b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075fd7e: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
L_0075fd81:; BB(0x0075fd81);
    /* 0075fd81: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075fd84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075fd87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075fd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075fd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075fd91: ret  */ FN_RET(0x0075fd4c); r_esp += 4; return;
}

void f_0075ffec(void) /* sub_75FFEC */
{
    FN_ENTER(0x0075ffec);
    /* 0075ffec: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0075fff0: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0075fff4: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 0075fff7: fcomp dword ptr [edx] */ fx_compare(ST(0), R_F32((u32)(r_edx))); FPOP();
    /* 0075fff9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0075fffb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0075fffc: jne 0x760009 */ if (!fZ) goto L_00760009;
L_0075fffe:; BB(0x0075fffe);
    /* 0075fffe: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 00760001: fcomp dword ptr [edx + 4] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x4u))); FPOP();
    /* 00760004: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00760006: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00760007: je 0x76000f */ if (fZ) goto L_0076000f;
L_00760009:; BB(0x00760009);
    /* 00760009: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076000a: call 0x712be4 */ r_esp -= 4; W32(r_esp, 0x76000fu); f_00712be4();
L_0076000f:; BB(0x0076000f);
    /* 0076000f: ret 8 */ FN_RET(0x0075ffec); r_esp += 12; return;
}

