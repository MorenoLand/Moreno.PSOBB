#include "protos.h"

void f_00540000(void)
{
    FN_ENTER(0x00540000);
    /* 00540000: add byte ptr [ebx + 0x3d086], cl */ { u32 ad = (u32)(r_ebx+0x3d086u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00540006: add byte ptr [0xfffbffff], ah */ { u32 ad = (u32)(0xfffbffffu);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0054000c: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
    /* 00540012: mov ecx, esi */ r_ecx = r_esi;
    /* 00540014: call 0x540c80 */ r_esp -= 4; W32(r_esp, 0x540019u); f_00540c80();
    /* 00540019: mov ecx, esi */ r_ecx = r_esi;
    /* 0054001b: call 0x53fdc4 */ r_esp -= 4; W32(r_esp, 0x540020u); f_0053fdc4();
    /* 00540020: jmp 0x54004f */ goto L_0054004f;
L_0054004f:; BB(0x0054004f);
    /* 0054004f: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00540052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00540054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00540055: ret 4 */ FN_RET(0x00540000); r_esp += 8; return;
}

void f_00540009(void)
{
    FN_ENTER(0x00540009);
}

void f_00540020(void)
{
    FN_ENTER(0x00540020);
    /* 00540020: jmp 0x54004f */ goto L_0054004f;
L_0054004f:; BB(0x0054004f);
    /* 0054004f: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00540052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00540054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00540055: ret 4 */ FN_RET(0x00540020); r_esp += 8; return;
}

void f_0054002d(void)
{
    FN_ENTER(0x0054002d);
    /* 0054002d: sal byte ptr [ebp + 0x1f], 0x8b */ { u32 ad = (u32)(r_ebp+0x1fu); u32 c = (11u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 00540031: into  */ UNSUP(0x00540031, "into ");
    /* 00540032: call 0x53fdd4 */ r_esp -= 4; W32(r_esp, 0x540037u); f_0053fdd4();
    /* 00540037: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540039: jne 0x54004f */ if (!fZ) goto L_0054004f;
L_0054003b:; BB(0x0054003b);
    /* 0054003b: mov eax, dword ptr [esi + 0x478] */ r_eax = R32((u32)(r_esi+0x478u));
    /* 00540041: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540044: jne 0x54004f */ if (!fZ) goto L_0054004f;
L_00540046:; BB(0x00540046);
    /* 00540046: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00540048: mov ecx, esi */ r_ecx = r_esi;
    /* 0054004a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54004fu); f_0051f62c();
L_0054004f:; BB(0x0054004f);
    /* 0054004f: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00540052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00540054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00540055: ret 4 */ FN_RET(0x0054002d); r_esp += 8; return;
}

void f_00540043(void)
{
    FN_ENTER(0x00540043);
    /* 00540043: add al, 0x75 */ {  u32 a = (u8)r_eax; u32 b = 0x75u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00540045: or dword ptr [edx + 8], ebp */ { u32 ad = (u32)(r_edx+0x8u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00540048: mov ecx, esi */ r_ecx = r_esi;
    /* 0054004a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54004fu); f_0051f62c();
    /* 0054004f: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00540052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00540054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00540055: ret 4 */ FN_RET(0x00540043); r_esp += 8; return;
}

void f_00540046(void)
{
    FN_ENTER(0x00540046);
    /* 00540046: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00540048: mov ecx, esi */ r_ecx = r_esi;
    /* 0054004a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54004fu); f_0051f62c();
    /* 0054004f: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00540052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00540054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00540055: ret 4 */ FN_RET(0x00540046); r_esp += 8; return;
}

void f_00540049(void)
{
    FN_ENTER(0x00540049);
    /* 00540049: into  */ UNSUP(0x00540049, "into ");
    /* 0054004a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54004fu); f_0051f62c();
    /* 0054004f: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00540052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00540054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00540055: ret 4 */ FN_RET(0x00540049); r_esp += 8; return;
}

void f_0054004e(void)
{
    FN_ENTER(0x0054004e);
    /* 0054004e: inc dword ptr [ebx + 0x5e5d38c4] */ { u32 ad = (u32)(r_ebx+0x5e5d38c4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00540054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00540055: ret 4 */ FN_RET(0x0054004e); r_esp += 8; return;
}

void f_00540052(void)
{
    FN_ENTER(0x00540052);
    /* 00540052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00540054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00540055: ret 4 */ FN_RET(0x00540052); r_esp += 8; return;
}

void f_00540053(void)
{
    FN_ENTER(0x00540053);
    /* 00540053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00540054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00540055: ret 4 */ FN_RET(0x00540053); r_esp += 8; return;
}

void f_00540054(void)
{
    FN_ENTER(0x00540054);
    /* 00540054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00540055: ret 4 */ FN_RET(0x00540054); r_esp += 8; return;
}

void f_00540058(void)
{
    FN_ENTER(0x00540058);
    goto L_00540058;
L_0053ff53:; BB(0x0053ff53);
    /* 0053ff53: mov ecx, esi */ r_ecx = r_esi;
    /* 0053ff55: call 0x542484 */ r_esp -= 4; W32(r_esp, 0x53ff5au); f_00542484();
    /* 0053ff5a: jmp 0x53ffeb */ goto L_0053ffeb;
L_0053ffeb:; BB(0x0053ffeb);
    /* 0053ffeb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053ffed: mov ecx, esi */ r_ecx = r_esi;
    /* 0053ffef: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53fff5u); call_ind(t); }
    /* 0053fff5: jmp 0x54004f */ goto L_0054004f;
L_0054004f:; BB(0x0054004f);
    /* 0054004f: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00540052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00540054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00540055: ret 4 */ FN_RET(0x00540058); r_esp += 8; return;
L_00540058:; BB(0x00540058);
    /* 00540058: fld dword ptr [esi + 0x3fc] */ FPUSH(R_F32((u32)(r_esi+0x3fcu)));
    /* 0054005e: fcomp dword ptr [0x923740] */ fx_compare(ST(0), R_F32((u32)(0x923740u))); FPOP();
    /* 00540064: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00540066: add dword ptr [esi + 0x40c], 1 */ { u32 ad = (u32)(r_esi+0x40cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0054006d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054006e: jae 0x540102 */ if (!fC) goto L_00540102;
L_00540074:; BB(0x00540074);
    /* 00540074: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00540079: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054007a: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 00540080: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00540082: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x540085u); call_ind(t); }
    /* 00540085: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540087: je 0x540102 */ if (fZ) goto L_00540102;
L_00540089:; BB(0x00540089);
    /* 00540089: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054008e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054008f: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 00540095: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00540097: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x54009au); call_ind(t); }
    /* 0054009a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054009c: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005400a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005400a2: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 005400a8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005400aa: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x5400adu); call_ind(t); }
    /* 005400ad: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 005400b3: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005400b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005400b8: call 0x51f8d8 */ r_esp -= 4; W32(r_esp, 0x5400bdu); f_0051f8d8();
    /* 005400bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005400be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005400c0: je 0x540102 */ if (fZ) goto L_00540102;
L_005400c2:; BB(0x005400c2);
    /* 005400c2: push dword ptr [esi + 0x398] */ { u32 v = R32((u32)(r_esi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 005400c8: call 0x51f900 */ r_esp -= 4; W32(r_esp, 0x5400cdu); f_0051f900();
    /* 005400cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005400ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005400d0: je 0x540102 */ if (fZ) goto L_00540102;
L_005400d2:; BB(0x005400d2);
    /* 005400d2: mov ecx, esi */ r_ecx = r_esi;
    /* 005400d4: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5400d9u); f_007751b0();
    /* 005400d9: fcomp dword ptr [0x923658] */ fx_compare(ST(0), R_F32((u32)(0x923658u))); FPOP();
    /* 005400df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005400e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005400e2: jae 0x540102 */ if (!fC) goto L_00540102;
L_005400e4:; BB(0x005400e4);
    /* 005400e4: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 005400ea: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005400ec: call dword ptr [eax + 0xcc] */ { u32 t = R32((u32)(r_eax+0xccu)); r_esp -= 4; W32(r_esp, 0x5400f2u); call_ind(t); }
    /* 005400f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005400f4: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 005400fa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005400fc: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x540102u); call_ind(t); }
L_00540102:; BB(0x00540102);
    /* 00540102: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00540108: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054010a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054010b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054010c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054010d: push 0x13e */ { u32 v = 0x13eu; r_esp -= 4; W32(r_esp, v); }
    /* 00540112: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x540117u); f_00814298();
    /* 00540117: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054011a: jmp 0x53ff53 */ goto L_0053ff53;
}

void f_00540062(void)
{
    FN_ENTER(0x00540062);
    goto L_00540062;
L_0053ff53:; BB(0x0053ff53);
    /* 0053ff53: mov ecx, esi */ r_ecx = r_esi;
    /* 0053ff55: call 0x542484 */ r_esp -= 4; W32(r_esp, 0x53ff5au); f_00542484();
    /* 0053ff5a: jmp 0x53ffeb */ goto L_0053ffeb;
L_0053ffea:; BB(0x0053ffea);
    /* 0053ffea: add byte ptr [ebx - 0x3174fa], cl */ { u32 ad = (u32)(r_ebx+0xffce8b06u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0053ffeb:; BB(0x0053ffeb);
    /* 0053ffeb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053ffed: mov ecx, esi */ r_ecx = r_esi;
    /* 0053ffef: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53fff5u); call_ind(t); }
    /* 0053fff0: nop  */ ;
    /* 0053fff1: insb byte ptr es:[edi], dx */ UNSUP(0x0053fff1, "insb byte ptr es:[edi], dx");
    /* 0053fff2: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0053fff4: add bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0053fff5: jmp 0x54004f */ goto L_0054004f;
    /* 0053fff6: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0053fff7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fffa: jne 0x54004f */ if (!fZ) goto L_0054004f;
L_0053fffc:; BB(0x0053fffc);
    /* 0053fffc: push 0x923728 */ { u32 v = 0x923728u; r_esp -= 4; W32(r_esp, v); }
    /* 00540001: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 00540007: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054000c: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
    /* 00540012: mov ecx, esi */ r_ecx = r_esi;
    /* 00540014: call 0x540c80 */ r_esp -= 4; W32(r_esp, 0x540019u); f_00540c80();
    /* 00540019: mov ecx, esi */ r_ecx = r_esi;
    /* 0054001b: call 0x53fdc4 */ r_esp -= 4; W32(r_esp, 0x540020u); f_0053fdc4();
    /* 00540020: jmp 0x54004f */ goto L_0054004f;
L_0054004f:; BB(0x0054004f);
    /* 0054004f: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00540052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00540054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00540055: ret 4 */ FN_RET(0x00540062); r_esp += 8; return;
L_00540062:; BB(0x00540062);
    /* 00540062: xchg edx, eax */ { u32 x = r_edx; u32 y = r_eax; r_edx = y; r_eax = x; }
    /* 00540063: add bh, bl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); }
    /* 00540065: loopne 0x53ffea */ r_ecx--; if (r_ecx && !fZ) goto L_0053ffea;
    /* 00540067: xchg byte ptr [esp + eax], cl */ { u32 x = R8((u32)(r_esp+r_eax)); u32 y = (u8)r_ecx; W8((u32)(r_esp+r_eax), y); r_ecx = (r_ecx & 0xffffff00u) | ((x) & 0xffu); }
    /* 0054006a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0054006c: add dword ptr [esi + 0x8e830f], ebx */ { u32 ad = (u32)(r_esi+0x8e830fu);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00540072: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00540074: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00540079: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054007a: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 00540080: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00540082: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x540085u); call_ind(t); }
    /* 00540085: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540087: je 0x540102 */ if (fZ) goto L_00540102;
L_00540089:; BB(0x00540089);
    /* 00540089: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054008e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054008f: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 00540095: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00540097: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x54009au); call_ind(t); }
    /* 0054009a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054009c: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005400a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005400a2: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 005400a8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005400aa: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x5400adu); call_ind(t); }
    /* 005400ad: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 005400b3: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005400b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005400b8: call 0x51f8d8 */ r_esp -= 4; W32(r_esp, 0x5400bdu); f_0051f8d8();
    /* 005400bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005400be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005400c0: je 0x540102 */ if (fZ) goto L_00540102;
L_005400c2:; BB(0x005400c2);
    /* 005400c2: push dword ptr [esi + 0x398] */ { u32 v = R32((u32)(r_esi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 005400c8: call 0x51f900 */ r_esp -= 4; W32(r_esp, 0x5400cdu); f_0051f900();
    /* 005400cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005400ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005400d0: je 0x540102 */ if (fZ) goto L_00540102;
L_005400d2:; BB(0x005400d2);
    /* 005400d2: mov ecx, esi */ r_ecx = r_esi;
    /* 005400d4: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5400d9u); f_007751b0();
    /* 005400d9: fcomp dword ptr [0x923658] */ fx_compare(ST(0), R_F32((u32)(0x923658u))); FPOP();
    /* 005400df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005400e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005400e2: jae 0x540102 */ if (!fC) goto L_00540102;
L_005400e4:; BB(0x005400e4);
    /* 005400e4: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 005400ea: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005400ec: call dword ptr [eax + 0xcc] */ { u32 t = R32((u32)(r_eax+0xccu)); r_esp -= 4; W32(r_esp, 0x5400f2u); call_ind(t); }
    /* 005400f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005400f4: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 005400fa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005400fc: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x540102u); call_ind(t); }
L_00540102:; BB(0x00540102);
    /* 00540102: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00540108: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054010a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054010b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054010c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054010d: push 0x13e */ { u32 v = 0x13eu; r_esp -= 4; W32(r_esp, v); }
    /* 00540112: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x540117u); f_00814298();
    /* 00540117: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054011a: jmp 0x53ff53 */ goto L_0053ff53;
}

void f_00540063(void)
{
    FN_ENTER(0x00540063);
    goto L_00540063;
L_0053ff53:; BB(0x0053ff53);
    /* 0053ff53: mov ecx, esi */ r_ecx = r_esi;
    /* 0053ff55: call 0x542484 */ r_esp -= 4; W32(r_esp, 0x53ff5au); f_00542484();
    /* 0053ff5a: jmp 0x53ffeb */ goto L_0053ffeb;
L_0053ffea:; BB(0x0053ffea);
    /* 0053ffea: add byte ptr [ebx - 0x3174fa], cl */ { u32 ad = (u32)(r_ebx+0xffce8b06u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0053ffeb:; BB(0x0053ffeb);
    /* 0053ffeb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053ffed: mov ecx, esi */ r_ecx = r_esi;
    /* 0053ffef: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53fff5u); call_ind(t); }
    /* 0053fff0: nop  */ ;
    /* 0053fff1: insb byte ptr es:[edi], dx */ UNSUP(0x0053fff1, "insb byte ptr es:[edi], dx");
    /* 0053fff2: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0053fff4: add bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0053fff5: jmp 0x54004f */ goto L_0054004f;
    /* 0053fff6: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0053fff7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053fffa: jne 0x54004f */ if (!fZ) goto L_0054004f;
L_0053fffc:; BB(0x0053fffc);
    /* 0053fffc: push 0x923728 */ { u32 v = 0x923728u; r_esp -= 4; W32(r_esp, v); }
    /* 00540001: mov eax, dword ptr [esi + 0x3d0] */ r_eax = R32((u32)(r_esi+0x3d0u));
    /* 00540007: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054000c: mov dword ptr [esi + 0x3d0], eax */ W32((u32)(r_esi+0x3d0u), r_eax);
    /* 00540012: mov ecx, esi */ r_ecx = r_esi;
    /* 00540014: call 0x540c80 */ r_esp -= 4; W32(r_esp, 0x540019u); f_00540c80();
    /* 00540019: mov ecx, esi */ r_ecx = r_esi;
    /* 0054001b: call 0x53fdc4 */ r_esp -= 4; W32(r_esp, 0x540020u); f_0053fdc4();
    /* 00540020: jmp 0x54004f */ goto L_0054004f;
L_0054004f:; BB(0x0054004f);
    /* 0054004f: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00540052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00540054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00540055: ret 4 */ FN_RET(0x00540063); r_esp += 8; return;
L_00540063:; BB(0x00540063);
    /* 00540063: add bh, bl */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); }
    /* 00540065: loopne 0x53ffea */ r_ecx--; if (r_ecx && !fZ) goto L_0053ffea;
    /* 00540067: xchg byte ptr [esp + eax], cl */ { u32 x = R8((u32)(r_esp+r_eax)); u32 y = (u8)r_ecx; W8((u32)(r_esp+r_eax), y); r_ecx = (r_ecx & 0xffffff00u) | ((x) & 0xffu); }
    /* 0054006a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0054006c: add dword ptr [esi + 0x8e830f], ebx */ { u32 ad = (u32)(r_esi+0x8e830fu);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00540072: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00540074: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00540079: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054007a: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 00540080: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00540082: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x540085u); call_ind(t); }
    /* 00540085: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540087: je 0x540102 */ if (fZ) goto L_00540102;
L_00540089:; BB(0x00540089);
    /* 00540089: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054008e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054008f: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 00540095: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00540097: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x54009au); call_ind(t); }
    /* 0054009a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054009c: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005400a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005400a2: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 005400a8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005400aa: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x5400adu); call_ind(t); }
    /* 005400ad: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 005400b3: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005400b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005400b8: call 0x51f8d8 */ r_esp -= 4; W32(r_esp, 0x5400bdu); f_0051f8d8();
    /* 005400bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005400be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005400c0: je 0x540102 */ if (fZ) goto L_00540102;
L_005400c2:; BB(0x005400c2);
    /* 005400c2: push dword ptr [esi + 0x398] */ { u32 v = R32((u32)(r_esi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 005400c8: call 0x51f900 */ r_esp -= 4; W32(r_esp, 0x5400cdu); f_0051f900();
    /* 005400cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005400ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005400d0: je 0x540102 */ if (fZ) goto L_00540102;
L_005400d2:; BB(0x005400d2);
    /* 005400d2: mov ecx, esi */ r_ecx = r_esi;
    /* 005400d4: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5400d9u); f_007751b0();
    /* 005400d9: fcomp dword ptr [0x923658] */ fx_compare(ST(0), R_F32((u32)(0x923658u))); FPOP();
    /* 005400df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005400e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005400e2: jae 0x540102 */ if (!fC) goto L_00540102;
L_005400e4:; BB(0x005400e4);
    /* 005400e4: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 005400ea: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005400ec: call dword ptr [eax + 0xcc] */ { u32 t = R32((u32)(r_eax+0xccu)); r_esp -= 4; W32(r_esp, 0x5400f2u); call_ind(t); }
    /* 005400f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005400f4: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 005400fa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005400fc: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x540102u); call_ind(t); }
L_00540102:; BB(0x00540102);
    /* 00540102: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00540108: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054010a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054010b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054010c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054010d: push 0x13e */ { u32 v = 0x13eu; r_esp -= 4; W32(r_esp, v); }
    /* 00540112: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x540117u); f_00814298();
    /* 00540117: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054011a: jmp 0x53ff53 */ goto L_0053ff53;
}

void f_0054006e(void)
{
    FN_ENTER(0x0054006e);
    goto L_0054006e;
L_0053ff53:; BB(0x0053ff53);
    /* 0053ff53: mov ecx, esi */ r_ecx = r_esi;
    /* 0053ff55: call 0x542484 */ r_esp -= 4; W32(r_esp, 0x53ff5au); f_00542484();
    /* 0053ff5a: jmp 0x53ffeb */ goto L_0053ffeb;
L_0053ffeb:; BB(0x0053ffeb);
    /* 0053ffeb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053ffed: mov ecx, esi */ r_ecx = r_esi;
    /* 0053ffef: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x53fff5u); call_ind(t); }
    /* 0053fff5: jmp 0x54004f */ goto L_0054004f;
L_0054004f:; BB(0x0054004f);
    /* 0054004f: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00540052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00540054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00540055: ret 4 */ FN_RET(0x0054006e); r_esp += 8; return;
L_0054006e:; BB(0x0054006e);
    /* 0054006e: jae 0x540102 */ if (!fC) goto L_00540102;
L_00540074:; BB(0x00540074);
    /* 00540074: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00540079: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054007a: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 00540080: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00540082: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x540085u); call_ind(t); }
    /* 00540085: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540087: je 0x540102 */ if (fZ) goto L_00540102;
L_00540089:; BB(0x00540089);
    /* 00540089: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054008e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054008f: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 00540095: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00540097: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x54009au); call_ind(t); }
    /* 0054009a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054009c: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005400a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005400a2: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 005400a8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005400aa: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x5400adu); call_ind(t); }
    /* 005400ad: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 005400b3: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005400b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005400b8: call 0x51f8d8 */ r_esp -= 4; W32(r_esp, 0x5400bdu); f_0051f8d8();
    /* 005400bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005400be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005400c0: je 0x540102 */ if (fZ) goto L_00540102;
L_005400c2:; BB(0x005400c2);
    /* 005400c2: push dword ptr [esi + 0x398] */ { u32 v = R32((u32)(r_esi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 005400c8: call 0x51f900 */ r_esp -= 4; W32(r_esp, 0x5400cdu); f_0051f900();
    /* 005400cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005400ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005400d0: je 0x540102 */ if (fZ) goto L_00540102;
L_005400d2:; BB(0x005400d2);
    /* 005400d2: mov ecx, esi */ r_ecx = r_esi;
    /* 005400d4: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5400d9u); f_007751b0();
    /* 005400d9: fcomp dword ptr [0x923658] */ fx_compare(ST(0), R_F32((u32)(0x923658u))); FPOP();
    /* 005400df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005400e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005400e2: jae 0x540102 */ if (!fC) goto L_00540102;
L_005400e4:; BB(0x005400e4);
    /* 005400e4: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 005400ea: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005400ec: call dword ptr [eax + 0xcc] */ { u32 t = R32((u32)(r_eax+0xccu)); r_esp -= 4; W32(r_esp, 0x5400f2u); call_ind(t); }
    /* 005400f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005400f4: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 005400fa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005400fc: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x540102u); call_ind(t); }
L_00540102:; BB(0x00540102);
    /* 00540102: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 00540108: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054010a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054010b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054010c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054010d: push 0x13e */ { u32 v = 0x13eu; r_esp -= 4; W32(r_esp, v); }
    /* 00540112: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x540117u); f_00814298();
    /* 00540117: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054011a: jmp 0x53ff53 */ goto L_0053ff53;
}

void f_0054051c(void) /* sub_54051C */
{
    FN_ENTER(0x0054051c);
    /* 0054051c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054051d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00540520: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00540522: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 00540528: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
    /* 0054052e: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00540530: fmul qword ptr [0x923528] */ ST(0) = ST(0) * R_F64((u32)(0x923528u));
    /* 00540536: fdiv qword ptr [0x923520] */ ST(0) = ST(0) / R_F64((u32)(0x923520u));
    /* 0054053c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0054053f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00540543: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00540548: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0054054c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00540550: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00540554: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00540557: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0054055b: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 00540560: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540561: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00540564: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x540569u); f_007a8c74();
    /* 00540569: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0054056c: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0054056f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00540572: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00540573: ret  */ FN_RET(0x0054051c); r_esp += 4; return;
}

void f_00540574(void) /* sub_540574 */
{
    FN_ENTER(0x00540574);
    /* 00540574: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540575: mov ebp, esp */ r_ebp = r_esp;
    /* 00540577: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00540579: push 0x8d5566 */ { u32 v = 0x8d5566u; r_esp -= 4; W32(r_esp, v); }
    /* 0054057e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00540584: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540585: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0054058c: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054058f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00540592: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00540595: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00540598: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0054059b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054059e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005405a1: lea eax, [ecx + 0x498] */ r_eax = (u32)(r_ecx+0x498u);
    /* 005405a7: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005405aa: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005405ad: je 0x540b04 */ if (fZ) goto L_00540b04;
L_005405b3:; BB(0x005405b3);
    /* 005405b3: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005405b6: je 0x54090b */ if (fZ) goto L_0054090b;
L_005405bc:; BB(0x005405bc);
    /* 005405bc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005405be: jne 0x540897 */ if (!fZ) goto L_00540897;
L_005405c4:; BB(0x005405c4);
    /* 005405c4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5405c9u); f_007aa094();
    /* 005405c9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005405cc: mov edx, dword ptr [eax + 0x478] */ r_edx = R32((u32)(r_eax+0x478u));
    /* 005405d2: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005405d5: je 0x540ac1 */ if (fZ) goto L_00540ac1;
L_005405db:; BB(0x005405db);
    /* 005405db: mov ecx, eax */ r_ecx = r_eax;
    /* 005405dd: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x5405e2u); f_00521238();
    /* 005405e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005405e4: je 0x540935 */ if (fZ) goto L_00540935;
L_005405ea:; BB(0x005405ea);
    /* 005405ea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005405ed: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5405f2u); f_005213d8();
    /* 005405f2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005405f5: mov eax, dword ptr [eax + 0x478] */ r_eax = R32((u32)(r_eax+0x478u));
    /* 005405fb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005405fe: je 0x540a69 */ if (fZ) goto L_00540a69;
L_00540604:; BB(0x00540604);
    /* 00540604: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540607: je 0x54097e */ if (fZ) goto L_0054097e;
L_0054060d:; BB(0x0054060d);
    /* 0054060d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540610: je 0x540746 */ if (fZ) goto L_00540746;
L_00540616:; BB(0x00540616);
    /* 00540616: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540619: jne 0x5406e3 */ if (!fZ) goto L_005406e3;
L_0054061f:; BB(0x0054061f);
    /* 0054061f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00540622: mov edx, dword ptr [eax + 0x47c] */ r_edx = R32((u32)(r_eax+0x47cu));
    /* 00540628: mov ecx, dword ptr [eax + 0x470] */ r_ecx = R32((u32)(r_eax+0x470u));
    /* 0054062e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00540631: mov dword ptr [eax + 0x47c], edx */ W32((u32)(r_eax+0x47cu), r_edx);
    /* 00540637: cmp edx, dword ptr [ecx + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054063a: jl 0x54087f */ if ((fS!=fO)) goto L_0054087f;
L_00540640:; BB(0x00540640);
    /* 00540640: push 0x923728 */ { u32 v = 0x923728u; r_esp -= 4; W32(r_esp, v); }
    /* 00540645: mov ecx, eax */ r_ecx = r_eax;
    /* 00540647: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0054064d: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00540652: mov dword ptr [ecx + 0x478], 5 */ W32((u32)(r_ecx+0x478u), 0x5u);
    /* 0054065c: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 00540662: mov dword ptr [ecx + 0x47c], 0 */ W32((u32)(r_ecx+0x47cu), 0x0u);
    /* 0054066c: call 0x540c80 */ r_esp -= 4; W32(r_esp, 0x540671u); f_00540c80();
    /* 00540671: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00540674: add dword ptr [eax + 0x40c], 1 */ { u32 ad = (u32)(r_eax+0x40cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0054067b: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0054067d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00540684: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x540689u); f_005caba4();
    /* 00540689: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054068a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0054068d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054068f: je 0x5406bc */ if (fZ) goto L_005406bc;
L_00540691:; BB(0x00540691);
    /* 00540691: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00540698: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054069f: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005406a2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005406a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005406a6: lea ebx, [esi + 0x41c] */ r_ebx = (u32)(r_esi+0x41cu);
    /* 005406ac: mov ecx, eax */ r_ecx = r_eax;
    /* 005406ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005406af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005406b0: call 0x542cbc */ r_esp -= 4; W32(r_esp, 0x5406b5u); f_00542cbc();
    /* 005406b5: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005406bc:; BB(0x005406bc);
    /* 005406bc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005406c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005406c6: lea ecx, [eax + 0x300] */ r_ecx = (u32)(r_eax+0x300u);
    /* 005406cc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005406ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005406cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005406d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005406d1: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 005406d6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5406dbu); f_00814298();
    /* 005406db: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005406de: jmp 0x54087f */ goto L_0054087f;
L_005406e3:; BB(0x005406e3);
    /* 005406e3: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005406e6: jne 0x54087f */ if (!fZ) goto L_0054087f;
L_005406ec:; BB(0x005406ec);
    /* 005406ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005406ef: mov edx, dword ptr [eax + 0x47c] */ r_edx = R32((u32)(r_eax+0x47cu));
    /* 005406f5: mov ecx, dword ptr [eax + 0x470] */ r_ecx = R32((u32)(r_eax+0x470u));
    /* 005406fb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005406fe: mov dword ptr [eax + 0x47c], edx */ W32((u32)(r_eax+0x47cu), r_edx);
    /* 00540704: cmp edx, dword ptr [ecx + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540707: jle 0x54087f */ if ((fZ||fS!=fO)) goto L_0054087f;
L_0054070d:; BB(0x0054070d);
    /* 0054070d: mov ecx, dword ptr [eax + 0x470] */ r_ecx = R32((u32)(r_eax+0x470u));
    /* 00540713: mov edx, dword ptr [eax + 0x40c] */ r_edx = R32((u32)(r_eax+0x40cu));
    /* 00540719: mov dword ptr [eax + 0x47c], 0 */ W32((u32)(r_eax+0x47cu), 0x0u);
    /* 00540723: cmp edx, dword ptr [ecx + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540726: jl 0x540737 */ if ((fS!=fO)) goto L_00540737;
L_00540728:; BB(0x00540728);
    /* 00540728: mov dword ptr [eax + 0x478], 6 */ W32((u32)(r_eax+0x478u), 0x6u);
    /* 00540732: jmp 0x54087f */ goto L_0054087f;
L_00540737:; BB(0x00540737);
    /* 00540737: mov dword ptr [eax + 0x478], 1 */ W32((u32)(r_eax+0x478u), 0x1u);
    /* 00540741: jmp 0x54087f */ goto L_0054087f;
L_00540746:; BB(0x00540746);
    /* 00540746: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00540749: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x54074eu); f_00521410();
    /* 0054074e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00540751: call 0x54051c */ r_esp -= 4; W32(r_esp, 0x540756u); f_0054051c();
    /* 00540756: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00540759: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054075c: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 0054075f: mov eax, dword ptr [esi + 0x39c] */ r_eax = R32((u32)(r_esi+0x39cu));
    /* 00540765: mov ebx, dword ptr [esi + 0x3a0] */ r_ebx = R32((u32)(r_esi+0x3a0u));
    /* 0054076b: mov edi, dword ptr [esi + 0x3a4] */ r_edi = R32((u32)(r_esi+0x3a4u));
    /* 00540771: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00540774: mov dword ptr [ebp - 0x38], ebx */ W32((u32)(r_ebp+0xffffffc8u), r_ebx);
    /* 00540777: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0054077a: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x54077fu); f_0082f9c4();
    /* 0054077f: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 00540782: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540783: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x540788u); f_007828e4();
    /* 00540788: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00540789: fld dword ptr [0x92360c] */ FPUSH(R_F32((u32)(0x92360cu)));
    /* 0054078f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00540791: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00540793: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00540795: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00540796: jae 0x5407c2 */ if (!fC) goto L_005407c2;
L_00540798:; BB(0x00540798);
    /* 00540798: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054079a: mov ebx, esi */ r_ebx = r_esi;
    /* 0054079c: mov eax, dword ptr [ebx + 0x39c] */ r_eax = R32((u32)(r_ebx+0x39cu));
    /* 005407a2: mov edx, dword ptr [ebx + 0x3a0] */ r_edx = R32((u32)(r_ebx+0x3a0u));
    /* 005407a8: mov ecx, dword ptr [ebx + 0x3a4] */ r_ecx = R32((u32)(r_ebx+0x3a4u));
    /* 005407ae: mov dword ptr [ebx + 0x498], eax */ W32((u32)(r_ebx+0x498u), r_eax);
    /* 005407b4: mov dword ptr [ebx + 0x49c], edx */ W32((u32)(r_ebx+0x49cu), r_edx);
    /* 005407ba: mov dword ptr [ebx + 0x4a0], ecx */ W32((u32)(r_ebx+0x4a0u), r_ecx);
    /* 005407c0: jmp 0x5407f7 */ goto L_005407f7;
L_005407c2:; BB(0x005407c2);
    /* 005407c2: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 005407c5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005407c7: mov eax, esi */ r_eax = r_esi;
    /* 005407c9: fadd dword ptr [eax + 0x498] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x498u));
    /* 005407cf: fstp dword ptr [eax + 0x498] */ W_F32((u32)(r_eax+0x498u), ST(0)); FPOP();
    /* 005407d5: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 005407d8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005407da: fadd dword ptr [eax + 0x49c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x49cu));
    /* 005407e0: fstp dword ptr [eax + 0x49c] */ W_F32((u32)(r_eax+0x49cu), ST(0)); FPOP();
    /* 005407e6: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 005407e9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005407eb: fadd dword ptr [eax + 0x4a0] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4a0u));
    /* 005407f1: fstp dword ptr [eax + 0x4a0] */ W_F32((u32)(r_eax+0x4a0u), ST(0)); FPOP();
L_005407f7:; BB(0x005407f7);
    /* 005407f7: mov eax, esi */ r_eax = r_esi;
    /* 005407f9: mov ecx, dword ptr [eax + 0x4a8] */ r_ecx = R32((u32)(r_eax+0x4a8u));
    /* 005407ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540801: je 0x54094e */ if (fZ) goto L_0054094e;
L_00540807:; BB(0x00540807);
    /* 00540807: lea edx, [eax + 0x41c] */ r_edx = (u32)(r_eax+0x41cu);
    /* 0054080d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054080e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x540813u); f_00508db8();
L_00540813:; BB(0x00540813);
    /* 00540813: mov eax, esi */ r_eax = r_esi;
    /* 00540815: mov edx, dword ptr [eax + 0x47c] */ r_edx = R32((u32)(r_eax+0x47cu));
    /* 0054081b: mov ecx, dword ptr [eax + 0x470] */ r_ecx = R32((u32)(r_eax+0x470u));
    /* 00540821: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00540824: mov dword ptr [eax + 0x47c], edx */ W32((u32)(r_eax+0x47cu), r_edx);
    /* 0054082a: cmp edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054082d: jle 0x54087f */ if ((fZ||fS!=fO)) goto L_0054087f;
L_0054082f:; BB(0x0054082f);
    /* 0054082f: mov ebx, eax */ r_ebx = r_eax;
    /* 00540831: mov edx, dword ptr [ebx + 0x4a4] */ r_edx = R32((u32)(r_ebx+0x4a4u));
    /* 00540837: mov dword ptr [ebx + 0x478], 4 */ W32((u32)(r_ebx+0x478u), 0x4u);
    /* 00540841: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00540843: mov dword ptr [ebx + 0x47c], ecx */ W32((u32)(r_ebx+0x47cu), r_ecx);
    /* 00540849: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0054084d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00540852: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00540856: mov edx, dword ptr [ebx + 0x4a8] */ r_edx = R32((u32)(r_ebx+0x4a8u));
    /* 0054085c: mov dword ptr [ebx + 0x4a4], ecx */ W32((u32)(r_ebx+0x4a4u), r_ecx);
    /* 00540862: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540864: je 0x54087f */ if (fZ) goto L_0054087f;
L_00540866:; BB(0x00540866);
    /* 00540866: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0054086a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054086f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00540873: mov edx, ebx */ r_edx = r_ebx;
    /* 00540875: mov dword ptr [edx + 0x4a8], 0 */ W32((u32)(r_edx+0x4a8u), 0x0u);
L_0054087f:; BB(0x0054087f);
    /* 0054087f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00540882: call 0x53f22c */ r_esp -= 4; W32(r_esp, 0x540887u); f_0053f22c();
    /* 00540887: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054088a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0054088c: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x540892u); call_ind(t); }
    /* 00540892: jmp 0x540935 */ goto L_00540935;
L_00540897:; BB(0x00540897);
    /* 00540897: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054089a: jne 0x540935 */ if (!fZ) goto L_00540935;
L_005408a0:; BB(0x005408a0);
    /* 005408a0: push 0x923728 */ { u32 v = 0x923728u; r_esp -= 4; W32(r_esp, v); }
    /* 005408a5: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 005408ab: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005408b0: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 005408b6: call 0x540c80 */ r_esp -= 4; W32(r_esp, 0x5408bbu); f_00540c80();
    /* 005408bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005408be: mov edx, dword ptr [eax + 0x4a4] */ r_edx = R32((u32)(r_eax+0x4a4u));
    /* 005408c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005408c6: je 0x5408e2 */ if (fZ) goto L_005408e2;
L_005408c8:; BB(0x005408c8);
    /* 005408c8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005408cc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005408d1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005408d5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005408d8: mov dword ptr [edx + 0x4a4], 0 */ W32((u32)(r_edx+0x4a4u), 0x0u);
L_005408e2:; BB(0x005408e2);
    /* 005408e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005408e5: mov edx, dword ptr [eax + 0x4a8] */ r_edx = R32((u32)(r_eax+0x4a8u));
    /* 005408eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005408ed: je 0x540935 */ if (fZ) goto L_00540935;
L_005408ef:; BB(0x005408ef);
    /* 005408ef: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005408f3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005408f8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005408fc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005408ff: mov dword ptr [edx + 0x4a8], 0 */ W32((u32)(r_edx+0x4a8u), 0x0u);
    /* 00540909: jmp 0x540935 */ goto L_00540935;
L_0054090b:; BB(0x0054090b);
    /* 0054090b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0054090d: call dword ptr [eax + 0x1b8] */ { u32 t = R32((u32)(r_eax+0x1b8u)); r_esp -= 4; W32(r_esp, 0x540913u); call_ind(t); }
    /* 00540913: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00540915: jne 0x540935 */ if (!fZ) goto L_00540935;
L_00540917:; BB(0x00540917);
    /* 00540917: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054091a: call 0x53fdd4 */ r_esp -= 4; W32(r_esp, 0x54091fu); f_0053fdd4();
    /* 0054091f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00540921: jne 0x540935 */ if (!fZ) goto L_00540935;
L_00540923:; BB(0x00540923);
    /* 00540923: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00540926: mov edx, dword ptr [eax + 0x478] */ r_edx = R32((u32)(r_eax+0x478u));
    /* 0054092c: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054092f: je 0x540ada */ if (fZ) goto L_00540ada;
L_00540935:; BB(0x00540935);
    /* 00540935: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00540938: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054093b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054093e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00540941: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00540948: mov esp, ebp */ r_esp = r_ebp;
    /* 0054094a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054094b: ret 4 */ FN_RET(0x00540574); r_esp += 8; return;
L_0054094e:; BB(0x0054094e);
    /* 0054094e: push 0xf7 */ { u32 v = 0xf7u; r_esp -= 4; W32(r_esp, v); }
    /* 00540953: lea edx, [eax + 0x41c] */ r_edx = (u32)(r_eax+0x41cu);
    /* 00540959: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054095a: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x54095fu); f_00509590();
    /* 0054095f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540962: mov edx, esi */ r_edx = r_esi;
    /* 00540964: mov dword ptr [edx + 0x4a8], eax */ W32((u32)(r_edx+0x4a8u), r_eax);
    /* 0054096a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054096c: je 0x540813 */ if (fZ) goto L_00540813;
L_00540972:; BB(0x00540972);
    /* 00540972: mov ecx, eax */ r_ecx = r_eax;
    /* 00540974: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x540979u); f_00508f48();
    /* 00540979: jmp 0x540813 */ goto L_00540813;
L_0054097e:; BB(0x0054097e);
    /* 0054097e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00540981: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x540986u); f_00521410();
    /* 00540986: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00540989: call 0x54051c */ r_esp -= 4; W32(r_esp, 0x54098eu); f_0054051c();
    /* 0054098e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00540991: movsx edx, word ptr [eax + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00540998: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054099b: jne 0x54087f */ if (!fZ) goto L_0054087f;
L_005409a1:; BB(0x005409a1);
    /* 005409a1: push 0x923618 */ { u32 v = 0x923618u; r_esp -= 4; W32(r_esp, v); }
    /* 005409a6: mov ecx, eax */ r_ecx = r_eax;
    /* 005409a8: mov dword ptr [ecx + 0x478], 3 */ W32((u32)(r_ecx+0x478u), 0x3u);
    /* 005409b2: call 0x540c80 */ r_esp -= 4; W32(r_esp, 0x5409b7u); f_00540c80();
    /* 005409b7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005409ba: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005409bc: mov eax, dword ptr [ebx + 0x39c] */ r_eax = R32((u32)(r_ebx+0x39cu));
    /* 005409c2: mov edx, dword ptr [ebx + 0x3a0] */ r_edx = R32((u32)(r_ebx+0x3a0u));
    /* 005409c8: mov ecx, dword ptr [ebx + 0x3a4] */ r_ecx = R32((u32)(r_ebx+0x3a4u));
    /* 005409ce: mov dword ptr [ebx + 0x498], eax */ W32((u32)(r_ebx+0x498u), r_eax);
    /* 005409d4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005409db: mov dword ptr [ebx + 0x49c], edx */ W32((u32)(r_ebx+0x49cu), r_edx);
    /* 005409e1: mov dword ptr [ebx + 0x4a0], ecx */ W32((u32)(r_ebx+0x4a0u), r_ecx);
    /* 005409e7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5409ecu); f_005caba4();
    /* 005409ec: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005409ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005409f2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005409f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005409f7: je 0x540a62 */ if (fZ) goto L_00540a62;
L_005409f9:; BB(0x005409f9);
    /* 005409f9: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00540a00: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00540a07: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00540a0a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00540a0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540a0e: lea edx, [ebx + 0x41c] */ r_edx = (u32)(r_ebx+0x41cu);
    /* 00540a14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00540a15: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00540a16: call 0x542ac8 */ r_esp -= 4; W32(r_esp, 0x540a1bu); f_00542ac8();
    /* 00540a1b: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00540a22:; BB(0x00540a22);
    /* 00540a22: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00540a25: mov edx, ebx */ r_edx = r_ebx;
    /* 00540a27: mov dword ptr [edx + 0x4a4], eax */ W32((u32)(r_edx+0x4a4u), r_eax);
    /* 00540a2d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00540a34: mov eax, edx */ r_eax = r_edx;
    /* 00540a36: lea ebx, [eax + 0x300] */ r_ebx = (u32)(r_eax+0x300u);
    /* 00540a3c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00540a3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00540a3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00540a40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00540a41: push 0xa2 */ { u32 v = 0xa2u; r_esp -= 4; W32(r_esp, v); }
    /* 00540a46: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x540a4bu); f_00814298();
    /* 00540a4b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00540a4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540a4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540a4f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00540a50: push 0xa5 */ { u32 v = 0xa5u; r_esp -= 4; W32(r_esp, v); }
    /* 00540a55: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x540a5au); f_00814298();
    /* 00540a5a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540a5d: jmp 0x54087f */ goto L_0054087f;
L_00540a62:; BB(0x00540a62);
    /* 00540a62: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00540a64: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00540a67: jmp 0x540a22 */ goto L_00540a22;
L_00540a69:; BB(0x00540a69);
    /* 00540a69: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00540a6c: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x540a71u); f_00521410();
    /* 00540a71: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00540a74: call 0x540b6c */ r_esp -= 4; W32(r_esp, 0x540a79u); f_00540b6c();
    /* 00540a79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540a7b: je 0x540aa2 */ if (fZ) goto L_00540aa2;
L_00540a7d:; BB(0x00540a7d);
    /* 00540a7d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00540a80: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 00540a86: mov dword ptr [ecx + 0x478], 2 */ W32((u32)(r_ecx+0x478u), 0x2u);
    /* 00540a90: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00540a95: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 00540a9b: call 0x53f904 */ r_esp -= 4; W32(r_esp, 0x540aa0u); f_0053f904();
    /* 00540aa0: jmp 0x540aaa */ goto L_00540aaa;
L_00540aa2:; BB(0x00540aa2);
    /* 00540aa2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00540aa5: call 0x53e548 */ r_esp -= 4; W32(r_esp, 0x540aaau); f_0053e548();
L_00540aaa:; BB(0x00540aaa);
    /* 00540aaa: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00540aaf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00540ab2: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 00540ab7: call 0x5215ec */ r_esp -= 4; W32(r_esp, 0x540abcu); f_005215ec();
    /* 00540abc: jmp 0x54087f */ goto L_0054087f;
L_00540ac1:; BB(0x00540ac1);
    /* 00540ac1: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00540ac6: mov ecx, eax */ r_ecx = r_eax;
    /* 00540ac8: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x540acdu); f_00520ea0();
    /* 00540acd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00540acf: je 0x540935 */ if (fZ) goto L_00540935;
L_00540ad5:; BB(0x00540ad5);
    /* 00540ad5: jmp 0x5405ea */ goto L_005405ea;
L_00540ada:; BB(0x00540ada);
    /* 00540ada: mov edx, dword ptr [eax + 0x3d0] */ r_edx = R32((u32)(r_eax+0x3d0u));
    /* 00540ae0: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540ae6: je 0x540af6 */ if (fZ) goto L_00540af6;
L_00540ae8:; BB(0x00540ae8);
    /* 00540ae8: mov ecx, eax */ r_ecx = r_eax;
    /* 00540aea: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00540aec: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x540af1u); f_0051f62c();
    /* 00540af1: jmp 0x540935 */ goto L_00540935;
L_00540af6:; BB(0x00540af6);
    /* 00540af6: mov ecx, eax */ r_ecx = r_eax;
    /* 00540af8: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00540afa: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x540affu); f_0051f62c();
    /* 00540aff: jmp 0x540935 */ goto L_00540935;
L_00540b04:; BB(0x00540b04);
    /* 00540b04: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00540b06: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x540b0bu); f_0051f664();
    /* 00540b0b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00540b0e: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 00540b14: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00540b19: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00540b1b: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00540b20: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 00540b26: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x540b2cu); call_ind(t); }
    /* 00540b2c: push 0x923728 */ { u32 v = 0x923728u; r_esp -= 4; W32(r_esp, v); }
    /* 00540b31: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00540b34: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00540b37: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00540b3c: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00540b3f: call 0x540c80 */ r_esp -= 4; W32(r_esp, 0x540b44u); f_00540c80();
    /* 00540b44: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00540b47: mov dword ptr [edx + 0x478], 1 */ W32((u32)(r_edx+0x478u), 0x1u);
    /* 00540b51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00540b53: mov dword ptr [edx + 0x47c], eax */ W32((u32)(r_edx+0x47cu), r_eax);
    /* 00540b59: mov dword ptr [edx + 0x4a4], eax */ W32((u32)(r_edx+0x4a4u), r_eax);
    /* 00540b5f: mov dword ptr [edx + 0x4a8], eax */ W32((u32)(r_edx+0x4a8u), r_eax);
    /* 00540b65: jmp 0x540935 */ goto L_00540935;
}

void f_00540b6c(void) /* sub_540B6C */
{
    FN_ENTER(0x00540b6c);
    /* 00540b6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00540b6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00540b6e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540b6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00540b70: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00540b73: mov edi, ecx */ r_edi = r_ecx;
    /* 00540b75: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 00540b7b: fcomp dword ptr [0x923604] */ fx_compare(ST(0), R_F32((u32)(0x923604u))); FPOP();
    /* 00540b81: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00540b83: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00540b85: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00540b86: jae 0x540c50 */ if (!fC) goto L_00540c50;
L_00540b8c:; BB(0x00540b8c);
    /* 00540b8c: movzx edx, word ptr [edi + 0x4d0] */ r_edx = (u32)R16((u32)(r_edi+0x4d0u));
    /* 00540b93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00540b94: mov esi, 1 */ r_esi = 0x1u;
    /* 00540b99: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x540b9eu); f_007b4d18();
    /* 00540b9e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00540b9f: push dword ptr [edi + 0x398] */ { u32 v = R32((u32)(r_edi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 00540ba5: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 00540bab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00540bad: mov ecx, eax */ r_ecx = r_eax;
    /* 00540baf: call dword ptr [edx + 0x1d8] */ { u32 t = R32((u32)(r_edx+0x1d8u)); r_esp -= 4; W32(r_esp, 0x540bb5u); call_ind(t); }
    /* 00540bb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540bb7: jne 0x540c50 */ if (!fZ) goto L_00540c50;
L_00540bbd:; BB(0x00540bbd);
    /* 00540bbd: fld dword ptr [0x923608] */ FPUSH(R_F32((u32)(0x923608u)));
    /* 00540bc3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00540bc6: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00540bca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00540bcb: push dword ptr [0xa73710] */ { u32 v = R32((u32)(0xa73710u)); r_esp -= 4; W32(r_esp, v); }
    /* 00540bd1: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00540bd3: mov ecx, edi */ r_ecx = r_edi;
    /* 00540bd5: call 0x51f918 */ r_esp -= 4; W32(r_esp, 0x540bdau); f_0051f918();
    /* 00540bda: mov edx, eax */ r_edx = r_eax;
    /* 00540bdc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00540bde: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00540be0: jle 0x540c3c */ if ((fZ||fS!=fO)) goto L_00540c3c;
L_00540be2:; BB(0x00540be2);
    /* 00540be2: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00540be6: mov ebp, eax */ r_ebp = r_eax;
    /* 00540be8: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00540bec: mov esi, edi */ r_esi = r_edi;
    /* 00540bee: mov edi, edx */ r_edi = r_edx;
L_00540bf0:; BB(0x00540bf0);
    /* 00540bf0: movzx ebx, word ptr [esp + ebp*8 + 0xc] */ r_ebx = (u32)R16((u32)(r_esp+r_ebp*8+0xcu));
    /* 00540bf5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00540bf6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x540bfbu); f_0068d5a8();
    /* 00540bfb: mov ebx, eax */ r_ebx = r_eax;
    /* 00540bfd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540c00: cmp ebx, dword ptr [esi + 0x398] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x398u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540c06: je 0x540c2d */ if (fZ) goto L_00540c2d;
L_00540c08:; BB(0x00540c08);
    /* 00540c08: movzx eax, word ptr [esi + 0x4d0] */ r_eax = (u32)R16((u32)(r_esi+0x4d0u));
    /* 00540c0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540c10: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x540c15u); f_007b4d18();
    /* 00540c15: mov ecx, eax */ r_ecx = r_eax;
    /* 00540c17: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540c1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00540c1b: mov dword ptr [esi + 0x3c8], ecx */ W32((u32)(r_esi+0x3c8u), r_ecx);
    /* 00540c21: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00540c23: call dword ptr [eax + 0x1d8] */ { u32 t = R32((u32)(r_eax+0x1d8u)); r_esp -= 4; W32(r_esp, 0x540c29u); call_ind(t); }
    /* 00540c29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540c2b: jne 0x540c5a */ if (!fZ) goto L_00540c5a;
L_00540c2d:; BB(0x00540c2d);
    /* 00540c2d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00540c30: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540c32: jl 0x540bf0 */ if ((fS!=fO)) goto L_00540bf0;
L_00540c34:; BB(0x00540c34);
    /* 00540c34: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00540c38: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_00540c3c:; BB(0x00540c3c);
    /* 00540c3c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540c3e: je 0x540c50 */ if (fZ) goto L_00540c50;
L_00540c40:; BB(0x00540c40);
    /* 00540c40: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00540c43: fcomp dword ptr [0x923604] */ fx_compare(ST(0), R_F32((u32)(0x923604u))); FPOP();
    /* 00540c49: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00540c4b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00540c4c: jbe 0x540c50 */ if ((fC||fZ)) goto L_00540c50;
L_00540c4e:; BB(0x00540c4e);
    /* 00540c4e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00540c50:; BB(0x00540c50);
    /* 00540c50: mov eax, esi */ r_eax = r_esi;
    /* 00540c52: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00540c55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00540c56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540c57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00540c58: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00540c59: ret  */ FN_RET(0x00540b6c); r_esp += 4; return;
L_00540c5a:; BB(0x00540c5a);
    /* 00540c5a: mov eax, ebp */ r_eax = r_ebp;
    /* 00540c5c: mov edi, esi */ r_edi = r_esi;
    /* 00540c5e: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00540c62: push dword ptr [esp + eax*8 + 0x10] */ { u32 v = R32((u32)(r_esp+r_eax*8+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00540c66: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x540c6bu); f_0082dc9c();
    /* 00540c6b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00540c6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00540c6f: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00540c74: mov ecx, edi */ r_ecx = r_edi;
    /* 00540c76: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x540c7bu); f_00521388();
    /* 00540c7b: jmp 0x540c3c */ goto L_00540c3c;
}

void f_00540c80(void) /* sub_540C80 */
{
    FN_ENTER(0x00540c80);
    /* 00540c80: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00540c84: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00540c86: mov dword ptr [ecx + 0x4ac], edx */ W32((u32)(r_ecx+0x4acu), r_edx);
    /* 00540c8c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00540c8f: mov dword ptr [ecx + 0x4b0], edx */ W32((u32)(r_ecx+0x4b0u), r_edx);
    /* 00540c95: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00540c98: mov dword ptr [ecx + 0x4b4], edx */ W32((u32)(r_ecx+0x4b4u), r_edx);
    /* 00540c9e: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00540ca1: mov dword ptr [ecx + 0x4b8], eax */ W32((u32)(r_ecx+0x4b8u), r_eax);
    /* 00540ca7: call 0x53eac8 */ r_esp -= 4; W32(r_esp, 0x540cacu); f_0053eac8();
    /* 00540cac: ret 4 */ FN_RET(0x00540c80); r_esp += 8; return;
}

void f_00540cb0(void) /* sub_540CB0 */
{
    FN_ENTER(0x00540cb0);
    /* 00540cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540cb1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00540cb3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00540cb7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540cba: je 0x540e72 */ if (fZ) goto L_00540e72;
L_00540cc0:; BB(0x00540cc0);
    /* 00540cc0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00540cc3: je 0x540e65 */ if (fZ) goto L_00540e65;
L_00540cc9:; BB(0x00540cc9);
    /* 00540cc9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540ccc: je 0x540e36 */ if (fZ) goto L_00540e36;
L_00540cd2:; BB(0x00540cd2);
    /* 00540cd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00540cd4: jne 0x540e65 */ if (!fZ) goto L_00540e65;
L_00540cda:; BB(0x00540cda);
    /* 00540cda: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540cdc: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x540ce1u); f_007aa094();
    /* 00540ce1: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00540ce6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540ce8: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x540cedu); f_00520ea0();
    /* 00540ced: mov eax, dword ptr [ebp + 0x478] */ r_eax = R32((u32)(r_ebp+0x478u));
    /* 00540cf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540cf5: je 0x540d79 */ if (fZ) goto L_00540d79;
L_00540cfb:; BB(0x00540cfb);
    /* 00540cfb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540cfe: jne 0x540d27 */ if (!fZ) goto L_00540d27;
L_00540d00:; BB(0x00540d00);
    /* 00540d00: mov eax, dword ptr [ebp + 0x4c0] */ r_eax = R32((u32)(r_ebp+0x4c0u));
    /* 00540d06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540d08: jne 0x540d14 */ if (!fZ) goto L_00540d14;
L_00540d0a:; BB(0x00540d0a);
    /* 00540d0a: mov dword ptr [ebp + 0x478], 3 */ W32((u32)(r_ebp+0x478u), 0x3u);
L_00540d14:; BB(0x00540d14);
    /* 00540d14: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540d16: call 0x540eb8 */ r_esp -= 4; W32(r_esp, 0x540d1bu); f_00540eb8();
    /* 00540d1b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540d1d: call 0x542470 */ r_esp -= 4; W32(r_esp, 0x540d22u); f_00542470();
    /* 00540d22: jmp 0x540e27 */ goto L_00540e27;
L_00540d27:; BB(0x00540d27);
    /* 00540d27: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540d2a: jne 0x540e27 */ if (!fZ) goto L_00540e27;
L_00540d30:; BB(0x00540d30);
    /* 00540d30: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540d32: call 0x540eb8 */ r_esp -= 4; W32(r_esp, 0x540d37u); f_00540eb8();
    /* 00540d37: mov eax, dword ptr [ebp + 0x4c0] */ r_eax = R32((u32)(r_ebp+0x4c0u));
    /* 00540d3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540d3f: jne 0x540e69 */ if (!fZ) goto L_00540e69;
L_00540d45:; BB(0x00540d45);
    /* 00540d45: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00540d48: fadd dword ptr [ebp + 0x3f8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3f8u));
    /* 00540d4e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00540d4f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00540d52: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540d54: call 0x542498 */ r_esp -= 4; W32(r_esp, 0x540d59u); f_00542498();
    /* 00540d59: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 00540d5f: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540d64: je 0x540e27 */ if (fZ) goto L_00540e27;
L_00540d6a:; BB(0x00540d6a);
    /* 00540d6a: mov dword ptr [ebp + 0x478], 3 */ W32((u32)(r_ebp+0x478u), 0x3u);
    /* 00540d74: jmp 0x540e27 */ goto L_00540e27;
L_00540d79:; BB(0x00540d79);
    /* 00540d79: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 00540d7f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00540d81: je 0x540e19 */ if (fZ) goto L_00540e19;
L_00540d87:; BB(0x00540d87);
    /* 00540d87: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00540d8a: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 00540d90: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540d95: je 0x540dd7 */ if (fZ) goto L_00540dd7;
L_00540d97:; BB(0x00540d97);
    /* 00540d97: push 0x923710 */ { u32 v = 0x923710u; r_esp -= 4; W32(r_esp, v); }
    /* 00540d9c: mov dword ptr [ebp + 0x478], 1 */ W32((u32)(r_ebp+0x478u), 0x1u);
    /* 00540da6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540da8: call 0x540c80 */ r_esp -= 4; W32(r_esp, 0x540dadu); f_00540c80();
    /* 00540dad: mov dword ptr [ebp + 0x4c0], 3 */ W32((u32)(r_ebp+0x4c0u), 0x3u);
    /* 00540db7: mov dword ptr [ebp + 0x4c4], 1 */ W32((u32)(r_ebp+0x4c4u), 0x1u);
    /* 00540dc1: mov dword ptr [ebp + 0x4c8], 2 */ W32((u32)(r_ebp+0x4c8u), 0x2u);
    /* 00540dcb: mov dword ptr [ebp + 0x4cc], 0 */ W32((u32)(r_ebp+0x4ccu), 0x0u);
    /* 00540dd5: jmp 0x540e19 */ goto L_00540e19;
L_00540dd7:; BB(0x00540dd7);
    /* 00540dd7: mov dword ptr [ebp + 0x478], 2 */ W32((u32)(r_ebp+0x478u), 0x2u);
    /* 00540de1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540de3: call 0x53f904 */ r_esp -= 4; W32(r_esp, 0x540de8u); f_0053f904();
    /* 00540de8: push 0x923710 */ { u32 v = 0x923710u; r_esp -= 4; W32(r_esp, v); }
    /* 00540ded: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540def: call 0x540c80 */ r_esp -= 4; W32(r_esp, 0x540df4u); f_00540c80();
    /* 00540df4: mov dword ptr [ebp + 0x4c8], 2 */ W32((u32)(r_ebp+0x4c8u), 0x2u);
    /* 00540dfe: mov eax, 3 */ r_eax = 0x3u;
    /* 00540e03: mov dword ptr [ebp + 0x4c0], eax */ W32((u32)(r_ebp+0x4c0u), r_eax);
    /* 00540e09: mov dword ptr [ebp + 0x4c4], eax */ W32((u32)(r_ebp+0x4c4u), r_eax);
    /* 00540e0f: mov dword ptr [ebp + 0x4cc], 0 */ W32((u32)(r_ebp+0x4ccu), 0x0u);
L_00540e19:; BB(0x00540e19);
    /* 00540e19: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540e1b: call 0x540eb8 */ r_esp -= 4; W32(r_esp, 0x540e20u); f_00540eb8();
    /* 00540e20: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540e22: call 0x542470 */ r_esp -= 4; W32(r_esp, 0x540e27u); f_00542470();
L_00540e27:; BB(0x00540e27);
    /* 00540e27: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00540e2a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540e2c: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x540e32u); call_ind(t); }
    /* 00540e32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540e33: ret 4 */ FN_RET(0x00540cb0); r_esp += 8; return;
L_00540e36:; BB(0x00540e36);
    /* 00540e36: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00540e39: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540e3b: call dword ptr [eax + 0x1b8] */ { u32 t = R32((u32)(r_eax+0x1b8u)); r_esp -= 4; W32(r_esp, 0x540e41u); call_ind(t); }
    /* 00540e41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00540e43: jne 0x540e65 */ if (!fZ) goto L_00540e65;
L_00540e45:; BB(0x00540e45);
    /* 00540e45: mov eax, dword ptr [ebp + 0x478] */ r_eax = R32((u32)(r_ebp+0x478u));
    /* 00540e4b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00540e4e: jne 0x540e65 */ if (!fZ) goto L_00540e65;
L_00540e50:; BB(0x00540e50);
    /* 00540e50: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00540e53: mov dword ptr [ebp + 0x40c], 0 */ W32((u32)(r_ebp+0x40cu), 0x0u);
    /* 00540e5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540e5f: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x540e65u); call_ind(t); }
L_00540e65:; BB(0x00540e65);
    /* 00540e65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540e66: ret 4 */ FN_RET(0x00540cb0); r_esp += 8; return;
L_00540e69:; BB(0x00540e69);
    /* 00540e69: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540e6b: call 0x542470 */ r_esp -= 4; W32(r_esp, 0x540e70u); f_00542470();
    /* 00540e70: jmp 0x540e27 */ goto L_00540e27;
L_00540e72:; BB(0x00540e72);
    /* 00540e72: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540e74: call 0x53e548 */ r_esp -= 4; W32(r_esp, 0x540e79u); f_0053e548();
    /* 00540e79: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00540e7b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540e7d: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x540e82u); f_0051f664();
    /* 00540e82: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 00540e88: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00540e8b: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00540e90: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 00540e96: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540e98: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x540e9eu); call_ind(t); }
    /* 00540e9e: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00540ea1: mov dword ptr [ebp + 0x478], 0 */ W32((u32)(r_ebp+0x478u), 0x0u);
    /* 00540eab: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00540eb0: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00540eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540eb4: ret 4 */ FN_RET(0x00540cb0); r_esp += 8; return;
}

void f_00540eb8(void) /* sub_540EB8 */
{
    FN_ENTER(0x00540eb8);
    /* 00540eb8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00540eb9: mov esi, ecx */ r_esi = r_ecx;
    /* 00540ebb: mov ecx, esi */ r_ecx = r_esi;
    /* 00540ebd: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x540ec2u); f_00520f04();
    /* 00540ec2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00540ec4: je 0x540edb */ if (fZ) goto L_00540edb;
L_00540ec6:; BB(0x00540ec6);
    /* 00540ec6: mov ecx, esi */ r_ecx = r_esi;
    /* 00540ec8: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x540ecdu); f_005213d8();
    /* 00540ecd: mov ecx, esi */ r_ecx = r_esi;
    /* 00540ecf: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x540ed4u); f_00521410();
    /* 00540ed4: mov ecx, esi */ r_ecx = r_esi;
    /* 00540ed6: call 0x54051c */ r_esp -= 4; W32(r_esp, 0x540edbu); f_0054051c();
L_00540edb:; BB(0x00540edb);
    /* 00540edb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00540edc: ret  */ FN_RET(0x00540eb8); r_esp += 4; return;
}

void f_00540ee0(void) /* sub_540EE0 */
{
    FN_ENTER(0x00540ee0);
    /* 00540ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540ee1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00540ee3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00540ee7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540eea: je 0x540fa2 */ if (fZ) goto L_00540fa2;
L_00540ef0:; BB(0x00540ef0);
    /* 00540ef0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00540ef3: je 0x540f88 */ if (fZ) goto L_00540f88;
L_00540ef9:; BB(0x00540ef9);
    /* 00540ef9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540efc: je 0x540f45 */ if (fZ) goto L_00540f45;
L_00540efe:; BB(0x00540efe);
    /* 00540efe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00540f00: jne 0x540f88 */ if (!fZ) goto L_00540f88;
L_00540f06:; BB(0x00540f06);
    /* 00540f06: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540f08: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x540f0du); f_007aa094();
    /* 00540f0d: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 00540f13: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540f16: je 0x540f2a */ if (fZ) goto L_00540f2a;
L_00540f18:; BB(0x00540f18);
    /* 00540f18: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00540f1d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540f1f: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x540f24u); f_00520ea0();
    /* 00540f24: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
L_00540f2a:; BB(0x00540f2a);
    /* 00540f2a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540f2d: je 0x540f8c */ if (fZ) goto L_00540f8c;
L_00540f2f:; BB(0x00540f2f);
    /* 00540f2f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540f31: call 0x542484 */ r_esp -= 4; W32(r_esp, 0x540f36u); f_00542484();
L_00540f36:; BB(0x00540f36);
    /* 00540f36: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00540f39: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540f3b: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x540f41u); call_ind(t); }
    /* 00540f41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540f42: ret 4 */ FN_RET(0x00540ee0); r_esp += 8; return;
L_00540f45:; BB(0x00540f45);
    /* 00540f45: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00540f48: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540f4a: call dword ptr [eax + 0x1b8] */ { u32 t = R32((u32)(r_eax+0x1b8u)); r_esp -= 4; W32(r_esp, 0x540f50u); call_ind(t); }
    /* 00540f50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00540f52: jne 0x540f88 */ if (!fZ) goto L_00540f88;
L_00540f54:; BB(0x00540f54);
    /* 00540f54: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 00540f5a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00540f5c: je 0x540f74 */ if (fZ) goto L_00540f74;
L_00540f5e:; BB(0x00540f5e);
    /* 00540f5e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00540f60: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00540f63: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 00540f69: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540f6b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x540f70u); f_0051f62c();
    /* 00540f70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540f71: ret 4 */ FN_RET(0x00540ee0); r_esp += 8; return;
L_00540f74:; BB(0x00540f74);
    /* 00540f74: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540f76: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x540f7bu); f_00520f04();
    /* 00540f7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00540f7d: je 0x540f88 */ if (fZ) goto L_00540f88;
L_00540f7f:; BB(0x00540f7f);
    /* 00540f7f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00540f81: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540f83: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x540f88u); f_0051f62c();
L_00540f88:; BB(0x00540f88);
    /* 00540f88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540f89: ret 4 */ FN_RET(0x00540ee0); r_esp += 8; return;
L_00540f8c:; BB(0x00540f8c);
    /* 00540f8c: fld dword ptr [0x9235f8] */ FPUSH(R_F32((u32)(0x9235f8u)));
    /* 00540f92: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 00540f95: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00540f96: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00540f99: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540f9b: call 0x542498 */ r_esp -= 4; W32(r_esp, 0x540fa0u); f_00542498();
    /* 00540fa0: jmp 0x540f36 */ goto L_00540f36;
L_00540fa2:; BB(0x00540fa2);
    /* 00540fa2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00540fa4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00540fa6: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00540fad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540faf: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x540fb4u); f_0051f664();
    /* 00540fb4: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 00540fba: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00540fbd: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00540fc2: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 00540fc8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00540fca: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x540fd0u); call_ind(t); }
    /* 00540fd0: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00540fd3: mov dword ptr [ebp + 0x404], 4 */ W32((u32)(r_ebp+0x404u), 0x4u);
    /* 00540fdd: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00540fe2: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00540fe5: mov dword ptr [ebp + 0x4c0], 1 */ W32((u32)(r_ebp+0x4c0u), 0x1u);
    /* 00540fef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540ff0: ret 4 */ FN_RET(0x00540ee0); r_esp += 8; return;
}

void f_00540ff4(void) /* sub_540FF4 */
{
    FN_ENTER(0x00540ff4);
    /* 00540ff4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00540ff5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00540ff7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00540ffb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540ffe: je 0x541066 */ if (fZ) goto L_00541066;
L_00541000:; BB(0x00541000);
    /* 00541000: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541003: je 0x541030 */ if (fZ) goto L_00541030;
L_00541005:; BB(0x00541005);
    /* 00541005: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00541007: jne 0x54104c */ if (!fZ) goto L_0054104c;
L_00541009:; BB(0x00541009);
    /* 00541009: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054100b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x541010u); f_007aa094();
    /* 00541010: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 00541016: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00541019: je 0x541050 */ if (fZ) goto L_00541050;
L_0054101b:; BB(0x0054101b);
    /* 0054101b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054101d: call 0x542484 */ r_esp -= 4; W32(r_esp, 0x541022u); f_00542484();
L_00541022:; BB(0x00541022);
    /* 00541022: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00541024: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00541026: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x54102cu); call_ind(t); }
    /* 0054102c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054102d: ret 4 */ FN_RET(0x00540ff4); r_esp += 8; return;
L_00541030:; BB(0x00541030);
    /* 00541030: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 00541036: lea ecx, [ebx + 0x3d4] */ r_ecx = (u32)(r_ebx+0x3d4u);
    /* 0054103c: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x54103fu); call_ind(t); }
    /* 0054103f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00541041: je 0x54104c */ if (fZ) goto L_0054104c;
L_00541043:; BB(0x00541043);
    /* 00541043: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00541045: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00541047: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54104cu); f_0051f62c();
L_0054104c:; BB(0x0054104c);
    /* 0054104c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054104d: ret 4 */ FN_RET(0x00540ff4); r_esp += 8; return;
L_00541050:; BB(0x00541050);
    /* 00541050: fld dword ptr [0x9235f8] */ FPUSH(R_F32((u32)(0x9235f8u)));
    /* 00541056: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 00541059: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054105a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0054105d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054105f: call 0x542498 */ r_esp -= 4; W32(r_esp, 0x541064u); f_00542498();
    /* 00541064: jmp 0x541022 */ goto L_00541022;
L_00541066:; BB(0x00541066);
    /* 00541066: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00541068: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054106a: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00541071: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00541073: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x541078u); f_0051f664();
    /* 00541078: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 0054107e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00541080: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00541085: mov dword ptr [ebx + 0x3d0], eax */ W32((u32)(r_ebx+0x3d0u), r_eax);
    /* 0054108b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054108d: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x541093u); call_ind(t); }
    /* 00541093: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00541096: mov dword ptr [ebx + 0x404], 4 */ W32((u32)(r_ebx+0x404u), 0x4u);
    /* 005410a0: lea ecx, [ebx + 0x3d4] */ r_ecx = (u32)(r_ebx+0x3d4u);
    /* 005410a6: mov dword ptr [ebx + 0x4c0], 1 */ W32((u32)(r_ebx+0x4c0u), 0x1u);
    /* 005410b0: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005410b5: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 005410b8: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x5410bdu); f_00576c48();
    /* 005410bd: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005410c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005410c1: call 0x5789e4 */ r_esp -= 4; W32(r_esp, 0x5410c6u); f_005789e4();
    /* 005410c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005410c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005410c8: ret 4 */ FN_RET(0x00540ff4); r_esp += 8; return;
}

