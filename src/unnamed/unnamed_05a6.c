#include "protos.h"

void f_005a602c(void) /* sub_5A602C */
{
    FN_ENTER(0x005a602c);
    /* 005a602c: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 005a6032: mov edx, 2 */ r_edx = 0x2u;
    /* 005a6037: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a603a: jl 0x5a603e */ if ((fS!=fO)) goto L_005a603e;
L_005a603c:; BB(0x005a603c);
    /* 005a603c: mov eax, edx */ r_eax = r_edx;
L_005a603e:; BB(0x005a603e);
    /* 005a603e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a6040: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a6042: jg 0x5a6046 */ if ((!fZ&&fS==fO)) goto L_005a6046;
L_005a6044:; BB(0x005a6044);
    /* 005a6044: mov eax, edx */ r_eax = r_edx;
L_005a6046:; BB(0x005a6046);
    /* 005a6046: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 005a604c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a604f: jne 0x5a6063 */ if (!fZ) goto L_005a6063;
L_005a6051:; BB(0x005a6051);
    /* 005a6051: mov dword ptr [ecx + 0x370], 2 */ W32((u32)(r_ecx+0x370u), 0x2u);
    /* 005a605b: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 005a605d: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x5a6062u); f_00787550();
    /* 005a6062: ret  */ FN_RET(0x005a602c); r_esp += 4; return;
L_005a6063:; BB(0x005a6063);
    /* 005a6063: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6066: jne 0x5a607a */ if (!fZ) goto L_005a607a;
L_005a6068:; BB(0x005a6068);
    /* 005a6068: mov dword ptr [ecx + 0x370], 1 */ W32((u32)(r_ecx+0x370u), 0x1u);
    /* 005a6072: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6074: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x5a6079u); f_00787550();
    /* 005a6079: ret  */ FN_RET(0x005a602c); r_esp += 4; return;
L_005a607a:; BB(0x005a607a);
    /* 005a607a: mov dword ptr [ecx + 0x370], 0 */ W32((u32)(r_ecx+0x370u), 0x0u);
    /* 005a6084: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6086: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x5a608bu); f_00787550();
    /* 005a608b: ret  */ FN_RET(0x005a602c); r_esp += 4; return;
}

void f_005a60cc(void) /* sub_5A60CC */
{
    FN_ENTER(0x005a60cc);
    /* 005a60cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a60cd: mov ebp, esp */ r_ebp = r_esp;
    /* 005a60cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a60d1: push 0x8d8a56 */ { u32 v = 0x8d8a56u; r_esp -= 4; W32(r_esp, v); }
    /* 005a60d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a60dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a60dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a60e4: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a60e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a60ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005a60ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005a60f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005a60f3: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 005a60f8: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005a60ff: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a6104u); f_008581c5();
    /* 005a6104: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a6105: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005a6108: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a610a: je 0x5a6441 */ if (fZ) goto L_005a6441;
L_005a6110:; BB(0x005a6110);
    /* 005a6110: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005a6117: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a611e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a6121: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a6123: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6124: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6125: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6126: push 0x9c077c */ { u32 v = 0x9c077cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a612b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a612d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x5a6132u); f_005b7a84();
    /* 005a6132: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a6135: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005a613c:; BB(0x005a613c);
    /* 005a613c: mov dword ptr [0xa747e8], eax */ W32((u32)(0xa747e8u), r_eax);
    /* 005a6141: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a6148: mov dword ptr [0x9c050c], 0x40e00000 */ W32((u32)(0x9c050cu), 0x40e00000u);
    /* 005a6152: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6154: mov dword ptr [0x9c0538], 0x40e00000 */ W32((u32)(0x9c0538u), 0x40e00000u);
    /* 005a615e: mov dword ptr [0x9c0564], 0x41000000 */ W32((u32)(0x9c0564u), 0x41000000u);
    /* 005a6168: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005a616f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a6174u); f_008581c5();
    /* 005a6174: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a6175: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005a6178: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a617a: je 0x5a643a */ if (fZ) goto L_005a643a;
L_005a6180:; BB(0x005a6180);
    /* 005a6180: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005a6187: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a618e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a6191: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6193: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6198: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a619d: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a61a2: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5a61a7u); f_005795a0();
    /* 005a61a7: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a61aa: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005a61b1:; BB(0x005a61b1);
    /* 005a61b1: mov dword ptr [0xa747ec], eax */ W32((u32)(0xa747ecu), r_eax);
    /* 005a61b6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a61bd: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005a61c4: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005a61c6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a61cbu); f_008581c5();
    /* 005a61cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a61cc: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005a61cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a61d1: je 0x5a6433 */ if (fZ) goto L_005a6433;
L_005a61d7:; BB(0x005a61d7);
    /* 005a61d7: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 005a61de: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005a61e5: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a61e8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a61ea: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a61ef: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a61f4: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a61f9: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5a61feu); f_005795a0();
    /* 005a61fe: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a6201: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005a6208:; BB(0x005a6208);
    /* 005a6208: mov dword ptr [0xa747f0], eax */ W32((u32)(0xa747f0u), r_eax);
    /* 005a620d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a6214: mov eax, dword ptr [0xa747e8] */ r_eax = R32((u32)(0xa747e8u));
    /* 005a6219: mov ebx, dword ptr [0x9c05d4] */ r_ebx = R32((u32)(0x9c05d4u));
    /* 005a621f: mov ecx, dword ptr [0xa747ec] */ r_ecx = R32((u32)(0xa747ecu));
    /* 005a6225: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6227: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005a622d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a622f: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005a6235: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a6239: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a623c: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5a6241u); f_00579a28();
    /* 005a6241: mov eax, dword ptr [0xa747e8] */ r_eax = R32((u32)(0xa747e8u));
    /* 005a6246: mov ebx, dword ptr [0x9c05e4] */ r_ebx = R32((u32)(0x9c05e4u));
    /* 005a624c: mov ecx, dword ptr [0xa747f0] */ r_ecx = R32((u32)(0xa747f0u));
    /* 005a6252: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005a6254: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005a625a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a625c: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005a6262: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a6266: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a6269: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5a626eu); f_00579a28();
    /* 005a626e: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005a6270: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a6275u); f_008581c5();
    /* 005a6275: mov dword ptr [0xa747e4], eax */ W32((u32)(0xa747e4u), r_eax);
    /* 005a627a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005a627c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a6281u); f_008581c5();
    /* 005a6281: mov dword ptr [0xa747e0], eax */ W32((u32)(0xa747e0u), r_eax);
    /* 005a6286: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005a6288: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a628du); f_008581c5();
    /* 005a628d: mov dword ptr [0xa747dc], eax */ W32((u32)(0xa747dcu), r_eax);
    /* 005a6292: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005a6294: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a6299u); f_008581c5();
    /* 005a6299: mov dword ptr [0xa747d8], eax */ W32((u32)(0xa747d8u), r_eax);
    /* 005a629e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a62a0: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5a62a5u); f_0077a684();
    /* 005a62a5: mov edx, dword ptr [0xa747e4] */ r_edx = R32((u32)(0xa747e4u));
    /* 005a62ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a62ad: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005a62af: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5a62b4u); f_0077a684();
    /* 005a62b4: mov edx, dword ptr [0xa747e4] */ r_edx = R32((u32)(0xa747e4u));
    /* 005a62ba: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a62bc: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005a62bf: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5a62c4u); f_0077a684();
    /* 005a62c4: mov edx, dword ptr [0xa747e4] */ r_edx = R32((u32)(0xa747e4u));
    /* 005a62ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a62cc: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005a62cf: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5a62d4u); f_0077a698();
    /* 005a62d4: mov edx, dword ptr [0xa747e0] */ r_edx = R32((u32)(0xa747e0u));
    /* 005a62da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a62dc: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005a62de: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5a62e3u); f_0077a698();
    /* 005a62e3: mov edx, dword ptr [0xa747e0] */ r_edx = R32((u32)(0xa747e0u));
    /* 005a62e9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a62eb: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005a62ee: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5a62f3u); f_0077a698();
    /* 005a62f3: mov edx, dword ptr [0xa747e0] */ r_edx = R32((u32)(0xa747e0u));
    /* 005a62f9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a62fb: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005a62fe: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5a6303u); f_0077a698();
    /* 005a6303: mov edx, dword ptr [0xa747e0] */ r_edx = R32((u32)(0xa747e0u));
    /* 005a6309: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a630b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005a630e: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5a6313u); f_0077a698();
    /* 005a6313: mov edx, dword ptr [0xa747e0] */ r_edx = R32((u32)(0xa747e0u));
    /* 005a6319: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a631b: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005a631e: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5a6323u); f_0077a6b4();
    /* 005a6323: mov edx, dword ptr [0xa747dc] */ r_edx = R32((u32)(0xa747dcu));
    /* 005a6329: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a632b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005a632d: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5a6332u); f_0077a6b4();
    /* 005a6332: mov edx, dword ptr [0xa747dc] */ r_edx = R32((u32)(0xa747dcu));
    /* 005a6338: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a633a: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005a633d: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5a6342u); f_0077a6b4();
    /* 005a6342: mov edx, dword ptr [0xa747dc] */ r_edx = R32((u32)(0xa747dcu));
    /* 005a6348: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a634a: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005a634d: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5a6352u); f_0077a6cc();
    /* 005a6352: mov edx, dword ptr [0xa747d8] */ r_edx = R32((u32)(0xa747d8u));
    /* 005a6358: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a635a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005a635c: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5a6361u); f_0077a6cc();
    /* 005a6361: mov edx, dword ptr [0xa747d8] */ r_edx = R32((u32)(0xa747d8u));
    /* 005a6367: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6369: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005a636c: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5a6371u); f_0077a6cc();
    /* 005a6371: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6374: mov edx, dword ptr [0xa747d8] */ r_edx = R32((u32)(0xa747d8u));
    /* 005a637a: mov esi, dword ptr [0x92a0e4] */ r_esi = R32((u32)(0x92a0e4u));
    /* 005a6380: movzx edi, word ptr [0x92a0e8] */ r_edi = (u32)R16((u32)(0x92a0e8u));
    /* 005a6387: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005a638a: mov edx, dword ptr [0xa747e8] */ r_edx = R32((u32)(0xa747e8u));
    /* 005a6390: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005a6393: mov word ptr [ebp - 0x24], di */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edi);
    /* 005a6397: mov eax, 2 */ r_eax = 0x2u;
    /* 005a639c: mov ecx, 4 */ r_ecx = 0x4u;
    /* 005a63a1: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 005a63a5: movzx eax, word ptr [0x92a0ea] */ r_eax = (u32)R16((u32)(0x92a0eau));
    /* 005a63ac: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 005a63b0: mov ebx, 3 */ r_ebx = 0x3u;
    /* 005a63b5: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 005a63b9: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 005a63bd: movzx eax, word ptr [0x92a0ec] */ r_eax = (u32)R16((u32)(0x92a0ecu));
    /* 005a63c4: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 005a63c8: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005a63ce: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005a63d1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005a63d3:; BB(0x005a63d3);
    /* 005a63d3: movsx edi, word ptr [ebp + ebx*2 - 0x34] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffccu));
    /* 005a63d8: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005a63db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a63dc: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 005a63e2: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005a63e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a63e7: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 005a63ea: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a63ec: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a63ee: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a63f0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a63f2: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a63f4: push dword ptr [edx*4 + 0x9c050c] */ { u32 v = R32((u32)(r_edx*4+0x9c050cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a63fb: push dword ptr [ecx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a63ff: push dword ptr [ecx + esi*8 + 8] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a6403: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a6404: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5a6409u); f_00608470();
    /* 005a6409: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a640c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a640f: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a6412: jge 0x5a641c */ if ((fS==fO)) goto L_005a641c;
L_005a6414:; BB(0x005a6414);
    /* 005a6414: mov edx, dword ptr [0xa747e8] */ r_edx = R32((u32)(0xa747e8u));
    /* 005a641a: jmp 0x5a63d3 */ goto L_005a63d3;
L_005a641c:; BB(0x005a641c);
    /* 005a641c: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a641f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a6422: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a6425: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6428: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a642f: mov esp, ebp */ r_esp = r_ebp;
    /* 005a6431: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a6432: ret  */ FN_RET(0x005a60cc); r_esp += 4; return;
L_005a6433:; BB(0x005a6433);
    /* 005a6433: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a6435: jmp 0x5a6208 */ goto L_005a6208;
L_005a643a:; BB(0x005a643a);
    /* 005a643a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a643c: jmp 0x5a61b1 */ goto L_005a61b1;
L_005a6441:; BB(0x005a6441);
    /* 005a6441: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a6443: jmp 0x5a613c */ goto L_005a613c;
}

void f_005a6448(void) /* sub_5A6448 */
{
    FN_ENTER(0x005a6448);
    /* 005a6448: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a6449: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a644a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a644b: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a644e: mov edi, ecx */ r_edi = r_ecx;
    /* 005a6450: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 005a6456: fcomp dword ptr [0x92a100] */ fx_compare(ST(0), R_F32((u32)(0x92a100u))); FPOP();
    /* 005a645c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a645e: mov edx, dword ptr [edi + 0xc0] */ r_edx = R32((u32)(r_edi+0xc0u));
    /* 005a6464: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a6465: jae 0x5a64f0 */ if (!fC) goto L_005a64f0;
L_005a646b:; BB(0x005a646b);
    /* 005a646b: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 005a6472: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6475: jne 0x5a6489 */ if (!fZ) goto L_005a6489;
L_005a6477:; BB(0x005a6477);
    /* 005a6477: mov ecx, dword ptr [0xa747ec] */ r_ecx = R32((u32)(0xa747ecu));
    /* 005a647d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a647e: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x5a6483u); f_00579de0();
    /* 005a6483: mov ebp, eax */ r_ebp = r_eax;
    /* 005a6485: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005a6487: jmp 0x5a64a1 */ goto L_005a64a1;
L_005a6489:; BB(0x005a6489);
    /* 005a6489: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a648c: jne 0x5a64f0 */ if (!fZ) goto L_005a64f0;
L_005a648e:; BB(0x005a648e);
    /* 005a648e: mov ecx, dword ptr [0xa747f0] */ r_ecx = R32((u32)(0xa747f0u));
    /* 005a6494: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6495: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x5a649au); f_00579de0();
    /* 005a649a: mov ebp, eax */ r_ebp = r_eax;
    /* 005a649c: mov ebx, 1 */ r_ebx = 0x1u;
L_005a64a1:; BB(0x005a64a1);
    /* 005a64a1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a64a3: je 0x5a64f0 */ if (fZ) goto L_005a64f0;
L_005a64a5:; BB(0x005a64a5);
    /* 005a64a5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5a64aau); f_0082d7b0();
    /* 005a64aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a64ac: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x5a64b1u); f_00830cd8();
    /* 005a64b1: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 005a64b4: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5a64b9u); f_0082d838();
    /* 005a64b9: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005a64bc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a64be: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5a64c3u); f_0082d8bc();
    /* 005a64c3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a64c6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a64c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a64c9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a64cb: mov edx, ebp */ r_edx = r_ebp;
    /* 005a64cd: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x5a64d2u); f_0082f940();
    /* 005a64d2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5a64d7u); f_0082da80();
    /* 005a64d7: mov ecx, dword ptr [edi + ebx*4 + 0x3b0] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0x3b0u));
    /* 005a64de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a64e0: je 0x5a64f0 */ if (fZ) goto L_005a64f0;
L_005a64e2:; BB(0x005a64e2);
    /* 005a64e2: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005a64e5: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005a64e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a64ea: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005a64ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a64ed: call dword ptr [ebx + 0x10] */ { u32 t = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, 0x5a64f0u); call_ind(t); }
L_005a64f0:; BB(0x005a64f0);
    /* 005a64f0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a64f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a64f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a64f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a64f6: ret  */ FN_RET(0x005a6448); r_esp += 4; return;
}

void f_005a64f8(void) /* sub_5A64F8 */
{
    FN_ENTER(0x005a64f8);
    /* 005a64f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a64f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005a64fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a64fd: call 0x5a651c */ r_esp -= 4; W32(r_esp, 0x5a6502u); f_005a651c();
    /* 005a6502: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a6506: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a6508: jne 0x5a650e */ if (!fZ) goto L_005a650e;
L_005a650a:; BB(0x005a650a);
    /* 005a650a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a650b: ret 4 */ FN_RET(0x005a64f8); r_esp += 8; return;
L_005a650e:; BB(0x005a650e);
    /* 005a650e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a650f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5a6514u); f_005c2f74();
    /* 005a6514: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a6515: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a6516: ret 4 */ FN_RET(0x005a64f8); r_esp += 8; return;
}

void f_005a651c(void) /* sub_5A651C */
{
    FN_ENTER(0x005a651c);
    /* 005a651c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a651d: mov ebp, esp */ r_ebp = r_esp;
    /* 005a651f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a6521: push 0x8d8ab8 */ { u32 v = 0x8d8ab8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6526: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a652c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a652d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a6534: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a6537: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a653a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005a653d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005a6540: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005a6543: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005a6546: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005a654d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a6550: mov edx, dword ptr [eax + 0x4c8] */ r_edx = R32((u32)(r_eax+0x4c8u));
    /* 005a6556: mov dword ptr [eax], 0xb0a9c0 */ W32((u32)(r_eax), 0xb0a9c0u);
    /* 005a655c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a655e: je 0x5a657a */ if (fZ) goto L_005a657a;
L_005a6560:; BB(0x005a6560);
    /* 005a6560: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005a6564: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a6569: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005a656d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a6570: mov dword ptr [eax + 0x4c8], 0 */ W32((u32)(r_eax+0x4c8u), 0x0u);
L_005a657a:; BB(0x005a657a);
    /* 005a657a: mov edx, dword ptr [eax + 0x4cc] */ r_edx = R32((u32)(r_eax+0x4ccu));
    /* 005a6580: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6582: je 0x5a659e */ if (fZ) goto L_005a659e;
L_005a6584:; BB(0x005a6584);
    /* 005a6584: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005a6588: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a658d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005a6591: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a6594: mov dword ptr [eax + 0x4cc], 0 */ W32((u32)(r_eax+0x4ccu), 0x0u);
L_005a659e:; BB(0x005a659e);
    /* 005a659e: mov edx, dword ptr [eax + 0x4d0] */ r_edx = R32((u32)(r_eax+0x4d0u));
    /* 005a65a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a65a6: je 0x5a65c2 */ if (fZ) goto L_005a65c2;
L_005a65a8:; BB(0x005a65a8);
    /* 005a65a8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005a65ac: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a65b1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005a65b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a65b8: mov dword ptr [eax + 0x4d0], 0 */ W32((u32)(r_eax+0x4d0u), 0x0u);
L_005a65c2:; BB(0x005a65c2);
    /* 005a65c2: mov edx, dword ptr [eax + 0x4ac] */ r_edx = R32((u32)(r_eax+0x4acu));
    /* 005a65c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a65ca: je 0x5a65e6 */ if (fZ) goto L_005a65e6;
L_005a65cc:; BB(0x005a65cc);
    /* 005a65cc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005a65d0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a65d5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005a65d9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a65dc: mov dword ptr [eax + 0x4ac], 0 */ W32((u32)(r_eax+0x4acu), 0x0u);
L_005a65e6:; BB(0x005a65e6);
    /* 005a65e6: mov ecx, dword ptr [eax + 0x4a8] */ r_ecx = R32((u32)(r_eax+0x4a8u));
    /* 005a65ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a65ee: je 0x5a6606 */ if (fZ) goto L_005a6606;
L_005a65f0:; BB(0x005a65f0);
    /* 005a65f0: je 0x5a65fc */ if (fZ) goto L_005a65fc;
L_005a65f2:; BB(0x005a65f2);
    /* 005a65f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a65f4: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x5a65f9u); f_00418aa8();
    /* 005a65f9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_005a65fc:; BB(0x005a65fc);
    /* 005a65fc: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_005a6606:; BB(0x005a6606);
    /* 005a6606: mov ecx, dword ptr [eax + 0x4a0] */ r_ecx = R32((u32)(r_eax+0x4a0u));
    /* 005a660c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a660e: je 0x5a6625 */ if (fZ) goto L_005a6625;
L_005a6610:; BB(0x005a6610);
    /* 005a6610: je 0x5a661b */ if (fZ) goto L_005a661b;
L_005a6612:; BB(0x005a6612);
    /* 005a6612: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6614: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a6616: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5a6618u); call_ind(t); }
    /* 005a6618: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_005a661b:; BB(0x005a661b);
    /* 005a661b: mov dword ptr [eax + 0x4a0], 0 */ W32((u32)(r_eax+0x4a0u), 0x0u);
L_005a6625:; BB(0x005a6625);
    /* 005a6625: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 005a662b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a662d: je 0x5a6644 */ if (fZ) goto L_005a6644;
L_005a662f:; BB(0x005a662f);
    /* 005a662f: je 0x5a663a */ if (fZ) goto L_005a663a;
L_005a6631:; BB(0x005a6631);
    /* 005a6631: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6633: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a6635: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5a6637u); call_ind(t); }
    /* 005a6637: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_005a663a:; BB(0x005a663a);
    /* 005a663a: mov dword ptr [eax + 0x49c], 0 */ W32((u32)(r_eax+0x49cu), 0x0u);
L_005a6644:; BB(0x005a6644);
    /* 005a6644: mov ecx, dword ptr [eax + 0x4a4] */ r_ecx = R32((u32)(r_eax+0x4a4u));
    /* 005a664a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a664c: je 0x5a6673 */ if (fZ) goto L_005a6673;
L_005a664e:; BB(0x005a664e);
    /* 005a664e: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5a6653u); f_007b9c8c();
    /* 005a6653: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a6656: mov ecx, dword ptr [eax + 0x4a4] */ r_ecx = R32((u32)(r_eax+0x4a4u));
    /* 005a665c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a665e: je 0x5a6669 */ if (fZ) goto L_005a6669;
L_005a6660:; BB(0x005a6660);
    /* 005a6660: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6662: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a6664: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5a6666u); call_ind(t); }
    /* 005a6666: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_005a6669:; BB(0x005a6669);
    /* 005a6669: mov dword ptr [eax + 0x4a4], 0 */ W32((u32)(r_eax+0x4a4u), 0x0u);
L_005a6673:; BB(0x005a6673);
    /* 005a6673: mov ecx, eax */ r_ecx = r_eax;
    /* 005a6675: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5a667au); f_007b9c8c();
    /* 005a667a: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005a6681: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005a6686: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a6689: add eax, 0x3f8 */ {  u32 a = r_eax; u32 b = 0x3f8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a668e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6690: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a6692: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6693: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x5a6698u); f_008586d6();
    /* 005a6698: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a669f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a66a2: add ecx, 0x3dc */ {  u32 a = r_ecx; u32 b = 0x3dcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a66a8: call 0x5122a8 */ r_esp -= 4; W32(r_esp, 0x5a66adu); f_005122a8();
    /* 005a66ad: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a66b0: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x5a66b5u); f_0051f4fc();
    /* 005a66b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a66b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a66bf: mov esp, ebp */ r_esp = r_ebp;
    /* 005a66c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a66c2: ret  */ FN_RET(0x005a651c); r_esp += 4; return;
}

void f_005a66c4(void) /* sub_5A66C4 */
{
    FN_ENTER(0x005a66c4);
    /* 005a66c4: mov eax, dword ptr [0xa74824] */ r_eax = R32((u32)(0xa74824u));
    /* 005a66c9: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a66cc: je 0x5a6707 */ if (fZ) goto L_005a6707;
L_005a66ce:; BB(0x005a66ce);
    /* 005a66ce: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a66d1: je 0x5a66dd */ if (fZ) goto L_005a66dd;
L_005a66d3:; BB(0x005a66d3);
    /* 005a66d3: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a66d6: je 0x5a66dd */ if (fZ) goto L_005a66dd;
L_005a66d8:; BB(0x005a66d8);
    /* 005a66d8: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a66db: jne 0x5a66fe */ if (!fZ) goto L_005a66fe;
L_005a66dd:; BB(0x005a66dd);
    /* 005a66dd: mov edx, dword ptr [0xa7481c] */ r_edx = R32((u32)(0xa7481cu));
    /* 005a66e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a66e4: lea eax, [edx + 0xc] */ r_eax = (u32)(r_edx+0xcu);
    /* 005a66e7: mov dword ptr [0xa7481c], eax */ W32((u32)(0xa7481cu), r_eax);
    /* 005a66ec: push 0xa747f8 */ { u32 v = 0xa747f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a66f1: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x5a66f6u); f_00520c5c();
    /* 005a66f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a66f9: mov eax, dword ptr [0xa74824] */ r_eax = R32((u32)(0xa74824u));
L_005a66fe:; BB(0x005a66fe);
    /* 005a66fe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a6701: mov dword ptr [0xa74824], eax */ W32((u32)(0xa74824u), r_eax);
    /* 005a6706: ret  */ FN_RET(0x005a66c4); r_esp += 4; return;
L_005a6707:; BB(0x005a6707);
    /* 005a6707: mov edx, dword ptr [0xa74820] */ r_edx = R32((u32)(0xa74820u));
    /* 005a670d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a670f: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5a6714u); f_0082e9e4();
    /* 005a6714: mov eax, dword ptr [0xa74824] */ r_eax = R32((u32)(0xa74824u));
    /* 005a6719: jmp 0x5a66fe */ goto L_005a66fe;
}

void f_005a671c(void) /* sub_5A671C */
{
    FN_ENTER(0x005a671c);
    /* 005a671c: mov ecx, dword ptr [0xa74818] */ r_ecx = R32((u32)(0xa74818u));
    /* 005a6722: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a6724: je 0x5a6739 */ if (fZ) goto L_005a6739;
L_005a6726:; BB(0x005a6726);
    /* 005a6726: je 0x5a672f */ if (fZ) goto L_005a672f;
L_005a6728:; BB(0x005a6728);
    /* 005a6728: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a672a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5a672fu); f_004066a8();
L_005a672f:; BB(0x005a672f);
    /* 005a672f: mov dword ptr [0xa74818], 0 */ W32((u32)(0xa74818u), 0x0u);
L_005a6739:; BB(0x005a6739);
    /* 005a6739: ret  */ FN_RET(0x005a671c); r_esp += 4; return;
}

void f_005a673c(void)
{
    FN_ENTER(0x005a673c);
    /* 005a673c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a673d: mov ebp, esp */ r_ebp = r_esp;
    /* 005a673f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a6741: push 0x8d8ae0 */ { u32 v = 0x8d8ae0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6746: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a674c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a674d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a6754: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a6757: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a675a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005a675d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005a6760: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005a6763: push 0x504 */ { u32 v = 0x504u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6768: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005a676f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5a6774u); f_005caba4();
    /* 005a6774: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a6775: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005a6778: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a677a: je 0x5a67b3 */ if (fZ) goto L_005a67b3;
L_005a677c:; BB(0x005a677c);
    /* 005a677c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005a6783: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a678a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a678d: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a6793: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a6796: call 0x5a67b8 */ r_esp -= 4; W32(r_esp, 0x5a679bu); f_005a67b8();
    /* 005a679b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a679e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005a67a5:; BB(0x005a67a5);
    /* 005a67a5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a67a8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a67af: mov esp, ebp */ r_esp = r_ebp;
    /* 005a67b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a67b2: ret  */ FN_RET(0x005a673c); r_esp += 4; return;
L_005a67b3:; BB(0x005a67b3);
    /* 005a67b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a67b5: jmp 0x5a67a5 */ goto L_005a67a5;
}

void f_005a67b8(void) /* sub_5A67B8 */
{
    FN_ENTER(0x005a67b8);
    /* 005a67b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a67b9: mov ebp, esp */ r_ebp = r_esp;
    /* 005a67bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a67bd: push 0x8d8b30 */ { u32 v = 0x8d8b30u; r_esp -= 4; W32(r_esp, v); }
    /* 005a67c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a67c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a67c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a67d0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a67d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a67d6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005a67d9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005a67dc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005a67df: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a67e2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a67e5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005a67e8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a67eb: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x5a67f0u); f_005216f4();
    /* 005a67f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a67f7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a67fa: mov dword ptr [ecx], 0xb0a9c0 */ W32((u32)(r_ecx), 0xb0a9c0u);
    /* 005a6800: add ecx, 0x3dc */ {  u32 a = r_ecx; u32 b = 0x3dcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a6806: call 0x5122f8 */ r_esp -= 4; W32(r_esp, 0x5a680bu); f_005122f8();
    /* 005a680b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a6812: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005a6817: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a681c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a681f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6821: add eax, 0x3f8 */ {  u32 a = r_eax; u32 b = 0x3f8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a6826: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a6828: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6829: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x5a682eu); f_00858736();
    /* 005a682e: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005a6835: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a6838: mov eax, dword ptr [0x9c0c48] */ r_eax = R32((u32)(0x9c0c48u));
    /* 005a683d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a6840: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6841: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005a6844: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x5a6849u); f_0051f750();
    /* 005a6849: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a684c: mov eax, dword ptr [edx + 0x370] */ r_eax = R32((u32)(r_edx+0x370u));
    /* 005a6852: mov dword ptr [edx + 0x4d8], 0 */ W32((u32)(r_edx+0x4d8u), 0x0u);
    /* 005a685c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a685e: je 0x5a691f */ if (fZ) goto L_005a691f;
L_005a6864:; BB(0x005a6864);
    /* 005a6864: mov dword ptr [edx + 0x4d8], 1 */ W32((u32)(r_edx+0x4d8u), 0x1u);
    /* 005a686e: mov eax, 1 */ r_eax = 0x1u;
L_005a6873:; BB(0x005a6873);
    /* 005a6873: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6875: je 0x5a68bc */ if (fZ) goto L_005a68bc;
L_005a6877:; BB(0x005a6877);
    /* 005a6877: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6879: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5a687eu); f_0077a684();
    /* 005a687e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a6881: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6883: mov dword ptr [edx + 0x4f4], eax */ W32((u32)(r_edx+0x4f4u), r_eax);
    /* 005a6889: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5a688eu); f_0077a698();
    /* 005a688e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a6891: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6893: mov dword ptr [edx + 0x4f8], eax */ W32((u32)(r_edx+0x4f8u), r_eax);
    /* 005a6899: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5a689eu); f_0077a6b4();
    /* 005a689e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a68a1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005a68a3: mov dword ptr [edx + 0x4fc], eax */ W32((u32)(r_edx+0x4fcu), r_eax);
    /* 005a68a9: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5a68aeu); f_0077a6cc();
    /* 005a68ae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a68b1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a68b4: mov dword ptr [ecx + 0x500], eax */ W32((u32)(r_ecx+0x500u), r_eax);
    /* 005a68ba: jmp 0x5a68ff */ goto L_005a68ff;
L_005a68bc:; BB(0x005a68bc);
    /* 005a68bc: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005a68be: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5a68c3u); f_0077a684();
    /* 005a68c3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a68c6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005a68c8: mov dword ptr [edx + 0x4f4], eax */ W32((u32)(r_edx+0x4f4u), r_eax);
    /* 005a68ce: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5a68d3u); f_0077a698();
    /* 005a68d3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a68d6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005a68d8: mov dword ptr [edx + 0x4f8], eax */ W32((u32)(r_edx+0x4f8u), r_eax);
    /* 005a68de: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5a68e3u); f_0077a6b4();
    /* 005a68e3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a68e6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005a68e8: mov dword ptr [edx + 0x4fc], eax */ W32((u32)(r_edx+0x4fcu), r_eax);
    /* 005a68ee: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5a68f3u); f_0077a6cc();
    /* 005a68f3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a68f6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a68f9: mov dword ptr [ecx + 0x500], eax */ W32((u32)(r_ecx+0x500u), r_eax);
L_005a68ff:; BB(0x005a68ff);
    /* 005a68ff: call 0x5a6958 */ r_esp -= 4; W32(r_esp, 0x5a6904u); f_005a6958();
    /* 005a6904: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a6907: call 0x5a9c58 */ r_esp -= 4; W32(r_esp, 0x5a690cu); f_005a9c58();
    /* 005a690c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a690f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6912: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a6919: mov esp, ebp */ r_esp = r_ebp;
    /* 005a691b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a691c: ret 8 */ FN_RET(0x005a67b8); r_esp += 12; return;
L_005a691f:; BB(0x005a691f);
    /* 005a691f: movsx eax, word ptr [edx + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2cu));
    /* 005a6923: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6924: call 0x813038 */ r_esp -= 4; W32(r_esp, 0x5a6929u); f_00813038();
    /* 005a6929: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a692a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a692d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a692f: je 0x5a6945 */ if (fZ) goto L_005a6945;
L_005a6931:; BB(0x005a6931);
    /* 005a6931: mov dword ptr [edx + 0x4d8], 1 */ W32((u32)(r_edx+0x4d8u), 0x1u);
    /* 005a693b: mov eax, 1 */ r_eax = 0x1u;
    /* 005a6940: jmp 0x5a6873 */ goto L_005a6873;
L_005a6945:; BB(0x005a6945);
    /* 005a6945: mov dword ptr [edx + 0x4d8], 0 */ W32((u32)(r_edx+0x4d8u), 0x0u);
    /* 005a694f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a6951: jmp 0x5a6873 */ goto L_005a6873;
}

void f_005a6958(void) /* sub_5A6958 */
{
    FN_ENTER(0x005a6958);
    /* 005a6958: fld dword ptr [0x92a3f8] */ FPUSH(R_F32((u32)(0x92a3f8u)));
    /* 005a695e: fld dword ptr [0x92a3f4] */ FPUSH(R_F32((u32)(0x92a3f4u)));
    /* 005a6964: fadd dword ptr [ecx + 0x364] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x364u));
    /* 005a696a: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 005a6970: fld dword ptr [0x92a3ec] */ FPUSH(R_F32((u32)(0x92a3ecu)));
    /* 005a6976: fld dword ptr [0x92a3f0] */ FPUSH(R_F32((u32)(0x92a3f0u)));
    /* 005a697c: fadd dword ptr [ecx + 0x36c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x36cu));
    /* 005a6982: fld dword ptr [ecx + 0x360] */ FPUSH(R_F32((u32)(r_ecx+0x360u)));
    /* 005a6988: fld dword ptr [ecx + 0x368] */ FPUSH(R_F32((u32)(r_ecx+0x368u)));
    /* 005a698e: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005a6990: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 005a6992: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a6994: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005a6996: fstp dword ptr [ecx + 0x4c0] */ W_F32((u32)(r_ecx+0x4c0u), ST(0)); FPOP();
    /* 005a699c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005a699e: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 005a69a0: fstp dword ptr [ecx + 0x4b0] */ W_F32((u32)(r_ecx+0x4b0u), ST(0)); FPOP();
    /* 005a69a6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005a69a8: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 005a69aa: fstp dword ptr [ecx + 0x4b4] */ W_F32((u32)(r_ecx+0x4b4u), ST(0)); FPOP();
    /* 005a69b0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005a69b2: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005a69b4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a69b6: fstp dword ptr [ecx + 0x4bc] */ W_F32((u32)(r_ecx+0x4bcu), ST(0)); FPOP();
    /* 005a69bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a69bd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a69bf: ja 0x5a69c3 */ if ((!fC&&!fZ)) goto L_005a69c3;
L_005a69c1:; BB(0x005a69c1);
    /* 005a69c1: fst st(1) */ ST(1) = ST(0);
L_005a69c3:; BB(0x005a69c3);
    /* 005a69c3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a69c5: fstp dword ptr [ecx + 0x4b8] */ W_F32((u32)(r_ecx+0x4b8u), ST(0)); FPOP();
    /* 005a69cb: mov dword ptr [ecx + 0x4c4], 1 */ W32((u32)(r_ecx+0x4c4u), 0x1u);
    /* 005a69d5: ret  */ FN_RET(0x005a6958); r_esp += 4; return;
}

void f_005a69d8(void) /* sub_5A69D8 */
{
    FN_ENTER(0x005a69d8);
    /* 005a69d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a69d9: mov edi, ecx */ r_edi = r_ecx;
    /* 005a69db: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5a69e0u); f_004f7c84();
    /* 005a69e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a69e2: je 0x5a69f0 */ if (fZ) goto L_005a69f0;
L_005a69e4:; BB(0x005a69e4);
    /* 005a69e4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a69e6: mov ecx, edi */ r_ecx = r_edi;
    /* 005a69e8: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x5a69eeu); call_ind(t); }
    /* 005a69ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a69ef: ret  */ FN_RET(0x005a69d8); r_esp += 4; return;
L_005a69f0:; BB(0x005a69f0);
    /* 005a69f0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a69f2: mov ecx, edi */ r_ecx = r_edi;
    /* 005a69f4: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x5a69fau); call_ind(t); }
    /* 005a69fa: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a69fd: je 0x5a6a09 */ if (fZ) goto L_005a6a09;
L_005a69ff:; BB(0x005a69ff);
    /* 005a69ff: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a6a01: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6a03: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x5a6a09u); call_ind(t); }
L_005a6a09:; BB(0x005a6a09);
    /* 005a6a09: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6a0b: call 0x5a6a40 */ r_esp -= 4; W32(r_esp, 0x5a6a10u); f_005a6a40();
    /* 005a6a10: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 005a6a16: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6a1b: je 0x5a6a24 */ if (fZ) goto L_005a6a24;
L_005a6a1d:; BB(0x005a6a1d);
    /* 005a6a1d: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_005a6a24:; BB(0x005a6a24);
    /* 005a6a24: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6a26: call 0x5a6ba0 */ r_esp -= 4; W32(r_esp, 0x5a6a2bu); f_005a6ba0();
    /* 005a6a2b: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6a2d: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x5a6a32u); f_006401f0();
    /* 005a6a32: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a6a34: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6a36: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x5a6a3cu); call_ind(t); }
    /* 005a6a3c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a6a3d: ret  */ FN_RET(0x005a69d8); r_esp += 4; return;
}

void f_005a6a40(void) /* sub_5A6A40 */
{
    FN_ENTER(0x005a6a40);
    /* 005a6a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a6a41: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a6a44: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a6a46: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 005a6a4c: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a6a4e: je 0x5a6af9 */ if (fZ) goto L_005a6af9;
L_005a6a54:; BB(0x005a6a54);
    /* 005a6a54: mov edx, dword ptr [ebp + 0x498] */ r_edx = R32((u32)(r_ebp+0x498u));
    /* 005a6a5a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a6a5c: jg 0x5a6a6c */ if ((!fZ&&fS==fO)) goto L_005a6a6c;
L_005a6a5e:; BB(0x005a6a5e);
    /* 005a6a5e: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a6a61: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 005a6a67: jmp 0x5a6aeb */ goto L_005a6aeb;
L_005a6a6c:; BB(0x005a6a6c);
    /* 005a6a6c: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 005a6a6f: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 005a6a72: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005a6a75: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 005a6a78: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005a6a7c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005a6a80: fadd dword ptr [0x92a3e8] */ ST(0) = ST(0) + R_F32((u32)(0x92a3e8u));
    /* 005a6a86: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005a6a8a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005a6a8e: mov eax, dword ptr [ebp + 0x4d8] */ r_eax = R32((u32)(r_ebp+0x4d8u));
    /* 005a6a94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6a96: je 0x5a6ab7 */ if (fZ) goto L_005a6ab7;
L_005a6a98:; BB(0x005a6a98);
    /* 005a6a98: mov ecx, dword ptr [ebp + 0x4cc] */ r_ecx = R32((u32)(r_ebp+0x4ccu));
    /* 005a6a9e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6aa0: je 0x5a6b40 */ if (fZ) goto L_005a6b40;
L_005a6aa6:; BB(0x005a6aa6);
    /* 005a6aa6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a6aa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6aaa: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5a6aafu); f_00508db8();
    /* 005a6aaf: mov edx, dword ptr [ebp + 0x498] */ r_edx = R32((u32)(r_ebp+0x498u));
    /* 005a6ab5: jmp 0x5a6aeb */ goto L_005a6aeb;
L_005a6ab7:; BB(0x005a6ab7);
    /* 005a6ab7: mov ecx, dword ptr [ebp + 0x4cc] */ r_ecx = R32((u32)(r_ebp+0x4ccu));
    /* 005a6abd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6abf: je 0x5a6b81 */ if (fZ) goto L_005a6b81;
L_005a6ac5:; BB(0x005a6ac5);
    /* 005a6ac5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a6ac8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6ac9: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5a6aceu); f_00508db8();
L_005a6ace:; BB(0x005a6ace);
    /* 005a6ace: mov ecx, dword ptr [ebp + 0x4d0] */ r_ecx = R32((u32)(r_ebp+0x4d0u));
    /* 005a6ad4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6ad6: je 0x5a6b5f */ if (fZ) goto L_005a6b5f;
L_005a6adc:; BB(0x005a6adc);
    /* 005a6adc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a6adf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6ae0: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5a6ae5u); f_00508db8();
    /* 005a6ae5: mov edx, dword ptr [ebp + 0x498] */ r_edx = R32((u32)(r_ebp+0x498u));
L_005a6aeb:; BB(0x005a6aeb);
    /* 005a6aeb: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a6aee: mov dword ptr [ebp + 0x498], edx */ W32((u32)(r_ebp+0x498u), r_edx);
    /* 005a6af4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a6af7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a6af8: ret  */ FN_RET(0x005a6a40); r_esp += 4; return;
L_005a6af9:; BB(0x005a6af9);
    /* 005a6af9: mov edx, dword ptr [ebp + 0x4cc] */ r_edx = R32((u32)(r_ebp+0x4ccu));
    /* 005a6aff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6b01: je 0x5a6b1a */ if (fZ) goto L_005a6b1a;
L_005a6b03:; BB(0x005a6b03);
    /* 005a6b03: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005a6b07: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a6b0c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005a6b10: mov dword ptr [ebp + 0x4cc], 0 */ W32((u32)(r_ebp+0x4ccu), 0x0u);
L_005a6b1a:; BB(0x005a6b1a);
    /* 005a6b1a: mov edx, dword ptr [ebp + 0x4d0] */ r_edx = R32((u32)(r_ebp+0x4d0u));
    /* 005a6b20: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6b22: je 0x5a6b3b */ if (fZ) goto L_005a6b3b;
L_005a6b24:; BB(0x005a6b24);
    /* 005a6b24: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005a6b28: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a6b2d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005a6b31: mov dword ptr [ebp + 0x4d0], 0 */ W32((u32)(r_ebp+0x4d0u), 0x0u);
L_005a6b3b:; BB(0x005a6b3b);
    /* 005a6b3b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a6b3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a6b3f: ret  */ FN_RET(0x005a6a40); r_esp += 4; return;
L_005a6b40:; BB(0x005a6b40);
    /* 005a6b40: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a6b43: push 0x216 */ { u32 v = 0x216u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6b48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6b49: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5a6b4eu); f_00509590();
    /* 005a6b4e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6b51: mov edx, dword ptr [ebp + 0x498] */ r_edx = R32((u32)(r_ebp+0x498u));
    /* 005a6b57: mov dword ptr [ebp + 0x4cc], eax */ W32((u32)(r_ebp+0x4ccu), r_eax);
    /* 005a6b5d: jmp 0x5a6aeb */ goto L_005a6aeb;
L_005a6b5f:; BB(0x005a6b5f);
    /* 005a6b5f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a6b62: push 0x219 */ { u32 v = 0x219u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6b67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6b68: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5a6b6du); f_00509590();
    /* 005a6b6d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6b70: mov edx, dword ptr [ebp + 0x498] */ r_edx = R32((u32)(r_ebp+0x498u));
    /* 005a6b76: mov dword ptr [ebp + 0x4d0], eax */ W32((u32)(r_ebp+0x4d0u), r_eax);
    /* 005a6b7c: jmp 0x5a6aeb */ goto L_005a6aeb;
L_005a6b81:; BB(0x005a6b81);
    /* 005a6b81: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a6b84: push 0x215 */ { u32 v = 0x215u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6b89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6b8a: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5a6b8fu); f_00509590();
    /* 005a6b8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6b92: mov dword ptr [ebp + 0x4cc], eax */ W32((u32)(r_ebp+0x4ccu), r_eax);
    /* 005a6b98: jmp 0x5a6ace */ goto L_005a6ace;
}

void f_005a6ba0(void) /* sub_5A6BA0 */
{
    FN_ENTER(0x005a6ba0);
    /* 005a6ba0: fld dword ptr [0x92a3e4] */ FPUSH(R_F32((u32)(0x92a3e4u)));
    /* 005a6ba6: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 005a6ba9: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 005a6bac: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005a6baf: fst dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0));
    /* 005a6bb5: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 005a6bb8: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 005a6bbe: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 005a6bc4: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 005a6bc7: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 005a6bca: ret  */ FN_RET(0x005a6ba0); r_esp += 4; return;
}

void f_005a6bcc(void) /* sub_5A6BCC */
{
    FN_ENTER(0x005a6bcc);
    /* 005a6bcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a6bcd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a6bce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a6bcf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6bd0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a6bd3: mov edi, ecx */ r_edi = r_ecx;
    /* 005a6bd5: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5a6bdau); f_004f7c84();
    /* 005a6bda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6bdc: je 0x5a6bf0 */ if (fZ) goto L_005a6bf0;
L_005a6bde:; BB(0x005a6bde);
    /* 005a6bde: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a6be0: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6be2: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x5a6be8u); call_ind(t); }
    /* 005a6be8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a6beb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a6bec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a6bed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a6bee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a6bef: ret  */ FN_RET(0x005a6bcc); r_esp += 4; return;
L_005a6bf0:; BB(0x005a6bf0);
    /* 005a6bf0: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 005a6bf6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a6bf8: jne 0x5a6e08 */ if (!fZ) goto L_005a6e08;
L_005a6bfe:; BB(0x005a6bfe);
    /* 005a6bfe: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x5a6c03u); f_00694cc8();
    /* 005a6c03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6c05: je 0x5a6c39 */ if (fZ) goto L_005a6c39;
L_005a6c07:; BB(0x005a6c07);
    /* 005a6c07: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a6c0cu); f_00807ac0();
    /* 005a6c0c: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6c0f: je 0x5a6e58 */ if (fZ) goto L_005a6e58;
L_005a6c15:; BB(0x005a6c15);
    /* 005a6c15: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6c1a: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6c1c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a6c1e: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a6c24: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a6c2a: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5a6c2du); call_ind(t); }
    /* 005a6c2d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_005a6c30:; BB(0x005a6c30);
    /* 005a6c30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6c32: jne 0x5a6c5a */ if (!fZ) goto L_005a6c5a;
L_005a6c34:; BB(0x005a6c34);
    /* 005a6c34: jmp 0x5a6e08 */ goto L_005a6e08;
L_005a6c39:; BB(0x005a6c39);
    /* 005a6c39: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6c3e: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6c40: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a6c42: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6c47: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x5a6c4au); call_ind(t); }
    /* 005a6c4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6c4c: je 0x5a6e08 */ if (fZ) goto L_005a6e08;
L_005a6c52:; BB(0x005a6c52);
    /* 005a6c52: mov eax, 1 */ r_eax = 0x1u;
    /* 005a6c57: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_005a6c5a:; BB(0x005a6c5a);
    /* 005a6c5a: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6c5c: call 0x5a6e84 */ r_esp -= 4; W32(r_esp, 0x5a6c61u); f_005a6e84();
    /* 005a6c61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6c63: jne 0x5a6e50 */ if (!fZ) goto L_005a6e50;
L_005a6c69:; BB(0x005a6c69);
    /* 005a6c69: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 005a6c6f: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6c74: jne 0x5a6cad */ if (!fZ) goto L_005a6cad;
L_005a6c76:; BB(0x005a6c76);
    /* 005a6c76: fld dword ptr [edi + 0x4d4] */ FPUSH(R_F32((u32)(r_edi+0x4d4u)));
    /* 005a6c7c: fcomp dword ptr [0x92a3d4] */ fx_compare(ST(0), R_F32((u32)(0x92a3d4u))); FPOP();
    /* 005a6c82: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a6c84: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a6c85: jb 0x5a6cad */ if (fC) goto L_005a6cad;
L_005a6c87:; BB(0x005a6c87);
    /* 005a6c87: mov dword ptr [esp + 4], 0x40a00000 */ W32((u32)(r_esp+0x4u), 0x40a00000u);
    /* 005a6c8f: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 005a6c93: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6c95: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 005a6c9d: mov dword ptr [esp + 0xc], 0x41200000 */ W32((u32)(r_esp+0xcu), 0x41200000u);
    /* 005a6ca5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6ca7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6ca8: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x5a6cadu); f_00520cf8();
L_005a6cad:; BB(0x005a6cad);
    /* 005a6cad: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6caf: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x5a6cb4u); f_00520608();
    /* 005a6cb4: mov ebx, dword ptr [0xaf034c] */ r_ebx = R32((u32)(0xaf034cu));
    /* 005a6cba: mov eax, dword ptr [edi + 0x48c] */ r_eax = R32((u32)(r_edi+0x48cu));
    /* 005a6cc0: mov dword ptr [0xa74824], 0 */ W32((u32)(0xa74824u), 0x0u);
    /* 005a6cca: lea edx, [edi + 0x468] */ r_edx = (u32)(r_edi+0x468u);
    /* 005a6cd0: mov dword ptr [0xa74820], eax */ W32((u32)(0xa74820u), r_eax);
    /* 005a6cd5: mov dword ptr [0xa7481c], edx */ W32((u32)(0xa7481cu), r_edx);
    /* 005a6cdb: mov dword ptr [0xaab518], ebx */ W32((u32)(0xaab518u), r_ebx);
    /* 005a6ce1: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x5a6ce6u); f_00520d08();
    /* 005a6ce6: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5a6cebu); f_00578b38();
    /* 005a6ceb: mov ebp, 1 */ r_ebp = 0x1u;
    /* 005a6cf0: lea esi, [edi + 0x3f8] */ r_esi = (u32)(r_edi+0x3f8u);
    /* 005a6cf6: mov ecx, esi */ r_ecx = r_esi;
    /* 005a6cf8: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x5a6cfdu); f_005771a4();
    /* 005a6cfd: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x5a6d02u); f_007bb6d0();
    /* 005a6d02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6d03: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5a6d08u); f_0068d5a8();
    /* 005a6d08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a6d09: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 005a6d0f: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a6d12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6d13: mov ecx, esi */ r_ecx = r_esi;
    /* 005a6d15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a6d16: call 0x5772e0 */ r_esp -= 4; W32(r_esp, 0x5a6d1bu); f_005772e0();
    /* 005a6d1b: mov ebx, eax */ r_ebx = r_eax;
    /* 005a6d1d: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 005a6d23: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a6d26: jne 0x5a6d46 */ if (!fZ) goto L_005a6d46;
L_005a6d28:; BB(0x005a6d28);
    /* 005a6d28: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6d2a: je 0x5a6d62 */ if (fZ) goto L_005a6d62;
L_005a6d2c:; BB(0x005a6d2c);
    /* 005a6d2c: mov edx, dword ptr [edi + 0x3f8] */ r_edx = R32((u32)(r_edi+0x3f8u));
    /* 005a6d32: mov ecx, esi */ r_ecx = r_esi;
    /* 005a6d34: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5a6d37u); call_ind(t); }
    /* 005a6d37: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6d39: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x5a6d3eu); f_008173d0();
    /* 005a6d3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6d40: je 0x5a6d62 */ if (fZ) goto L_005a6d62;
L_005a6d42:; BB(0x005a6d42);
    /* 005a6d42: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005a6d44: jmp 0x5a6d62 */ goto L_005a6d62;
L_005a6d46:; BB(0x005a6d46);
    /* 005a6d46: mov edx, dword ptr [edi + 0x3dc] */ r_edx = R32((u32)(r_edi+0x3dcu));
    /* 005a6d4c: lea ecx, [edi + 0x3dc] */ r_ecx = (u32)(r_edi+0x3dcu);
    /* 005a6d52: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5a6d55u); call_ind(t); }
    /* 005a6d55: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6d57: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x5a6d5cu); f_008173d0();
    /* 005a6d5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6d5e: je 0x5a6d62 */ if (fZ) goto L_005a6d62;
L_005a6d60:; BB(0x005a6d60);
    /* 005a6d60: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_005a6d62:; BB(0x005a6d62);
    /* 005a6d62: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 005a6d65: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5a6d6au); f_00829cc8();
    /* 005a6d6a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6d6c: je 0x5a6dbf */ if (fZ) goto L_005a6dbf;
L_005a6d6e:; BB(0x005a6d6e);
    /* 005a6d6e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5a6d73u); f_0082d7b0();
    /* 005a6d73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6d75: push dword ptr [edi + 0x4d4] */ { u32 v = R32((u32)(r_edi+0x4d4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a6d7b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a6d7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6d7f: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5a6d84u); f_00830b74();
    /* 005a6d84: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 005a6d87: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5a6d8cu); f_0082d838();
    /* 005a6d8c: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005a6d8f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a6d91: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5a6d96u); f_0082d8bc();
    /* 005a6d96: mov ecx, 0x5a66c4 */ r_ecx = 0x5a66c4u;
    /* 005a6d9b: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5a6da0u); f_0082fac4();
    /* 005a6da0: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005a6da3: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6da6: je 0x5a6e76 */ if (fZ) goto L_005a6e76;
L_005a6dac:; BB(0x005a6dac);
    /* 005a6dac: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6dae: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x5a6db3u); f_007aa7b8();
L_005a6db3:; BB(0x005a6db3);
    /* 005a6db3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a6db5: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5a6dbau); f_0082fac4();
    /* 005a6dba: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5a6dbfu); f_0082da80();
L_005a6dbf:; BB(0x005a6dbf);
    /* 005a6dbf: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 005a6dc5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a6dc8: jne 0x5a6ddb */ if (!fZ) goto L_005a6ddb;
L_005a6dca:; BB(0x005a6dca);
    /* 005a6dca: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6dcc: je 0x5a6dea */ if (fZ) goto L_005a6dea;
L_005a6dce:; BB(0x005a6dce);
    /* 005a6dce: mov eax, dword ptr [edi + 0x3f8] */ r_eax = R32((u32)(r_edi+0x3f8u));
    /* 005a6dd4: mov ecx, esi */ r_ecx = r_esi;
    /* 005a6dd6: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x5a6dd9u); call_ind(t); }
    /* 005a6dd9: jmp 0x5a6dea */ goto L_005a6dea;
L_005a6ddb:; BB(0x005a6ddb);
    /* 005a6ddb: mov eax, dword ptr [edi + 0x3dc] */ r_eax = R32((u32)(r_edi+0x3dcu));
    /* 005a6de1: lea ecx, [edi + 0x3dc] */ r_ecx = (u32)(r_edi+0x3dcu);
    /* 005a6de7: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x5a6deau); call_ind(t); }
L_005a6dea:; BB(0x005a6dea);
    /* 005a6dea: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5a6defu); f_0082dab0();
    /* 005a6def: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005a6df4: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005a6df9: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6dfb: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x5a6e00u); f_00520610();
    /* 005a6e00: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a6e03: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a6e04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a6e05: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a6e06: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a6e07: ret  */ FN_RET(0x005a6bcc); r_esp += 4; return;
L_005a6e08:; BB(0x005a6e08);
    /* 005a6e08: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 005a6e0e: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 005a6e14: mov ebx, dword ptr [edi + 0x308] */ r_ebx = R32((u32)(r_edi+0x308u));
    /* 005a6e1a: mov dword ptr [edi + 0x468], eax */ W32((u32)(r_edi+0x468u), r_eax);
    /* 005a6e20: mov dword ptr [edi + 0x46c], edx */ W32((u32)(r_edi+0x46cu), r_edx);
    /* 005a6e26: mov dword ptr [edi + 0x470], ebx */ W32((u32)(r_edi+0x470u), r_ebx);
    /* 005a6e2c: mov dword ptr [edi + 0x474], eax */ W32((u32)(r_edi+0x474u), r_eax);
    /* 005a6e32: mov dword ptr [edi + 0x478], edx */ W32((u32)(r_edi+0x478u), r_edx);
    /* 005a6e38: mov dword ptr [edi + 0x47c], ebx */ W32((u32)(r_edi+0x47cu), r_ebx);
    /* 005a6e3e: mov dword ptr [edi + 0x480], eax */ W32((u32)(r_edi+0x480u), r_eax);
    /* 005a6e44: mov dword ptr [edi + 0x484], edx */ W32((u32)(r_edi+0x484u), r_edx);
    /* 005a6e4a: mov dword ptr [edi + 0x488], ebx */ W32((u32)(r_edi+0x488u), r_ebx);
L_005a6e50:; BB(0x005a6e50);
    /* 005a6e50: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a6e53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a6e54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a6e55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a6e56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a6e57: ret  */ FN_RET(0x005a6bcc); r_esp += 4; return;
L_005a6e58:; BB(0x005a6e58);
    /* 005a6e58: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6e5d: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6e5f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a6e61: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6e66: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6e6b: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5a6e6eu); call_ind(t); }
    /* 005a6e6e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005a6e71: jmp 0x5a6c30 */ goto L_005a6c30;
L_005a6e76:; BB(0x005a6e76);
    /* 005a6e76: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6e78: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5a6e7du); f_007aa668();
    /* 005a6e7d: jmp 0x5a6db3 */ goto L_005a6db3;
}

void f_005a6e84(void) /* sub_5A6E84 */
{
    FN_ENTER(0x005a6e84);
    /* 005a6e84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a6e85: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a6e87: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 005a6e8c: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a6e8e: je 0x5a6edb */ if (fZ) goto L_005a6edb;
L_005a6e90:; BB(0x005a6e90);
    /* 005a6e90: lea eax, [ebp + 0x3d0] */ r_eax = (u32)(r_ebp+0x3d0u);
    /* 005a6e96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6e97: call 0x505a3c */ r_esp -= 4; W32(r_esp, 0x5a6e9cu); f_00505a3c();
    /* 005a6e9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a6e9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a6e9f: je 0x5a6ed4 */ if (fZ) goto L_005a6ed4;
L_005a6ea1:; BB(0x005a6ea1);
    /* 005a6ea1: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 005a6ea4: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5a6ea9u); f_00829cc8();
    /* 005a6ea9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5a6eaeu); f_0082d7b0();
    /* 005a6eae: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 005a6eb1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5a6eb6u); f_0082d838();
    /* 005a6eb6: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 005a6eb9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a6ebb: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5a6ec0u); f_0082d8bc();
    /* 005a6ec0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a6ec2: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5a6ec7u); f_007aa668();
    /* 005a6ec7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5a6eccu); f_0082da80();
    /* 005a6ecc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6ece: call 0x505bf8 */ r_esp -= 4; W32(r_esp, 0x5a6ed3u); f_00505bf8();
    /* 005a6ed3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005a6ed4:; BB(0x005a6ed4);
    /* 005a6ed4: mov eax, 1 */ r_eax = 0x1u;
    /* 005a6ed9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a6eda: ret  */ FN_RET(0x005a6e84); r_esp += 4; return;
L_005a6edb:; BB(0x005a6edb);
    /* 005a6edb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a6edd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a6ede: ret  */ FN_RET(0x005a6e84); r_esp += 4; return;
}

void f_005a6ee0(void) /* sub_5A6EE0 */
{
    FN_ENTER(0x005a6ee0);
    /* 005a6ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a6ee1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a6ee3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a6ee5: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x5a6eeau); f_0051f814();
    /* 005a6eea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a6eec: je 0x5a6f5b */ if (fZ) goto L_005a6f5b;
L_005a6eee:; BB(0x005a6eee);
    /* 005a6eee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a6ef0: call 0x5a6958 */ r_esp -= 4; W32(r_esp, 0x5a6ef5u); f_005a6958();
    /* 005a6ef5: mov eax, dword ptr [ebp + 0x370] */ r_eax = R32((u32)(r_ebp+0x370u));
    /* 005a6efb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a6efd: je 0x5a6f10 */ if (fZ) goto L_005a6f10;
L_005a6eff:; BB(0x005a6eff);
    /* 005a6eff: mov dword ptr [ebp + 0x4d8], 1 */ W32((u32)(r_ebp+0x4d8u), 0x1u);
    /* 005a6f09: mov eax, 1 */ r_eax = 0x1u;
    /* 005a6f0e: jmp 0x5a6f1c */ goto L_005a6f1c;
L_005a6f10:; BB(0x005a6f10);
    /* 005a6f10: mov dword ptr [ebp + 0x4d8], 0 */ W32((u32)(r_ebp+0x4d8u), 0x0u);
    /* 005a6f1a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005a6f1c:; BB(0x005a6f1c);
    /* 005a6f1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6f1e: je 0x5a6f2b */ if (fZ) goto L_005a6f2b;
L_005a6f20:; BB(0x005a6f20);
    /* 005a6f20: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6f22: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a6f24: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x5a6f29u); f_00520390();
    /* 005a6f29: jmp 0x5a6f34 */ goto L_005a6f34;
L_005a6f2b:; BB(0x005a6f2b);
    /* 005a6f2b: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6f2d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a6f2f: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x5a6f34u); f_00520390();
L_005a6f34:; BB(0x005a6f34);
    /* 005a6f34: mov eax, dword ptr [0xa74818] */ r_eax = R32((u32)(0xa74818u));
    /* 005a6f39: mov edx, dword ptr [ebp + 0x4d8] */ r_edx = R32((u32)(r_ebp+0x4d8u));
    /* 005a6f3f: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 005a6f45: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a6f47: mov ecx, dword ptr [ecx + edx*8 + 8] */ r_ecx = R32((u32)(r_ecx+r_edx*8+0x8u));
    /* 005a6f4b: mov dword ptr [ebp + 0x34], ecx */ W32((u32)(r_ebp+0x34u), r_ecx);
    /* 005a6f4e: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 005a6f54: mov eax, dword ptr [eax + edx*8 + 0xc] */ r_eax = R32((u32)(r_eax+r_edx*8+0xcu));
    /* 005a6f58: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
L_005a6f5b:; BB(0x005a6f5b);
    /* 005a6f5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a6f5c: ret  */ FN_RET(0x005a6ee0); r_esp += 4; return;
}

void f_005a6f60(void) /* sub_5A6F60 */
{
    FN_ENTER(0x005a6f60);
    /* 005a6f60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a6f61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a6f62: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a6f65: mov edi, ecx */ r_edi = r_ecx;
    /* 005a6f67: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6f69: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x5a6f6eu); f_0051f814();
    /* 005a6f6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6f70: je 0x5a6ffe */ if (fZ) goto L_005a6ffe;
L_005a6f76:; BB(0x005a6f76);
    /* 005a6f76: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6f78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6f7a: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x5a6f7fu); f_0051f7fc();
    /* 005a6f7f: push 0x9243c0 */ { u32 v = 0x9243c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6f84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6f85: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5a6f8au); f_0061cdb0();
    /* 005a6f8a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6f8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6f8e: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x5a6f93u); f_0051f7fc();
    /* 005a6f93: push 0x9243d0 */ { u32 v = 0x9243d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6f98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6f99: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5a6f9eu); f_0061cdb0();
    /* 005a6f9e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6fa0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6fa2: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x5a6fa7u); f_0051f7fc();
    /* 005a6fa7: push 0x9243e4 */ { u32 v = 0x9243e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6fac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6fad: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5a6fb2u); f_0061cdb0();
    /* 005a6fb2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6fb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6fb6: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x5a6fbbu); f_0051f7fc();
    /* 005a6fbb: push 0x9243f8 */ { u32 v = 0x9243f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6fc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6fc1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5a6fc6u); f_0061cdb0();
    /* 005a6fc6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6fc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6fca: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x5a6fcfu); f_0051f7fc();
    /* 005a6fcf: push 0x92440c */ { u32 v = 0x92440cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a6fd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6fd5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5a6fdau); f_0061cdb0();
    /* 005a6fda: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6fdc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6fde: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x5a6fe3u); f_0051f7fc();
    /* 005a6fe3: mov esi, eax */ r_esi = r_eax;
    /* 005a6fe5: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a6fe8: mov ecx, edi */ r_ecx = r_edi;
    /* 005a6fea: call 0x787568 */ r_esp -= 4; W32(r_esp, 0x5a6fefu); f_00787568();
    /* 005a6fef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6ff0: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6ff5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a6ff6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5a6ffbu); f_0061cdb0();
    /* 005a6ffb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a6ffe:; BB(0x005a6ffe);
    /* 005a6ffe: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7003: mov ecx, edi */ r_ecx = r_edi;
    /* 005a7005: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005a7007: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a700c: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x5a700fu); call_ind(t); }
    /* 005a700f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7011: je 0x5a7078 */ if (fZ) goto L_005a7078;
L_005a7013:; BB(0x005a7013);
    /* 005a7013: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 005a701a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a701d: mov ecx, edi */ r_ecx = r_edi;
    /* 005a701f: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 005a7027: mov dword ptr [esp + 8], 0x40400000 */ W32((u32)(r_esp+0x8u), 0x40400000u);
    /* 005a702f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7031: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a7032: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x5a7037u); f_00520cf8();
    /* 005a7037: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5a703cu); f_00578b38();
    /* 005a703c: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 005a703f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5a7044u); f_00829cc8();
    /* 005a7044: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5a7049u); f_0082d7b0();
    /* 005a7049: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 005a704c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5a7051u); f_0082d838();
    /* 005a7051: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005a7054: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a7056: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5a705bu); f_0082d8bc();
    /* 005a705b: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5a7060u); f_0082fa9c();
    /* 005a7060: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a7063: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x5a7068u); f_0082e1e8();
    /* 005a7068: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a7069: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5a706eu); f_0082faac();
    /* 005a706e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5a7073u); f_0082da80();
    /* 005a7073: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5a7078u); f_0082dab0();
L_005a7078:; BB(0x005a7078);
    /* 005a7078: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a707b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a707c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a707d: ret  */ FN_RET(0x005a6f60); r_esp += 4; return;
}

