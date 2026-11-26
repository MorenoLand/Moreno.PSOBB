#include "protos.h"

void f_005f0000(void)
{
    FN_ENTER(0x005f0000);
    /* 005f0000: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 005f0002: xchg byte ptr [edx], bh */ { u32 x = R8((u32)(r_edx)); u32 y = (u8)(r_ebx>>8); W8((u32)(r_edx), y); r_ebx = (r_ebx & 0xffff00ffu) | (((x) & 0xffu) << 8); }
    /* 005f0004: std  */ rt_df = 1;
    /* 005f0005: dec dword ptr [ebx + 0x72ffd855] */ { u32 ad = (u32)(r_ebx+0x72ffd855u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 005f000b: sbb al, 0x89 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f000d: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f000e: sub al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (a < b); }
    /* 005f0010: adc al, 0x55 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x55u; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f0012: std  */ rt_df = 1;
    /* 005f0013: call ptr [ecx - 0x7b] */ { u32 t = R32((u32)(r_ecx+0xffffff85u)); r_esp -= 4; W32(r_esp, 0x5f0016u); call_ind(t); }
    /* 005f0016: sal byte ptr [ecx - 0x75], 0x5d */ { u32 ad = (u32)(r_ecx+0xffffff8bu); u32 c = (29u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 005f001b: fmul dword ptr [ebp - 0x74ad47ab] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x8b52b855u));
    /* 005f0021: enter 0x73ff, 0x20 */ { u32 f = 0x73ffu; u32 lv = 0u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 005f0025: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f002au); f_005e83c8();
    /* 005f002a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f002c: jne 0x5f0033 */ if (!fZ) goto L_005f0033;
L_005f002e:; BB(0x005f002e);
    /* 005f002e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0031: jmp 0x5f007d */ goto L_005f007d;
L_005f0033:; BB(0x005f0033);
    /* 005f0033: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f0036: mov eax, dword ptr [0x92d964] */ r_eax = R32((u32)(0x92d964u));
    /* 005f003b: mov edx, dword ptr [0x92d968] */ r_edx = R32((u32)(0x92d968u));
    /* 005f0041: mov ecx, dword ptr [0x92d96c] */ r_ecx = R32((u32)(0x92d96cu));
    /* 005f0047: mov ebx, dword ptr [0x92d970] */ r_ebx = R32((u32)(0x92d970u));
    /* 005f004d: mov esi, dword ptr [0x92d974] */ r_esi = R32((u32)(0x92d974u));
    /* 005f0053: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005f0056: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005f0059: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005f005c: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 005f005f: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005f0062: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 005f0065: lea edi, [ebp - 0x3c] */ r_edi = (u32)(r_ebp+0xffffffc4u);
    /* 005f0068: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f006a: call 0x5dd7e8 */ r_esp -= 4; W32(r_esp, 0x5f006fu); f_005dd7e8();
    /* 005f006f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f0072: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0075: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 005f0078: jmp 0x5f007d */ goto L_005f007d;
L_005f007d:; BB(0x005f007d);
    /* 005f007d: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f0080: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f0083: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f0086: mov eax, edx */ r_eax = r_edx;
    /* 005f0088: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f008b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f0092: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0095: ret 0xc */ FN_RET(0x005f0000); r_esp += 16; return;
}

void f_005f002d(void)
{
    FN_ENTER(0x005f002d);
    /* 005f002d: add eax, 0xebd8558b */ {  u32 a = r_eax; u32 b = 0xebd8558bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f0032: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f0033: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f0036: mov eax, dword ptr [0x92d964] */ r_eax = R32((u32)(0x92d964u));
    /* 005f003b: mov edx, dword ptr [0x92d968] */ r_edx = R32((u32)(0x92d968u));
    /* 005f0041: mov ecx, dword ptr [0x92d96c] */ r_ecx = R32((u32)(0x92d96cu));
    /* 005f0047: mov ebx, dword ptr [0x92d970] */ r_ebx = R32((u32)(0x92d970u));
    /* 005f004d: mov esi, dword ptr [0x92d974] */ r_esi = R32((u32)(0x92d974u));
    /* 005f0053: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005f0056: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005f0059: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005f005c: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 005f005f: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005f0062: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 005f0065: lea edi, [ebp - 0x3c] */ r_edi = (u32)(r_ebp+0xffffffc4u);
    /* 005f0068: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f006a: call 0x5dd7e8 */ r_esp -= 4; W32(r_esp, 0x5f006fu); f_005dd7e8();
    /* 005f006f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f0072: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0075: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 005f0078: jmp 0x5f007d */ goto L_005f007d;
L_005f007d:; BB(0x005f007d);
    /* 005f007d: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f0080: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f0083: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f0086: mov eax, edx */ r_eax = r_edx;
    /* 005f0088: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f008b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f0092: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0095: ret 0xc */ FN_RET(0x005f002d); r_esp += 16; return;
}

void f_005f0039(void)
{
    FN_ENTER(0x005f0039);
    /* 005f0039: xchg edx, eax */ { u32 x = r_edx; u32 y = r_eax; r_edx = y; r_eax = x; }
    /* 005f003a: add byte ptr [ebx - 0x6d2697eb], cl */ { u32 ad = (u32)(r_ebx+0x92d96815u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005f0040: add byte ptr [ebx - 0x6d2693f3], cl */ { u32 ad = (u32)(r_ebx+0x92d96c0du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005f0046: add byte ptr [ebx - 0x6d268fe3], cl */ { u32 ad = (u32)(r_ebx+0x92d9701du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005f004c: add byte ptr [ebx - 0x6d268bcb], cl */ { u32 ad = (u32)(r_ebx+0x92d97435u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005f0052: add byte ptr [ecx + 0x5589c445], cl */ { u32 ad = (u32)(r_ecx+0x5589c445u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005f0058: enter 0x4d89, -0x34 */ { u32 f = 0x4d89u; u32 lv = 12u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 005f005c: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 005f005f: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005f0062: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 005f0065: lea edi, [ebp - 0x3c] */ r_edi = (u32)(r_ebp+0xffffffc4u);
    /* 005f0068: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f006a: call 0x5dd7e8 */ r_esp -= 4; W32(r_esp, 0x5f006fu); f_005dd7e8();
    /* 005f006f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f0072: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0075: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 005f0078: jmp 0x5f007d */ goto L_005f007d;
L_005f007d:; BB(0x005f007d);
    /* 005f007d: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f0080: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f0083: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f0086: mov eax, edx */ r_eax = r_edx;
    /* 005f0088: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f008b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f0092: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0095: ret 0xc */ FN_RET(0x005f0039); r_esp += 16; return;
}

void f_005f0041(void)
{
    FN_ENTER(0x005f0041);
    /* 005f0041: mov ecx, dword ptr [0x92d96c] */ r_ecx = R32((u32)(0x92d96cu));
    /* 005f0047: mov ebx, dword ptr [0x92d970] */ r_ebx = R32((u32)(0x92d970u));
    /* 005f004d: mov esi, dword ptr [0x92d974] */ r_esi = R32((u32)(0x92d974u));
    /* 005f0053: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005f0056: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005f0059: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005f005c: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 005f005f: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005f0062: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 005f0065: lea edi, [ebp - 0x3c] */ r_edi = (u32)(r_ebp+0xffffffc4u);
    /* 005f0068: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f006a: call 0x5dd7e8 */ r_esp -= 4; W32(r_esp, 0x5f006fu); f_005dd7e8();
    /* 005f006f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f0072: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0075: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 005f0078: jmp 0x5f007d */ goto L_005f007d;
L_005f007d:; BB(0x005f007d);
    /* 005f007d: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f0080: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f0083: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f0086: mov eax, edx */ r_eax = r_edx;
    /* 005f0088: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f008b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f0092: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0095: ret 0xc */ FN_RET(0x005f0041); r_esp += 16; return;
}

void f_005f0050(void)
{
    FN_ENTER(0x005f0050);
    /* 005f0050: fst dword ptr [edx - 0x3bba7700] */ W_F32((u32)(r_edx+0xc4458900u), ST(0));
    /* 005f0056: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005f0059: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005f005c: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 005f005f: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005f0062: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 005f0065: lea edi, [ebp - 0x3c] */ r_edi = (u32)(r_ebp+0xffffffc4u);
    /* 005f0068: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f006a: call 0x5dd7e8 */ r_esp -= 4; W32(r_esp, 0x5f006fu); f_005dd7e8();
    /* 005f006f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f0072: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0075: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 005f0078: jmp 0x5f007d */ goto L_005f007d;
L_005f007d:; BB(0x005f007d);
    /* 005f007d: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f0080: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f0083: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f0086: mov eax, edx */ r_eax = r_edx;
    /* 005f0088: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f008b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f0092: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0095: ret 0xc */ FN_RET(0x005f0050); r_esp += 16; return;
}

void f_005f0057(void)
{
    FN_ENTER(0x005f0057);
    /* 005f0057: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0058: enter 0x4d89, -0x34 */ { u32 f = 0x4d89u; u32 lv = 12u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 005f005c: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 005f005f: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005f0062: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 005f0065: lea edi, [ebp - 0x3c] */ r_edi = (u32)(r_ebp+0xffffffc4u);
    /* 005f0068: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f006a: call 0x5dd7e8 */ r_esp -= 4; W32(r_esp, 0x5f006fu); f_005dd7e8();
    /* 005f006f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f0072: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0075: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 005f0078: jmp 0x5f007d */ goto L_005f007d;
L_005f007d:; BB(0x005f007d);
    /* 005f007d: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f0080: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f0083: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f0086: mov eax, edx */ r_eax = r_edx;
    /* 005f0088: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f008b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f0092: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0095: ret 0xc */ FN_RET(0x005f0057); r_esp += 16; return;
}

void f_005f005e(void)
{
    FN_ENTER(0x005f005e);
    /* 005f005e: ror byte ptr [ecx + 0x458dd475], 1 */ { u32 ad = (u32)(r_ecx+0x458dd475u); u32 c = (1u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 005f0064: mov eax, 0x57c47d8d */ r_eax = 0x57c47d8du;
    /* 005f0069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f006a: call 0x5dd7e8 */ r_esp -= 4; W32(r_esp, 0x5f006fu); f_005dd7e8();
    /* 005f006f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f0072: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0075: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 005f0078: jmp 0x5f007d */ goto L_005f007d;
L_005f007d:; BB(0x005f007d);
    /* 005f007d: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f0080: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f0083: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f0086: mov eax, edx */ r_eax = r_edx;
    /* 005f0088: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f008b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f0092: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0095: ret 0xc */ FN_RET(0x005f005e); r_esp += 16; return;
}

void f_005f0074(void)
{
    FN_ENTER(0x005f0074);
    /* 005f0074: fmul dword ptr [ecx + 0x3eb2442] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x3eb2442u));
    /* 005f007a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f007d: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f0080: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f0083: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f0086: mov eax, edx */ r_eax = r_edx;
    /* 005f0088: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f008b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f0092: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0095: ret 0xc */ FN_RET(0x005f0074); r_esp += 16; return;
}

void f_005f0098(void) /* sub_5F0098 */
{
    FN_ENTER(0x005f0098);
    /* 005f0098: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0099: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f009a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f009d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f009f: mov edx, dword ptr [ebp + 0xfc] */ r_edx = R32((u32)(r_ebp+0xfcu));
    /* 005f00a5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f00a7: je 0x5f0152 */ if (fZ) goto L_005f0152;
L_005f00ad:; BB(0x005f00ad);
    /* 005f00ad: mov eax, dword ptr [ebp + 0xdc] */ r_eax = R32((u32)(r_ebp+0xdcu));
    /* 005f00b3: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005f00b5: jne 0x5f0152 */ if (!fZ) goto L_005f0152;
L_005f00bb:; BB(0x005f00bb);
    /* 005f00bb: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005f00bd: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005f00c0: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005f00c3: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 005f00c6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f00c8: or dword ptr [ebx], 0x18 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x18u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005f00cb: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5f00d0u); f_005e6334();
    /* 005f00d0: and dword ptr [ebx], 0xffffffe7 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0xffffffe7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005f00d3: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 005f00d7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f00d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f00da: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005f00dc: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f00e1u); f_005e83c8();
    /* 005f00e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f00e3: je 0x5f0152 */ if (fZ) goto L_005f0152;
L_005f00e5:; BB(0x005f00e5);
    /* 005f00e5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5f00eau); f_0082d7b0();
    /* 005f00ea: call 0x5cb0c8 */ r_esp -= 4; W32(r_esp, 0x5f00efu); f_005cb0c8();
    /* 005f00ef: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005f00f4: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005f00f7: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005f00fc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f00fe: call 0x5c3538 */ r_esp -= 4; W32(r_esp, 0x5f0103u); f_005c3538();
    /* 005f0103: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005f0106: call 0x5cb158 */ r_esp -= 4; W32(r_esp, 0x5f010bu); f_005cb158();
    /* 005f010b: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 005f010f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5f0114u); f_0082d838();
    /* 005f0114: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005f011a: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005f011d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f011f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5f0124u); f_0082d8bc();
    /* 005f0124: or dword ptr [ebx], 0x11 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x11u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005f0127: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f0129: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5f012eu); f_00831758();
    /* 005f012e: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5f0133u); f_0082dbac();
    /* 005f0133: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 005f0136: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5f013bu); f_00831758();
    /* 005f013b: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5f0140u); f_0082dab0();
    /* 005f0140: and dword ptr [ebx], 0xffffffee */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0xffffffeeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005f0143: call 0x5cb228 */ r_esp -= 4; W32(r_esp, 0x5f0148u); f_005cb228();
    /* 005f0148: call 0x5cb114 */ r_esp -= 4; W32(r_esp, 0x5f014du); f_005cb114();
    /* 005f014d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5f0152u); f_0082da80();
L_005f0152:; BB(0x005f0152);
    /* 005f0152: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f0155: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f0156: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0157: ret  */ FN_RET(0x005f0098); r_esp += 4; return;
}

void f_005f00ff(void)
{
    FN_ENTER(0x005f00ff);
    /* 005f00ff: xor eax, 0xd9fffd34 */ {  u32 a = r_eax; u32 b = 0xd9fffd34u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 005f0104: sbb al, 0x24 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f0106: call 0x5cb158 */ r_esp -= 4; W32(r_esp, 0x5f010bu); f_005cb158();
    /* 005f010b: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 005f010f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5f0114u); f_0082d838();
    /* 005f0114: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005f011a: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005f011d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f011f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5f0124u); f_0082d8bc();
    /* 005f0124: or dword ptr [ebx], 0x11 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x11u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 005f0127: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f0129: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5f012eu); f_00831758();
    /* 005f012e: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5f0133u); f_0082dbac();
    /* 005f0133: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 005f0136: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5f013bu); f_00831758();
    /* 005f013b: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5f0140u); f_0082dab0();
    /* 005f0140: and dword ptr [ebx], 0xffffffee */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0xffffffeeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005f0143: call 0x5cb228 */ r_esp -= 4; W32(r_esp, 0x5f0148u); f_005cb228();
    /* 005f0148: call 0x5cb114 */ r_esp -= 4; W32(r_esp, 0x5f014du); f_005cb114();
    /* 005f014d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5f0152u); f_0082da80();
    /* 005f0152: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f0155: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f0156: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0157: ret  */ FN_RET(0x005f00ff); r_esp += 4; return;
}

void f_005f0158(void) /* sub_5F0158 */
{
    FN_ENTER(0x005f0158);
    /* 005f0158: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0159: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f015c: mov esi, ecx */ r_esi = r_ecx;
    /* 005f015e: mov ecx, esi */ r_ecx = r_esi;
    /* 005f0160: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f0165u); f_005e90b0();
    /* 005f0165: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0167: je 0x5f01a2 */ if (fZ) goto L_005f01a2;
L_005f0169:; BB(0x005f0169);
    /* 005f0169: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f016c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f016d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005f016f: mov ecx, esi */ r_ecx = r_esi;
    /* 005f0171: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f0176u); f_005e83c8();
    /* 005f0176: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0178: je 0x5f01a9 */ if (fZ) goto L_005f01a9;
L_005f017a:; BB(0x005f017a);
    /* 005f017a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f017d: push dword ptr [esi + 0x1e4] */ { u32 v = R32((u32)(r_esi+0x1e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f0183: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 005f0189: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f018c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f018d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f018e: call 0x6e9848 */ r_esp -= 4; W32(r_esp, 0x5f0193u); f_006e9848();
    /* 005f0193: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f0196: mov ecx, esi */ r_ecx = r_esi;
    /* 005f0198: call 0x5e7480 */ r_esp -= 4; W32(r_esp, 0x5f019du); f_005e7480();
    /* 005f019d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f01a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f01a1: ret  */ FN_RET(0x005f0158); r_esp += 4; return;
L_005f01a2:; BB(0x005f01a2);
    /* 005f01a2: mov ecx, esi */ r_ecx = r_esi;
    /* 005f01a4: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f01a9u); f_005e90e8();
L_005f01a9:; BB(0x005f01a9);
    /* 005f01a9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f01ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f01ad: ret  */ FN_RET(0x005f0158); r_esp += 4; return;
}

void f_005f01b0(void) /* sub_5F01B0 */
{
    FN_ENTER(0x005f01b0);
    /* 005f01b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f01b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f01b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f01b5: push 0x8dc9d4 */ { u32 v = 0x8dc9d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f01ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f01c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f01c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f01c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f01cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f01ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f01d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f01d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f01d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f01da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f01dc: je 0x5f0233 */ if (fZ) goto L_005f0233;
L_005f01de:; BB(0x005f01de);
    /* 005f01de: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f01e5: push 0x250 */ { u32 v = 0x250u; r_esp -= 4; W32(r_esp, v); }
    /* 005f01ea: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f01efu); f_005caba4();
    /* 005f01ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f01f0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f01f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f01f5: je 0x5f022f */ if (fZ) goto L_005f022f;
L_005f01f7:; BB(0x005f01f7);
    /* 005f01f7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f01fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f0205: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f0208: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f020b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f020c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f0212: call 0x5f0244 */ r_esp -= 4; W32(r_esp, 0x5f0217u); f_005f0244();
    /* 005f0217: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f021a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f0221:; BB(0x005f0221);
    /* 005f0221: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f0224: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f022b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f022d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f022e: ret  */ FN_RET(0x005f01b0); r_esp += 4; return;
L_005f022f:; BB(0x005f022f);
    /* 005f022f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f0231: jmp 0x5f0221 */ goto L_005f0221;
L_005f0233:; BB(0x005f0233);
    /* 005f0233: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f0235: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f0238: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f023f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0241: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0242: ret  */ FN_RET(0x005f01b0); r_esp += 4; return;
}

void f_005f0244(void) /* sub_5F0244 */
{
    FN_ENTER(0x005f0244);
    /* 005f0244: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0245: mov edi, ecx */ r_edi = r_ecx;
    /* 005f0247: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f024b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f024f: mov ecx, edi */ r_ecx = r_edi;
    /* 005f0251: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f0256u); f_005e959c();
    /* 005f0256: mov edx, dword ptr [edi + 0x190] */ r_edx = R32((u32)(r_edi+0x190u));
    /* 005f025c: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005f0262: mov dword ptr [edi], 0xb13f60 */ W32((u32)(r_edi), 0xb13f60u);
    /* 005f0268: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005f026b: mov dword ptr [edi + 0x1e8], 0xc */ W32((u32)(r_edi+0x1e8u), 0xcu);
    /* 005f0275: mov dword ptr [edi + 0x190], edx */ W32((u32)(r_edi+0x190u), r_edx);
    /* 005f027b: or eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f027e: mov dword ptr [edi + 0x1dc], eax */ W32((u32)(r_edi+0x1dcu), r_eax);
    /* 005f0284: mov dword ptr [edi + 0x24c], 0xffffffff */ W32((u32)(r_edi+0x24cu), 0xffffffffu);
    /* 005f028e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f0290: mov dword ptr [edi + 0x240], eax */ W32((u32)(r_edi+0x240u), r_eax);
    /* 005f0296: mov dword ptr [edi + 0x248], eax */ W32((u32)(r_edi+0x248u), r_eax);
    /* 005f029c: mov eax, edi */ r_eax = r_edi;
    /* 005f029e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f029f: ret 8 */ FN_RET(0x005f0244); r_esp += 12; return;
}

void f_005f02a4(void) /* sub_5F02A4 */
{
    FN_ENTER(0x005f02a4);
    /* 005f02a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f02a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f02a6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f02a9: mov esi, ecx */ r_esi = r_ecx;
    /* 005f02ab: call 0x5c3a8c */ r_esp -= 4; W32(r_esp, 0x5f02b0u); f_005c3a8c();
    /* 005f02b0: cmp eax, dword ptr [esi + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f02b3: jne 0x5f02ec */ if (!fZ) goto L_005f02ec;
L_005f02b5:; BB(0x005f02b5);
    /* 005f02b5: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 005f02b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f02ba: je 0x5f02d9 */ if (fZ) goto L_005f02d9;
L_005f02bc:; BB(0x005f02bc);
    /* 005f02bc: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f02bf: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5f02c4u); f_005c5528();
    /* 005f02c4: mov ebp, eax */ r_ebp = r_eax;
    /* 005f02c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f02c9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f02cb: je 0x5f02d9 */ if (fZ) goto L_005f02d9;
L_005f02cd:; BB(0x005f02cd);
    /* 005f02cd: movsx edx, byte ptr [ebp + 0xf1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xf1u));
    /* 005f02d4: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f02d7: je 0x5f02ff */ if (fZ) goto L_005f02ff;
L_005f02d9:; BB(0x005f02d9);
    /* 005f02d9: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005f02dd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f02e2: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 005f02e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f02e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f02ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f02eb: ret  */ FN_RET(0x005f02a4); r_esp += 4; return;
L_005f02ec:; BB(0x005f02ec);
    /* 005f02ec: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005f02f0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f02f5: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 005f02f9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f02fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f02fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f02fe: ret  */ FN_RET(0x005f02a4); r_esp += 4; return;
L_005f02ff:; BB(0x005f02ff);
    /* 005f02ff: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005f0302: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0303: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f0306: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f0308: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f030du); f_005e83c8();
    /* 005f030d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f030f: je 0x5f02d9 */ if (fZ) goto L_005f02d9;
L_005f0311:; BB(0x005f0311);
    /* 005f0311: mov eax, dword ptr [ebp + 0xdc] */ r_eax = R32((u32)(r_ebp+0xdcu));
    /* 005f0317: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005f0319: jne 0x5f032d */ if (!fZ) goto L_005f032d;
L_005f031b:; BB(0x005f031b);
    /* 005f031b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f031e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f031f: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 005f0322: call 0x5073d0 */ r_esp -= 4; W32(r_esp, 0x5f0327u); f_005073d0();
    /* 005f0327: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f032a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f032b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f032c: ret  */ FN_RET(0x005f02a4); r_esp += 4; return;
L_005f032d:; BB(0x005f032d);
    /* 005f032d: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 005f0330: call 0x5073a8 */ r_esp -= 4; W32(r_esp, 0x5f0335u); f_005073a8();
    /* 005f0335: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f0338: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0339: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f033a: ret  */ FN_RET(0x005f02a4); r_esp += 4; return;
}

void f_005f033c(void) /* sub_5F033C */
{
    FN_ENTER(0x005f033c);
    /* 005f033c: mov dword ptr [0xa8df0c], 0x3f800000 */ W32((u32)(0xa8df0cu), 0x3f800000u);
    /* 005f0346: mov dword ptr [0xa8df10], 0x41000000 */ W32((u32)(0xa8df10u), 0x41000000u);
    /* 005f0350: mov dword ptr [0xa8df14], 0x3fc00000 */ W32((u32)(0xa8df14u), 0x3fc00000u);
    /* 005f035a: ret  */ FN_RET(0x005f033c); r_esp += 4; return;
}

void f_005f035c(void) /* sub_5F035C */
{
    FN_ENTER(0x005f035c);
    /* 005f035c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f035d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f035f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f0361: call 0x5f0380 */ r_esp -= 4; W32(r_esp, 0x5f0366u); f_005f0380();
    /* 005f0366: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f036a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f036c: jne 0x5f0372 */ if (!fZ) goto L_005f0372;
L_005f036e:; BB(0x005f036e);
    /* 005f036e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f036f: ret 4 */ FN_RET(0x005f035c); r_esp += 8; return;
L_005f0372:; BB(0x005f0372);
    /* 005f0372: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0373: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f0378u); f_005c2f74();
    /* 005f0378: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f0379: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f037a: ret 4 */ FN_RET(0x005f035c); r_esp += 8; return;
}

void f_005f0380(void) /* sub_5F0380 */
{
    FN_ENTER(0x005f0380);
    /* 005f0380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0381: mov ebp, esp */ r_ebp = r_esp;
    /* 005f0383: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f0385: push 0x8dc9f0 */ { u32 v = 0x8dc9f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f038a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f0390: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0391: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f0398: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f039b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f039e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f03a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f03a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f03a7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f03aa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f03ad: mov dword ptr [ecx], 0xb14140 */ W32((u32)(r_ecx), 0xb14140u);
    /* 005f03b3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f03ba: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f03bfu); f_005e61c8();
    /* 005f03bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f03c2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f03c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005f03cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f03cc: ret  */ FN_RET(0x005f0380); r_esp += 4; return;
}

void f_005f03d0(void) /* sub_5F03D0 */
{
    FN_ENTER(0x005f03d0);
    /* 005f03d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f03d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f03d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f03d5: push 0x8dca24 */ { u32 v = 0x8dca24u; r_esp -= 4; W32(r_esp, v); }
    /* 005f03da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f03e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f03e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f03e8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f03eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f03ee: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f03f1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f03f4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f03f7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f03fa: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005f03fd: mov eax, ecx */ r_eax = r_ecx;
    /* 005f03ff: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005f0402: mov dword ptr [eax], 0xb0cd38 */ W32((u32)(r_eax), 0xb0cd38u);
    /* 005f0408: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f040f: call 0x5e3e40 */ r_esp -= 4; W32(r_esp, 0x5f0414u); f_005e3e40();
    /* 005f0414: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f0417: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f0419: jne 0x5f042b */ if (!fZ) goto L_005f042b;
L_005f041b:; BB(0x005f041b);
    /* 005f041b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f041e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f0425: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0427: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0428: ret 4 */ FN_RET(0x005f03d0); r_esp += 8; return;
L_005f042b:; BB(0x005f042b);
    /* 005f042b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f042e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f042f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f0434u); f_005c2f74();
    /* 005f0434: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f0435: jmp 0x5f041b */ goto L_005f041b;
}

void f_005f0438(void) /* sub_5F0438 */
{
    FN_ENTER(0x005f0438);
    /* 005f0438: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005f043c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f043e: je 0x5f044a */ if (fZ) goto L_005f044a;
L_005f0440:; BB(0x005f0440);
    /* 005f0440: mov dword ptr [eax + 0x240], 1 */ W32((u32)(r_eax+0x240u), 0x1u);
L_005f044a:; BB(0x005f044a);
    /* 005f044a: ret  */ FN_RET(0x005f0438); r_esp += 4; return;
}

void f_005f044c(void) /* sub_5F044C */
{
    FN_ENTER(0x005f044c);
    /* 005f044c: mov eax, ecx */ r_eax = r_ecx;
    /* 005f044e: mov edx, dword ptr [0xa8d84c] */ r_edx = R32((u32)(0xa8d84cu));
    /* 005f0454: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f0456: jle 0x5f046e */ if ((fZ||fS!=fO)) goto L_005f046e;
L_005f0458:; BB(0x005f0458);
    /* 005f0458: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f045b: jl 0x5f0461 */ if ((fS!=fO)) goto L_005f0461;
L_005f045d:; BB(0x005f045d);
    /* 005f045d: jne 0x5f046e */ if (!fZ) goto L_005f046e;
L_005f045f:; BB(0x005f045f);
    /* 005f045f: jmp 0x5f046f */ goto L_005f046f;
L_005f0461:; BB(0x005f0461);
    /* 005f0461: mov edx, dword ptr [eax + 0x248] */ r_edx = R32((u32)(r_eax+0x248u));
    /* 005f0467: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0469: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5f046eu); f_00830c04();
L_005f046e:; BB(0x005f046e);
    /* 005f046e: ret  */ FN_RET(0x005f044c); r_esp += 4; return;
L_005f046f:; BB(0x005f046f);
    /* 005f046f: mov edx, dword ptr [eax + 0x1ac] */ r_edx = R32((u32)(r_eax+0x1acu));
    /* 005f0475: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f0477: je 0x5f046e */ if (fZ) goto L_005f046e;
L_005f0479:; BB(0x005f0479);
    /* 005f0479: mov eax, dword ptr [eax + 0x240] */ r_eax = R32((u32)(r_eax+0x240u));
    /* 005f047f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f0482: jne 0x5f046e */ if (!fZ) goto L_005f046e;
L_005f0484:; BB(0x005f0484);
    /* 005f0484: mov ecx, edx */ r_ecx = r_edx;
    /* 005f0486: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5f048bu); f_00831758();
    /* 005f048b: ret  */ FN_RET(0x005f044c); r_esp += 4; return;
}

void f_005f048c(void) /* sub_5F048C */
{
    FN_ENTER(0x005f048c);
    /* 005f048c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f048d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f048f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f0491: push 0x8dca4c */ { u32 v = 0x8dca4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f0496: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f049c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f049d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f04a4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f04a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f04aa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f04ad: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f04b0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f04b3: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005f04b9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f04bc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f04bf: je 0x5f053a */ if (fZ) goto L_005f053a;
L_005f04c1:; BB(0x005f04c1);
    /* 005f04c1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f04c4: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 005f04ca: mov dword ptr [eax + 0x24c], 2 */ W32((u32)(r_eax+0x24cu), 0x2u);
    /* 005f04d4: mov eax, dword ptr [edx + 0x8b8] */ r_eax = R32((u32)(r_edx+0x8b8u));
    /* 005f04da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f04dc: jne 0x5f04e7 */ if (!fZ) goto L_005f04e7;
L_005f04de:; BB(0x005f04de);
    /* 005f04de: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f04e1: mov dword ptr [edx + 0x8b8], eax */ W32((u32)(r_edx+0x8b8u), r_eax);
L_005f04e7:; BB(0x005f04e7);
    /* 005f04e7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f04ea: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005f04ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f04ee: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5f04f3u); f_005e7534();
    /* 005f04f3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f04f6: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f04fbu); f_005e90b0();
    /* 005f04fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f04fd: je 0x5f0514 */ if (fZ) goto L_005f0514;
L_005f04ff:; BB(0x005f04ff);
    /* 005f04ff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f0502: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005f0505: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0507: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0508: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f050d: call 0x5e6a88 */ r_esp -= 4; W32(r_esp, 0x5f0512u); f_005e6a88();
    /* 005f0512: jmp 0x5f0529 */ goto L_005f0529;
L_005f0514:; BB(0x005f0514);
    /* 005f0514: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f0517: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 005f051a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f051c: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005f051e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f0520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0522: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0523: call dword ptr [ebx + 0xc8] */ { u32 t = R32((u32)(r_ebx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f0529u); call_ind(t); }
L_005f0529:; BB(0x005f0529);
    /* 005f0529: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f052c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f052f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f0536: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0538: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0539: ret  */ FN_RET(0x005f048c); r_esp += 4; return;
L_005f053a:; BB(0x005f053a);
    /* 005f053a: mov eax, ecx */ r_eax = r_ecx;
    /* 005f053c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f053e: je 0x5f0584 */ if (fZ) goto L_005f0584;
L_005f0540:; BB(0x005f0540);
    /* 005f0540: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005f0547: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0549: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f054eu); f_005caba4();
    /* 005f054e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f054f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005f0552: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0554: je 0x5f057d */ if (fZ) goto L_005f057d;
L_005f0556:; BB(0x005f0556);
    /* 005f0556: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005f055d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f0564: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f0567: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005f0569: push 0x5f0438 */ { u32 v = 0x5f0438u; r_esp -= 4; W32(r_esp, v); }
    /* 005f056e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f056f: mov ecx, eax */ r_ecx = r_eax;
    /* 005f0571: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x5f0576u); f_005e5b88();
    /* 005f0576: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005f057d:; BB(0x005f057d);
    /* 005f057d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005f0584:; BB(0x005f0584);
    /* 005f0584: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f0587: mov dword ptr [eax + 0x240], 0 */ W32((u32)(r_eax+0x240u), 0x0u);
    /* 005f0591: jmp 0x5f04c1 */ goto L_005f04c1;
}

void f_005f0598(void) /* sub_5F0598 */
{
    FN_ENTER(0x005f0598);
    /* 005f0598: mov eax, dword ptr [ecx + 0x244] */ r_eax = R32((u32)(r_ecx+0x244u));
    /* 005f059e: add eax, 0x1999 */ {  u32 a = r_eax; u32 b = 0x1999u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f05a3: mov dword ptr [ecx + 0x244], eax */ W32((u32)(r_ecx+0x244u), r_eax);
    /* 005f05a9: mov eax, dword ptr [ecx + 0x1ac] */ r_eax = R32((u32)(r_ecx+0x1acu));
    /* 005f05af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f05b1: je 0x5f05c2 */ if (fZ) goto L_005f05c2;
L_005f05b3:; BB(0x005f05b3);
    /* 005f05b3: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005f05b6: and dword ptr [edx], 0xfffffffd */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005f05b9: mov eax, dword ptr [ecx + 0x244] */ r_eax = R32((u32)(r_ecx+0x244u));
    /* 005f05bf: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
L_005f05c2:; BB(0x005f05c2);
    /* 005f05c2: mov eax, dword ptr [ecx + 0x24c] */ r_eax = R32((u32)(r_ecx+0x24cu));
    /* 005f05c8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f05cb: je 0x5f0610 */ if (fZ) goto L_005f0610;
L_005f05cd:; BB(0x005f05cd);
    /* 005f05cd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f05d0: jne 0x5f0600 */ if (!fZ) goto L_005f0600;
L_005f05d2:; BB(0x005f05d2);
    /* 005f05d2: mov eax, dword ptr [ecx + 0x248] */ r_eax = R32((u32)(r_ecx+0x248u));
    /* 005f05d8: add eax, 0xfffff1c8 */ {  u32 a = r_eax; u32 b = 0xfffff1c8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f05dd: cmp eax, 0xffffce39 */ {  u32 a = r_eax; u32 b = 0xffffce39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f05e2: jle 0x5f05eb */ if ((fZ||fS!=fO)) goto L_005f05eb;
L_005f05e4:; BB(0x005f05e4);
    /* 005f05e4: mov dword ptr [ecx + 0x248], eax */ W32((u32)(r_ecx+0x248u), r_eax);
    /* 005f05ea: ret  */ FN_RET(0x005f0598); r_esp += 4; return;
L_005f05eb:; BB(0x005f05eb);
    /* 005f05eb: mov dword ptr [ecx + 0x248], 0xffffce39 */ W32((u32)(r_ecx+0x248u), 0xffffce39u);
    /* 005f05f5: mov dword ptr [ecx + 0x24c], 3 */ W32((u32)(r_ecx+0x24cu), 0x3u);
    /* 005f05ff: ret  */ FN_RET(0x005f0598); r_esp += 4; return;
L_005f0600:; BB(0x005f0600);
    /* 005f0600: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f0603: jne 0x5f062d */ if (!fZ) goto L_005f062d;
L_005f0605:; BB(0x005f0605);
    /* 005f0605: mov dword ptr [ecx + 0x24c], 1 */ W32((u32)(r_ecx+0x24cu), 0x1u);
    /* 005f060f: ret  */ FN_RET(0x005f0598); r_esp += 4; return;
L_005f0610:; BB(0x005f0610);
    /* 005f0610: mov eax, dword ptr [ecx + 0x248] */ r_eax = R32((u32)(r_ecx+0x248u));
    /* 005f0616: add eax, 0xe38 */ {  u32 a = r_eax; u32 b = 0xe38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f061b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f061d: jl 0x5f062e */ if ((fS!=fO)) goto L_005f062e;
L_005f061f:; BB(0x005f061f);
    /* 005f061f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f0621: mov dword ptr [ecx + 0x248], eax */ W32((u32)(r_ecx+0x248u), r_eax);
    /* 005f0627: mov dword ptr [ecx + 0x24c], eax */ W32((u32)(r_ecx+0x24cu), r_eax);
L_005f062d:; BB(0x005f062d);
    /* 005f062d: ret  */ FN_RET(0x005f0598); r_esp += 4; return;
L_005f062e:; BB(0x005f062e);
    /* 005f062e: mov dword ptr [ecx + 0x248], eax */ W32((u32)(r_ecx+0x248u), r_eax);
    /* 005f0634: ret  */ FN_RET(0x005f0598); r_esp += 4; return;
}

void f_005f0638(void) /* sub_5F0638 */
{
    FN_ENTER(0x005f0638);
    /* 005f0638: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0639: mov ebp, esp */ r_ebp = r_esp;
    /* 005f063b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f063d: push 0x8dca74 */ { u32 v = 0x8dca74u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0642: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f0648: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0649: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f0650: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f0653: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f0656: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f0659: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f065c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f065f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f0662: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0664: je 0x5f06bb */ if (fZ) goto L_005f06bb;
L_005f0666:; BB(0x005f0666);
    /* 005f0666: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f066d: push 0x250 */ { u32 v = 0x250u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0672: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f0677u); f_005caba4();
    /* 005f0677: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f0678: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f067b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f067d: je 0x5f06b7 */ if (fZ) goto L_005f06b7;
L_005f067f:; BB(0x005f067f);
    /* 005f067f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f0686: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f068d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f0690: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f0693: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0694: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f069a: call 0x5f06cc */ r_esp -= 4; W32(r_esp, 0x5f069fu); f_005f06cc();
    /* 005f069f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f06a2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f06a9:; BB(0x005f06a9);
    /* 005f06a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f06ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f06b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005f06b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f06b6: ret  */ FN_RET(0x005f0638); r_esp += 4; return;
L_005f06b7:; BB(0x005f06b7);
    /* 005f06b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f06b9: jmp 0x5f06a9 */ goto L_005f06a9;
L_005f06bb:; BB(0x005f06bb);
    /* 005f06bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f06bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f06c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f06c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005f06c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f06ca: ret  */ FN_RET(0x005f0638); r_esp += 4; return;
}

void f_005f06cc(void) /* sub_5F06CC */
{
    FN_ENTER(0x005f06cc);
    /* 005f06cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f06cd: mov edi, ecx */ r_edi = r_ecx;
    /* 005f06cf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f06d3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f06d7: mov ecx, edi */ r_ecx = r_edi;
    /* 005f06d9: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f06deu); f_005e959c();
    /* 005f06de: mov edx, dword ptr [edi + 0x1dc] */ r_edx = R32((u32)(r_edi+0x1dcu));
    /* 005f06e4: mov dword ptr [edi], 0xb14140 */ W32((u32)(r_edi), 0xb14140u);
    /* 005f06ea: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005f06ed: mov dword ptr [edi + 0x1dc], edx */ W32((u32)(r_edi+0x1dcu), r_edx);
    /* 005f06f3: mov dword ptr [edi + 0x238], 0x5f0728 */ W32((u32)(r_edi+0x238u), 0x5f0728u);
    /* 005f06fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f06ff: mov dword ptr [edi + 0x244], eax */ W32((u32)(r_edi+0x244u), r_eax);
    /* 005f0705: mov dword ptr [edi + 0x248], eax */ W32((u32)(r_edi+0x248u), r_eax);
    /* 005f070b: mov dword ptr [edi + 0x208], 0x41100000 */ W32((u32)(r_edi+0x208u), 0x41100000u);
    /* 005f0715: mov eax, edi */ r_eax = r_edi;
    /* 005f0717: mov dword ptr [edi + 0x240], 1 */ W32((u32)(r_edi+0x240u), 0x1u);
    /* 005f0721: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f0722: ret 8 */ FN_RET(0x005f06cc); r_esp += 12; return;
}

void f_005f0728(void) /* sub_5F0728 */
{
    FN_ENTER(0x005f0728);
    /* 005f0728: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0729: mov ebp, esp */ r_ebp = r_esp;
    /* 005f072b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f072d: push 0x8dca9c */ { u32 v = 0x8dca9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f0732: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f0738: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0739: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f0740: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f0743: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f0746: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f0749: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f074c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f074f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005f0751: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f0754: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0756: je 0x5f07a5 */ if (fZ) goto L_005f07a5;
L_005f0758:; BB(0x005f0758);
    /* 005f0758: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f075f: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f0761: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f0766u); f_005caba4();
    /* 005f0766: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f0767: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f076a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f076c: je 0x5f07e5 */ if (fZ) goto L_005f07e5;
L_005f076e:; BB(0x005f076e);
    /* 005f076e: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f0775: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f077c: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005f077f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005f0782: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 005f0785: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 005f0788: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f078b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f078c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f078d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f078e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f078f: call 0x5f07ec */ r_esp -= 4; W32(r_esp, 0x5f0794u); f_005f07ec();
    /* 005f0794: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f0797: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f079e:; BB(0x005f079e);
    /* 005f079e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005f07a5:; BB(0x005f07a5);
    /* 005f07a5: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005f07a8: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005f07ab: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005f07ae: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 005f07b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f07b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f07b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f07b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f07b5: call 0x5e407c */ r_esp -= 4; W32(r_esp, 0x5f07bau); f_005e407c();
    /* 005f07ba: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f07bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f07bf: je 0x5f07cf */ if (fZ) goto L_005f07cf;
L_005f07c1:; BB(0x005f07c1);
    /* 005f07c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f07c3: push 0x1bb */ { u32 v = 0x1bbu; r_esp -= 4; W32(r_esp, v); }
    /* 005f07c8: mov ecx, eax */ r_ecx = r_eax;
    /* 005f07ca: call 0x5e4624 */ r_esp -= 4; W32(r_esp, 0x5f07cfu); f_005e4624();
L_005f07cf:; BB(0x005f07cf);
    /* 005f07cf: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f07d2: mov eax, ebx */ r_eax = r_ebx;
    /* 005f07d4: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f07d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f07da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f07e1: mov esp, ebp */ r_esp = r_ebp;
    /* 005f07e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f07e4: ret  */ FN_RET(0x005f0728); r_esp += 4; return;
L_005f07e5:; BB(0x005f07e5);
    /* 005f07e5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005f07e7: jmp 0x5f079e */ goto L_005f079e;
}

void f_005f07ec(void) /* sub_5F07EC */
{
    FN_ENTER(0x005f07ec);
    /* 005f07ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f07ed: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f07ef: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f07f3: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f07f7: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f07fb: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f07ff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f0801: call 0x5e43e8 */ r_esp -= 4; W32(r_esp, 0x5f0806u); f_005e43e8();
    /* 005f0806: mov dword ptr [ebp], 0xb14240 */ W32((u32)(r_ebp), 0xb14240u);
    /* 005f080d: mov eax, ebp */ r_eax = r_ebp;
    /* 005f080f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0810: ret 0x10 */ FN_RET(0x005f07ec); r_esp += 20; return;
}

void f_005f0814(void) /* sub_5F0814 */
{
    FN_ENTER(0x005f0814);
    /* 005f0814: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0815: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0816: mov edi, ecx */ r_edi = r_ecx;
    /* 005f0818: mov ecx, edi */ r_ecx = r_edi;
    /* 005f081a: call 0x5e45c0 */ r_esp -= 4; W32(r_esp, 0x5f081fu); f_005e45c0();
    /* 005f081f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f0821: je 0x5f0885 */ if (fZ) goto L_005f0885;
L_005f0823:; BB(0x005f0823);
    /* 005f0823: mov edx, dword ptr [edi + 0x58] */ r_edx = R32((u32)(r_edi+0x58u));
    /* 005f0826: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f0828: je 0x5f0885 */ if (fZ) goto L_005f0885;
L_005f082a:; BB(0x005f082a);
    /* 005f082a: mov eax, dword ptr [edi + 0x5c] */ r_eax = R32((u32)(r_edi+0x5cu));
    /* 005f082d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f082f: je 0x5f0885 */ if (fZ) goto L_005f0885;
L_005f0831:; BB(0x005f0831);
    /* 005f0831: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005f0834: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 005f0837: and dword ptr [esi], 0xfffffffb */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005f083a: mov dword ptr [esi + 0x20], 0x41200000 */ W32((u32)(r_esi+0x20u), 0x41200000u);
    /* 005f0841: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5f0846u); f_0082d7b0();
    /* 005f0846: push dword ptr [edi + 0x5c] */ { u32 v = R32((u32)(r_edi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f0849: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5f084eu); f_0081a9b8();
    /* 005f084e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f084f: lea ecx, [edi + 0x1c] */ r_ecx = (u32)(r_edi+0x1cu);
    /* 005f0852: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5f0857u); f_0082d838();
    /* 005f0857: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 005f085a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f085c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5f0861u); f_0082d8bc();
    /* 005f0861: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 005f0864: add edx, 0xffffc000 */ {  u32 a = r_edx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f086a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f086c: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5f0871u); f_0082e9e4();
    /* 005f0871: mov ecx, dword ptr [edi + 0x58] */ r_ecx = R32((u32)(r_edi+0x58u));
    /* 005f0874: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5f0879u); f_00831758();
    /* 005f0879: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5f087eu); f_0082da80();
    /* 005f087e: mov dword ptr [esi + 0x20], 0x3f800000 */ W32((u32)(r_esi+0x20u), 0x3f800000u);
L_005f0885:; BB(0x005f0885);
    /* 005f0885: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f0886: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f0887: ret  */ FN_RET(0x005f0814); r_esp += 4; return;
}

void f_005f0888(void) /* sub_5F0888 */
{
    FN_ENTER(0x005f0888);
    /* 005f0888: mov dword ptr [0xa8df18], 0x3f800000 */ W32((u32)(0xa8df18u), 0x3f800000u);
    /* 005f0892: mov dword ptr [0xa8df1c], 0x41000000 */ W32((u32)(0xa8df1cu), 0x41000000u);
    /* 005f089c: mov dword ptr [0xa8df20], 0x3fc00000 */ W32((u32)(0xa8df20u), 0x3fc00000u);
    /* 005f08a6: ret  */ FN_RET(0x005f0888); r_esp += 4; return;
}

void f_005f08a8(void) /* sub_5F08A8 */
{
    FN_ENTER(0x005f08a8);
    /* 005f08a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f08a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f08ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f08ad: call 0x5f08cc */ r_esp -= 4; W32(r_esp, 0x5f08b2u); f_005f08cc();
    /* 005f08b2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f08b6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f08b8: jne 0x5f08be */ if (!fZ) goto L_005f08be;
L_005f08ba:; BB(0x005f08ba);
    /* 005f08ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f08bb: ret 4 */ FN_RET(0x005f08a8); r_esp += 8; return;
L_005f08be:; BB(0x005f08be);
    /* 005f08be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f08bf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f08c4u); f_005c2f74();
    /* 005f08c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f08c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f08c6: ret 4 */ FN_RET(0x005f08a8); r_esp += 8; return;
}

void f_005f08cc(void) /* sub_5F08CC */
{
    FN_ENTER(0x005f08cc);
    /* 005f08cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f08cd: mov ebp, esp */ r_ebp = r_esp;
    /* 005f08cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f08d1: push 0x8dcab8 */ { u32 v = 0x8dcab8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f08d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f08dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f08dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f08e4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f08e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f08ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f08ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f08f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f08f3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f08f6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f08f9: mov dword ptr [ecx], 0xb142c0 */ W32((u32)(r_ecx), 0xb142c0u);
    /* 005f08ff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f0906: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f090bu); f_005e61c8();
    /* 005f090b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f090e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f0915: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0917: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0918: ret  */ FN_RET(0x005f08cc); r_esp += 4; return;
}

void f_005f091c(void) /* sub_5F091C */
{
    FN_ENTER(0x005f091c);
    /* 005f091c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f091d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f091f: movzx eax, byte ptr [ebx + 0xf4] */ r_eax = (u32)R8((u32)(r_ebx+0xf4u));
    /* 005f0926: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0928: jne 0x5f0963 */ if (!fZ) goto L_005f0963;
L_005f092a:; BB(0x005f092a);
    /* 005f092a: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f092f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0932: jne 0x5f0948 */ if (!fZ) goto L_005f0948;
L_005f0934:; BB(0x005f0934);
    /* 005f0934: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5f0939u); f_005c34a0();
    /* 005f0939: mov edx, dword ptr [ebx + 0x240] */ r_edx = R32((u32)(r_ebx+0x240u));
    /* 005f093f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0941: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5f0946u); f_00830c04();
    /* 005f0946: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f0947: ret  */ FN_RET(0x005f091c); r_esp += 4; return;
L_005f0948:; BB(0x005f0948);
    /* 005f0948: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f094b: jne 0x5f0998 */ if (!fZ) goto L_005f0998;
L_005f094d:; BB(0x005f094d);
    /* 005f094d: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5f0952u); f_005c34a0();
    /* 005f0952: mov edx, dword ptr [ebx + 0x240] */ r_edx = R32((u32)(r_ebx+0x240u));
    /* 005f0958: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f095a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f095c: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5f0961u); f_00830c04();
    /* 005f0961: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f0962: ret  */ FN_RET(0x005f091c); r_esp += 4; return;
L_005f0963:; BB(0x005f0963);
    /* 005f0963: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f0966: jne 0x5f0998 */ if (!fZ) goto L_005f0998;
L_005f0968:; BB(0x005f0968);
    /* 005f0968: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f096d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f096f: jne 0x5f0998 */ if (!fZ) goto L_005f0998;
L_005f0971:; BB(0x005f0971);
    /* 005f0971: mov eax, dword ptr [ebx + 0x1dc] */ r_eax = R32((u32)(r_ebx+0x1dcu));
    /* 005f0977: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005f0979: jne 0x5f098c */ if (!fZ) goto L_005f098c;
L_005f097b:; BB(0x005f097b);
    /* 005f097b: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005f0981: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005f0984: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f098a: je 0x5f0998 */ if (fZ) goto L_005f0998;
L_005f098c:; BB(0x005f098c);
    /* 005f098c: mov edx, 0xc000 */ r_edx = 0xc000u;
    /* 005f0991: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0993: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5f0998u); f_00830c04();
L_005f0998:; BB(0x005f0998);
    /* 005f0998: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f0999: ret  */ FN_RET(0x005f091c); r_esp += 4; return;
}

void f_005f099c(void) /* sub_5F099C */
{
    FN_ENTER(0x005f099c);
    /* 005f099c: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005f09a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f09a5: jne 0x5f09b8 */ if (!fZ) goto L_005f09b8;
L_005f09a7:; BB(0x005f09a7);
    /* 005f09a7: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005f09ad: add eax, 0xaaa */ {  u32 a = r_eax; u32 b = 0xaaau; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f09b2: mov dword ptr [ecx + 0x240], eax */ W32((u32)(r_ecx+0x240u), r_eax);
L_005f09b8:; BB(0x005f09b8);
    /* 005f09b8: ret  */ FN_RET(0x005f099c); r_esp += 4; return;
}

void f_005f09bc(void) /* sub_5F09BC */
{
    FN_ENTER(0x005f09bc);
    /* 005f09bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f09bd: mov esi, ecx */ r_esi = r_ecx;
    /* 005f09bf: mov ecx, esi */ r_ecx = r_esi;
    /* 005f09c1: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f09c6u); f_005e90b0();
    /* 005f09c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f09c8: je 0x5f0a15 */ if (fZ) goto L_005f0a15;
L_005f09ca:; BB(0x005f09ca);
    /* 005f09ca: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005f09d0: movsx edx, word ptr [eax + 0x8b2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8b2u));
    /* 005f09d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f09d9: jne 0x5f0a1c */ if (!fZ) goto L_005f0a1c;
L_005f09db:; BB(0x005f09db);
    /* 005f09db: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 005f09e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f09e4: jne 0x5f09fb */ if (!fZ) goto L_005f09fb;
L_005f09e6:; BB(0x005f09e6);
    /* 005f09e6: push 0x3d4ccccd */ { u32 v = 0x3d4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005f09eb: mov ecx, esi */ r_ecx = r_esi;
    /* 005f09ed: call 0x5e75bc */ r_esp -= 4; W32(r_esp, 0x5f09f2u); f_005e75bc();
    /* 005f09f2: mov ecx, esi */ r_ecx = r_esi;
    /* 005f09f4: call 0x5f0a20 */ r_esp -= 4; W32(r_esp, 0x5f09f9u); f_005f0a20();
    /* 005f09f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f09fa: ret  */ FN_RET(0x005f09bc); r_esp += 4; return;
L_005f09fb:; BB(0x005f09fb);
    /* 005f09fb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f09fe: jne 0x5f0a1c */ if (!fZ) goto L_005f0a1c;
L_005f0a00:; BB(0x005f0a00);
    /* 005f0a00: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005f0a05: mov ecx, esi */ r_ecx = r_esi;
    /* 005f0a07: call 0x5e75bc */ r_esp -= 4; W32(r_esp, 0x5f0a0cu); f_005e75bc();
    /* 005f0a0c: mov ecx, esi */ r_ecx = r_esi;
    /* 005f0a0e: call 0x5f0a20 */ r_esp -= 4; W32(r_esp, 0x5f0a13u); f_005f0a20();
    /* 005f0a13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f0a14: ret  */ FN_RET(0x005f09bc); r_esp += 4; return;
L_005f0a15:; BB(0x005f0a15);
    /* 005f0a15: mov ecx, esi */ r_ecx = r_esi;
    /* 005f0a17: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f0a1cu); f_005e90e8();
L_005f0a1c:; BB(0x005f0a1c);
    /* 005f0a1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f0a1d: ret  */ FN_RET(0x005f09bc); r_esp += 4; return;
}

void f_005f0a20(void) /* sub_5F0A20 */
{
    FN_ENTER(0x005f0a20);
    /* 005f0a20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0a21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0a23: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0a24: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f0a2a: mov edi, ecx */ r_edi = r_ecx;
    /* 005f0a2c: mov ebp, dword ptr [edi + 0xf8] */ r_ebp = R32((u32)(r_edi+0xf8u));
    /* 005f0a32: mov eax, ebp */ r_eax = r_ebp;
    /* 005f0a34: add eax, 0x8d0 */ {  u32 a = r_eax; u32 b = 0x8d0u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005f0a39: je 0x5f0d7e */ if (fZ) goto L_005f0d7e;
L_005f0a3f:; BB(0x005f0a3f);
    /* 005f0a3f: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 005f0a45: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005f0a49: mov ebx, dword ptr [ebp + 0x304] */ r_ebx = R32((u32)(r_ebp+0x304u));
    /* 005f0a4f: lea esi, [ebp + 0x300] */ r_esi = (u32)(r_ebp+0x300u);
    /* 005f0a55: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 005f0a59: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 005f0a5f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005f0a63: mov eax, dword ptr [ebp + 0x8d0] */ r_eax = R32((u32)(r_ebp+0x8d0u));
    /* 005f0a69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005f0a6b: jl 0x5f0ad5 */ if ((fS!=fO)) goto L_005f0ad5;
L_005f0a6d:; BB(0x005f0a6d);
    /* 005f0a6d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f0a70: jg 0x5f0ad5 */ if ((!fZ&&fS==fO)) goto L_005f0ad5;
L_005f0a72:; BB(0x005f0a72);
    /* 005f0a72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005f0a74: je 0x5f0ad5 */ if (fZ) goto L_005f0ad5;
L_005f0a76:; BB(0x005f0a76);
    /* 005f0a76: jl 0x5f0a7d */ if ((fS!=fO)) goto L_005f0a7d;
L_005f0a78:; BB(0x005f0a78);
    /* 005f0a78: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f0a7b: jle 0x5f0a7f */ if ((fZ||fS!=fO)) goto L_005f0a7f;
L_005f0a7d:; BB(0x005f0a7d);
    /* 005f0a7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005f0a7f:; BB(0x005f0a7f);
    /* 005f0a7f: movzx edx, word ptr [ebp + eax*4 + 0x8d0] */ r_edx = (u32)R16((u32)(r_ebp+r_eax*4+0x8d0u));
    /* 005f0a87: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 005f0a8a: movsx eax, word ptr [ebp + eax*4 + 0x8d2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*4+0x8d2u));
    /* 005f0a92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0a93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0a94: call 0x7b9df0 */ r_esp -= 4; W32(r_esp, 0x5f0a99u); f_007b9df0();
    /* 005f0a99: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f0a9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0a9e: je 0x5f0ad5 */ if (fZ) goto L_005f0ad5;
L_005f0aa0:; BB(0x005f0aa0);
    /* 005f0aa0: movsx ebx, word ptr [ebp + ebx*2 + 0x8d2] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0x8d2u));
    /* 005f0aa8: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 005f0aab: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0aad: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0aaf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0ab1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0ab3: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0ab5: mov ebx, dword ptr [eax + 0xa4] */ r_ebx = R32((u32)(r_eax+0xa4u));
    /* 005f0abb: mov eax, dword ptr [ebx + ecx*4 + 0x1c] */ r_eax = R32((u32)(r_ebx+r_ecx*4+0x1cu));
    /* 005f0abf: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005f0ac3: mov eax, dword ptr [ebx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_ebx+r_ecx*4+0x20u));
    /* 005f0ac7: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005f0acb: mov eax, dword ptr [ebx + ecx*4 + 0x24] */ r_eax = R32((u32)(r_ebx+r_ecx*4+0x24u));
    /* 005f0acf: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005f0ad3: jmp 0x5f0b32 */ goto L_005f0b32;
L_005f0ad5:; BB(0x005f0ad5);
    /* 005f0ad5: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005f0ada: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5f0adfu); f_0082d990();
    /* 005f0adf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0ae1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0ae2: call 0x5e4ba8 */ r_esp -= 4; W32(r_esp, 0x5f0ae7u); f_005e4ba8();
    /* 005f0ae7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f0aea: mov ebx, dword ptr [edi + 0xf8] */ r_ebx = R32((u32)(r_edi+0xf8u));
    /* 005f0af0: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 005f0af3: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 005f0afb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0afd: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 005f0b05: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005f0b07: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005f0b0b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5f0b10u); f_0082d8bc();
    /* 005f0b10: lea ebx, [esp + 0x1c] */ r_ebx = (u32)(r_esp+0x1cu);
    /* 005f0b14: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005f0b18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0b19: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0b1a: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x5f0b1fu); f_00835c3c();
    /* 005f0b1f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f0b22: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5f0b27u); f_0082da80();
    /* 005f0b27: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 005f0b2b: mov edx, esi */ r_edx = r_esi;
    /* 005f0b2d: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5f0b32u); f_0082ebac();
L_005f0b32:; BB(0x005f0b32);
    /* 005f0b32: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005f0b36: push 0x8100 */ { u32 v = 0x8100u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0b3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0b3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0b3d: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5f0b42u); f_0077fffc();
    /* 005f0b42: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f0b45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0b47: je 0x5f0d89 */ if (fZ) goto L_005f0d89;
L_005f0b4d:; BB(0x005f0b4d);
    /* 005f0b4d: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f0b50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0b51: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x5f0b56u); f_00836208();
    /* 005f0b56: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f0b58: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f0b5b:; BB(0x005f0b5b);
    /* 005f0b5b: mov eax, dword ptr [ebp + 0x8d0] */ r_eax = R32((u32)(r_ebp+0x8d0u));
    /* 005f0b61: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005f0b63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005f0b65: jl 0x5f0b6c */ if ((fS!=fO)) goto L_005f0b6c;
L_005f0b67:; BB(0x005f0b67);
    /* 005f0b67: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f0b6a: jle 0x5f0b6e */ if ((fZ||fS!=fO)) goto L_005f0b6e;
L_005f0b6c:; BB(0x005f0b6c);
    /* 005f0b6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005f0b6e:; BB(0x005f0b6e);
    /* 005f0b6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0b70: je 0x5f0ca7 */ if (fZ) goto L_005f0ca7;
L_005f0b76:; BB(0x005f0b76);
    /* 005f0b76: mov dword ptr [esp + 0x70], esi */ W32((u32)(r_esp+0x70u), r_esi);
    /* 005f0b7a: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
L_005f0b7e:; BB(0x005f0b7e);
    /* 005f0b7e: movzx edx, word ptr [ebp + ebx*4 + 0x8d4] */ r_edx = (u32)R16((u32)(r_ebp+r_ebx*4+0x8d4u));
    /* 005f0b86: movsx eax, word ptr [ebp + ebx*4 + 0x8d6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*4+0x8d6u));
    /* 005f0b8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0b8f: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005f0b92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0b93: call 0x7b9df0 */ r_esp -= 4; W32(r_esp, 0x5f0b98u); f_007b9df0();
    /* 005f0b98: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f0b9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0b9d: je 0x5f0c83 */ if (fZ) goto L_005f0c83;
L_005f0ba3:; BB(0x005f0ba3);
    /* 005f0ba3: movsx edi, word ptr [ebp + esi*2 + 0x8d6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_esi*2+0x8d6u));
    /* 005f0bab: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 005f0bb1: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 005f0bb5: mov dword ptr [esp + 0x78], ebx */ W32((u32)(r_esp+0x78u), r_ebx);
    /* 005f0bb9: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 005f0bbc: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 005f0bc0: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 005f0bc4: mov ecx, dword ptr [edx + 0xf8] */ r_ecx = R32((u32)(r_edx+0xf8u));
    /* 005f0bca: mov word ptr [esp + 0x36], ax */ W16((u32)(r_esp+0x36u), (u16)r_eax);
    /* 005f0bcf: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 005f0bd5: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005f0bd9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f0bdb: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005f0bdd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f0bdf: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 005f0be7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f0be9: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005f0beb: movzx edi, word ptr [ecx + 0x1c] */ r_edi = (u32)R16((u32)(r_ecx+0x1cu));
    /* 005f0bef: mov word ptr [esp + 0x34], di */ W16((u32)(r_esp+0x34u), (u16)r_edi);
    /* 005f0bf4: mov dword ptr [esp + 0x2c], 1 */ W32((u32)(r_esp+0x2cu), 0x1u);
    /* 005f0bfc: movzx esi, word ptr [ebp + esi*2 + 0x8d6] */ r_esi = (u32)R16((u32)(r_ebp+r_esi*2+0x8d6u));
    /* 005f0c04: mov word ptr [esp + 0x38], si */ W16((u32)(r_esp+0x38u), (u16)r_esi);
    /* 005f0c09: movzx eax, word ptr [ecx + 0x8a4] */ r_eax = (u32)R16((u32)(r_ecx+0x8a4u));
    /* 005f0c10: mov eax, dword ptr [eax*4 + 0x9cb9d0] */ r_eax = R32((u32)(r_eax*4+0x9cb9d0u));
    /* 005f0c17: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 005f0c1b: mov eax, dword ptr [esp + 0x7c] */ r_eax = R32((u32)(r_esp+0x7cu));
    /* 005f0c1f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f0c21: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f0c23: lea eax, [eax + ebx + 0x1c] */ r_eax = (u32)(r_eax+r_ebx+0x1cu);
    /* 005f0c27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0c28: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 005f0c2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0c2d: mov ebx, dword ptr [esp + 0x80] */ r_ebx = R32((u32)(r_esp+0x80u));
    /* 005f0c34: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x5f0c39u); f_00836208();
    /* 005f0c39: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 005f0c3d: fdiv dword ptr [edx + 0x208] */ ST(0) = ST(0) / R_F32((u32)(r_edx+0x208u));
    /* 005f0c43: mov esi, dword ptr [edx + 0xf8] */ r_esi = R32((u32)(r_edx+0xf8u));
    /* 005f0c49: fnstcw word ptr [esp + 0x60] */ W16((u32)(r_esp+0x60u), fcw);
    /* 005f0c4d: movzx eax, word ptr [esp + 0x60] */ r_eax = (u32)R16((u32)(r_esp+0x60u));
    /* 005f0c52: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f0c57: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 005f0c5b: fldcw word ptr [esp + 0x68] */ fcw = R16((u32)(r_esp+0x68u));
    /* 005f0c5f: fistp dword ptr [esp + 0x70] */ W32((u32)(r_esp+0x70u), (u32)fx_int32(ST(0))); FPOP();
    /* 005f0c63: fldcw word ptr [esp + 0x60] */ fcw = R16((u32)(r_esp+0x60u));
    /* 005f0c67: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 005f0c6b: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005f0c6e: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 005f0c72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0c74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0c75: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f0c7b: call 0x5c71f8 */ r_esp -= 4; W32(r_esp, 0x5f0c80u); f_005c71f8();
    /* 005f0c80: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f0c83:; BB(0x005f0c83);
    /* 005f0c83: mov eax, dword ptr [ebp + 0x8d0] */ r_eax = R32((u32)(r_ebp+0x8d0u));
    /* 005f0c89: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f0c8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005f0c8e: jl 0x5f0c95 */ if ((fS!=fO)) goto L_005f0c95;
L_005f0c90:; BB(0x005f0c90);
    /* 005f0c90: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f0c93: jle 0x5f0c97 */ if ((fZ||fS!=fO)) goto L_005f0c97;
L_005f0c95:; BB(0x005f0c95);
    /* 005f0c95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005f0c97:; BB(0x005f0c97);
    /* 005f0c97: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0c99: jne 0x5f0b7e */ if (!fZ) goto L_005f0b7e;
L_005f0c9f:; BB(0x005f0c9f);
    /* 005f0c9f: mov esi, dword ptr [esp + 0x70] */ r_esi = R32((u32)(r_esp+0x70u));
    /* 005f0ca3: mov edi, dword ptr [esp + 0x74] */ r_edi = R32((u32)(r_esp+0x74u));
L_005f0ca7:; BB(0x005f0ca7);
    /* 005f0ca7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0ca9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0caa: call 0x5e4ba8 */ r_esp -= 4; W32(r_esp, 0x5f0cafu); f_005e4ba8();
    /* 005f0caf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f0cb2: mov ebx, dword ptr [edi + 0xf8] */ r_ebx = R32((u32)(r_edi+0xf8u));
    /* 005f0cb8: mov ebp, dword ptr [ebx + 0x60] */ r_ebp = R32((u32)(r_ebx+0x60u));
    /* 005f0cbb: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 005f0cbf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005f0cc1:; BB(0x005f0cc1);
    /* 005f0cc1: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005f0cc6: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5f0ccbu); f_0082d990();
    /* 005f0ccb: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 005f0ccf: mov dword ptr [esp + 0x44], 0 */ W32((u32)(r_esp+0x44u), 0x0u);
    /* 005f0cd7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0cd9: mov edx, ebp */ r_edx = r_ebp;
    /* 005f0cdb: mov dword ptr [esp + 0x40], 0 */ W32((u32)(r_esp+0x40u), 0x0u);
    /* 005f0ce3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005f0ce5: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005f0ce9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5f0ceeu); f_0082d8bc();
    /* 005f0cee: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 005f0cf2: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 005f0cf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0cf7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0cf8: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x5f0cfdu); f_00835c3c();
    /* 005f0cfd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f0d00: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 005f0d04: mov edx, esi */ r_edx = r_esi;
    /* 005f0d06: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5f0d0bu); f_0082ebac();
    /* 005f0d0b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5f0d10u); f_0082da80();
    /* 005f0d10: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 005f0d14: push 0x8100 */ { u32 v = 0x8100u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0d19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0d1a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0d1b: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5f0d20u); f_0077fffc();
    /* 005f0d20: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f0d23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0d25: je 0x5f0d3e */ if (fZ) goto L_005f0d3e;
L_005f0d27:; BB(0x005f0d27);
    /* 005f0d27: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005f0d2a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f0d2c: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 005f0d30: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005f0d33: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 005f0d37: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005f0d3a: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
L_005f0d3e:; BB(0x005f0d3e);
    /* 005f0d3e: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 005f0d42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0d43: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0d44: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x5f0d49u); f_00836208();
    /* 005f0d49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f0d4c: fld dword ptr [edi + 0x208] */ FPUSH(R_F32((u32)(r_edi+0x208u)));
    /* 005f0d52: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 005f0d54: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005f0d58: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 005f0d5b: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005f0d5f: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 005f0d63: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005f0d67: call 0x5cf44c */ r_esp -= 4; W32(r_esp, 0x5f0d6cu); f_005cf44c();
    /* 005f0d6c: add ebp, 0x4000 */ {  u32 a = r_ebp; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005f0d72: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f0d75: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f0d78: jl 0x5f0cc1 */ if ((fS!=fO)) goto L_005f0cc1;
L_005f0d7e:; BB(0x005f0d7e);
    /* 005f0d7e: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f0d84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f0d85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0d86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f0d87: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f0d88: ret  */ FN_RET(0x005f0a20); r_esp += 4; return;
L_005f0d89:; BB(0x005f0d89);
    /* 005f0d89: lea ebx, [esp + 0x10] */ r_ebx = (u32)(r_esp+0x10u);
    /* 005f0d8d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0d8e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0d8f: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x5f0d94u); f_00836208();
    /* 005f0d94: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f0d96: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f0d99: jmp 0x5f0b5b */ goto L_005f0b5b;
}

void f_005f0da0(void) /* sub_5F0DA0 */
{
    FN_ENTER(0x005f0da0);
    /* 005f0da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0da1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f0da3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f0da5: push 0x8dcae0 */ { u32 v = 0x8dcae0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0daa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f0db0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0db1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f0db8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f0dbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f0dbe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f0dc1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f0dc4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f0dc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f0dca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0dcc: je 0x5f0e23 */ if (fZ) goto L_005f0e23;
L_005f0dce:; BB(0x005f0dce);
    /* 005f0dce: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f0dd5: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0dda: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f0ddfu); f_005caba4();
    /* 005f0ddf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f0de0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f0de3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0de5: je 0x5f0e1f */ if (fZ) goto L_005f0e1f;
L_005f0de7:; BB(0x005f0de7);
    /* 005f0de7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f0dee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f0df5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f0df8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f0dfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0dfc: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f0e02: call 0x5f0e34 */ r_esp -= 4; W32(r_esp, 0x5f0e07u); f_005f0e34();
    /* 005f0e07: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f0e0a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f0e11:; BB(0x005f0e11);
    /* 005f0e11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f0e14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f0e1b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0e1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0e1e: ret  */ FN_RET(0x005f0da0); r_esp += 4; return;
L_005f0e1f:; BB(0x005f0e1f);
    /* 005f0e1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f0e21: jmp 0x5f0e11 */ goto L_005f0e11;
L_005f0e23:; BB(0x005f0e23);
    /* 005f0e23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f0e25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f0e28: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f0e2f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0e31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0e32: ret  */ FN_RET(0x005f0da0); r_esp += 4; return;
}

void f_005f0e34(void) /* sub_5F0E34 */
{
    FN_ENTER(0x005f0e34);
    /* 005f0e34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0e35: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f0e37: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f0e3b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f0e3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f0e41: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f0e46u); f_005e959c();
    /* 005f0e46: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f0e4c: mov dword ptr [ebx], 0xb142c0 */ W32((u32)(r_ebx), 0xb142c0u);
    /* 005f0e52: mov eax, ebx */ r_eax = r_ebx;
    /* 005f0e54: or edx, 0x100022 */ {  u32 a = r_edx; u32 b = 0x100022u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f0e5a: mov dword ptr [ebx + 0x208], 0x41200000 */ W32((u32)(r_ebx+0x208u), 0x41200000u);
    /* 005f0e64: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f0e6a: mov dword ptr [ebx + 0x240], 0 */ W32((u32)(r_ebx+0x240u), 0x0u);
    /* 005f0e74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f0e75: ret 8 */ FN_RET(0x005f0e34); r_esp += 12; return;
}

void f_005f0e78(void) /* sub_5F0E78 */
{
    FN_ENTER(0x005f0e78);
    /* 005f0e78: mov dword ptr [0xa8df24], 0x3f800000 */ W32((u32)(0xa8df24u), 0x3f800000u);
    /* 005f0e82: mov dword ptr [0xa8df28], 0x41000000 */ W32((u32)(0xa8df28u), 0x41000000u);
    /* 005f0e8c: mov dword ptr [0xa8df2c], 0x3fc00000 */ W32((u32)(0xa8df2cu), 0x3fc00000u);
    /* 005f0e96: ret  */ FN_RET(0x005f0e78); r_esp += 4; return;
}

void f_005f0e98(void) /* sub_5F0E98 */
{
    FN_ENTER(0x005f0e98);
    /* 005f0e98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0e99: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f0e9b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f0e9d: call 0x5f0ebc */ r_esp -= 4; W32(r_esp, 0x5f0ea2u); f_005f0ebc();
    /* 005f0ea2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f0ea6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f0ea8: jne 0x5f0eae */ if (!fZ) goto L_005f0eae;
L_005f0eaa:; BB(0x005f0eaa);
    /* 005f0eaa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f0eab: ret 4 */ FN_RET(0x005f0e98); r_esp += 8; return;
L_005f0eae:; BB(0x005f0eae);
    /* 005f0eae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0eaf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f0eb4u); f_005c2f74();
    /* 005f0eb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f0eb5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f0eb6: ret 4 */ FN_RET(0x005f0e98); r_esp += 8; return;
}

void f_005f0ebc(void) /* sub_5F0EBC */
{
    FN_ENTER(0x005f0ebc);
    /* 005f0ebc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0ebd: mov ebp, esp */ r_ebp = r_esp;
    /* 005f0ebf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f0ec1: push 0x8dcafc */ { u32 v = 0x8dcafcu; r_esp -= 4; W32(r_esp, v); }
    /* 005f0ec6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f0ecc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0ecd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f0ed4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f0ed7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f0eda: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f0edd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f0ee0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f0ee3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f0ee6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f0ee9: mov dword ptr [ecx], 0xb14420 */ W32((u32)(r_ecx), 0xb14420u);
    /* 005f0eef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f0ef6: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f0efbu); f_005e61c8();
    /* 005f0efb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f0efe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f0f05: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0f07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0f08: ret  */ FN_RET(0x005f0ebc); r_esp += 4; return;
}

void f_005f0f0c(void) /* sub_5F0F0C */
{
    FN_ENTER(0x005f0f0c);
    /* 005f0f0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f0f0d: mov esi, ecx */ r_esi = r_ecx;
    /* 005f0f0f: mov ecx, esi */ r_ecx = r_esi;
    /* 005f0f11: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0f13: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5f0f18u); f_005e6334();
    /* 005f0f18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0f1a: mov ecx, esi */ r_ecx = r_esi;
    /* 005f0f1c: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5f0f21u); f_005e6254();
    /* 005f0f21: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0f23: mov ecx, esi */ r_ecx = r_esi;
    /* 005f0f25: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5f0f2au); f_005e6254();
    /* 005f0f2a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0f2c: mov ecx, esi */ r_ecx = r_esi;
    /* 005f0f2e: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5f0f33u); f_005e6254();
    /* 005f0f33: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f0f34: ret  */ FN_RET(0x005f0f0c); r_esp += 4; return;
}

void f_005f0f20(void)
{
    FN_ENTER(0x005f0f20);
    /* 005f0f20: jmp ptr [edx + 1] */ { u32 t = R32((u32)(r_edx+0x1u)); jmp_ind(t); return; }
}

void f_005f0f38(void) /* sub_5F0F38 */
{
    FN_ENTER(0x005f0f38);
    /* 005f0f38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0f39: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f0f3c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f0f3e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f0f40: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f0f45u); f_005e90b0();
    /* 005f0f45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0f47: je 0x5f0f86 */ if (fZ) goto L_005f0f86;
L_005f0f49:; BB(0x005f0f49);
    /* 005f0f49: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f0f4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0f4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0f4f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f0f51: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f0f56u); f_005e83c8();
    /* 005f0f56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0f58: je 0x5f0f8d */ if (fZ) goto L_005f0f8d;
L_005f0f5a:; BB(0x005f0f5a);
    /* 005f0f5a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005f0f5d: mov eax, dword ptr [ebx + 0x1e4] */ r_eax = R32((u32)(r_ebx+0x1e4u));
    /* 005f0f63: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005f0f69: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f0f6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0f6d: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f0f70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0f71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0f72: call 0x6e2f20 */ r_esp -= 4; W32(r_esp, 0x5f0f77u); f_006e2f20();
    /* 005f0f77: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f0f7a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f0f7c: call 0x5e7480 */ r_esp -= 4; W32(r_esp, 0x5f0f81u); f_005e7480();
    /* 005f0f81: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f0f84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f0f85: ret  */ FN_RET(0x005f0f38); r_esp += 4; return;
L_005f0f86:; BB(0x005f0f86);
    /* 005f0f86: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f0f88: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f0f8du); f_005e90e8();
L_005f0f8d:; BB(0x005f0f8d);
    /* 005f0f8d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f0f90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f0f91: ret  */ FN_RET(0x005f0f38); r_esp += 4; return;
}

void f_005f0f94(void) /* sub_5F0F94 */
{
    FN_ENTER(0x005f0f94);
    /* 005f0f94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0f95: mov ebp, esp */ r_ebp = r_esp;
    /* 005f0f97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f0f99: push 0x8dcb24 */ { u32 v = 0x8dcb24u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0f9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f0fa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0fa5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f0fac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f0faf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f0fb2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f0fb5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f0fb8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f0fbb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f0fbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0fc0: je 0x5f1017 */ if (fZ) goto L_005f1017;
L_005f0fc2:; BB(0x005f0fc2);
    /* 005f0fc2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f0fc9: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0fce: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f0fd3u); f_005caba4();
    /* 005f0fd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f0fd4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f0fd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0fd9: je 0x5f1013 */ if (fZ) goto L_005f1013;
L_005f0fdb:; BB(0x005f0fdb);
    /* 005f0fdb: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f0fe2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f0fe9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f0fec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f0fef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0ff0: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f0ff6: call 0x5f1028 */ r_esp -= 4; W32(r_esp, 0x5f0ffbu); f_005f1028();
    /* 005f0ffb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f0ffe: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f1005:; BB(0x005f1005);
    /* 005f1005: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1008: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f100f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1011: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1012: ret  */ FN_RET(0x005f0f94); r_esp += 4; return;
L_005f1013:; BB(0x005f1013);
    /* 005f1013: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1015: jmp 0x5f1005 */ goto L_005f1005;
L_005f1017:; BB(0x005f1017);
    /* 005f1017: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1019: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f101c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f1023: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1025: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1026: ret  */ FN_RET(0x005f0f94); r_esp += 4; return;
}

