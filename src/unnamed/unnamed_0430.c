#include "protos.h"

void f_00430000(void)
{
    FN_ENTER(0x00430000);
    goto L_00430000;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x00430000); r_esp += 8; return;
L_00430000:; BB(0x00430000);
    /* 00430000: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430005: je 0x430125 */ if (fZ) goto L_00430125;
L_0043000b:; BB(0x0043000b);
    /* 0043000b: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0043000e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00430011: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00430013: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 00430019: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0043001c: mov dword ptr [esi + 0x73c], edx */ W32((u32)(r_esi+0x73cu), r_edx);
    /* 00430022: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 00430025: mov ecx, dword ptr [esi + 0x6d4] */ r_ecx = R32((u32)(r_esi+0x6d4u));
    /* 0043002b: mov dword ptr [esi + 0x740], ebx */ W32((u32)(r_esi+0x740u), r_ebx);
    /* 00430031: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430033: jne 0x43009e */ if (!fZ) goto L_0043009e;
L_00430035:; BB(0x00430035);
    /* 00430035: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 0043003f: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00430044: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x430049u); f_005caba4();
    /* 00430049: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043004c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043004f: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00430055: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430057: je 0x4301f1 */ if (fZ) goto L_004301f1;
L_0043005d:; BB(0x0043005d);
    /* 0043005d: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 00430067: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043006e: mov eax, esi */ r_eax = r_esi;
    /* 00430070: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00430073: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00430078: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043007a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043007b: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x430080u); f_00435b2c();
    /* 00430080: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0043008a:; BB(0x0043008a);
    /* 0043008a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043008d: mov edx, esi */ r_edx = r_esi;
    /* 0043008f: mov dword ptr [edx + 0x6d4], eax */ W32((u32)(r_edx+0x6d4u), r_eax);
    /* 00430095: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043009c: jmp 0x4300a7 */ goto L_004300a7;
L_0043009e:; BB(0x0043009e);
    /* 0043009e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004300a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004300a2: call 0x435a2c */ r_esp -= 4; W32(r_esp, 0x4300a7u); f_00435a2c();
L_004300a7:; BB(0x004300a7);
    /* 004300a7: mov eax, esi */ r_eax = r_esi;
    /* 004300a9: mov ecx, dword ptr [eax + 0x6d8] */ r_ecx = R32((u32)(r_eax+0x6d8u));
    /* 004300af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300b1: jne 0x43011c */ if (!fZ) goto L_0043011c;
L_004300b3:; BB(0x004300b3);
    /* 004300b3: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004300bd: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 004300c2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4300c7u); f_005caba4();
    /* 004300c7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004300ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004300cd: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004300d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300d5: je 0x4301fb */ if (fZ) goto L_004301fb;
L_004300db:; BB(0x004300db);
    /* 004300db: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 004300e5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004300ec: mov eax, esi */ r_eax = r_esi;
    /* 004300ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004300f1: push 0x125 */ { u32 v = 0x125u; r_esp -= 4; W32(r_esp, v); }
    /* 004300f6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004300f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004300f9: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x4300feu); f_00435b2c();
    /* 004300fe: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00430108:; BB(0x00430108);
    /* 00430108: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043010b: mov edx, esi */ r_edx = r_esi;
    /* 0043010d: mov dword ptr [edx + 0x6d8], eax */ W32((u32)(r_edx+0x6d8u), r_eax);
    /* 00430113: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043011a: jmp 0x430125 */ goto L_00430125;
L_0043011c:; BB(0x0043011c);
    /* 0043011c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043011f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430120: call 0x435a2c */ r_esp -= 4; W32(r_esp, 0x430125u); f_00435a2c();
L_00430125:; BB(0x00430125);
    /* 00430125: mov eax, dword ptr [0x9a474c] */ r_eax = R32((u32)(0x9a474cu));
    /* 0043012a: mov edx, dword ptr [0x9a4750] */ r_edx = R32((u32)(0x9a4750u));
    /* 00430130: mov ebx, dword ptr [0x9a4754] */ r_ebx = R32((u32)(0x9a4754u));
    /* 00430136: mov esi, dword ptr [0x9a4758] */ r_esi = R32((u32)(0x9a4758u));
    /* 0043013c: mov edi, dword ptr [0x9a475c] */ r_edi = R32((u32)(0x9a475cu));
    /* 00430142: mov ecx, dword ptr [0xa43cc8] */ r_ecx = R32((u32)(0xa43cc8u));
    /* 00430148: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0043014e: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00430154: mov dword ptr [ebp - 0x80], ebx */ W32((u32)(r_ebp+0xffffff80u), r_ebx);
    /* 00430157: mov dword ptr [ebp - 0x7c], esi */ W32((u32)(r_ebp+0xffffff84u), r_esi);
    /* 0043015a: mov dword ptr [ebp - 0x78], edi */ W32((u32)(r_ebp+0xffffff88u), r_edi);
    /* 0043015d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043015f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430162: push dword ptr [ecx + 0x6d0] */ { u32 v = R32((u32)(r_ecx+0x6d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00430168: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0043016e: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 00430174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430175: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430179: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x43017eu); f_0051fc9c();
    /* 0043017e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430181: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430184: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430189: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043018a: push 0x331 */ { u32 v = 0x331u; r_esp -= 4; W32(r_esp, v); }
    /* 0043018f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x430194u); f_008144b0();
    /* 00430194: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00430197: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043019a: fld dword ptr [edx + 0x704] */ FPUSH(R_F32((u32)(r_edx+0x704u)));
    /* 004301a0: fcomp dword ptr [0x8fcef8] */ fx_compare(ST(0), R_F32((u32)(0x8fcef8u))); FPOP();
    /* 004301a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004301a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004301a9: jb 0x42ffc5 */ if (fC) goto L_0042ffc5;
L_004301af:; BB(0x004301af);
    /* 004301af: mov dword ptr [edx + 0x6e8], 3 */ W32((u32)(r_edx+0x6e8u), 0x3u);
    /* 004301b9: mov eax, 0x43fa0000 */ r_eax = 0x43fa0000u;
    /* 004301be: mov dword ptr [edx + 0x704], eax */ W32((u32)(r_edx+0x704u), r_eax);
    /* 004301c4: mov edx, dword ptr [edx + 0x744] */ r_edx = R32((u32)(r_edx+0x744u));
    /* 004301ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301cc: je 0x42ffc5 */ if (fZ) goto L_0042ffc5;
L_004301d2:; BB(0x004301d2);
    /* 004301d2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004301d6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301db: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004301df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004301e2: mov dword ptr [edx + 0x744], 0 */ W32((u32)(r_edx+0x744u), 0x0u);
    /* 004301ec: jmp 0x42ffc5 */ goto L_0042ffc5;
L_004301f1:; BB(0x004301f1);
    /* 004301f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301f3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004301f6: jmp 0x43008a */ goto L_0043008a;
L_004301fb:; BB(0x004301fb);
    /* 004301fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00430200: jmp 0x430108 */ goto L_00430108;
}

void f_00430002(void)
{
    FN_ENTER(0x00430002);
    goto L_00430002;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x00430002); r_esp += 8; return;
L_00430002:; BB(0x00430002);
    /* 00430002: or al, 0x85 */ {  u32 a = (u8)r_eax; u32 b = 0x85u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00430004: ror byte ptr [edi], 0x84 */ { u32 ad = (u32)(r_edi); u32 c = (4u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r); fC = (r >> 7) & 1; } }
    /* 00430007: sbb al, byte ptr [ecx] */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = R8((u32)(r_ecx)); u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00430009: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0043000b: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0043000e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00430011: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00430013: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 00430019: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0043001c: mov dword ptr [esi + 0x73c], edx */ W32((u32)(r_esi+0x73cu), r_edx);
    /* 00430022: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 00430025: mov ecx, dword ptr [esi + 0x6d4] */ r_ecx = R32((u32)(r_esi+0x6d4u));
    /* 0043002b: mov dword ptr [esi + 0x740], ebx */ W32((u32)(r_esi+0x740u), r_ebx);
    /* 00430031: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430033: jne 0x43009e */ if (!fZ) goto L_0043009e;
L_00430035:; BB(0x00430035);
    /* 00430035: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 0043003f: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00430044: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x430049u); f_005caba4();
    /* 00430049: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043004c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043004f: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00430055: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430057: je 0x4301f1 */ if (fZ) goto L_004301f1;
L_0043005d:; BB(0x0043005d);
    /* 0043005d: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 00430067: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043006e: mov eax, esi */ r_eax = r_esi;
    /* 00430070: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00430073: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00430078: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043007a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043007b: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x430080u); f_00435b2c();
    /* 00430080: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0043008a:; BB(0x0043008a);
    /* 0043008a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043008d: mov edx, esi */ r_edx = r_esi;
    /* 0043008f: mov dword ptr [edx + 0x6d4], eax */ W32((u32)(r_edx+0x6d4u), r_eax);
    /* 00430095: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043009c: jmp 0x4300a7 */ goto L_004300a7;
L_0043009e:; BB(0x0043009e);
    /* 0043009e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004300a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004300a2: call 0x435a2c */ r_esp -= 4; W32(r_esp, 0x4300a7u); f_00435a2c();
L_004300a7:; BB(0x004300a7);
    /* 004300a7: mov eax, esi */ r_eax = r_esi;
    /* 004300a9: mov ecx, dword ptr [eax + 0x6d8] */ r_ecx = R32((u32)(r_eax+0x6d8u));
    /* 004300af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300b1: jne 0x43011c */ if (!fZ) goto L_0043011c;
L_004300b3:; BB(0x004300b3);
    /* 004300b3: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004300bd: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 004300c2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4300c7u); f_005caba4();
    /* 004300c7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004300ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004300cd: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004300d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300d5: je 0x4301fb */ if (fZ) goto L_004301fb;
L_004300db:; BB(0x004300db);
    /* 004300db: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 004300e5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004300ec: mov eax, esi */ r_eax = r_esi;
    /* 004300ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004300f1: push 0x125 */ { u32 v = 0x125u; r_esp -= 4; W32(r_esp, v); }
    /* 004300f6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004300f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004300f9: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x4300feu); f_00435b2c();
    /* 004300fe: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00430108:; BB(0x00430108);
    /* 00430108: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043010b: mov edx, esi */ r_edx = r_esi;
    /* 0043010d: mov dword ptr [edx + 0x6d8], eax */ W32((u32)(r_edx+0x6d8u), r_eax);
    /* 00430113: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043011a: jmp 0x430125 */ goto L_00430125;
L_0043011c:; BB(0x0043011c);
    /* 0043011c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043011f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430120: call 0x435a2c */ r_esp -= 4; W32(r_esp, 0x430125u); f_00435a2c();
L_00430125:; BB(0x00430125);
    /* 00430125: mov eax, dword ptr [0x9a474c] */ r_eax = R32((u32)(0x9a474cu));
    /* 0043012a: mov edx, dword ptr [0x9a4750] */ r_edx = R32((u32)(0x9a4750u));
    /* 00430130: mov ebx, dword ptr [0x9a4754] */ r_ebx = R32((u32)(0x9a4754u));
    /* 00430136: mov esi, dword ptr [0x9a4758] */ r_esi = R32((u32)(0x9a4758u));
    /* 0043013c: mov edi, dword ptr [0x9a475c] */ r_edi = R32((u32)(0x9a475cu));
    /* 00430142: mov ecx, dword ptr [0xa43cc8] */ r_ecx = R32((u32)(0xa43cc8u));
    /* 00430148: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0043014e: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00430154: mov dword ptr [ebp - 0x80], ebx */ W32((u32)(r_ebp+0xffffff80u), r_ebx);
    /* 00430157: mov dword ptr [ebp - 0x7c], esi */ W32((u32)(r_ebp+0xffffff84u), r_esi);
    /* 0043015a: mov dword ptr [ebp - 0x78], edi */ W32((u32)(r_ebp+0xffffff88u), r_edi);
    /* 0043015d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043015f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430162: push dword ptr [ecx + 0x6d0] */ { u32 v = R32((u32)(r_ecx+0x6d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00430168: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0043016e: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 00430174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430175: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430179: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x43017eu); f_0051fc9c();
    /* 0043017e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430181: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430184: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430189: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043018a: push 0x331 */ { u32 v = 0x331u; r_esp -= 4; W32(r_esp, v); }
    /* 0043018f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x430194u); f_008144b0();
    /* 00430194: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00430197: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043019a: fld dword ptr [edx + 0x704] */ FPUSH(R_F32((u32)(r_edx+0x704u)));
    /* 004301a0: fcomp dword ptr [0x8fcef8] */ fx_compare(ST(0), R_F32((u32)(0x8fcef8u))); FPOP();
    /* 004301a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004301a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004301a9: jb 0x42ffc5 */ if (fC) goto L_0042ffc5;
L_004301af:; BB(0x004301af);
    /* 004301af: mov dword ptr [edx + 0x6e8], 3 */ W32((u32)(r_edx+0x6e8u), 0x3u);
    /* 004301b9: mov eax, 0x43fa0000 */ r_eax = 0x43fa0000u;
    /* 004301be: mov dword ptr [edx + 0x704], eax */ W32((u32)(r_edx+0x704u), r_eax);
    /* 004301c4: mov edx, dword ptr [edx + 0x744] */ r_edx = R32((u32)(r_edx+0x744u));
    /* 004301ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301cc: je 0x42ffc5 */ if (fZ) goto L_0042ffc5;
L_004301d2:; BB(0x004301d2);
    /* 004301d2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004301d6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301db: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004301df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004301e2: mov dword ptr [edx + 0x744], 0 */ W32((u32)(r_edx+0x744u), 0x0u);
    /* 004301ec: jmp 0x42ffc5 */ goto L_0042ffc5;
L_004301f1:; BB(0x004301f1);
    /* 004301f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301f3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004301f6: jmp 0x43008a */ goto L_0043008a;
L_004301fb:; BB(0x004301fb);
    /* 004301fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00430200: jmp 0x430108 */ goto L_00430108;
}

void f_00430004(void)
{
    FN_ENTER(0x00430004);
    goto L_00430004;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x00430004); r_esp += 8; return;
L_00430004:; BB(0x00430004);
    /* 00430004: ror byte ptr [edi], 0x84 */ { u32 ad = (u32)(r_edi); u32 c = (4u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r); fC = (r >> 7) & 1; } }
    /* 00430007: sbb al, byte ptr [ecx] */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = R8((u32)(r_ecx)); u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00430009: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0043000b: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0043000e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00430011: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00430013: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 00430019: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0043001c: mov dword ptr [esi + 0x73c], edx */ W32((u32)(r_esi+0x73cu), r_edx);
    /* 00430022: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 00430025: mov ecx, dword ptr [esi + 0x6d4] */ r_ecx = R32((u32)(r_esi+0x6d4u));
    /* 0043002b: mov dword ptr [esi + 0x740], ebx */ W32((u32)(r_esi+0x740u), r_ebx);
    /* 00430031: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430033: jne 0x43009e */ if (!fZ) goto L_0043009e;
L_00430035:; BB(0x00430035);
    /* 00430035: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 0043003f: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00430044: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x430049u); f_005caba4();
    /* 00430049: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043004c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043004f: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00430055: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430057: je 0x4301f1 */ if (fZ) goto L_004301f1;
L_0043005d:; BB(0x0043005d);
    /* 0043005d: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 00430067: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043006e: mov eax, esi */ r_eax = r_esi;
    /* 00430070: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00430073: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00430078: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043007a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043007b: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x430080u); f_00435b2c();
    /* 00430080: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0043008a:; BB(0x0043008a);
    /* 0043008a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043008d: mov edx, esi */ r_edx = r_esi;
    /* 0043008f: mov dword ptr [edx + 0x6d4], eax */ W32((u32)(r_edx+0x6d4u), r_eax);
    /* 00430095: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043009c: jmp 0x4300a7 */ goto L_004300a7;
L_0043009e:; BB(0x0043009e);
    /* 0043009e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004300a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004300a2: call 0x435a2c */ r_esp -= 4; W32(r_esp, 0x4300a7u); f_00435a2c();
L_004300a7:; BB(0x004300a7);
    /* 004300a7: mov eax, esi */ r_eax = r_esi;
    /* 004300a9: mov ecx, dword ptr [eax + 0x6d8] */ r_ecx = R32((u32)(r_eax+0x6d8u));
    /* 004300af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300b1: jne 0x43011c */ if (!fZ) goto L_0043011c;
L_004300b3:; BB(0x004300b3);
    /* 004300b3: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004300bd: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 004300c2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4300c7u); f_005caba4();
    /* 004300c7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004300ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004300cd: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004300d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300d5: je 0x4301fb */ if (fZ) goto L_004301fb;
L_004300db:; BB(0x004300db);
    /* 004300db: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 004300e5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004300ec: mov eax, esi */ r_eax = r_esi;
    /* 004300ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004300f1: push 0x125 */ { u32 v = 0x125u; r_esp -= 4; W32(r_esp, v); }
    /* 004300f6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004300f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004300f9: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x4300feu); f_00435b2c();
    /* 004300fe: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00430108:; BB(0x00430108);
    /* 00430108: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043010b: mov edx, esi */ r_edx = r_esi;
    /* 0043010d: mov dword ptr [edx + 0x6d8], eax */ W32((u32)(r_edx+0x6d8u), r_eax);
    /* 00430113: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043011a: jmp 0x430125 */ goto L_00430125;
L_0043011c:; BB(0x0043011c);
    /* 0043011c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043011f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430120: call 0x435a2c */ r_esp -= 4; W32(r_esp, 0x430125u); f_00435a2c();
L_00430125:; BB(0x00430125);
    /* 00430125: mov eax, dword ptr [0x9a474c] */ r_eax = R32((u32)(0x9a474cu));
    /* 0043012a: mov edx, dword ptr [0x9a4750] */ r_edx = R32((u32)(0x9a4750u));
    /* 00430130: mov ebx, dword ptr [0x9a4754] */ r_ebx = R32((u32)(0x9a4754u));
    /* 00430136: mov esi, dword ptr [0x9a4758] */ r_esi = R32((u32)(0x9a4758u));
    /* 0043013c: mov edi, dword ptr [0x9a475c] */ r_edi = R32((u32)(0x9a475cu));
    /* 00430142: mov ecx, dword ptr [0xa43cc8] */ r_ecx = R32((u32)(0xa43cc8u));
    /* 00430148: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0043014e: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00430154: mov dword ptr [ebp - 0x80], ebx */ W32((u32)(r_ebp+0xffffff80u), r_ebx);
    /* 00430157: mov dword ptr [ebp - 0x7c], esi */ W32((u32)(r_ebp+0xffffff84u), r_esi);
    /* 0043015a: mov dword ptr [ebp - 0x78], edi */ W32((u32)(r_ebp+0xffffff88u), r_edi);
    /* 0043015d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043015f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430162: push dword ptr [ecx + 0x6d0] */ { u32 v = R32((u32)(r_ecx+0x6d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00430168: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0043016e: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 00430174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430175: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430179: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x43017eu); f_0051fc9c();
    /* 0043017e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430181: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430184: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430189: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043018a: push 0x331 */ { u32 v = 0x331u; r_esp -= 4; W32(r_esp, v); }
    /* 0043018f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x430194u); f_008144b0();
    /* 00430194: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00430197: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043019a: fld dword ptr [edx + 0x704] */ FPUSH(R_F32((u32)(r_edx+0x704u)));
    /* 004301a0: fcomp dword ptr [0x8fcef8] */ fx_compare(ST(0), R_F32((u32)(0x8fcef8u))); FPOP();
    /* 004301a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004301a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004301a9: jb 0x42ffc5 */ if (fC) goto L_0042ffc5;
L_004301af:; BB(0x004301af);
    /* 004301af: mov dword ptr [edx + 0x6e8], 3 */ W32((u32)(r_edx+0x6e8u), 0x3u);
    /* 004301b9: mov eax, 0x43fa0000 */ r_eax = 0x43fa0000u;
    /* 004301be: mov dword ptr [edx + 0x704], eax */ W32((u32)(r_edx+0x704u), r_eax);
    /* 004301c4: mov edx, dword ptr [edx + 0x744] */ r_edx = R32((u32)(r_edx+0x744u));
    /* 004301ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301cc: je 0x42ffc5 */ if (fZ) goto L_0042ffc5;
L_004301d2:; BB(0x004301d2);
    /* 004301d2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004301d6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301db: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004301df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004301e2: mov dword ptr [edx + 0x744], 0 */ W32((u32)(r_edx+0x744u), 0x0u);
    /* 004301ec: jmp 0x42ffc5 */ goto L_0042ffc5;
L_004301f1:; BB(0x004301f1);
    /* 004301f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301f3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004301f6: jmp 0x43008a */ goto L_0043008a;
L_004301fb:; BB(0x004301fb);
    /* 004301fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00430200: jmp 0x430108 */ goto L_00430108;
}

void f_00430009(void)
{
    FN_ENTER(0x00430009);
    goto L_00430009;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x00430009); r_esp += 8; return;
L_00430009:; BB(0x00430009);
    /* 00430009: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0043000b: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0043000e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00430011: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00430013: mov dword ptr [esi + 0x738], eax */ W32((u32)(r_esi+0x738u), r_eax);
    /* 00430019: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0043001c: mov dword ptr [esi + 0x73c], edx */ W32((u32)(r_esi+0x73cu), r_edx);
    /* 00430022: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 00430025: mov ecx, dword ptr [esi + 0x6d4] */ r_ecx = R32((u32)(r_esi+0x6d4u));
    /* 0043002b: mov dword ptr [esi + 0x740], ebx */ W32((u32)(r_esi+0x740u), r_ebx);
    /* 00430031: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430033: jne 0x43009e */ if (!fZ) goto L_0043009e;
L_00430035:; BB(0x00430035);
    /* 00430035: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 0043003f: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00430044: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x430049u); f_005caba4();
    /* 00430049: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043004c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043004f: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00430055: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430057: je 0x4301f1 */ if (fZ) goto L_004301f1;
L_0043005d:; BB(0x0043005d);
    /* 0043005d: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 00430067: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043006e: mov eax, esi */ r_eax = r_esi;
    /* 00430070: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00430073: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00430078: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043007a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043007b: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x430080u); f_00435b2c();
    /* 00430080: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0043008a:; BB(0x0043008a);
    /* 0043008a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043008d: mov edx, esi */ r_edx = r_esi;
    /* 0043008f: mov dword ptr [edx + 0x6d4], eax */ W32((u32)(r_edx+0x6d4u), r_eax);
    /* 00430095: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043009c: jmp 0x4300a7 */ goto L_004300a7;
L_0043009e:; BB(0x0043009e);
    /* 0043009e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004300a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004300a2: call 0x435a2c */ r_esp -= 4; W32(r_esp, 0x4300a7u); f_00435a2c();
L_004300a7:; BB(0x004300a7);
    /* 004300a7: mov eax, esi */ r_eax = r_esi;
    /* 004300a9: mov ecx, dword ptr [eax + 0x6d8] */ r_ecx = R32((u32)(r_eax+0x6d8u));
    /* 004300af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300b1: jne 0x43011c */ if (!fZ) goto L_0043011c;
L_004300b3:; BB(0x004300b3);
    /* 004300b3: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004300bd: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 004300c2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4300c7u); f_005caba4();
    /* 004300c7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004300ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004300cd: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004300d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300d5: je 0x4301fb */ if (fZ) goto L_004301fb;
L_004300db:; BB(0x004300db);
    /* 004300db: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 004300e5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004300ec: mov eax, esi */ r_eax = r_esi;
    /* 004300ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004300f1: push 0x125 */ { u32 v = 0x125u; r_esp -= 4; W32(r_esp, v); }
    /* 004300f6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004300f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004300f9: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x4300feu); f_00435b2c();
    /* 004300fe: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00430108:; BB(0x00430108);
    /* 00430108: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043010b: mov edx, esi */ r_edx = r_esi;
    /* 0043010d: mov dword ptr [edx + 0x6d8], eax */ W32((u32)(r_edx+0x6d8u), r_eax);
    /* 00430113: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043011a: jmp 0x430125 */ goto L_00430125;
L_0043011c:; BB(0x0043011c);
    /* 0043011c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043011f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430120: call 0x435a2c */ r_esp -= 4; W32(r_esp, 0x430125u); f_00435a2c();
L_00430125:; BB(0x00430125);
    /* 00430125: mov eax, dword ptr [0x9a474c] */ r_eax = R32((u32)(0x9a474cu));
    /* 0043012a: mov edx, dword ptr [0x9a4750] */ r_edx = R32((u32)(0x9a4750u));
    /* 00430130: mov ebx, dword ptr [0x9a4754] */ r_ebx = R32((u32)(0x9a4754u));
    /* 00430136: mov esi, dword ptr [0x9a4758] */ r_esi = R32((u32)(0x9a4758u));
    /* 0043013c: mov edi, dword ptr [0x9a475c] */ r_edi = R32((u32)(0x9a475cu));
    /* 00430142: mov ecx, dword ptr [0xa43cc8] */ r_ecx = R32((u32)(0xa43cc8u));
    /* 00430148: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0043014e: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00430154: mov dword ptr [ebp - 0x80], ebx */ W32((u32)(r_ebp+0xffffff80u), r_ebx);
    /* 00430157: mov dword ptr [ebp - 0x7c], esi */ W32((u32)(r_ebp+0xffffff84u), r_esi);
    /* 0043015a: mov dword ptr [ebp - 0x78], edi */ W32((u32)(r_ebp+0xffffff88u), r_edi);
    /* 0043015d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043015f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430162: push dword ptr [ecx + 0x6d0] */ { u32 v = R32((u32)(r_ecx+0x6d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00430168: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0043016e: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 00430174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430175: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430179: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x43017eu); f_0051fc9c();
    /* 0043017e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430181: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430184: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430189: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043018a: push 0x331 */ { u32 v = 0x331u; r_esp -= 4; W32(r_esp, v); }
    /* 0043018f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x430194u); f_008144b0();
    /* 00430194: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00430197: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043019a: fld dword ptr [edx + 0x704] */ FPUSH(R_F32((u32)(r_edx+0x704u)));
    /* 004301a0: fcomp dword ptr [0x8fcef8] */ fx_compare(ST(0), R_F32((u32)(0x8fcef8u))); FPOP();
    /* 004301a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004301a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004301a9: jb 0x42ffc5 */ if (fC) goto L_0042ffc5;
L_004301af:; BB(0x004301af);
    /* 004301af: mov dword ptr [edx + 0x6e8], 3 */ W32((u32)(r_edx+0x6e8u), 0x3u);
    /* 004301b9: mov eax, 0x43fa0000 */ r_eax = 0x43fa0000u;
    /* 004301be: mov dword ptr [edx + 0x704], eax */ W32((u32)(r_edx+0x704u), r_eax);
    /* 004301c4: mov edx, dword ptr [edx + 0x744] */ r_edx = R32((u32)(r_edx+0x744u));
    /* 004301ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301cc: je 0x42ffc5 */ if (fZ) goto L_0042ffc5;
L_004301d2:; BB(0x004301d2);
    /* 004301d2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004301d6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301db: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004301df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004301e2: mov dword ptr [edx + 0x744], 0 */ W32((u32)(r_edx+0x744u), 0x0u);
    /* 004301ec: jmp 0x42ffc5 */ goto L_0042ffc5;
L_004301f1:; BB(0x004301f1);
    /* 004301f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301f3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004301f6: jmp 0x43008a */ goto L_0043008a;
L_004301fb:; BB(0x004301fb);
    /* 004301fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00430200: jmp 0x430108 */ goto L_00430108;
}

void f_00430041(void)
{
    FN_ENTER(0x00430041);
    goto L_00430041;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x00430041); r_esp += 8; return;
L_00430041:; BB(0x00430041);
    /* 00430041: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00430043: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 00430045: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430046: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 00430047: sbb dword ptr [eax], eax */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; W32(ad, r);  }
    /* 00430049: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043004c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043004f: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00430055: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430057: je 0x4301f1 */ if (fZ) goto L_004301f1;
L_0043005d:; BB(0x0043005d);
    /* 0043005d: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 00430067: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043006e: mov eax, esi */ r_eax = r_esi;
    /* 00430070: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00430073: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00430078: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043007a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043007b: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x430080u); f_00435b2c();
    /* 00430080: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0043008a:; BB(0x0043008a);
    /* 0043008a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043008d: mov edx, esi */ r_edx = r_esi;
    /* 0043008f: mov dword ptr [edx + 0x6d4], eax */ W32((u32)(r_edx+0x6d4u), r_eax);
    /* 00430095: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043009c: jmp 0x4300a7 */ goto L_004300a7;
L_004300a7:; BB(0x004300a7);
    /* 004300a7: mov eax, esi */ r_eax = r_esi;
    /* 004300a9: mov ecx, dword ptr [eax + 0x6d8] */ r_ecx = R32((u32)(r_eax+0x6d8u));
    /* 004300af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300b1: jne 0x43011c */ if (!fZ) goto L_0043011c;
L_004300b3:; BB(0x004300b3);
    /* 004300b3: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004300bd: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 004300c2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4300c7u); f_005caba4();
    /* 004300c7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004300ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004300cd: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004300d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300d5: je 0x4301fb */ if (fZ) goto L_004301fb;
L_004300db:; BB(0x004300db);
    /* 004300db: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 004300e5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004300ec: mov eax, esi */ r_eax = r_esi;
    /* 004300ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004300f1: push 0x125 */ { u32 v = 0x125u; r_esp -= 4; W32(r_esp, v); }
    /* 004300f6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004300f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004300f9: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x4300feu); f_00435b2c();
    /* 004300fe: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00430108:; BB(0x00430108);
    /* 00430108: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043010b: mov edx, esi */ r_edx = r_esi;
    /* 0043010d: mov dword ptr [edx + 0x6d8], eax */ W32((u32)(r_edx+0x6d8u), r_eax);
    /* 00430113: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043011a: jmp 0x430125 */ goto L_00430125;
L_0043011c:; BB(0x0043011c);
    /* 0043011c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043011f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430120: call 0x435a2c */ r_esp -= 4; W32(r_esp, 0x430125u); f_00435a2c();
L_00430125:; BB(0x00430125);
    /* 00430125: mov eax, dword ptr [0x9a474c] */ r_eax = R32((u32)(0x9a474cu));
    /* 0043012a: mov edx, dword ptr [0x9a4750] */ r_edx = R32((u32)(0x9a4750u));
    /* 00430130: mov ebx, dword ptr [0x9a4754] */ r_ebx = R32((u32)(0x9a4754u));
    /* 00430136: mov esi, dword ptr [0x9a4758] */ r_esi = R32((u32)(0x9a4758u));
    /* 0043013c: mov edi, dword ptr [0x9a475c] */ r_edi = R32((u32)(0x9a475cu));
    /* 00430142: mov ecx, dword ptr [0xa43cc8] */ r_ecx = R32((u32)(0xa43cc8u));
    /* 00430148: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0043014e: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00430154: mov dword ptr [ebp - 0x80], ebx */ W32((u32)(r_ebp+0xffffff80u), r_ebx);
    /* 00430157: mov dword ptr [ebp - 0x7c], esi */ W32((u32)(r_ebp+0xffffff84u), r_esi);
    /* 0043015a: mov dword ptr [ebp - 0x78], edi */ W32((u32)(r_ebp+0xffffff88u), r_edi);
    /* 0043015d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043015f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430162: push dword ptr [ecx + 0x6d0] */ { u32 v = R32((u32)(r_ecx+0x6d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00430168: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0043016e: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 00430174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430175: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430179: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x43017eu); f_0051fc9c();
    /* 0043017e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430181: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430184: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430189: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043018a: push 0x331 */ { u32 v = 0x331u; r_esp -= 4; W32(r_esp, v); }
    /* 0043018f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x430194u); f_008144b0();
    /* 00430194: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00430197: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043019a: fld dword ptr [edx + 0x704] */ FPUSH(R_F32((u32)(r_edx+0x704u)));
    /* 004301a0: fcomp dword ptr [0x8fcef8] */ fx_compare(ST(0), R_F32((u32)(0x8fcef8u))); FPOP();
    /* 004301a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004301a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004301a9: jb 0x42ffc5 */ if (fC) goto L_0042ffc5;
L_004301af:; BB(0x004301af);
    /* 004301af: mov dword ptr [edx + 0x6e8], 3 */ W32((u32)(r_edx+0x6e8u), 0x3u);
    /* 004301b9: mov eax, 0x43fa0000 */ r_eax = 0x43fa0000u;
    /* 004301be: mov dword ptr [edx + 0x704], eax */ W32((u32)(r_edx+0x704u), r_eax);
    /* 004301c4: mov edx, dword ptr [edx + 0x744] */ r_edx = R32((u32)(r_edx+0x744u));
    /* 004301ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301cc: je 0x42ffc5 */ if (fZ) goto L_0042ffc5;
L_004301d2:; BB(0x004301d2);
    /* 004301d2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004301d6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301db: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004301df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004301e2: mov dword ptr [edx + 0x744], 0 */ W32((u32)(r_edx+0x744u), 0x0u);
    /* 004301ec: jmp 0x42ffc5 */ goto L_0042ffc5;
L_004301f1:; BB(0x004301f1);
    /* 004301f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301f3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004301f6: jmp 0x43008a */ goto L_0043008a;
L_004301fb:; BB(0x004301fb);
    /* 004301fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00430200: jmp 0x430108 */ goto L_00430108;
}

void f_00430042(void)
{
    FN_ENTER(0x00430042);
    goto L_00430042;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x00430042); r_esp += 8; return;
L_00430042:; BB(0x00430042);
    /* 00430042: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00430044: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x430049u); f_005caba4();
    /* 00430049: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0043004c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043004f: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00430055: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430057: je 0x4301f1 */ if (fZ) goto L_004301f1;
L_0043005d:; BB(0x0043005d);
    /* 0043005d: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 00430067: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043006e: mov eax, esi */ r_eax = r_esi;
    /* 00430070: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00430073: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00430078: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043007a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043007b: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x430080u); f_00435b2c();
    /* 00430080: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0043008a:; BB(0x0043008a);
    /* 0043008a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043008d: mov edx, esi */ r_edx = r_esi;
    /* 0043008f: mov dword ptr [edx + 0x6d4], eax */ W32((u32)(r_edx+0x6d4u), r_eax);
    /* 00430095: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043009c: jmp 0x4300a7 */ goto L_004300a7;
L_004300a7:; BB(0x004300a7);
    /* 004300a7: mov eax, esi */ r_eax = r_esi;
    /* 004300a9: mov ecx, dword ptr [eax + 0x6d8] */ r_ecx = R32((u32)(r_eax+0x6d8u));
    /* 004300af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300b1: jne 0x43011c */ if (!fZ) goto L_0043011c;
L_004300b3:; BB(0x004300b3);
    /* 004300b3: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004300bd: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 004300c2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4300c7u); f_005caba4();
    /* 004300c7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004300ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004300cd: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004300d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300d5: je 0x4301fb */ if (fZ) goto L_004301fb;
L_004300db:; BB(0x004300db);
    /* 004300db: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 004300e5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004300ec: mov eax, esi */ r_eax = r_esi;
    /* 004300ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004300f1: push 0x125 */ { u32 v = 0x125u; r_esp -= 4; W32(r_esp, v); }
    /* 004300f6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004300f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004300f9: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x4300feu); f_00435b2c();
    /* 004300fe: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00430108:; BB(0x00430108);
    /* 00430108: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043010b: mov edx, esi */ r_edx = r_esi;
    /* 0043010d: mov dword ptr [edx + 0x6d8], eax */ W32((u32)(r_edx+0x6d8u), r_eax);
    /* 00430113: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043011a: jmp 0x430125 */ goto L_00430125;
L_0043011c:; BB(0x0043011c);
    /* 0043011c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043011f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430120: call 0x435a2c */ r_esp -= 4; W32(r_esp, 0x430125u); f_00435a2c();
L_00430125:; BB(0x00430125);
    /* 00430125: mov eax, dword ptr [0x9a474c] */ r_eax = R32((u32)(0x9a474cu));
    /* 0043012a: mov edx, dword ptr [0x9a4750] */ r_edx = R32((u32)(0x9a4750u));
    /* 00430130: mov ebx, dword ptr [0x9a4754] */ r_ebx = R32((u32)(0x9a4754u));
    /* 00430136: mov esi, dword ptr [0x9a4758] */ r_esi = R32((u32)(0x9a4758u));
    /* 0043013c: mov edi, dword ptr [0x9a475c] */ r_edi = R32((u32)(0x9a475cu));
    /* 00430142: mov ecx, dword ptr [0xa43cc8] */ r_ecx = R32((u32)(0xa43cc8u));
    /* 00430148: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0043014e: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00430154: mov dword ptr [ebp - 0x80], ebx */ W32((u32)(r_ebp+0xffffff80u), r_ebx);
    /* 00430157: mov dword ptr [ebp - 0x7c], esi */ W32((u32)(r_ebp+0xffffff84u), r_esi);
    /* 0043015a: mov dword ptr [ebp - 0x78], edi */ W32((u32)(r_ebp+0xffffff88u), r_edi);
    /* 0043015d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043015f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430162: push dword ptr [ecx + 0x6d0] */ { u32 v = R32((u32)(r_ecx+0x6d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00430168: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0043016e: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 00430174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430175: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430179: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x43017eu); f_0051fc9c();
    /* 0043017e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430181: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430184: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430189: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043018a: push 0x331 */ { u32 v = 0x331u; r_esp -= 4; W32(r_esp, v); }
    /* 0043018f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x430194u); f_008144b0();
    /* 00430194: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00430197: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043019a: fld dword ptr [edx + 0x704] */ FPUSH(R_F32((u32)(r_edx+0x704u)));
    /* 004301a0: fcomp dword ptr [0x8fcef8] */ fx_compare(ST(0), R_F32((u32)(0x8fcef8u))); FPOP();
    /* 004301a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004301a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004301a9: jb 0x42ffc5 */ if (fC) goto L_0042ffc5;
L_004301af:; BB(0x004301af);
    /* 004301af: mov dword ptr [edx + 0x6e8], 3 */ W32((u32)(r_edx+0x6e8u), 0x3u);
    /* 004301b9: mov eax, 0x43fa0000 */ r_eax = 0x43fa0000u;
    /* 004301be: mov dword ptr [edx + 0x704], eax */ W32((u32)(r_edx+0x704u), r_eax);
    /* 004301c4: mov edx, dword ptr [edx + 0x744] */ r_edx = R32((u32)(r_edx+0x744u));
    /* 004301ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301cc: je 0x42ffc5 */ if (fZ) goto L_0042ffc5;
L_004301d2:; BB(0x004301d2);
    /* 004301d2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004301d6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301db: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004301df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004301e2: mov dword ptr [edx + 0x744], 0 */ W32((u32)(r_edx+0x744u), 0x0u);
    /* 004301ec: jmp 0x42ffc5 */ goto L_0042ffc5;
L_004301f1:; BB(0x004301f1);
    /* 004301f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301f3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004301f6: jmp 0x43008a */ goto L_0043008a;
L_004301fb:; BB(0x004301fb);
    /* 004301fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00430200: jmp 0x430108 */ goto L_00430108;
}

void f_0043004f(void)
{
    FN_ENTER(0x0043004f);
    goto L_0043004f;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x0043004f); r_esp += 8; return;
L_0043004f:; BB(0x0043004f);
    /* 0043004f: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00430055: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430057: je 0x4301f1 */ if (fZ) goto L_004301f1;
L_0043005d:; BB(0x0043005d);
    /* 0043005d: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 00430067: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043006e: mov eax, esi */ r_eax = r_esi;
    /* 00430070: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00430073: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00430078: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043007a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043007b: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x430080u); f_00435b2c();
    /* 00430080: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0043008a:; BB(0x0043008a);
    /* 0043008a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043008d: mov edx, esi */ r_edx = r_esi;
    /* 0043008f: mov dword ptr [edx + 0x6d4], eax */ W32((u32)(r_edx+0x6d4u), r_eax);
    /* 00430095: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043009c: jmp 0x4300a7 */ goto L_004300a7;
L_004300a7:; BB(0x004300a7);
    /* 004300a7: mov eax, esi */ r_eax = r_esi;
    /* 004300a9: mov ecx, dword ptr [eax + 0x6d8] */ r_ecx = R32((u32)(r_eax+0x6d8u));
    /* 004300af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300b1: jne 0x43011c */ if (!fZ) goto L_0043011c;
L_004300b3:; BB(0x004300b3);
    /* 004300b3: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004300bd: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 004300c2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4300c7u); f_005caba4();
    /* 004300c7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004300ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004300cd: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004300d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300d5: je 0x4301fb */ if (fZ) goto L_004301fb;
L_004300db:; BB(0x004300db);
    /* 004300db: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 004300e5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004300ec: mov eax, esi */ r_eax = r_esi;
    /* 004300ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004300f1: push 0x125 */ { u32 v = 0x125u; r_esp -= 4; W32(r_esp, v); }
    /* 004300f6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004300f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004300f9: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x4300feu); f_00435b2c();
    /* 004300fe: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00430108:; BB(0x00430108);
    /* 00430108: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043010b: mov edx, esi */ r_edx = r_esi;
    /* 0043010d: mov dword ptr [edx + 0x6d8], eax */ W32((u32)(r_edx+0x6d8u), r_eax);
    /* 00430113: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043011a: jmp 0x430125 */ goto L_00430125;
L_0043011c:; BB(0x0043011c);
    /* 0043011c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043011f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430120: call 0x435a2c */ r_esp -= 4; W32(r_esp, 0x430125u); f_00435a2c();
L_00430125:; BB(0x00430125);
    /* 00430125: mov eax, dword ptr [0x9a474c] */ r_eax = R32((u32)(0x9a474cu));
    /* 0043012a: mov edx, dword ptr [0x9a4750] */ r_edx = R32((u32)(0x9a4750u));
    /* 00430130: mov ebx, dword ptr [0x9a4754] */ r_ebx = R32((u32)(0x9a4754u));
    /* 00430136: mov esi, dword ptr [0x9a4758] */ r_esi = R32((u32)(0x9a4758u));
    /* 0043013c: mov edi, dword ptr [0x9a475c] */ r_edi = R32((u32)(0x9a475cu));
    /* 00430142: mov ecx, dword ptr [0xa43cc8] */ r_ecx = R32((u32)(0xa43cc8u));
    /* 00430148: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0043014e: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00430154: mov dword ptr [ebp - 0x80], ebx */ W32((u32)(r_ebp+0xffffff80u), r_ebx);
    /* 00430157: mov dword ptr [ebp - 0x7c], esi */ W32((u32)(r_ebp+0xffffff84u), r_esi);
    /* 0043015a: mov dword ptr [ebp - 0x78], edi */ W32((u32)(r_ebp+0xffffff88u), r_edi);
    /* 0043015d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043015f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430162: push dword ptr [ecx + 0x6d0] */ { u32 v = R32((u32)(r_ecx+0x6d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00430168: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0043016e: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 00430174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430175: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430179: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x43017eu); f_0051fc9c();
    /* 0043017e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430181: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430184: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430189: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043018a: push 0x331 */ { u32 v = 0x331u; r_esp -= 4; W32(r_esp, v); }
    /* 0043018f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x430194u); f_008144b0();
    /* 00430194: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00430197: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043019a: fld dword ptr [edx + 0x704] */ FPUSH(R_F32((u32)(r_edx+0x704u)));
    /* 004301a0: fcomp dword ptr [0x8fcef8] */ fx_compare(ST(0), R_F32((u32)(0x8fcef8u))); FPOP();
    /* 004301a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004301a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004301a9: jb 0x42ffc5 */ if (fC) goto L_0042ffc5;
L_004301af:; BB(0x004301af);
    /* 004301af: mov dword ptr [edx + 0x6e8], 3 */ W32((u32)(r_edx+0x6e8u), 0x3u);
    /* 004301b9: mov eax, 0x43fa0000 */ r_eax = 0x43fa0000u;
    /* 004301be: mov dword ptr [edx + 0x704], eax */ W32((u32)(r_edx+0x704u), r_eax);
    /* 004301c4: mov edx, dword ptr [edx + 0x744] */ r_edx = R32((u32)(r_edx+0x744u));
    /* 004301ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301cc: je 0x42ffc5 */ if (fZ) goto L_0042ffc5;
L_004301d2:; BB(0x004301d2);
    /* 004301d2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004301d6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301db: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004301df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004301e2: mov dword ptr [edx + 0x744], 0 */ W32((u32)(r_edx+0x744u), 0x0u);
    /* 004301ec: jmp 0x42ffc5 */ goto L_0042ffc5;
L_004301f1:; BB(0x004301f1);
    /* 004301f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301f3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004301f6: jmp 0x43008a */ goto L_0043008a;
L_004301fb:; BB(0x004301fb);
    /* 004301fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00430200: jmp 0x430108 */ goto L_00430108;
}

void f_00430050(void)
{
    FN_ENTER(0x00430050);
    /* 00430050: test dword ptr [edi + edi*8 - 1], ebp */ {  u32 a = R32((u32)(r_edi+r_edi*8+0xffffffffu)); u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;   }
    /* 00430054: inc dword ptr [ebp - 0x6b7bf040] */ { u32 ad = (u32)(r_ebp+0x94840fc0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0043005a: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0043005c: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0043005e: test dword ptr [eax - 1], ebp */ {  u32 a = R32((u32)(r_eax+0xffffffffu)); u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;   }
    UNSUP(0x00430061, "falls out of decoded code");
}

void f_00430053(void)
{
    FN_ENTER(0x00430053);
}

void f_00430055(void)
{
    FN_ENTER(0x00430055);
    goto L_00430055;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x00430055); r_esp += 8; return;
L_00430055:; BB(0x00430055);
    /* 00430055: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430057: je 0x4301f1 */ if (fZ) goto L_004301f1;
L_0043005d:; BB(0x0043005d);
    /* 0043005d: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 00430067: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043006e: mov eax, esi */ r_eax = r_esi;
    /* 00430070: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00430073: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00430078: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043007a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043007b: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x430080u); f_00435b2c();
    /* 00430080: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0043008a:; BB(0x0043008a);
    /* 0043008a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043008d: mov edx, esi */ r_edx = r_esi;
    /* 0043008f: mov dword ptr [edx + 0x6d4], eax */ W32((u32)(r_edx+0x6d4u), r_eax);
    /* 00430095: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043009c: jmp 0x4300a7 */ goto L_004300a7;
L_004300a7:; BB(0x004300a7);
    /* 004300a7: mov eax, esi */ r_eax = r_esi;
    /* 004300a9: mov ecx, dword ptr [eax + 0x6d8] */ r_ecx = R32((u32)(r_eax+0x6d8u));
    /* 004300af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300b1: jne 0x43011c */ if (!fZ) goto L_0043011c;
L_004300b3:; BB(0x004300b3);
    /* 004300b3: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004300bd: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 004300c2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4300c7u); f_005caba4();
    /* 004300c7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004300ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004300cd: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004300d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300d5: je 0x4301fb */ if (fZ) goto L_004301fb;
L_004300db:; BB(0x004300db);
    /* 004300db: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 004300e5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004300ec: mov eax, esi */ r_eax = r_esi;
    /* 004300ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004300f1: push 0x125 */ { u32 v = 0x125u; r_esp -= 4; W32(r_esp, v); }
    /* 004300f6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004300f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004300f9: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x4300feu); f_00435b2c();
    /* 004300fe: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00430108:; BB(0x00430108);
    /* 00430108: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043010b: mov edx, esi */ r_edx = r_esi;
    /* 0043010d: mov dword ptr [edx + 0x6d8], eax */ W32((u32)(r_edx+0x6d8u), r_eax);
    /* 00430113: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043011a: jmp 0x430125 */ goto L_00430125;
L_0043011c:; BB(0x0043011c);
    /* 0043011c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043011f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430120: call 0x435a2c */ r_esp -= 4; W32(r_esp, 0x430125u); f_00435a2c();
L_00430125:; BB(0x00430125);
    /* 00430125: mov eax, dword ptr [0x9a474c] */ r_eax = R32((u32)(0x9a474cu));
    /* 0043012a: mov edx, dword ptr [0x9a4750] */ r_edx = R32((u32)(0x9a4750u));
    /* 00430130: mov ebx, dword ptr [0x9a4754] */ r_ebx = R32((u32)(0x9a4754u));
    /* 00430136: mov esi, dword ptr [0x9a4758] */ r_esi = R32((u32)(0x9a4758u));
    /* 0043013c: mov edi, dword ptr [0x9a475c] */ r_edi = R32((u32)(0x9a475cu));
    /* 00430142: mov ecx, dword ptr [0xa43cc8] */ r_ecx = R32((u32)(0xa43cc8u));
    /* 00430148: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0043014e: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00430154: mov dword ptr [ebp - 0x80], ebx */ W32((u32)(r_ebp+0xffffff80u), r_ebx);
    /* 00430157: mov dword ptr [ebp - 0x7c], esi */ W32((u32)(r_ebp+0xffffff84u), r_esi);
    /* 0043015a: mov dword ptr [ebp - 0x78], edi */ W32((u32)(r_ebp+0xffffff88u), r_edi);
    /* 0043015d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043015f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430162: push dword ptr [ecx + 0x6d0] */ { u32 v = R32((u32)(r_ecx+0x6d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00430168: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0043016e: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 00430174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430175: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430179: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x43017eu); f_0051fc9c();
    /* 0043017e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430181: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430184: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430189: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043018a: push 0x331 */ { u32 v = 0x331u; r_esp -= 4; W32(r_esp, v); }
    /* 0043018f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x430194u); f_008144b0();
    /* 00430194: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00430197: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043019a: fld dword ptr [edx + 0x704] */ FPUSH(R_F32((u32)(r_edx+0x704u)));
    /* 004301a0: fcomp dword ptr [0x8fcef8] */ fx_compare(ST(0), R_F32((u32)(0x8fcef8u))); FPOP();
    /* 004301a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004301a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004301a9: jb 0x42ffc5 */ if (fC) goto L_0042ffc5;
L_004301af:; BB(0x004301af);
    /* 004301af: mov dword ptr [edx + 0x6e8], 3 */ W32((u32)(r_edx+0x6e8u), 0x3u);
    /* 004301b9: mov eax, 0x43fa0000 */ r_eax = 0x43fa0000u;
    /* 004301be: mov dword ptr [edx + 0x704], eax */ W32((u32)(r_edx+0x704u), r_eax);
    /* 004301c4: mov edx, dword ptr [edx + 0x744] */ r_edx = R32((u32)(r_edx+0x744u));
    /* 004301ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301cc: je 0x42ffc5 */ if (fZ) goto L_0042ffc5;
L_004301d2:; BB(0x004301d2);
    /* 004301d2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004301d6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301db: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004301df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004301e2: mov dword ptr [edx + 0x744], 0 */ W32((u32)(r_edx+0x744u), 0x0u);
    /* 004301ec: jmp 0x42ffc5 */ goto L_0042ffc5;
L_004301f1:; BB(0x004301f1);
    /* 004301f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301f3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004301f6: jmp 0x43008a */ goto L_0043008a;
L_004301fb:; BB(0x004301fb);
    /* 004301fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00430200: jmp 0x430108 */ goto L_00430108;
}

void f_0043005d(void)
{
    FN_ENTER(0x0043005d);
    goto L_0043005d;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x0043005d); r_esp += 8; return;
L_0043005d:; BB(0x0043005d);
    /* 0043005d: mov dword ptr [ebp - 0x98], 1 */ W32((u32)(r_ebp+0xffffff68u), 0x1u);
    /* 00430067: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043006e: mov eax, esi */ r_eax = r_esi;
    /* 00430070: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00430073: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00430078: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043007a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043007b: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x430080u); f_00435b2c();
    /* 00430080: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 0043008a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043008d: mov edx, esi */ r_edx = r_esi;
    /* 0043008f: mov dword ptr [edx + 0x6d4], eax */ W32((u32)(r_edx+0x6d4u), r_eax);
    /* 00430095: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043009c: jmp 0x4300a7 */ goto L_004300a7;
L_004300a7:; BB(0x004300a7);
    /* 004300a7: mov eax, esi */ r_eax = r_esi;
    /* 004300a9: mov ecx, dword ptr [eax + 0x6d8] */ r_ecx = R32((u32)(r_eax+0x6d8u));
    /* 004300af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300b1: jne 0x43011c */ if (!fZ) goto L_0043011c;
L_004300b3:; BB(0x004300b3);
    /* 004300b3: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004300bd: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 004300c2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4300c7u); f_005caba4();
    /* 004300c7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004300ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004300cd: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004300d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300d5: je 0x4301fb */ if (fZ) goto L_004301fb;
L_004300db:; BB(0x004300db);
    /* 004300db: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 004300e5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004300ec: mov eax, esi */ r_eax = r_esi;
    /* 004300ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004300f1: push 0x125 */ { u32 v = 0x125u; r_esp -= 4; W32(r_esp, v); }
    /* 004300f6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004300f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004300f9: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x4300feu); f_00435b2c();
    /* 004300fe: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00430108:; BB(0x00430108);
    /* 00430108: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043010b: mov edx, esi */ r_edx = r_esi;
    /* 0043010d: mov dword ptr [edx + 0x6d8], eax */ W32((u32)(r_edx+0x6d8u), r_eax);
    /* 00430113: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043011a: jmp 0x430125 */ goto L_00430125;
L_0043011c:; BB(0x0043011c);
    /* 0043011c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043011f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430120: call 0x435a2c */ r_esp -= 4; W32(r_esp, 0x430125u); f_00435a2c();
L_00430125:; BB(0x00430125);
    /* 00430125: mov eax, dword ptr [0x9a474c] */ r_eax = R32((u32)(0x9a474cu));
    /* 0043012a: mov edx, dword ptr [0x9a4750] */ r_edx = R32((u32)(0x9a4750u));
    /* 00430130: mov ebx, dword ptr [0x9a4754] */ r_ebx = R32((u32)(0x9a4754u));
    /* 00430136: mov esi, dword ptr [0x9a4758] */ r_esi = R32((u32)(0x9a4758u));
    /* 0043013c: mov edi, dword ptr [0x9a475c] */ r_edi = R32((u32)(0x9a475cu));
    /* 00430142: mov ecx, dword ptr [0xa43cc8] */ r_ecx = R32((u32)(0xa43cc8u));
    /* 00430148: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0043014e: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00430154: mov dword ptr [ebp - 0x80], ebx */ W32((u32)(r_ebp+0xffffff80u), r_ebx);
    /* 00430157: mov dword ptr [ebp - 0x7c], esi */ W32((u32)(r_ebp+0xffffff84u), r_esi);
    /* 0043015a: mov dword ptr [ebp - 0x78], edi */ W32((u32)(r_ebp+0xffffff88u), r_edi);
    /* 0043015d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043015f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430162: push dword ptr [ecx + 0x6d0] */ { u32 v = R32((u32)(r_ecx+0x6d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00430168: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0043016e: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 00430174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430175: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430179: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x43017eu); f_0051fc9c();
    /* 0043017e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430181: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430184: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430189: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043018a: push 0x331 */ { u32 v = 0x331u; r_esp -= 4; W32(r_esp, v); }
    /* 0043018f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x430194u); f_008144b0();
    /* 00430194: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00430197: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043019a: fld dword ptr [edx + 0x704] */ FPUSH(R_F32((u32)(r_edx+0x704u)));
    /* 004301a0: fcomp dword ptr [0x8fcef8] */ fx_compare(ST(0), R_F32((u32)(0x8fcef8u))); FPOP();
    /* 004301a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004301a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004301a9: jb 0x42ffc5 */ if (fC) goto L_0042ffc5;
L_004301af:; BB(0x004301af);
    /* 004301af: mov dword ptr [edx + 0x6e8], 3 */ W32((u32)(r_edx+0x6e8u), 0x3u);
    /* 004301b9: mov eax, 0x43fa0000 */ r_eax = 0x43fa0000u;
    /* 004301be: mov dword ptr [edx + 0x704], eax */ W32((u32)(r_edx+0x704u), r_eax);
    /* 004301c4: mov edx, dword ptr [edx + 0x744] */ r_edx = R32((u32)(r_edx+0x744u));
    /* 004301ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301cc: je 0x42ffc5 */ if (fZ) goto L_0042ffc5;
L_004301d2:; BB(0x004301d2);
    /* 004301d2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004301d6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301db: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004301df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004301e2: mov dword ptr [edx + 0x744], 0 */ W32((u32)(r_edx+0x744u), 0x0u);
    /* 004301ec: jmp 0x42ffc5 */ goto L_0042ffc5;
L_004301fb:; BB(0x004301fb);
    /* 004301fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00430200: jmp 0x430108 */ goto L_00430108;
}

void f_00430066(void)
{
    FN_ENTER(0x00430066);
    goto L_00430066;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x00430066); r_esp += 8; return;
L_00430066:; BB(0x00430066);
    /* 00430066: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00430068: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00430069: cld  */ rt_df = 0;
    /* 0043006a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0043006c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0043006e: mov eax, esi */ r_eax = r_esi;
    /* 00430070: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00430073: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00430078: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0043007a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043007b: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x430080u); f_00435b2c();
    /* 00430080: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 0043008a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043008d: mov edx, esi */ r_edx = r_esi;
    /* 0043008f: mov dword ptr [edx + 0x6d4], eax */ W32((u32)(r_edx+0x6d4u), r_eax);
    /* 00430095: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043009c: jmp 0x4300a7 */ goto L_004300a7;
L_004300a7:; BB(0x004300a7);
    /* 004300a7: mov eax, esi */ r_eax = r_esi;
    /* 004300a9: mov ecx, dword ptr [eax + 0x6d8] */ r_ecx = R32((u32)(r_eax+0x6d8u));
    /* 004300af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300b1: jne 0x43011c */ if (!fZ) goto L_0043011c;
L_004300b3:; BB(0x004300b3);
    /* 004300b3: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004300bd: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 004300c2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4300c7u); f_005caba4();
    /* 004300c7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004300ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004300cd: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 004300d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004300d5: je 0x4301fb */ if (fZ) goto L_004301fb;
L_004300db:; BB(0x004300db);
    /* 004300db: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 004300e5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004300ec: mov eax, esi */ r_eax = r_esi;
    /* 004300ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004300f1: push 0x125 */ { u32 v = 0x125u; r_esp -= 4; W32(r_esp, v); }
    /* 004300f6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004300f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004300f9: call 0x435b2c */ r_esp -= 4; W32(r_esp, 0x4300feu); f_00435b2c();
    /* 004300fe: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00430108:; BB(0x00430108);
    /* 00430108: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043010b: mov edx, esi */ r_edx = r_esi;
    /* 0043010d: mov dword ptr [edx + 0x6d8], eax */ W32((u32)(r_edx+0x6d8u), r_eax);
    /* 00430113: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043011a: jmp 0x430125 */ goto L_00430125;
L_0043011c:; BB(0x0043011c);
    /* 0043011c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043011f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430120: call 0x435a2c */ r_esp -= 4; W32(r_esp, 0x430125u); f_00435a2c();
L_00430125:; BB(0x00430125);
    /* 00430125: mov eax, dword ptr [0x9a474c] */ r_eax = R32((u32)(0x9a474cu));
    /* 0043012a: mov edx, dword ptr [0x9a4750] */ r_edx = R32((u32)(0x9a4750u));
    /* 00430130: mov ebx, dword ptr [0x9a4754] */ r_ebx = R32((u32)(0x9a4754u));
    /* 00430136: mov esi, dword ptr [0x9a4758] */ r_esi = R32((u32)(0x9a4758u));
    /* 0043013c: mov edi, dword ptr [0x9a475c] */ r_edi = R32((u32)(0x9a475cu));
    /* 00430142: mov ecx, dword ptr [0xa43cc8] */ r_ecx = R32((u32)(0xa43cc8u));
    /* 00430148: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0043014e: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00430154: mov dword ptr [ebp - 0x80], ebx */ W32((u32)(r_ebp+0xffffff80u), r_ebx);
    /* 00430157: mov dword ptr [ebp - 0x7c], esi */ W32((u32)(r_ebp+0xffffff84u), r_esi);
    /* 0043015a: mov dword ptr [ebp - 0x78], edi */ W32((u32)(r_ebp+0xffffff88u), r_edi);
    /* 0043015d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043015f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430162: push dword ptr [ecx + 0x6d0] */ { u32 v = R32((u32)(r_ecx+0x6d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00430168: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0043016e: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 00430174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430175: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430179: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x43017eu); f_0051fc9c();
    /* 0043017e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430181: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430184: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430189: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043018a: push 0x331 */ { u32 v = 0x331u; r_esp -= 4; W32(r_esp, v); }
    /* 0043018f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x430194u); f_008144b0();
    /* 00430194: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00430197: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043019a: fld dword ptr [edx + 0x704] */ FPUSH(R_F32((u32)(r_edx+0x704u)));
    /* 004301a0: fcomp dword ptr [0x8fcef8] */ fx_compare(ST(0), R_F32((u32)(0x8fcef8u))); FPOP();
    /* 004301a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004301a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004301a9: jb 0x42ffc5 */ if (fC) goto L_0042ffc5;
L_004301af:; BB(0x004301af);
    /* 004301af: mov dword ptr [edx + 0x6e8], 3 */ W32((u32)(r_edx+0x6e8u), 0x3u);
    /* 004301b9: mov eax, 0x43fa0000 */ r_eax = 0x43fa0000u;
    /* 004301be: mov dword ptr [edx + 0x704], eax */ W32((u32)(r_edx+0x704u), r_eax);
    /* 004301c4: mov edx, dword ptr [edx + 0x744] */ r_edx = R32((u32)(r_edx+0x744u));
    /* 004301ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301cc: je 0x42ffc5 */ if (fZ) goto L_0042ffc5;
L_004301d2:; BB(0x004301d2);
    /* 004301d2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004301d6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301db: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004301df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004301e2: mov dword ptr [edx + 0x744], 0 */ W32((u32)(r_edx+0x744u), 0x0u);
    /* 004301ec: jmp 0x42ffc5 */ goto L_0042ffc5;
L_004301fb:; BB(0x004301fb);
    /* 004301fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004301fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00430200: jmp 0x430108 */ goto L_00430108;
}

void f_00430200(void)
{
    FN_ENTER(0x00430200);
    goto L_00430200;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x00430200); r_esp += 8; return;
L_00430108:; BB(0x00430108);
    /* 00430108: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043010b: mov edx, esi */ r_edx = r_esi;
    /* 0043010d: mov dword ptr [edx + 0x6d8], eax */ W32((u32)(r_edx+0x6d8u), r_eax);
    /* 00430113: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043011a: jmp 0x430125 */ goto L_00430125;
L_00430125:; BB(0x00430125);
    /* 00430125: mov eax, dword ptr [0x9a474c] */ r_eax = R32((u32)(0x9a474cu));
    /* 0043012a: mov edx, dword ptr [0x9a4750] */ r_edx = R32((u32)(0x9a4750u));
    /* 00430130: mov ebx, dword ptr [0x9a4754] */ r_ebx = R32((u32)(0x9a4754u));
    /* 00430136: mov esi, dword ptr [0x9a4758] */ r_esi = R32((u32)(0x9a4758u));
    /* 0043013c: mov edi, dword ptr [0x9a475c] */ r_edi = R32((u32)(0x9a475cu));
    /* 00430142: mov ecx, dword ptr [0xa43cc8] */ r_ecx = R32((u32)(0xa43cc8u));
    /* 00430148: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0043014e: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00430154: mov dword ptr [ebp - 0x80], ebx */ W32((u32)(r_ebp+0xffffff80u), r_ebx);
    /* 00430157: mov dword ptr [ebp - 0x7c], esi */ W32((u32)(r_ebp+0xffffff84u), r_esi);
    /* 0043015a: mov dword ptr [ebp - 0x78], edi */ W32((u32)(r_ebp+0xffffff88u), r_edi);
    /* 0043015d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043015f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430162: push dword ptr [ecx + 0x6d0] */ { u32 v = R32((u32)(r_ecx+0x6d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00430168: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0043016e: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 00430174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430175: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430179: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x43017eu); f_0051fc9c();
    /* 0043017e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00430181: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430184: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430188: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430189: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043018a: push 0x331 */ { u32 v = 0x331u; r_esp -= 4; W32(r_esp, v); }
    /* 0043018f: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x430194u); f_008144b0();
    /* 00430194: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00430197: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043019a: fld dword ptr [edx + 0x704] */ FPUSH(R_F32((u32)(r_edx+0x704u)));
    /* 004301a0: fcomp dword ptr [0x8fcef8] */ fx_compare(ST(0), R_F32((u32)(0x8fcef8u))); FPOP();
    /* 004301a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004301a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004301a9: jb 0x42ffc5 */ if (fC) goto L_0042ffc5;
L_004301af:; BB(0x004301af);
    /* 004301af: mov dword ptr [edx + 0x6e8], 3 */ W32((u32)(r_edx+0x6e8u), 0x3u);
    /* 004301b9: mov eax, 0x43fa0000 */ r_eax = 0x43fa0000u;
    /* 004301be: mov dword ptr [edx + 0x704], eax */ W32((u32)(r_edx+0x704u), r_eax);
    /* 004301c4: mov edx, dword ptr [edx + 0x744] */ r_edx = R32((u32)(r_edx+0x744u));
    /* 004301ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301cc: je 0x42ffc5 */ if (fZ) goto L_0042ffc5;
L_004301d2:; BB(0x004301d2);
    /* 004301d2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004301d6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004301db: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004301df: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004301e2: mov dword ptr [edx + 0x744], 0 */ W32((u32)(r_edx+0x744u), 0x0u);
    /* 004301ec: jmp 0x42ffc5 */ goto L_0042ffc5;
L_00430200:; BB(0x00430200);
    /* 00430200: jmp 0x430108 */ goto L_00430108;
}

void f_004303c1(void)
{
    FN_ENTER(0x004303c1);
    goto L_004303c1;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x004303c1); r_esp += 8; return;
L_0043037e:; BB(0x0043037e);
    /* 0043037e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00430381: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00430384: mov dword ptr [eax + 0x3dc], edx */ W32((u32)(r_eax+0x3dcu), r_edx);
    /* 0043038a: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x43038fu); f_00520e6c();
    /* 0043038f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430392: mov edx, dword ptr [edx + 0x3dc] */ r_edx = R32((u32)(r_edx+0x3dcu));
    /* 00430398: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043039a: je 0x4303a5 */ if (fZ) goto L_004303a5;
L_0043039c:; BB(0x0043039c);
    /* 0043039c: mov edx, dword ptr [edx*4 + 0x9a4440] */ r_edx = R32((u32)(r_edx*4+0x9a4440u));
    /* 004303a3: jmp 0x4303ac */ goto L_004303ac;
L_004303a5:; BB(0x004303a5);
    /* 004303a5: mov edx, dword ptr [edx*4 + 0x9a4380] */ r_edx = R32((u32)(r_edx*4+0x9a4380u));
L_004303ac:; BB(0x004303ac);
    /* 004303ac: lea eax, [edx - 0x21] */ r_eax = (u32)(r_edx+0xffffffdfu);
    /* 004303af: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004303b2: ja 0x430507 */ if ((!fC&&!fZ)) goto L_00430507;
L_004303b8:; BB(0x004303b8);
    /* 004303b8: mov eax, dword ptr [eax*4 + 0x8fc940] */ r_eax = R32((u32)(r_eax*4+0x8fc940u));
    /* 004303bf: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004303c1:; BB(0x004303c1);
    /* 004303c1: mov edx, 5 */ r_edx = 0x5u;
    /* 004303c6: jmp 0x43037e */ goto L_0043037e;
L_00430507:; BB(0x00430507);
    /* 00430507: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043050a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043050b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430510u); f_0042abf8();
    /* 00430510: jmp 0x42ffc5 */ goto L_0042ffc5;
}

void f_004303c8(void)
{
    FN_ENTER(0x004303c8);
    goto L_004303c8;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x004303c8); r_esp += 8; return;
L_004303c8:; BB(0x004303c8);
    /* 004303c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004303cb: mov edx, dword ptr [eax + 0x660] */ r_edx = R32((u32)(r_eax+0x660u));
    /* 004303d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004303d3: jne 0x4303df */ if (!fZ) goto L_004303df;
L_004303d5:; BB(0x004303d5);
    /* 004303d5: mov edx, 0x16 */ r_edx = 0x16u;
    /* 004303da: jmp 0x430507 */ goto L_00430507;
L_004303df:; BB(0x004303df);
    /* 004303df: mov edx, 0x17 */ r_edx = 0x17u;
    /* 004303e4: jmp 0x430507 */ goto L_00430507;
L_00430507:; BB(0x00430507);
    /* 00430507: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043050a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043050b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430510u); f_0042abf8();
    /* 00430510: jmp 0x42ffc5 */ goto L_0042ffc5;
}

void f_004303e9(void)
{
    FN_ENTER(0x004303e9);
    goto L_004303e9;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x004303e9); r_esp += 8; return;
L_004303e9:; BB(0x004303e9);
    /* 004303e9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004303ec: mov edx, dword ptr [eax + 0x660] */ r_edx = R32((u32)(r_eax+0x660u));
    /* 004303f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004303f4: jne 0x430400 */ if (!fZ) goto L_00430400;
L_004303f6:; BB(0x004303f6);
    /* 004303f6: mov edx, 0x14 */ r_edx = 0x14u;
    /* 004303fb: jmp 0x430507 */ goto L_00430507;
L_00430400:; BB(0x00430400);
    /* 00430400: mov edx, 0x15 */ r_edx = 0x15u;
    /* 00430405: jmp 0x430507 */ goto L_00430507;
L_00430507:; BB(0x00430507);
    /* 00430507: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043050a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043050b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430510u); f_0042abf8();
    /* 00430510: jmp 0x42ffc5 */ goto L_0042ffc5;
}

void f_0043040a(void)
{
    FN_ENTER(0x0043040a);
    goto L_0043040a;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x0043040a); r_esp += 8; return;
L_0043040a:; BB(0x0043040a);
    /* 0043040a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043040d: mov edx, dword ptr [eax + 0x660] */ r_edx = R32((u32)(r_eax+0x660u));
    /* 00430413: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430415: jne 0x430421 */ if (!fZ) goto L_00430421;
L_00430417:; BB(0x00430417);
    /* 00430417: mov edx, 0x12 */ r_edx = 0x12u;
    /* 0043041c: jmp 0x430507 */ goto L_00430507;
L_00430421:; BB(0x00430421);
    /* 00430421: mov edx, 0x13 */ r_edx = 0x13u;
    /* 00430426: jmp 0x430507 */ goto L_00430507;
L_00430507:; BB(0x00430507);
    /* 00430507: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043050a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043050b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430510u); f_0042abf8();
    /* 00430510: jmp 0x42ffc5 */ goto L_0042ffc5;
}

void f_0043042b(void)
{
    FN_ENTER(0x0043042b);
    goto L_0043042b;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x0043042b); r_esp += 8; return;
L_0043042b:; BB(0x0043042b);
    /* 0043042b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043042e: mov edx, dword ptr [eax + 0x660] */ r_edx = R32((u32)(r_eax+0x660u));
    /* 00430434: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430436: jne 0x430442 */ if (!fZ) goto L_00430442;
L_00430438:; BB(0x00430438);
    /* 00430438: mov edx, 0x10 */ r_edx = 0x10u;
    /* 0043043d: jmp 0x430507 */ goto L_00430507;
L_00430442:; BB(0x00430442);
    /* 00430442: mov edx, 0x11 */ r_edx = 0x11u;
    /* 00430447: jmp 0x430507 */ goto L_00430507;
L_00430507:; BB(0x00430507);
    /* 00430507: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043050a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043050b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430510u); f_0042abf8();
    /* 00430510: jmp 0x42ffc5 */ goto L_0042ffc5;
}

void f_0043044c(void)
{
    FN_ENTER(0x0043044c);
    goto L_0043044c;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x0043044c); r_esp += 8; return;
L_0043044c:; BB(0x0043044c);
    /* 0043044c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043044f: mov edx, dword ptr [eax + 0x660] */ r_edx = R32((u32)(r_eax+0x660u));
    /* 00430455: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430457: jne 0x430463 */ if (!fZ) goto L_00430463;
L_00430459:; BB(0x00430459);
    /* 00430459: mov edx, 4 */ r_edx = 0x4u;
    /* 0043045e: jmp 0x430507 */ goto L_00430507;
L_00430463:; BB(0x00430463);
    /* 00430463: mov edx, 0xa */ r_edx = 0xau;
    /* 00430468: jmp 0x430507 */ goto L_00430507;
L_00430507:; BB(0x00430507);
    /* 00430507: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043050a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043050b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430510u); f_0042abf8();
    /* 00430510: jmp 0x42ffc5 */ goto L_0042ffc5;
}

void f_0043046d(void)
{
    FN_ENTER(0x0043046d);
    goto L_0043046d;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x0043046d); r_esp += 8; return;
L_0043046d:; BB(0x0043046d);
    /* 0043046d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00430470: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x430475u); f_00520bf4();
    /* 00430475: fcomp dword ptr [0x8fcf10] */ fx_compare(ST(0), R_F32((u32)(0x8fcf10u))); FPOP();
    /* 0043047b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043047d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043047e: jbe 0x43048a */ if ((fC||fZ)) goto L_0043048a;
L_00430480:; BB(0x00430480);
    /* 00430480: mov edx, 0x18 */ r_edx = 0x18u;
    /* 00430485: jmp 0x430507 */ goto L_00430507;
L_0043048a:; BB(0x0043048a);
    /* 0043048a: mov edx, 0x19 */ r_edx = 0x19u;
    /* 0043048f: jmp 0x430507 */ goto L_00430507;
L_00430507:; BB(0x00430507);
    /* 00430507: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043050a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043050b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430510u); f_0042abf8();
    /* 00430510: jmp 0x42ffc5 */ goto L_0042ffc5;
}

void f_00430491(void)
{
    FN_ENTER(0x00430491);
    goto L_00430491;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x00430491); r_esp += 8; return;
L_00430491:; BB(0x00430491);
    /* 00430491: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00430494: mov edx, dword ptr [eax + 0x660] */ r_edx = R32((u32)(r_eax+0x660u));
    /* 0043049a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043049c: jne 0x4304a5 */ if (!fZ) goto L_004304a5;
L_0043049e:; BB(0x0043049e);
    /* 0043049e: mov edx, 3 */ r_edx = 0x3u;
    /* 004304a3: jmp 0x430507 */ goto L_00430507;
L_004304a5:; BB(0x004304a5);
    /* 004304a5: mov edx, 0xb */ r_edx = 0xbu;
    /* 004304aa: jmp 0x430507 */ goto L_00430507;
L_00430507:; BB(0x00430507);
    /* 00430507: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043050a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043050b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430510u); f_0042abf8();
    /* 00430510: jmp 0x42ffc5 */ goto L_0042ffc5;
}

void f_004304ac(void)
{
    FN_ENTER(0x004304ac);
    goto L_004304ac;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x004304ac); r_esp += 8; return;
L_004304ac:; BB(0x004304ac);
    /* 004304ac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004304af: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4304b4u); f_00520bf4();
    /* 004304b4: fcomp dword ptr [0x8fcf10] */ fx_compare(ST(0), R_F32((u32)(0x8fcf10u))); FPOP();
    /* 004304ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004304bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004304bd: jbe 0x4304c6 */ if ((fC||fZ)) goto L_004304c6;
L_004304bf:; BB(0x004304bf);
    /* 004304bf: mov edx, 0xc */ r_edx = 0xcu;
    /* 004304c4: jmp 0x430507 */ goto L_00430507;
L_004304c6:; BB(0x004304c6);
    /* 004304c6: mov edx, 0xe */ r_edx = 0xeu;
    /* 004304cb: jmp 0x430507 */ goto L_00430507;
L_00430507:; BB(0x00430507);
    /* 00430507: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043050a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043050b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430510u); f_0042abf8();
    /* 00430510: jmp 0x42ffc5 */ goto L_0042ffc5;
}

void f_004304cd(void)
{
    FN_ENTER(0x004304cd);
    goto L_004304cd;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x004304cd); r_esp += 8; return;
L_004304cd:; BB(0x004304cd);
    /* 004304cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004304d0: mov edx, dword ptr [eax + 0x660] */ r_edx = R32((u32)(r_eax+0x660u));
    /* 004304d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004304d8: jne 0x4304e1 */ if (!fZ) goto L_004304e1;
L_004304da:; BB(0x004304da);
    /* 004304da: mov edx, 5 */ r_edx = 0x5u;
    /* 004304df: jmp 0x430507 */ goto L_00430507;
L_004304e1:; BB(0x004304e1);
    /* 004304e1: mov edx, 9 */ r_edx = 0x9u;
    /* 004304e6: jmp 0x430507 */ goto L_00430507;
L_00430507:; BB(0x00430507);
    /* 00430507: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043050a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043050b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430510u); f_0042abf8();
    /* 00430510: jmp 0x42ffc5 */ goto L_0042ffc5;
}

void f_004304e8(void)
{
    FN_ENTER(0x004304e8);
    goto L_004304e8;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x004304e8); r_esp += 8; return;
L_004304e8:; BB(0x004304e8);
    /* 004304e8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004304eb: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4304f0u); f_00520bf4();
    /* 004304f0: fcomp dword ptr [0x8fcf10] */ fx_compare(ST(0), R_F32((u32)(0x8fcf10u))); FPOP();
    /* 004304f6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004304f8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004304f9: jbe 0x430502 */ if ((fC||fZ)) goto L_00430502;
L_004304fb:; BB(0x004304fb);
    /* 004304fb: mov edx, 8 */ r_edx = 0x8u;
    /* 00430500: jmp 0x430507 */ goto L_00430507;
L_00430502:; BB(0x00430502);
    /* 00430502: mov edx, 6 */ r_edx = 0x6u;
L_00430507:; BB(0x00430507);
    /* 00430507: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043050a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043050b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430510u); f_0042abf8();
    /* 00430510: jmp 0x42ffc5 */ goto L_0042ffc5;
}

void f_00430507(void)
{
    FN_ENTER(0x00430507);
    goto L_00430507;
L_0042ffc5:; BB(0x0042ffc5);
    /* 0042ffc5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0042ffc8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042ffcb: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ffce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ffd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ffd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ffda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ffdb: ret 4 */ FN_RET(0x00430507); r_esp += 8; return;
L_00430507:; BB(0x00430507);
    /* 00430507: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043050a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043050b: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430510u); f_0042abf8();
    /* 00430510: jmp 0x42ffc5 */ goto L_0042ffc5;
}

void f_00430690(void) /* sub_430690 */
{
    FN_ENTER(0x00430690);
    /* 00430690: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00430691: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00430693: mov ecx, dword ptr [ebx + 0x6c0] */ r_ecx = R32((u32)(r_ebx+0x6c0u));
    /* 00430699: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043069b: je 0x4306a2 */ if (fZ) goto L_004306a2;
L_0043069d:; BB(0x0043069d);
    /* 0043069d: call 0x4ba6c0 */ r_esp -= 4; W32(r_esp, 0x4306a2u); f_004ba6c0();
L_004306a2:; BB(0x004306a2);
    /* 004306a2: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004306a8: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004306ab: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 004306b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004306b2: ret  */ FN_RET(0x00430690); r_esp += 4; return;
}

void f_004306a0(void)
{
    FN_ENTER(0x004306a0);
    /* 004306a0: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 004306a2: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 004306a8: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004306ab: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 004306b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004306b2: ret  */ FN_RET(0x004306a0); r_esp += 4; return;
}

void f_004306b4(void) /* sub_4306B4 */
{
    FN_ENTER(0x004306b4);
    /* 004306b4: fld dword ptr [0x8fceec] */ FPUSH(R_F32((u32)(0x8fceecu)));
    /* 004306ba: fld dword ptr [ecx + 0x4fc] */ FPUSH(R_F32((u32)(r_ecx+0x4fcu)));
    /* 004306c0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004306c2: fadd dword ptr [ecx + 0x4f0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4f0u));
    /* 004306c8: fld dword ptr [ecx + 0x500] */ FPUSH(R_F32((u32)(r_ecx+0x500u)));
    /* 004306ce: fld dword ptr [ecx + 0x504] */ FPUSH(R_F32((u32)(r_ecx+0x504u)));
    /* 004306d4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004306d6: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004306d8: fadd dword ptr [ecx + 0x4f4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4f4u));
    /* 004306de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004306e0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004306e2: fadd dword ptr [ecx + 0x4f8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4f8u));
    /* 004306e8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004306ea: fstp dword ptr [ecx + 0x6c4] */ W_F32((u32)(r_ecx+0x6c4u), ST(0)); FPOP();
    /* 004306f0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004306f2: fstp dword ptr [ecx + 0x6c8] */ W_F32((u32)(r_ecx+0x6c8u), ST(0)); FPOP();
    /* 004306f8: fstp dword ptr [ecx + 0x6cc] */ W_F32((u32)(r_ecx+0x6ccu), ST(0)); FPOP();
    /* 004306fe: ret  */ FN_RET(0x004306b4); r_esp += 4; return;
}

void f_00430700(void) /* sub_430700 */
{
    FN_ENTER(0x00430700);
    /* 00430700: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00430701: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00430703: mov ecx, dword ptr [ebx + 0x6c0] */ r_ecx = R32((u32)(r_ebx+0x6c0u));
    /* 00430709: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043070b: je 0x430712 */ if (fZ) goto L_00430712;
L_0043070d:; BB(0x0043070d);
    /* 0043070d: call 0x4ba6b8 */ r_esp -= 4; W32(r_esp, 0x430712u); f_004ba6b8();
L_00430712:; BB(0x00430712);
    /* 00430712: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 00430718: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043071b: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 00430721: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430722: ret  */ FN_RET(0x00430700); r_esp += 4; return;
}

void f_00430724(void) /* sub_430724 */
{
    FN_ENTER(0x00430724);
    /* 00430724: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00430725: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00430728: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0043072a: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0043072e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430731: je 0x430a1c */ if (fZ) goto L_00430a1c;
L_00430737:; BB(0x00430737);
    /* 00430737: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043073a: je 0x4309bd */ if (fZ) goto L_004309bd;
L_00430740:; BB(0x00430740);
    /* 00430740: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430743: je 0x430836 */ if (fZ) goto L_00430836;
L_00430749:; BB(0x00430749);
    /* 00430749: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043074c: je 0x43082f */ if (fZ) goto L_0043082f;
L_00430752:; BB(0x00430752);
    /* 00430752: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430754: jne 0x43082f */ if (!fZ) goto L_0043082f;
L_0043075a:; BB(0x0043075a);
    /* 0043075a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043075c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x430761u); f_007aa094();
    /* 00430761: mov edx, dword ptr [ebx + 0x6e8] */ r_edx = R32((u32)(r_ebx+0x6e8u));
    /* 00430767: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0043076d: fcom dword ptr [0x8fcee0] */ fx_compare(ST(0), R_F32((u32)(0x8fcee0u))); 
    /* 00430773: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00430775: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00430778: mov dword ptr [ebx + 0x6e8], edx */ W32((u32)(r_ebx+0x6e8u), r_edx);
    /* 0043077e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043077f: jb 0x430805 */ if (fC) goto L_00430805;
L_00430785:; BB(0x00430785);
    /* 00430785: fcomp dword ptr [0x8fcedc] */ fx_compare(ST(0), R_F32((u32)(0x8fcedcu))); FPOP();
    /* 0043078b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043078d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043078e: ja 0x430807 */ if ((!fC&&!fZ)) goto L_00430807;
L_00430790:; BB(0x00430790);
    /* 00430790: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00430794: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00430798: fcomp dword ptr [0x8fced8] */ fx_compare(ST(0), R_F32((u32)(0x8fced8u))); FPOP();
    /* 0043079e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004307a0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004307a1: jb 0x430807 */ if (fC) goto L_00430807;
L_004307a3:; BB(0x004307a3);
    /* 004307a3: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 004307a6: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004307a9: mov dword ptr [ebx + 0x6e8], 0 */ W32((u32)(r_ebx+0x6e8u), 0x0u);
    /* 004307b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004307b5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004307b8: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 004307bb: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004307bf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004307c3: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4307c8u); f_00520bf4();
    /* 004307c8: fld dword ptr [0x8fced4] */ FPUSH(R_F32((u32)(0x8fced4u)));
    /* 004307ce: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004307d2: fadd dword ptr [0x8fced0] */ ST(0) = ST(0) + R_F32((u32)(0x8fced0u));
    /* 004307d8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004307da: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004307dc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004307de: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 004307e1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004307e3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004307e7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004307ea: mov dword ptr [esp + 4], 0xc0a00000 */ W32((u32)(r_esp+0x4u), 0xc0a00000u);
    /* 004307f2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004307f5: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 004307fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004307fb: call 0x43aaec */ r_esp -= 4; W32(r_esp, 0x430800u); f_0043aaec();
    /* 00430800: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430803: jmp 0x430807 */ goto L_00430807;
L_00430805:; BB(0x00430805);
    /* 00430805: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00430807:; BB(0x00430807);
    /* 00430807: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043080c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043080e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x430813u); f_007aaa30();
    /* 00430813: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430815: je 0x43082f */ if (fZ) goto L_0043082f;
L_00430817:; BB(0x00430817);
    /* 00430817: add ebx, 0x520 */ {  u32 a = r_ebx; u32 b = 0x520u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043081d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043081f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430820: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430821: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00430822: push 0x339 */ { u32 v = 0x339u; r_esp -= 4; W32(r_esp, v); }
    /* 00430827: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x43082cu); f_00814298();
    /* 0043082c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043082f:; BB(0x0043082f);
    /* 0043082f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430832: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430833: ret 4 */ FN_RET(0x00430724); r_esp += 8; return;
L_00430836:; BB(0x00430836);
    /* 00430836: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 0043083d: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430840: jne 0x43082f */ if (!fZ) goto L_0043082f;
L_00430842:; BB(0x00430842);
    /* 00430842: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 00430848: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043084b: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 00430851: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x430856u); f_00520e6c();
    /* 00430856: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0043085c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043085e: je 0x430869 */ if (fZ) goto L_00430869;
L_00430860:; BB(0x00430860);
    /* 00430860: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 00430867: jmp 0x430870 */ goto L_00430870;
L_00430869:; BB(0x00430869);
    /* 00430869: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_00430870:; BB(0x00430870);
    /* 00430870: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 00430873: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00430876: ja 0x4309b0 */ if ((!fC&&!fZ)) goto L_004309b0;
L_0043087c:; BB(0x0043087c);
    /* 0043087c: mov edx, dword ptr [edx*4 + 0x8fc970] */ r_edx = R32((u32)(r_edx*4+0x8fc970u));
    /* 00430883: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_004309b0:; BB(0x004309b0);
    /* 004309b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004309b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004309b3: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4309b8u); f_0042abf8();
    /* 004309b8: jmp 0x43082f */ goto L_0043082f;
L_004309bd:; BB(0x004309bd);
    /* 004309bd: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 004309c4: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004309c7: jne 0x43082f */ if (!fZ) goto L_0043082f;
L_004309cd:; BB(0x004309cd);
    /* 004309cd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004309cf: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 004309d1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004309d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004309d5: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4309dbu); call_ind(t); }
    /* 004309db: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004309df: mov byte ptr [esp + 0xc], 0x14 */ W8((u32)(r_esp+0xcu), 0x14u);
    /* 004309e4: mov edx, 0x1b */ r_edx = 0x1bu;
    /* 004309e9: mov byte ptr [esp + 0xd], 3 */ W8((u32)(r_esp+0xdu), 0x3u);
    /* 004309ee: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 004309f3: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 004309f9: movzx ebx, word ptr [ebx + 0x394] */ r_ebx = (u32)R16((u32)(r_ebx+0x394u));
    /* 00430a00: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 00430a05: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 00430a0a: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00430a0e: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00430a12: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x430a17u); f_008003e0();
    /* 00430a17: jmp 0x43082f */ goto L_0043082f;
L_00430a1c:; BB(0x00430a1c);
    /* 00430a1c: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 00430a22: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00430a24: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00430a27: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00430a2c: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 00430a32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430a34: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x430a3au); call_ind(t); }
    /* 00430a3a: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 00430a3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430a40: mov esi, eax */ r_esi = r_eax;
L_00430a42:; BB(0x00430a42);
    /* 00430a42: mov ecx, dword ptr [ebx + esi*4 + 0x5e8] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x5e8u));
    /* 00430a49: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00430a4b: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x430a51u); call_ind(t); }
    /* 00430a51: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00430a54: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00430a57: jl 0x430a42 */ if ((fS!=fO)) goto L_00430a42;
L_00430a59:; BB(0x00430a59);
    /* 00430a59: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00430a5d: mov eax, 0xc */ r_eax = 0xcu;
    /* 00430a62: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00430a69: mov edx, 3 */ r_edx = 0x3u;
    /* 00430a6e: mov dword ptr [ebx + 0x65c], edx */ W32((u32)(r_ebx+0x65cu), r_edx);
    /* 00430a74: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430a76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430a77: call 0x42c154 */ r_esp -= 4; W32(r_esp, 0x430a7cu); f_0042c154();
    /* 00430a7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430a7e: mov dword ptr [ebx + 0x6e8], eax */ W32((u32)(r_ebx+0x6e8u), r_eax);
    /* 00430a84: mov dword ptr [ebx + 0x6e4], eax */ W32((u32)(r_ebx+0x6e4u), r_eax);
    /* 00430a8a: jmp 0x43082f */ goto L_0043082f;
}

void f_00430885(void)
{
    FN_ENTER(0x00430885);
    goto L_00430885;
L_0043082f:; BB(0x0043082f);
    /* 0043082f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430832: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430833: ret 4 */ FN_RET(0x00430885); r_esp += 8; return;
L_00430848:; BB(0x00430848);
    /* 00430848: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043084b: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 00430851: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x430856u); f_00520e6c();
    /* 00430856: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0043085c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043085e: je 0x430869 */ if (fZ) goto L_00430869;
L_00430860:; BB(0x00430860);
    /* 00430860: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 00430867: jmp 0x430870 */ goto L_00430870;
L_00430869:; BB(0x00430869);
    /* 00430869: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_00430870:; BB(0x00430870);
    /* 00430870: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 00430873: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00430876: ja 0x4309b0 */ if ((!fC&&!fZ)) goto L_004309b0;
L_0043087c:; BB(0x0043087c);
    /* 0043087c: mov edx, dword ptr [edx*4 + 0x8fc970] */ r_edx = R32((u32)(r_edx*4+0x8fc970u));
    /* 00430883: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00430885:; BB(0x00430885);
    /* 00430885: mov eax, 5 */ r_eax = 0x5u;
    /* 0043088a: jmp 0x430848 */ goto L_00430848;
L_004309b0:; BB(0x004309b0);
    /* 004309b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004309b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004309b3: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4309b8u); f_0042abf8();
    /* 004309b8: jmp 0x43082f */ goto L_0043082f;
}

void f_0043088c(void)
{
    FN_ENTER(0x0043088c);
    goto L_0043088c;
L_0043082f:; BB(0x0043082f);
    /* 0043082f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430832: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430833: ret 4 */ FN_RET(0x0043088c); r_esp += 8; return;
L_0043088c:; BB(0x0043088c);
    /* 0043088c: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 00430892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430894: jne 0x4308a0 */ if (!fZ) goto L_004308a0;
L_00430896:; BB(0x00430896);
    /* 00430896: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0043089b: jmp 0x4309b0 */ goto L_004309b0;
L_004308a0:; BB(0x004308a0);
    /* 004308a0: mov eax, 0x17 */ r_eax = 0x17u;
    /* 004308a5: jmp 0x4309b0 */ goto L_004309b0;
L_004309b0:; BB(0x004309b0);
    /* 004309b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004309b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004309b3: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4309b8u); f_0042abf8();
    /* 004309b8: jmp 0x43082f */ goto L_0043082f;
}

void f_004308aa(void)
{
    FN_ENTER(0x004308aa);
    goto L_004308aa;
L_0043082f:; BB(0x0043082f);
    /* 0043082f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430832: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430833: ret 4 */ FN_RET(0x004308aa); r_esp += 8; return;
L_004308aa:; BB(0x004308aa);
    /* 004308aa: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 004308b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004308b2: jne 0x4308be */ if (!fZ) goto L_004308be;
L_004308b4:; BB(0x004308b4);
    /* 004308b4: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004308b9: jmp 0x4309b0 */ goto L_004309b0;
L_004308be:; BB(0x004308be);
    /* 004308be: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004308c3: jmp 0x4309b0 */ goto L_004309b0;
L_004309b0:; BB(0x004309b0);
    /* 004309b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004309b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004309b3: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4309b8u); f_0042abf8();
    /* 004309b8: jmp 0x43082f */ goto L_0043082f;
}

void f_004308c8(void)
{
    FN_ENTER(0x004308c8);
    goto L_004308c8;
L_0043082f:; BB(0x0043082f);
    /* 0043082f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430832: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430833: ret 4 */ FN_RET(0x004308c8); r_esp += 8; return;
L_004308c8:; BB(0x004308c8);
    /* 004308c8: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 004308ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004308d0: jne 0x4308dc */ if (!fZ) goto L_004308dc;
L_004308d2:; BB(0x004308d2);
    /* 004308d2: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004308d7: jmp 0x4309b0 */ goto L_004309b0;
L_004308dc:; BB(0x004308dc);
    /* 004308dc: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004308e1: jmp 0x4309b0 */ goto L_004309b0;
L_004309b0:; BB(0x004309b0);
    /* 004309b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004309b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004309b3: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4309b8u); f_0042abf8();
    /* 004309b8: jmp 0x43082f */ goto L_0043082f;
}

void f_004308e6(void)
{
    FN_ENTER(0x004308e6);
    goto L_004308e6;
L_0043082f:; BB(0x0043082f);
    /* 0043082f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430832: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430833: ret 4 */ FN_RET(0x004308e6); r_esp += 8; return;
L_004308e6:; BB(0x004308e6);
    /* 004308e6: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 004308ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004308ee: jne 0x4308fa */ if (!fZ) goto L_004308fa;
L_004308f0:; BB(0x004308f0);
    /* 004308f0: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004308f5: jmp 0x4309b0 */ goto L_004309b0;
L_004308fa:; BB(0x004308fa);
    /* 004308fa: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004308ff: jmp 0x4309b0 */ goto L_004309b0;
L_004309b0:; BB(0x004309b0);
    /* 004309b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004309b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004309b3: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4309b8u); f_0042abf8();
    /* 004309b8: jmp 0x43082f */ goto L_0043082f;
}

void f_00430904(void)
{
    FN_ENTER(0x00430904);
    goto L_00430904;
L_0043082f:; BB(0x0043082f);
    /* 0043082f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430832: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430833: ret 4 */ FN_RET(0x00430904); r_esp += 8; return;
L_00430904:; BB(0x00430904);
    /* 00430904: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0043090a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043090c: jne 0x430918 */ if (!fZ) goto L_00430918;
L_0043090e:; BB(0x0043090e);
    /* 0043090e: mov eax, 4 */ r_eax = 0x4u;
    /* 00430913: jmp 0x4309b0 */ goto L_004309b0;
L_00430918:; BB(0x00430918);
    /* 00430918: mov eax, 0xa */ r_eax = 0xau;
    /* 0043091d: jmp 0x4309b0 */ goto L_004309b0;
L_004309b0:; BB(0x004309b0);
    /* 004309b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004309b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004309b3: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4309b8u); f_0042abf8();
    /* 004309b8: jmp 0x43082f */ goto L_0043082f;
}

void f_00430922(void)
{
    FN_ENTER(0x00430922);
    goto L_00430922;
L_0043082f:; BB(0x0043082f);
    /* 0043082f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430832: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430833: ret 4 */ FN_RET(0x00430922); r_esp += 8; return;
L_00430922:; BB(0x00430922);
    /* 00430922: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430924: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x430929u); f_00520bf4();
    /* 00430929: fcomp dword ptr [0x8fcee4] */ fx_compare(ST(0), R_F32((u32)(0x8fcee4u))); FPOP();
    /* 0043092f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00430931: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00430932: jbe 0x43093b */ if ((fC||fZ)) goto L_0043093b;
L_00430934:; BB(0x00430934);
    /* 00430934: mov eax, 0x18 */ r_eax = 0x18u;
    /* 00430939: jmp 0x4309b0 */ goto L_004309b0;
L_0043093b:; BB(0x0043093b);
    /* 0043093b: mov eax, 0x19 */ r_eax = 0x19u;
    /* 00430940: jmp 0x4309b0 */ goto L_004309b0;
L_004309b0:; BB(0x004309b0);
    /* 004309b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004309b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004309b3: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4309b8u); f_0042abf8();
    /* 004309b8: jmp 0x43082f */ goto L_0043082f;
}

void f_00430942(void)
{
    FN_ENTER(0x00430942);
    goto L_00430942;
L_0043082f:; BB(0x0043082f);
    /* 0043082f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430832: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430833: ret 4 */ FN_RET(0x00430942); r_esp += 8; return;
L_00430942:; BB(0x00430942);
    /* 00430942: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 00430948: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043094a: jne 0x430953 */ if (!fZ) goto L_00430953;
L_0043094c:; BB(0x0043094c);
    /* 0043094c: mov eax, 3 */ r_eax = 0x3u;
    /* 00430951: jmp 0x4309b0 */ goto L_004309b0;
L_00430953:; BB(0x00430953);
    /* 00430953: mov eax, 0xb */ r_eax = 0xbu;
    /* 00430958: jmp 0x4309b0 */ goto L_004309b0;
L_004309b0:; BB(0x004309b0);
    /* 004309b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004309b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004309b3: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4309b8u); f_0042abf8();
    /* 004309b8: jmp 0x43082f */ goto L_0043082f;
}

void f_0043095a(void)
{
    FN_ENTER(0x0043095a);
    goto L_0043095a;
L_0043082f:; BB(0x0043082f);
    /* 0043082f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430832: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430833: ret 4 */ FN_RET(0x0043095a); r_esp += 8; return;
L_0043095a:; BB(0x0043095a);
    /* 0043095a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043095c: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x430961u); f_00520bf4();
    /* 00430961: fcomp dword ptr [0x8fcee4] */ fx_compare(ST(0), R_F32((u32)(0x8fcee4u))); FPOP();
    /* 00430967: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00430969: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043096a: jbe 0x430973 */ if ((fC||fZ)) goto L_00430973;
L_0043096c:; BB(0x0043096c);
    /* 0043096c: mov eax, 0xc */ r_eax = 0xcu;
    /* 00430971: jmp 0x4309b0 */ goto L_004309b0;
L_00430973:; BB(0x00430973);
    /* 00430973: mov eax, 0xe */ r_eax = 0xeu;
    /* 00430978: jmp 0x4309b0 */ goto L_004309b0;
L_004309b0:; BB(0x004309b0);
    /* 004309b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004309b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004309b3: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4309b8u); f_0042abf8();
    /* 004309b8: jmp 0x43082f */ goto L_0043082f;
}

void f_0043097a(void)
{
    FN_ENTER(0x0043097a);
    goto L_0043097a;
L_0043082f:; BB(0x0043082f);
    /* 0043082f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430832: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430833: ret 4 */ FN_RET(0x0043097a); r_esp += 8; return;
L_0043097a:; BB(0x0043097a);
    /* 0043097a: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 00430980: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430982: jne 0x43098b */ if (!fZ) goto L_0043098b;
L_00430984:; BB(0x00430984);
    /* 00430984: mov eax, 5 */ r_eax = 0x5u;
    /* 00430989: jmp 0x4309b0 */ goto L_004309b0;
L_0043098b:; BB(0x0043098b);
    /* 0043098b: mov eax, 9 */ r_eax = 0x9u;
    /* 00430990: jmp 0x4309b0 */ goto L_004309b0;
L_004309b0:; BB(0x004309b0);
    /* 004309b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004309b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004309b3: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4309b8u); f_0042abf8();
    /* 004309b8: jmp 0x43082f */ goto L_0043082f;
}

void f_00430992(void)
{
    FN_ENTER(0x00430992);
    goto L_00430992;
L_0043082f:; BB(0x0043082f);
    /* 0043082f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430832: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430833: ret 4 */ FN_RET(0x00430992); r_esp += 8; return;
L_00430992:; BB(0x00430992);
    /* 00430992: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430994: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x430999u); f_00520bf4();
    /* 00430999: fcomp dword ptr [0x8fcee4] */ fx_compare(ST(0), R_F32((u32)(0x8fcee4u))); FPOP();
    /* 0043099f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004309a1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004309a2: jbe 0x4309ab */ if ((fC||fZ)) goto L_004309ab;
L_004309a4:; BB(0x004309a4);
    /* 004309a4: mov eax, 8 */ r_eax = 0x8u;
    /* 004309a9: jmp 0x4309b0 */ goto L_004309b0;
L_004309ab:; BB(0x004309ab);
    /* 004309ab: mov eax, 6 */ r_eax = 0x6u;
L_004309b0:; BB(0x004309b0);
    /* 004309b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004309b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004309b3: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4309b8u); f_0042abf8();
    /* 004309b8: jmp 0x43082f */ goto L_0043082f;
}

void f_004309b0(void)
{
    FN_ENTER(0x004309b0);
    goto L_004309b0;
L_0043082f:; BB(0x0043082f);
    /* 0043082f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430832: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430833: ret 4 */ FN_RET(0x004309b0); r_esp += 8; return;
L_004309b0:; BB(0x004309b0);
    /* 004309b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004309b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004309b3: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x4309b8u); f_0042abf8();
    /* 004309b8: jmp 0x43082f */ goto L_0043082f;
}

void f_00430a90(void) /* sub_430A90 */
{
    FN_ENTER(0x00430a90);
    /* 00430a90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00430a91: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00430a94: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00430a96: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00430a9a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430a9d: je 0x430fb4 */ if (fZ) goto L_00430fb4;
L_00430aa3:; BB(0x00430aa3);
    /* 00430aa3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430aa6: je 0x430f62 */ if (fZ) goto L_00430f62;
L_00430aac:; BB(0x00430aac);
    /* 00430aac: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430aaf: je 0x430dd8 */ if (fZ) goto L_00430dd8;
L_00430ab5:; BB(0x00430ab5);
    /* 00430ab5: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430ab8: je 0x430c40 */ if (fZ) goto L_00430c40;
L_00430abe:; BB(0x00430abe);
    /* 00430abe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430ac0: jne 0x430c40 */ if (!fZ) goto L_00430c40;
L_00430ac6:; BB(0x00430ac6);
    /* 00430ac6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430ac8: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x430acdu); f_007aa094();
    /* 00430acd: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 00430ad3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430ad5: je 0x430d27 */ if (fZ) goto L_00430d27;
L_00430adb:; BB(0x00430adb);
    /* 00430adb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430ade: je 0x430d8f */ if (fZ) goto L_00430d8f;
L_00430ae4:; BB(0x00430ae4);
    /* 00430ae4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430ae7: je 0x430c47 */ if (fZ) goto L_00430c47;
L_00430aed:; BB(0x00430aed);
    /* 00430aed: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430af0: je 0x430b97 */ if (fZ) goto L_00430b97;
L_00430af6:; BB(0x00430af6);
    /* 00430af6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430af9: jne 0x430b53 */ if (!fZ) goto L_00430b53;
L_00430afb:; BB(0x00430afb);
    /* 00430afb: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 00430b01: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00430b04: mov dword ptr [ebx + 0x6ec], eax */ W32((u32)(r_ebx+0x6ecu), r_eax);
    /* 00430b0a: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00430b0d: jl 0x430c40 */ if ((fS!=fO)) goto L_00430c40;
L_00430b13:; BB(0x00430b13);
    /* 00430b13: mov dword ptr [ebx + 0x6e8], 5 */ W32((u32)(r_ebx+0x6e8u), 0x5u);
    /* 00430b1d: mov eax, 1 */ r_eax = 0x1u;
    /* 00430b22: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00430b29: mov dword ptr [ebx + 0x65c], eax */ W32((u32)(r_ebx+0x65cu), r_eax);
    /* 00430b2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430b30: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430b32: call 0x42c154 */ r_esp -= 4; W32(r_esp, 0x430b37u); f_0042c154();
    /* 00430b37: mov eax, dword ptr [0xa43ca0] */ r_eax = R32((u32)(0xa43ca0u));
    /* 00430b3c: mov dword ptr [ebx + 0x64], 0 */ W32((u32)(r_ebx+0x64u), 0x0u);
    /* 00430b43: mov dword ptr [ebx + 0x6ac], eax */ W32((u32)(r_ebx+0x6acu), r_eax);
    /* 00430b49: call 0x43c3fc */ r_esp -= 4; W32(r_esp, 0x430b4eu); f_0043c3fc();
    /* 00430b4e: jmp 0x430c40 */ goto L_00430c40;
L_00430b53:; BB(0x00430b53);
    /* 00430b53: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430b56: jne 0x430c40 */ if (!fZ) goto L_00430c40;
L_00430b5c:; BB(0x00430b5c);
    /* 00430b5c: fld dword ptr [0x8fceb4] */ FPUSH(R_F32((u32)(0x8fceb4u)));
    /* 00430b62: fadd dword ptr [ebx + 0x6ac] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x6acu));
    /* 00430b68: fcom dword ptr [0x8fcecc] */ fx_compare(ST(0), R_F32((u32)(0x8fceccu))); 
    /* 00430b6e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00430b70: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00430b71: jb 0x430b8c */ if (fC) goto L_00430b8c;
L_00430b73:; BB(0x00430b73);
    /* 00430b73: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00430b75: mov dword ptr [ebx + 0x6e8], 6 */ W32((u32)(r_ebx+0x6e8u), 0x6u);
    /* 00430b7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430b81: mov dword ptr [ebx + 0x6ac], eax */ W32((u32)(r_ebx+0x6acu), r_eax);
    /* 00430b87: jmp 0x430c40 */ goto L_00430c40;
L_00430b8c:; BB(0x00430b8c);
    /* 00430b8c: fstp dword ptr [ebx + 0x6ac] */ W_F32((u32)(r_ebx+0x6acu), ST(0)); FPOP();
    /* 00430b92: jmp 0x430c40 */ goto L_00430c40;
L_00430b97:; BB(0x00430b97);
    /* 00430b97: fld dword ptr [0x8fcec8] */ FPUSH(R_F32((u32)(0x8fcec8u)));
    /* 00430b9d: fadd dword ptr [ebx + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc8u));
    /* 00430ba3: fld dword ptr [0x8fcecc] */ FPUSH(R_F32((u32)(0x8fceccu)));
    /* 00430ba9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00430bab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00430bad: fld dword ptr [ebx + 0x6ac] */ FPUSH(R_F32((u32)(r_ebx+0x6acu)));
    /* 00430bb3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00430bb4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00430bb6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00430bb8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00430bba: jb 0x430bbe */ if (fC) goto L_00430bbe;
L_00430bbc:; BB(0x00430bbc);
    /* 00430bbc: fst st(2) */ ST(2) = ST(0);
L_00430bbe:; BB(0x00430bbe);
    /* 00430bbe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00430bc0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00430bc2: fstp dword ptr [ebx + 0xc8] */ W_F32((u32)(r_ebx+0xc8u), ST(0)); FPOP();
    /* 00430bc8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00430bc9: jbe 0x430bf5 */ if ((fC||fZ)) goto L_00430bf5;
L_00430bcb:; BB(0x00430bcb);
    /* 00430bcb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00430bcd: fld dword ptr [0x8fceb0] */ FPUSH(R_F32((u32)(0x8fceb0u)));
    /* 00430bd3: fadd dword ptr [ebx + 0x708] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x708u));
    /* 00430bd9: fld dword ptr [0x8fcec0] */ FPUSH(R_F32((u32)(0x8fcec0u)));
    /* 00430bdf: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 00430be2: fld dword ptr [ebx + 0x6ac] */ FPUSH(R_F32((u32)(r_ebx+0x6acu)));
    /* 00430be8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00430bea: fstp dword ptr [ebx + 0x708] */ W_F32((u32)(r_ebx+0x708u), ST(0)); FPOP();
    /* 00430bf0: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 00430bf3: jmp 0x430c01 */ goto L_00430c01;
L_00430bf5:; BB(0x00430bf5);
    /* 00430bf5: fld dword ptr [0x8fcec4] */ FPUSH(R_F32((u32)(0x8fcec4u)));
    /* 00430bfb: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 00430bfe: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
L_00430c01:; BB(0x00430c01);
    /* 00430c01: fadd dword ptr [ebx + 0x708] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x708u));
    /* 00430c07: fcom dword ptr [0xa43ca0] */ fx_compare(ST(0), R_F32((u32)(0xa43ca0u))); 
    /* 00430c0d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00430c0f: fstp dword ptr [ebx + 0x6ac] */ W_F32((u32)(r_ebx+0x6acu), ST(0)); FPOP();
    /* 00430c15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00430c16: jae 0x430c40 */ if (!fC) goto L_00430c40;
L_00430c18:; BB(0x00430c18);
    /* 00430c18: mov dword ptr [ebx + 0x6e8], 4 */ W32((u32)(r_ebx+0x6e8u), 0x4u);
    /* 00430c22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430c24: mov dword ptr [ebx + 0x6ec], eax */ W32((u32)(r_ebx+0x6ecu), r_eax);
    /* 00430c2a: add ebx, 0x520 */ {  u32 a = r_ebx; u32 b = 0x520u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00430c30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430c31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430c32: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00430c33: push 0x339 */ { u32 v = 0x339u; r_esp -= 4; W32(r_esp, v); }
    /* 00430c38: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x430c3du); f_00814298();
    /* 00430c3d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00430c40:; BB(0x00430c40);
    /* 00430c40: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430c43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430c44: ret 4 */ FN_RET(0x00430a90); r_esp += 8; return;
L_00430c47:; BB(0x00430c47);
    /* 00430c47: mov eax, dword ptr [ebx + 0x6f0] */ r_eax = R32((u32)(r_ebx+0x6f0u));
    /* 00430c4d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00430c50: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00430c53: jl 0x430c61 */ if ((fS!=fO)) goto L_00430c61;
L_00430c55:; BB(0x00430c55);
    /* 00430c55: mov dword ptr [ebx + 0x6f0], 0 */ W32((u32)(r_ebx+0x6f0u), 0x0u);
    /* 00430c5f: jmp 0x430c67 */ goto L_00430c67;
L_00430c61:; BB(0x00430c61);
    /* 00430c61: mov dword ptr [ebx + 0x6f0], eax */ W32((u32)(r_ebx+0x6f0u), r_eax);
L_00430c67:; BB(0x00430c67);
    /* 00430c67: lea edx, [ebx + 0x520] */ r_edx = (u32)(r_ebx+0x520u);
    /* 00430c6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430c6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430c70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430c71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00430c72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00430c73: push 0x329 */ { u32 v = 0x329u; r_esp -= 4; W32(r_esp, v); }
    /* 00430c78: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x430c7du); f_008144b0();
    /* 00430c7d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00430c80: fld dword ptr [0x8fceac] */ FPUSH(R_F32((u32)(0x8fceacu)));
    /* 00430c86: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 00430c89: fcom dword ptr [0x8fcea8] */ fx_compare(ST(0), R_F32((u32)(0x8fcea8u))); 
    /* 00430c8f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00430c91: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 00430c94: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00430c95: jb 0x430cab */ if (fC) goto L_00430cab;
L_00430c97:; BB(0x00430c97);
    /* 00430c97: mov dword ptr [ebx + 0x6e8], 3 */ W32((u32)(r_ebx+0x6e8u), 0x3u);
    /* 00430ca1: mov dword ptr [ebx + 0x708], 0 */ W32((u32)(r_ebx+0x708u), 0x0u);
L_00430cab:; BB(0x00430cab);
    /* 00430cab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430cad: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x430cb2u); f_007751b0();
    /* 00430cb2: mov edx, dword ptr [0xa43cc8] */ r_edx = R32((u32)(0xa43cc8u));
    /* 00430cb8: fcomp dword ptr [edx + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x10u))); FPOP();
    /* 00430cbb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00430cbd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00430cbe: ja 0x430c40 */ if ((!fC&&!fZ)) goto L_00430c40;
L_00430cc0:; BB(0x00430cc0);
    /* 00430cc0: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00430cc3: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00430cc6: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00430cc9: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00430ccc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430cce: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00430cd2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00430cd6: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x430cdbu); f_00520bf4();
    /* 00430cdb: mov eax, dword ptr [0xa43cc8] */ r_eax = R32((u32)(0xa43cc8u));
    /* 00430ce0: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00430ce3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00430ce5: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 00430ce8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430cea: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00430ced: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x430cf2u); f_007751b0();
    /* 00430cf2: fld dword ptr [0x8fcebc] */ FPUSH(R_F32((u32)(0x8fcebcu)));
    /* 00430cf8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00430cfa: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00430cfe: fld dword ptr [0x8fceb8] */ FPUSH(R_F32((u32)(0x8fceb8u)));
    /* 00430d04: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00430d08: fadd dword ptr [ebx + 0x6ac] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x6acu));
    /* 00430d0e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00430d10: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00430d14: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00430d18: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00430d1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430d1c: call 0x439bf0 */ r_esp -= 4; W32(r_esp, 0x430d21u); f_00439bf0();
    /* 00430d21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00430d22: jmp 0x430c40 */ goto L_00430c40;
L_00430d27:; BB(0x00430d27);
    /* 00430d27: fld dword ptr [0x8fd054] */ FPUSH(R_F32((u32)(0x8fd054u)));
    /* 00430d2d: fadd dword ptr [ebx + 0x704] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x704u));
    /* 00430d33: fld dword ptr [0x8fcea0] */ FPUSH(R_F32((u32)(0x8fcea0u)));
    /* 00430d39: fadd dword ptr [ebx + 0x708] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x708u));
    /* 00430d3f: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 00430d42: fld dword ptr [ebx + 0x6ac] */ FPUSH(R_F32((u32)(r_ebx+0x6acu)));
    /* 00430d48: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00430d4a: fst dword ptr [ebx + 0x704] */ W_F32((u32)(r_ebx+0x704u), ST(0));
    /* 00430d50: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00430d52: fst dword ptr [ebx + 0x708] */ W_F32((u32)(r_ebx+0x708u), ST(0));
    /* 00430d58: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00430d5a: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00430d5c: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 00430d5f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00430d61: fcom dword ptr [0xa43ca0] */ fx_compare(ST(0), R_F32((u32)(0xa43ca0u))); 
    /* 00430d67: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00430d69: fstp dword ptr [ebx + 0x6ac] */ W_F32((u32)(r_ebx+0x6acu), ST(0)); FPOP();
    /* 00430d6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00430d70: jae 0x430c40 */ if (!fC) goto L_00430c40;
L_00430d76:; BB(0x00430d76);
    /* 00430d76: mov dword ptr [ebx + 0x6e8], 1 */ W32((u32)(r_ebx+0x6e8u), 0x1u);
    /* 00430d80: mov dword ptr [ebx + 0x6ec], 0 */ W32((u32)(r_ebx+0x6ecu), 0x0u);
    /* 00430d8a: jmp 0x430c40 */ goto L_00430c40;
L_00430d8f:; BB(0x00430d8f);
    /* 00430d8f: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 00430d95: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00430d98: mov dword ptr [ebx + 0x6ec], eax */ W32((u32)(r_ebx+0x6ecu), r_eax);
    /* 00430d9e: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00430da1: jl 0x430c40 */ if ((fS!=fO)) goto L_00430c40;
L_00430da7:; BB(0x00430da7);
    /* 00430da7: mov dword ptr [ebx + 0x40], 0xc4960000 */ W32((u32)(r_ebx+0x40u), 0xc4960000u);
    /* 00430dae: mov eax, 2 */ r_eax = 0x2u;
    /* 00430db3: mov dword ptr [ebx + 0x6e8], eax */ W32((u32)(r_ebx+0x6e8u), r_eax);
    /* 00430db9: mov edx, dword ptr [0xa43ca4] */ r_edx = R32((u32)(0xa43ca4u));
    /* 00430dbf: mov dword ptr [ebx + 0x64], 0x8000 */ W32((u32)(r_ebx+0x64u), 0x8000u);
    /* 00430dc6: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00430dcd: mov dword ptr [ebx + 0x6ac], edx */ W32((u32)(r_ebx+0x6acu), r_edx);
    /* 00430dd3: jmp 0x430c40 */ goto L_00430c40;
L_00430dd8:; BB(0x00430dd8);
    /* 00430dd8: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 00430dde: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430de1: jne 0x430c40 */ if (!fZ) goto L_00430c40;
L_00430de7:; BB(0x00430de7);
    /* 00430de7: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 00430ded: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00430df0: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 00430df6: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x430dfbu); f_00520e6c();
    /* 00430dfb: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 00430e01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430e03: je 0x430e0e */ if (fZ) goto L_00430e0e;
L_00430e05:; BB(0x00430e05);
    /* 00430e05: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 00430e0c: jmp 0x430e15 */ goto L_00430e15;
L_00430e0e:; BB(0x00430e0e);
    /* 00430e0e: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_00430e15:; BB(0x00430e15);
    /* 00430e15: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 00430e18: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00430e1b: ja 0x430f55 */ if ((!fC&&!fZ)) goto L_00430f55;
L_00430e21:; BB(0x00430e21);
    /* 00430e21: mov edx, dword ptr [edx*4 + 0x8fc9a0] */ r_edx = R32((u32)(r_edx*4+0x8fc9a0u));
    /* 00430e28: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00430f55:; BB(0x00430f55);
    /* 00430f55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430f56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430f58: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430f5du); f_0042abf8();
    /* 00430f5d: jmp 0x430c40 */ goto L_00430c40;
L_00430f62:; BB(0x00430f62);
    /* 00430f62: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 00430f68: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430f6b: jne 0x430c40 */ if (!fZ) goto L_00430c40;
L_00430f71:; BB(0x00430f71);
    /* 00430f71: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00430f73: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00430f75: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00430f77: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430f79: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x430f7fu); call_ind(t); }
    /* 00430f7f: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00430f83: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 00430f89: mov byte ptr [esp + 0xc], 0x13 */ W8((u32)(r_esp+0xcu), 0x13u);
    /* 00430f8e: mov edx, 2 */ r_edx = 0x2u;
    /* 00430f93: mov byte ptr [esp + 0xd], dl */ W8((u32)(r_esp+0xdu), (u8)r_edx);
    /* 00430f97: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 00430f9c: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 00430fa1: mov word ptr [esp + 0x12], bx */ W16((u32)(r_esp+0x12u), (u16)r_ebx);
    /* 00430fa6: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00430faa: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x430fafu); f_008003e0();
    /* 00430faf: jmp 0x430c40 */ goto L_00430c40;
L_00430fb4:; BB(0x00430fb4);
    /* 00430fb4: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00430fb6: mov eax, 1 */ r_eax = 0x1u;
    /* 00430fbb: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00430fc2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430fc4: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x430fcau); call_ind(t); }
    /* 00430fca: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00430fce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00430fd0: mov esi, eax */ r_esi = r_eax;
L_00430fd2:; BB(0x00430fd2);
    /* 00430fd2: mov ecx, dword ptr [ebx + esi*4 + 0x5e8] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x5e8u));
    /* 00430fd9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00430fdb: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x430fe1u); call_ind(t); }
    /* 00430fe1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00430fe4: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00430fe7: jl 0x430fd2 */ if ((fS!=fO)) goto L_00430fd2;
L_00430fe9:; BB(0x00430fe9);
    /* 00430fe9: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00430fed: mov edx, dword ptr [0xa43bcc] */ r_edx = R32((u32)(0xa43bccu));
    /* 00430ff3: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 00430ff9: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00430ffc: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00431001: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 00431007: mov eax, dword ptr [0xa43bd0] */ r_eax = R32((u32)(0xa43bd0u));
    /* 0043100c: mov dword ptr [ebx + 0x6ac], 0 */ W32((u32)(r_ebx+0x6acu), 0x0u);
    /* 00431016: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 00431019: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 0043101c: mov eax, dword ptr [0xa43bd4] */ r_eax = R32((u32)(0xa43bd4u));
    /* 00431021: mov dword ptr [ebx + 0x6f0], 0x1e */ W32((u32)(r_ebx+0x6f0u), 0x1eu);
    /* 0043102b: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 0043102e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00431030: mov dword ptr [ebx + 0x704], 0 */ W32((u32)(r_ebx+0x704u), 0x0u);
    /* 0043103a: mov dword ptr [ebx + 0x64], eax */ W32((u32)(r_ebx+0x64u), r_eax);
    /* 0043103d: mov dword ptr [ebx + 0x6e8], eax */ W32((u32)(r_ebx+0x6e8u), r_eax);
    /* 00431043: mov dword ptr [ebx + 0x6ec], eax */ W32((u32)(r_ebx+0x6ecu), r_eax);
    /* 00431049: mov dword ptr [ebx + 0x708], 0x40400000 */ W32((u32)(r_ebx+0x708u), 0x40400000u);
    /* 00431053: jmp 0x430c40 */ goto L_00430c40;
}

void f_00430e2a(void)
{
    FN_ENTER(0x00430e2a);
    goto L_00430e2a;
L_00430c40:; BB(0x00430c40);
    /* 00430c40: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430c43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430c44: ret 4 */ FN_RET(0x00430e2a); r_esp += 8; return;
L_00430ded:; BB(0x00430ded);
    /* 00430ded: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00430df0: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 00430df6: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x430dfbu); f_00520e6c();
    /* 00430dfb: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 00430e01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430e03: je 0x430e0e */ if (fZ) goto L_00430e0e;
L_00430e05:; BB(0x00430e05);
    /* 00430e05: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 00430e0c: jmp 0x430e15 */ goto L_00430e15;
L_00430e0e:; BB(0x00430e0e);
    /* 00430e0e: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_00430e15:; BB(0x00430e15);
    /* 00430e15: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 00430e18: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00430e1b: ja 0x430f55 */ if ((!fC&&!fZ)) goto L_00430f55;
L_00430e21:; BB(0x00430e21);
    /* 00430e21: mov edx, dword ptr [edx*4 + 0x8fc9a0] */ r_edx = R32((u32)(r_edx*4+0x8fc9a0u));
    /* 00430e28: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00430e2a:; BB(0x00430e2a);
    /* 00430e2a: mov eax, 5 */ r_eax = 0x5u;
    /* 00430e2f: jmp 0x430ded */ goto L_00430ded;
L_00430f55:; BB(0x00430f55);
    /* 00430f55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430f56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430f58: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430f5du); f_0042abf8();
    /* 00430f5d: jmp 0x430c40 */ goto L_00430c40;
}

void f_00430e31(void)
{
    FN_ENTER(0x00430e31);
    goto L_00430e31;
L_00430c40:; BB(0x00430c40);
    /* 00430c40: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430c43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430c44: ret 4 */ FN_RET(0x00430e31); r_esp += 8; return;
L_00430e31:; BB(0x00430e31);
    /* 00430e31: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 00430e37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430e39: jne 0x430e45 */ if (!fZ) goto L_00430e45;
L_00430e3b:; BB(0x00430e3b);
    /* 00430e3b: mov eax, 0x16 */ r_eax = 0x16u;
    /* 00430e40: jmp 0x430f55 */ goto L_00430f55;
L_00430e45:; BB(0x00430e45);
    /* 00430e45: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00430e4a: jmp 0x430f55 */ goto L_00430f55;
L_00430f55:; BB(0x00430f55);
    /* 00430f55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430f56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430f58: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430f5du); f_0042abf8();
    /* 00430f5d: jmp 0x430c40 */ goto L_00430c40;
}

void f_00430e4f(void)
{
    FN_ENTER(0x00430e4f);
    goto L_00430e4f;
L_00430c40:; BB(0x00430c40);
    /* 00430c40: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430c43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430c44: ret 4 */ FN_RET(0x00430e4f); r_esp += 8; return;
L_00430e4f:; BB(0x00430e4f);
    /* 00430e4f: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 00430e55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430e57: jne 0x430e63 */ if (!fZ) goto L_00430e63;
L_00430e59:; BB(0x00430e59);
    /* 00430e59: mov eax, 0x14 */ r_eax = 0x14u;
    /* 00430e5e: jmp 0x430f55 */ goto L_00430f55;
L_00430e63:; BB(0x00430e63);
    /* 00430e63: mov eax, 0x15 */ r_eax = 0x15u;
    /* 00430e68: jmp 0x430f55 */ goto L_00430f55;
L_00430f55:; BB(0x00430f55);
    /* 00430f55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430f56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430f58: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430f5du); f_0042abf8();
    /* 00430f5d: jmp 0x430c40 */ goto L_00430c40;
}

void f_00430e6d(void)
{
    FN_ENTER(0x00430e6d);
    goto L_00430e6d;
L_00430c40:; BB(0x00430c40);
    /* 00430c40: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430c43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430c44: ret 4 */ FN_RET(0x00430e6d); r_esp += 8; return;
L_00430e6d:; BB(0x00430e6d);
    /* 00430e6d: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 00430e73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430e75: jne 0x430e81 */ if (!fZ) goto L_00430e81;
L_00430e77:; BB(0x00430e77);
    /* 00430e77: mov eax, 0x12 */ r_eax = 0x12u;
    /* 00430e7c: jmp 0x430f55 */ goto L_00430f55;
L_00430e81:; BB(0x00430e81);
    /* 00430e81: mov eax, 0x13 */ r_eax = 0x13u;
    /* 00430e86: jmp 0x430f55 */ goto L_00430f55;
L_00430f55:; BB(0x00430f55);
    /* 00430f55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430f56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430f58: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430f5du); f_0042abf8();
    /* 00430f5d: jmp 0x430c40 */ goto L_00430c40;
}

void f_00430e8b(void)
{
    FN_ENTER(0x00430e8b);
    goto L_00430e8b;
L_00430c40:; BB(0x00430c40);
    /* 00430c40: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430c43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430c44: ret 4 */ FN_RET(0x00430e8b); r_esp += 8; return;
L_00430e8b:; BB(0x00430e8b);
    /* 00430e8b: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 00430e91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430e93: jne 0x430e9f */ if (!fZ) goto L_00430e9f;
L_00430e95:; BB(0x00430e95);
    /* 00430e95: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00430e9a: jmp 0x430f55 */ goto L_00430f55;
L_00430e9f:; BB(0x00430e9f);
    /* 00430e9f: mov eax, 0x11 */ r_eax = 0x11u;
    /* 00430ea4: jmp 0x430f55 */ goto L_00430f55;
L_00430f55:; BB(0x00430f55);
    /* 00430f55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430f56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430f58: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430f5du); f_0042abf8();
    /* 00430f5d: jmp 0x430c40 */ goto L_00430c40;
}

void f_00430ea9(void)
{
    FN_ENTER(0x00430ea9);
    goto L_00430ea9;
L_00430c40:; BB(0x00430c40);
    /* 00430c40: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430c43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430c44: ret 4 */ FN_RET(0x00430ea9); r_esp += 8; return;
L_00430ea9:; BB(0x00430ea9);
    /* 00430ea9: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 00430eaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430eb1: jne 0x430ebd */ if (!fZ) goto L_00430ebd;
L_00430eb3:; BB(0x00430eb3);
    /* 00430eb3: mov eax, 4 */ r_eax = 0x4u;
    /* 00430eb8: jmp 0x430f55 */ goto L_00430f55;
L_00430ebd:; BB(0x00430ebd);
    /* 00430ebd: mov eax, 0xa */ r_eax = 0xau;
    /* 00430ec2: jmp 0x430f55 */ goto L_00430f55;
L_00430f55:; BB(0x00430f55);
    /* 00430f55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430f56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430f58: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430f5du); f_0042abf8();
    /* 00430f5d: jmp 0x430c40 */ goto L_00430c40;
}

void f_00430ec7(void)
{
    FN_ENTER(0x00430ec7);
    goto L_00430ec7;
L_00430c40:; BB(0x00430c40);
    /* 00430c40: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430c43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430c44: ret 4 */ FN_RET(0x00430ec7); r_esp += 8; return;
L_00430ec7:; BB(0x00430ec7);
    /* 00430ec7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430ec9: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x430eceu); f_00520bf4();
    /* 00430ece: fcomp dword ptr [0x8fcecc] */ fx_compare(ST(0), R_F32((u32)(0x8fceccu))); FPOP();
    /* 00430ed4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00430ed6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00430ed7: jbe 0x430ee0 */ if ((fC||fZ)) goto L_00430ee0;
L_00430ed9:; BB(0x00430ed9);
    /* 00430ed9: mov eax, 0x18 */ r_eax = 0x18u;
    /* 00430ede: jmp 0x430f55 */ goto L_00430f55;
L_00430ee0:; BB(0x00430ee0);
    /* 00430ee0: mov eax, 0x19 */ r_eax = 0x19u;
    /* 00430ee5: jmp 0x430f55 */ goto L_00430f55;
L_00430f55:; BB(0x00430f55);
    /* 00430f55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430f56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430f58: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430f5du); f_0042abf8();
    /* 00430f5d: jmp 0x430c40 */ goto L_00430c40;
}

void f_00430ee7(void)
{
    FN_ENTER(0x00430ee7);
    goto L_00430ee7;
L_00430c40:; BB(0x00430c40);
    /* 00430c40: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430c43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430c44: ret 4 */ FN_RET(0x00430ee7); r_esp += 8; return;
L_00430ee7:; BB(0x00430ee7);
    /* 00430ee7: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 00430eed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430eef: jne 0x430ef8 */ if (!fZ) goto L_00430ef8;
L_00430ef1:; BB(0x00430ef1);
    /* 00430ef1: mov eax, 3 */ r_eax = 0x3u;
    /* 00430ef6: jmp 0x430f55 */ goto L_00430f55;
L_00430ef8:; BB(0x00430ef8);
    /* 00430ef8: mov eax, 0xb */ r_eax = 0xbu;
    /* 00430efd: jmp 0x430f55 */ goto L_00430f55;
L_00430f55:; BB(0x00430f55);
    /* 00430f55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430f56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430f58: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430f5du); f_0042abf8();
    /* 00430f5d: jmp 0x430c40 */ goto L_00430c40;
}

void f_00430eff(void)
{
    FN_ENTER(0x00430eff);
    goto L_00430eff;
L_00430c40:; BB(0x00430c40);
    /* 00430c40: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430c43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430c44: ret 4 */ FN_RET(0x00430eff); r_esp += 8; return;
L_00430eff:; BB(0x00430eff);
    /* 00430eff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430f01: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x430f06u); f_00520bf4();
    /* 00430f06: fcomp dword ptr [0x8fcecc] */ fx_compare(ST(0), R_F32((u32)(0x8fceccu))); FPOP();
    /* 00430f0c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00430f0e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00430f0f: jbe 0x430f18 */ if ((fC||fZ)) goto L_00430f18;
L_00430f11:; BB(0x00430f11);
    /* 00430f11: mov eax, 0xc */ r_eax = 0xcu;
    /* 00430f16: jmp 0x430f55 */ goto L_00430f55;
L_00430f18:; BB(0x00430f18);
    /* 00430f18: mov eax, 0xe */ r_eax = 0xeu;
    /* 00430f1d: jmp 0x430f55 */ goto L_00430f55;
L_00430f55:; BB(0x00430f55);
    /* 00430f55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430f56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430f58: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430f5du); f_0042abf8();
    /* 00430f5d: jmp 0x430c40 */ goto L_00430c40;
}

void f_00430f1f(void)
{
    FN_ENTER(0x00430f1f);
    goto L_00430f1f;
L_00430c40:; BB(0x00430c40);
    /* 00430c40: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430c43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430c44: ret 4 */ FN_RET(0x00430f1f); r_esp += 8; return;
L_00430f1f:; BB(0x00430f1f);
    /* 00430f1f: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 00430f25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00430f27: jne 0x430f30 */ if (!fZ) goto L_00430f30;
L_00430f29:; BB(0x00430f29);
    /* 00430f29: mov eax, 5 */ r_eax = 0x5u;
    /* 00430f2e: jmp 0x430f55 */ goto L_00430f55;
L_00430f30:; BB(0x00430f30);
    /* 00430f30: mov eax, 9 */ r_eax = 0x9u;
    /* 00430f35: jmp 0x430f55 */ goto L_00430f55;
L_00430f55:; BB(0x00430f55);
    /* 00430f55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430f56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430f58: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430f5du); f_0042abf8();
    /* 00430f5d: jmp 0x430c40 */ goto L_00430c40;
}

void f_00430f37(void)
{
    FN_ENTER(0x00430f37);
    goto L_00430f37;
L_00430c40:; BB(0x00430c40);
    /* 00430c40: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430c43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430c44: ret 4 */ FN_RET(0x00430f37); r_esp += 8; return;
L_00430f37:; BB(0x00430f37);
    /* 00430f37: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430f39: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x430f3eu); f_00520bf4();
    /* 00430f3e: fcomp dword ptr [0x8fcecc] */ fx_compare(ST(0), R_F32((u32)(0x8fceccu))); FPOP();
    /* 00430f44: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00430f46: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00430f47: jbe 0x430f50 */ if ((fC||fZ)) goto L_00430f50;
L_00430f49:; BB(0x00430f49);
    /* 00430f49: mov eax, 8 */ r_eax = 0x8u;
    /* 00430f4e: jmp 0x430f55 */ goto L_00430f55;
L_00430f50:; BB(0x00430f50);
    /* 00430f50: mov eax, 6 */ r_eax = 0x6u;
L_00430f55:; BB(0x00430f55);
    /* 00430f55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430f56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430f58: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430f5du); f_0042abf8();
    /* 00430f5d: jmp 0x430c40 */ goto L_00430c40;
}

void f_00430f55(void)
{
    FN_ENTER(0x00430f55);
    goto L_00430f55;
L_00430c40:; BB(0x00430c40);
    /* 00430c40: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00430c43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00430c44: ret 4 */ FN_RET(0x00430f55); r_esp += 8; return;
L_00430f55:; BB(0x00430f55);
    /* 00430f55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00430f56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00430f58: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x430f5du); f_0042abf8();
    /* 00430f5d: jmp 0x430c40 */ goto L_00430c40;
}

