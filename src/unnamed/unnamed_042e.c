#include "protos.h"

void f_0042e066(void)
{
    FN_ENTER(0x0042e066);
    goto L_0042e066;
L_0042dfdf:; BB(0x0042dfdf);
    /* 0042dfdf: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042dfe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042dfe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042dfe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042dfe5: ret 8 */ FN_RET(0x0042e066); r_esp += 12; return;
L_0042e029:; BB(0x0042e029);
    /* 0042e029: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042e02c: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0042e032: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42e037u); f_00520e6c();
    /* 0042e037: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042e03d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e03f: je 0x42e04a */ if (fZ) goto L_0042e04a;
L_0042e041:; BB(0x0042e041);
    /* 0042e041: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042e048: jmp 0x42e051 */ goto L_0042e051;
L_0042e04a:; BB(0x0042e04a);
    /* 0042e04a: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042e051:; BB(0x0042e051);
    /* 0042e051: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042e054: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042e057: ja 0x42e191 */ if ((!fC&&!fZ)) goto L_0042e191;
L_0042e05d:; BB(0x0042e05d);
    /* 0042e05d: mov edx, dword ptr [edx*4 + 0x8fc850] */ r_edx = R32((u32)(r_edx*4+0x8fc850u));
    /* 0042e064: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042e066:; BB(0x0042e066);
    /* 0042e066: mov eax, 5 */ r_eax = 0x5u;
    /* 0042e06b: jmp 0x42e029 */ goto L_0042e029;
L_0042e191:; BB(0x0042e191);
    /* 0042e191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e192: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e194: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e199u); f_0042abf8();
    /* 0042e199: jmp 0x42dfdf */ goto L_0042dfdf;
}

void f_0042e06d(void)
{
    FN_ENTER(0x0042e06d);
    goto L_0042e06d;
L_0042dfdf:; BB(0x0042dfdf);
    /* 0042dfdf: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042dfe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042dfe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042dfe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042dfe5: ret 8 */ FN_RET(0x0042e06d); r_esp += 12; return;
L_0042e06d:; BB(0x0042e06d);
    /* 0042e06d: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042e073: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e075: jne 0x42e081 */ if (!fZ) goto L_0042e081;
L_0042e077:; BB(0x0042e077);
    /* 0042e077: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0042e07c: jmp 0x42e191 */ goto L_0042e191;
L_0042e081:; BB(0x0042e081);
    /* 0042e081: mov eax, 0x17 */ r_eax = 0x17u;
    /* 0042e086: jmp 0x42e191 */ goto L_0042e191;
L_0042e191:; BB(0x0042e191);
    /* 0042e191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e192: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e194: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e199u); f_0042abf8();
    /* 0042e199: jmp 0x42dfdf */ goto L_0042dfdf;
}

void f_0042e08b(void)
{
    FN_ENTER(0x0042e08b);
    goto L_0042e08b;
L_0042dfdf:; BB(0x0042dfdf);
    /* 0042dfdf: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042dfe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042dfe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042dfe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042dfe5: ret 8 */ FN_RET(0x0042e08b); r_esp += 12; return;
L_0042e08b:; BB(0x0042e08b);
    /* 0042e08b: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042e091: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e093: jne 0x42e09f */ if (!fZ) goto L_0042e09f;
L_0042e095:; BB(0x0042e095);
    /* 0042e095: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0042e09a: jmp 0x42e191 */ goto L_0042e191;
L_0042e09f:; BB(0x0042e09f);
    /* 0042e09f: mov eax, 0x15 */ r_eax = 0x15u;
    /* 0042e0a4: jmp 0x42e191 */ goto L_0042e191;
L_0042e191:; BB(0x0042e191);
    /* 0042e191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e192: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e194: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e199u); f_0042abf8();
    /* 0042e199: jmp 0x42dfdf */ goto L_0042dfdf;
}

void f_0042e0a9(void)
{
    FN_ENTER(0x0042e0a9);
    goto L_0042e0a9;
L_0042dfdf:; BB(0x0042dfdf);
    /* 0042dfdf: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042dfe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042dfe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042dfe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042dfe5: ret 8 */ FN_RET(0x0042e0a9); r_esp += 12; return;
L_0042e0a9:; BB(0x0042e0a9);
    /* 0042e0a9: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042e0af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e0b1: jne 0x42e0bd */ if (!fZ) goto L_0042e0bd;
L_0042e0b3:; BB(0x0042e0b3);
    /* 0042e0b3: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0042e0b8: jmp 0x42e191 */ goto L_0042e191;
L_0042e0bd:; BB(0x0042e0bd);
    /* 0042e0bd: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0042e0c2: jmp 0x42e191 */ goto L_0042e191;
L_0042e191:; BB(0x0042e191);
    /* 0042e191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e192: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e194: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e199u); f_0042abf8();
    /* 0042e199: jmp 0x42dfdf */ goto L_0042dfdf;
}

void f_0042e0c7(void)
{
    FN_ENTER(0x0042e0c7);
    goto L_0042e0c7;
L_0042dfdf:; BB(0x0042dfdf);
    /* 0042dfdf: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042dfe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042dfe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042dfe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042dfe5: ret 8 */ FN_RET(0x0042e0c7); r_esp += 12; return;
L_0042e0c7:; BB(0x0042e0c7);
    /* 0042e0c7: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042e0cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e0cf: jne 0x42e0db */ if (!fZ) goto L_0042e0db;
L_0042e0d1:; BB(0x0042e0d1);
    /* 0042e0d1: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0042e0d6: jmp 0x42e191 */ goto L_0042e191;
L_0042e0db:; BB(0x0042e0db);
    /* 0042e0db: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0042e0e0: jmp 0x42e191 */ goto L_0042e191;
L_0042e191:; BB(0x0042e191);
    /* 0042e191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e192: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e194: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e199u); f_0042abf8();
    /* 0042e199: jmp 0x42dfdf */ goto L_0042dfdf;
}

void f_0042e0e5(void)
{
    FN_ENTER(0x0042e0e5);
    goto L_0042e0e5;
L_0042dfdf:; BB(0x0042dfdf);
    /* 0042dfdf: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042dfe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042dfe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042dfe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042dfe5: ret 8 */ FN_RET(0x0042e0e5); r_esp += 12; return;
L_0042e0e5:; BB(0x0042e0e5);
    /* 0042e0e5: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042e0eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e0ed: jne 0x42e0f9 */ if (!fZ) goto L_0042e0f9;
L_0042e0ef:; BB(0x0042e0ef);
    /* 0042e0ef: mov eax, 4 */ r_eax = 0x4u;
    /* 0042e0f4: jmp 0x42e191 */ goto L_0042e191;
L_0042e0f9:; BB(0x0042e0f9);
    /* 0042e0f9: mov eax, 0xa */ r_eax = 0xau;
    /* 0042e0fe: jmp 0x42e191 */ goto L_0042e191;
L_0042e191:; BB(0x0042e191);
    /* 0042e191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e192: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e194: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e199u); f_0042abf8();
    /* 0042e199: jmp 0x42dfdf */ goto L_0042dfdf;
}

void f_0042e103(void)
{
    FN_ENTER(0x0042e103);
    goto L_0042e103;
L_0042dfdf:; BB(0x0042dfdf);
    /* 0042dfdf: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042dfe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042dfe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042dfe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042dfe5: ret 8 */ FN_RET(0x0042e103); r_esp += 12; return;
L_0042e103:; BB(0x0042e103);
    /* 0042e103: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e105: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42e10au); f_00520bf4();
    /* 0042e10a: fcomp dword ptr [0x8fcfc0] */ fx_compare(ST(0), R_F32((u32)(0x8fcfc0u))); FPOP();
    /* 0042e110: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042e112: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042e113: jbe 0x42e11c */ if ((fC||fZ)) goto L_0042e11c;
L_0042e115:; BB(0x0042e115);
    /* 0042e115: mov eax, 0x18 */ r_eax = 0x18u;
    /* 0042e11a: jmp 0x42e191 */ goto L_0042e191;
L_0042e11c:; BB(0x0042e11c);
    /* 0042e11c: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0042e121: jmp 0x42e191 */ goto L_0042e191;
L_0042e191:; BB(0x0042e191);
    /* 0042e191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e192: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e194: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e199u); f_0042abf8();
    /* 0042e199: jmp 0x42dfdf */ goto L_0042dfdf;
}

void f_0042e120(void)
{
    FN_ENTER(0x0042e120);
    goto L_0042e120;
L_0042dfdf:; BB(0x0042dfdf);
    /* 0042dfdf: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042dfe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042dfe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042dfe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042dfe5: ret 8 */ FN_RET(0x0042e120); r_esp += 12; return;
L_0042e120:; BB(0x0042e120);
    /* 0042e120: add bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0042e122: outsb dx, byte ptr [esi] */ UNSUP(0x0042e122, "outsb dx, byte ptr [esi]");
    /* 0042e123: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042e129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e12b: jne 0x42e134 */ if (!fZ) goto L_0042e134;
L_0042e12d:; BB(0x0042e12d);
    /* 0042e12d: mov eax, 3 */ r_eax = 0x3u;
    /* 0042e132: jmp 0x42e191 */ goto L_0042e191;
L_0042e134:; BB(0x0042e134);
    /* 0042e134: mov eax, 0xb */ r_eax = 0xbu;
    /* 0042e139: jmp 0x42e191 */ goto L_0042e191;
L_0042e191:; BB(0x0042e191);
    /* 0042e191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e192: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e194: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e199u); f_0042abf8();
    /* 0042e199: jmp 0x42dfdf */ goto L_0042dfdf;
}

void f_0042e123(void)
{
    FN_ENTER(0x0042e123);
    goto L_0042e123;
L_0042dfdf:; BB(0x0042dfdf);
    /* 0042dfdf: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042dfe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042dfe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042dfe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042dfe5: ret 8 */ FN_RET(0x0042e123); r_esp += 12; return;
L_0042e123:; BB(0x0042e123);
    /* 0042e123: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042e129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e12b: jne 0x42e134 */ if (!fZ) goto L_0042e134;
L_0042e12d:; BB(0x0042e12d);
    /* 0042e12d: mov eax, 3 */ r_eax = 0x3u;
    /* 0042e132: jmp 0x42e191 */ goto L_0042e191;
L_0042e134:; BB(0x0042e134);
    /* 0042e134: mov eax, 0xb */ r_eax = 0xbu;
    /* 0042e139: jmp 0x42e191 */ goto L_0042e191;
L_0042e191:; BB(0x0042e191);
    /* 0042e191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e192: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e194: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e199u); f_0042abf8();
    /* 0042e199: jmp 0x42dfdf */ goto L_0042dfdf;
}

void f_0042e13b(void)
{
    FN_ENTER(0x0042e13b);
    goto L_0042e13b;
L_0042dfdf:; BB(0x0042dfdf);
    /* 0042dfdf: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042dfe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042dfe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042dfe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042dfe5: ret 8 */ FN_RET(0x0042e13b); r_esp += 12; return;
L_0042e13b:; BB(0x0042e13b);
    /* 0042e13b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e13d: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42e142u); f_00520bf4();
    /* 0042e142: fcomp dword ptr [0x8fcfc0] */ fx_compare(ST(0), R_F32((u32)(0x8fcfc0u))); FPOP();
    /* 0042e148: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042e14a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042e14b: jbe 0x42e154 */ if ((fC||fZ)) goto L_0042e154;
L_0042e14d:; BB(0x0042e14d);
    /* 0042e14d: mov eax, 0xc */ r_eax = 0xcu;
    /* 0042e152: jmp 0x42e191 */ goto L_0042e191;
L_0042e154:; BB(0x0042e154);
    /* 0042e154: mov eax, 0xe */ r_eax = 0xeu;
    /* 0042e159: jmp 0x42e191 */ goto L_0042e191;
L_0042e191:; BB(0x0042e191);
    /* 0042e191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e192: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e194: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e199u); f_0042abf8();
    /* 0042e199: jmp 0x42dfdf */ goto L_0042dfdf;
}

void f_0042e15b(void)
{
    FN_ENTER(0x0042e15b);
    goto L_0042e15b;
L_0042dfdf:; BB(0x0042dfdf);
    /* 0042dfdf: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042dfe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042dfe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042dfe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042dfe5: ret 8 */ FN_RET(0x0042e15b); r_esp += 12; return;
L_0042e15b:; BB(0x0042e15b);
    /* 0042e15b: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042e161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e163: jne 0x42e16c */ if (!fZ) goto L_0042e16c;
L_0042e165:; BB(0x0042e165);
    /* 0042e165: mov eax, 5 */ r_eax = 0x5u;
    /* 0042e16a: jmp 0x42e191 */ goto L_0042e191;
L_0042e16c:; BB(0x0042e16c);
    /* 0042e16c: mov eax, 9 */ r_eax = 0x9u;
    /* 0042e171: jmp 0x42e191 */ goto L_0042e191;
L_0042e191:; BB(0x0042e191);
    /* 0042e191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e192: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e194: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e199u); f_0042abf8();
    /* 0042e199: jmp 0x42dfdf */ goto L_0042dfdf;
}

void f_0042e173(void)
{
    FN_ENTER(0x0042e173);
    goto L_0042e173;
L_0042dfdf:; BB(0x0042dfdf);
    /* 0042dfdf: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042dfe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042dfe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042dfe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042dfe5: ret 8 */ FN_RET(0x0042e173); r_esp += 12; return;
L_0042e173:; BB(0x0042e173);
    /* 0042e173: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e175: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42e17au); f_00520bf4();
    /* 0042e17a: fcomp dword ptr [0x8fcfc0] */ fx_compare(ST(0), R_F32((u32)(0x8fcfc0u))); FPOP();
    /* 0042e180: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042e182: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042e183: jbe 0x42e18c */ if ((fC||fZ)) goto L_0042e18c;
L_0042e185:; BB(0x0042e185);
    /* 0042e185: mov eax, 8 */ r_eax = 0x8u;
    /* 0042e18a: jmp 0x42e191 */ goto L_0042e191;
L_0042e18c:; BB(0x0042e18c);
    /* 0042e18c: mov eax, 6 */ r_eax = 0x6u;
L_0042e191:; BB(0x0042e191);
    /* 0042e191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e192: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e194: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e199u); f_0042abf8();
    /* 0042e199: jmp 0x42dfdf */ goto L_0042dfdf;
}

void f_0042e191(void)
{
    FN_ENTER(0x0042e191);
    goto L_0042e191;
L_0042dfdf:; BB(0x0042dfdf);
    /* 0042dfdf: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042dfe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042dfe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042dfe4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042dfe5: ret 8 */ FN_RET(0x0042e191); r_esp += 12; return;
L_0042e191:; BB(0x0042e191);
    /* 0042e191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e192: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e194: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e199u); f_0042abf8();
    /* 0042e199: jmp 0x42dfdf */ goto L_0042dfdf;
}

void f_0042e308(void) /* sub_42E308 */
{
    FN_ENTER(0x0042e308);
    /* 0042e308: mov eax, dword ptr [ecx + 0x65c] */ r_eax = R32((u32)(r_ecx+0x65cu));
    /* 0042e30e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042e310: jne 0x42e322 */ if (!fZ) goto L_0042e322;
L_0042e312:; BB(0x0042e312);
    /* 0042e312: mov dword ptr [ecx + 0x38], 0xc2c80000 */ W32((u32)(r_ecx+0x38u), 0xc2c80000u);
    /* 0042e319: mov dword ptr [ecx + 0x64], 0x500 */ W32((u32)(r_ecx+0x64u), 0x500u);
    /* 0042e320: jmp 0x42e330 */ goto L_0042e330;
L_0042e322:; BB(0x0042e322);
    /* 0042e322: mov dword ptr [ecx + 0x38], 0x42c80000 */ W32((u32)(r_ecx+0x38u), 0x42c80000u);
    /* 0042e329: mov dword ptr [ecx + 0x64], 0xfffffb00 */ W32((u32)(r_ecx+0x64u), 0xfffffb00u);
L_0042e330:; BB(0x0042e330);
    /* 0042e330: mov eax, dword ptr [0xa43c5c] */ r_eax = R32((u32)(0xa43c5cu));
    /* 0042e335: mov dword ptr [ecx + 0x40], 0x41200000 */ W32((u32)(r_ecx+0x40u), 0x41200000u);
    /* 0042e33c: mov dword ptr [ecx + 0x6ac], eax */ W32((u32)(r_ecx+0x6acu), r_eax);
    /* 0042e342: ret 4 */ FN_RET(0x0042e308); r_esp += 8; return;
}

void f_0042e348(void) /* sub_42E348 */
{
    FN_ENTER(0x0042e348);
    /* 0042e348: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e349: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042e34c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0042e34e: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0042e352: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e355: je 0x42e74e */ if (fZ) goto L_0042e74e;
L_0042e35b:; BB(0x0042e35b);
    /* 0042e35b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e35e: je 0x42e6fe */ if (fZ) goto L_0042e6fe;
L_0042e364:; BB(0x0042e364);
    /* 0042e364: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e367: je 0x42e578 */ if (fZ) goto L_0042e578;
L_0042e36d:; BB(0x0042e36d);
    /* 0042e36d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e370: je 0x42e571 */ if (fZ) goto L_0042e571;
L_0042e376:; BB(0x0042e376);
    /* 0042e376: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e378: je 0x42e3a0 */ if (fZ) goto L_0042e3a0;
L_0042e37a:; BB(0x0042e37a);
    /* 0042e37a: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e37d: je 0x42e571 */ if (fZ) goto L_0042e571;
L_0042e383:; BB(0x0042e383);
    /* 0042e383: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e386: jne 0x42e571 */ if (!fZ) goto L_0042e571;
L_0042e38c:; BB(0x0042e38c);
    /* 0042e38c: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0042e392: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042e395: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0042e39b: jmp 0x42e571 */ goto L_0042e571;
L_0042e3a0:; BB(0x0042e3a0);
    /* 0042e3a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e3a2: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x42e3a7u); f_007aa094();
    /* 0042e3a7: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042e3ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e3af: jne 0x42e539 */ if (!fZ) goto L_0042e539;
L_0042e3b5:; BB(0x0042e3b5);
    /* 0042e3b5: fild dword ptr [ebx + 0x6fc] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x6fcu)));
    /* 0042e3bb: fadd dword ptr [0x8fcfa0] */ ST(0) = ST(0) + R_F32((u32)(0x8fcfa0u));
    /* 0042e3c1: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 0042e3c4: fld dword ptr [ebx + 0x708] */ FPUSH(R_F32((u32)(r_ebx+0x708u)));
    /* 0042e3ca: fld dword ptr [0x8fd054] */ FPUSH(R_F32((u32)(0x8fd054u)));
    /* 0042e3d0: fadd dword ptr [ebx + 0x70c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x70cu));
    /* 0042e3d6: fld dword ptr [0x8fcfa4] */ FPUSH(R_F32((u32)(0x8fcfa4u)));
    /* 0042e3dc: fadd dword ptr [ebx + 0x704] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x704u));
    /* 0042e3e2: fld dword ptr [ebx + 0x6ac] */ FPUSH(R_F32((u32)(r_ebx+0x6acu)));
    /* 0042e3e8: fld dword ptr [0x8fcfb4] */ FPUSH(R_F32((u32)(0x8fcfb4u)));
    /* 0042e3ee: fadd dword ptr [ebx + 0x710] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x710u));
    /* 0042e3f4: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0042e3f6: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0042e3fa: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0042e3ff: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042e404: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0042e408: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0042e40c: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0042e410: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0042e414: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0042e418: fcom dword ptr [0x8fcf9c] */ fx_compare(ST(0), R_F32((u32)(0x8fcf9cu))); 
    /* 0042e41e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042e420: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0042e424: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0042e426: fst dword ptr [ebx + 0x70c] */ W_F32((u32)(r_ebx+0x70cu), ST(0));
    /* 0042e42c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042e42e: fst dword ptr [ebx + 0x704] */ W_F32((u32)(r_ebx+0x704u), ST(0));
    /* 0042e434: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0042e436: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0042e438: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0042e43b: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0042e43d: fst dword ptr [ebx + 0x710] */ W_F32((u32)(r_ebx+0x710u), ST(0));
    /* 0042e443: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0042e445: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0042e448: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0042e44a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0042e44c: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0042e44f: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0042e451: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042e453: fstp dword ptr [ebx + 0x6ac] */ W_F32((u32)(r_ebx+0x6acu), ST(0)); FPOP();
    /* 0042e459: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042e45a: jb 0x42e470 */ if (fC) goto L_0042e470;
L_0042e45c:; BB(0x0042e45c);
    /* 0042e45c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042e45e: fld dword ptr [0x8fcf98] */ FPUSH(R_F32((u32)(0x8fcf98u)));
    /* 0042e464: mov dword ptr [ebx + 0x6fc], 0x4000 */ W32((u32)(r_ebx+0x6fcu), 0x4000u);
    /* 0042e46e: jmp 0x42e476 */ goto L_0042e476;
L_0042e470:; BB(0x0042e470);
    /* 0042e470: mov dword ptr [ebx + 0x6fc], edx */ W32((u32)(r_ebx+0x6fcu), r_edx);
L_0042e476:; BB(0x0042e476);
    /* 0042e476: fld dword ptr [ebx + 0x708] */ FPUSH(R_F32((u32)(r_ebx+0x708u)));
    /* 0042e47c: fchs  */ ST(0) = -ST(0);
    /* 0042e47e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042e480: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0042e484: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0042e489: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042e48e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0042e492: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0042e496: fistp dword ptr [ebx + 0x64] */ W32((u32)(r_ebx+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 0042e499: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0042e49d: mov eax, dword ptr [ebx + 0x6ec] */ r_eax = R32((u32)(r_ebx+0x6ecu));
    /* 0042e4a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e4a5: jne 0x42e4d6 */ if (!fZ) goto L_0042e4d6;
L_0042e4a7:; BB(0x0042e4a7);
    /* 0042e4a7: mov eax, dword ptr [ebx + 0x6fc] */ r_eax = R32((u32)(r_ebx+0x6fcu));
    /* 0042e4ad: cmp eax, 0x2200 */ {  u32 a = r_eax; u32 b = 0x2200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042e4b2: jl 0x42e4d6 */ if ((fS!=fO)) goto L_0042e4d6;
L_0042e4b4:; BB(0x0042e4b4);
    /* 0042e4b4: mov dword ptr [ebx + 0x6ec], 1 */ W32((u32)(r_ebx+0x6ecu), 0x1u);
    /* 0042e4be: lea edx, [ebx + 0x520] */ r_edx = (u32)(r_ebx+0x520u);
    /* 0042e4c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042e4c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e4c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e4c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e4c9: push 0x339 */ { u32 v = 0x339u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e4ce: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x42e4d3u); f_00814298();
    /* 0042e4d3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042e4d6:; BB(0x0042e4d6);
    /* 0042e4d6: fld dword ptr [ebx + 0x6ac] */ FPUSH(R_F32((u32)(r_ebx+0x6acu)));
    /* 0042e4dc: fcomp dword ptr [0xa43c60] */ fx_compare(ST(0), R_F32((u32)(0xa43c60u))); FPOP();
    /* 0042e4e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042e4e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042e4e5: jae 0x42e571 */ if (!fC) goto L_0042e571;
L_0042e4eb:; BB(0x0042e4eb);
    /* 0042e4eb: push dword ptr [ebx + 0x65c] */ { u32 v = R32((u32)(r_ebx+0x65cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0042e4f1: mov dword ptr [ebx + 0x6e8], 1 */ W32((u32)(r_ebx+0x6e8u), 0x1u);
    /* 0042e4fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e4fd: call 0x42c154 */ r_esp -= 4; W32(r_esp, 0x42e502u); f_0042c154();
    /* 0042e502: mov eax, dword ptr [0xa43c60] */ r_eax = R32((u32)(0xa43c60u));
    /* 0042e507: mov dword ptr [ebx + 0x710], 0 */ W32((u32)(r_ebx+0x710u), 0x0u);
    /* 0042e511: mov dword ptr [ebx + 0x6ac], eax */ W32((u32)(r_ebx+0x6acu), r_eax);
    /* 0042e517: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0042e51d: mov edx, 1 */ r_edx = 0x1u;
    /* 0042e522: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 0042e529: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042e52c: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042e531: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0042e537: jmp 0x42e571 */ goto L_0042e571;
L_0042e539:; BB(0x0042e539);
    /* 0042e539: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e53c: jne 0x42e571 */ if (!fZ) goto L_0042e571;
L_0042e53e:; BB(0x0042e53e);
    /* 0042e53e: fld dword ptr [0x8fcfa8] */ FPUSH(R_F32((u32)(0x8fcfa8u)));
    /* 0042e544: fadd dword ptr [ebx + 0x6ac] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x6acu));
    /* 0042e54a: fcom dword ptr [0x8fcfb8] */ fx_compare(ST(0), R_F32((u32)(0x8fcfb8u))); 
    /* 0042e550: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042e552: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042e553: jb 0x42e56b */ if (fC) goto L_0042e56b;
L_0042e555:; BB(0x0042e555);
    /* 0042e555: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042e557: mov dword ptr [ebx + 0x6e8], 2 */ W32((u32)(r_ebx+0x6e8u), 0x2u);
    /* 0042e561: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042e563: mov dword ptr [ebx + 0x6ac], eax */ W32((u32)(r_ebx+0x6acu), r_eax);
    /* 0042e569: jmp 0x42e571 */ goto L_0042e571;
L_0042e56b:; BB(0x0042e56b);
    /* 0042e56b: fstp dword ptr [ebx + 0x6ac] */ W_F32((u32)(r_ebx+0x6acu), ST(0)); FPOP();
L_0042e571:; BB(0x0042e571);
    /* 0042e571: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e574: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e575: ret 8 */ FN_RET(0x0042e348); r_esp += 12; return;
L_0042e578:; BB(0x0042e578);
    /* 0042e578: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042e57e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e581: jne 0x42e571 */ if (!fZ) goto L_0042e571;
L_0042e583:; BB(0x0042e583);
    /* 0042e583: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 0042e589: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042e58c: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0042e592: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42e597u); f_00520e6c();
    /* 0042e597: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042e59d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e59f: je 0x42e5aa */ if (fZ) goto L_0042e5aa;
L_0042e5a1:; BB(0x0042e5a1);
    /* 0042e5a1: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042e5a8: jmp 0x42e5b1 */ goto L_0042e5b1;
L_0042e5aa:; BB(0x0042e5aa);
    /* 0042e5aa: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042e5b1:; BB(0x0042e5b1);
    /* 0042e5b1: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042e5b4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042e5b7: ja 0x42e6f1 */ if ((!fC&&!fZ)) goto L_0042e6f1;
L_0042e5bd:; BB(0x0042e5bd);
    /* 0042e5bd: mov edx, dword ptr [edx*4 + 0x8fc880] */ r_edx = R32((u32)(r_edx*4+0x8fc880u));
    /* 0042e5c4: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042e6f1:; BB(0x0042e6f1);
    /* 0042e6f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e6f4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e6f9u); f_0042abf8();
    /* 0042e6f9: jmp 0x42e571 */ goto L_0042e571;
L_0042e6fe:; BB(0x0042e6fe);
    /* 0042e6fe: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042e704: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e707: jne 0x42e571 */ if (!fZ) goto L_0042e571;
L_0042e70d:; BB(0x0042e70d);
    /* 0042e70d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e70f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e711: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042e713: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e715: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42e71bu); call_ind(t); }
    /* 0042e71b: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0042e71f: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 0042e725: mov byte ptr [esp], 0x13 */ W8((u32)(r_esp), 0x13u);
    /* 0042e729: mov edx, 2 */ r_edx = 0x2u;
    /* 0042e72e: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 0042e732: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0042e737: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0042e73c: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 0042e741: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0042e744: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42e749u); f_008003e0();
    /* 0042e749: jmp 0x42e571 */ goto L_0042e571;
L_0042e74e:; BB(0x0042e74e);
    /* 0042e74e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042e750: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e752: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x42e758u); call_ind(t); }
    /* 0042e758: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0042e75c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042e75e: mov esi, eax */ r_esi = r_eax;
L_0042e760:; BB(0x0042e760);
    /* 0042e760: mov ecx, dword ptr [ebx + esi*4 + 0x5e8] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x5e8u));
    /* 0042e767: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042e769: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x42e76fu); call_ind(t); }
    /* 0042e76f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042e772: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042e775: jl 0x42e760 */ if ((fS!=fO)) goto L_0042e760;
L_0042e777:; BB(0x0042e777);
    /* 0042e777: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0042e77b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0042e77f: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0042e785: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042e788: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042e78d: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0042e793: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0042e797: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e798: mov dword ptr [ebx + 0x65c], edx */ W32((u32)(r_ebx+0x65cu), r_edx);
    /* 0042e79e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e7a0: call 0x42e308 */ r_esp -= 4; W32(r_esp, 0x42e7a5u); f_0042e308();
    /* 0042e7a5: mov eax, dword ptr [ebx + 0x65c] */ r_eax = R32((u32)(r_ebx+0x65cu));
    /* 0042e7ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e7ad: jne 0x42e7cc */ if (!fZ) goto L_0042e7cc;
L_0042e7af:; BB(0x0042e7af);
    /* 0042e7af: mov dword ptr [ebx + 0x708], 0xbf800000 */ W32((u32)(r_ebx+0x708u), 0xbf800000u);
    /* 0042e7b9: mov edx, 0xbf800000 */ r_edx = 0xbf800000u;
    /* 0042e7be: mov eax, 9 */ r_eax = 0x9u;
    /* 0042e7c3: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0042e7ca: jmp 0x42e7e7 */ goto L_0042e7e7;
L_0042e7cc:; BB(0x0042e7cc);
    /* 0042e7cc: mov dword ptr [ebx + 0x708], 0x3f800000 */ W32((u32)(r_ebx+0x708u), 0x3f800000u);
    /* 0042e7d6: mov eax, 0xa */ r_eax = 0xau;
    /* 0042e7db: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0042e7e2: mov edx, 0xbf800000 */ r_edx = 0xbf800000u;
L_0042e7e7:; BB(0x0042e7e7);
    /* 0042e7e7: mov dword ptr [ebx + 0x704], 0 */ W32((u32)(r_ebx+0x704u), 0x0u);
    /* 0042e7f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042e7f3: mov dword ptr [ebx + 0x6e8], eax */ W32((u32)(r_ebx+0x6e8u), r_eax);
    /* 0042e7f9: mov dword ptr [ebx + 0x6ec], eax */ W32((u32)(r_ebx+0x6ecu), r_eax);
    /* 0042e7ff: mov dword ptr [ebx + 0x70c], 0 */ W32((u32)(r_ebx+0x70cu), 0x0u);
    /* 0042e809: mov dword ptr [ebx + 0x710], edx */ W32((u32)(r_ebx+0x710u), r_edx);
    /* 0042e80f: mov dword ptr [ebx + 0x6fc], 0x500 */ W32((u32)(r_ebx+0x6fcu), 0x500u);
    /* 0042e819: call 0x43c44c */ r_esp -= 4; W32(r_esp, 0x42e81eu); f_0043c44c();
    /* 0042e81e: jmp 0x42e571 */ goto L_0042e571;
}

void f_0042e5c6(void)
{
    FN_ENTER(0x0042e5c6);
    goto L_0042e5c6;
L_0042e571:; BB(0x0042e571);
    /* 0042e571: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e574: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e575: ret 8 */ FN_RET(0x0042e5c6); r_esp += 12; return;
L_0042e589:; BB(0x0042e589);
    /* 0042e589: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042e58c: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0042e592: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42e597u); f_00520e6c();
    /* 0042e597: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042e59d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e59f: je 0x42e5aa */ if (fZ) goto L_0042e5aa;
L_0042e5a1:; BB(0x0042e5a1);
    /* 0042e5a1: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042e5a8: jmp 0x42e5b1 */ goto L_0042e5b1;
L_0042e5aa:; BB(0x0042e5aa);
    /* 0042e5aa: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042e5b1:; BB(0x0042e5b1);
    /* 0042e5b1: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042e5b4: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042e5b7: ja 0x42e6f1 */ if ((!fC&&!fZ)) goto L_0042e6f1;
L_0042e5bd:; BB(0x0042e5bd);
    /* 0042e5bd: mov edx, dword ptr [edx*4 + 0x8fc880] */ r_edx = R32((u32)(r_edx*4+0x8fc880u));
    /* 0042e5c4: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042e5c6:; BB(0x0042e5c6);
    /* 0042e5c6: mov eax, 5 */ r_eax = 0x5u;
    /* 0042e5cb: jmp 0x42e589 */ goto L_0042e589;
L_0042e6f1:; BB(0x0042e6f1);
    /* 0042e6f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e6f4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e6f9u); f_0042abf8();
    /* 0042e6f9: jmp 0x42e571 */ goto L_0042e571;
}

void f_0042e5cd(void)
{
    FN_ENTER(0x0042e5cd);
    goto L_0042e5cd;
L_0042e571:; BB(0x0042e571);
    /* 0042e571: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e574: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e575: ret 8 */ FN_RET(0x0042e5cd); r_esp += 12; return;
L_0042e5cd:; BB(0x0042e5cd);
    /* 0042e5cd: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042e5d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e5d5: jne 0x42e5e1 */ if (!fZ) goto L_0042e5e1;
L_0042e5d7:; BB(0x0042e5d7);
    /* 0042e5d7: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0042e5dc: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e5e1:; BB(0x0042e5e1);
    /* 0042e5e1: mov eax, 0x17 */ r_eax = 0x17u;
    /* 0042e5e6: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e6f1:; BB(0x0042e6f1);
    /* 0042e6f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e6f4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e6f9u); f_0042abf8();
    /* 0042e6f9: jmp 0x42e571 */ goto L_0042e571;
}

void f_0042e5eb(void)
{
    FN_ENTER(0x0042e5eb);
    goto L_0042e5eb;
L_0042e571:; BB(0x0042e571);
    /* 0042e571: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e574: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e575: ret 8 */ FN_RET(0x0042e5eb); r_esp += 12; return;
L_0042e5eb:; BB(0x0042e5eb);
    /* 0042e5eb: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042e5f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e5f3: jne 0x42e5ff */ if (!fZ) goto L_0042e5ff;
L_0042e5f5:; BB(0x0042e5f5);
    /* 0042e5f5: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0042e5fa: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e5ff:; BB(0x0042e5ff);
    /* 0042e5ff: mov eax, 0x15 */ r_eax = 0x15u;
    /* 0042e604: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e6f1:; BB(0x0042e6f1);
    /* 0042e6f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e6f4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e6f9u); f_0042abf8();
    /* 0042e6f9: jmp 0x42e571 */ goto L_0042e571;
}

void f_0042e609(void)
{
    FN_ENTER(0x0042e609);
    goto L_0042e609;
L_0042e571:; BB(0x0042e571);
    /* 0042e571: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e574: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e575: ret 8 */ FN_RET(0x0042e609); r_esp += 12; return;
L_0042e609:; BB(0x0042e609);
    /* 0042e609: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042e60f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e611: jne 0x42e61d */ if (!fZ) goto L_0042e61d;
L_0042e613:; BB(0x0042e613);
    /* 0042e613: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0042e618: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e61d:; BB(0x0042e61d);
    /* 0042e61d: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0042e622: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e6f1:; BB(0x0042e6f1);
    /* 0042e6f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e6f4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e6f9u); f_0042abf8();
    /* 0042e6f9: jmp 0x42e571 */ goto L_0042e571;
}

void f_0042e627(void)
{
    FN_ENTER(0x0042e627);
    goto L_0042e627;
L_0042e571:; BB(0x0042e571);
    /* 0042e571: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e574: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e575: ret 8 */ FN_RET(0x0042e627); r_esp += 12; return;
L_0042e627:; BB(0x0042e627);
    /* 0042e627: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042e62d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e62f: jne 0x42e63b */ if (!fZ) goto L_0042e63b;
L_0042e631:; BB(0x0042e631);
    /* 0042e631: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0042e636: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e63b:; BB(0x0042e63b);
    /* 0042e63b: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0042e640: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e6f1:; BB(0x0042e6f1);
    /* 0042e6f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e6f4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e6f9u); f_0042abf8();
    /* 0042e6f9: jmp 0x42e571 */ goto L_0042e571;
}

void f_0042e645(void)
{
    FN_ENTER(0x0042e645);
    goto L_0042e645;
L_0042e571:; BB(0x0042e571);
    /* 0042e571: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e574: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e575: ret 8 */ FN_RET(0x0042e645); r_esp += 12; return;
L_0042e645:; BB(0x0042e645);
    /* 0042e645: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042e64b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e64d: jne 0x42e659 */ if (!fZ) goto L_0042e659;
L_0042e64f:; BB(0x0042e64f);
    /* 0042e64f: mov eax, 4 */ r_eax = 0x4u;
    /* 0042e654: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e659:; BB(0x0042e659);
    /* 0042e659: mov eax, 0xa */ r_eax = 0xau;
    /* 0042e65e: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e6f1:; BB(0x0042e6f1);
    /* 0042e6f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e6f4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e6f9u); f_0042abf8();
    /* 0042e6f9: jmp 0x42e571 */ goto L_0042e571;
}

void f_0042e663(void)
{
    FN_ENTER(0x0042e663);
    goto L_0042e663;
L_0042e571:; BB(0x0042e571);
    /* 0042e571: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e574: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e575: ret 8 */ FN_RET(0x0042e663); r_esp += 12; return;
L_0042e663:; BB(0x0042e663);
    /* 0042e663: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e665: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42e66au); f_00520bf4();
    /* 0042e66a: fcomp dword ptr [0x8fcfb8] */ fx_compare(ST(0), R_F32((u32)(0x8fcfb8u))); FPOP();
    /* 0042e670: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042e672: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042e673: jbe 0x42e67c */ if ((fC||fZ)) goto L_0042e67c;
L_0042e675:; BB(0x0042e675);
    /* 0042e675: mov eax, 0x18 */ r_eax = 0x18u;
    /* 0042e67a: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e67c:; BB(0x0042e67c);
    /* 0042e67c: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0042e681: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e6f1:; BB(0x0042e6f1);
    /* 0042e6f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e6f4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e6f9u); f_0042abf8();
    /* 0042e6f9: jmp 0x42e571 */ goto L_0042e571;
}

void f_0042e683(void)
{
    FN_ENTER(0x0042e683);
    goto L_0042e683;
L_0042e571:; BB(0x0042e571);
    /* 0042e571: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e574: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e575: ret 8 */ FN_RET(0x0042e683); r_esp += 12; return;
L_0042e683:; BB(0x0042e683);
    /* 0042e683: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042e689: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e68b: jne 0x42e694 */ if (!fZ) goto L_0042e694;
L_0042e68d:; BB(0x0042e68d);
    /* 0042e68d: mov eax, 3 */ r_eax = 0x3u;
    /* 0042e692: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e694:; BB(0x0042e694);
    /* 0042e694: mov eax, 0xb */ r_eax = 0xbu;
    /* 0042e699: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e6f1:; BB(0x0042e6f1);
    /* 0042e6f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e6f4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e6f9u); f_0042abf8();
    /* 0042e6f9: jmp 0x42e571 */ goto L_0042e571;
}

void f_0042e69b(void)
{
    FN_ENTER(0x0042e69b);
    goto L_0042e69b;
L_0042e571:; BB(0x0042e571);
    /* 0042e571: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e574: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e575: ret 8 */ FN_RET(0x0042e69b); r_esp += 12; return;
L_0042e69b:; BB(0x0042e69b);
    /* 0042e69b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e69d: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42e6a2u); f_00520bf4();
    /* 0042e6a2: fcomp dword ptr [0x8fcfb8] */ fx_compare(ST(0), R_F32((u32)(0x8fcfb8u))); FPOP();
    /* 0042e6a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042e6aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042e6ab: jbe 0x42e6b4 */ if ((fC||fZ)) goto L_0042e6b4;
L_0042e6ad:; BB(0x0042e6ad);
    /* 0042e6ad: mov eax, 0xc */ r_eax = 0xcu;
    /* 0042e6b2: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e6b4:; BB(0x0042e6b4);
    /* 0042e6b4: mov eax, 0xe */ r_eax = 0xeu;
    /* 0042e6b9: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e6f1:; BB(0x0042e6f1);
    /* 0042e6f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e6f4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e6f9u); f_0042abf8();
    /* 0042e6f9: jmp 0x42e571 */ goto L_0042e571;
}

void f_0042e6bb(void)
{
    FN_ENTER(0x0042e6bb);
    goto L_0042e6bb;
L_0042e571:; BB(0x0042e571);
    /* 0042e571: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e574: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e575: ret 8 */ FN_RET(0x0042e6bb); r_esp += 12; return;
L_0042e6bb:; BB(0x0042e6bb);
    /* 0042e6bb: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042e6c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e6c3: jne 0x42e6cc */ if (!fZ) goto L_0042e6cc;
L_0042e6c5:; BB(0x0042e6c5);
    /* 0042e6c5: mov eax, 5 */ r_eax = 0x5u;
    /* 0042e6ca: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e6cc:; BB(0x0042e6cc);
    /* 0042e6cc: mov eax, 9 */ r_eax = 0x9u;
    /* 0042e6d1: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e6f1:; BB(0x0042e6f1);
    /* 0042e6f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e6f4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e6f9u); f_0042abf8();
    /* 0042e6f9: jmp 0x42e571 */ goto L_0042e571;
}

void f_0042e6d3(void)
{
    FN_ENTER(0x0042e6d3);
    goto L_0042e6d3;
L_0042e571:; BB(0x0042e571);
    /* 0042e571: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e574: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e575: ret 8 */ FN_RET(0x0042e6d3); r_esp += 12; return;
L_0042e6d3:; BB(0x0042e6d3);
    /* 0042e6d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e6d5: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42e6dau); f_00520bf4();
    /* 0042e6da: fcomp dword ptr [0x8fcfb8] */ fx_compare(ST(0), R_F32((u32)(0x8fcfb8u))); FPOP();
    /* 0042e6e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042e6e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042e6e3: jbe 0x42e6ec */ if ((fC||fZ)) goto L_0042e6ec;
L_0042e6e5:; BB(0x0042e6e5);
    /* 0042e6e5: mov eax, 8 */ r_eax = 0x8u;
    /* 0042e6ea: jmp 0x42e6f1 */ goto L_0042e6f1;
L_0042e6ec:; BB(0x0042e6ec);
    /* 0042e6ec: mov eax, 6 */ r_eax = 0x6u;
L_0042e6f1:; BB(0x0042e6f1);
    /* 0042e6f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e6f4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e6f9u); f_0042abf8();
    /* 0042e6f9: jmp 0x42e571 */ goto L_0042e571;
}

void f_0042e6f1(void)
{
    FN_ENTER(0x0042e6f1);
    goto L_0042e6f1;
L_0042e571:; BB(0x0042e571);
    /* 0042e571: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e574: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e575: ret 8 */ FN_RET(0x0042e6f1); r_esp += 12; return;
L_0042e6f1:; BB(0x0042e6f1);
    /* 0042e6f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042e6f4: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42e6f9u); f_0042abf8();
    /* 0042e6f9: jmp 0x42e571 */ goto L_0042e571;
}

void f_0042e824(void) /* sub_42E824 */
{
    FN_ENTER(0x0042e824);
    /* 0042e824: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042e825: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042e826: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e827: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042e82a: mov esi, ecx */ r_esi = r_ecx;
    /* 0042e82c: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0042e830: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e833: je 0x42ebb8 */ if (fZ) goto L_0042ebb8;
L_0042e839:; BB(0x0042e839);
    /* 0042e839: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e83c: je 0x42eb69 */ if (fZ) goto L_0042eb69;
L_0042e842:; BB(0x0042e842);
    /* 0042e842: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e845: je 0x42e9e0 */ if (fZ) goto L_0042e9e0;
L_0042e84b:; BB(0x0042e84b);
    /* 0042e84b: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e84e: je 0x42e90f */ if (fZ) goto L_0042e90f;
L_0042e854:; BB(0x0042e854);
    /* 0042e854: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e856: je 0x42e873 */ if (fZ) goto L_0042e873;
L_0042e858:; BB(0x0042e858);
    /* 0042e858: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e85b: jne 0x42e90f */ if (!fZ) goto L_0042e90f;
L_0042e861:; BB(0x0042e861);
    /* 0042e861: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0042e865: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e868: jne 0x42e90f */ if (!fZ) goto L_0042e90f;
L_0042e86e:; BB(0x0042e86e);
    /* 0042e86e: jmp 0x42e918 */ goto L_0042e918;
L_0042e873:; BB(0x0042e873);
    /* 0042e873: mov ecx, esi */ r_ecx = r_esi;
    /* 0042e875: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x42e87au); f_007aa094();
    /* 0042e87a: push 0x41900000 */ { u32 v = 0x41900000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e87f: mov ecx, esi */ r_ecx = r_esi;
    /* 0042e881: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x42e886u); f_007aaa30();
    /* 0042e886: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e888: je 0x42e90f */ if (fZ) goto L_0042e90f;
L_0042e88e:; BB(0x0042e88e);
    /* 0042e88e: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0042e892: lea edi, [esi + 0x4d8] */ r_edi = (u32)(r_esi+0x4d8u);
    /* 0042e898: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e89b: je 0x42e8c8 */ if (fZ) goto L_0042e8c8;
L_0042e89d:; BB(0x0042e89d);
    /* 0042e89d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042e89f: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x42e8a4u); f_00520f04();
    /* 0042e8a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e8a6: je 0x42e8f7 */ if (fZ) goto L_0042e8f7;
L_0042e8a8:; BB(0x0042e8a8);
    /* 0042e8a8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0042e8aa:; BB(0x0042e8aa);
    /* 0042e8aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e8ab: push dword ptr [esi + 0x398] */ { u32 v = R32((u32)(r_esi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042e8b1: mov ecx, dword ptr [esi + ebx*4 + 0x64c] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x64cu));
    /* 0042e8b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042e8b9: call 0x437190 */ r_esp -= 4; W32(r_esp, 0x42e8beu); f_00437190();
    /* 0042e8be: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042e8c1: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042e8c4: jl 0x42e8aa */ if ((fS!=fO)) goto L_0042e8aa;
L_0042e8c6:; BB(0x0042e8c6);
    /* 0042e8c6: jmp 0x42e8f7 */ goto L_0042e8f7;
L_0042e8c8:; BB(0x0042e8c8);
    /* 0042e8c8: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0042e8cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042e8ce: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0042e8d0: mov ebp, edi */ r_ebp = r_edi;
    /* 0042e8d2: mov edi, eax */ r_edi = r_eax;
L_0042e8d4:; BB(0x0042e8d4);
    /* 0042e8d4: lea edx, [ebx + 0xa43c64] */ r_edx = (u32)(r_ebx+0xa43c64u);
    /* 0042e8da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e8db: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042e8dc: mov ecx, dword ptr [esi + edi*4 + 0x638] */ r_ecx = R32((u32)(r_esi+r_edi*4+0x638u));
    /* 0042e8e3: call 0x436a50 */ r_esp -= 4; W32(r_esp, 0x42e8e8u); f_00436a50();
    /* 0042e8e8: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042e8eb: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0042e8ee: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042e8f1: jl 0x42e8d4 */ if ((fS!=fO)) goto L_0042e8d4;
L_0042e8f3:; BB(0x0042e8f3);
    /* 0042e8f3: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_0042e8f7:; BB(0x0042e8f7);
    /* 0042e8f7: add esi, 0x52c */ {  u32 a = r_esi; u32 b = 0x52cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042e8fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042e8ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e901: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042e902: push 0x32a */ { u32 v = 0x32au; r_esp -= 4; W32(r_esp, v); }
    /* 0042e907: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x42e90cu); f_00814298();
    /* 0042e90c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042e90f:; BB(0x0042e90f);
    /* 0042e90f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e912: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e913: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042e914: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042e915: ret 8 */ FN_RET(0x0042e824); r_esp += 12; return;
L_0042e918:; BB(0x0042e918);
    /* 0042e918: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 0042e91e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e920: je 0x42e9ad */ if (fZ) goto L_0042e9ad;
L_0042e926:; BB(0x0042e926);
    /* 0042e926: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e929: je 0x42e9b9 */ if (fZ) goto L_0042e9b9;
L_0042e92f:; BB(0x0042e92f);
    /* 0042e92f: mov ecx, esi */ r_ecx = r_esi;
    /* 0042e931: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x42e936u); f_007751b0();
    /* 0042e936: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0042e93a: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0042e93e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042e940: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0042e944: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0042e949: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042e94e: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042e953: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0042e957: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0042e95b: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0042e95f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0042e963: mov ecx, esi */ r_ecx = r_esi;
    /* 0042e965: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0042e969: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x42e96eu); f_00520f68();
    /* 0042e96e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042e970: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0042e972: jle 0x42e90f */ if ((fZ||fS!=fO)) goto L_0042e90f;
L_0042e974:; BB(0x0042e974);
    /* 0042e974: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 0042e978: mov esi, edi */ r_esi = r_edi;
    /* 0042e97a: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0042e97e: mov edi, eax */ r_edi = r_eax;
    /* 0042e980: mov ebp, ebx */ r_ebp = r_ebx;
L_0042e982:; BB(0x0042e982);
    /* 0042e982: mov ebx, dword ptr [ebp*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebp*4+0xaad720u));
    /* 0042e989: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e98a: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x42e98fu); f_00520f3c();
    /* 0042e98f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042e990: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e992: jne 0x42e9cb */ if (!fZ) goto L_0042e9cb;
L_0042e994:; BB(0x0042e994);
    /* 0042e994: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0042e997: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042e999: jl 0x42e99d */ if ((fS!=fO)) goto L_0042e99d;
L_0042e99b:; BB(0x0042e99b);
    /* 0042e99b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0042e99d:; BB(0x0042e99d);
    /* 0042e99d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0042e9a0: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042e9a2: jl 0x42e982 */ if ((fS!=fO)) goto L_0042e982;
L_0042e9a4:; BB(0x0042e9a4);
    /* 0042e9a4: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0042e9a8: jmp 0x42e90f */ goto L_0042e90f;
L_0042e9ad:; BB(0x0042e9ad);
    /* 0042e9ad: mov ecx, esi */ r_ecx = r_esi;
    /* 0042e9af: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x42e9b4u); f_00520f68();
    /* 0042e9b4: jmp 0x42e90f */ goto L_0042e90f;
L_0042e9b9:; BB(0x0042e9b9);
    /* 0042e9b9: push dword ptr [0xaad720] */ { u32 v = R32((u32)(0xaad720u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042e9bf: mov ecx, esi */ r_ecx = r_esi;
    /* 0042e9c1: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x42e9c6u); f_00521388();
    /* 0042e9c6: jmp 0x42e90f */ goto L_0042e90f;
L_0042e9cb:; BB(0x0042e9cb);
    /* 0042e9cb: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0042e9cf: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0042e9d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e9d4: mov ecx, esi */ r_ecx = r_esi;
    /* 0042e9d6: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x42e9dbu); f_00521388();
    /* 0042e9db: jmp 0x42e90f */ goto L_0042e90f;
L_0042e9e0:; BB(0x0042e9e0);
    /* 0042e9e0: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0042e9e6: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0042e9e8: je 0x42e90f */ if (fZ) goto L_0042e90f;
L_0042e9ee:; BB(0x0042e9ee);
    /* 0042e9ee: mov eax, dword ptr [esi + 0x3dc] */ r_eax = R32((u32)(r_esi+0x3dcu));
    /* 0042e9f4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042e9f7: mov dword ptr [esi + 0x3dc], eax */ W32((u32)(r_esi+0x3dcu), r_eax);
    /* 0042e9fd: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42ea02u); f_00520e6c();
    /* 0042ea02: mov edx, dword ptr [esi + 0x3dc] */ r_edx = R32((u32)(r_esi+0x3dcu));
    /* 0042ea08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ea0a: je 0x42ea15 */ if (fZ) goto L_0042ea15;
L_0042ea0c:; BB(0x0042ea0c);
    /* 0042ea0c: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042ea13: jmp 0x42ea1c */ goto L_0042ea1c;
L_0042ea15:; BB(0x0042ea15);
    /* 0042ea15: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042ea1c:; BB(0x0042ea1c);
    /* 0042ea1c: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042ea1f: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042ea22: ja 0x42eb5c */ if ((!fC&&!fZ)) goto L_0042eb5c;
L_0042ea28:; BB(0x0042ea28);
    /* 0042ea28: mov edx, dword ptr [edx*4 + 0x8fc8b0] */ r_edx = R32((u32)(r_edx*4+0x8fc8b0u));
    /* 0042ea2f: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042eb5c:; BB(0x0042eb5c);
    /* 0042eb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042eb5f: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42eb64u); f_0042abf8();
    /* 0042eb64: jmp 0x42e90f */ goto L_0042e90f;
L_0042eb69:; BB(0x0042eb69);
    /* 0042eb69: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0042eb6f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0042eb71: je 0x42e90f */ if (fZ) goto L_0042e90f;
L_0042eb77:; BB(0x0042eb77);
    /* 0042eb77: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb79: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb7b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0042eb7d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042eb7f: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42eb85u); call_ind(t); }
    /* 0042eb85: movzx edi, word ptr [esi + 0x1c] */ r_edi = (u32)R16((u32)(r_esi+0x1cu));
    /* 0042eb89: mov edx, dword ptr [esi + 0x3dc] */ r_edx = R32((u32)(r_esi+0x3dcu));
    /* 0042eb8f: mov byte ptr [esp], 0x13 */ W8((u32)(r_esp), 0x13u);
    /* 0042eb93: mov eax, 2 */ r_eax = 0x2u;
    /* 0042eb98: mov byte ptr [esp + 1], al */ W8((u32)(r_esp+0x1u), (u8)r_eax);
    /* 0042eb9c: mov word ptr [esp + 2], di */ W16((u32)(r_esp+0x2u), (u16)r_edi);
    /* 0042eba1: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0042eba6: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0042ebab: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0042ebae: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42ebb3u); f_008003e0();
    /* 0042ebb3: jmp 0x42e90f */ goto L_0042e90f;
L_0042ebb8:; BB(0x0042ebb8);
    /* 0042ebb8: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0042ebbe: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042ebc1: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042ebc6: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0042ebcc: mov edx, 0xb */ r_edx = 0xbu;
    /* 0042ebd1: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 0042ebd8: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0042ebdd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ebde: mov dword ptr [esi + 0x65c], ebx */ W32((u32)(r_esi+0x65cu), r_ebx);
    /* 0042ebe4: mov ecx, esi */ r_ecx = r_esi;
    /* 0042ebe6: call 0x42c154 */ r_esp -= 4; W32(r_esp, 0x42ebebu); f_0042c154();
    /* 0042ebeb: jmp 0x42e90f */ goto L_0042e90f;
}

void f_0042ea31(void)
{
    FN_ENTER(0x0042ea31);
    goto L_0042ea31;
L_0042e90f:; BB(0x0042e90f);
    /* 0042e90f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e912: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e913: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042e914: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042e915: ret 8 */ FN_RET(0x0042ea31); r_esp += 12; return;
L_0042e9f4:; BB(0x0042e9f4);
    /* 0042e9f4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042e9f7: mov dword ptr [esi + 0x3dc], eax */ W32((u32)(r_esi+0x3dcu), r_eax);
    /* 0042e9fd: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42ea02u); f_00520e6c();
    /* 0042ea02: mov edx, dword ptr [esi + 0x3dc] */ r_edx = R32((u32)(r_esi+0x3dcu));
    /* 0042ea08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ea0a: je 0x42ea15 */ if (fZ) goto L_0042ea15;
L_0042ea0c:; BB(0x0042ea0c);
    /* 0042ea0c: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042ea13: jmp 0x42ea1c */ goto L_0042ea1c;
L_0042ea15:; BB(0x0042ea15);
    /* 0042ea15: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042ea1c:; BB(0x0042ea1c);
    /* 0042ea1c: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042ea1f: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042ea22: ja 0x42eb5c */ if ((!fC&&!fZ)) goto L_0042eb5c;
L_0042ea28:; BB(0x0042ea28);
    /* 0042ea28: mov edx, dword ptr [edx*4 + 0x8fc8b0] */ r_edx = R32((u32)(r_edx*4+0x8fc8b0u));
    /* 0042ea2f: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042ea31:; BB(0x0042ea31);
    /* 0042ea31: mov eax, 5 */ r_eax = 0x5u;
    /* 0042ea36: jmp 0x42e9f4 */ goto L_0042e9f4;
L_0042eb5c:; BB(0x0042eb5c);
    /* 0042eb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042eb5f: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42eb64u); f_0042abf8();
    /* 0042eb64: jmp 0x42e90f */ goto L_0042e90f;
}

void f_0042ea38(void)
{
    FN_ENTER(0x0042ea38);
    goto L_0042ea38;
L_0042e90f:; BB(0x0042e90f);
    /* 0042e90f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e912: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e913: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042e914: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042e915: ret 8 */ FN_RET(0x0042ea38); r_esp += 12; return;
L_0042ea38:; BB(0x0042ea38);
    /* 0042ea38: mov eax, dword ptr [esi + 0x660] */ r_eax = R32((u32)(r_esi+0x660u));
    /* 0042ea3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ea40: jne 0x42ea4c */ if (!fZ) goto L_0042ea4c;
L_0042ea42:; BB(0x0042ea42);
    /* 0042ea42: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0042ea47: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042ea4c:; BB(0x0042ea4c);
    /* 0042ea4c: mov eax, 0x17 */ r_eax = 0x17u;
    /* 0042ea51: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042eb5c:; BB(0x0042eb5c);
    /* 0042eb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042eb5f: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42eb64u); f_0042abf8();
    /* 0042eb64: jmp 0x42e90f */ goto L_0042e90f;
}

void f_0042ea56(void)
{
    FN_ENTER(0x0042ea56);
    goto L_0042ea56;
L_0042e90f:; BB(0x0042e90f);
    /* 0042e90f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e912: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e913: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042e914: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042e915: ret 8 */ FN_RET(0x0042ea56); r_esp += 12; return;
L_0042ea56:; BB(0x0042ea56);
    /* 0042ea56: mov eax, dword ptr [esi + 0x660] */ r_eax = R32((u32)(r_esi+0x660u));
    /* 0042ea5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ea5e: jne 0x42ea6a */ if (!fZ) goto L_0042ea6a;
L_0042ea60:; BB(0x0042ea60);
    /* 0042ea60: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0042ea65: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042ea6a:; BB(0x0042ea6a);
    /* 0042ea6a: mov eax, 0x15 */ r_eax = 0x15u;
    /* 0042ea6f: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042eb5c:; BB(0x0042eb5c);
    /* 0042eb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042eb5f: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42eb64u); f_0042abf8();
    /* 0042eb64: jmp 0x42e90f */ goto L_0042e90f;
}

void f_0042ea74(void)
{
    FN_ENTER(0x0042ea74);
    goto L_0042ea74;
L_0042e90f:; BB(0x0042e90f);
    /* 0042e90f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e912: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e913: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042e914: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042e915: ret 8 */ FN_RET(0x0042ea74); r_esp += 12; return;
L_0042ea74:; BB(0x0042ea74);
    /* 0042ea74: mov eax, dword ptr [esi + 0x660] */ r_eax = R32((u32)(r_esi+0x660u));
    /* 0042ea7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ea7c: jne 0x42ea88 */ if (!fZ) goto L_0042ea88;
L_0042ea7e:; BB(0x0042ea7e);
    /* 0042ea7e: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0042ea83: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042ea88:; BB(0x0042ea88);
    /* 0042ea88: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0042ea8d: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042eb5c:; BB(0x0042eb5c);
    /* 0042eb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042eb5f: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42eb64u); f_0042abf8();
    /* 0042eb64: jmp 0x42e90f */ goto L_0042e90f;
}

void f_0042ea92(void)
{
    FN_ENTER(0x0042ea92);
    goto L_0042ea92;
L_0042e90f:; BB(0x0042e90f);
    /* 0042e90f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e912: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e913: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042e914: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042e915: ret 8 */ FN_RET(0x0042ea92); r_esp += 12; return;
L_0042ea92:; BB(0x0042ea92);
    /* 0042ea92: mov eax, dword ptr [esi + 0x660] */ r_eax = R32((u32)(r_esi+0x660u));
    /* 0042ea98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ea9a: jne 0x42eaa6 */ if (!fZ) goto L_0042eaa6;
L_0042ea9c:; BB(0x0042ea9c);
    /* 0042ea9c: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0042eaa1: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042eaa6:; BB(0x0042eaa6);
    /* 0042eaa6: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0042eaab: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042eb5c:; BB(0x0042eb5c);
    /* 0042eb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042eb5f: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42eb64u); f_0042abf8();
    /* 0042eb64: jmp 0x42e90f */ goto L_0042e90f;
}

void f_0042eab0(void)
{
    FN_ENTER(0x0042eab0);
    goto L_0042eab0;
L_0042e90f:; BB(0x0042e90f);
    /* 0042e90f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e912: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e913: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042e914: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042e915: ret 8 */ FN_RET(0x0042eab0); r_esp += 12; return;
L_0042eab0:; BB(0x0042eab0);
    /* 0042eab0: mov eax, dword ptr [esi + 0x660] */ r_eax = R32((u32)(r_esi+0x660u));
    /* 0042eab6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042eab8: jne 0x42eac4 */ if (!fZ) goto L_0042eac4;
L_0042eaba:; BB(0x0042eaba);
    /* 0042eaba: mov eax, 4 */ r_eax = 0x4u;
    /* 0042eabf: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042eac4:; BB(0x0042eac4);
    /* 0042eac4: mov eax, 0xa */ r_eax = 0xau;
    /* 0042eac9: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042eb5c:; BB(0x0042eb5c);
    /* 0042eb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042eb5f: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42eb64u); f_0042abf8();
    /* 0042eb64: jmp 0x42e90f */ goto L_0042e90f;
}

void f_0042eace(void)
{
    FN_ENTER(0x0042eace);
    goto L_0042eace;
L_0042e90f:; BB(0x0042e90f);
    /* 0042e90f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e912: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e913: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042e914: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042e915: ret 8 */ FN_RET(0x0042eace); r_esp += 12; return;
L_0042eace:; BB(0x0042eace);
    /* 0042eace: mov ecx, esi */ r_ecx = r_esi;
    /* 0042ead0: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42ead5u); f_00520bf4();
    /* 0042ead5: fcomp dword ptr [0x8fcf90] */ fx_compare(ST(0), R_F32((u32)(0x8fcf90u))); FPOP();
    /* 0042eadb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042eadd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042eade: jbe 0x42eae7 */ if ((fC||fZ)) goto L_0042eae7;
L_0042eae0:; BB(0x0042eae0);
    /* 0042eae0: mov eax, 0x18 */ r_eax = 0x18u;
    /* 0042eae5: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042eae7:; BB(0x0042eae7);
    /* 0042eae7: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0042eaec: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042eb5c:; BB(0x0042eb5c);
    /* 0042eb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042eb5f: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42eb64u); f_0042abf8();
    /* 0042eb64: jmp 0x42e90f */ goto L_0042e90f;
}

void f_0042eaee(void)
{
    FN_ENTER(0x0042eaee);
    goto L_0042eaee;
L_0042e90f:; BB(0x0042e90f);
    /* 0042e90f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e912: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e913: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042e914: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042e915: ret 8 */ FN_RET(0x0042eaee); r_esp += 12; return;
L_0042eaee:; BB(0x0042eaee);
    /* 0042eaee: mov eax, dword ptr [esi + 0x660] */ r_eax = R32((u32)(r_esi+0x660u));
    /* 0042eaf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042eaf6: jne 0x42eaff */ if (!fZ) goto L_0042eaff;
L_0042eaf8:; BB(0x0042eaf8);
    /* 0042eaf8: mov eax, 3 */ r_eax = 0x3u;
    /* 0042eafd: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042eaff:; BB(0x0042eaff);
    /* 0042eaff: mov eax, 0xb */ r_eax = 0xbu;
    /* 0042eb04: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042eb5c:; BB(0x0042eb5c);
    /* 0042eb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042eb5f: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42eb64u); f_0042abf8();
    /* 0042eb64: jmp 0x42e90f */ goto L_0042e90f;
}

void f_0042eb06(void)
{
    FN_ENTER(0x0042eb06);
    goto L_0042eb06;
L_0042e90f:; BB(0x0042e90f);
    /* 0042e90f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e912: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e913: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042e914: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042e915: ret 8 */ FN_RET(0x0042eb06); r_esp += 12; return;
L_0042eb06:; BB(0x0042eb06);
    /* 0042eb06: mov ecx, esi */ r_ecx = r_esi;
    /* 0042eb08: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42eb0du); f_00520bf4();
    /* 0042eb0d: fcomp dword ptr [0x8fcf90] */ fx_compare(ST(0), R_F32((u32)(0x8fcf90u))); FPOP();
    /* 0042eb13: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042eb15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042eb16: jbe 0x42eb1f */ if ((fC||fZ)) goto L_0042eb1f;
L_0042eb18:; BB(0x0042eb18);
    /* 0042eb18: mov eax, 0xc */ r_eax = 0xcu;
    /* 0042eb1d: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042eb1f:; BB(0x0042eb1f);
    /* 0042eb1f: mov eax, 0xe */ r_eax = 0xeu;
    /* 0042eb24: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042eb5c:; BB(0x0042eb5c);
    /* 0042eb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042eb5f: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42eb64u); f_0042abf8();
    /* 0042eb64: jmp 0x42e90f */ goto L_0042e90f;
}

void f_0042eb26(void)
{
    FN_ENTER(0x0042eb26);
    goto L_0042eb26;
L_0042e90f:; BB(0x0042e90f);
    /* 0042e90f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e912: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e913: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042e914: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042e915: ret 8 */ FN_RET(0x0042eb26); r_esp += 12; return;
L_0042eb26:; BB(0x0042eb26);
    /* 0042eb26: mov eax, dword ptr [esi + 0x660] */ r_eax = R32((u32)(r_esi+0x660u));
    /* 0042eb2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042eb2e: jne 0x42eb37 */ if (!fZ) goto L_0042eb37;
L_0042eb30:; BB(0x0042eb30);
    /* 0042eb30: mov eax, 5 */ r_eax = 0x5u;
    /* 0042eb35: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042eb37:; BB(0x0042eb37);
    /* 0042eb37: mov eax, 9 */ r_eax = 0x9u;
    /* 0042eb3c: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042eb5c:; BB(0x0042eb5c);
    /* 0042eb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042eb5f: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42eb64u); f_0042abf8();
    /* 0042eb64: jmp 0x42e90f */ goto L_0042e90f;
}

void f_0042eb3e(void)
{
    FN_ENTER(0x0042eb3e);
    goto L_0042eb3e;
L_0042e90f:; BB(0x0042e90f);
    /* 0042e90f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e912: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e913: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042e914: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042e915: ret 8 */ FN_RET(0x0042eb3e); r_esp += 12; return;
L_0042eb3e:; BB(0x0042eb3e);
    /* 0042eb3e: mov ecx, esi */ r_ecx = r_esi;
    /* 0042eb40: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42eb45u); f_00520bf4();
    /* 0042eb45: fcomp dword ptr [0x8fcf90] */ fx_compare(ST(0), R_F32((u32)(0x8fcf90u))); FPOP();
    /* 0042eb4b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042eb4d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042eb4e: jbe 0x42eb57 */ if ((fC||fZ)) goto L_0042eb57;
L_0042eb50:; BB(0x0042eb50);
    /* 0042eb50: mov eax, 8 */ r_eax = 0x8u;
    /* 0042eb55: jmp 0x42eb5c */ goto L_0042eb5c;
L_0042eb57:; BB(0x0042eb57);
    /* 0042eb57: mov eax, 6 */ r_eax = 0x6u;
L_0042eb5c:; BB(0x0042eb5c);
    /* 0042eb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042eb5f: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42eb64u); f_0042abf8();
    /* 0042eb64: jmp 0x42e90f */ goto L_0042e90f;
}

void f_0042eb5c(void)
{
    FN_ENTER(0x0042eb5c);
    goto L_0042eb5c;
L_0042e90f:; BB(0x0042e90f);
    /* 0042e90f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042e912: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042e913: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042e914: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042e915: ret 8 */ FN_RET(0x0042eb5c); r_esp += 12; return;
L_0042eb5c:; BB(0x0042eb5c);
    /* 0042eb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0042eb5f: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42eb64u); f_0042abf8();
    /* 0042eb64: jmp 0x42e90f */ goto L_0042e90f;
}

void f_0042ebf0(void) /* sub_42EBF0 */
{
    FN_ENTER(0x0042ebf0);
    /* 0042ebf0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ebf1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042ebf4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0042ebf6: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0042ebfa: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ebfd: je 0x42ee00 */ if (fZ) goto L_0042ee00;
L_0042ec03:; BB(0x0042ec03);
    /* 0042ec03: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ec06: je 0x42edaf */ if (fZ) goto L_0042edaf;
L_0042ec0c:; BB(0x0042ec0c);
    /* 0042ec0c: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ec0f: je 0x42ec28 */ if (fZ) goto L_0042ec28;
L_0042ec11:; BB(0x0042ec11);
    /* 0042ec11: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ec14: je 0x42ec21 */ if (fZ) goto L_0042ec21;
L_0042ec16:; BB(0x0042ec16);
    /* 0042ec16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ec18: jne 0x42ec21 */ if (!fZ) goto L_0042ec21;
L_0042ec1a:; BB(0x0042ec1a);
    /* 0042ec1a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042ec1c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x42ec21u); f_007aa094();
L_0042ec21:; BB(0x0042ec21);
    /* 0042ec21: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ec24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ec25: ret 8 */ FN_RET(0x0042ebf0); r_esp += 12; return;
L_0042ec28:; BB(0x0042ec28);
    /* 0042ec28: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 0042ec2f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ec32: jne 0x42ec21 */ if (!fZ) goto L_0042ec21;
L_0042ec34:; BB(0x0042ec34);
    /* 0042ec34: mov eax, dword ptr [ebx + 0x3dc] */ r_eax = R32((u32)(r_ebx+0x3dcu));
    /* 0042ec3a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042ec3d: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0042ec43: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42ec48u); f_00520e6c();
    /* 0042ec48: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042ec4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ec50: je 0x42ec5b */ if (fZ) goto L_0042ec5b;
L_0042ec52:; BB(0x0042ec52);
    /* 0042ec52: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042ec59: jmp 0x42ec62 */ goto L_0042ec62;
L_0042ec5b:; BB(0x0042ec5b);
    /* 0042ec5b: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042ec62:; BB(0x0042ec62);
    /* 0042ec62: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042ec65: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042ec68: ja 0x42eda2 */ if ((!fC&&!fZ)) goto L_0042eda2;
L_0042ec6e:; BB(0x0042ec6e);
    /* 0042ec6e: mov edx, dword ptr [edx*4 + 0x8fc8e0] */ r_edx = R32((u32)(r_edx*4+0x8fc8e0u));
    /* 0042ec75: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042eda2:; BB(0x0042eda2);
    /* 0042eda2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eda3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042eda5: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42edaau); f_0042abf8();
    /* 0042edaa: jmp 0x42ec21 */ goto L_0042ec21;
L_0042edaf:; BB(0x0042edaf);
    /* 0042edaf: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 0042edb6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042edb9: jne 0x42ec21 */ if (!fZ) goto L_0042ec21;
L_0042edbf:; BB(0x0042edbf);
    /* 0042edbf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042edc1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0042edc3: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042edc5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042edc7: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42edcdu); call_ind(t); }
    /* 0042edcd: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0042edd1: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 0042edd7: mov byte ptr [esp], 0x13 */ W8((u32)(r_esp), 0x13u);
    /* 0042eddb: mov edx, 2 */ r_edx = 0x2u;
    /* 0042ede0: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 0042ede4: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0042ede9: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0042edee: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 0042edf3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0042edf6: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42edfbu); f_008003e0();
    /* 0042edfb: jmp 0x42ec21 */ goto L_0042ec21;
L_0042ee00:; BB(0x0042ee00);
    /* 0042ee00: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0042ee06: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042ee09: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042ee0e: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0042ee14: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042ee16: mov edx, 0xe */ r_edx = 0xeu;
    /* 0042ee1b: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 0042ee22: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042ee24: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x42ee2au); call_ind(t); }
    /* 0042ee2a: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0042ee2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042ee30: mov esi, eax */ r_esi = r_eax;
L_0042ee32:; BB(0x0042ee32);
    /* 0042ee32: mov ecx, dword ptr [ebx + esi*4 + 0x5e8] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x5e8u));
    /* 0042ee39: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042ee3b: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x42ee41u); call_ind(t); }
    /* 0042ee41: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042ee44: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042ee47: jl 0x42ee32 */ if ((fS!=fO)) goto L_0042ee32;
L_0042ee49:; BB(0x0042ee49);
    /* 0042ee49: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0042ee4d: mov eax, 3 */ r_eax = 0x3u;
    /* 0042ee52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042ee53: mov dword ptr [ebx + 0x65c], eax */ W32((u32)(r_ebx+0x65cu), r_eax);
    /* 0042ee59: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042ee5b: call 0x42c154 */ r_esp -= 4; W32(r_esp, 0x42ee60u); f_0042c154();
    /* 0042ee60: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0042ee64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ee66: je 0x42ec21 */ if (fZ) goto L_0042ec21;
L_0042ee6c:; BB(0x0042ee6c);
    /* 0042ee6c: call 0x43c40c */ r_esp -= 4; W32(r_esp, 0x42ee71u); f_0043c40c();
    /* 0042ee71: jmp 0x42ec21 */ goto L_0042ec21;
}

void f_0042ec77(void)
{
    FN_ENTER(0x0042ec77);
    goto L_0042ec77;
L_0042ec21:; BB(0x0042ec21);
    /* 0042ec21: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ec24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ec25: ret 8 */ FN_RET(0x0042ec77); r_esp += 12; return;
L_0042ec3a:; BB(0x0042ec3a);
    /* 0042ec3a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042ec3d: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0042ec43: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x42ec48u); f_00520e6c();
    /* 0042ec48: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042ec4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ec50: je 0x42ec5b */ if (fZ) goto L_0042ec5b;
L_0042ec52:; BB(0x0042ec52);
    /* 0042ec52: mov eax, dword ptr [edx*4 + 0x9a4440] */ r_eax = R32((u32)(r_edx*4+0x9a4440u));
    /* 0042ec59: jmp 0x42ec62 */ goto L_0042ec62;
L_0042ec5b:; BB(0x0042ec5b);
    /* 0042ec5b: mov eax, dword ptr [edx*4 + 0x9a4380] */ r_eax = R32((u32)(r_edx*4+0x9a4380u));
L_0042ec62:; BB(0x0042ec62);
    /* 0042ec62: lea edx, [eax - 0x21] */ r_edx = (u32)(r_eax+0xffffffdfu);
    /* 0042ec65: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042ec68: ja 0x42eda2 */ if ((!fC&&!fZ)) goto L_0042eda2;
L_0042ec6e:; BB(0x0042ec6e);
    /* 0042ec6e: mov edx, dword ptr [edx*4 + 0x8fc8e0] */ r_edx = R32((u32)(r_edx*4+0x8fc8e0u));
    /* 0042ec75: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0042ec77:; BB(0x0042ec77);
    /* 0042ec77: mov eax, 5 */ r_eax = 0x5u;
    /* 0042ec7c: jmp 0x42ec3a */ goto L_0042ec3a;
L_0042eda2:; BB(0x0042eda2);
    /* 0042eda2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eda3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042eda5: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42edaau); f_0042abf8();
    /* 0042edaa: jmp 0x42ec21 */ goto L_0042ec21;
}

void f_0042ec7e(void)
{
    FN_ENTER(0x0042ec7e);
    goto L_0042ec7e;
L_0042ec21:; BB(0x0042ec21);
    /* 0042ec21: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ec24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ec25: ret 8 */ FN_RET(0x0042ec7e); r_esp += 12; return;
L_0042ec7e:; BB(0x0042ec7e);
    /* 0042ec7e: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042ec84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ec86: jne 0x42ec92 */ if (!fZ) goto L_0042ec92;
L_0042ec88:; BB(0x0042ec88);
    /* 0042ec88: mov eax, 0x16 */ r_eax = 0x16u;
    /* 0042ec8d: jmp 0x42eda2 */ goto L_0042eda2;
L_0042ec92:; BB(0x0042ec92);
    /* 0042ec92: mov eax, 0x17 */ r_eax = 0x17u;
    /* 0042ec97: jmp 0x42eda2 */ goto L_0042eda2;
L_0042eda2:; BB(0x0042eda2);
    /* 0042eda2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eda3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042eda5: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42edaau); f_0042abf8();
    /* 0042edaa: jmp 0x42ec21 */ goto L_0042ec21;
}

void f_0042ec9c(void)
{
    FN_ENTER(0x0042ec9c);
    goto L_0042ec9c;
L_0042ec21:; BB(0x0042ec21);
    /* 0042ec21: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ec24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ec25: ret 8 */ FN_RET(0x0042ec9c); r_esp += 12; return;
L_0042ec9c:; BB(0x0042ec9c);
    /* 0042ec9c: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042eca2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042eca4: jne 0x42ecb0 */ if (!fZ) goto L_0042ecb0;
L_0042eca6:; BB(0x0042eca6);
    /* 0042eca6: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0042ecab: jmp 0x42eda2 */ goto L_0042eda2;
L_0042ecb0:; BB(0x0042ecb0);
    /* 0042ecb0: mov eax, 0x15 */ r_eax = 0x15u;
    /* 0042ecb5: jmp 0x42eda2 */ goto L_0042eda2;
L_0042eda2:; BB(0x0042eda2);
    /* 0042eda2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eda3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042eda5: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42edaau); f_0042abf8();
    /* 0042edaa: jmp 0x42ec21 */ goto L_0042ec21;
}

void f_0042ecba(void)
{
    FN_ENTER(0x0042ecba);
    goto L_0042ecba;
L_0042ec21:; BB(0x0042ec21);
    /* 0042ec21: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ec24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ec25: ret 8 */ FN_RET(0x0042ecba); r_esp += 12; return;
L_0042ecba:; BB(0x0042ecba);
    /* 0042ecba: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042ecc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ecc2: jne 0x42ecce */ if (!fZ) goto L_0042ecce;
L_0042ecc4:; BB(0x0042ecc4);
    /* 0042ecc4: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0042ecc9: jmp 0x42eda2 */ goto L_0042eda2;
L_0042ecce:; BB(0x0042ecce);
    /* 0042ecce: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0042ecd3: jmp 0x42eda2 */ goto L_0042eda2;
L_0042eda2:; BB(0x0042eda2);
    /* 0042eda2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eda3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042eda5: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42edaau); f_0042abf8();
    /* 0042edaa: jmp 0x42ec21 */ goto L_0042ec21;
}

void f_0042ecd8(void)
{
    FN_ENTER(0x0042ecd8);
    goto L_0042ecd8;
L_0042ec21:; BB(0x0042ec21);
    /* 0042ec21: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ec24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ec25: ret 8 */ FN_RET(0x0042ecd8); r_esp += 12; return;
L_0042ecd8:; BB(0x0042ecd8);
    /* 0042ecd8: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042ecde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ece0: jne 0x42ecec */ if (!fZ) goto L_0042ecec;
L_0042ece2:; BB(0x0042ece2);
    /* 0042ece2: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0042ece7: jmp 0x42eda2 */ goto L_0042eda2;
L_0042ecec:; BB(0x0042ecec);
    /* 0042ecec: mov eax, 0x11 */ r_eax = 0x11u;
    /* 0042ecf1: jmp 0x42eda2 */ goto L_0042eda2;
L_0042eda2:; BB(0x0042eda2);
    /* 0042eda2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eda3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042eda5: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42edaau); f_0042abf8();
    /* 0042edaa: jmp 0x42ec21 */ goto L_0042ec21;
}

void f_0042ecf6(void)
{
    FN_ENTER(0x0042ecf6);
    goto L_0042ecf6;
L_0042ec21:; BB(0x0042ec21);
    /* 0042ec21: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ec24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ec25: ret 8 */ FN_RET(0x0042ecf6); r_esp += 12; return;
L_0042ecf6:; BB(0x0042ecf6);
    /* 0042ecf6: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042ecfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ecfe: jne 0x42ed0a */ if (!fZ) goto L_0042ed0a;
L_0042ed00:; BB(0x0042ed00);
    /* 0042ed00: mov eax, 4 */ r_eax = 0x4u;
    /* 0042ed05: jmp 0x42eda2 */ goto L_0042eda2;
L_0042ed0a:; BB(0x0042ed0a);
    /* 0042ed0a: mov eax, 0xa */ r_eax = 0xau;
    /* 0042ed0f: jmp 0x42eda2 */ goto L_0042eda2;
L_0042eda2:; BB(0x0042eda2);
    /* 0042eda2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eda3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042eda5: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42edaau); f_0042abf8();
    /* 0042edaa: jmp 0x42ec21 */ goto L_0042ec21;
}

void f_0042ed14(void)
{
    FN_ENTER(0x0042ed14);
    goto L_0042ed14;
L_0042ec21:; BB(0x0042ec21);
    /* 0042ec21: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ec24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ec25: ret 8 */ FN_RET(0x0042ed14); r_esp += 12; return;
L_0042ed14:; BB(0x0042ed14);
    /* 0042ed14: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042ed16: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42ed1bu); f_00520bf4();
    /* 0042ed1b: fcomp dword ptr [0x8fcf8c] */ fx_compare(ST(0), R_F32((u32)(0x8fcf8cu))); FPOP();
    /* 0042ed21: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042ed23: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042ed24: jbe 0x42ed2d */ if ((fC||fZ)) goto L_0042ed2d;
L_0042ed26:; BB(0x0042ed26);
    /* 0042ed26: mov eax, 0x18 */ r_eax = 0x18u;
    /* 0042ed2b: jmp 0x42eda2 */ goto L_0042eda2;
L_0042ed2d:; BB(0x0042ed2d);
    /* 0042ed2d: mov eax, 0x19 */ r_eax = 0x19u;
    /* 0042ed32: jmp 0x42eda2 */ goto L_0042eda2;
L_0042eda2:; BB(0x0042eda2);
    /* 0042eda2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eda3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042eda5: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42edaau); f_0042abf8();
    /* 0042edaa: jmp 0x42ec21 */ goto L_0042ec21;
}

void f_0042ed34(void)
{
    FN_ENTER(0x0042ed34);
    goto L_0042ed34;
L_0042ec21:; BB(0x0042ec21);
    /* 0042ec21: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ec24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ec25: ret 8 */ FN_RET(0x0042ed34); r_esp += 12; return;
L_0042ed34:; BB(0x0042ed34);
    /* 0042ed34: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042ed3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ed3c: jne 0x42ed45 */ if (!fZ) goto L_0042ed45;
L_0042ed3e:; BB(0x0042ed3e);
    /* 0042ed3e: mov eax, 3 */ r_eax = 0x3u;
    /* 0042ed43: jmp 0x42eda2 */ goto L_0042eda2;
L_0042ed45:; BB(0x0042ed45);
    /* 0042ed45: mov eax, 0xb */ r_eax = 0xbu;
    /* 0042ed4a: jmp 0x42eda2 */ goto L_0042eda2;
L_0042eda2:; BB(0x0042eda2);
    /* 0042eda2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eda3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042eda5: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42edaau); f_0042abf8();
    /* 0042edaa: jmp 0x42ec21 */ goto L_0042ec21;
}

void f_0042ed4c(void)
{
    FN_ENTER(0x0042ed4c);
    goto L_0042ed4c;
L_0042ec21:; BB(0x0042ec21);
    /* 0042ec21: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ec24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ec25: ret 8 */ FN_RET(0x0042ed4c); r_esp += 12; return;
L_0042ed4c:; BB(0x0042ed4c);
    /* 0042ed4c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042ed4e: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42ed53u); f_00520bf4();
    /* 0042ed53: fcomp dword ptr [0x8fcf8c] */ fx_compare(ST(0), R_F32((u32)(0x8fcf8cu))); FPOP();
    /* 0042ed59: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042ed5b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042ed5c: jbe 0x42ed65 */ if ((fC||fZ)) goto L_0042ed65;
L_0042ed5e:; BB(0x0042ed5e);
    /* 0042ed5e: mov eax, 0xc */ r_eax = 0xcu;
    /* 0042ed63: jmp 0x42eda2 */ goto L_0042eda2;
L_0042ed65:; BB(0x0042ed65);
    /* 0042ed65: mov eax, 0xe */ r_eax = 0xeu;
    /* 0042ed6a: jmp 0x42eda2 */ goto L_0042eda2;
L_0042eda2:; BB(0x0042eda2);
    /* 0042eda2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eda3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042eda5: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42edaau); f_0042abf8();
    /* 0042edaa: jmp 0x42ec21 */ goto L_0042ec21;
}

void f_0042ed6c(void)
{
    FN_ENTER(0x0042ed6c);
    goto L_0042ed6c;
L_0042ec21:; BB(0x0042ec21);
    /* 0042ec21: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ec24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ec25: ret 8 */ FN_RET(0x0042ed6c); r_esp += 12; return;
L_0042ed6c:; BB(0x0042ed6c);
    /* 0042ed6c: mov eax, dword ptr [ebx + 0x660] */ r_eax = R32((u32)(r_ebx+0x660u));
    /* 0042ed72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ed74: jne 0x42ed7d */ if (!fZ) goto L_0042ed7d;
L_0042ed76:; BB(0x0042ed76);
    /* 0042ed76: mov eax, 5 */ r_eax = 0x5u;
    /* 0042ed7b: jmp 0x42eda2 */ goto L_0042eda2;
L_0042ed7d:; BB(0x0042ed7d);
    /* 0042ed7d: mov eax, 9 */ r_eax = 0x9u;
    /* 0042ed82: jmp 0x42eda2 */ goto L_0042eda2;
L_0042eda2:; BB(0x0042eda2);
    /* 0042eda2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eda3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042eda5: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42edaau); f_0042abf8();
    /* 0042edaa: jmp 0x42ec21 */ goto L_0042ec21;
}

void f_0042ed84(void)
{
    FN_ENTER(0x0042ed84);
    goto L_0042ed84;
L_0042ec21:; BB(0x0042ec21);
    /* 0042ec21: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ec24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ec25: ret 8 */ FN_RET(0x0042ed84); r_esp += 12; return;
L_0042ed84:; BB(0x0042ed84);
    /* 0042ed84: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042ed86: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42ed8bu); f_00520bf4();
    /* 0042ed8b: fcomp dword ptr [0x8fcf8c] */ fx_compare(ST(0), R_F32((u32)(0x8fcf8cu))); FPOP();
    /* 0042ed91: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042ed93: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042ed94: jbe 0x42ed9d */ if ((fC||fZ)) goto L_0042ed9d;
L_0042ed96:; BB(0x0042ed96);
    /* 0042ed96: mov eax, 8 */ r_eax = 0x8u;
    /* 0042ed9b: jmp 0x42eda2 */ goto L_0042eda2;
L_0042ed9d:; BB(0x0042ed9d);
    /* 0042ed9d: mov eax, 6 */ r_eax = 0x6u;
L_0042eda2:; BB(0x0042eda2);
    /* 0042eda2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eda3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042eda5: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42edaau); f_0042abf8();
    /* 0042edaa: jmp 0x42ec21 */ goto L_0042ec21;
}

void f_0042eda2(void)
{
    FN_ENTER(0x0042eda2);
    goto L_0042eda2;
L_0042ec21:; BB(0x0042ec21);
    /* 0042ec21: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042ec24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042ec25: ret 8 */ FN_RET(0x0042eda2); r_esp += 12; return;
L_0042eda2:; BB(0x0042eda2);
    /* 0042eda2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042eda3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042eda5: call 0x42abf8 */ r_esp -= 4; W32(r_esp, 0x42edaau); f_0042abf8();
    /* 0042edaa: jmp 0x42ec21 */ goto L_0042ec21;
}

void f_0042ee78(void) /* sub_42EE78 */
{
    FN_ENTER(0x0042ee78);
    /* 0042ee78: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0042ee7e: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0042ee85: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0042ee8c: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 0042ee93: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 0042ee9a: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 0042eea1: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 0042eea8: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 0042eeaf: ret  */ FN_RET(0x0042ee78); r_esp += 4; return;
}

void f_0042eeb0(void) /* sub_42EEB0 */
{
    FN_ENTER(0x0042eeb0);
    /* 0042eeb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042eeb1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042eeb2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0042eeb4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0042eeb8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042eebb: je 0x42eee2 */ if (fZ) goto L_0042eee2;
L_0042eebd:; BB(0x0042eebd);
    /* 0042eebd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042eec0: je 0x42eedd */ if (fZ) goto L_0042eedd;
L_0042eec2:; BB(0x0042eec2);
    /* 0042eec2: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042eec5: je 0x42eedd */ if (fZ) goto L_0042eedd;
L_0042eec7:; BB(0x0042eec7);
    /* 0042eec7: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042eeca: je 0x42eedd */ if (fZ) goto L_0042eedd;
L_0042eecc:; BB(0x0042eecc);
    /* 0042eecc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042eece: jne 0x42eedd */ if (!fZ) goto L_0042eedd;
L_0042eed0:; BB(0x0042eed0);
    /* 0042eed0: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0042eed4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042eed9: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_0042eedd:; BB(0x0042eedd);
    /* 0042eedd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042eede: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042eedf: ret 4 */ FN_RET(0x0042eeb0); r_esp += 8; return;
L_0042eee2:; BB(0x0042eee2);
    /* 0042eee2: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0042eee4: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0042eee9: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0042eef0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042eef2: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x42eef8u); call_ind(t); }
    /* 0042eef8: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0042eefb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042eefd: mov esi, eax */ r_esi = r_eax;
L_0042eeff:; BB(0x0042eeff);
    /* 0042eeff: mov ecx, dword ptr [ebx + esi*4 + 0x5e8] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x5e8u));
    /* 0042ef06: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042ef08: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x42ef0eu); call_ind(t); }
    /* 0042ef0e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042ef11: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042ef14: jl 0x42eeff */ if ((fS!=fO)) goto L_0042eeff;
L_0042ef16:; BB(0x0042ef16);
    /* 0042ef16: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0042ef19: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0042ef1f: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042ef22: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042ef27: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0042ef2d: call 0x43c3ec */ r_esp -= 4; W32(r_esp, 0x42ef32u); f_0043c3ec();
    /* 0042ef32: call 0x43c45c */ r_esp -= 4; W32(r_esp, 0x42ef37u); f_0043c45c();
    /* 0042ef37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042ef39: je 0x42eedd */ if (fZ) goto L_0042eedd;
L_0042ef3b:; BB(0x0042ef3b);
    /* 0042ef3b: call 0x43c40c */ r_esp -= 4; W32(r_esp, 0x42ef40u); f_0043c40c();
    /* 0042ef40: jmp 0x42eedd */ goto L_0042eedd;
}

void f_0042ef44(void) /* sub_42EF44 */
{
    FN_ENTER(0x0042ef44);
    /* 0042ef44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042ef45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042ef46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042ef47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ef48: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042ef4b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0042ef4d: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0042ef51: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ef54: je 0x42f610 */ if (fZ) goto L_0042f610;
L_0042ef5a:; BB(0x0042ef5a);
    /* 0042ef5a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ef5d: je 0x42f585 */ if (fZ) goto L_0042f585;
L_0042ef63:; BB(0x0042ef63);
    /* 0042ef63: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ef66: je 0x42f52d */ if (fZ) goto L_0042f52d;
L_0042ef6c:; BB(0x0042ef6c);
    /* 0042ef6c: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ef6f: je 0x42f45f */ if (fZ) goto L_0042f45f;
L_0042ef75:; BB(0x0042ef75);
    /* 0042ef75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ef77: je 0x42f01c */ if (fZ) goto L_0042f01c;
L_0042ef7d:; BB(0x0042ef7d);
    /* 0042ef7d: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ef80: je 0x42f45f */ if (fZ) goto L_0042f45f;
L_0042ef86:; BB(0x0042ef86);
    /* 0042ef86: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ef89: jne 0x42f45f */ if (!fZ) goto L_0042f45f;
L_0042ef8f:; BB(0x0042ef8f);
    /* 0042ef8f: mov ebp, dword ptr [ebx + 0x38] */ r_ebp = R32((u32)(r_ebx+0x38u));
    /* 0042ef92: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 0042ef95: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 0042ef98: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042ef9a: mov dword ptr [ebx + 0x38], 0xc25f3333 */ W32((u32)(r_ebx+0x38u), 0xc25f3333u);
    /* 0042efa1: mov dword ptr [ebx + 0x3c], 0x40000000 */ W32((u32)(r_ebx+0x3cu), 0x40000000u);
    /* 0042efa8: mov dword ptr [ebx + 0x40], 0x427128f6 */ W32((u32)(r_ebx+0x40u), 0x427128f6u);
    /* 0042efaf: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x42efb4u); f_0078730c();
    /* 0042efb4: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 0042efb8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042efba: mov ebp, eax */ r_ebp = r_eax;
L_0042efbc:; BB(0x0042efbc);
    /* 0042efbc: push dword ptr [ebx + ebp*4 + 0x5e8] */ { u32 v = R32((u32)(r_ebx+r_ebp*4+0x5e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042efc3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042efc5: call 0x7776d0 */ r_esp -= 4; W32(r_esp, 0x42efcau); f_007776d0();
    /* 0042efca: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0042efcd: cmp ebp, 0xa */ {  u32 a = r_ebp; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042efd0: jl 0x42efbc */ if ((fS!=fO)) goto L_0042efbc;
L_0042efd2:; BB(0x0042efd2);
    /* 0042efd2: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 0042efd6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042efd8: call 0x51f894 */ r_esp -= 4; W32(r_esp, 0x42efddu); f_0051f894();
    /* 0042efdd: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0042efdf: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x42efe4u); f_006bb100();
    /* 0042efe4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042efe5: mov dword ptr [ebx + 0x38], ebp */ W32((u32)(r_ebx+0x38u), r_ebp);
    /* 0042efe8: mov dword ptr [ebx + 0x3c], edi */ W32((u32)(r_ebx+0x3cu), r_edi);
    /* 0042efeb: mov dword ptr [ebx + 0x40], esi */ W32((u32)(r_ebx+0x40u), r_esi);
    /* 0042efee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042eff0: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x42eff5u); f_0078730c();
    /* 0042eff5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042eff7: mov dword ptr [ebx + 0x30], 0x12008 */ W32((u32)(r_ebx+0x30u), 0x12008u);
    /* 0042effe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f000: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f002: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x42f008u); call_ind(t); }
    /* 0042f008: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x42f00du); f_00717f38();
    /* 0042f00d: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x42f012u); f_004d3250();
    /* 0042f012: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f015: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f016: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042f017: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042f018: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042f019: ret 4 */ FN_RET(0x0042ef44); r_esp += 8; return;
L_0042f01c:; BB(0x0042f01c);
    /* 0042f01c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f01e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x42f023u); f_007aa094();
    /* 0042f023: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042f029: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f02b: je 0x42f0b9 */ if (fZ) goto L_0042f0b9;
L_0042f031:; BB(0x0042f031);
    /* 0042f031: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f034: jne 0x42f071 */ if (!fZ) goto L_0042f071;
L_0042f036:; BB(0x0042f036);
    /* 0042f036: mov ecx, dword ptr [ebx + 0x6fc] */ r_ecx = R32((u32)(r_ebx+0x6fcu));
    /* 0042f03c: add ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042f042: mov dword ptr [ebx + 0x6fc], ecx */ W32((u32)(r_ebx+0x6fcu), r_ecx);
    /* 0042f048: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x42f04du); f_0082ddd8();
    /* 0042f04d: fld dword ptr [0x8fcf78] */ FPUSH(R_F32((u32)(0x8fcf78u)));
    /* 0042f053: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042f055: fmul dword ptr [0x8fcf58] */ ST(0) = ST(0) * R_F32((u32)(0x8fcf58u));
    /* 0042f05b: fmul dword ptr [0x8fcf74] */ ST(0) = ST(0) * R_F32((u32)(0x8fcf74u));
    /* 0042f061: fstp dword ptr [ebx + 0x6ac] */ W_F32((u32)(r_ebx+0x6acu), ST(0)); FPOP();
    /* 0042f067: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f06a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f06b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042f06c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042f06d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042f06e: ret 4 */ FN_RET(0x0042ef44); r_esp += 8; return;
L_0042f071:; BB(0x0042f071);
    /* 0042f071: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f074: jne 0x42f45f */ if (!fZ) goto L_0042f45f;
L_0042f07a:; BB(0x0042f07a);
    /* 0042f07a: fld dword ptr [ebx + 0x6ac] */ FPUSH(R_F32((u32)(r_ebx+0x6acu)));
    /* 0042f080: fsub dword ptr [0x8fcf60] */ ST(0) = ST(0) - R_F32((u32)(0x8fcf60u));
    /* 0042f086: fcom dword ptr [0x8fcf5c] */ fx_compare(ST(0), R_F32((u32)(0x8fcf5cu))); 
    /* 0042f08c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f08e: fstp dword ptr [ebx + 0x6ac] */ W_F32((u32)(r_ebx+0x6acu), ST(0)); FPOP();
    /* 0042f094: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f095: jae 0x42f45f */ if (!fC) goto L_0042f45f;
L_0042f09b:; BB(0x0042f09b);
    /* 0042f09b: mov dword ptr [ebx + 0x6e8], 3 */ W32((u32)(r_ebx+0x6e8u), 0x3u);
    /* 0042f0a5: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x42f0aau); f_00717f38();
    /* 0042f0aa: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x42f0afu); f_004d3250();
    /* 0042f0af: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f0b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f0b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042f0b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042f0b5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042f0b6: ret 4 */ FN_RET(0x0042ef44); r_esp += 8; return;
L_0042f0b9:; BB(0x0042f0b9);
    /* 0042f0b9: push 0x41d80000 */ { u32 v = 0x41d80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f0be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f0c0: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x42f0c5u); f_007aaa30();
    /* 0042f0c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f0c7: je 0x42f0d6 */ if (fZ) goto L_0042f0d6;
L_0042f0c9:; BB(0x0042f0c9);
    /* 0042f0c9: push 0x8fd420 */ { u32 v = 0x8fd420u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f0ce: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x42f0d3u); f_00814f0c();
    /* 0042f0d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042f0d4: jmp 0x42f128 */ goto L_0042f128;
L_0042f0d6:; BB(0x0042f0d6);
    /* 0042f0d6: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f0db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f0dd: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x42f0e2u); f_007aaa30();
    /* 0042f0e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f0e4: je 0x42f0fa */ if (fZ) goto L_0042f0fa;
L_0042f0e6:; BB(0x0042f0e6);
    /* 0042f0e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042f0e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f0e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f0ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f0eb: push 0x338 */ { u32 v = 0x338u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f0f0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x42f0f5u); f_00814298();
    /* 0042f0f5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042f0f8: jmp 0x42f128 */ goto L_0042f128;
L_0042f0fa:; BB(0x0042f0fa);
    /* 0042f0fa: push 0x42c60000 */ { u32 v = 0x42c60000u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f0ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f101: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x42f106u); f_007aaa30();
    /* 0042f106: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f108: je 0x42f128 */ if (fZ) goto L_0042f128;
L_0042f10a:; BB(0x0042f10a);
    /* 0042f10a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042f10c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f10d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f10e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f10f: push 0x339 */ { u32 v = 0x339u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f114: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x42f119u); f_00814298();
    /* 0042f119: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0042f11b: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f120: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x42f125u); f_006ff5f8();
    /* 0042f125: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042f128:; BB(0x0042f128);
    /* 0042f128: fld dword ptr [0x8fcf54] */ FPUSH(R_F32((u32)(0x8fcf54u)));
    /* 0042f12e: mov edx, dword ptr [ebx + 0x6ec] */ r_edx = R32((u32)(r_ebx+0x6ecu));
    /* 0042f134: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042f13a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0042f13c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f13e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042f141: mov dword ptr [ebx + 0x6ec], edx */ W32((u32)(r_ebx+0x6ecu), r_edx);
    /* 0042f147: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f148: jb 0x42f379 */ if (fC) goto L_0042f379;
L_0042f14e:; BB(0x0042f14e);
    /* 0042f14e: fcom dword ptr [0x8fcf50] */ fx_compare(ST(0), R_F32((u32)(0x8fcf50u))); 
    /* 0042f154: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f156: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f157: ja 0x42f379 */ if ((!fC&&!fZ)) goto L_0042f379;
L_0042f15d:; BB(0x0042f15d);
    /* 0042f15d: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0042f161: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 0042f165: fcomp dword ptr [0x8fcf4c] */ fx_compare(ST(0), R_F32((u32)(0x8fcf4cu))); FPOP();
    /* 0042f16b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f16d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f16e: jb 0x42f435 */ if (fC) goto L_0042f435;
L_0042f174:; BB(0x0042f174);
    /* 0042f174: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042f176: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042f178: fld dword ptr [0x8fcf64] */ FPUSH(R_F32((u32)(0x8fcf64u)));
    /* 0042f17e: mov edi, dword ptr [ebx + 0x38] */ r_edi = R32((u32)(r_ebx+0x38u));
    /* 0042f181: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0042f184: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0042f187: mov ebp, dword ptr [ebx + 0x40] */ r_ebp = R32((u32)(r_ebx+0x40u));
    /* 0042f18a: fld dword ptr [ebx + 0x54c] */ FPUSH(R_F32((u32)(r_ebx+0x54cu)));
    /* 0042f190: mov edx, dword ptr [ebx + 0x54c] */ r_edx = R32((u32)(r_ebx+0x54cu));
    /* 0042f196: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042f198: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042f19a: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042f19c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f19e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f19f: mov dword ptr [ebx + 0x6ec], 0 */ W32((u32)(r_ebx+0x6ecu), 0x0u);
    /* 0042f1a9: jb 0x42f519 */ if (fC) goto L_0042f519;
L_0042f1af:; BB(0x0042f1af);
    /* 0042f1af: mov edi, dword ptr [ebx + 0x548] */ r_edi = R32((u32)(r_ebx+0x548u));
    /* 0042f1b5: mov esi, dword ptr [ebx + 0x550] */ r_esi = R32((u32)(r_ebx+0x550u));
    /* 0042f1bb: fld dword ptr [ebx + 0x558] */ FPUSH(R_F32((u32)(r_ebx+0x558u)));
    /* 0042f1c1: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042f1c3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042f1c5: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042f1c7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f1c9: mov ebp, dword ptr [ebx + 0x558] */ r_ebp = R32((u32)(r_ebx+0x558u));
    /* 0042f1cf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f1d0: jb 0x42f505 */ if (fC) goto L_0042f505;
L_0042f1d6:; BB(0x0042f1d6);
    /* 0042f1d6: mov edi, dword ptr [ebx + 0x554] */ r_edi = R32((u32)(r_ebx+0x554u));
    /* 0042f1dc: mov esi, dword ptr [ebx + 0x55c] */ r_esi = R32((u32)(r_ebx+0x55cu));
    /* 0042f1e2: fld dword ptr [ebx + 0x564] */ FPUSH(R_F32((u32)(r_ebx+0x564u)));
    /* 0042f1e8: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042f1ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042f1ec: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042f1ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f1f0: mov edx, dword ptr [ebx + 0x564] */ r_edx = R32((u32)(r_ebx+0x564u));
    /* 0042f1f6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f1f7: jb 0x42f4f1 */ if (fC) goto L_0042f4f1;
L_0042f1fd:; BB(0x0042f1fd);
    /* 0042f1fd: mov edi, dword ptr [ebx + 0x560] */ r_edi = R32((u32)(r_ebx+0x560u));
    /* 0042f203: mov esi, dword ptr [ebx + 0x568] */ r_esi = R32((u32)(r_ebx+0x568u));
    /* 0042f209: fld dword ptr [ebx + 0x570] */ FPUSH(R_F32((u32)(r_ebx+0x570u)));
    /* 0042f20f: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042f211: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042f213: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042f215: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f217: mov ebp, dword ptr [ebx + 0x570] */ r_ebp = R32((u32)(r_ebx+0x570u));
    /* 0042f21d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f21e: jb 0x42f4dd */ if (fC) goto L_0042f4dd;
L_0042f224:; BB(0x0042f224);
    /* 0042f224: mov edi, dword ptr [ebx + 0x56c] */ r_edi = R32((u32)(r_ebx+0x56cu));
    /* 0042f22a: mov esi, dword ptr [ebx + 0x574] */ r_esi = R32((u32)(r_ebx+0x574u));
    /* 0042f230: fld dword ptr [ebx + 0x57c] */ FPUSH(R_F32((u32)(r_ebx+0x57cu)));
    /* 0042f236: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042f238: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042f23a: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042f23c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f23e: mov edx, dword ptr [ebx + 0x57c] */ r_edx = R32((u32)(r_ebx+0x57cu));
    /* 0042f244: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f245: jb 0x42f4c9 */ if (fC) goto L_0042f4c9;
L_0042f24b:; BB(0x0042f24b);
    /* 0042f24b: mov edi, dword ptr [ebx + 0x578] */ r_edi = R32((u32)(r_ebx+0x578u));
    /* 0042f251: mov esi, dword ptr [ebx + 0x580] */ r_esi = R32((u32)(r_ebx+0x580u));
    /* 0042f257: fld dword ptr [ebx + 0x588] */ FPUSH(R_F32((u32)(r_ebx+0x588u)));
    /* 0042f25d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042f25f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042f261: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042f263: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f265: mov ebp, dword ptr [ebx + 0x588] */ r_ebp = R32((u32)(r_ebx+0x588u));
    /* 0042f26b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f26c: jb 0x42f4b5 */ if (fC) goto L_0042f4b5;
L_0042f272:; BB(0x0042f272);
    /* 0042f272: mov edi, dword ptr [ebx + 0x584] */ r_edi = R32((u32)(r_ebx+0x584u));
    /* 0042f278: mov esi, dword ptr [ebx + 0x58c] */ r_esi = R32((u32)(r_ebx+0x58cu));
    /* 0042f27e: fld dword ptr [ebx + 0x594] */ FPUSH(R_F32((u32)(r_ebx+0x594u)));
    /* 0042f284: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042f286: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042f288: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042f28a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f28c: mov edx, dword ptr [ebx + 0x594] */ r_edx = R32((u32)(r_ebx+0x594u));
    /* 0042f292: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f293: jb 0x42f4a1 */ if (fC) goto L_0042f4a1;
L_0042f299:; BB(0x0042f299);
    /* 0042f299: mov edi, dword ptr [ebx + 0x590] */ r_edi = R32((u32)(r_ebx+0x590u));
    /* 0042f29f: mov esi, dword ptr [ebx + 0x598] */ r_esi = R32((u32)(r_ebx+0x598u));
    /* 0042f2a5: fld dword ptr [ebx + 0x5a0] */ FPUSH(R_F32((u32)(r_ebx+0x5a0u)));
    /* 0042f2ab: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042f2ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042f2af: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042f2b1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f2b3: mov ebp, dword ptr [ebx + 0x5a0] */ r_ebp = R32((u32)(r_ebx+0x5a0u));
    /* 0042f2b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f2ba: jb 0x42f48d */ if (fC) goto L_0042f48d;
L_0042f2c0:; BB(0x0042f2c0);
    /* 0042f2c0: mov edi, dword ptr [ebx + 0x59c] */ r_edi = R32((u32)(r_ebx+0x59cu));
    /* 0042f2c6: mov esi, dword ptr [ebx + 0x5a4] */ r_esi = R32((u32)(r_ebx+0x5a4u));
    /* 0042f2cc: fld dword ptr [ebx + 0x5ac] */ FPUSH(R_F32((u32)(r_ebx+0x5acu)));
    /* 0042f2d2: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0042f2d4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042f2d6: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0042f2d8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f2da: mov edx, dword ptr [ebx + 0x5ac] */ r_edx = R32((u32)(r_ebx+0x5acu));
    /* 0042f2e0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f2e1: jb 0x42f479 */ if (fC) goto L_0042f479;
L_0042f2e7:; BB(0x0042f2e7);
    /* 0042f2e7: mov edi, dword ptr [ebx + 0x5a8] */ r_edi = R32((u32)(r_ebx+0x5a8u));
    /* 0042f2ed: mov esi, dword ptr [ebx + 0x5b0] */ r_esi = R32((u32)(r_ebx+0x5b0u));
    /* 0042f2f3: fld dword ptr [ebx + 0x5b8] */ FPUSH(R_F32((u32)(r_ebx+0x5b8u)));
    /* 0042f2f9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042f2fb: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0042f2fd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f2ff: mov ebp, dword ptr [ebx + 0x5b8] */ r_ebp = R32((u32)(r_ebx+0x5b8u));
    /* 0042f305: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f306: jb 0x42f469 */ if (fC) goto L_0042f469;
L_0042f30c:; BB(0x0042f30c);
    /* 0042f30c: mov eax, dword ptr [ebx + 0x5b4] */ r_eax = R32((u32)(r_ebx+0x5b4u));
    /* 0042f312: mov edx, dword ptr [ebx + 0x5bc] */ r_edx = R32((u32)(r_ebx+0x5bcu));
    /* 0042f318: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0042f31b: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0042f31f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
L_0042f323:; BB(0x0042f323);
    /* 0042f323: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f325: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42f32au); f_00520bf4();
    /* 0042f32a: fld dword ptr [0x8fcf48] */ FPUSH(R_F32((u32)(0x8fcf48u)));
    /* 0042f330: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042f332: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0042f335: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0042f338: mov dword ptr [esp + 4], 0xc0a00000 */ W32((u32)(r_esp+0x4u), 0xc0a00000u);
    /* 0042f340: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f342: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x42f347u); f_007751b0();
    /* 0042f347: fld dword ptr [0x8fcf44] */ FPUSH(R_F32((u32)(0x8fcf44u)));
    /* 0042f34d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0042f34f: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0042f353: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0042f357: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0042f35a: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f35f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f360: call 0x43aaec */ r_esp -= 4; W32(r_esp, 0x42f365u); f_0043aaec();
    /* 0042f365: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042f368: fld dword ptr [0x8fcf54] */ FPUSH(R_F32((u32)(0x8fcf54u)));
    /* 0042f36e: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0042f374: jmp 0x42f435 */ goto L_0042f435;
L_0042f379:; BB(0x0042f379);
    /* 0042f379: fcom dword ptr [0x8fcf40] */ fx_compare(ST(0), R_F32((u32)(0x8fcf40u))); 
    /* 0042f37f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f381: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f382: jb 0x42f435 */ if (fC) goto L_0042f435;
L_0042f388:; BB(0x0042f388);
    /* 0042f388: fcom dword ptr [0x8fcf3c] */ fx_compare(ST(0), R_F32((u32)(0x8fcf3cu))); 
    /* 0042f38e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f390: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f391: ja 0x42f435 */ if ((!fC&&!fZ)) goto L_0042f435;
L_0042f397:; BB(0x0042f397);
    /* 0042f397: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0042f39b: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 0042f39f: fcomp dword ptr [0x8fcf4c] */ fx_compare(ST(0), R_F32((u32)(0x8fcf4cu))); FPOP();
    /* 0042f3a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f3a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f3a8: jb 0x42f435 */ if (fC) goto L_0042f435;
L_0042f3ae:; BB(0x0042f3ae);
    /* 0042f3ae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042f3b0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042f3b2: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0042f3b5: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0042f3b8: mov ebp, dword ptr [ebx + 0x40] */ r_ebp = R32((u32)(r_ebx+0x40u));
    /* 0042f3bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f3bd: mov dword ptr [ebx + 0x6ec], 0 */ W32((u32)(r_ebx+0x6ecu), 0x0u);
    /* 0042f3c7: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0042f3cb: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0042f3cf: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0042f3d3: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42f3d8u); f_00520bf4();
    /* 0042f3d8: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0042f3dc: fadd dword ptr [0x8fcf38] */ ST(0) = ST(0) + R_F32((u32)(0x8fcf38u));
    /* 0042f3e2: fld dword ptr [0x8fcf34] */ FPUSH(R_F32((u32)(0x8fcf34u)));
    /* 0042f3e8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0042f3ea: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042f3ec: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0042f3f0: mov dword ptr [esp + 0x10], 0xc0a00000 */ W32((u32)(r_esp+0x10u), 0xc0a00000u);
    /* 0042f3f8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f3fa: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x42f3ffu); f_00520bf4();
    /* 0042f3ff: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0042f403: fadd dword ptr [0x8fcf30] */ ST(0) = ST(0) + R_F32((u32)(0x8fcf30u));
    /* 0042f409: fld dword ptr [0x8fcf2c] */ FPUSH(R_F32((u32)(0x8fcf2cu)));
    /* 0042f40f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0042f411: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0042f413: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0042f417: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0042f41b: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f421: call 0x43aaec */ r_esp -= 4; W32(r_esp, 0x42f426u); f_0043aaec();
    /* 0042f426: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042f429: fld dword ptr [0x8fcf54] */ FPUSH(R_F32((u32)(0x8fcf54u)));
    /* 0042f42f: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
L_0042f435:; BB(0x0042f435);
    /* 0042f435: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0042f437: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042f439: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042f43b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f43d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f43e: jb 0x42f44a */ if (fC) goto L_0042f44a;
L_0042f440:; BB(0x0042f440);
    /* 0042f440: mov dword ptr [ebx + 0x760], 5 */ W32((u32)(r_ebx+0x760u), 0x5u);
L_0042f44a:; BB(0x0042f44a);
    /* 0042f44a: fcomp dword ptr [0x8fcf28] */ fx_compare(ST(0), R_F32((u32)(0x8fcf28u))); FPOP();
    /* 0042f450: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0042f452: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042f453: jbe 0x42f45f */ if ((fC||fZ)) goto L_0042f45f;
L_0042f455:; BB(0x0042f455);
    /* 0042f455: mov dword ptr [ebx + 0x6e8], 2 */ W32((u32)(r_ebx+0x6e8u), 0x2u);
L_0042f45f:; BB(0x0042f45f);
    /* 0042f45f: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f462: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f463: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042f464: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042f465: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042f466: ret 4 */ FN_RET(0x0042ef44); r_esp += 8; return;
L_0042f469:; BB(0x0042f469);
    /* 0042f469: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0042f46d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0042f471: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0042f474: jmp 0x42f323 */ goto L_0042f323;
L_0042f479:; BB(0x0042f479);
    /* 0042f479: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042f47b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042f47d: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0042f481: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0042f485: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0042f488: jmp 0x42f323 */ goto L_0042f323;
L_0042f48d:; BB(0x0042f48d);
    /* 0042f48d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042f48f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042f491: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0042f495: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0042f499: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0042f49c: jmp 0x42f323 */ goto L_0042f323;
L_0042f4a1:; BB(0x0042f4a1);
    /* 0042f4a1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042f4a3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042f4a5: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0042f4a9: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0042f4ad: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0042f4b0: jmp 0x42f323 */ goto L_0042f323;
L_0042f4b5:; BB(0x0042f4b5);
    /* 0042f4b5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042f4b7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042f4b9: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0042f4bd: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0042f4c1: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0042f4c4: jmp 0x42f323 */ goto L_0042f323;
L_0042f4c9:; BB(0x0042f4c9);
    /* 0042f4c9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042f4cb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042f4cd: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0042f4d1: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0042f4d5: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0042f4d8: jmp 0x42f323 */ goto L_0042f323;
L_0042f4dd:; BB(0x0042f4dd);
    /* 0042f4dd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042f4df: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042f4e1: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0042f4e5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0042f4e9: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0042f4ec: jmp 0x42f323 */ goto L_0042f323;
L_0042f4f1:; BB(0x0042f4f1);
    /* 0042f4f1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042f4f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042f4f5: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0042f4f9: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0042f4fd: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0042f500: jmp 0x42f323 */ goto L_0042f323;
L_0042f505:; BB(0x0042f505);
    /* 0042f505: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042f507: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042f509: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0042f50d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0042f511: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0042f514: jmp 0x42f323 */ goto L_0042f323;
L_0042f519:; BB(0x0042f519);
    /* 0042f519: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0042f51b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0042f51d: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0042f521: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0042f525: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0042f528: jmp 0x42f323 */ goto L_0042f323;
L_0042f52d:; BB(0x0042f52d);
    /* 0042f52d: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 0042f533: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f536: jne 0x42f45f */ if (!fZ) goto L_0042f45f;
L_0042f53c:; BB(0x0042f53c);
    /* 0042f53c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f53e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f540: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042f542: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f544: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42f54au); call_ind(t); }
    /* 0042f54a: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0042f54e: mov ebx, dword ptr [ebx + 0x3dc] */ r_ebx = R32((u32)(r_ebx+0x3dcu));
    /* 0042f554: mov byte ptr [esp + 0x18], 0x13 */ W8((u32)(r_esp+0x18u), 0x13u);
    /* 0042f559: mov edx, 0x20 */ r_edx = 0x20u;
    /* 0042f55e: mov byte ptr [esp + 0x19], 2 */ W8((u32)(r_esp+0x19u), 0x2u);
    /* 0042f563: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 0042f568: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 0042f56d: mov word ptr [esp + 0x1e], bx */ W16((u32)(r_esp+0x1eu), (u16)r_ebx);
    /* 0042f572: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0042f576: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42f57bu); f_008003e0();
    /* 0042f57b: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f57e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f57f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042f580: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042f581: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042f582: ret 4 */ FN_RET(0x0042ef44); r_esp += 8; return;
L_0042f585:; BB(0x0042f585);
    /* 0042f585: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0042f58b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0042f58e: test dword ptr [0xa0f67c], edx */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042f594: je 0x42f45f */ if (fZ) goto L_0042f45f;
L_0042f59a:; BB(0x0042f59a);
    /* 0042f59a: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0042f59d: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0042f59f: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042f5a4: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0042f5a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f5a9: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x42f5afu); call_ind(t); }
    /* 0042f5af: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0042f5b1:; BB(0x0042f5b1);
    /* 0042f5b1: mov ecx, dword ptr [ebx + ebp*4 + 0x5e8] */ r_ecx = R32((u32)(r_ebx+r_ebp*4+0x5e8u));
    /* 0042f5b8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0042f5ba: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x42f5c0u); call_ind(t); }
    /* 0042f5c0: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0042f5c3: cmp ebp, 0xa */ {  u32 a = r_ebp; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042f5c6: jl 0x42f5b1 */ if ((fS!=fO)) goto L_0042f5b1;
L_0042f5c8:; BB(0x0042f5c8);
    /* 0042f5c8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f5ca: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f5cc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0042f5ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f5d0: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x42f5d6u); call_ind(t); }
    /* 0042f5d6: movzx ebp, word ptr [ebx + 0x1c] */ r_ebp = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0042f5da: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 0042f5e0: mov byte ptr [esp + 0x20], 0x13 */ W8((u32)(r_esp+0x20u), 0x13u);
    /* 0042f5e5: mov eax, 2 */ r_eax = 0x2u;
    /* 0042f5ea: mov byte ptr [esp + 0x21], al */ W8((u32)(r_esp+0x21u), (u8)r_eax);
    /* 0042f5ee: mov word ptr [esp + 0x22], bp */ W16((u32)(r_esp+0x22u), (u16)r_ebp);
    /* 0042f5f3: mov word ptr [esp + 0x24], ax */ W16((u32)(r_esp+0x24u), (u16)r_eax);
    /* 0042f5f8: mov word ptr [esp + 0x26], dx */ W16((u32)(r_esp+0x26u), (u16)r_edx);
    /* 0042f5fd: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 0042f601: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x42f606u); f_008003e0();
    /* 0042f606: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f609: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f60a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042f60b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042f60c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042f60d: ret 4 */ FN_RET(0x0042ef44); r_esp += 8; return;
L_0042f610:; BB(0x0042f610);
    /* 0042f610: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0042f616: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0042f618: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042f61d: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042f620: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0042f626: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f628: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x42f62eu); call_ind(t); }
    /* 0042f62e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0042f630:; BB(0x0042f630);
    /* 0042f630: mov ecx, dword ptr [ebx + ebp*4 + 0x5e8] */ r_ecx = R32((u32)(r_ebx+r_ebp*4+0x5e8u));
    /* 0042f637: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0042f639: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x42f63fu); call_ind(t); }
    /* 0042f63f: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0042f642: cmp ebp, 0xa */ {  u32 a = r_ebp; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042f645: jl 0x42f630 */ if ((fS!=fO)) goto L_0042f630;
L_0042f647:; BB(0x0042f647);
    /* 0042f647: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0042f64c: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0042f653: mov edx, 3 */ r_edx = 0x3u;
    /* 0042f658: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f659: mov dword ptr [ebx + 0x65c], edx */ W32((u32)(r_ebx+0x65cu), r_edx);
    /* 0042f65f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0042f661: call 0x42c154 */ r_esp -= 4; W32(r_esp, 0x42f666u); f_0042c154();
    /* 0042f666: mov dword ptr [ebx + 0x6ac], 0 */ W32((u32)(r_ebx+0x6acu), 0x0u);
    /* 0042f670: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042f672: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0042f675: mov dword ptr [ebx + 0x6e8], eax */ W32((u32)(r_ebx+0x6e8u), r_eax);
    /* 0042f67b: mov dword ptr [ebx + 0x6ec], eax */ W32((u32)(r_ebx+0x6ecu), r_eax);
    /* 0042f681: mov dword ptr [ebx + 0x6fc], eax */ W32((u32)(r_ebx+0x6fcu), r_eax);
    /* 0042f687: mov dword ptr [ebx + 0x6b4], eax */ W32((u32)(r_ebx+0x6b4u), r_eax);
    /* 0042f68d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0042f68f:; BB(0x0042f68f);
    /* 0042f68f: mov ecx, dword ptr [ebx + ebp*4 + 0x628] */ r_ecx = R32((u32)(r_ebx+r_ebp*4+0x628u));
    /* 0042f696: call 0x4393fc */ r_esp -= 4; W32(r_esp, 0x42f69bu); f_004393fc();
    /* 0042f69b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0042f69e: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042f6a1: jl 0x42f68f */ if ((fS!=fO)) goto L_0042f68f;
L_0042f6a3:; BB(0x0042f6a3);
    /* 0042f6a3: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x42f6a8u); f_00717f74();
    /* 0042f6a8: mov byte ptr [esp + 0x28], 2 */ W8((u32)(r_esp+0x28u), 0x2u);
    /* 0042f6ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042f6af: mov byte ptr [esp + 0x29], al */ W8((u32)(r_esp+0x29u), (u8)r_eax);
    /* 0042f6b3: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 0042f6bb: mov word ptr [esp + 0x2a], ax */ W16((u32)(r_esp+0x2au), (u16)r_eax);
    /* 0042f6c0: mov dword ptr [esp + 0x30], 0x3f333333 */ W32((u32)(r_esp+0x30u), 0x3f333333u);
    /* 0042f6c8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f6ca: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x42f6cfu); f_004d31f4();
    /* 0042f6cf: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 0042f6d3: push 0x2aaa */ { u32 v = 0x2aaau; r_esp -= 4; W32(r_esp, v); }
    /* 0042f6d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f6d9: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x42f6deu); f_004d6770();
    /* 0042f6de: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0042f6e1: add ebx, 0x5c */ {  u32 a = r_ebx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0042f6e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f6e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f6e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f6e7: call 0x4d681c */ r_esp -= 4; W32(r_esp, 0x42f6ecu); f_004d681c();
    /* 0042f6ec: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042f6ef: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0042f6f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042f6f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042f6f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042f6f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042f6f6: ret 4 */ FN_RET(0x0042ef44); r_esp += 8; return;
}

