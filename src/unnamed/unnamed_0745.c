#include "protos.h"

void f_00745089(void)
{
    FN_ENTER(0x00745089);
    /* 00745089: mov eax, ecx */ r_eax = r_ecx;
    /* 0074508b: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 0074508e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745090: je 0x7450a1 */ if (fZ) goto L_007450a1;
L_00745092:; BB(0x00745092);
    /* 00745092: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x745097u); f_0073d160();
    /* 00745097: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074509a: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
L_007450a1:; BB(0x007450a1);
    /* 007450a1: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 007450a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007450a6: je 0x7450b7 */ if (fZ) goto L_007450b7;
L_007450a8:; BB(0x007450a8);
    /* 007450a8: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7450adu); f_007127b0();
    /* 007450ad: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007450b0: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_007450b7:; BB(0x007450b7);
    /* 007450b7: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 007450ba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007450bc: je 0x7450cd */ if (fZ) goto L_007450cd;
L_007450be:; BB(0x007450be);
    /* 007450be: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7450c3u); f_007127b0();
    /* 007450c3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007450c6: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
L_007450cd:; BB(0x007450cd);
    /* 007450cd: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 007450d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007450d5: je 0x746bf3 */ if (fZ) goto L_00746bf3;
L_007450db:; BB(0x007450db);
    /* 007450db: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007450de: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 007450e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007450e3: je 0x746bd0 */ if (fZ) goto L_00746bd0;
L_007450e9:; BB(0x007450e9);
    /* 007450e9: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007450f0: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007450f5: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 007450fc: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 007450ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745101: je 0x74510a */ if (fZ) goto L_0074510a;
L_00745103:; BB(0x00745103);
    /* 00745103: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00745105: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74510au); f_00760acc();
L_0074510a:; BB(0x0074510a);
    /* 0074510a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074510d: mov byte ptr [eax + 0x1c], 0x3c */ W8((u32)(r_eax+0x1cu), 0x3cu);
    /* 00745111: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745114: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 0074511a: mov edx, dword ptr [ebx + 0x7c] */ r_edx = R32((u32)(r_ebx+0x7cu));
    /* 0074511d: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00745120: lea ecx, [ebx + 0x2c] */ r_ecx = (u32)(r_ebx+0x2cu);
    /* 00745123: call 0x747c2c */ r_esp -= 4; W32(r_esp, 0x745128u); f_00747c2c();
    /* 00745128: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074512b: mov eax, ebx */ r_eax = r_ebx;
    /* 0074512d: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00745133: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074513a: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074513c: je 0x745155 */ if (fZ) goto L_00745155;
L_0074513e:; BB(0x0074513e);
    /* 0074513e: mov eax, ebx */ r_eax = r_ebx;
    /* 00745140: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00745143: mov byte ptr [eax + 0x1c], 0x39 */ W8((u32)(r_eax+0x1cu), 0x39u);
    /* 00745147: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074514a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745151: mov esp, ebp */ r_esp = r_ebp;
    /* 00745153: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745154: ret  */ FN_RET(0x00745089); r_esp += 4; return;
L_00745155:; BB(0x00745155);
    /* 00745155: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745157: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_0074515d:; BB(0x0074515d);
    /* 0074515d: mov eax, ebx */ r_eax = r_ebx;
    /* 0074515f: mov byte ptr [eax + 0x1c], 0x3d */ W8((u32)(r_eax+0x1cu), 0x3du);
    /* 00745163: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745089); r_esp += 4; return;
L_00746bd0:; BB(0x00746bd0);
    /* 00746bd0: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x746bd5u); f_007365f4();
    /* 00746bd5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746bd8: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00746bdb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00746bdc: call 0x747bf8 */ r_esp -= 4; W32(r_esp, 0x746be1u); f_00747bf8();
    /* 00746be1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00746be2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746be5: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 00746beb: mov dword ptr [edx + 0x7c], eax */ W32((u32)(r_edx+0x7cu), r_eax);
    /* 00746bee: jmp 0x7450e9 */ goto L_007450e9;
L_00746bf3:; BB(0x00746bf3);
    /* 00746bf3: call 0x747bd0 */ r_esp -= 4; W32(r_esp, 0x746bf8u); f_00747bd0();
    /* 00746bf8: mov ecx, eax */ r_ecx = r_eax;
    /* 00746bfa: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746bfd: mov dword ptr [edx + 0x8c], ecx */ W32((u32)(r_edx+0x8cu), r_ecx);
    /* 00746c03: jmp 0x7450db */ goto L_007450db;
}

void f_00745111(void)
{
    FN_ENTER(0x00745111);
    /* 00745111: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745114: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 0074511a: mov edx, dword ptr [ebx + 0x7c] */ r_edx = R32((u32)(r_ebx+0x7cu));
    /* 0074511d: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00745120: lea ecx, [ebx + 0x2c] */ r_ecx = (u32)(r_ebx+0x2cu);
    /* 00745123: call 0x747c2c */ r_esp -= 4; W32(r_esp, 0x745128u); f_00747c2c();
    /* 00745128: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074512b: mov eax, ebx */ r_eax = r_ebx;
    /* 0074512d: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00745133: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074513a: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074513c: je 0x745155 */ if (fZ) goto L_00745155;
L_0074513e:; BB(0x0074513e);
    /* 0074513e: mov eax, ebx */ r_eax = r_ebx;
    /* 00745140: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00745143: mov byte ptr [eax + 0x1c], 0x39 */ W8((u32)(r_eax+0x1cu), 0x39u);
    /* 00745147: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074514a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745151: mov esp, ebp */ r_esp = r_ebp;
    /* 00745153: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745154: ret  */ FN_RET(0x00745111); r_esp += 4; return;
L_00745155:; BB(0x00745155);
    /* 00745155: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745157: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_0074515d:; BB(0x0074515d);
    /* 0074515d: mov eax, ebx */ r_eax = r_ebx;
    /* 0074515f: mov byte ptr [eax + 0x1c], 0x3d */ W8((u32)(r_eax+0x1cu), 0x3du);
    /* 00745163: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745111); r_esp += 4; return;
}

void f_00745168(void)
{
    FN_ENTER(0x00745168);
    /* 00745168: mov eax, ecx */ r_eax = r_ecx;
    /* 0074516a: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0074516d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074516f: je 0x745180 */ if (fZ) goto L_00745180;
L_00745171:; BB(0x00745171);
    /* 00745171: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x745176u); f_007127b0();
    /* 00745176: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745179: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
L_00745180:; BB(0x00745180);
    /* 00745180: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 00745183: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745185: je 0x745196 */ if (fZ) goto L_00745196;
L_00745187:; BB(0x00745187);
    /* 00745187: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74518cu); f_007127b0();
    /* 0074518c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074518f: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
L_00745196:; BB(0x00745196);
    /* 00745196: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0074519c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074519e: je 0x7451b2 */ if (fZ) goto L_007451b2;
L_007451a0:; BB(0x007451a0);
    /* 007451a0: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7451a5u); f_007127b0();
    /* 007451a5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007451a8: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
L_007451b2:; BB(0x007451b2);
    /* 007451b2: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 007451b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007451b7: je 0x746c08 */ if (fZ) goto L_00746c08;
L_007451bd:; BB(0x007451bd);
    /* 007451bd: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007451c4: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007451c9: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 007451cc: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 007451d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007451d5: je 0x7451de */ if (fZ) goto L_007451de;
L_007451d7:; BB(0x007451d7);
    /* 007451d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007451d9: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x7451deu); f_00760acc();
L_007451de:; BB(0x007451de);
    /* 007451de: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007451e1: mov byte ptr [eax + 0x1c], 0x3a */ W8((u32)(r_eax+0x1cu), 0x3au);
    /* 007451e5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007451e8: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 007451eb: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007451f2: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007451f4: je 0x74520b */ if (fZ) goto L_0074520b;
L_007451f6:; BB(0x007451f6);
    /* 007451f6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007451f9: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007451fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745200: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745207: mov esp, ebp */ r_esp = r_ebp;
    /* 00745209: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074520a: ret  */ FN_RET(0x00745168); r_esp += 4; return;
L_0074520b:; BB(0x0074520b);
    /* 0074520b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074520d: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745213:; BB(0x00745213);
    /* 00745213: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x745218u); f_007365f4();
    /* 00745218: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074521b: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0074521e: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745168); r_esp += 4; return;
L_00746c08:; BB(0x00746c08);
    /* 00746c08: mov ecx, eax */ r_ecx = r_eax;
    /* 00746c0a: call 0x747b38 */ r_esp -= 4; W32(r_esp, 0x746c0fu); f_00747b38();
    /* 00746c0f: mov edx, eax */ r_edx = r_eax;
    /* 00746c11: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746c14: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 00746c17: jmp 0x7451bd */ goto L_007451bd;
}

void f_007451e5(void)
{
    FN_ENTER(0x007451e5);
    /* 007451e5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007451e8: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 007451eb: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007451f2: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007451f4: je 0x74520b */ if (fZ) goto L_0074520b;
L_007451f6:; BB(0x007451f6);
    /* 007451f6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007451f9: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007451fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745200: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745207: mov esp, ebp */ r_esp = r_ebp;
    /* 00745209: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074520a: ret  */ FN_RET(0x007451e5); r_esp += 4; return;
L_0074520b:; BB(0x0074520b);
    /* 0074520b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074520d: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745213:; BB(0x00745213);
    /* 00745213: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x745218u); f_007365f4();
    /* 00745218: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074521b: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 0074521e: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007451e5); r_esp += 4; return;
}

void f_00745223(void)
{
    FN_ENTER(0x00745223);
    /* 00745223: mov eax, ecx */ r_eax = r_ecx;
    /* 00745225: mov ebx, dword ptr [eax + 0x6c] */ r_ebx = R32((u32)(r_eax+0x6cu));
    /* 00745228: jmp 0x74531b */ goto L_0074531b;
L_0074531b:; BB(0x0074531b);
    /* 0074531b: movzx eax, word ptr [ebx + 0x84] */ r_eax = (u32)R16((u32)(r_ebx+0x84u));
    /* 00745322: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745324: je 0x745344 */ if (fZ) goto L_00745344;
L_00745326:; BB(0x00745326);
    /* 00745326: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745329: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 0074532c: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 0074532f: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00745332: mov byte ptr [eax + 0x1c], 0x35 */ W8((u32)(r_eax+0x1cu), 0x35u);
    /* 00745336: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745339: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745340: mov esp, ebp */ r_esp = r_ebp;
    /* 00745342: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745343: ret  */ FN_RET(0x00745223); r_esp += 4; return;
L_00745344:; BB(0x00745344);
    /* 00745344: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745346: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_0074534c:; BB(0x0074534c);
    /* 0074534c: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00745351: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x745356u); f_006c1bd4();
    /* 00745356: mov edi, eax */ r_edi = r_eax;
    /* 00745358: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074535b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074535e: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 00745364: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x745369u); f_00737d90();
    /* 00745369: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0074536c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074536f: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 00745372: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x745377u); f_007365f4();
    /* 00745377: mov ebx, eax */ r_ebx = r_eax;
    /* 00745379: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074537c: lea edx, [edi + 0x2944] */ r_edx = (u32)(r_edi+0x2944u);
    /* 00745382: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00745385: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745387: jne 0x745438 */ if (!fZ) goto L_00745438;
L_0074538d:; BB(0x0074538d);
    /* 0074538d: push 0x40000 */ { u32 v = 0x40000u; r_esp -= 4; W32(r_esp, v); }
    /* 00745392: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745395: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00745398: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x74539du); f_007be19c();
    /* 0074539d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007453a0: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007453a2: je 0x745489 */ if (fZ) goto L_00745489;
L_007453a8:; BB(0x007453a8);
    /* 007453a8: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007453ab: push 0xfffbffff */ { u32 v = 0xfffbffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007453b0: movzx edx, byte ptr [esi + 0x24] */ r_edx = (u32)R8((u32)(r_esi+0x24u));
    /* 007453b4: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007453ba: mov byte ptr [esi + 0x24], dl */ W8((u32)(r_esi+0x24u), (u8)r_edx);
    /* 007453bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007453bf: shl ecx, 0x12 */ { u32 c = (18u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 007453c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007453c3: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007453c6: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x7453cbu); f_007be17c();
    /* 007453cb: lea edx, [ebx + 0xc4] */ r_edx = (u32)(r_ebx+0xc4u);
    /* 007453d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007453d2: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7453d7u); f_0079317c();
    /* 007453d7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007453da: mov edx, esi */ r_edx = r_esi;
    /* 007453dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007453de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007453df: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 007453e5: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x7453eau); f_00738a40();
    /* 007453ea: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007453ec: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007453ee: je 0x745414 */ if (fZ) goto L_00745414;
L_007453f0:; BB(0x007453f0);
    /* 007453f0: mov edx, dword ptr [edi + esi*8 + 0x2944] */ r_edx = R32((u32)(r_edi+r_esi*8+0x2944u));
    /* 007453f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007453f9: je 0x74540a */ if (fZ) goto L_0074540a;
L_007453fb:; BB(0x007453fb);
    /* 007453fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007453fc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007453ff: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 00745405: call 0x738a9c */ r_esp -= 4; W32(r_esp, 0x74540au); f_00738a9c();
L_0074540a:; BB(0x0074540a);
    /* 0074540a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074540d: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00745410: jl 0x7453f0 */ if ((fS!=fO)) goto L_007453f0;
L_00745412:; BB(0x00745412);
    /* 00745412: jmp 0x745489 */ goto L_00745489;
L_00745414:; BB(0x00745414);
    /* 00745414: mov edx, dword ptr [edi + esi*8 + 0x2944] */ r_edx = R32((u32)(r_edi+r_esi*8+0x2944u));
    /* 0074541b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074541d: je 0x74542e */ if (fZ) goto L_0074542e;
L_0074541f:; BB(0x0074541f);
    /* 0074541f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00745420: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745423: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 00745429: call 0x738b08 */ r_esp -= 4; W32(r_esp, 0x74542eu); f_00738b08();
L_0074542e:; BB(0x0074542e);
    /* 0074542e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00745431: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00745434: jl 0x745414 */ if ((fS!=fO)) goto L_00745414;
L_00745436:; BB(0x00745436);
    /* 00745436: jmp 0x745489 */ goto L_00745489;
L_00745438:; BB(0x00745438);
    /* 00745438: mov esi, ecx */ r_esi = r_ecx;
    /* 0074543a: movzx esi, si */ r_esi = (u32)(u16)r_esi;
    /* 0074543d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074543e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074543f: call 0x77effc */ r_esp -= 4; W32(r_esp, 0x745444u); f_0077effc();
    /* 00745444: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00745447: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00745449: je 0x745489 */ if (fZ) goto L_00745489;
L_0074544b:; BB(0x0074544b);
    /* 0074544b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074544e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00745451: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00745452: movzx edx, byte ptr [ecx + 0x24] */ r_edx = (u32)R8((u32)(r_ecx+0x24u));
    /* 00745456: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074545c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074545d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074545e: mov byte ptr [ecx + 0x24], dl */ W8((u32)(r_ecx+0x24u), (u8)r_edx);
    /* 00745461: call 0x77f02c */ r_esp -= 4; W32(r_esp, 0x745466u); f_0077f02c();
    /* 00745466: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00745469: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074546c: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0074546f: call 0x735254 */ r_esp -= 4; W32(r_esp, 0x745474u); f_00735254();
    /* 00745474: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00745477: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00745478: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074547b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074547e: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00745484: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x745489u); f_00738a40();
L_00745489:; BB(0x00745489);
    /* 00745489: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074548c: mov byte ptr [eax + 0x1c], 0x35 */ W8((u32)(r_eax+0x1cu), 0x35u);
    /* 00745490: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745223); r_esp += 4; return;
}

void f_0074522d(void)
{
    FN_ENTER(0x0074522d);
    /* 0074522d: mov eax, ecx */ r_eax = r_ecx;
    /* 0074522f: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00745235: call 0x7151dc */ r_esp -= 4; W32(r_esp, 0x74523au); f_007151dc();
    /* 0074523a: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074523f: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x745244u); f_006c1bd4();
    /* 00745244: mov esi, eax */ r_esi = r_eax;
    /* 00745246: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00745249: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074524c: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 00745252: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x745257u); f_00737d90();
    /* 00745257: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0074525a: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 0074525f: add esi, 0x2944 */ {  u32 a = r_esi; u32 b = 0x2944u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00745265: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74526au); f_0073ec50();
    /* 0074526a: mov ebx, eax */ r_ebx = r_eax;
    /* 0074526c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074526f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00745272: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745275: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00745276: mov ecx, dword ptr [edi + 0x84] */ r_ecx = R32((u32)(r_edi+0x84u));
    /* 0074527c: call 0x738b74 */ r_esp -= 4; W32(r_esp, 0x745281u); f_00738b74();
    /* 00745281: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745282: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00745284: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00745285: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x74528au); f_00735460();
    /* 0074528a: mov ebx, eax */ r_ebx = r_eax;
    /* 0074528c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074528f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00745292: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745294: jne 0x745495 */ if (!fZ) goto L_00745495;
L_0074529a:; BB(0x0074529a);
    /* 0074529a: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0074529f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7452a4u); f_0079317c();
    /* 007452a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007452a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007452a7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007452a9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007452ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007452ac: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7452b1u); f_00735c90();
    /* 007452b1: push 0xc5 */ { u32 v = 0xc5u; r_esp -= 4; W32(r_esp, v); }
    /* 007452b6: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7452bbu); f_0079317c();
    /* 007452bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007452bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007452be: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007452c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007452c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007452c3: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7452c8u); f_00735c90();
    /* 007452c8: push 0x40000 */ { u32 v = 0x40000u; r_esp -= 4; W32(r_esp, v); }
    /* 007452cd: mov edx, edi */ r_edx = r_edi;
    /* 007452cf: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007452d2: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7452d7u); f_007be19c();
    /* 007452d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007452da: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007452dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007452de: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007452e0: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7452e5u); f_00736510();
L_007452e5:; BB(0x007452e5);
    /* 007452e5: push 0x42f80000 */ { u32 v = 0x42f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 007452ea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007452ec: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 007452f3: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007452f9: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00745300: push 0x43ca8000 */ { u32 v = 0x43ca8000u; r_esp -= 4; W32(r_esp, v); }
    /* 00745305: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x74530au); f_007361d0();
    /* 0074530a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074530c: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x745311u); f_00736458();
    /* 00745311: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745314: mov byte ptr [edx + 0x1c], 0x38 */ W8((u32)(r_edx+0x1cu), 0x38u);
    /* 00745318: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 0074531b: movzx eax, word ptr [ebx + 0x84] */ r_eax = (u32)R16((u32)(r_ebx+0x84u));
    /* 00745322: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745324: je 0x745344 */ if (fZ) goto L_00745344;
L_00745326:; BB(0x00745326);
    /* 00745326: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745329: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 0074532c: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 0074532f: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00745332: mov byte ptr [eax + 0x1c], 0x35 */ W8((u32)(r_eax+0x1cu), 0x35u);
    /* 00745336: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745339: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745340: mov esp, ebp */ r_esp = r_ebp;
    /* 00745342: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745343: ret  */ FN_RET(0x0074522d); r_esp += 4; return;
L_00745344:; BB(0x00745344);
    /* 00745344: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745346: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_0074534c:; BB(0x0074534c);
    /* 0074534c: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00745351: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x745356u); f_006c1bd4();
    /* 00745356: mov edi, eax */ r_edi = r_eax;
    /* 00745358: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074535b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074535e: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 00745364: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x745369u); f_00737d90();
    /* 00745369: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0074536c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074536f: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 00745372: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x745377u); f_007365f4();
    /* 00745377: mov ebx, eax */ r_ebx = r_eax;
    /* 00745379: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0074537c: lea edx, [edi + 0x2944] */ r_edx = (u32)(r_edi+0x2944u);
    /* 00745382: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00745385: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745387: jne 0x745438 */ if (!fZ) goto L_00745438;
L_0074538d:; BB(0x0074538d);
    /* 0074538d: push 0x40000 */ { u32 v = 0x40000u; r_esp -= 4; W32(r_esp, v); }
    /* 00745392: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745395: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00745398: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x74539du); f_007be19c();
    /* 0074539d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007453a0: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007453a2: je 0x745489 */ if (fZ) goto L_00745489;
L_007453a8:; BB(0x007453a8);
    /* 007453a8: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007453ab: push 0xfffbffff */ { u32 v = 0xfffbffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007453b0: movzx edx, byte ptr [esi + 0x24] */ r_edx = (u32)R8((u32)(r_esi+0x24u));
    /* 007453b4: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007453ba: mov byte ptr [esi + 0x24], dl */ W8((u32)(r_esi+0x24u), (u8)r_edx);
    /* 007453bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007453bf: shl ecx, 0x12 */ { u32 c = (18u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 007453c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007453c3: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007453c6: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x7453cbu); f_007be17c();
    /* 007453cb: lea edx, [ebx + 0xc4] */ r_edx = (u32)(r_ebx+0xc4u);
    /* 007453d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007453d2: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7453d7u); f_0079317c();
    /* 007453d7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007453da: mov edx, esi */ r_edx = r_esi;
    /* 007453dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007453de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007453df: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 007453e5: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x7453eau); f_00738a40();
    /* 007453ea: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007453ec: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007453ee: je 0x745414 */ if (fZ) goto L_00745414;
L_007453f0:; BB(0x007453f0);
    /* 007453f0: mov edx, dword ptr [edi + esi*8 + 0x2944] */ r_edx = R32((u32)(r_edi+r_esi*8+0x2944u));
    /* 007453f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007453f9: je 0x74540a */ if (fZ) goto L_0074540a;
L_007453fb:; BB(0x007453fb);
    /* 007453fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007453fc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007453ff: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 00745405: call 0x738a9c */ r_esp -= 4; W32(r_esp, 0x74540au); f_00738a9c();
L_0074540a:; BB(0x0074540a);
    /* 0074540a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074540d: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00745410: jl 0x7453f0 */ if ((fS!=fO)) goto L_007453f0;
L_00745412:; BB(0x00745412);
    /* 00745412: jmp 0x745489 */ goto L_00745489;
L_00745414:; BB(0x00745414);
    /* 00745414: mov edx, dword ptr [edi + esi*8 + 0x2944] */ r_edx = R32((u32)(r_edi+r_esi*8+0x2944u));
    /* 0074541b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074541d: je 0x74542e */ if (fZ) goto L_0074542e;
L_0074541f:; BB(0x0074541f);
    /* 0074541f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00745420: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745423: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 00745429: call 0x738b08 */ r_esp -= 4; W32(r_esp, 0x74542eu); f_00738b08();
L_0074542e:; BB(0x0074542e);
    /* 0074542e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00745431: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00745434: jl 0x745414 */ if ((fS!=fO)) goto L_00745414;
L_00745436:; BB(0x00745436);
    /* 00745436: jmp 0x745489 */ goto L_00745489;
L_00745438:; BB(0x00745438);
    /* 00745438: mov esi, ecx */ r_esi = r_ecx;
    /* 0074543a: movzx esi, si */ r_esi = (u32)(u16)r_esi;
    /* 0074543d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074543e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074543f: call 0x77effc */ r_esp -= 4; W32(r_esp, 0x745444u); f_0077effc();
    /* 00745444: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00745447: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00745449: je 0x745489 */ if (fZ) goto L_00745489;
L_0074544b:; BB(0x0074544b);
    /* 0074544b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074544e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00745451: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00745452: movzx edx, byte ptr [ecx + 0x24] */ r_edx = (u32)R8((u32)(r_ecx+0x24u));
    /* 00745456: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074545c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074545d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074545e: mov byte ptr [ecx + 0x24], dl */ W8((u32)(r_ecx+0x24u), (u8)r_edx);
    /* 00745461: call 0x77f02c */ r_esp -= 4; W32(r_esp, 0x745466u); f_0077f02c();
    /* 00745466: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00745469: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074546c: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0074546f: call 0x735254 */ r_esp -= 4; W32(r_esp, 0x745474u); f_00735254();
    /* 00745474: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00745477: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00745478: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074547b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074547e: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00745484: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x745489u); f_00738a40();
L_00745489:; BB(0x00745489);
    /* 00745489: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074548c: mov byte ptr [eax + 0x1c], 0x35 */ W8((u32)(r_eax+0x1cu), 0x35u);
    /* 00745490: jmp 0x7469c9 */ goto L_007469c9;
L_00745495:; BB(0x00745495);
    /* 00745495: movzx edi, dx */ r_edi = (u32)(u16)r_edx;
    /* 00745498: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00745499: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074549a: call 0x77effc */ r_esp -= 4; W32(r_esp, 0x74549fu); f_0077effc();
    /* 0074549f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007454a2: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 007454a5: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 007454a8: call 0x77efcc */ r_esp -= 4; W32(r_esp, 0x7454adu); f_0077efcc();
    /* 007454ad: mov edi, eax */ r_edi = r_eax;
    /* 007454af: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 007454b2: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 007454b5: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007454b8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007454ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007454bc: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007454bf: mov esi, 0 */ r_esi = 0x0u;
    /* 007454c4: jle 0x7452e5 */ if ((fZ||fS!=fO)) goto L_007452e5;
L_007454ca:; BB(0x007454ca);
    /* 007454ca: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007454cd: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 007454d0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007454d2: jne 0x745505 */ if (!fZ) goto L_00745505;
L_007454d4:; BB(0x007454d4);
    /* 007454d4: movzx edx, word ptr [edi + 2] */ r_edx = (u32)R16((u32)(r_edi+0x2u));
    /* 007454d8: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 007454db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007454dc: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
    /* 007454df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007454e1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007454e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007454e4: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7454e9u); f_00735c90();
    /* 007454e9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007454ec: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007454ef: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007454f1: jne 0x745501 */ if (!fZ) goto L_00745501;
L_007454f3:; BB(0x007454f3);
    /* 007454f3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007454f6: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007454f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007454fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007454fc: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x745501u); f_00736510();
L_00745501:; BB(0x00745501);
    /* 00745501: add dword ptr [ebp - 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00745505:; BB(0x00745505);
    /* 00745505: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00745508: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074550b: add edi, 0x3c */ {  u32 a = r_edi; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0074550e: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00745510: jl 0x7454ca */ if ((fS!=fO)) goto L_007454ca;
L_00745512:; BB(0x00745512);
    /* 00745512: jmp 0x7452e5 */ goto L_007452e5;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x0074522d); r_esp += 4; return;
}

void f_00745517(void)
{
    FN_ENTER(0x00745517);
    /* 00745517: mov eax, ecx */ r_eax = r_ecx;
    /* 00745519: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0074551c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074551e: je 0x74552f */ if (fZ) goto L_0074552f;
L_00745520:; BB(0x00745520);
    /* 00745520: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x745525u); f_007127b0();
    /* 00745525: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745528: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_0074552f:; BB(0x0074552f);
    /* 0074552f: mov ebx, dword ptr [eax + 0x84] */ r_ebx = R32((u32)(r_eax+0x84u));
    /* 00745535: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745537: je 0x746c1c */ if (fZ) goto L_00746c1c;
L_0074553d:; BB(0x0074553d);
    /* 0074553d: push 0x43140000 */ { u32 v = 0x43140000u; r_esp -= 4; W32(r_esp, v); }
    /* 00745542: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00745544: call 0x71522c */ r_esp -= 4; W32(r_esp, 0x745549u); f_0071522c();
    /* 00745549: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074554c: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00745552: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00745559: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0074555f: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 00745566: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00745569: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074556b: je 0x745574 */ if (fZ) goto L_00745574;
L_0074556d:; BB(0x0074556d);
    /* 0074556d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074556f: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x745574u); f_00760acc();
L_00745574:; BB(0x00745574);
    /* 00745574: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745577: mov byte ptr [eax + 0x1c], 0x36 */ W8((u32)(r_eax+0x1cu), 0x36u);
    /* 0074557b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074557e: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 00745584: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074558b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074558d: je 0x7455ad */ if (fZ) goto L_007455ad;
L_0074558f:; BB(0x0074558f);
    /* 0074558f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745592: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00745595: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00745598: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0074559b: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0074559f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007455a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007455a9: mov esp, ebp */ r_esp = r_ebp;
    /* 007455ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007455ac: ret  */ FN_RET(0x00745517); r_esp += 4; return;
L_007455ad:; BB(0x007455ad);
    /* 007455ad: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007455af: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007455b5:; BB(0x007455b5);
    /* 007455b5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007455b8: mov byte ptr [eax + 0x1c], 0x37 */ W8((u32)(r_eax+0x1cu), 0x37u);
    /* 007455bc: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745517); r_esp += 4; return;
L_00746c1c:; BB(0x00746c1c);
    /* 00746c1c: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00746c21: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x746c26u); f_006c1bd4();
    /* 00746c26: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00746c29: push 0x40000 */ { u32 v = 0x40000u; r_esp -= 4; W32(r_esp, v); }
    /* 00746c2e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746c31: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00746c34: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x746c39u); f_007be19c();
    /* 00746c39: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00746c3c: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 00746c41: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x746c46u); f_0073ec50();
    /* 00746c46: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00746c48: push 0x9733fc */ { u32 v = 0x9733fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00746c4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746c4e: call 0x714f24 */ r_esp -= 4; W32(r_esp, 0x746c53u); f_00714f24();
    /* 00746c53: mov ebx, eax */ r_ebx = r_eax;
    /* 00746c55: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00746c5a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x746c5fu); f_0079317c();
    /* 00746c5f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746c62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746c63: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00746c65: call 0x738364 */ r_esp -= 4; W32(r_esp, 0x746c6au); f_00738364();
    /* 00746c6a: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00746c6f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x746c74u); f_0079317c();
    /* 00746c74: mov esi, eax */ r_esi = r_eax;
    /* 00746c76: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00746c79: lea edi, [edx + 0xc4] */ r_edi = (u32)(r_edx+0xc4u);
    /* 00746c7f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00746c80: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x746c85u); f_0079317c();
    /* 00746c85: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746c88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00746c8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746c8b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00746c8d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00746c8e: call 0x738a04 */ r_esp -= 4; W32(r_esp, 0x746c93u); f_00738a04();
    /* 00746c93: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746c96: mov esi, dword ptr [edx + 0x60] */ r_esi = R32((u32)(r_edx+0x60u));
    /* 00746c99: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00746c9c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00746c9f: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00746ca2: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 00746ca5: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00746caa: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00746cad: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00746caf: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00746cb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00746cb4: jle 0x746d4d */ if ((fZ||fS!=fO)) goto L_00746d4d;
L_00746cba:; BB(0x00746cba);
    /* 00746cba: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00746cbd: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00746cc0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746cc2: jne 0x746d35 */ if (!fZ) goto L_00746d35;
L_00746cc4:; BB(0x00746cc4);
    /* 00746cc4: movzx esi, word ptr [edx + 2] */ r_esi = (u32)R16((u32)(r_edx+0x2u));
    /* 00746cc8: add dword ptr [ebp - 0x34], 1 */ { u32 ad = (u32)(r_ebp+0xffffffccu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00746ccc: cmp esi, 0x1f4 */ {  u32 a = r_esi; u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00746cd2: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00746cd5: jl 0x746d35 */ if ((fS!=fO)) goto L_00746d35;
L_00746cd7:; BB(0x00746cd7);
    /* 00746cd7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00746cda: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746cdd: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 00746ce0: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00746ce3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00746ce5: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 00746ce8: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00746ceb: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00746cee: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00746cf1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00746cf3: jle 0x746d9d */ if ((fZ||fS!=fO)) goto L_00746d9d;
L_00746cf9:; BB(0x00746cf9);
    /* 00746cf9: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00746cfc: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00746cff: mov esi, dword ptr [esi + edi*4 + 0x2944] */ r_esi = R32((u32)(r_esi+r_edi*4+0x2944u));
    /* 00746d06: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
L_00746d09:; BB(0x00746d09);
    /* 00746d09: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00746d0c: movzx esi, word ptr [eax] */ r_esi = (u32)R16((u32)(r_eax));
    /* 00746d0f: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746d11: jne 0x746d26 */ if (!fZ) goto L_00746d26;
L_00746d13:; BB(0x00746d13);
    /* 00746d13: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00746d16: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00746d19: movzx esi, word ptr [eax + 2] */ r_esi = (u32)R16((u32)(r_eax+0x2u));
    /* 00746d1d: cmp esi, dword ptr [edi + ecx*4 + 0x2948] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+r_ecx*4+0x2948u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746d24: je 0x746d6f */ if (fZ) goto L_00746d6f;
L_00746d26:; BB(0x00746d26);
    /* 00746d26: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00746d29: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00746d2c: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00746d2f: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00746d31: jl 0x746d09 */ if ((fS!=fO)) goto L_00746d09;
L_00746d33:; BB(0x00746d33);
    /* 00746d33: jmp 0x746d9d */ goto L_00746d9d;
L_00746d35:; BB(0x00746d35);
    /* 00746d35: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00746d38: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00746d3b: add dword ptr [ebp - 0x14], 0x3c */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00746d3f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00746d42: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00746d45: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00746d47: jl 0x746cba */ if ((fS!=fO)) goto L_00746cba;
L_00746d4d:; BB(0x00746d4d);
    /* 00746d4d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746d50: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 00746d57: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00746d5d: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00746d64: mov dword ptr [esi + 0x84], ebx */ W32((u32)(r_esi+0x84u), r_ebx);
    /* 00746d6a: jmp 0x74553d */ goto L_0074553d;
L_00746d6f:; BB(0x00746d6f);
    /* 00746d6f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00746d72:; BB(0x00746d72);
    /* 00746d72: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00746d75: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00746d78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00746d79: lea edi, [edx + 4] */ r_edi = (u32)(r_edx+0x4u);
    /* 00746d7c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00746d7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746d7f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00746d80: call 0x738a04 */ r_esp -= 4; W32(r_esp, 0x746d85u); f_00738a04();
    /* 00746d85: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00746d88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746d8a: je 0x746d35 */ if (fZ) goto L_00746d35;
L_00746d8c:; BB(0x00746d8c);
    /* 00746d8c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00746d8f: movzx esi, word ptr [edx + 2] */ r_esi = (u32)R16((u32)(r_edx+0x2u));
    /* 00746d93: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00746d94: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00746d96: call 0x738a9c */ r_esp -= 4; W32(r_esp, 0x746d9bu); f_00738a9c();
    /* 00746d9b: jmp 0x746d35 */ goto L_00746d35;
L_00746d9d:; BB(0x00746d9d);
    /* 00746d9d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00746d9f: jmp 0x746d72 */ goto L_00746d72;
}

void f_0074557b(void)
{
    FN_ENTER(0x0074557b);
    /* 0074557b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074557e: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 00745584: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074558b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074558d: je 0x7455ad */ if (fZ) goto L_007455ad;
L_0074558f:; BB(0x0074558f);
    /* 0074558f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745592: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00745595: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00745598: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0074559b: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0074559f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007455a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007455a9: mov esp, ebp */ r_esp = r_ebp;
    /* 007455ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007455ac: ret  */ FN_RET(0x0074557b); r_esp += 4; return;
L_007455ad:; BB(0x007455ad);
    /* 007455ad: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007455af: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007455b5:; BB(0x007455b5);
    /* 007455b5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007455b8: mov byte ptr [eax + 0x1c], 0x37 */ W8((u32)(r_eax+0x1cu), 0x37u);
    /* 007455bc: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x0074557b); r_esp += 4; return;
}

void f_007455c1(void)
{
    FN_ENTER(0x007455c1);
    /* 007455c1: mov eax, ecx */ r_eax = r_ecx;
    /* 007455c3: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 007455c6: jmp 0x7455f2 */ goto L_007455f2;
L_007455f2:; BB(0x007455f2);
    /* 007455f2: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007455f9: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007455fb: je 0x745615 */ if (fZ) goto L_00745615;
L_007455fd:; BB(0x007455fd);
    /* 007455fd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745600: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00745603: mov byte ptr [eax + 0x1c], 0x2f */ W8((u32)(r_eax+0x1cu), 0x2fu);
    /* 00745607: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074560a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745611: mov esp, ebp */ r_esp = r_ebp;
    /* 00745613: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745614: ret  */ FN_RET(0x007455c1); r_esp += 4; return;
L_00745615:; BB(0x00745615);
    /* 00745615: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745617: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_0074561d:; BB(0x0074561d);
    /* 0074561d: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x745622u); f_007365f4();
    /* 00745622: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745625: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00745628: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007455c1); r_esp += 4; return;
}

void f_007455c8(void)
{
    FN_ENTER(0x007455c8);
    /* 007455c8: mov eax, ecx */ r_eax = r_ecx;
    /* 007455ca: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 007455cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007455cf: je 0x7455e0 */ if (fZ) goto L_007455e0;
L_007455d1:; BB(0x007455d1);
    /* 007455d1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7455d6u); f_007127b0();
    /* 007455d6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007455d9: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
L_007455e0:; BB(0x007455e0);
    /* 007455e0: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 007455e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007455e5: je 0x746da1 */ if (fZ) goto L_00746da1;
L_007455eb:; BB(0x007455eb);
    /* 007455eb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007455ee: mov byte ptr [eax + 0x1c], 0x32 */ W8((u32)(r_eax+0x1cu), 0x32u);
    /* 007455f2: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007455f9: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007455fb: je 0x745615 */ if (fZ) goto L_00745615;
L_007455fd:; BB(0x007455fd);
    /* 007455fd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745600: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00745603: mov byte ptr [eax + 0x1c], 0x2f */ W8((u32)(r_eax+0x1cu), 0x2fu);
    /* 00745607: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074560a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745611: mov esp, ebp */ r_esp = r_ebp;
    /* 00745613: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745614: ret  */ FN_RET(0x007455c8); r_esp += 4; return;
L_00745615:; BB(0x00745615);
    /* 00745615: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745617: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_0074561d:; BB(0x0074561d);
    /* 0074561d: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x745622u); f_007365f4();
    /* 00745622: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745625: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00745628: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007455c8); r_esp += 4; return;
L_00746da1:; BB(0x00746da1);
    /* 00746da1: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00746da4: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x746da9u); f_007365f4();
    /* 00746da9: mov ebx, eax */ r_ebx = r_eax;
    /* 00746dab: call 0x77eff4 */ r_esp -= 4; W32(r_esp, 0x746db0u); f_0077eff4();
    /* 00746db0: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 00746db3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00746db5: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00746db7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00746db9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00746dbb: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00746dbd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00746dbf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00746dc1: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00746dc3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00746dc5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00746dc7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00746dc9: lea eax, [edx + eax + 8] */ r_eax = (u32)(r_edx+r_eax+0x8u);
    /* 00746dcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746dce: call 0x827468 */ r_esp -= 4; W32(r_esp, 0x746dd3u); f_00827468();
    /* 00746dd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00746dd4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746dd7: call 0x747aa4 */ r_esp -= 4; W32(r_esp, 0x746ddcu); f_00747aa4();
    /* 00746ddc: mov ecx, eax */ r_ecx = r_eax;
    /* 00746dde: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746de1: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 00746de4: jmp 0x7455eb */ goto L_007455eb;
}

void f_0074562d(void)
{
    FN_ENTER(0x0074562d);
    /* 0074562d: mov eax, ecx */ r_eax = r_ecx;
    /* 0074562f: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00745632: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745634: je 0x745645 */ if (fZ) goto L_00745645;
L_00745636:; BB(0x00745636);
    /* 00745636: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74563bu); f_007127b0();
    /* 0074563b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074563e: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_00745645:; BB(0x00745645);
    /* 00745645: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0074564b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074564d: je 0x745661 */ if (fZ) goto L_00745661;
L_0074564f:; BB(0x0074564f);
    /* 0074564f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x745654u); f_007127b0();
    /* 00745654: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745657: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
L_00745661:; BB(0x00745661);
    /* 00745661: mov edi, dword ptr [eax + 0x70] */ r_edi = R32((u32)(r_eax+0x70u));
    /* 00745664: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745666: je 0x746e05 */ if (fZ) goto L_00746e05;
L_0074566c:; BB(0x0074566c);
    /* 0074566c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074566f: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00745672: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745674: je 0x746de9 */ if (fZ) goto L_00746de9;
L_0074567a:; BB(0x0074567a);
    /* 0074567a: movzx eax, word ptr [edi + 0x84] */ r_eax = (u32)R16((u32)(r_edi+0x84u));
    /* 00745681: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00745686: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00745689: mov word ptr [edi + 0x84], ax */ W16((u32)(r_edi+0x84u), (u16)r_eax);
    /* 00745690: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745692: je 0x74569b */ if (fZ) goto L_0074569b;
L_00745694:; BB(0x00745694);
    /* 00745694: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00745696: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74569bu); f_00760acc();
L_0074569b:; BB(0x0074569b);
    /* 0074569b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074569e: mov byte ptr [eax + 0x1c], 0x30 */ W8((u32)(r_eax+0x1cu), 0x30u);
    /* 007456a2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007456a5: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 007456a8: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7456adu); f_007365f4();
    /* 007456ad: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007456b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007456b1: call 0x7479f4 */ r_esp -= 4; W32(r_esp, 0x7456b6u); f_007479f4();
    /* 007456b6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007456b9: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 007456bc: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007456c3: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007456c5: je 0x7456e5 */ if (fZ) goto L_007456e5;
L_007456c7:; BB(0x007456c7);
    /* 007456c7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007456ca: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007456cd: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007456d0: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007456d3: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007456d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007456da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007456e1: mov esp, ebp */ r_esp = r_ebp;
    /* 007456e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007456e4: ret  */ FN_RET(0x0074562d); r_esp += 4; return;
L_007456e5:; BB(0x007456e5);
    /* 007456e5: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007456e7: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007456ed:; BB(0x007456ed);
    /* 007456ed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007456f0: mov byte ptr [eax + 0x1c], 0x31 */ W8((u32)(r_eax+0x1cu), 0x31u);
    /* 007456f4: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x0074562d); r_esp += 4; return;
L_00746de9:; BB(0x00746de9);
    /* 00746de9: mov ecx, eax */ r_ecx = r_eax;
    /* 00746deb: call 0x7479d8 */ r_esp -= 4; W32(r_esp, 0x746df0u); f_007479d8();
    /* 00746df0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746df3: mov edi, dword ptr [edx + 0x70] */ r_edi = R32((u32)(r_edx+0x70u));
    /* 00746df6: mov dword ptr [edx + 0x30], 0xffffffff */ W32((u32)(r_edx+0x30u), 0xffffffffu);
    /* 00746dfd: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 00746e00: jmp 0x74567a */ goto L_0074567a;
L_00746e05:; BB(0x00746e05);
    /* 00746e05: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 00746e0a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x746e0fu); f_0073ec50();
    /* 00746e0f: mov ebx, eax */ r_ebx = r_eax;
    /* 00746e11: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 00746e13: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x746e18u); f_0079317c();
    /* 00746e18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746e19: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00746e1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746e1c: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x746e21u); f_00735460();
    /* 00746e21: mov edi, eax */ r_edi = r_eax;
    /* 00746e23: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746e26: call 0x77eff4 */ r_esp -= 4; W32(r_esp, 0x746e2bu); f_0077eff4();
    /* 00746e2b: mov ebx, eax */ r_ebx = r_eax;
    /* 00746e2d: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00746e30: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00746e33: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00746e36: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00746e38: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00746e3a: jle 0x746e5a */ if ((fZ||fS!=fO)) goto L_00746e5a;
L_00746e3c:; BB(0x00746e3c);
    /* 00746e3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00746e3d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00746e3f: lea edx, [ebx + 4] */ r_edx = (u32)(r_ebx+0x4u);
    /* 00746e42: mov ecx, edi */ r_ecx = r_edi;
    /* 00746e44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00746e45: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x746e4au); f_00735c90();
    /* 00746e4a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00746e4d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00746e50: add ebx, 0x158 */ {  u32 a = r_ebx; u32 b = 0x158u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00746e56: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00746e58: jl 0x746e3c */ if ((fS!=fO)) goto L_00746e3c;
L_00746e5a:; BB(0x00746e5a);
    /* 00746e5a: movsx edx, word ptr [edi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x86u));
    /* 00746e61: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00746e63: jle 0x746e95 */ if ((fZ||fS!=fO)) goto L_00746e95;
L_00746e65:; BB(0x00746e65);
    /* 00746e65: push 0x42f80000 */ { u32 v = 0x42f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00746e6a: mov ecx, edi */ r_ecx = r_edi;
    /* 00746e6c: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 00746e73: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00746e79: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 00746e80: push 0x435f0000 */ { u32 v = 0x435f0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00746e85: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x746e8au); f_007361d0();
    /* 00746e8a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746e8d: mov dword ptr [edx + 0x70], edi */ W32((u32)(r_edx+0x70u), r_edi);
    /* 00746e90: jmp 0x74566c */ goto L_0074566c;
L_00746e95:; BB(0x00746e95);
    /* 00746e95: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 00746e9a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x746e9fu); f_0079317c();
    /* 00746e9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00746ea0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00746ea2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00746ea4: mov ecx, edi */ r_ecx = r_edi;
    /* 00746ea6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746ea7: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x746eacu); f_00735ee0();
    /* 00746eac: jmp 0x746e65 */ goto L_00746e65;
}

void f_007456a2(void)
{
    FN_ENTER(0x007456a2);
    /* 007456a2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007456a5: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 007456a8: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7456adu); f_007365f4();
    /* 007456ad: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007456b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007456b1: call 0x7479f4 */ r_esp -= 4; W32(r_esp, 0x7456b6u); f_007479f4();
    /* 007456b6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007456b9: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 007456bc: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007456c3: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007456c5: je 0x7456e5 */ if (fZ) goto L_007456e5;
L_007456c7:; BB(0x007456c7);
    /* 007456c7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007456ca: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007456cd: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007456d0: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007456d3: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007456d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007456da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007456e1: mov esp, ebp */ r_esp = r_ebp;
    /* 007456e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007456e4: ret  */ FN_RET(0x007456a2); r_esp += 4; return;
L_007456e5:; BB(0x007456e5);
    /* 007456e5: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007456e7: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_007456ed:; BB(0x007456ed);
    /* 007456ed: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007456f0: mov byte ptr [eax + 0x1c], 0x31 */ W8((u32)(r_eax+0x1cu), 0x31u);
    /* 007456f4: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007456a2); r_esp += 4; return;
}

void f_007456f9(void)
{
    FN_ENTER(0x007456f9);
    /* 007456f9: call 0x77efd4 */ r_esp -= 4; W32(r_esp, 0x7456feu); f_0077efd4();
    /* 007456fe: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745701: lea eax, [ecx + 0x38] */ r_eax = (u32)(r_ecx+0x38u);
    /* 00745704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745705: call 0x7479b0 */ r_esp -= 4; W32(r_esp, 0x74570au); f_007479b0();
    /* 0074570a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074570d: mov byte ptr [eax + 0x1c], 0x2e */ W8((u32)(r_eax+0x1cu), 0x2eu);
    /* 00745711: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 00745717: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0074571c: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x745721u); f_007c1160();
    /* 00745721: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745723: je 0x74573e */ if (fZ) goto L_0074573e;
L_00745725:; BB(0x00745725);
    /* 00745725: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00745727: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745728: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745729: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074572a: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0074572f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x745734u); f_00814298();
    /* 00745734: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00745737: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074573a: mov byte ptr [eax + 0x1c], 0x29 */ W8((u32)(r_eax+0x1cu), 0x29u);
L_0074573e:; BB(0x0074573e);
    /* 0074573e: call 0x77eff4 */ r_esp -= 4; W32(r_esp, 0x745743u); f_0077eff4();
    /* 00745743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745745: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_0074574b:; BB(0x0074574b);
    /* 0074574b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074574e: mov byte ptr [eax + 0x1c], 0x2f */ W8((u32)(r_eax+0x1cu), 0x2fu);
    /* 00745752: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x007456f9); r_esp += 4; return;
}

void f_00745711(void)
{
    FN_ENTER(0x00745711);
    /* 00745711: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 00745717: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0074571c: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x745721u); f_007c1160();
    /* 00745721: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745723: je 0x74573e */ if (fZ) goto L_0074573e;
L_00745725:; BB(0x00745725);
    /* 00745725: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00745727: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745728: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745729: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074572a: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0074572f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x745734u); f_00814298();
    /* 00745734: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00745737: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074573a: mov byte ptr [eax + 0x1c], 0x29 */ W8((u32)(r_eax+0x1cu), 0x29u);
L_0074573e:; BB(0x0074573e);
    /* 0074573e: call 0x77eff4 */ r_esp -= 4; W32(r_esp, 0x745743u); f_0077eff4();
    /* 00745743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745745: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_0074574b:; BB(0x0074574b);
    /* 0074574b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074574e: mov byte ptr [eax + 0x1c], 0x2f */ W8((u32)(r_eax+0x1cu), 0x2fu);
    /* 00745752: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745711); r_esp += 4; return;
}

void f_00745757(void)
{
    FN_ENTER(0x00745757);
    /* 00745757: mov eax, ecx */ r_eax = r_ecx;
    /* 00745759: mov ebx, dword ptr [eax + 0x6c] */ r_ebx = R32((u32)(r_eax+0x6cu));
    /* 0074575c: jmp 0x745840 */ goto L_00745840;
L_00745840:; BB(0x00745840);
    /* 00745840: movzx eax, word ptr [ebx + 0x84] */ r_eax = (u32)R16((u32)(r_ebx+0x84u));
    /* 00745847: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745849: je 0x745869 */ if (fZ) goto L_00745869;
L_0074584b:; BB(0x0074584b);
    /* 0074584b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074584e: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00745851: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00745854: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00745857: mov byte ptr [eax + 0x1c], 0x29 */ W8((u32)(r_eax+0x1cu), 0x29u);
    /* 0074585b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074585e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745865: mov esp, ebp */ r_esp = r_ebp;
    /* 00745867: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745868: ret  */ FN_RET(0x00745757); r_esp += 4; return;
L_00745869:; BB(0x00745869);
    /* 00745869: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074586b: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745871:; BB(0x00745871);
    /* 00745871: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745874: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0074587a: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x74587fu); f_00737d90();
    /* 0074587f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00745882: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745885: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00745888: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74588du); f_007365f4();
    /* 0074588d: mov esi, eax */ r_esi = r_eax;
    /* 0074588f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745892: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 00745895: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 00745898: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0074589b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074589d: jne 0x74594b */ if (!fZ) goto L_0074594b;
L_007458a3:; BB(0x007458a3);
    /* 007458a3: push 0x40000 */ { u32 v = 0x40000u; r_esp -= 4; W32(r_esp, v); }
    /* 007458a8: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007458ab: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7458b0u); f_007be19c();
    /* 007458b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007458b3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007458b5: je 0x74599c */ if (fZ) goto L_0074599c;
L_007458bb:; BB(0x007458bb);
    /* 007458bb: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007458be: push 0xfffbffff */ { u32 v = 0xfffbffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007458c3: movzx edx, byte ptr [ebx + 0x24] */ r_edx = (u32)R8((u32)(r_ebx+0x24u));
    /* 007458c7: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007458cd: mov byte ptr [ebx + 0x24], dl */ W8((u32)(r_ebx+0x24u), (u8)r_edx);
    /* 007458d0: mov ecx, esi */ r_ecx = r_esi;
    /* 007458d2: shl ecx, 0x12 */ { u32 c = (18u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 007458d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007458d6: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007458d9: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x7458deu); f_007be17c();
    /* 007458de: lea edx, [esi + 0xc4] */ r_edx = (u32)(r_esi+0xc4u);
    /* 007458e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007458e5: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7458eau); f_0079317c();
    /* 007458ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007458ed: mov edx, ebx */ r_edx = r_ebx;
    /* 007458ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007458f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007458f2: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 007458f8: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x7458fdu); f_00738a40();
    /* 007458fd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007458ff: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745901: je 0x745927 */ if (fZ) goto L_00745927;
L_00745903:; BB(0x00745903);
    /* 00745903: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745906: mov eax, dword ptr [eax + ebx*8 + 0x38] */ r_eax = R32((u32)(r_eax+r_ebx*8+0x38u));
    /* 0074590a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074590c: je 0x74591d */ if (fZ) goto L_0074591d;
L_0074590e:; BB(0x0074590e);
    /* 0074590e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074590f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745912: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00745918: call 0x738a9c */ r_esp -= 4; W32(r_esp, 0x74591du); f_00738a9c();
L_0074591d:; BB(0x0074591d);
    /* 0074591d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00745920: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00745923: jl 0x745903 */ if ((fS!=fO)) goto L_00745903;
L_00745925:; BB(0x00745925);
    /* 00745925: jmp 0x74599c */ goto L_0074599c;
L_00745927:; BB(0x00745927);
    /* 00745927: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074592a: mov eax, dword ptr [eax + ebx*8 + 0x38] */ r_eax = R32((u32)(r_eax+r_ebx*8+0x38u));
    /* 0074592e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745930: je 0x745941 */ if (fZ) goto L_00745941;
L_00745932:; BB(0x00745932);
    /* 00745932: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745933: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745936: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0074593c: call 0x738b08 */ r_esp -= 4; W32(r_esp, 0x745941u); f_00738b08();
L_00745941:; BB(0x00745941);
    /* 00745941: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00745944: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00745947: jl 0x745927 */ if ((fS!=fO)) goto L_00745927;
L_00745949:; BB(0x00745949);
    /* 00745949: jmp 0x74599c */ goto L_0074599c;
L_0074594b:; BB(0x0074594b);
    /* 0074594b: mov edx, ecx */ r_edx = r_ecx;
    /* 0074594d: movzx ebx, bx */ r_ebx = (u32)(u16)r_ebx;
    /* 00745950: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00745951: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00745952: call 0x77effc */ r_esp -= 4; W32(r_esp, 0x745957u); f_0077effc();
    /* 00745957: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074595a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074595c: je 0x74599c */ if (fZ) goto L_0074599c;
L_0074595e:; BB(0x0074595e);
    /* 0074595e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745961: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00745964: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00745965: movzx edx, byte ptr [ecx + 0x24] */ r_edx = (u32)R8((u32)(r_ecx+0x24u));
    /* 00745969: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074596f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00745970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745971: mov byte ptr [ecx + 0x24], dl */ W8((u32)(r_ecx+0x24u), (u8)r_edx);
    /* 00745974: call 0x77f02c */ r_esp -= 4; W32(r_esp, 0x745979u); f_0077f02c();
    /* 00745979: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074597c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074597f: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00745982: call 0x735254 */ r_esp -= 4; W32(r_esp, 0x745987u); f_00735254();
    /* 00745987: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0074598a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074598b: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074598e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745991: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00745997: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x74599cu); f_00738a40();
L_0074599c:; BB(0x0074599c);
    /* 0074599c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074599f: mov byte ptr [eax + 0x1c], 0x29 */ W8((u32)(r_eax+0x1cu), 0x29u);
    /* 007459a3: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745757); r_esp += 4; return;
}

void f_00745761(void)
{
    FN_ENTER(0x00745761);
    /* 00745761: mov eax, ecx */ r_eax = r_ecx;
    /* 00745763: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00745769: call 0x7151dc */ r_esp -= 4; W32(r_esp, 0x74576eu); f_007151dc();
    /* 0074576e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745771: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00745777: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x74577cu); f_00737d90();
    /* 0074577c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0074577f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745782: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 00745787: lea esi, [eax + 0x38] */ r_esi = (u32)(r_eax+0x38u);
    /* 0074578a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74578fu); f_0073ec50();
    /* 0074578f: mov ebx, eax */ r_ebx = r_eax;
    /* 00745791: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00745794: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00745797: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074579a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074579b: mov ecx, dword ptr [edi + 0x84] */ r_ecx = R32((u32)(r_edi+0x84u));
    /* 007457a1: call 0x738b74 */ r_esp -= 4; W32(r_esp, 0x7457a6u); f_00738b74();
    /* 007457a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007457a7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007457a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007457aa: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x7457afu); f_00735460();
    /* 007457af: mov ebx, eax */ r_ebx = r_eax;
    /* 007457b1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007457b4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007457b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007457b9: jne 0x7459a8 */ if (!fZ) goto L_007459a8;
L_007457bf:; BB(0x007457bf);
    /* 007457bf: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 007457c4: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7457c9u); f_0079317c();
    /* 007457c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007457ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007457cc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007457ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007457d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007457d1: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7457d6u); f_00735c90();
    /* 007457d6: push 0xc5 */ { u32 v = 0xc5u; r_esp -= 4; W32(r_esp, v); }
    /* 007457db: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7457e0u); f_0079317c();
    /* 007457e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007457e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007457e3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007457e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007457e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007457e8: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7457edu); f_00735c90();
    /* 007457ed: push 0x40000 */ { u32 v = 0x40000u; r_esp -= 4; W32(r_esp, v); }
    /* 007457f2: mov edx, edi */ r_edx = r_edi;
    /* 007457f4: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007457f7: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7457fcu); f_007be19c();
    /* 007457fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007457ff: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00745802: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00745803: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00745805: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x74580au); f_00736510();
L_0074580a:; BB(0x0074580a);
    /* 0074580a: push 0x42f80000 */ { u32 v = 0x42f80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074580f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00745811: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 00745818: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074581e: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00745825: push 0x43ca8000 */ { u32 v = 0x43ca8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074582a: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x74582fu); f_007361d0();
    /* 0074582f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00745831: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x745836u); f_00736458();
    /* 00745836: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745839: mov byte ptr [edx + 0x1c], 0x2c */ W8((u32)(r_edx+0x1cu), 0x2cu);
    /* 0074583d: mov dword ptr [edx + 0x6c], ebx */ W32((u32)(r_edx+0x6cu), r_ebx);
    /* 00745840: movzx eax, word ptr [ebx + 0x84] */ r_eax = (u32)R16((u32)(r_ebx+0x84u));
    /* 00745847: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745849: je 0x745869 */ if (fZ) goto L_00745869;
L_0074584b:; BB(0x0074584b);
    /* 0074584b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074584e: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00745851: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00745854: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00745857: mov byte ptr [eax + 0x1c], 0x29 */ W8((u32)(r_eax+0x1cu), 0x29u);
    /* 0074585b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074585e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745865: mov esp, ebp */ r_esp = r_ebp;
    /* 00745867: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745868: ret  */ FN_RET(0x00745761); r_esp += 4; return;
L_00745869:; BB(0x00745869);
    /* 00745869: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074586b: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745871:; BB(0x00745871);
    /* 00745871: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745874: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0074587a: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x74587fu); f_00737d90();
    /* 0074587f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00745882: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745885: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00745888: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x74588du); f_007365f4();
    /* 0074588d: mov esi, eax */ r_esi = r_eax;
    /* 0074588f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745892: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 00745895: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 00745898: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0074589b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074589d: jne 0x74594b */ if (!fZ) goto L_0074594b;
L_007458a3:; BB(0x007458a3);
    /* 007458a3: push 0x40000 */ { u32 v = 0x40000u; r_esp -= 4; W32(r_esp, v); }
    /* 007458a8: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007458ab: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7458b0u); f_007be19c();
    /* 007458b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007458b3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007458b5: je 0x74599c */ if (fZ) goto L_0074599c;
L_007458bb:; BB(0x007458bb);
    /* 007458bb: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007458be: push 0xfffbffff */ { u32 v = 0xfffbffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007458c3: movzx edx, byte ptr [ebx + 0x24] */ r_edx = (u32)R8((u32)(r_ebx+0x24u));
    /* 007458c7: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007458cd: mov byte ptr [ebx + 0x24], dl */ W8((u32)(r_ebx+0x24u), (u8)r_edx);
    /* 007458d0: mov ecx, esi */ r_ecx = r_esi;
    /* 007458d2: shl ecx, 0x12 */ { u32 c = (18u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 007458d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007458d6: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007458d9: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x7458deu); f_007be17c();
    /* 007458de: lea edx, [esi + 0xc4] */ r_edx = (u32)(r_esi+0xc4u);
    /* 007458e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007458e5: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7458eau); f_0079317c();
    /* 007458ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007458ed: mov edx, ebx */ r_edx = r_ebx;
    /* 007458ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007458f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007458f2: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 007458f8: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x7458fdu); f_00738a40();
    /* 007458fd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007458ff: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745901: je 0x745927 */ if (fZ) goto L_00745927;
L_00745903:; BB(0x00745903);
    /* 00745903: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745906: mov eax, dword ptr [eax + ebx*8 + 0x38] */ r_eax = R32((u32)(r_eax+r_ebx*8+0x38u));
    /* 0074590a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074590c: je 0x74591d */ if (fZ) goto L_0074591d;
L_0074590e:; BB(0x0074590e);
    /* 0074590e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074590f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745912: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00745918: call 0x738a9c */ r_esp -= 4; W32(r_esp, 0x74591du); f_00738a9c();
L_0074591d:; BB(0x0074591d);
    /* 0074591d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00745920: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00745923: jl 0x745903 */ if ((fS!=fO)) goto L_00745903;
L_00745925:; BB(0x00745925);
    /* 00745925: jmp 0x74599c */ goto L_0074599c;
L_00745927:; BB(0x00745927);
    /* 00745927: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074592a: mov eax, dword ptr [eax + ebx*8 + 0x38] */ r_eax = R32((u32)(r_eax+r_ebx*8+0x38u));
    /* 0074592e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745930: je 0x745941 */ if (fZ) goto L_00745941;
L_00745932:; BB(0x00745932);
    /* 00745932: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745933: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745936: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0074593c: call 0x738b08 */ r_esp -= 4; W32(r_esp, 0x745941u); f_00738b08();
L_00745941:; BB(0x00745941);
    /* 00745941: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00745944: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00745947: jl 0x745927 */ if ((fS!=fO)) goto L_00745927;
L_00745949:; BB(0x00745949);
    /* 00745949: jmp 0x74599c */ goto L_0074599c;
L_0074594b:; BB(0x0074594b);
    /* 0074594b: mov edx, ecx */ r_edx = r_ecx;
    /* 0074594d: movzx ebx, bx */ r_ebx = (u32)(u16)r_ebx;
    /* 00745950: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00745951: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00745952: call 0x77effc */ r_esp -= 4; W32(r_esp, 0x745957u); f_0077effc();
    /* 00745957: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074595a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074595c: je 0x74599c */ if (fZ) goto L_0074599c;
L_0074595e:; BB(0x0074595e);
    /* 0074595e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745961: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00745964: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00745965: movzx edx, byte ptr [ecx + 0x24] */ r_edx = (u32)R8((u32)(r_ecx+0x24u));
    /* 00745969: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074596f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00745970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745971: mov byte ptr [ecx + 0x24], dl */ W8((u32)(r_ecx+0x24u), (u8)r_edx);
    /* 00745974: call 0x77f02c */ r_esp -= 4; W32(r_esp, 0x745979u); f_0077f02c();
    /* 00745979: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074597c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074597f: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00745982: call 0x735254 */ r_esp -= 4; W32(r_esp, 0x745987u); f_00735254();
    /* 00745987: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0074598a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074598b: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074598e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745991: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00745997: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x74599cu); f_00738a40();
L_0074599c:; BB(0x0074599c);
    /* 0074599c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074599f: mov byte ptr [eax + 0x1c], 0x29 */ W8((u32)(r_eax+0x1cu), 0x29u);
    /* 007459a3: jmp 0x7469c9 */ goto L_007469c9;
L_007459a8:; BB(0x007459a8);
    /* 007459a8: movzx edi, dx */ r_edi = (u32)(u16)r_edx;
    /* 007459ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007459ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007459ad: call 0x77effc */ r_esp -= 4; W32(r_esp, 0x7459b2u); f_0077effc();
    /* 007459b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007459b5: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 007459b8: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 007459bb: call 0x77efcc */ r_esp -= 4; W32(r_esp, 0x7459c0u); f_0077efcc();
    /* 007459c0: mov edi, eax */ r_edi = r_eax;
    /* 007459c2: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 007459c5: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 007459c8: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007459cb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007459cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007459cf: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007459d2: mov esi, 0 */ r_esi = 0x0u;
    /* 007459d7: jle 0x74580a */ if ((fZ||fS!=fO)) goto L_0074580a;
L_007459dd:; BB(0x007459dd);
    /* 007459dd: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007459e0: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 007459e3: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007459e5: jne 0x745a18 */ if (!fZ) goto L_00745a18;
L_007459e7:; BB(0x007459e7);
    /* 007459e7: movzx edx, word ptr [edi + 2] */ r_edx = (u32)R16((u32)(r_edi+0x2u));
    /* 007459eb: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 007459ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007459ef: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
    /* 007459f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007459f4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007459f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007459f7: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7459fcu); f_00735c90();
    /* 007459fc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007459ff: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00745a02: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745a04: jne 0x745a14 */ if (!fZ) goto L_00745a14;
L_00745a06:; BB(0x00745a06);
    /* 00745a06: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00745a09: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00745a0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00745a0d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00745a0f: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x745a14u); f_00736510();
L_00745a14:; BB(0x00745a14);
    /* 00745a14: add dword ptr [ebp - 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00745a18:; BB(0x00745a18);
    /* 00745a18: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00745a1b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00745a1e: add edi, 0x3c */ {  u32 a = r_edi; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00745a21: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00745a23: jl 0x7459dd */ if ((fS!=fO)) goto L_007459dd;
L_00745a25:; BB(0x00745a25);
    /* 00745a25: jmp 0x74580a */ goto L_0074580a;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745761); r_esp += 4; return;
}

void f_0074587e(void)
{
    FN_ENTER(0x0074587e);
    /* 0074587e: dec dword ptr [ecx + 0x458bcc45] */ { u32 ad = (u32)(r_ecx+0x458bcc45u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00745884: call 0xe8e0a114 */ r_esp -= 4; W32(r_esp, 0x745889u); f_e8e0a114();
    /* 00745889: or eax, 0xf08bffff */ {  u32 a = r_eax; u32 b = 0xf08bffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074588f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745892: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 00745895: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 00745898: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0074589b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074589d: jne 0x74594b */ if (!fZ) goto L_0074594b;
L_007458a3:; BB(0x007458a3);
    /* 007458a3: push 0x40000 */ { u32 v = 0x40000u; r_esp -= 4; W32(r_esp, v); }
    /* 007458a8: push dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007458ab: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7458b0u); f_007be19c();
    /* 007458b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007458b3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007458b5: je 0x74599c */ if (fZ) goto L_0074599c;
L_007458bb:; BB(0x007458bb);
    /* 007458bb: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007458be: push 0xfffbffff */ { u32 v = 0xfffbffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007458c3: movzx edx, byte ptr [ebx + 0x24] */ r_edx = (u32)R8((u32)(r_ebx+0x24u));
    /* 007458c7: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007458cd: mov byte ptr [ebx + 0x24], dl */ W8((u32)(r_ebx+0x24u), (u8)r_edx);
    /* 007458d0: mov ecx, esi */ r_ecx = r_esi;
    /* 007458d2: shl ecx, 0x12 */ { u32 c = (18u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 007458d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007458d6: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007458d9: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x7458deu); f_007be17c();
    /* 007458de: lea edx, [esi + 0xc4] */ r_edx = (u32)(r_esi+0xc4u);
    /* 007458e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007458e5: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7458eau); f_0079317c();
    /* 007458ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007458ed: mov edx, ebx */ r_edx = r_ebx;
    /* 007458ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007458f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007458f2: mov ecx, dword ptr [edx + 0x84] */ r_ecx = R32((u32)(r_edx+0x84u));
    /* 007458f8: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x7458fdu); f_00738a40();
    /* 007458fd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007458ff: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745901: je 0x745927 */ if (fZ) goto L_00745927;
L_00745903:; BB(0x00745903);
    /* 00745903: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745906: mov eax, dword ptr [eax + ebx*8 + 0x38] */ r_eax = R32((u32)(r_eax+r_ebx*8+0x38u));
    /* 0074590a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074590c: je 0x74591d */ if (fZ) goto L_0074591d;
L_0074590e:; BB(0x0074590e);
    /* 0074590e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074590f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745912: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00745918: call 0x738a9c */ r_esp -= 4; W32(r_esp, 0x74591du); f_00738a9c();
L_0074591d:; BB(0x0074591d);
    /* 0074591d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00745920: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00745923: jl 0x745903 */ if ((fS!=fO)) goto L_00745903;
L_00745925:; BB(0x00745925);
    /* 00745925: jmp 0x74599c */ goto L_0074599c;
L_00745927:; BB(0x00745927);
    /* 00745927: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074592a: mov eax, dword ptr [eax + ebx*8 + 0x38] */ r_eax = R32((u32)(r_eax+r_ebx*8+0x38u));
    /* 0074592e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745930: je 0x745941 */ if (fZ) goto L_00745941;
L_00745932:; BB(0x00745932);
    /* 00745932: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745933: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745936: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0074593c: call 0x738b08 */ r_esp -= 4; W32(r_esp, 0x745941u); f_00738b08();
L_00745941:; BB(0x00745941);
    /* 00745941: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00745944: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00745947: jl 0x745927 */ if ((fS!=fO)) goto L_00745927;
L_00745949:; BB(0x00745949);
    /* 00745949: jmp 0x74599c */ goto L_0074599c;
L_0074594b:; BB(0x0074594b);
    /* 0074594b: mov edx, ecx */ r_edx = r_ecx;
    /* 0074594d: movzx ebx, bx */ r_ebx = (u32)(u16)r_ebx;
    /* 00745950: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00745951: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00745952: call 0x77effc */ r_esp -= 4; W32(r_esp, 0x745957u); f_0077effc();
    /* 00745957: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074595a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074595c: je 0x74599c */ if (fZ) goto L_0074599c;
L_0074595e:; BB(0x0074595e);
    /* 0074595e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745961: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00745964: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00745965: movzx edx, byte ptr [ecx + 0x24] */ r_edx = (u32)R8((u32)(r_ecx+0x24u));
    /* 00745969: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074596f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00745970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745971: mov byte ptr [ecx + 0x24], dl */ W8((u32)(r_ecx+0x24u), (u8)r_edx);
    /* 00745974: call 0x77f02c */ r_esp -= 4; W32(r_esp, 0x745979u); f_0077f02c();
    /* 00745979: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074597c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074597f: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00745982: call 0x735254 */ r_esp -= 4; W32(r_esp, 0x745987u); f_00735254();
    /* 00745987: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0074598a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074598b: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074598e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745991: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00745997: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x74599cu); f_00738a40();
L_0074599c:; BB(0x0074599c);
    /* 0074599c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074599f: mov byte ptr [eax + 0x1c], 0x29 */ W8((u32)(r_eax+0x1cu), 0x29u);
    /* 007459a3: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x0074587e); r_esp += 4; return;
}

void f_00745a2a(void)
{
    FN_ENTER(0x00745a2a);
    /* 00745a2a: mov eax, ecx */ r_eax = r_ecx;
    /* 00745a2c: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00745a2f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745a31: je 0x745a42 */ if (fZ) goto L_00745a42;
L_00745a33:; BB(0x00745a33);
    /* 00745a33: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x745a38u); f_007127b0();
    /* 00745a38: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745a3b: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_00745a42:; BB(0x00745a42);
    /* 00745a42: mov ebx, dword ptr [eax + 0x84] */ r_ebx = R32((u32)(r_eax+0x84u));
    /* 00745a48: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745a4a: je 0x746eae */ if (fZ) goto L_00746eae;
L_00745a50:; BB(0x00745a50);
    /* 00745a50: push 0x43140000 */ { u32 v = 0x43140000u; r_esp -= 4; W32(r_esp, v); }
    /* 00745a55: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00745a57: call 0x71522c */ r_esp -= 4; W32(r_esp, 0x745a5cu); f_0071522c();
    /* 00745a5c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745a5f: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00745a65: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00745a6c: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00745a72: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 00745a79: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00745a7c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745a7e: je 0x745a87 */ if (fZ) goto L_00745a87;
L_00745a80:; BB(0x00745a80);
    /* 00745a80: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00745a82: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x745a87u); f_00760acc();
L_00745a87:; BB(0x00745a87);
    /* 00745a87: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745a8a: mov byte ptr [eax + 0x1c], 0x2a */ W8((u32)(r_eax+0x1cu), 0x2au);
    /* 00745a8e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745a91: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00745a97: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00745a9e: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745aa0: je 0x745ac0 */ if (fZ) goto L_00745ac0;
L_00745aa2:; BB(0x00745aa2);
    /* 00745aa2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745aa5: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00745aa8: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00745aab: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00745aae: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00745ab2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745ab5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745abc: mov esp, ebp */ r_esp = r_ebp;
    /* 00745abe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745abf: ret  */ FN_RET(0x00745a2a); r_esp += 4; return;
L_00745ac0:; BB(0x00745ac0);
    /* 00745ac0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745ac2: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745ac8:; BB(0x00745ac8);
    /* 00745ac8: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x745acdu); f_00737d90();
    /* 00745acd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745acf: jne 0x745add */ if (!fZ) goto L_00745add;
L_00745ad1:; BB(0x00745ad1);
    /* 00745ad1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745ad4: mov byte ptr [eax + 0x1c], 0x2d */ W8((u32)(r_eax+0x1cu), 0x2du);
    /* 00745ad8: jmp 0x7469c9 */ goto L_007469c9;
L_00745add:; BB(0x00745add);
    /* 00745add: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745ae0: mov byte ptr [eax + 0x1c], 0x2b */ W8((u32)(r_eax+0x1cu), 0x2bu);
    /* 00745ae4: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745a2a); r_esp += 4; return;
L_00746eae:; BB(0x00746eae);
    /* 00746eae: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 00746eb3: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x746eb8u); f_0073ec50();
    /* 00746eb8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00746eba: push 0x973404 */ { u32 v = 0x973404u; r_esp -= 4; W32(r_esp, v); }
    /* 00746ebf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746ec0: call 0x714f24 */ r_esp -= 4; W32(r_esp, 0x746ec5u); f_00714f24();
    /* 00746ec5: mov ebx, eax */ r_ebx = r_eax;
    /* 00746ec7: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00746ec9: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x746eceu); f_007930dc();
    /* 00746ece: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00746ed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746ed2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00746ed4: call 0x738364 */ r_esp -= 4; W32(r_esp, 0x746ed9u); f_00738364();
    /* 00746ed9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746edc: mov esi, dword ptr [edx + 0x60] */ r_esi = R32((u32)(r_edx+0x60u));
    /* 00746edf: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00746ee2: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00746ee5: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00746ee8: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 00746eeb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00746eed: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 00746ef0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00746ef2: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00746ef5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00746ef7: jle 0x746f93 */ if ((fZ||fS!=fO)) goto L_00746f93;
L_00746efd:; BB(0x00746efd);
    /* 00746efd: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00746f00: movzx esi, word ptr [edx] */ r_esi = (u32)R16((u32)(r_edx));
    /* 00746f03: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746f05: je 0x746f1d */ if (fZ) goto L_00746f1d;
L_00746f07:; BB(0x00746f07);
    /* 00746f07: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00746f0a: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00746f0d: add dword ptr [ebp - 0x34], 0x3c */ { u32 ad = (u32)(r_ebp+0xffffffccu);  u32 a = R32(ad); u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00746f11: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00746f14: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00746f17: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00746f19: jl 0x746efd */ if ((fS!=fO)) goto L_00746efd;
L_00746f1b:; BB(0x00746f1b);
    /* 00746f1b: jmp 0x746f93 */ goto L_00746f93;
L_00746f1d:; BB(0x00746f1d);
    /* 00746f1d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00746f20: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746f23: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 00746f26: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00746f29: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00746f2b: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 00746f2e: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00746f31: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00746f34: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00746f37: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00746f39: jle 0x746f6f */ if ((fZ||fS!=fO)) goto L_00746f6f;
L_00746f3b:; BB(0x00746f3b);
    /* 00746f3b: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00746f3e: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746f41: mov esi, dword ptr [esi + edi*4 + 0x38] */ r_esi = R32((u32)(r_esi+r_edi*4+0x38u));
    /* 00746f45: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
L_00746f48:; BB(0x00746f48);
    /* 00746f48: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00746f4b: movzx esi, word ptr [eax] */ r_esi = (u32)R16((u32)(r_eax));
    /* 00746f4e: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746f50: jne 0x746f62 */ if (!fZ) goto L_00746f62;
L_00746f52:; BB(0x00746f52);
    /* 00746f52: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00746f55: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746f58: movzx esi, word ptr [eax + 2] */ r_esi = (u32)R16((u32)(r_eax+0x2u));
    /* 00746f5c: cmp esi, dword ptr [edi + ecx*4 + 0x3c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+r_ecx*4+0x3cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00746f60: je 0x746f8e */ if (fZ) goto L_00746f8e;
L_00746f62:; BB(0x00746f62);
    /* 00746f62: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00746f65: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00746f68: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00746f6b: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00746f6d: jl 0x746f48 */ if ((fS!=fO)) goto L_00746f48;
L_00746f6f:; BB(0x00746f6f);
    /* 00746f6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00746f71:; BB(0x00746f71);
    /* 00746f71: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00746f74: movzx esi, word ptr [edx + 2] */ r_esi = (u32)R16((u32)(r_edx+0x2u));
    /* 00746f78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00746f79: lea edi, [edx + 4] */ r_edi = (u32)(r_edx+0x4u);
    /* 00746f7c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00746f7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746f7f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00746f80: call 0x738a04 */ r_esp -= 4; W32(r_esp, 0x746f85u); f_00738a04();
    /* 00746f85: add dword ptr [ebp - 0x38], 1 */ { u32 ad = (u32)(r_ebp+0xffffffc8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00746f89: jmp 0x746f07 */ goto L_00746f07;
L_00746f8e:; BB(0x00746f8e);
    /* 00746f8e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00746f91: jmp 0x746f71 */ goto L_00746f71;
L_00746f93:; BB(0x00746f93);
    /* 00746f93: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00746f95: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x746f9au); f_007930dc();
    /* 00746f9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00746f9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00746f9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746f9e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00746fa0: call 0x7389cc */ r_esp -= 4; W32(r_esp, 0x746fa5u); f_007389cc();
    /* 00746fa5: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746fa8: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 00746faf: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00746fb5: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00746fbc: mov dword ptr [esi + 0x84], ebx */ W32((u32)(r_esi+0x84u), r_ebx);
    /* 00746fc2: jmp 0x745a50 */ goto L_00745a50;
}

void f_00745a8e(void)
{
    FN_ENTER(0x00745a8e);
    /* 00745a8e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745a91: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00745a97: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00745a9e: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745aa0: je 0x745ac0 */ if (fZ) goto L_00745ac0;
L_00745aa2:; BB(0x00745aa2);
    /* 00745aa2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745aa5: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00745aa8: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00745aab: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00745aae: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00745ab2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745ab5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745abc: mov esp, ebp */ r_esp = r_ebp;
    /* 00745abe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745abf: ret  */ FN_RET(0x00745a8e); r_esp += 4; return;
L_00745ac0:; BB(0x00745ac0);
    /* 00745ac0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745ac2: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745ac8:; BB(0x00745ac8);
    /* 00745ac8: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x745acdu); f_00737d90();
    /* 00745acd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745acf: jne 0x745add */ if (!fZ) goto L_00745add;
L_00745ad1:; BB(0x00745ad1);
    /* 00745ad1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745ad4: mov byte ptr [eax + 0x1c], 0x2d */ W8((u32)(r_eax+0x1cu), 0x2du);
    /* 00745ad8: jmp 0x7469c9 */ goto L_007469c9;
L_00745add:; BB(0x00745add);
    /* 00745add: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745ae0: mov byte ptr [eax + 0x1c], 0x2b */ W8((u32)(r_eax+0x1cu), 0x2bu);
    /* 00745ae4: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745a8e); r_esp += 4; return;
}

void f_00745ae9(void)
{
    FN_ENTER(0x00745ae9);
    /* 00745ae9: call 0x77efcc */ r_esp -= 4; W32(r_esp, 0x745aeeu); f_0077efcc();
    /* 00745aee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745af0: je 0x747019 */ if (fZ) goto L_00747019;
L_00745af6:; BB(0x00745af6);
    /* 00745af6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745af9: movzx edx, byte ptr [eax + 0x1c] */ r_edx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00745afd: cmp edx, 0x27 */ {  u32 a = r_edx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745b00: je 0x747010 */ if (fZ) goto L_00747010;
L_00745b06:; BB(0x00745b06);
    /* 00745b06: mov byte ptr [eax + 0x1c], 0x34 */ W8((u32)(r_eax+0x1cu), 0x34u);
L_00745b0a:; BB(0x00745b0a);
    /* 00745b0a: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 00745b10: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00745b15: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x745b1au); f_007c1160();
    /* 00745b1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745b1c: je 0x745b37 */ if (fZ) goto L_00745b37;
L_00745b1e:; BB(0x00745b1e);
    /* 00745b1e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00745b20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745b21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745b22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745b23: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00745b28: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x745b2du); f_00814298();
    /* 00745b2d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00745b30: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745b33: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_00745b37:; BB(0x00745b37);
    /* 00745b37: call 0x77efcc */ r_esp -= 4; W32(r_esp, 0x745b3cu); f_0077efcc();
    /* 00745b3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745b3e: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745b44:; BB(0x00745b44);
    /* 00745b44: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745b47: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00745b4a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745b4c: je 0x746fd0 */ if (fZ) goto L_00746fd0;
L_00745b52:; BB(0x00745b52);
    /* 00745b52: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745b55: movzx edx, byte ptr [eax + 0x1c] */ r_edx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00745b59: cmp edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00745b5c: je 0x746fc7 */ if (fZ) goto L_00746fc7;
L_00745b62:; BB(0x00745b62);
    /* 00745b62: mov byte ptr [eax + 0x1c], 0x35 */ W8((u32)(r_eax+0x1cu), 0x35u);
    /* 00745b66: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745ae9); r_esp += 4; return;
L_00746fc7:; BB(0x00746fc7);
    /* 00746fc7: mov byte ptr [eax + 0x1c], 0x29 */ W8((u32)(r_eax+0x1cu), 0x29u);
    /* 00746fcb: jmp 0x7469c9 */ goto L_007469c9;
L_00746fd0:; BB(0x00746fd0);
    /* 00746fd0: call 0x77efcc */ r_esp -= 4; W32(r_esp, 0x746fd5u); f_0077efcc();
    /* 00746fd5: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00746fda: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746fdd: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 00746fe0: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x746fe5u); f_006c1bd4();
    /* 00746fe5: mov ebx, eax */ r_ebx = r_eax;
    /* 00746fe7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746fea: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00746fed: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 00746ff0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00746ff1: call 0x77ee4c */ r_esp -= 4; W32(r_esp, 0x746ff6u); f_0077ee4c();
    /* 00746ff6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746ff9: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00746ffc: add ebx, 0x2944 */ {  u32 a = r_ebx; u32 b = 0x2944u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00747002: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00747003: call 0x77ee4c */ r_esp -= 4; W32(r_esp, 0x747008u); f_0077ee4c();
    /* 00747008: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074700b: jmp 0x745b52 */ goto L_00745b52;
L_00747010:; BB(0x00747010);
    /* 00747010: mov byte ptr [eax + 0x1c], 0x28 */ W8((u32)(r_eax+0x1cu), 0x28u);
    /* 00747014: jmp 0x745b0a */ goto L_00745b0a;
L_00747019:; BB(0x00747019);
    /* 00747019: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0074701f: call 0x7d77cc */ r_esp -= 4; W32(r_esp, 0x747024u); f_007d77cc();
    /* 00747024: jmp 0x745af6 */ goto L_00745af6;
}

void f_00745b0a(void)
{
    FN_ENTER(0x00745b0a);
    /* 00745b0a: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 00745b10: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00745b15: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x745b1au); f_007c1160();
    /* 00745b1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745b1c: je 0x745b37 */ if (fZ) goto L_00745b37;
L_00745b1e:; BB(0x00745b1e);
    /* 00745b1e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00745b20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745b21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745b22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745b23: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00745b28: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x745b2du); f_00814298();
    /* 00745b2d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00745b30: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745b33: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_00745b37:; BB(0x00745b37);
    /* 00745b37: call 0x77efcc */ r_esp -= 4; W32(r_esp, 0x745b3cu); f_0077efcc();
    /* 00745b3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745b3e: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745b44:; BB(0x00745b44);
    /* 00745b44: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745b47: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00745b4a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745b4c: je 0x746fd0 */ if (fZ) goto L_00746fd0;
L_00745b52:; BB(0x00745b52);
    /* 00745b52: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745b55: movzx edx, byte ptr [eax + 0x1c] */ r_edx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00745b59: cmp edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00745b5c: je 0x746fc7 */ if (fZ) goto L_00746fc7;
L_00745b62:; BB(0x00745b62);
    /* 00745b62: mov byte ptr [eax + 0x1c], 0x35 */ W8((u32)(r_eax+0x1cu), 0x35u);
    /* 00745b66: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745b0a); r_esp += 4; return;
L_00746fc7:; BB(0x00746fc7);
    /* 00746fc7: mov byte ptr [eax + 0x1c], 0x29 */ W8((u32)(r_eax+0x1cu), 0x29u);
    /* 00746fcb: jmp 0x7469c9 */ goto L_007469c9;
L_00746fd0:; BB(0x00746fd0);
    /* 00746fd0: call 0x77efcc */ r_esp -= 4; W32(r_esp, 0x746fd5u); f_0077efcc();
    /* 00746fd5: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00746fda: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746fdd: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 00746fe0: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x746fe5u); f_006c1bd4();
    /* 00746fe5: mov ebx, eax */ r_ebx = r_eax;
    /* 00746fe7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746fea: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00746fed: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 00746ff0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00746ff1: call 0x77ee4c */ r_esp -= 4; W32(r_esp, 0x746ff6u); f_0077ee4c();
    /* 00746ff6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00746ff9: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00746ffc: add ebx, 0x2944 */ {  u32 a = r_ebx; u32 b = 0x2944u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00747002: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00747003: call 0x77ee4c */ r_esp -= 4; W32(r_esp, 0x747008u); f_0077ee4c();
    /* 00747008: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074700b: jmp 0x745b52 */ goto L_00745b52;
}

void f_00745b6b(void)
{
    FN_ENTER(0x00745b6b);
    /* 00745b6b: mov eax, ecx */ r_eax = r_ecx;
    /* 00745b6d: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00745b70: jmp 0x745bb2 */ goto L_00745bb2;
L_00745bb2:; BB(0x00745bb2);
    /* 00745bb2: mov edx, eax */ r_edx = r_eax;
    /* 00745bb4: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 00745bb7: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00745bba: cmp ecx, 0x1c2 */ {  u32 a = r_ecx; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00745bc0: jle 0x7469c9 */ if ((fZ||fS!=fO)) goto L_007469c9;
L_00745bc6:; BB(0x00745bc6);
    /* 00745bc6: mov eax, edx */ r_eax = r_edx;
    /* 00745bc8: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00745bcb: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x745bd0u); f_0068d5a8();
    /* 00745bd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00745bd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745bd3: je 0x745be6 */ if (fZ) goto L_00745be6;
L_00745bd5:; BB(0x00745bd5);
    /* 00745bd5: mov ecx, eax */ r_ecx = r_eax;
    /* 00745bd7: call 0x691e2c */ r_esp -= 4; W32(r_esp, 0x745bdcu); f_00691e2c();
    /* 00745bdc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745bdf: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_00745be6:; BB(0x00745be6);
    /* 00745be6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745be9: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00745bec: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x745bf1u); f_00718138();
    /* 00745bf1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00745bf2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745bf5: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00745bf8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00745bfa: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x745bfdu); call_ind(t); }
    /* 00745bfd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745c00: mov byte ptr [eax + 0x1c], 0x4f */ W8((u32)(r_eax+0x1cu), 0x4fu);
    /* 00745c04: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745b6b); r_esp += 4; return;
}

void f_00745b72(void)
{
    FN_ENTER(0x00745b72);
    /* 00745b72: mov ecx, 0xacb240 */ r_ecx = 0xacb240u;
    /* 00745b77: call 0x8273a4 */ r_esp -= 4; W32(r_esp, 0x745b7cu); f_008273a4();
    /* 00745b7c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745b7f: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00745b82: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x745b87u); f_0068d5a8();
    /* 00745b87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00745b88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745b8a: je 0x745b9d */ if (fZ) goto L_00745b9d;
L_00745b8c:; BB(0x00745b8c);
    /* 00745b8c: mov ecx, eax */ r_ecx = r_eax;
    /* 00745b8e: call 0x691e10 */ r_esp -= 4; W32(r_esp, 0x745b93u); f_00691e10();
    /* 00745b93: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745b96: mov dword ptr [eax + 0x20], 1 */ W32((u32)(r_eax+0x20u), 0x1u);
L_00745b9d:; BB(0x00745b9d);
    /* 00745b9d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745ba0: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00745ba3: call 0x718168 */ r_esp -= 4; W32(r_esp, 0x745ba8u); f_00718168();
    /* 00745ba8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00745ba9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745bac: mov byte ptr [eax + 0x1c], 0x26 */ W8((u32)(r_eax+0x1cu), 0x26u);
    /* 00745bb0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00745bb2: mov edx, eax */ r_edx = r_eax;
    /* 00745bb4: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 00745bb7: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00745bba: cmp ecx, 0x1c2 */ {  u32 a = r_ecx; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00745bc0: jle 0x7469c9 */ if ((fZ||fS!=fO)) goto L_007469c9;
L_00745bc6:; BB(0x00745bc6);
    /* 00745bc6: mov eax, edx */ r_eax = r_edx;
    /* 00745bc8: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00745bcb: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x745bd0u); f_0068d5a8();
    /* 00745bd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00745bd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745bd3: je 0x745be6 */ if (fZ) goto L_00745be6;
L_00745bd5:; BB(0x00745bd5);
    /* 00745bd5: mov ecx, eax */ r_ecx = r_eax;
    /* 00745bd7: call 0x691e2c */ r_esp -= 4; W32(r_esp, 0x745bdcu); f_00691e2c();
    /* 00745bdc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745bdf: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_00745be6:; BB(0x00745be6);
    /* 00745be6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745be9: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00745bec: call 0x718138 */ r_esp -= 4; W32(r_esp, 0x745bf1u); f_00718138();
    /* 00745bf1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00745bf2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745bf5: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00745bf8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00745bfa: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x745bfdu); call_ind(t); }
    /* 00745bfd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745c00: mov byte ptr [eax + 0x1c], 0x4f */ W8((u32)(r_eax+0x1cu), 0x4fu);
    /* 00745c04: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745b72); r_esp += 4; return;
}

void f_00745c09(void)
{
    FN_ENTER(0x00745c09);
    /* 00745c09: mov eax, ecx */ r_eax = r_ecx;
    /* 00745c0b: mov eax, dword ptr [eax + 0x78] */ r_eax = R32((u32)(r_eax+0x78u));
    /* 00745c0e: jmp 0x745c51 */ goto L_00745c51;
L_00745c51:; BB(0x00745c51);
    /* 00745c51: mov ecx, eax */ r_ecx = r_eax;
    /* 00745c53: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x745c58u); f_0073d114();
    /* 00745c58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745c5a: je 0x745c71 */ if (fZ) goto L_00745c71;
L_00745c5c:; BB(0x00745c5c);
    /* 00745c5c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745c5f: mov byte ptr [eax + 0x1c], 0x21 */ W8((u32)(r_eax+0x1cu), 0x21u);
    /* 00745c63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745c66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745c6d: mov esp, ebp */ r_esp = r_ebp;
    /* 00745c6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745c70: ret  */ FN_RET(0x00745c09); r_esp += 4; return;
L_00745c71:; BB(0x00745c71);
    /* 00745c71: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745c74: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00745c77: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x745c7cu); f_0073ce50();
    /* 00745c7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745c7e: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745c84:; BB(0x00745c84);
    /* 00745c84: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745c87: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00745c8a: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x745c8fu); f_0073d134();
    /* 00745c8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745c91: je 0x745c9f */ if (fZ) goto L_00745c9f;
L_00745c93:; BB(0x00745c93);
    /* 00745c93: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745c96: mov byte ptr [eax + 0x1c], 0x21 */ W8((u32)(r_eax+0x1cu), 0x21u);
    /* 00745c9a: jmp 0x7469c9 */ goto L_007469c9;
L_00745c9f:; BB(0x00745c9f);
    /* 00745c9f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745ca2: call 0x747974 */ r_esp -= 4; W32(r_esp, 0x745ca7u); f_00747974();
    /* 00745ca7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745caa: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00745cae: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745c09); r_esp += 4; return;
}

void f_00745c10(void)
{
    FN_ENTER(0x00745c10);
    /* 00745c10: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00745c15: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x745c1au); f_0073ec50();
    /* 00745c1a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00745c1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745c1c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745c1f: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00745c25: call 0x78edec */ r_esp -= 4; W32(r_esp, 0x745c2au); f_0078edec();
    /* 00745c2a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745c2d: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00745c33: call 0x78ee54 */ r_esp -= 4; W32(r_esp, 0x745c38u); f_0078ee54();
    /* 00745c38: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745c3b: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00745c3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745c3f: call 0x756a58 */ r_esp -= 4; W32(r_esp, 0x745c44u); f_00756a58();
    /* 00745c44: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00745c47: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745c4a: mov byte ptr [edx + 0x1c], 0x24 */ W8((u32)(r_edx+0x1cu), 0x24u);
    /* 00745c4e: mov dword ptr [edx + 0x78], eax */ W32((u32)(r_edx+0x78u), r_eax);
    /* 00745c51: mov ecx, eax */ r_ecx = r_eax;
    /* 00745c53: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x745c58u); f_0073d114();
    /* 00745c58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745c5a: je 0x745c71 */ if (fZ) goto L_00745c71;
L_00745c5c:; BB(0x00745c5c);
    /* 00745c5c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745c5f: mov byte ptr [eax + 0x1c], 0x21 */ W8((u32)(r_eax+0x1cu), 0x21u);
    /* 00745c63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745c66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745c6d: mov esp, ebp */ r_esp = r_ebp;
    /* 00745c6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745c70: ret  */ FN_RET(0x00745c10); r_esp += 4; return;
L_00745c71:; BB(0x00745c71);
    /* 00745c71: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745c74: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00745c77: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x745c7cu); f_0073ce50();
    /* 00745c7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745c7e: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745c84:; BB(0x00745c84);
    /* 00745c84: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745c87: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00745c8a: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x745c8fu); f_0073d134();
    /* 00745c8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745c91: je 0x745c9f */ if (fZ) goto L_00745c9f;
L_00745c93:; BB(0x00745c93);
    /* 00745c93: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745c96: mov byte ptr [eax + 0x1c], 0x21 */ W8((u32)(r_eax+0x1cu), 0x21u);
    /* 00745c9a: jmp 0x7469c9 */ goto L_007469c9;
L_00745c9f:; BB(0x00745c9f);
    /* 00745c9f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745ca2: call 0x747974 */ r_esp -= 4; W32(r_esp, 0x745ca7u); f_00747974();
    /* 00745ca7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745caa: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00745cae: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745c10); r_esp += 4; return;
}

void f_00745cb3(void)
{
    FN_ENTER(0x00745cb3);
    /* 00745cb3: mov eax, ecx */ r_eax = r_ecx;
    /* 00745cb5: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00745cb8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745cba: je 0x745ccb */ if (fZ) goto L_00745ccb;
L_00745cbc:; BB(0x00745cbc);
    /* 00745cbc: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x745cc1u); f_0073d160();
    /* 00745cc1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745cc4: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
L_00745ccb:; BB(0x00745ccb);
    /* 00745ccb: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00745cce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745cd0: je 0x745ce1 */ if (fZ) goto L_00745ce1;
L_00745cd2:; BB(0x00745cd2);
    /* 00745cd2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x745cd7u); f_007127b0();
    /* 00745cd7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745cda: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
L_00745ce1:; BB(0x00745ce1);
    /* 00745ce1: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00745ce4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745ce6: je 0x745cf7 */ if (fZ) goto L_00745cf7;
L_00745ce8:; BB(0x00745ce8);
    /* 00745ce8: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x745cedu); f_007127b0();
    /* 00745ced: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745cf0: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_00745cf7:; BB(0x00745cf7);
    /* 00745cf7: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00745cfd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745cff: je 0x745d13 */ if (fZ) goto L_00745d13;
L_00745d01:; BB(0x00745d01);
    /* 00745d01: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x745d06u); f_007127b0();
    /* 00745d06: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745d09: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
L_00745d13:; BB(0x00745d13);
    /* 00745d13: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00745d16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745d18: je 0x745d29 */ if (fZ) goto L_00745d29;
L_00745d1a:; BB(0x00745d1a);
    /* 00745d1a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x745d1fu); f_007127b0();
    /* 00745d1f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745d22: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
L_00745d29:; BB(0x00745d29);
    /* 00745d29: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 00745d2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745d31: je 0x747029 */ if (fZ) goto L_00747029;
L_00745d37:; BB(0x00745d37);
    /* 00745d37: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 00745d3c: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x745d41u); f_0073ec50();
    /* 00745d41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00745d42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745d43: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745d46: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00745d4c: call 0x78edec */ r_esp -= 4; W32(r_esp, 0x745d51u); f_0078edec();
    /* 00745d51: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745d54: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00745d5a: call 0x78ed2c */ r_esp -= 4; W32(r_esp, 0x745d5fu); f_0078ed2c();
    /* 00745d5f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745d62: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00745d68: call 0x78ee34 */ r_esp -= 4; W32(r_esp, 0x745d6du); f_0078ee34();
    /* 00745d6d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745d70: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00745d76: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x745d7bu); f_0078ee74();
    /* 00745d7b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745d7e: mov byte ptr [eax + 0x1c], 0x22 */ W8((u32)(r_eax+0x1cu), 0x22u);
    /* 00745d82: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745d85: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00745d8b: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x745d90u); f_0078ed20();
    /* 00745d90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745d92: je 0x745da9 */ if (fZ) goto L_00745da9;
L_00745d94:; BB(0x00745d94);
    /* 00745d94: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745d97: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00745d9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745d9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745da5: mov esp, ebp */ r_esp = r_ebp;
    /* 00745da7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745da8: ret  */ FN_RET(0x00745cb3); r_esp += 4; return;
L_00745da9:; BB(0x00745da9);
    /* 00745da9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745dac: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00745db2: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x745db7u); f_0078ed14();
    /* 00745db7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745db9: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745dbf:; BB(0x00745dbf);
    /* 00745dbf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745dc2: mov byte ptr [eax + 0x1c], 0x23 */ W8((u32)(r_eax+0x1cu), 0x23u);
    /* 00745dc6: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745cb3); r_esp += 4; return;
L_00747029:; BB(0x00747029);
    /* 00747029: call 0x756ab0 */ r_esp -= 4; W32(r_esp, 0x74702eu); f_00756ab0();
    /* 0074702e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00747031: mov dword ptr [edx + 0x88], eax */ W32((u32)(r_edx+0x88u), r_eax);
    /* 00747037: jmp 0x745d37 */ goto L_00745d37;
}

void f_00745d82(void)
{
    FN_ENTER(0x00745d82);
    /* 00745d82: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745d85: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00745d8b: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x745d90u); f_0078ed20();
    /* 00745d90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745d92: je 0x745da9 */ if (fZ) goto L_00745da9;
L_00745d94:; BB(0x00745d94);
    /* 00745d94: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745d97: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00745d9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745d9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745da5: mov esp, ebp */ r_esp = r_ebp;
    /* 00745da7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745da8: ret  */ FN_RET(0x00745d82); r_esp += 4; return;
L_00745da9:; BB(0x00745da9);
    /* 00745da9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745dac: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00745db2: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x745db7u); f_0078ed14();
    /* 00745db7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745db9: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745dbf:; BB(0x00745dbf);
    /* 00745dbf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745dc2: mov byte ptr [eax + 0x1c], 0x23 */ W8((u32)(r_eax+0x1cu), 0x23u);
    /* 00745dc6: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745d82); r_esp += 4; return;
}

void f_00745dcb(void)
{
    FN_ENTER(0x00745dcb);
    /* 00745dcb: mov eax, ecx */ r_eax = r_ecx;
    /* 00745dcd: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00745dd0: jmp 0x745e0d */ goto L_00745e0d;
L_00745e0d:; BB(0x00745e0d);
    /* 00745e0d: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00745e14: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745e16: je 0x745e2d */ if (fZ) goto L_00745e2d;
L_00745e18:; BB(0x00745e18);
    /* 00745e18: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745e1b: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 00745e1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745e22: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745e29: mov esp, ebp */ r_esp = r_ebp;
    /* 00745e2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745e2c: ret  */ FN_RET(0x00745dcb); r_esp += 4; return;
L_00745e2d:; BB(0x00745e2d);
    /* 00745e2d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745e2f: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745e35:; BB(0x00745e35);
    /* 00745e35: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x745e3au); f_007365f4();
    /* 00745e3a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745e3d: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00745e40: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745dcb); r_esp += 4; return;
}

void f_00745dd2(void)
{
    FN_ENTER(0x00745dd2);
    /* 00745dd2: mov eax, ecx */ r_eax = r_ecx;
    /* 00745dd4: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00745dd7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745dd9: je 0x745dea */ if (fZ) goto L_00745dea;
L_00745ddb:; BB(0x00745ddb);
    /* 00745ddb: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x745de0u); f_007127b0();
    /* 00745de0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745de3: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
L_00745dea:; BB(0x00745dea);
    /* 00745dea: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00745df0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745df2: je 0x747050 */ if (fZ) goto L_00747050;
L_00745df8:; BB(0x00745df8);
    /* 00745df8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745dfb: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00745dfe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745e00: je 0x74703c */ if (fZ) goto L_0074703c;
L_00745e06:; BB(0x00745e06);
    /* 00745e06: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745e09: mov byte ptr [eax + 0x1c], 0x20 */ W8((u32)(r_eax+0x1cu), 0x20u);
    /* 00745e0d: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00745e14: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745e16: je 0x745e2d */ if (fZ) goto L_00745e2d;
L_00745e18:; BB(0x00745e18);
    /* 00745e18: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745e1b: mov byte ptr [eax + 0x1c], 0x1d */ W8((u32)(r_eax+0x1cu), 0x1du);
    /* 00745e1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745e22: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745e29: mov esp, ebp */ r_esp = r_ebp;
    /* 00745e2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745e2c: ret  */ FN_RET(0x00745dd2); r_esp += 4; return;
L_00745e2d:; BB(0x00745e2d);
    /* 00745e2d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745e2f: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745e35:; BB(0x00745e35);
    /* 00745e35: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x745e3au); f_007365f4();
    /* 00745e3a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745e3d: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00745e40: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745dd2); r_esp += 4; return;
L_0074703c:; BB(0x0074703c);
    /* 0074703c: mov ecx, eax */ r_ecx = r_eax;
    /* 0074703e: call 0x7478e0 */ r_esp -= 4; W32(r_esp, 0x747043u); f_007478e0();
    /* 00747043: mov ecx, eax */ r_ecx = r_eax;
    /* 00747045: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00747048: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 0074704b: jmp 0x745e06 */ goto L_00745e06;
L_00747050:; BB(0x00747050);
    /* 00747050: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00747057: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00747059: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x74705eu); f_005caba4();
    /* 0074705e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00747061: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00747064: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00747067: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00747069: je 0x7470b1 */ if (fZ) goto L_007470b1;
L_0074706b:; BB(0x0074706b);
    /* 0074706b: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 00747072: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00747079: push 0x8d */ { u32 v = 0x8du; r_esp -= 4; W32(r_esp, v); }
    /* 0074707e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x747083u); f_0073ec50();
    /* 00747083: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747084: push 0xacb240 */ { u32 v = 0xacb240u; r_esp -= 4; W32(r_esp, v); }
    /* 00747089: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0074708c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074708d: call 0x762dcc */ r_esp -= 4; W32(r_esp, 0x747092u); f_00762dcc();
    /* 00747092: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00747099:; BB(0x00747099);
    /* 00747099: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0074709c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074709f: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 007470a5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007470ac: jmp 0x745df8 */ goto L_00745df8;
L_007470b1:; BB(0x007470b1);
    /* 007470b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007470b3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 007470b6: jmp 0x747099 */ goto L_00747099;
}

void f_00745e45(void)
{
    FN_ENTER(0x00745e45);
    /* 00745e45: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00745e4c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00745e4e: je 0x745ef5 */ if (fZ) goto L_00745ef5;
L_00745e54:; BB(0x00745e54);
    /* 00745e54: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745e57: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00745e5a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00745e5d: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x745e62u); f_007365f4();
    /* 00745e62: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00745e65: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 00745e6c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00745e6f: and edx, 0xfffb */ {  u32 a = r_edx; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00745e75: movsx ebx, word ptr [ecx + 0x8c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8cu));
    /* 00745e7c: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00745e81: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00745e84: mov word ptr [0xa98474], dx */ W16((u32)(0xa98474u), (u16)r_edx);
    /* 00745e8b: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 00745e8e: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x745e93u); f_00736578();
    /* 00745e93: mov eax, dword ptr [0xacb364] */ r_eax = R32((u32)(0xacb364u));
    /* 00745e98: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00745e9b: lea edi, [eax - 1] */ r_edi = (u32)(r_eax+0xffffffffu);
    /* 00745e9e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00745ea0: jl 0x7470b8 */ if ((fS!=fO)) goto L_007470b8;
L_00745ea6:; BB(0x00745ea6);
    /* 00745ea6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00745ea7: call 0x827f14 */ r_esp -= 4; W32(r_esp, 0x745eacu); f_00827f14();
    /* 00745eac: mov esi, eax */ r_esi = r_eax;
    /* 00745eae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00745eb1: mov ecx, esi */ r_ecx = r_esi;
    /* 00745eb3: call 0x827378 */ r_esp -= 4; W32(r_esp, 0x745eb8u); f_00827378();
    /* 00745eb8: mov ebx, eax */ r_ebx = r_eax;
    /* 00745eba: mov ecx, esi */ r_ecx = r_esi;
    /* 00745ebc: call 0x827374 */ r_esp -= 4; W32(r_esp, 0x745ec1u); f_00827374();
    /* 00745ec1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00745ec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745ec5: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00745ec7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00745ec8: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x745ecdu); f_00735c90();
    /* 00745ecd: mov ecx, esi */ r_ecx = r_esi;
    /* 00745ecf: call 0x827374 */ r_esp -= 4; W32(r_esp, 0x745ed4u); f_00827374();
    /* 00745ed4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00745ed7: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745ed9: jne 0x745ee9 */ if (!fZ) goto L_00745ee9;
L_00745edb:; BB(0x00745edb);
    /* 00745edb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00745ede: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00745ee0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00745ee3: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00745ee6: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_00745ee9:; BB(0x00745ee9);
    /* 00745ee9: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00745eec: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00745eee: jge 0x745ea6 */ if ((fS==fO)) goto L_00745ea6;
L_00745ef0:; BB(0x00745ef0);
    /* 00745ef0: jmp 0x7470b8 */ goto L_007470b8;
L_00745ef5:; BB(0x00745ef5);
    /* 00745ef5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745ef8: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00745efb: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00745f02: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745f04: je 0x745f24 */ if (fZ) goto L_00745f24;
L_00745f06:; BB(0x00745f06);
    /* 00745f06: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745f09: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00745f0c: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00745f0f: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00745f12: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00745f16: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745f19: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745f20: mov esp, ebp */ r_esp = r_ebp;
    /* 00745f22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745f23: ret  */ FN_RET(0x00745e45); r_esp += 4; return;
L_00745f24:; BB(0x00745f24);
    /* 00745f24: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745f26: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745f2c:; BB(0x00745f2c);
    /* 00745f2c: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x745f31u); f_007365f4();
    /* 00745f31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745f32: call 0x827408 */ r_esp -= 4; W32(r_esp, 0x745f37u); f_00827408();
    /* 00745f37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00745f38: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745f3b: mov byte ptr [eax + 0x1c], 0x1f */ W8((u32)(r_eax+0x1cu), 0x1fu);
    /* 00745f3f: jmp 0x7469c9 */ goto L_007469c9;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745e45); r_esp += 4; return;
L_007470b8:; BB(0x007470b8);
    /* 007470b8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 007470bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007470bd: jle 0x7470f3 */ if ((fZ||fS!=fO)) goto L_007470f3;
L_007470bf:; BB(0x007470bf);
    /* 007470bf: push 0x43730000 */ { u32 v = 0x43730000u; r_esp -= 4; W32(r_esp, v); }
    /* 007470c4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007470c7: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x7470ccu); f_00736138();
    /* 007470cc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007470cf: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007470d2: je 0x7470e2 */ if (fZ) goto L_007470e2;
L_007470d4:; BB(0x007470d4);
    /* 007470d4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007470d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007470d8: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7470ddu); f_00736510();
    /* 007470dd: jmp 0x745ef5 */ goto L_00745ef5;
L_007470e2:; BB(0x007470e2);
    /* 007470e2: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 007470e5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007470e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007470e9: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7470eeu); f_00736510();
    /* 007470ee: jmp 0x745ef5 */ goto L_00745ef5;
L_007470f3:; BB(0x007470f3);
    /* 007470f3: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 007470f8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7470fdu); f_0079317c();
    /* 007470fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007470fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00747101: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00747103: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747105: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747106: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x74710bu); f_00735ee0();
    /* 0074710b: jmp 0x7470bf */ goto L_007470bf;
}

void f_00745f44(void)
{
    FN_ENTER(0x00745f44);
    goto L_00745f44;
L_00745e45:; BB(0x00745e45);
    /* 00745e45: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00745e4c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00745e4e: je 0x745ef5 */ if (fZ) goto L_00745ef5;
L_00745e54:; BB(0x00745e54);
    /* 00745e54: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745e57: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00745e5a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00745e5d: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x745e62u); f_007365f4();
    /* 00745e62: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00745e65: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 00745e6c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00745e6f: and edx, 0xfffb */ {  u32 a = r_edx; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00745e75: movsx ebx, word ptr [ecx + 0x8c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8cu));
    /* 00745e7c: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00745e81: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00745e84: mov word ptr [0xa98474], dx */ W16((u32)(0xa98474u), (u16)r_edx);
    /* 00745e8b: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 00745e8e: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x745e93u); f_00736578();
    /* 00745e93: mov eax, dword ptr [0xacb364] */ r_eax = R32((u32)(0xacb364u));
    /* 00745e98: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00745e9b: lea edi, [eax - 1] */ r_edi = (u32)(r_eax+0xffffffffu);
    /* 00745e9e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00745ea0: jl 0x7470b8 */ if ((fS!=fO)) goto L_007470b8;
L_00745ea6:; BB(0x00745ea6);
    /* 00745ea6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00745ea7: call 0x827f14 */ r_esp -= 4; W32(r_esp, 0x745eacu); f_00827f14();
    /* 00745eac: mov esi, eax */ r_esi = r_eax;
    /* 00745eae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00745eb1: mov ecx, esi */ r_ecx = r_esi;
    /* 00745eb3: call 0x827378 */ r_esp -= 4; W32(r_esp, 0x745eb8u); f_00827378();
    /* 00745eb8: mov ebx, eax */ r_ebx = r_eax;
    /* 00745eba: mov ecx, esi */ r_ecx = r_esi;
    /* 00745ebc: call 0x827374 */ r_esp -= 4; W32(r_esp, 0x745ec1u); f_00827374();
    /* 00745ec1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00745ec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745ec5: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00745ec7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00745ec8: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x745ecdu); f_00735c90();
    /* 00745ecd: mov ecx, esi */ r_ecx = r_esi;
    /* 00745ecf: call 0x827374 */ r_esp -= 4; W32(r_esp, 0x745ed4u); f_00827374();
    /* 00745ed4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00745ed7: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745ed9: jne 0x745ee9 */ if (!fZ) goto L_00745ee9;
L_00745edb:; BB(0x00745edb);
    /* 00745edb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00745ede: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00745ee0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00745ee3: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00745ee6: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_00745ee9:; BB(0x00745ee9);
    /* 00745ee9: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00745eec: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00745eee: jge 0x745ea6 */ if ((fS==fO)) goto L_00745ea6;
L_00745ef0:; BB(0x00745ef0);
    /* 00745ef0: jmp 0x7470b8 */ goto L_007470b8;
L_00745ef5:; BB(0x00745ef5);
    /* 00745ef5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745ef8: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00745efb: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00745f02: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745f04: je 0x745f24 */ if (fZ) goto L_00745f24;
L_00745f06:; BB(0x00745f06);
    /* 00745f06: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745f09: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00745f0c: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00745f0f: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00745f12: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00745f16: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00745f19: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00745f20: mov esp, ebp */ r_esp = r_ebp;
    /* 00745f22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00745f23: ret  */ FN_RET(0x00745f44); r_esp += 4; return;
L_00745f24:; BB(0x00745f24);
    /* 00745f24: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00745f26: je 0x7469c9 */ if (fZ) goto L_007469c9;
L_00745f2c:; BB(0x00745f2c);
    /* 00745f2c: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x745f31u); f_007365f4();
    /* 00745f31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00745f32: call 0x827408 */ r_esp -= 4; W32(r_esp, 0x745f37u); f_00827408();
    /* 00745f37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00745f38: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745f3b: mov byte ptr [eax + 0x1c], 0x1f */ W8((u32)(r_eax+0x1cu), 0x1fu);
    /* 00745f3f: jmp 0x7469c9 */ goto L_007469c9;
L_00745f44:; BB(0x00745f44);
    /* 00745f44: mov eax, ecx */ r_eax = r_ecx;
    /* 00745f46: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00745f49: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745f4b: je 0x745f5c */ if (fZ) goto L_00745f5c;
L_00745f4d:; BB(0x00745f4d);
    /* 00745f4d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x745f52u); f_007127b0();
    /* 00745f52: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745f55: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_00745f5c:; BB(0x00745f5c);
    /* 00745f5c: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00745f62: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00745f64: je 0x745f78 */ if (fZ) goto L_00745f78;
L_00745f66:; BB(0x00745f66);
    /* 00745f66: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x745f6bu); f_007127b0();
    /* 00745f6b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745f6e: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
L_00745f78:; BB(0x00745f78);
    /* 00745f78: mov ecx, eax */ r_ecx = r_eax;
    /* 00745f7a: call 0x7478a8 */ r_esp -= 4; W32(r_esp, 0x745f7fu); f_007478a8();
    /* 00745f7f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745f82: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00745f84: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00745f86: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 00745f89: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 00745f8e: mov ecx, eax */ r_ecx = r_eax;
    /* 00745f90: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x745f95u); f_00735c90();
    /* 00745f95: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00745f98: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00745f9b: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00745f9e: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x745fa3u); f_007365f4();
    /* 00745fa3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00745fa6: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 00745fad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00745fb0: and edx, 0xfffb */ {  u32 a = r_edx; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00745fb6: movsx ebx, word ptr [ecx + 0x8c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8cu));
    /* 00745fbd: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00745fc2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00745fc5: mov word ptr [0xa98474], dx */ W16((u32)(0xa98474u), (u16)r_edx);
    /* 00745fcc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00745fcf: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x745fd4u); f_00736578();
    /* 00745fd4: mov eax, dword ptr [0xacb364] */ r_eax = R32((u32)(0xacb364u));
    /* 00745fd9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00745fdc: lea edi, [eax - 1] */ r_edi = (u32)(r_eax+0xffffffffu);
    /* 00745fdf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00745fe1: jl 0x74710d */ if ((fS!=fO)) goto L_0074710d;
L_00745fe7:; BB(0x00745fe7);
    /* 00745fe7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00745fe8: call 0x827f14 */ r_esp -= 4; W32(r_esp, 0x745fedu); f_00827f14();
    /* 00745fed: mov esi, eax */ r_esi = r_eax;
    /* 00745fef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00745ff2: mov ecx, esi */ r_ecx = r_esi;
    /* 00745ff4: call 0x827378 */ r_esp -= 4; W32(r_esp, 0x745ff9u); f_00827378();
    /* 00745ff9: mov ebx, eax */ r_ebx = r_eax;
    /* 00745ffb: mov ecx, esi */ r_ecx = r_esi;
    /* 00745ffd: call 0x827374 */ r_esp -= 4; W32(r_esp, 0x746002u); f_00827374();
    /* 00746002: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00746005: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00746006: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00746008: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00746009: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x74600eu); f_00735c90();
    /* 0074600e: mov ecx, esi */ r_ecx = r_esi;
    /* 00746010: call 0x827374 */ r_esp -= 4; W32(r_esp, 0x746015u); f_00827374();
    /* 00746015: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00746018: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074601a: jne 0x74602a */ if (!fZ) goto L_0074602a;
L_0074601c:; BB(0x0074601c);
    /* 0074601c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074601f: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00746021: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00746024: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00746027: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_0074602a:; BB(0x0074602a);
    /* 0074602a: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0074602d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0074602f: jge 0x745fe7 */ if ((fS==fO)) goto L_00745fe7;
L_00746031:; BB(0x00746031);
    /* 00746031: jmp 0x74710d */ goto L_0074710d;
L_007469c9:; BB(0x007469c9);
    /* 007469c9: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007469cc: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 007469cf: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007469d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007469d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007469dc: mov esp, ebp */ r_esp = r_ebp;
    /* 007469de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007469df: ret  */ FN_RET(0x00745f44); r_esp += 4; return;
L_007470b8:; BB(0x007470b8);
    /* 007470b8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 007470bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007470bd: jle 0x7470f3 */ if ((fZ||fS!=fO)) goto L_007470f3;
L_007470bf:; BB(0x007470bf);
    /* 007470bf: push 0x43730000 */ { u32 v = 0x43730000u; r_esp -= 4; W32(r_esp, v); }
    /* 007470c4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007470c7: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x7470ccu); f_00736138();
    /* 007470cc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007470cf: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007470d2: je 0x7470e2 */ if (fZ) goto L_007470e2;
L_007470d4:; BB(0x007470d4);
    /* 007470d4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007470d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007470d8: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7470ddu); f_00736510();
    /* 007470dd: jmp 0x745ef5 */ goto L_00745ef5;
L_007470e2:; BB(0x007470e2);
    /* 007470e2: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 007470e5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007470e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007470e9: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7470eeu); f_00736510();
    /* 007470ee: jmp 0x745ef5 */ goto L_00745ef5;
L_007470f3:; BB(0x007470f3);
    /* 007470f3: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 007470f8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7470fdu); f_0079317c();
    /* 007470fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007470fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00747101: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00747103: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00747105: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747106: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x74710bu); f_00735ee0();
    /* 0074710b: jmp 0x7470bf */ goto L_007470bf;
L_0074710d:; BB(0x0074710d);
    /* 0074710d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00747110: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00747112: jle 0x74714c */ if ((fZ||fS!=fO)) goto L_0074714c;
L_00747114:; BB(0x00747114);
    /* 00747114: push 0x43730000 */ { u32 v = 0x43730000u; r_esp -= 4; W32(r_esp, v); }
    /* 00747119: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074711c: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x747121u); f_00736138();
    /* 00747121: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00747124: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00747127: je 0x74713e */ if (fZ) goto L_0074713e;
L_00747129:; BB(0x00747129);
    /* 00747129: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074712c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074712d: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x747132u); f_00736510();
L_00747132:; BB(0x00747132);
    /* 00747132: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00747135: mov byte ptr [eax + 0x1c], 0x1e */ W8((u32)(r_eax+0x1cu), 0x1eu);
    /* 00747139: jmp 0x745e45 */ goto L_00745e45;
L_0074713e:; BB(0x0074713e);
    /* 0074713e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00747141: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00747144: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00747145: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x74714au); f_00736510();
    /* 0074714a: jmp 0x747132 */ goto L_00747132;
L_0074714c:; BB(0x0074714c);
    /* 0074714c: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 00747151: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x747156u); f_0079317c();
    /* 00747156: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00747157: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074715a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074715c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074715e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074715f: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x747164u); f_00735ee0();
    /* 00747164: jmp 0x747114 */ goto L_00747114;
}

