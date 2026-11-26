#include "protos.h"

void f_00450000(void)
{
    FN_ENTER(0x00450000);
    /* 00450000: enter 0, 0 */ { u32 f = 0x0u; u32 lv = 0u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 00450004: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0045000b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x450010u); f_005caba4();
    /* 00450010: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00450013: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450016: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00450019: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045001b: je 0x4501fb */ if (fZ) goto L_004501fb;
L_00450021:; BB(0x00450021);
    /* 00450021: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00450028: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045002f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00450032: mov ecx, eax */ r_ecx = r_eax;
    /* 00450034: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00450037: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x45003cu); f_007ba278();
    /* 0045003c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00450043: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00450046: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00450049: mov dword ptr [eax], 0xaf6d70 */ W32((u32)(r_eax), 0xaf6d70u);
    /* 0045004f: mov edx, dword ptr [0x9a5bec] */ r_edx = R32((u32)(0x9a5becu));
    /* 00450055: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00450058: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
L_004501d3:; BB(0x004501d3);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x00450000); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
L_004501fb:; BB(0x004501fb);
    /* 004501fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501fd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00450200: jmp 0x4501d3 */ goto L_004501d3;
}

void f_00450002(void)
{
    FN_ENTER(0x00450002);
    /* 00450002: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00450004: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0045000b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x450010u); f_005caba4();
    /* 00450010: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00450013: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450016: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00450019: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045001b: je 0x4501fb */ if (fZ) goto L_004501fb;
L_00450021:; BB(0x00450021);
    /* 00450021: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00450028: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045002f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00450032: mov ecx, eax */ r_ecx = r_eax;
    /* 00450034: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00450037: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x45003cu); f_007ba278();
    /* 0045003c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00450043: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00450046: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00450049: mov dword ptr [eax], 0xaf6d70 */ W32((u32)(r_eax), 0xaf6d70u);
    /* 0045004f: mov edx, dword ptr [0x9a5bec] */ r_edx = R32((u32)(0x9a5becu));
    /* 00450055: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00450058: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
L_004501d3:; BB(0x004501d3);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x00450002); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
L_004501fb:; BB(0x004501fb);
    /* 004501fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501fd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00450200: jmp 0x4501d3 */ goto L_004501d3;
}

void f_00450004(void)
{
    FN_ENTER(0x00450004);
    /* 00450004: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0045000b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x450010u); f_005caba4();
    /* 00450010: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00450013: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450016: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00450019: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045001b: je 0x4501fb */ if (fZ) goto L_004501fb;
L_00450021:; BB(0x00450021);
    /* 00450021: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00450028: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045002f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00450032: mov ecx, eax */ r_ecx = r_eax;
    /* 00450034: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00450037: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x45003cu); f_007ba278();
    /* 0045003c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00450043: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00450046: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00450049: mov dword ptr [eax], 0xaf6d70 */ W32((u32)(r_eax), 0xaf6d70u);
    /* 0045004f: mov edx, dword ptr [0x9a5bec] */ r_edx = R32((u32)(0x9a5becu));
    /* 00450055: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00450058: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
L_004501d3:; BB(0x004501d3);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x00450004); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
L_004501fb:; BB(0x004501fb);
    /* 004501fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501fd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00450200: jmp 0x4501d3 */ goto L_004501d3;
}

void f_00450009(void)
{
    FN_ENTER(0x00450009);
    /* 00450009: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045000b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x450010u); f_005caba4();
    /* 00450010: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00450013: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450016: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00450019: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045001b: je 0x4501fb */ if (fZ) goto L_004501fb;
L_00450021:; BB(0x00450021);
    /* 00450021: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00450028: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045002f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00450032: mov ecx, eax */ r_ecx = r_eax;
    /* 00450034: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00450037: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x45003cu); f_007ba278();
    /* 0045003c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00450043: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00450046: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00450049: mov dword ptr [eax], 0xaf6d70 */ W32((u32)(r_eax), 0xaf6d70u);
    /* 0045004f: mov edx, dword ptr [0x9a5bec] */ r_edx = R32((u32)(0x9a5becu));
    /* 00450055: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00450058: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
L_004501d3:; BB(0x004501d3);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x00450009); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
L_004501fb:; BB(0x004501fb);
    /* 004501fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501fd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00450200: jmp 0x4501d3 */ goto L_004501d3;
}

void f_00450017(void)
{
    FN_ENTER(0x00450017);
    /* 00450017: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00450018: les eax, ptr [ebp - 0x257bf040] */ UNSUP(0x00450018, "les eax, ptr [ebp - 0x257bf040]");
    /* 0045001e: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00450020: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fC = (r < a); }
    /* 00450022: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00450023: rol byte ptr [ecx], 0 */ { u32 ad = (u32)(r_ecx); u32 c = (0u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 00450026: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00450028: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045002f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00450032: mov ecx, eax */ r_ecx = r_eax;
    /* 00450034: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00450037: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x45003cu); f_007ba278();
    /* 0045003c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00450043: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00450046: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00450049: mov dword ptr [eax], 0xaf6d70 */ W32((u32)(r_eax), 0xaf6d70u);
    /* 0045004f: mov edx, dword ptr [0x9a5bec] */ r_edx = R32((u32)(0x9a5becu));
    /* 00450055: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00450058: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x00450017); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
}

void f_0045002d(void)
{
    FN_ENTER(0x0045002d);
    /* 0045002d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045002f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00450032: mov ecx, eax */ r_ecx = r_eax;
    /* 00450034: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00450037: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x45003cu); f_007ba278();
    /* 0045003c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00450043: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00450046: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00450049: mov dword ptr [eax], 0xaf6d70 */ W32((u32)(r_eax), 0xaf6d70u);
    /* 0045004f: mov edx, dword ptr [0x9a5bec] */ r_edx = R32((u32)(0x9a5becu));
    /* 00450055: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00450058: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x0045002d); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
}

void f_00450043(void)
{
    FN_ENTER(0x00450043);
    /* 00450043: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00450046: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00450049: mov dword ptr [eax], 0xaf6d70 */ W32((u32)(r_eax), 0xaf6d70u);
    /* 0045004f: mov edx, dword ptr [0x9a5bec] */ r_edx = R32((u32)(0x9a5becu));
    /* 00450055: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00450058: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x00450043); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
}

void f_00450044(void)
{
    FN_ENTER(0x00450044);
    /* 00450044: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00450045: in al, dx */ UNSUP(0x00450045, "in al, dx");
    /* 00450046: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00450049: mov dword ptr [eax], 0xaf6d70 */ W32((u32)(r_eax), 0xaf6d70u);
    /* 0045004f: mov edx, dword ptr [0x9a5bec] */ r_edx = R32((u32)(0x9a5becu));
    /* 00450055: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00450058: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x00450044); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
}

void f_00450045(void)
{
    FN_ENTER(0x00450045);
    /* 00450045: in al, dx */ UNSUP(0x00450045, "in al, dx");
    /* 00450046: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00450049: mov dword ptr [eax], 0xaf6d70 */ W32((u32)(r_eax), 0xaf6d70u);
    /* 0045004f: mov edx, dword ptr [0x9a5bec] */ r_edx = R32((u32)(0x9a5becu));
    /* 00450055: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00450058: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x00450045); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
}

void f_00450047(void)
{
    FN_ENTER(0x00450047);
    /* 00450047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00450048: or al, 0xc7 */ {  u32 a = (u8)r_eax; u32 b = 0xc7u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045004a: add byte ptr [eax + 0x6d], dh */ { u32 ad = (u32)(r_eax+0x6du);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0045004d: scasd eax, dword ptr es:[edi] */ { u32 a = r_eax; u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_edi += rt_df ? -4 : 4;  }
    /* 0045004e: add byte ptr [ebx - 0x65a413eb], cl */ { u32 ad = (u32)(r_ebx+0x9a5bec15u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00450054: add byte ptr [ecx + 0x138b0450], cl */ { u32 ad = (u32)(r_ecx+0x138b0450u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x00450047); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
}

void f_00450048(void)
{
    FN_ENTER(0x00450048);
    /* 00450048: or al, 0xc7 */ {  u32 a = (u8)r_eax; u32 b = 0xc7u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045004a: add byte ptr [eax + 0x6d], dh */ { u32 ad = (u32)(r_eax+0x6du);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0045004d: scasd eax, dword ptr es:[edi] */ { u32 a = r_eax; u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_edi += rt_df ? -4 : 4;  }
    /* 0045004e: add byte ptr [ebx - 0x65a413eb], cl */ { u32 ad = (u32)(r_ebx+0x9a5bec15u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00450054: add byte ptr [ecx + 0x138b0450], cl */ { u32 ad = (u32)(r_ecx+0x138b0450u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x00450048); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
}

void f_0045004b(void)
{
    FN_ENTER(0x0045004b);
    /* 0045004b: jo 0x4500ba */ if (fO) goto L_004500ba;
L_0045004d:; BB(0x0045004d);
    /* 0045004d: scasd eax, dword ptr es:[edi] */ { u32 a = r_eax; u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_edi += rt_df ? -4 : 4;  }
    /* 0045004e: add byte ptr [ebx - 0x65a413eb], cl */ { u32 ad = (u32)(r_ebx+0x9a5bec15u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00450054: add byte ptr [ecx + 0x138b0450], cl */ { u32 ad = (u32)(r_ecx+0x138b0450u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500ba:; BB(0x004500ba);
    /* 004500ba: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004500bc: add byte ptr [ebp + 0x43e8c84d], cl */ { u32 ad = (u32)(r_ebp+0x43e8c84du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c2: fidivr word ptr [0xd9d8dd00] */ ST(0) = (long double)(i16)R16((u32)(0xd9d8dd00u)) / ST(0);
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500c8: add eax, 0xa44fd0 */ {  u32 a = r_eax; u32 b = 0xa44fd0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x0045004b); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
}

void f_0045004c(void)
{
    FN_ENTER(0x0045004c);
    /* 0045004c: insd dword ptr es:[edi], dx */ UNSUP(0x0045004c, "insd dword ptr es:[edi], dx");
    /* 0045004d: scasd eax, dword ptr es:[edi] */ { u32 a = r_eax; u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_edi += rt_df ? -4 : 4;  }
    /* 0045004e: add byte ptr [ebx - 0x65a413eb], cl */ { u32 ad = (u32)(r_ebx+0x9a5bec15u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00450054: add byte ptr [ecx + 0x138b0450], cl */ { u32 ad = (u32)(r_ecx+0x138b0450u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x0045004c); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
}

void f_0045004d(void)
{
    FN_ENTER(0x0045004d);
    /* 0045004d: scasd eax, dword ptr es:[edi] */ { u32 a = r_eax; u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_edi += rt_df ? -4 : 4;  }
    /* 0045004e: add byte ptr [ebx - 0x65a413eb], cl */ { u32 ad = (u32)(r_ebx+0x9a5bec15u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00450054: add byte ptr [ecx + 0x138b0450], cl */ { u32 ad = (u32)(r_ecx+0x138b0450u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x0045004d); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
}

void f_0045004e(void)
{
    FN_ENTER(0x0045004e);
    /* 0045004e: add byte ptr [ebx - 0x65a413eb], cl */ { u32 ad = (u32)(r_ebx+0x9a5bec15u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00450054: add byte ptr [ecx + 0x138b0450], cl */ { u32 ad = (u32)(r_ecx+0x138b0450u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x0045004e); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
}

void f_00450052(void)
{
    FN_ENTER(0x00450052);
    /* 00450052: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00450053: lcall 0x138b, 0x4508900 */ UNSUP(0x00450053, "lcall 0x138b, 0x4508900");
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x00450052); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
}

void f_00450053(void)
{
    FN_ENTER(0x00450053);
    /* 00450053: lcall 0x138b, 0x4508900 */ UNSUP(0x00450053, "lcall 0x138b, 0x4508900");
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x00450053); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
}

void f_00450054(void)
{
    FN_ENTER(0x00450054);
    /* 00450054: add byte ptr [ecx + 0x138b0450], cl */ { u32 ad = (u32)(r_ecx+0x138b0450u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x00450054); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
}

void f_00450055(void)
{
    FN_ENTER(0x00450055);
    /* 00450055: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00450058: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0045005a: mov dword ptr [eax + 0xa0], edx */ W32((u32)(r_eax+0xa0u), r_edx);
    /* 00450060: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00450063: mov dword ptr [eax + 0xa4], ecx */ W32((u32)(r_eax+0xa4u), r_ecx);
    /* 00450069: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0045006c: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 00450076: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 0045007c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045007e: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 00450085: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450087: jne 0x45009d */ if (!fZ) goto L_0045009d;
L_00450089:; BB(0x00450089);
    /* 00450089: mov dword ptr [0xa44fd0], 0xc2480000 */ W32((u32)(0xa44fd0u), 0xc2480000u);
    /* 00450093: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450098: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_0045009d:; BB(0x0045009d);
    /* 0045009d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004500a0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004500a3: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 004500a6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4500aeu); f_0083173c();
    /* 004500ae: fcomp dword ptr [0x8ff8b4] */ fx_compare(ST(0), R_F32((u32)(0x8ff8b4u))); FPOP();
    /* 004500b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004500b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004500b7: jbe 0x4501ed */ if ((fC||fZ)) goto L_004501ed;
L_004500bd:; BB(0x004500bd);
    /* 004500bd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004500c0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4500c5u); f_0082df08();
    /* 004500c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004500c7: fld dword ptr [0xa44fd0] */ FPUSH(R_F32((u32)(0xa44fd0u)));
    /* 004500cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 004500d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004500d2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 004500d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004500d8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004500da: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 004500dd: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 004500e0: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004500e3: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004500e9: mov ecx, esi */ r_ecx = r_esi;
    /* 004500eb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4500f0u); f_0082ebac();
L_004500f0:; BB(0x004500f0);
    /* 004500f0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004500f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004500f6: mov ebx, dword ptr [0xa44d58] */ r_ebx = R32((u32)(0xa44d58u));
    /* 004500fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 004500fe: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00450104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450106: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45010bu); f_005b8610();
    /* 0045010b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045010e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00450110: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 00450116: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450118: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45011du); f_005b8624();
    /* 0045011d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450120: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00450122: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00450128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045012a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45012fu); f_005b8638();
    /* 0045012f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450132: mov dword ptr [edx + 0xb4], 0xbf800000 */ W32((u32)(r_edx+0xb4u), 0xbf800000u);
    /* 0045013c: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00450142: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 0045014c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045014e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x450153u); f_004d31f4();
    /* 00450153: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450154: movzx eax, byte ptr [0xa44fcc] */ r_eax = (u32)R8((u32)(0xa44fccu));
    /* 0045015b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045015d: jne 0x450173 */ if (!fZ) goto L_00450173;
L_0045015f:; BB(0x0045015f);
    /* 0045015f: mov dword ptr [0x9a5c18], 0x3f800000 */ W32((u32)(0x9a5c18u), 0x3f800000u);
    /* 00450169: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045016e: mov byte ptr [0xa44fcc], al */ W8((u32)(0xa44fccu), (u8)r_eax);
L_00450173:; BB(0x00450173);
    /* 00450173: mov eax, dword ptr [0x8ff8a0] */ r_eax = R32((u32)(0x8ff8a0u));
    /* 00450178: mov edx, dword ptr [0x8ff8a8] */ r_edx = R32((u32)(0x8ff8a8u));
    /* 0045017e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450181: mov edi, dword ptr [ebx + 0xac] */ r_edi = R32((u32)(r_ebx+0xacu));
    /* 00450187: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045018a: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0045018d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00450190: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00450193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450194: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450195: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450196: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45019bu); f_004d681c();
    /* 0045019b: push 0x1555 */ { u32 v = 0x1555u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a0: push 0x9a5c10 */ { u32 v = 0x9a5c10u; r_esp -= 4; W32(r_esp, v); }
    /* 004501a5: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4501aau); f_004d6770();
    /* 004501aa: mov eax, ebx */ r_eax = r_ebx;
    /* 004501ac: lea edx, [eax + 0xbc] */ r_edx = (u32)(r_eax+0xbcu);
    /* 004501b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004501b3: push 0x9a5bf0 */ { u32 v = 0x9a5bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004501b8: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4501bdu); f_0058836c();
    /* 004501bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004501c0: mov edx, ebx */ r_edx = r_ebx;
    /* 004501c2: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 004501c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004501ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004501cd: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 004501d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501d6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004501d9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004501dc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004501df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004501e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004501e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004501eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004501ec: ret  */ FN_RET(0x00450055); r_esp += 4; return;
L_004501ed:; BB(0x004501ed);
    /* 004501ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004501f0: lea esi, [eax + 0xa0] */ r_esi = (u32)(r_eax+0xa0u);
    /* 004501f6: jmp 0x4500f0 */ goto L_004500f0;
}

void f_00450056(void)
{
    FN_ENTER(0x00450056);
    /* 00450056: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450057: add al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 00450059: adc ecx, dword ptr [ecx + 0xa090] */ { u32 c = fC; u32 a = r_ecx; u32 b = R32((u32)(r_ecx+0xa090u)); u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 0045005f: add byte ptr [ebx - 0x7776fbb5], cl */ { u32 ad = (u32)(r_ebx+0x8889044bu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00450065: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 00450066: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00450068: add byte ptr [ebx - 0x7f38f7b5], cl */ { u32 ad = (u32)(r_ebx+0x80c7084bu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045006e: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 0045006f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00450071: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00450073: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00450075: add byte ptr [ecx + 0xa888], cl */ { u32 ad = (u32)(r_ecx+0xa888u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045007b: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045007d: fisttp dword ptr [edi] */ UNSUP(0x0045007d, "fisttp dword ptr [edi]");
    /* 0045007f: mov dh, 5 */ r_edx = (r_edx & 0xffff00ffu) | (((0x5u) & 0xffu) << 8);
    /* 00450081: int3  */ UNSUP(0x00450081, "int3");
}

void f_00450204(void) /* sub_450204 */
{
    FN_ENTER(0x00450204);
    /* 00450204: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00450207: mov dword ptr [0xa44fc4], 5 */ W32((u32)(0xa44fc4u), 0x5u);
    /* 00450211: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00450213: mov ecx, 0x28 */ r_ecx = 0x28u;
    /* 00450218: mov dword ptr [0xa44fb8], 0x28 */ W32((u32)(0xa44fb8u), 0x28u);
    /* 00450222: mov dword ptr [0xa44fd4], edx */ W32((u32)(0xa44fd4u), r_edx);
    /* 00450228: mov dword ptr [0xa44fd8], edx */ W32((u32)(0xa44fd8u), r_edx);
    /* 0045022e: mov dword ptr [0xa44fb0], 0x5a */ W32((u32)(0xa44fb0u), 0x5au);
    /* 00450238: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0045023b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0045023e: fadd dword ptr [0x8ff8ac] */ ST(0) = ST(0) + R_F32((u32)(0x8ff8acu));
    /* 00450244: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00450248: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0045024d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450252: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00450256: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0045025a: fistp dword ptr [0xa44fbc] */ W32((u32)(0xa44fbcu), (u32)fx_int32(ST(0))); FPOP();
    /* 00450260: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00450264: mov dword ptr [0xa44fb4], 0x86 */ W32((u32)(0xa44fb4u), 0x86u);
    /* 0045026e: mov dword ptr [0xa44fc8], 0x8b */ W32((u32)(0xa44fc8u), 0x8bu);
    /* 00450278: mov dword ptr [0xa44fc0], 0x8c */ W32((u32)(0xa44fc0u), 0x8cu);
    /* 00450282: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00450285: ret  */ FN_RET(0x00450204); r_esp += 4; return;
}

void f_00450288(void) /* sub_450288 */
{
    FN_ENTER(0x00450288);
    /* 00450288: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00450289: mov ebp, esp */ r_ebp = r_esp;
    /* 0045028b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045028d: push 0x8ceea4 */ { u32 v = 0x8ceea4u; r_esp -= 4; W32(r_esp, v); }
    /* 00450292: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00450298: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450299: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004502a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004502a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004502a6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004502a9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004502ac: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004502af: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004502b2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004502b5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004502bc: mov eax, ecx */ r_eax = r_ecx;
    /* 004502be: mov dword ptr [eax], 0xaf6df8 */ W32((u32)(r_eax), 0xaf6df8u);
    /* 004502c4: lea ecx, [eax + 0x90] */ r_ecx = (u32)(r_eax+0x90u);
    /* 004502ca: call 0x48ead0 */ r_esp -= 4; W32(r_esp, 0x4502cfu); f_0048ead0();
    /* 004502cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004502d2: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004502d8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004502da: je 0x4502ee */ if (fZ) goto L_004502ee;
L_004502dc:; BB(0x004502dc);
    /* 004502dc: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x4502e1u); f_005883f0();
    /* 004502e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004502e4: mov dword ptr [eax + 0x100], 0 */ W32((u32)(r_eax+0x100u), 0x0u);
L_004502ee:; BB(0x004502ee);
    /* 004502ee: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004502f0:; BB(0x004502f0);
    /* 004502f0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004502f3: mov eax, dword ptr [eax + esi*4 + 0xa4] */ r_eax = R32((u32)(r_eax+r_esi*4+0xa4u));
    /* 004502fa: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004502fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004502ff: je 0x450316 */ if (fZ) goto L_00450316;
L_00450301:; BB(0x00450301);
    /* 00450301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450302: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x450307u); f_005cdcc0();
    /* 00450307: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450308: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045030b: mov dword ptr [eax + ebx*2 + 0xa4], 0 */ W32((u32)(r_eax+r_ebx*2+0xa4u), 0x0u);
L_00450316:; BB(0x00450316);
    /* 00450316: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00450319: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045031c: jl 0x4502f0 */ if ((fS!=fO)) goto L_004502f0;
L_0045031e:; BB(0x0045031e);
    /* 0045031e: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x450323u); f_004d3250();
    /* 00450323: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045032a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045032d: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x450332u); f_007ba1f0();
    /* 00450332: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00450335: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00450337: jne 0x450352 */ if (!fZ) goto L_00450352;
L_00450339:; BB(0x00450339);
    /* 00450339: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045033c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045033f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00450342: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450345: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045034c: mov esp, ebp */ r_esp = r_ebp;
    /* 0045034e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045034f: ret 4 */ FN_RET(0x00450288); r_esp += 8; return;
L_00450352:; BB(0x00450352);
    /* 00450352: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00450355: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450356: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x45035bu); f_005c2f74();
    /* 0045035b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045035c: jmp 0x450339 */ goto L_00450339;
}

void f_004502c4(void)
{
    FN_ENTER(0x004502c4);
    /* 004502c4: lea ecx, [eax + 0x90] */ r_ecx = (u32)(r_eax+0x90u);
    /* 004502ca: call 0x48ead0 */ r_esp -= 4; W32(r_esp, 0x4502cfu); f_0048ead0();
    /* 004502cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004502d2: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 004502d8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004502da: je 0x4502ee */ if (fZ) goto L_004502ee;
L_004502dc:; BB(0x004502dc);
    /* 004502dc: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x4502e1u); f_005883f0();
    /* 004502e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004502e4: mov dword ptr [eax + 0x100], 0 */ W32((u32)(r_eax+0x100u), 0x0u);
L_004502ee:; BB(0x004502ee);
    /* 004502ee: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004502f0:; BB(0x004502f0);
    /* 004502f0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004502f3: mov eax, dword ptr [eax + esi*4 + 0xa4] */ r_eax = R32((u32)(r_eax+r_esi*4+0xa4u));
    /* 004502fa: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 004502fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004502ff: je 0x450316 */ if (fZ) goto L_00450316;
L_00450301:; BB(0x00450301);
    /* 00450301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450302: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x450307u); f_005cdcc0();
    /* 00450307: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450308: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045030b: mov dword ptr [eax + ebx*2 + 0xa4], 0 */ W32((u32)(r_eax+r_ebx*2+0xa4u), 0x0u);
L_00450316:; BB(0x00450316);
    /* 00450316: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00450319: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045031c: jl 0x4502f0 */ if ((fS!=fO)) goto L_004502f0;
L_0045031e:; BB(0x0045031e);
    /* 0045031e: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x450323u); f_004d3250();
    /* 00450323: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045032a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045032d: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x450332u); f_007ba1f0();
    /* 00450332: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00450335: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00450337: jne 0x450352 */ if (!fZ) goto L_00450352;
L_00450339:; BB(0x00450339);
    /* 00450339: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045033c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045033f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00450342: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450345: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045034c: mov esp, ebp */ r_esp = r_ebp;
    /* 0045034e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045034f: ret 4 */ FN_RET(0x004502c4); r_esp += 8; return;
L_00450352:; BB(0x00450352);
    /* 00450352: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00450355: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450356: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x45035bu); f_005c2f74();
    /* 0045035b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045035c: jmp 0x450339 */ goto L_00450339;
}

void f_00450360(void) /* sub_450360 */
{
    FN_ENTER(0x00450360);
    /* 00450360: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00450361: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450362: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00450365: mov edi, ecx */ r_edi = r_ecx;
    /* 00450367: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 0045036d: cmp eax, dword ptr [0xa44fe0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa44fe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450373: jg 0x4503a4 */ if ((!fZ&&fS==fO)) goto L_004503a4;
L_00450375:; BB(0x00450375);
    /* 00450375: push 0x14e */ { u32 v = 0x14eu; r_esp -= 4; W32(r_esp, v); }
    /* 0045037a: lea eax, [edi + 0xe8] */ r_eax = (u32)(r_edi+0xe8u);
    /* 00450380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450381: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x450386u); f_0050b510();
    /* 00450386: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450389: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045038b: je 0x45039e */ if (fZ) goto L_0045039e;
L_0045038d:; BB(0x0045038d);
    /* 0045038d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045038f: mov ecx, eax */ r_ecx = r_eax;
    /* 00450391: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x450396u); f_00508efc();
    /* 00450396: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 0045039c: jmp 0x4503a4 */ goto L_004503a4;
L_0045039e:; BB(0x0045039e);
    /* 0045039e: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
L_004503a4:; BB(0x004503a4);
    /* 004503a4: cmp eax, dword ptr [0xa44fe4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa44fe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004503aa: jne 0x4503f6 */ if (!fZ) goto L_004503f6;
L_004503ac:; BB(0x004503ac);
    /* 004503ac: push 0x17b */ { u32 v = 0x17bu; r_esp -= 4; W32(r_esp, v); }
    /* 004503b1: lea esi, [edi + 0xe8] */ r_esi = (u32)(r_edi+0xe8u);
    /* 004503b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004503b8: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x4503bdu); f_0050b510();
    /* 004503bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004503c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004503c2: je 0x4503cd */ if (fZ) goto L_004503cd;
L_004503c4:; BB(0x004503c4);
    /* 004503c4: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004503c6: mov ecx, eax */ r_ecx = r_eax;
    /* 004503c8: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4503cdu); f_00508efc();
L_004503cd:; BB(0x004503cd);
    /* 004503cd: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 004503d2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004503d3: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x4503d8u); f_0050b510();
    /* 004503d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004503db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004503dd: je 0x4503f0 */ if (fZ) goto L_004503f0;
L_004503df:; BB(0x004503df);
    /* 004503df: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004503e1: mov ecx, eax */ r_ecx = r_eax;
    /* 004503e3: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4503e8u); f_00508efc();
    /* 004503e8: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 004503ee: jmp 0x4503f6 */ goto L_004503f6;
L_004503f0:; BB(0x004503f0);
    /* 004503f0: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
L_004503f6:; BB(0x004503f6);
    /* 004503f6: cmp eax, dword ptr [0xa44fe8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa44fe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004503fc: jne 0x450443 */ if (!fZ) goto L_00450443;
L_004503fe:; BB(0x004503fe);
    /* 004503fe: push 0x17a */ { u32 v = 0x17au; r_esp -= 4; W32(r_esp, v); }
    /* 00450403: lea esi, [edi + 0xe8] */ r_esi = (u32)(r_edi+0xe8u);
    /* 00450409: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045040a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x45040fu); f_0050b510();
    /* 0045040f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450412: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450414: je 0x45041f */ if (fZ) goto L_0045041f;
L_00450416:; BB(0x00450416);
    /* 00450416: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00450418: mov ecx, eax */ r_ecx = r_eax;
    /* 0045041a: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x45041fu); f_00508efc();
L_0045041f:; BB(0x0045041f);
    /* 0045041f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00450421: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00450423: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450424: push 0x366 */ { u32 v = 0x366u; r_esp -= 4; W32(r_esp, v); }
    /* 00450429: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x45042eu); f_00814298();
    /* 0045042e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00450430: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00450435: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x45043au); f_006ff5f8();
    /* 0045043a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045043d: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
L_00450443:; BB(0x00450443);
    /* 00450443: cmp eax, dword ptr [0xa44fec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa44fecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450449: jne 0x450469 */ if (!fZ) goto L_00450469;
L_0045044b:; BB(0x0045044b);
    /* 0045044b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045044d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045044f: lea eax, [edi + 0xe8] */ r_eax = (u32)(r_edi+0xe8u);
    /* 00450455: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450456: push 0x384 */ { u32 v = 0x384u; r_esp -= 4; W32(r_esp, v); }
    /* 0045045b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x450460u); f_00814298();
    /* 00450460: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450463: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
L_00450469:; BB(0x00450469);
    /* 00450469: cmp eax, dword ptr [0xa44ff0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa44ff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045046f: jl 0x4504c6 */ if ((fS!=fO)) goto L_004504c6;
L_00450471:; BB(0x00450471);
    /* 00450471: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00450475: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00450479: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0045047d: lea ecx, [edi + 0xa4] */ r_ecx = (u32)(r_edi+0xa4u);
    /* 00450483: lea edx, [edi + 0xa8] */ r_edx = (u32)(r_edi+0xa8u);
    /* 00450489: lea eax, [edi + 0x104] */ r_eax = (u32)(r_edi+0x104u);
    /* 0045048f: lea esi, [edi + 0x11c] */ r_esi = (u32)(r_edi+0x11cu);
    /* 00450495: mov ebx, eax */ r_ebx = r_eax;
    /* 00450497: mov ebp, edx */ r_ebp = r_edx;
    /* 00450499: mov edi, ecx */ r_edi = r_ecx;
L_0045049b:; BB(0x0045049b);
    /* 0045049b: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0045049d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045049f: je 0x45058f */ if (fZ) goto L_0045058f;
L_004504a5:; BB(0x004504a5);
    /* 004504a5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004504a6: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4504abu); f_00508db8();
L_004504ab:; BB(0x004504ab);
    /* 004504ab: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004504ae: mov edi, ebp */ r_edi = r_ebp;
    /* 004504b0: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004504b2: jg 0x45049b */ if ((!fZ&&fS==fO)) goto L_0045049b;
L_004504b4:; BB(0x004504b4);
    /* 004504b4: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 004504b8: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 004504bc: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 004504c0: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
L_004504c6:; BB(0x004504c6);
    /* 004504c6: cmp eax, dword ptr [0xa44fec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa44fecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004504cc: jne 0x450528 */ if (!fZ) goto L_00450528;
L_004504ce:; BB(0x004504ce);
    /* 004504ce: mov ecx, dword ptr [0xa44ff4] */ r_ecx = R32((u32)(0xa44ff4u));
    /* 004504d4: mov eax, dword ptr [0x8ff8dc] */ r_eax = R32((u32)(0x8ff8dcu));
    /* 004504d9: mov edx, dword ptr [0x8ff8e0] */ r_edx = R32((u32)(0x8ff8e0u));
    /* 004504df: mov esi, dword ptr [0x8ff8e4] */ r_esi = R32((u32)(0x8ff8e4u));
    /* 004504e5: mov dword ptr [edi + 0xec], ecx */ W32((u32)(r_edi+0xecu), r_ecx);
    /* 004504eb: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004504ee: mov dword ptr [edi + 0xe8], 0x461c4000 */ W32((u32)(r_edi+0xe8u), 0x461c4000u);
    /* 004504f8: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004504fc: mov dword ptr [edi + 0xf0], 0 */ W32((u32)(r_edi+0xf0u), 0x0u);
    /* 00450506: lea edx, [edi + 0xe8] */ r_edx = (u32)(r_edi+0xe8u);
    /* 0045050c: mov dword ptr [edi + 0xf4], 0 */ W32((u32)(r_edi+0xf4u), 0x0u);
    /* 00450516: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0045051a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0045051d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045051e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045051f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00450520: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x450525u); f_004d681c();
    /* 00450525: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00450528:; BB(0x00450528);
    /* 00450528: fld dword ptr [0x8ff964] */ FPUSH(R_F32((u32)(0x8ff964u)));
    /* 0045052e: fadd dword ptr [edi + 0xfc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xfcu));
    /* 00450534: fcom dword ptr [0x8ff968] */ fx_compare(ST(0), R_F32((u32)(0x8ff968u))); 
    /* 0045053a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045053c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045053d: jbe 0x45054e */ if ((fC||fZ)) goto L_0045054e;
L_0045053f:; BB(0x0045053f);
    /* 0045053f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00450541: mov eax, 0x42ee0000 */ r_eax = 0x42ee0000u;
    /* 00450546: mov dword ptr [edi + 0xfc], eax */ W32((u32)(r_edi+0xfcu), r_eax);
    /* 0045054c: jmp 0x450554 */ goto L_00450554;
L_0045054e:; BB(0x0045054e);
    /* 0045054e: fstp dword ptr [edi + 0xfc] */ W_F32((u32)(r_edi+0xfcu), ST(0)); FPOP();
L_00450554:; BB(0x00450554);
    /* 00450554: lea ecx, [edi + 0x90] */ r_ecx = (u32)(r_edi+0x90u);
    /* 0045055a: call 0x44d180 */ r_esp -= 4; W32(r_esp, 0x45055fu); f_0044d180();
    /* 0045055f: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 00450565: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450568: cmp eax, dword ptr [0xa44ff8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa44ff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045056e: mov dword ptr [edi + 0xf8], eax */ W32((u32)(r_edi+0xf8u), r_eax);
    /* 00450574: jl 0x450589 */ if ((fS!=fO)) goto L_00450589;
L_00450576:; BB(0x00450576);
    /* 00450576: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0045057a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045057f: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00450583: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00450586: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00450587: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00450588: ret  */ FN_RET(0x00450360); r_esp += 4; return;
L_00450589:; BB(0x00450589);
    /* 00450589: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045058c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045058d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045058e: ret  */ FN_RET(0x00450360); r_esp += 4; return;
L_0045058f:; BB(0x0045058f);
    /* 0045058f: push 0x147 */ { u32 v = 0x147u; r_esp -= 4; W32(r_esp, v); }
    /* 00450594: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00450595: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x45059au); f_00509590();
    /* 0045059a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045059d: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0045059f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004505a1: je 0x4504ab */ if (fZ) goto L_004504ab;
L_004505a7:; BB(0x004505a7);
    /* 004505a7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004505a9: mov ecx, eax */ r_ecx = r_eax;
    /* 004505ab: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4505b0u); f_00508efc();
    /* 004505b0: jmp 0x4504ab */ goto L_004504ab;
}

void f_004505b8(void) /* sub_4505B8 */
{
    FN_ENTER(0x004505b8);
    /* 004505b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004505b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004505ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004505bb: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004505be: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004505c0: fld dword ptr [0x8ff960] */ FPUSH(R_F32((u32)(0x8ff960u)));
    /* 004505c6: mov edx, dword ptr [0xa44ffc] */ r_edx = R32((u32)(0xa44ffcu));
    /* 004505cc: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 004505d2: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004505d6: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004505d8: jg 0x450699 */ if ((!fZ&&fS==fO)) goto L_00450699;
L_004505de:; BB(0x004505de);
    /* 004505de: mov eax, dword ptr [0xa45000] */ r_eax = R32((u32)(0xa45000u));
    /* 004505e3: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004505e5: jle 0x45061a */ if ((fZ||fS!=fO)) goto L_0045061a;
L_004505e7:; BB(0x004505e7);
    /* 004505e7: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004505e9: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004505eb: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 004505ef: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 004505f3: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004505f5: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004505f9: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 004505fd: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004505ff: fcom dword ptr [0x8ff960] */ fx_compare(ST(0), R_F32((u32)(0x8ff960u))); 
    /* 00450605: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00450607: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0045060b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045060c: jae 0x45061a */ if (!fC) goto L_0045061a;
L_0045060e:; BB(0x0045060e);
    /* 0045060e: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00450612: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00450615: call 0x453af4 */ r_esp -= 4; W32(r_esp, 0x45061au); f_00453af4();
L_0045061a:; BB(0x0045061a);
    /* 0045061a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x45061fu); f_0082d7b0();
    /* 0045061f: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x450624u); f_0082fa9c();
    /* 00450624: lea ecx, [ebp + 0xe8] */ r_ecx = (u32)(r_ebp+0xe8u);
    /* 0045062a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x45062fu); f_0082d838();
    /* 0045062f: mov edx, dword ptr [ebp + 0xf4] */ r_edx = R32((u32)(r_ebp+0xf4u));
    /* 00450635: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00450637: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x45063cu); f_0082d8bc();
    /* 0045063c: lea edx, [ebp + 0xac] */ r_edx = (u32)(r_ebp+0xacu);
    /* 00450642: lea eax, [ebp + 0xc4] */ r_eax = (u32)(r_ebp+0xc4u);
    /* 00450648: mov esi, eax */ r_esi = r_eax;
    /* 0045064a: mov edi, edx */ r_edi = r_edx;
L_0045064c:; BB(0x0045064c);
    /* 0045064c: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0045064f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x450654u); f_00829cc8();
    /* 00450654: push 0x42f00000 */ { u32 v = 0x42f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00450659: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045065c: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 0045065e: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x450663u); f_0083046c();
    /* 00450663: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450666: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00450669: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045066b: ja 0x45064c */ if ((!fC&&!fZ)) goto L_0045064c;
L_0045066d:; BB(0x0045066d);
    /* 0045066d: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x450672u); f_0082faac();
    /* 00450672: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x450677u); f_0082da80();
    /* 00450677: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0045067b: fcomp dword ptr [0x8ff960] */ fx_compare(ST(0), R_F32((u32)(0x8ff960u))); FPOP();
    /* 00450681: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00450683: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00450684: jb 0x45068e */ if (fC) goto L_0045068e;
L_00450686:; BB(0x00450686);
    /* 00450686: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 0045068c: jmp 0x450699 */ goto L_00450699;
L_0045068e:; BB(0x0045068e);
    /* 0045068e: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x450693u); f_005963d0();
    /* 00450693: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
L_00450699:; BB(0x00450699);
    /* 00450699: cmp ecx, dword ptr [0xa45000] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa45000u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045069f: jl 0x450715 */ if ((fS!=fO)) goto L_00450715;
L_004506a1:; BB(0x004506a1);
    /* 004506a1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4506a6u); f_0082d7b0();
    /* 004506a6: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x4506abu); f_0082fa9c();
    /* 004506ab: lea ecx, [ebp + 0xe8] */ r_ecx = (u32)(r_ebp+0xe8u);
    /* 004506b1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4506b6u); f_0082d838();
    /* 004506b6: mov edx, dword ptr [ebp + 0xf4] */ r_edx = R32((u32)(r_ebp+0xf4u));
    /* 004506bc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004506be: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4506c3u); f_0082d8bc();
    /* 004506c3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004506c5: lea eax, [ebp + 0xc8] */ r_eax = (u32)(r_ebp+0xc8u);
    /* 004506cb: mov edi, ebp */ r_edi = r_ebp;
    /* 004506cd: mov ebp, eax */ r_ebp = r_eax;
    /* 004506cf: mov esi, edx */ r_esi = r_edx;
L_004506d1:; BB(0x004506d1);
    /* 004506d1: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 004506d4: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4506d9u); f_00829cc8();
    /* 004506d9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004506db: je 0x45071c */ if (fZ) goto L_0045071c;
L_004506dd:; BB(0x004506dd);
    /* 004506dd: push dword ptr [edi + 0xfc] */ { u32 v = R32((u32)(r_edi+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004506e3: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004506e6: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004506e9: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4506eeu); f_0083046c();
    /* 004506ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004506f1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004506f3: jne 0x450700 */ if (!fZ) goto L_00450700;
L_004506f5:; BB(0x004506f5);
    /* 004506f5: mov ecx, dword ptr [edi + 0x100] */ r_ecx = R32((u32)(r_edi+0x100u));
    /* 004506fb: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x450700u); f_00452050();
L_00450700:; BB(0x00450700);
    /* 00450700: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00450703: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00450706: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450709: jl 0x4506d1 */ if ((fS!=fO)) goto L_004506d1;
L_0045070b:; BB(0x0045070b);
    /* 0045070b: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x450710u); f_0082faac();
    /* 00450710: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x450715u); f_0082da80();
L_00450715:; BB(0x00450715);
    /* 00450715: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00450718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00450719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045071a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045071b: ret  */ FN_RET(0x004505b8); r_esp += 4; return;
L_0045071c:; BB(0x0045071c);
    /* 0045071c: mov ecx, dword ptr [edi + 0x100] */ r_ecx = R32((u32)(r_edi+0x100u));
    /* 00450722: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x450727u); f_00588428();
    /* 00450727: jmp 0x4506dd */ goto L_004506dd;
}

void f_0045072c(void) /* sub_45072C */
{
    FN_ENTER(0x0045072c);
    /* 0045072c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045072d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045072f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00450731: push 0x8ceeda */ { u32 v = 0x8ceedau; r_esp -= 4; W32(r_esp, v); }
    /* 00450736: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045073c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045073d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00450744: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00450747: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045074a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0045074d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00450750: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00450753: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 00450758: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0045075f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x450764u); f_005caba4();
    /* 00450764: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00450767: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045076a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0045076d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045076f: je 0x450959 */ if (fZ) goto L_00450959;
L_00450775:; BB(0x00450775);
    /* 00450775: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0045077c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00450783: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00450786: mov ecx, eax */ r_ecx = r_eax;
    /* 00450788: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0045078b: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x450790u); f_007ba278();
    /* 00450790: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00450797: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045079a: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0045079d: mov dword ptr [eax], 0xaf6df8 */ W32((u32)(r_eax), 0xaf6df8u);
    /* 004507a3: mov edx, dword ptr [0x9a5c1c] */ r_edx = R32((u32)(0x9a5c1cu));
    /* 004507a9: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004507ac: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004507af: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 004507b1: mov dword ptr [eax + 0xe8], ecx */ W32((u32)(r_eax+0xe8u), r_ecx);
    /* 004507b7: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 004507ba: mov dword ptr [eax + 0xec], ebx */ W32((u32)(r_eax+0xecu), r_ebx);
    /* 004507c0: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 004507c3: mov dword ptr [eax + 0xf0], edi */ W32((u32)(r_eax+0xf0u), r_edi);
    /* 004507c9: mov dword ptr [eax + 0xf4], edx */ W32((u32)(r_eax+0xf4u), r_edx);
    /* 004507cf: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004507d1: mov eax, dword ptr [0xa44d58] */ r_eax = R32((u32)(0xa44d58u));
    /* 004507d6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_004507d9:; BB(0x004507d9);
    /* 004507d9: mov esi, dword ptr [edi*4 + 0x9a6414] */ r_esi = R32((u32)(r_edi*4+0x9a6414u));
    /* 004507e0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004507e3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004507e4: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4507e9u); f_005b8610();
    /* 004507e9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004507ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004507ed: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 004507f0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004507f2: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 004507f5: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004507f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004507fa: mov dword ptr [ebx + edx + 0xac], eax */ W32((u32)(r_ebx+r_edx+0xacu), r_eax);
    /* 00450801: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x450806u); f_005b8624();
    /* 00450806: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450809: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045080c: mov dword ptr [ebx + edx + 0xb0], eax */ W32((u32)(r_ebx+r_edx+0xb0u), r_eax);
    /* 00450813: push dword ptr [edi*4 + 0x9a5c20] */ { u32 v = R32((u32)(r_edi*4+0x9a5c20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045081a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45081fu); f_005b8638();
    /* 0045081f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450822: mov dword ptr [ebx + edx + 0xb4], eax */ W32((u32)(r_ebx+r_edx+0xb4u), r_eax);
    /* 00450829: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045082c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045082f: jl 0x4507d9 */ if ((fS!=fO)) goto L_004507d9;
L_00450831:; BB(0x00450831);
    /* 00450831: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00450833:; BB(0x00450833);
    /* 00450833: mov esi, dword ptr [edi*4 + 0x9a6754] */ r_esi = R32((u32)(r_edi*4+0x9a6754u));
    /* 0045083a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045083d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045083e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x450843u); f_005b8610();
    /* 00450843: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00450846: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450847: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0045084a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045084c: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0045084f: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00450851: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450854: mov dword ptr [ebx + edx + 0xc4], eax */ W32((u32)(r_ebx+r_edx+0xc4u), r_eax);
    /* 0045085b: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x450860u); f_005b8624();
    /* 00450860: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450863: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00450866: mov dword ptr [ebx + edx + 0xc8], eax */ W32((u32)(r_ebx+r_edx+0xc8u), r_eax);
    /* 0045086d: push dword ptr [edi*4 + 0x9a5c28] */ { u32 v = R32((u32)(r_edi*4+0x9a5c28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00450874: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x450879u); f_005b8638();
    /* 00450879: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045087c: mov dword ptr [ebx + edx + 0xcc], eax */ W32((u32)(r_ebx+r_edx+0xccu), r_eax);
    /* 00450883: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00450886: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450889: jl 0x450833 */ if ((fS!=fO)) goto L_00450833;
L_0045088b:; BB(0x0045088b);
    /* 0045088b: mov eax, edx */ r_eax = r_edx;
    /* 0045088d: mov dword ptr [eax + 0xfc], 0xbf000000 */ W32((u32)(r_eax+0xfcu), 0xbf000000u);
    /* 00450897: lea ecx, [eax + 0x90] */ r_ecx = (u32)(r_eax+0x90u);
    /* 0045089d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045089f: push 0x8ff930 */ { u32 v = 0x8ff930u; r_esp -= 4; W32(r_esp, v); }
    /* 004508a4: call 0x44d268 */ r_esp -= 4; W32(r_esp, 0x4508a9u); f_0044d268();
    /* 004508a9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004508ac: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004508ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004508b0: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 004508b6: mov dword ptr [edx + 0xa8], eax */ W32((u32)(r_edx+0xa8u), r_eax);
    /* 004508bc: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x4508c1u); f_004d31f4();
    /* 004508c1: mov eax, dword ptr [0x8ff924] */ r_eax = R32((u32)(0x8ff924u));
    /* 004508c6: mov edx, dword ptr [0x8ff928] */ r_edx = R32((u32)(0x8ff928u));
    /* 004508cc: mov ecx, dword ptr [0x8ff918] */ r_ecx = R32((u32)(0x8ff918u));
    /* 004508d2: mov ebx, dword ptr [0x8ff920] */ r_ebx = R32((u32)(0x8ff920u));
    /* 004508d8: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004508db: mov esi, dword ptr [edi + 0xf4] */ r_esi = R32((u32)(r_edi+0xf4u));
    /* 004508e1: mov dword ptr [ebp - 0x34], 0x3f000000 */ W32((u32)(r_ebp+0xffffffccu), 0x3f000000u);
    /* 004508e8: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004508eb: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 004508ee: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004508f1: lea edx, [edi + 0xe8] */ r_edx = (u32)(r_edi+0xe8u);
    /* 004508f7: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 004508fa: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004508fd: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00450900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450901: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00450902: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00450903: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x450908u); f_004d681c();
    /* 00450908: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 0045090b: push 0x416c */ { u32 v = 0x416cu; r_esp -= 4; W32(r_esp, v); }
    /* 00450910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450911: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x450916u); f_004d6770();
    /* 00450916: mov eax, edi */ r_eax = r_edi;
    /* 00450918: lea edx, [eax + 0x104] */ r_edx = (u32)(r_eax+0x104u);
    /* 0045091e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045091f: push 0x9a5c34 */ { u32 v = 0x9a5c34u; r_esp -= 4; W32(r_esp, v); }
    /* 00450924: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x450929u); f_0058836c();
    /* 00450929: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045092c: mov edx, edi */ r_edx = r_edi;
    /* 0045092e: mov dword ptr [edx + 0x100], eax */ W32((u32)(r_edx+0x100u), r_eax);
    /* 00450934: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00450936: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00450939: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
L_0045093f:; BB(0x0045093f);
    /* 0045093f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00450942: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00450945: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00450948: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045094b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045094e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00450955: mov esp, ebp */ r_esp = r_ebp;
    /* 00450957: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00450958: ret  */ FN_RET(0x0045072c); r_esp += 4; return;
L_00450959:; BB(0x00450959);
    /* 00450959: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045095b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045095e: jmp 0x45093f */ goto L_0045093f;
}

void f_00450960(void) /* sub_450960 */
{
    FN_ENTER(0x00450960);
    /* 00450960: mov dword ptr [0xa44ff4], 0xc1200000 */ W32((u32)(0xa44ff4u), 0xc1200000u);
    /* 0045096a: mov eax, 0x44 */ r_eax = 0x44u;
    /* 0045096f: mov dword ptr [0xa45004], 0 */ W32((u32)(0xa45004u), 0x0u);
    /* 00450979: mov dword ptr [0xa44fe4], eax */ W32((u32)(0xa44fe4u), r_eax);
    /* 0045097e: mov dword ptr [0xa45000], eax */ W32((u32)(0xa45000u), r_eax);
    /* 00450983: mov dword ptr [0xa44fe0], 0x3c */ W32((u32)(0xa44fe0u), 0x3cu);
    /* 0045098d: mov dword ptr [0xa44fe8], 0x48 */ W32((u32)(0xa44fe8u), 0x48u);
    /* 00450997: mov dword ptr [0xa44ffc], 0x4c */ W32((u32)(0xa44ffcu), 0x4cu);
    /* 004509a1: mov dword ptr [0xa44fec], 0x72 */ W32((u32)(0xa44fecu), 0x72u);
    /* 004509ab: mov dword ptr [0xa44ff0], 0xaa */ W32((u32)(0xa44ff0u), 0xaau);
    /* 004509b5: mov dword ptr [0xa44ff8], 0xf0 */ W32((u32)(0xa44ff8u), 0xf0u);
    /* 004509bf: ret  */ FN_RET(0x00450960); r_esp += 4; return;
}

void f_004509c0(void) /* sub_4509C0 */
{
    FN_ENTER(0x004509c0);
    /* 004509c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004509c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004509c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004509c5: push 0x8ceef4 */ { u32 v = 0x8ceef4u; r_esp -= 4; W32(r_esp, v); }
    /* 004509ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004509d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004509d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004509d8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004509db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004509de: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004509e1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004509e4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004509e7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004509ea: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004509ed: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004509f4: mov eax, ecx */ r_eax = r_ecx;
    /* 004509f6: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 004509fc: mov dword ptr [eax], 0xaf6e80 */ W32((u32)(r_eax), 0xaf6e80u);
    /* 00450a02: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450a04: je 0x450a18 */ if (fZ) goto L_00450a18;
L_00450a06:; BB(0x00450a06);
    /* 00450a06: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x450a0bu); f_005883f0();
    /* 00450a0b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00450a0e: mov dword ptr [eax + 0xec], 0 */ W32((u32)(r_eax+0xecu), 0x0u);
L_00450a18:; BB(0x00450a18);
    /* 00450a18: mov ecx, dword ptr [eax + 0x108] */ r_ecx = R32((u32)(r_eax+0x108u));
    /* 00450a1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450a20: je 0x450a34 */ if (fZ) goto L_00450a34;
L_00450a22:; BB(0x00450a22);
    /* 00450a22: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x450a27u); f_005883f0();
    /* 00450a27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00450a2a: mov dword ptr [eax + 0x108], 0 */ W32((u32)(r_eax+0x108u), 0x0u);
L_00450a34:; BB(0x00450a34);
    /* 00450a34: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00450a36:; BB(0x00450a36);
    /* 00450a36: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00450a39: mov eax, dword ptr [eax + esi*4 + 0x90] */ r_eax = R32((u32)(r_eax+r_esi*4+0x90u));
    /* 00450a40: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00450a43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450a45: je 0x450a5c */ if (fZ) goto L_00450a5c;
L_00450a47:; BB(0x00450a47);
    /* 00450a47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450a48: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x450a4du); f_005cdcc0();
    /* 00450a4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450a4e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00450a51: mov dword ptr [eax + ebx*2 + 0x90], 0 */ W32((u32)(r_eax+r_ebx*2+0x90u), 0x0u);
L_00450a5c:; BB(0x00450a5c);
    /* 00450a5c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00450a5f: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450a62: jl 0x450a36 */ if ((fS!=fO)) goto L_00450a36;
L_00450a64:; BB(0x00450a64);
    /* 00450a64: call 0x44bd78 */ r_esp -= 4; W32(r_esp, 0x450a69u); f_0044bd78();
    /* 00450a69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450a6b: jne 0x450a72 */ if (!fZ) goto L_00450a72;
L_00450a6d:; BB(0x00450a6d);
    /* 00450a6d: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x450a72u); f_004d3250();
L_00450a72:; BB(0x00450a72);
    /* 00450a72: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00450a79: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00450a7c: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x450a81u); f_007ba1f0();
    /* 00450a81: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00450a84: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00450a86: jne 0x450aa1 */ if (!fZ) goto L_00450aa1;
L_00450a88:; BB(0x00450a88);
    /* 00450a88: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00450a8b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00450a8e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00450a91: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450a94: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00450a9b: mov esp, ebp */ r_esp = r_ebp;
    /* 00450a9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00450a9e: ret 4 */ FN_RET(0x004509c0); r_esp += 8; return;
L_00450aa1:; BB(0x00450aa1);
    /* 00450aa1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00450aa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450aa5: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x450aaau); f_005c2f74();
    /* 00450aaa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450aab: jmp 0x450a88 */ goto L_00450a88;
}

void f_00450ab0(void) /* sub_450AB0 */
{
    FN_ENTER(0x00450ab0);
    /* 00450ab0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00450ab1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450ab2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00450ab3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00450ab4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450ab5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00450ab7: movzx eax, byte ptr [0xa4500c] */ r_eax = (u32)R8((u32)(0xa4500cu));
    /* 00450abe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450ac0: jne 0x450ad6 */ if (!fZ) goto L_00450ad6;
L_00450ac2:; BB(0x00450ac2);
    /* 00450ac2: mov edx, dword ptr [0xa45014] */ r_edx = R32((u32)(0xa45014u));
    /* 00450ac8: mov dword ptr [0xa45010], edx */ W32((u32)(0xa45010u), r_edx);
    /* 00450ace: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450ad1: mov byte ptr [0xa4500c], al */ W8((u32)(0xa4500cu), (u8)r_eax);
L_00450ad6:; BB(0x00450ad6);
    /* 00450ad6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450ad8: jne 0x450aee */ if (!fZ) goto L_00450aee;
L_00450ada:; BB(0x00450ada);
    /* 00450ada: mov edx, dword ptr [0xa4501c] */ r_edx = R32((u32)(0xa4501cu));
    /* 00450ae0: mov dword ptr [0xa45018], edx */ W32((u32)(0xa45018u), r_edx);
    /* 00450ae6: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450ae9: mov byte ptr [0xa4500c], al */ W8((u32)(0xa4500cu), (u8)r_eax);
L_00450aee:; BB(0x00450aee);
    /* 00450aee: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
    /* 00450af4: cmp edx, dword ptr [0xa45018] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa45018u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450afa: jle 0x450b26 */ if ((fZ||fS!=fO)) goto L_00450b26;
L_00450afc:; BB(0x00450afc);
    /* 00450afc: mov esi, dword ptr [ebx + 0x90] */ r_esi = R32((u32)(r_ebx+0x90u));
    /* 00450b02: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450b04: je 0x450b3c */ if (fZ) goto L_00450b3c;
L_00450b06:; BB(0x00450b06);
    /* 00450b06: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450b07: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x450b0cu); f_005cdcc0();
    /* 00450b0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450b0d: movzx eax, byte ptr [0xa4500c] */ r_eax = (u32)R8((u32)(0xa4500cu));
    /* 00450b14: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
    /* 00450b1a: mov dword ptr [ebx + 0x90], 0 */ W32((u32)(r_ebx+0x90u), 0x0u);
    /* 00450b24: jmp 0x450b3c */ goto L_00450b3c;
L_00450b26:; BB(0x00450b26);
    /* 00450b26: cmp edx, dword ptr [0xa45010] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa45010u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450b2c: jl 0x450b3c */ if ((fS!=fO)) goto L_00450b3c;
L_00450b2e:; BB(0x00450b2e);
    /* 00450b2e: mov esi, dword ptr [ebx + 0x90] */ r_esi = R32((u32)(r_ebx+0x90u));
    /* 00450b34: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450b36: je 0x450c8b */ if (fZ) goto L_00450c8b;
L_00450b3c:; BB(0x00450b3c);
    /* 00450b3c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450b3e: jne 0x450b57 */ if (!fZ) goto L_00450b57;
L_00450b40:; BB(0x00450b40);
    /* 00450b40: mov esi, dword ptr [0xa45024] */ r_esi = R32((u32)(0xa45024u));
    /* 00450b46: mov dword ptr [0xa45020], esi */ W32((u32)(0xa45020u), r_esi);
    /* 00450b4c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00450b4f: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450b52: mov byte ptr [0xa4500c], al */ W8((u32)(0xa4500cu), (u8)r_eax);
L_00450b57:; BB(0x00450b57);
    /* 00450b57: cmp edx, dword ptr [0xa45020] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa45020u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450b5d: jl 0x450b6d */ if ((fS!=fO)) goto L_00450b6d;
L_00450b5f:; BB(0x00450b5f);
    /* 00450b5f: mov esi, dword ptr [ebx + 0x94] */ r_esi = R32((u32)(r_ebx+0x94u));
    /* 00450b65: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450b67: je 0x450cd6 */ if (fZ) goto L_00450cd6;
L_00450b6d:; BB(0x00450b6d);
    /* 00450b6d: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00450b6f: jne 0x450b87 */ if (!fZ) goto L_00450b87;
L_00450b71:; BB(0x00450b71);
    /* 00450b71: mov esi, dword ptr [0xa4502c] */ r_esi = R32((u32)(0xa4502cu));
    /* 00450b77: mov dword ptr [0xa45028], esi */ W32((u32)(0xa45028u), r_esi);
    /* 00450b7d: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450b82: mov byte ptr [0xa4500c], al */ W8((u32)(0xa4500cu), (u8)r_eax);
L_00450b87:; BB(0x00450b87);
    /* 00450b87: cmp edx, dword ptr [0xa45028] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa45028u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450b8d: jl 0x450baf */ if ((fS!=fO)) goto L_00450baf;
L_00450b8f:; BB(0x00450b8f);
    /* 00450b8f: mov ecx, dword ptr [ebx + 0x98] */ r_ecx = R32((u32)(r_ebx+0x98u));
    /* 00450b95: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450b97: je 0x450d21 */ if (fZ) goto L_00450d21;
L_00450b9d:; BB(0x00450b9d);
    /* 00450b9d: lea eax, [ebx + 0x10c] */ r_eax = (u32)(r_ebx+0x10cu);
    /* 00450ba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450ba4: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x450ba9u); f_00508db8();
    /* 00450ba9: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
L_00450baf:; BB(0x00450baf);
    /* 00450baf: lea eax, [ebx + 0x9c] */ r_eax = (u32)(r_ebx+0x9cu);
    /* 00450bb5: lea ecx, [ebx + 0xa0] */ r_ecx = (u32)(r_ebx+0xa0u);
    /* 00450bbb: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00450bbe: mov edi, ebx */ r_edi = r_ebx;
    /* 00450bc0: lea esi, [ebx + 0x18] */ r_esi = (u32)(r_ebx+0x18u);
    /* 00450bc3: mov ebp, eax */ r_ebp = r_eax;
L_00450bc5:; BB(0x00450bc5);
    /* 00450bc5: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450bc8: jl 0x450be7 */ if ((fS!=fO)) goto L_00450be7;
L_00450bca:; BB(0x00450bca);
    /* 00450bca: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00450bcd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450bcf: je 0x450c04 */ if (fZ) goto L_00450c04;
L_00450bd1:; BB(0x00450bd1);
    /* 00450bd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00450bd2: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x450bd7u); f_005cdcc0();
    /* 00450bd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450bd8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 00450bdf: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
    /* 00450be5: jmp 0x450c04 */ goto L_00450c04;
L_00450be7:; BB(0x00450be7);
    /* 00450be7: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00450bea: lea edx, [edi + 0xf0] */ r_edx = (u32)(r_edi+0xf0u);
    /* 00450bf0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450bf2: je 0x450d5e */ if (fZ) goto L_00450d5e;
L_00450bf8:; BB(0x00450bf8);
    /* 00450bf8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00450bf9: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x450bfeu); f_00508db8();
    /* 00450bfe: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
L_00450c04:; BB(0x00450c04);
    /* 00450c04: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00450c07: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00450c0a: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450c0c: jg 0x450bc5 */ if ((!fZ&&fS==fO)) goto L_00450bc5;
L_00450c0e:; BB(0x00450c0e);
    /* 00450c0e: cmp edx, dword ptr [0xa45030] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa45030u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450c14: jne 0x450c35 */ if (!fZ) goto L_00450c35;
L_00450c16:; BB(0x00450c16);
    /* 00450c16: push 0x8ff9c0 */ { u32 v = 0x8ff9c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00450c1b: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x450c20u); f_00814f0c();
    /* 00450c20: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00450c22: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00450c27: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x450c2cu); f_006ff5f8();
    /* 00450c2c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450c2f: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
L_00450c35:; BB(0x00450c35);
    /* 00450c35: fld dword ptr [0x8ff9bc] */ FPUSH(R_F32((u32)(0x8ff9bcu)));
    /* 00450c3b: fadd dword ptr [ebx + 0xe8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xe8u));
    /* 00450c41: fcom dword ptr [0x8ff974] */ fx_compare(ST(0), R_F32((u32)(0x8ff974u))); 
    /* 00450c47: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00450c49: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00450c4a: jbe 0x450c5b */ if ((fC||fZ)) goto L_00450c5b;
L_00450c4c:; BB(0x00450c4c);
    /* 00450c4c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00450c4e: mov eax, 0x43150000 */ r_eax = 0x43150000u;
    /* 00450c53: mov dword ptr [ebx + 0xe8], eax */ W32((u32)(r_ebx+0xe8u), r_eax);
    /* 00450c59: jmp 0x450c61 */ goto L_00450c61;
L_00450c5b:; BB(0x00450c5b);
    /* 00450c5b: fstp dword ptr [ebx + 0xe8] */ W_F32((u32)(r_ebx+0xe8u), ST(0)); FPOP();
L_00450c61:; BB(0x00450c61);
    /* 00450c61: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00450c64: cmp edx, dword ptr [0xa45034] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa45034u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00450c6a: mov dword ptr [ebx + 0xe4], edx */ W32((u32)(r_ebx+0xe4u), r_edx);
    /* 00450c70: jl 0x450c85 */ if ((fS!=fO)) goto L_00450c85;
L_00450c72:; BB(0x00450c72);
    /* 00450c72: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00450c76: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00450c7b: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00450c7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450c80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00450c81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00450c82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00450c83: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00450c84: ret  */ FN_RET(0x00450ab0); r_esp += 4; return;
L_00450c85:; BB(0x00450c85);
    /* 00450c85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450c86: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00450c87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00450c88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00450c89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00450c8a: ret  */ FN_RET(0x00450ab0); r_esp += 4; return;
L_00450c8b:; BB(0x00450c8b);
    /* 00450c8b: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00450c90: lea eax, [ebx + 0xd4] */ r_eax = (u32)(r_ebx+0xd4u);
    /* 00450c96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450c97: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x450c9cu); f_00509590();
    /* 00450c9c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450c9f: mov dword ptr [ebx + 0x90], eax */ W32((u32)(r_ebx+0x90u), r_eax);
    /* 00450ca5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450ca7: je 0x450cc4 */ if (fZ) goto L_00450cc4;
L_00450ca9:; BB(0x00450ca9);
    /* 00450ca9: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00450cab: mov ecx, eax */ r_ecx = r_eax;
    /* 00450cad: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x450cb2u); f_00508efc();
    /* 00450cb2: movzx eax, byte ptr [0xa4500c] */ r_eax = (u32)R8((u32)(0xa4500cu));
    /* 00450cb9: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
    /* 00450cbf: jmp 0x450b3c */ goto L_00450b3c;
L_00450cc4:; BB(0x00450cc4);
    /* 00450cc4: movzx eax, byte ptr [0xa4500c] */ r_eax = (u32)R8((u32)(0xa4500cu));
    /* 00450ccb: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
    /* 00450cd1: jmp 0x450b3c */ goto L_00450b3c;
L_00450cd6:; BB(0x00450cd6);
    /* 00450cd6: push 0x179 */ { u32 v = 0x179u; r_esp -= 4; W32(r_esp, v); }
    /* 00450cdb: lea eax, [ebx + 0xd4] */ r_eax = (u32)(r_ebx+0xd4u);
    /* 00450ce1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450ce2: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x450ce7u); f_00509590();
    /* 00450ce7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450cea: mov dword ptr [ebx + 0x94], eax */ W32((u32)(r_ebx+0x94u), r_eax);
    /* 00450cf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450cf2: je 0x450d0f */ if (fZ) goto L_00450d0f;
L_00450cf4:; BB(0x00450cf4);
    /* 00450cf4: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00450cf6: mov ecx, eax */ r_ecx = r_eax;
    /* 00450cf8: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x450cfdu); f_00508efc();
    /* 00450cfd: movzx eax, byte ptr [0xa4500c] */ r_eax = (u32)R8((u32)(0xa4500cu));
    /* 00450d04: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
    /* 00450d0a: jmp 0x450b6d */ goto L_00450b6d;
L_00450d0f:; BB(0x00450d0f);
    /* 00450d0f: movzx eax, byte ptr [0xa4500c] */ r_eax = (u32)R8((u32)(0xa4500cu));
    /* 00450d16: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
    /* 00450d1c: jmp 0x450b6d */ goto L_00450b6d;
L_00450d21:; BB(0x00450d21);
    /* 00450d21: push 0x146 */ { u32 v = 0x146u; r_esp -= 4; W32(r_esp, v); }
    /* 00450d26: lea eax, [ebx + 0x10c] */ r_eax = (u32)(r_ebx+0x10cu);
    /* 00450d2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450d2d: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x450d32u); f_00509590();
    /* 00450d32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450d35: mov dword ptr [ebx + 0x98], eax */ W32((u32)(r_ebx+0x98u), r_eax);
    /* 00450d3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450d3d: je 0x450d53 */ if (fZ) goto L_00450d53;
L_00450d3f:; BB(0x00450d3f);
    /* 00450d3f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00450d41: mov ecx, eax */ r_ecx = r_eax;
    /* 00450d43: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x450d48u); f_00508efc();
    /* 00450d48: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
    /* 00450d4e: jmp 0x450baf */ goto L_00450baf;
L_00450d53:; BB(0x00450d53);
    /* 00450d53: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
    /* 00450d59: jmp 0x450baf */ goto L_00450baf;
L_00450d5e:; BB(0x00450d5e);
    /* 00450d5e: push 0x147 */ { u32 v = 0x147u; r_esp -= 4; W32(r_esp, v); }
    /* 00450d63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00450d64: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x450d69u); f_00509590();
    /* 00450d69: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450d6c: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 00450d6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450d71: je 0x450d87 */ if (fZ) goto L_00450d87;
L_00450d73:; BB(0x00450d73);
    /* 00450d73: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00450d75: mov ecx, eax */ r_ecx = r_eax;
    /* 00450d77: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x450d7cu); f_00508efc();
    /* 00450d7c: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
    /* 00450d82: jmp 0x450c04 */ goto L_00450c04;
L_00450d87:; BB(0x00450d87);
    /* 00450d87: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
    /* 00450d8d: jmp 0x450c04 */ goto L_00450c04;
}

void f_00450d94(void) /* sub_450D94 */
{
    FN_ENTER(0x00450d94);
    /* 00450d94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00450d95: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00450d97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450d99: call 0x450da8 */ r_esp -= 4; W32(r_esp, 0x450d9eu); f_00450da8();
    /* 00450d9e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00450da0: call 0x450f38 */ r_esp -= 4; W32(r_esp, 0x450da5u); f_00450f38();
    /* 00450da5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00450da6: ret  */ FN_RET(0x00450d94); r_esp += 4; return;
}

void f_00450da8(void) /* sub_450DA8 */
{
    FN_ENTER(0x00450da8);
    /* 00450da8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450da9: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00450dac: mov esi, ecx */ r_esi = r_ecx;
    /* 00450dae: mov eax, dword ptr [esi + 0xe4] */ r_eax = R32((u32)(r_esi+0xe4u));
    /* 00450db4: fld dword ptr [0x8ff9b8] */ FPUSH(R_F32((u32)(0x8ff9b8u)));
    /* 00450dba: mov ecx, dword ptr [0xa45038] */ r_ecx = R32((u32)(0xa45038u));
    /* 00450dc0: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00450dc4: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450dc6: jge 0x450f32 */ if ((fS==fO)) goto L_00450f32;
L_00450dcc:; BB(0x00450dcc);
    /* 00450dcc: mov edx, dword ptr [0xa4503c] */ r_edx = R32((u32)(0xa4503cu));
    /* 00450dd2: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450dd4: jle 0x450e09 */ if ((fZ||fS!=fO)) goto L_00450e09;
L_00450dd6:; BB(0x00450dd6);
    /* 00450dd6: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00450dd8: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450dda: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00450dde: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00450de2: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00450de4: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00450de8: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00450dec: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00450dee: fcom dword ptr [0x8ff9b8] */ fx_compare(ST(0), R_F32((u32)(0x8ff9b8u))); 
    /* 00450df4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00450df6: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00450dfa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00450dfb: jae 0x450e09 */ if (!fC) goto L_00450e09;
L_00450dfd:; BB(0x00450dfd);
    /* 00450dfd: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00450e01: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00450e04: call 0x453af4 */ r_esp -= 4; W32(r_esp, 0x450e09u); f_00453af4();
L_00450e09:; BB(0x00450e09);
    /* 00450e09: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x450e0eu); f_0082d7b0();
    /* 00450e0e: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x450e13u); f_0082fa9c();
    /* 00450e13: lea ecx, [esi + 0xd4] */ r_ecx = (u32)(r_esi+0xd4u);
    /* 00450e19: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x450e1eu); f_0082d838();
    /* 00450e1e: mov edx, dword ptr [esi + 0xe0] */ r_edx = R32((u32)(r_esi+0xe0u));
    /* 00450e24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00450e26: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x450e2bu); f_0082d8bc();
    /* 00450e2b: mov ecx, dword ptr [esi + 0xa8] */ r_ecx = R32((u32)(r_esi+0xa8u));
    /* 00450e31: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x450e36u); f_00829cc8();
    /* 00450e36: mov ecx, dword ptr [esi + 0xec] */ r_ecx = R32((u32)(r_esi+0xecu));
    /* 00450e3c: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x450e41u); f_00588428();
    /* 00450e41: push dword ptr [esi + 0xe8] */ { u32 v = R32((u32)(r_esi+0xe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00450e47: push dword ptr [esi + 0xac] */ { u32 v = R32((u32)(r_esi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00450e4d: push dword ptr [esi + 0xa4] */ { u32 v = R32((u32)(r_esi+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00450e53: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x450e58u); f_0083046c();
    /* 00450e58: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450e5b: mov ecx, dword ptr [esi + 0xec] */ r_ecx = R32((u32)(r_esi+0xecu));
    /* 00450e61: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x450e66u); f_00452050();
    /* 00450e66: fld dword ptr [esi + 0xe8] */ FPUSH(R_F32((u32)(r_esi+0xe8u)));
    /* 00450e6c: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 00450e70: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 00450e75: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00450e7a: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00450e7e: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00450e82: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00450e86: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00450e8a: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00450e8e: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 00450e93: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00450e95: mov eax, ecx */ r_eax = r_ecx;
    /* 00450e97: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00450e9a: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00450e9c: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00450e9f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00450ea1: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00450ea4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450ea6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450ea8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450eaa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450eac: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00450eae: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00450eb0: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00450eb2: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00450eb6: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00450eba: mov ecx, dword ptr [esi + 0xb4] */ r_ecx = R32((u32)(r_esi+0xb4u));
    /* 00450ec0: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00450ec4: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x450ec9u); f_00829cc8();
    /* 00450ec9: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00450ecd: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 00450ed3: mov edx, dword ptr [esi + 0xb8] */ r_edx = R32((u32)(r_esi+0xb8u));
    /* 00450ed9: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00450edd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00450ee0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00450ee4: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x450ee9u); f_0083046c();
    /* 00450ee9: mov ecx, dword ptr [esi + 0xc0] */ r_ecx = R32((u32)(r_esi+0xc0u));
    /* 00450eef: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x450ef4u); f_00829cc8();
    /* 00450ef4: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00450ef8: mov eax, dword ptr [esi + 0xbc] */ r_eax = R32((u32)(r_esi+0xbcu));
    /* 00450efe: mov edx, dword ptr [esi + 0xc4] */ r_edx = R32((u32)(r_esi+0xc4u));
    /* 00450f04: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00450f08: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00450f0b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00450f0f: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x450f14u); f_0083046c();
    /* 00450f14: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x450f19u); f_0082faac();
    /* 00450f19: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x450f1eu); f_0082da80();
    /* 00450f1e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00450f22: fcomp dword ptr [0x8ff9b8] */ fx_compare(ST(0), R_F32((u32)(0x8ff9b8u))); FPOP();
    /* 00450f28: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00450f2a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00450f2b: jae 0x450f32 */ if (!fC) goto L_00450f32;
L_00450f2d:; BB(0x00450f2d);
    /* 00450f2d: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x450f32u); f_005963d0();
L_00450f32:; BB(0x00450f32);
    /* 00450f32: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00450f35: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00450f36: ret  */ FN_RET(0x00450da8); r_esp += 4; return;
}

void f_00450f38(void) /* sub_450F38 */
{
    FN_ENTER(0x00450f38);
    /* 00450f38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00450f39: mov edi, ecx */ r_edi = r_ecx;
    /* 00450f3b: mov eax, dword ptr [edi + 0xe4] */ r_eax = R32((u32)(r_edi+0xe4u));
    /* 00450f41: cmp eax, dword ptr [0xa45040] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa45040u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00450f47: jge 0x450f4b */ if ((fS==fO)) goto L_00450f4b;
L_00450f49:; BB(0x00450f49);
    /* 00450f49: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00450f4a: ret  */ FN_RET(0x00450f38); r_esp += 4; return;
L_00450f4b:; BB(0x00450f4b);
    /* 00450f4b: push 0x3f7d70a4 */ { u32 v = 0x3f7d70a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00450f50: call 0x453af4 */ r_esp -= 4; W32(r_esp, 0x450f55u); f_00453af4();
    /* 00450f55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00450f56: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x450f5bu); f_0082d7b0();
    /* 00450f5b: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x450f60u); f_0082fa9c();
    /* 00450f60: lea ecx, [edi + 0xd4] */ r_ecx = (u32)(r_edi+0xd4u);
    /* 00450f66: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x450f6bu); f_0082d838();
    /* 00450f6b: mov edx, dword ptr [edi + 0xe0] */ r_edx = R32((u32)(r_edi+0xe0u));
    /* 00450f71: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00450f73: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x450f78u); f_0082d8bc();
    /* 00450f78: mov ecx, dword ptr [edi + 0xcc] */ r_ecx = R32((u32)(r_edi+0xccu));
    /* 00450f7e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x450f83u); f_00829cc8();
    /* 00450f83: mov ecx, dword ptr [edi + 0x108] */ r_ecx = R32((u32)(r_edi+0x108u));
    /* 00450f89: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x450f8eu); f_00588428();
    /* 00450f8e: push dword ptr [edi + 0xe8] */ { u32 v = R32((u32)(r_edi+0xe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00450f94: push dword ptr [edi + 0xd0] */ { u32 v = R32((u32)(r_edi+0xd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00450f9a: push dword ptr [edi + 0xc8] */ { u32 v = R32((u32)(r_edi+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00450fa0: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x450fa5u); f_0083046c();
    /* 00450fa5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00450fa8: mov ecx, dword ptr [edi + 0x108] */ r_ecx = R32((u32)(r_edi+0x108u));
    /* 00450fae: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x450fb3u); f_00452050();
    /* 00450fb3: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x450fb8u); f_0082faac();
    /* 00450fb8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x450fbdu); f_0082da80();
    /* 00450fbd: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x450fc2u); f_005963d0();
    /* 00450fc2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00450fc3: ret  */ FN_RET(0x00450f38); r_esp += 4; return;
}

void f_00450fc4(void) /* sub_450FC4 */
{
    FN_ENTER(0x00450fc4);
    /* 00450fc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00450fc5: mov ebp, esp */ r_ebp = r_esp;
    /* 00450fc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00450fc9: push 0x8cef2a */ { u32 v = 0x8cef2au; r_esp -= 4; W32(r_esp, v); }
    /* 00450fce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00450fd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450fd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00450fdc: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00450fdf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00450fe2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00450fe5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00450fe8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00450feb: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 00450ff0: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00450ff7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x450ffcu); f_005caba4();
    /* 00450ffc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00450fff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00451002: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00451005: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451007: je 0x4511f2 */ if (fZ) goto L_004511f2;
L_0045100d:; BB(0x0045100d);
    /* 0045100d: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00451014: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045101b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045101e: mov ecx, eax */ r_ecx = r_eax;
    /* 00451020: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00451023: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x451028u); f_007ba278();
    /* 00451028: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0045102f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00451032: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00451035: mov dword ptr [eax], 0xaf6e80 */ W32((u32)(r_eax), 0xaf6e80u);
    /* 0045103b: mov edx, dword ptr [0x9a5c64] */ r_edx = R32((u32)(0x9a5c64u));
    /* 00451041: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00451044: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00451047: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00451049: mov dword ptr [eax + 0xd4], ecx */ W32((u32)(r_eax+0xd4u), r_ecx);
    /* 0045104f: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00451052: mov dword ptr [eax + 0xd8], ebx */ W32((u32)(r_eax+0xd8u), r_ebx);
    /* 00451058: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0045105b: mov dword ptr [eax + 0xdc], edi */ W32((u32)(r_eax+0xdcu), r_edi);
    /* 00451061: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 00451067: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00451069: mov eax, dword ptr [0xa44d58] */ r_eax = R32((u32)(0xa44d58u));
    /* 0045106e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00451071:; BB(0x00451071);
    /* 00451071: mov esi, dword ptr [edi*4 + 0x9a6754] */ r_esi = R32((u32)(r_edi*4+0x9a6754u));
    /* 00451078: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045107b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045107c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x451081u); f_005b8610();
    /* 00451081: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00451084: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00451085: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00451088: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045108a: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0045108d: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045108f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00451092: mov dword ptr [ebx + edx + 0xa4], eax */ W32((u32)(r_ebx+r_edx+0xa4u), r_eax);
    /* 00451099: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45109eu); f_005b8624();
    /* 0045109e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004510a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004510a4: mov dword ptr [ebx + edx + 0xa8], eax */ W32((u32)(r_ebx+r_edx+0xa8u), r_eax);
    /* 004510ab: push dword ptr [edi*4 + 0x9a5c68] */ { u32 v = R32((u32)(r_edi*4+0x9a5c68u)); r_esp -= 4; W32(r_esp, v); }
    /* 004510b2: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4510b7u); f_005b8638();
    /* 004510b7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004510ba: mov dword ptr [ebx + edx + 0xac], eax */ W32((u32)(r_ebx+r_edx+0xacu), r_eax);
    /* 004510c1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004510c4: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004510c7: jl 0x451071 */ if ((fS!=fO)) goto L_00451071;
L_004510c9:; BB(0x004510c9);
    /* 004510c9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004510cc: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004510ce: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4510d3u); f_005b8610();
    /* 004510d3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004510d6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004510d9: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004510db: mov dword ptr [edx + 0xc8], eax */ W32((u32)(r_edx+0xc8u), r_eax);
    /* 004510e1: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4510e6u); f_005b8624();
    /* 004510e6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004510e9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004510ec: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 004510ee: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
    /* 004510f4: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4510f9u); f_005b8638();
    /* 004510f9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004510fc: mov dword ptr [edx + 0xe8], 0xbf000000 */ W32((u32)(r_edx+0xe8u), 0xbf000000u);
    /* 00451106: mov dword ptr [edx + 0xd0], eax */ W32((u32)(r_edx+0xd0u), r_eax);
    /* 0045110c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045110e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00451110: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 00451116: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 0045111c: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00451122: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 00451128: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 0045112e: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x451133u); f_004d31f4();
    /* 00451133: mov eax, dword ptr [0x8ff99c] */ r_eax = R32((u32)(0x8ff99cu));
    /* 00451138: mov edx, dword ptr [0x8ff9a0] */ r_edx = R32((u32)(0x8ff9a0u));
    /* 0045113e: mov ecx, dword ptr [0x8ff990] */ r_ecx = R32((u32)(0x8ff990u));
    /* 00451144: mov ebx, dword ptr [0x8ff998] */ r_ebx = R32((u32)(0x8ff998u));
    /* 0045114a: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0045114d: mov esi, dword ptr [edi + 0xe0] */ r_esi = R32((u32)(r_edi+0xe0u));
    /* 00451153: mov dword ptr [ebp - 0x34], 0x3f000000 */ W32((u32)(r_ebp+0xffffffccu), 0x3f000000u);
    /* 0045115a: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0045115d: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00451160: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00451163: lea edx, [edi + 0xd4] */ r_edx = (u32)(r_edi+0xd4u);
    /* 00451169: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0045116c: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0045116f: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00451172: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451173: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00451174: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00451175: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x45117au); f_004d681c();
    /* 0045117a: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 0045117d: push 0x416c */ { u32 v = 0x416cu; r_esp -= 4; W32(r_esp, v); }
    /* 00451182: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451183: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x451188u); f_004d6770();
    /* 00451188: mov eax, edi */ r_eax = r_edi;
    /* 0045118a: lea edx, [eax + 0xf0] */ r_edx = (u32)(r_eax+0xf0u);
    /* 00451190: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00451191: push 0x9a5c74 */ { u32 v = 0x9a5c74u; r_esp -= 4; W32(r_esp, v); }
    /* 00451196: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x45119bu); f_0058836c();
    /* 0045119b: mov edx, edi */ r_edx = r_edi;
    /* 0045119d: mov dword ptr [edx + 0xec], eax */ W32((u32)(r_edx+0xecu), r_eax);
    /* 004511a3: lea eax, [edx + 0x10c] */ r_eax = (u32)(r_edx+0x10cu);
    /* 004511a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004511aa: push 0x9a5ca4 */ { u32 v = 0x9a5ca4u; r_esp -= 4; W32(r_esp, v); }
    /* 004511af: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x4511b4u); f_0058836c();
    /* 004511b4: mov edx, edi */ r_edx = r_edi;
    /* 004511b6: mov dword ptr [edx + 0x108], eax */ W32((u32)(r_edx+0x108u), r_eax);
    /* 004511bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004511be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004511bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004511c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004511c1: push 0x392 */ { u32 v = 0x392u; r_esp -= 4; W32(r_esp, v); }
    /* 004511c6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4511cbu); f_00814298();
    /* 004511cb: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004511ce: mov eax, edi */ r_eax = r_edi;
    /* 004511d0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004511d2: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 004511d5: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
L_004511db:; BB(0x004511db);
    /* 004511db: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004511de: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004511e1: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004511e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004511e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004511ee: mov esp, ebp */ r_esp = r_ebp;
    /* 004511f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004511f1: ret  */ FN_RET(0x00450fc4); r_esp += 4; return;
L_004511f2:; BB(0x004511f2);
    /* 004511f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004511f4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004511f7: jmp 0x4511db */ goto L_004511db;
}

