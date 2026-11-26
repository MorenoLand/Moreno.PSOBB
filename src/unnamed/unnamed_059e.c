#include "protos.h"

void f_0059e01c(void)
{
    FN_ENTER(0x0059e01c);
    /* 0059e01c: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059e020: call 0x59e028 */ r_esp -= 4; W32(r_esp, 0x59e025u); f_0059e028();
    /* 0059e025: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059e026: ret  */ FN_RET(0x0059e01c); r_esp += 4; return;
}

void f_0059e028(void) /* sub_59E028 */
{
    FN_ENTER(0x0059e028);
    /* 0059e028: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059e029: mov ebp, esp */ r_ebp = r_esp;
    /* 0059e02b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059e02d: push 0x8d8760 */ { u32 v = 0x8d8760u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e032: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059e038: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e039: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0059e040: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059e043: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059e046: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0059e049: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0059e04c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0059e04f: push 0x454 */ { u32 v = 0x454u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e054: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0059e05b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x59e060u); f_005caba4();
    /* 0059e060: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059e061: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059e064: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e066: je 0x59e09f */ if (fZ) goto L_0059e09f;
L_0059e068:; BB(0x0059e068);
    /* 0059e068: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0059e06f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059e076: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059e079: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059e07f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059e082: call 0x59e0a4 */ r_esp -= 4; W32(r_esp, 0x59e087u); f_0059e0a4();
    /* 0059e087: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059e08a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0059e091:; BB(0x0059e091);
    /* 0059e091: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059e094: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059e09b: mov esp, ebp */ r_esp = r_ebp;
    /* 0059e09d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059e09e: ret  */ FN_RET(0x0059e028); r_esp += 4; return;
L_0059e09f:; BB(0x0059e09f);
    /* 0059e09f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059e0a1: jmp 0x59e091 */ goto L_0059e091;
}

void f_0059e0a4(void) /* sub_59E0A4 */
{
    FN_ENTER(0x0059e0a4);
    /* 0059e0a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059e0a5: mov ebp, esp */ r_ebp = r_esp;
    /* 0059e0a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059e0a9: push 0x8d877c */ { u32 v = 0x8d877cu; r_esp -= 4; W32(r_esp, v); }
    /* 0059e0ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059e0b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e0b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0059e0bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059e0bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059e0c2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0059e0c5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0059e0c8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0059e0cb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059e0ce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059e0d1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0059e0d4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059e0d7: call 0x59e138 */ r_esp -= 4; W32(r_esp, 0x59e0dcu); f_0059e138();
    /* 0059e0dc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059e0e3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e0e6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059e0e9: mov dword ptr [ecx], 0xb0a120 */ W32((u32)(r_ecx), 0xb0a120u);
    /* 0059e0ef: mov eax, dword ptr [0x9c0104] */ r_eax = R32((u32)(0x9c0104u));
    /* 0059e0f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e0f5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0059e0f8: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x59e0fdu); f_0051f750();
    /* 0059e0fd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e100: call 0x59e1a4 */ r_esp -= 4; W32(r_esp, 0x59e105u); f_0059e1a4();
    /* 0059e105: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e108: call 0x5a1be8 */ r_esp -= 4; W32(r_esp, 0x59e10du); f_005a1be8();
    /* 0059e10d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e110: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e112: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059e114: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059e116: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0059e11d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e11e: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x59e124u); call_ind(t); }
    /* 0059e124: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e127: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059e12a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059e131: mov esp, ebp */ r_esp = r_ebp;
    /* 0059e133: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059e134: ret 8 */ FN_RET(0x0059e0a4); r_esp += 12; return;
}

void f_0059e138(void) /* sub_59E138 */
{
    FN_ENTER(0x0059e138);
    /* 0059e138: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059e139: mov ebp, esp */ r_ebp = r_esp;
    /* 0059e13b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059e13d: push 0x8d8798 */ { u32 v = 0x8d8798u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e142: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059e148: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e149: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0059e150: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059e153: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059e156: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0059e159: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0059e15c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0059e15f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059e162: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0059e165: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x59e16au); f_005216f4();
    /* 0059e16a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059e171: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059e174: mov dword ptr [ecx], 0xb09f40 */ W32((u32)(r_ecx), 0xb09f40u);
    /* 0059e17a: add ecx, 0x40c */ {  u32 a = r_ecx; u32 b = 0x40cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059e180: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x59e185u); f_00576a48();
    /* 0059e185: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059e188: mov edx, dword ptr [0x9c0100] */ r_edx = R32((u32)(0x9c0100u));
    /* 0059e18e: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0059e191: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059e194: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059e19b: mov esp, ebp */ r_esp = r_ebp;
    /* 0059e19d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059e19e: ret 4 */ FN_RET(0x0059e138); r_esp += 8; return;
}

void f_0059e1a4(void) /* sub_59E1A4 */
{
    FN_ENTER(0x0059e1a4);
    /* 0059e1a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059e1a5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059e1a7: fld dword ptr [ebp + 0x35c] */ FPUSH(R_F32((u32)(r_ebp+0x35cu)));
    /* 0059e1ad: fcomp dword ptr [0x929dd0] */ fx_compare(ST(0), R_F32((u32)(0x929dd0u))); FPOP();
    /* 0059e1b3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059e1b5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059e1b6: jae 0x59e1c4 */ if (!fC) goto L_0059e1c4;
L_0059e1b8:; BB(0x0059e1b8);
    /* 0059e1b8: mov dword ptr [ebp + 0x3c8], 1 */ W32((u32)(r_ebp+0x3c8u), 0x1u);
    /* 0059e1c2: jmp 0x59e1ce */ goto L_0059e1ce;
L_0059e1c4:; BB(0x0059e1c4);
    /* 0059e1c4: mov dword ptr [ebp + 0x3c8], 0 */ W32((u32)(r_ebp+0x3c8u), 0x0u);
L_0059e1ce:; BB(0x0059e1ce);
    /* 0059e1ce: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059e1d0: call 0x59e254 */ r_esp -= 4; W32(r_esp, 0x59e1d5u); f_0059e254();
    /* 0059e1d5: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 0059e1db: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059e1de: je 0x59e243 */ if (fZ) goto L_0059e243;
L_0059e1e0:; BB(0x0059e1e0);
    /* 0059e1e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059e1e2: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_0059e1e9:; BB(0x0059e1e9);
    /* 0059e1e9: fld dword ptr [0x929dcc] */ FPUSH(R_F32((u32)(0x929dccu)));
    /* 0059e1ef: fadd dword ptr [ebp + 0x364] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x364u));
    /* 0059e1f5: fld dword ptr [0x929dc8] */ FPUSH(R_F32((u32)(0x929dc8u)));
    /* 0059e1fb: fadd dword ptr [ebp + 0x360] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x360u));
    /* 0059e201: mov eax, dword ptr [ebp + 0x370] */ r_eax = R32((u32)(r_ebp+0x370u));
    /* 0059e207: fld dword ptr [0x929dc4] */ FPUSH(R_F32((u32)(0x929dc4u)));
    /* 0059e20d: fadd dword ptr [ebp + 0x36c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x36cu));
    /* 0059e213: fld dword ptr [0x929dc0] */ FPUSH(R_F32((u32)(0x929dc0u)));
    /* 0059e219: fadd dword ptr [ebp + 0x368] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x368u));
    /* 0059e21f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0059e221: fstp dword ptr [ebp + 0x3e0] */ W_F32((u32)(r_ebp+0x3e0u), ST(0)); FPOP();
    /* 0059e227: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059e229: fstp dword ptr [ebp + 0x3e4] */ W_F32((u32)(r_ebp+0x3e4u), ST(0)); FPOP();
    /* 0059e22f: fstp dword ptr [ebp + 0x3e8] */ W_F32((u32)(r_ebp+0x3e8u), ST(0)); FPOP();
    /* 0059e235: fstp dword ptr [ebp + 0x3ec] */ W_F32((u32)(r_ebp+0x3ecu), ST(0)); FPOP();
    /* 0059e23b: mov dword ptr [ebp + 0x3f8], eax */ W32((u32)(r_ebp+0x3f8u), r_eax);
    /* 0059e241: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059e242: ret  */ FN_RET(0x0059e1a4); r_esp += 4; return;
L_0059e243:; BB(0x0059e243);
    /* 0059e243: mov eax, 2 */ r_eax = 0x2u;
    /* 0059e248: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0059e24f: jmp 0x59e1e9 */ goto L_0059e1e9;
}

void f_0059e254(void) /* sub_59E254 */
{
    FN_ENTER(0x0059e254);
    /* 0059e254: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 0059e25a: fcom dword ptr [0x929dbc] */ fx_compare(ST(0), R_F32((u32)(0x929dbcu))); 
    /* 0059e260: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059e262: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059e263: jb 0x59e27b */ if (fC) goto L_0059e27b;
L_0059e265:; BB(0x0059e265);
    /* 0059e265: fcom dword ptr [0x929db8] */ fx_compare(ST(0), R_F32((u32)(0x929db8u))); 
    /* 0059e26b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059e26d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059e26e: jb 0x59e283 */ if (fC) goto L_0059e283;
L_0059e270:; BB(0x0059e270);
    /* 0059e270: fcom dword ptr [0x929db4] */ fx_compare(ST(0), R_F32((u32)(0x929db4u))); 
    /* 0059e276: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059e278: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059e279: jae 0x59e283 */ if (!fC) goto L_0059e283;
L_0059e27b:; BB(0x0059e27b);
    /* 0059e27b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059e27d: mov eax, 1 */ r_eax = 0x1u;
    /* 0059e282: ret  */ FN_RET(0x0059e254); r_esp += 4; return;
L_0059e283:; BB(0x0059e283);
    /* 0059e283: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059e285: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059e287: ret  */ FN_RET(0x0059e254); r_esp += 4; return;
}

void f_0059e288(void) /* sub_59E288 */
{
    FN_ENTER(0x0059e288);
    /* 0059e288: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059e289: mov edi, ecx */ r_edi = r_ecx;
    /* 0059e28b: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x59e290u); f_004f7c84();
    /* 0059e290: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e292: je 0x59e2a0 */ if (fZ) goto L_0059e2a0;
L_0059e294:; BB(0x0059e294);
    /* 0059e294: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059e296: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e298: call dword ptr [eax + 0x1d0] */ { u32 t = R32((u32)(r_eax+0x1d0u)); r_esp -= 4; W32(r_esp, 0x59e29eu); call_ind(t); }
    /* 0059e29e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059e29f: ret  */ FN_RET(0x0059e288); r_esp += 4; return;
L_0059e2a0:; BB(0x0059e2a0);
    /* 0059e2a0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059e2a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e2a4: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x59e2aau); call_ind(t); }
    /* 0059e2aa: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e2ad: je 0x59e2b9 */ if (fZ) goto L_0059e2b9;
L_0059e2af:; BB(0x0059e2af);
    /* 0059e2af: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059e2b1: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e2b3: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x59e2b9u); call_ind(t); }
L_0059e2b9:; BB(0x0059e2b9);
    /* 0059e2b9: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e2bb: call 0x59e2f0 */ r_esp -= 4; W32(r_esp, 0x59e2c0u); f_0059e2f0();
    /* 0059e2c0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059e2c2: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e2c4: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x59e2cau); call_ind(t); }
    /* 0059e2ca: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059e2d0: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e2d5: je 0x59e2e4 */ if (fZ) goto L_0059e2e4;
L_0059e2d7:; BB(0x0059e2d7);
    /* 0059e2d7: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059e2dc: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 0059e2e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059e2e3: ret  */ FN_RET(0x0059e288); r_esp += 4; return;
L_0059e2e4:; BB(0x0059e2e4);
    /* 0059e2e4: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e2e6: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x59e2ebu); f_006401f0();
    /* 0059e2eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059e2ec: ret  */ FN_RET(0x0059e288); r_esp += 4; return;
}

void f_0059e2f0(void) /* sub_59E2F0 */
{
    FN_ENTER(0x0059e2f0);
    /* 0059e2f0: fld dword ptr [0x929db0] */ FPUSH(R_F32((u32)(0x929db0u)));
    /* 0059e2f6: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0059e2f9: fadd dword ptr [ecx + 0x3dc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3dcu));
    /* 0059e2ff: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0059e302: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0059e305: fst dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0));
    /* 0059e30b: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 0059e30e: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 0059e314: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 0059e31a: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 0059e31d: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 0059e320: ret  */ FN_RET(0x0059e2f0); r_esp += 4; return;
}

void f_0059e324(void) /* sub_59E324 */
{
    FN_ENTER(0x0059e324);
    /* 0059e324: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059e325: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e326: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059e329: mov edi, ecx */ r_edi = r_ecx;
    /* 0059e32b: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x59e330u); f_004f7c84();
    /* 0059e330: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e332: je 0x59e344 */ if (fZ) goto L_0059e344;
L_0059e334:; BB(0x0059e334);
    /* 0059e334: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059e336: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e338: call dword ptr [eax + 0x1d4] */ { u32 t = R32((u32)(r_eax+0x1d4u)); r_esp -= 4; W32(r_esp, 0x59e33eu); call_ind(t); }
    /* 0059e33e: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059e341: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059e342: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059e343: ret  */ FN_RET(0x0059e324); r_esp += 4; return;
L_0059e344:; BB(0x0059e344);
    /* 0059e344: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059e34a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059e34c: je 0x59e352 */ if (fZ) goto L_0059e352;
L_0059e34e:; BB(0x0059e34e);
    /* 0059e34e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0059e350: jmp 0x59e395 */ goto L_0059e395;
L_0059e352:; BB(0x0059e352);
    /* 0059e352: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x59e357u); f_00694cc8();
    /* 0059e357: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e359: je 0x59e377 */ if (fZ) goto L_0059e377;
L_0059e35b:; BB(0x0059e35b);
    /* 0059e35b: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e360: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e362: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059e364: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059e36a: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059e370: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x59e373u); call_ind(t); }
    /* 0059e373: mov ebx, eax */ r_ebx = r_eax;
    /* 0059e375: jmp 0x59e395 */ goto L_0059e395;
L_0059e377:; BB(0x0059e377);
    /* 0059e377: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e37c: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e37e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059e380: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e385: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x59e388u); call_ind(t); }
    /* 0059e388: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e38a: je 0x59e393 */ if (fZ) goto L_0059e393;
L_0059e38c:; BB(0x0059e38c);
    /* 0059e38c: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0059e391: jmp 0x59e395 */ goto L_0059e395;
L_0059e393:; BB(0x0059e393);
    /* 0059e393: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0059e395:; BB(0x0059e395);
    /* 0059e395: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 0059e39b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e39d: jne 0x59e802 */ if (!fZ) goto L_0059e802;
L_0059e3a3:; BB(0x0059e3a3);
    /* 0059e3a3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e3a5: je 0x59e776 */ if (fZ) goto L_0059e776;
L_0059e3ab:; BB(0x0059e3ab);
    /* 0059e3ab: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0059e3ad: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e3af: call dword ptr [edx + 0x1b8] */ { u32 t = R32((u32)(r_edx+0x1b8u)); r_esp -= 4; W32(r_esp, 0x59e3b5u); call_ind(t); }
    /* 0059e3b5: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e3b7: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x59e3bcu); f_00520608();
    /* 0059e3bc: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0059e3c2: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0059e3c8: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x59e3cdu); f_00520d08();
    /* 0059e3cd: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x59e3d2u); f_00578b38();
    /* 0059e3d2: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 0059e3d8: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 0059e3de: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 0059e3e4: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 0059e3ea: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 0059e3f0: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 0059e3f6: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 0059e3fc: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 0059e402: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 0059e408: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 0059e40e: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 0059e414: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 0059e41a: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x59e41fu); f_00482a10();
    /* 0059e41f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e421: jne 0x59e5d6 */ if (!fZ) goto L_0059e5d6;
L_0059e427:; BB(0x0059e427);
    /* 0059e427: mov eax, dword ptr [0xa74770] */ r_eax = R32((u32)(0xa74770u));
    /* 0059e42c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e42e: je 0x59e438 */ if (fZ) goto L_0059e438;
L_0059e430:; BB(0x0059e430);
    /* 0059e430: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0059e436: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_0059e438:; BB(0x0059e438);
    /* 0059e438: mov eax, dword ptr [0xa74774] */ r_eax = R32((u32)(0xa74774u));
    /* 0059e43d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e43f: je 0x59e449 */ if (fZ) goto L_0059e449;
L_0059e441:; BB(0x0059e441);
    /* 0059e441: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0059e447: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_0059e449:; BB(0x0059e449);
    /* 0059e449: mov eax, dword ptr [0xa74778] */ r_eax = R32((u32)(0xa74778u));
    /* 0059e44e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e450: je 0x59e45a */ if (fZ) goto L_0059e45a;
L_0059e452:; BB(0x0059e452);
    /* 0059e452: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0059e458: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_0059e45a:; BB(0x0059e45a);
    /* 0059e45a: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 0059e460: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e462: je 0x59e4df */ if (fZ) goto L_0059e4df;
L_0059e464:; BB(0x0059e464);
    /* 0059e464: mov edx, dword ptr [edi + 0x3d4] */ r_edx = R32((u32)(r_edi+0x3d4u));
    /* 0059e46a: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059e46d: je 0x59e480 */ if (fZ) goto L_0059e480;
L_0059e46f:; BB(0x0059e46f);
    /* 0059e46f: mov edx, dword ptr [edi + 0x40c] */ r_edx = R32((u32)(r_edi+0x40cu));
    /* 0059e475: lea ecx, [edi + 0x40c] */ r_ecx = (u32)(r_edi+0x40cu);
    /* 0059e47b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x59e47eu); call_ind(t); }
    /* 0059e47e: jmp 0x59e4ce */ goto L_0059e4ce;
L_0059e480:; BB(0x0059e480);
    /* 0059e480: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0059e486: mov dword ptr [esp + 0x30], 0xbf4ccccd */ W32((u32)(r_esp+0x30u), 0xbf4ccccdu);
    /* 0059e48e: or edx, 0x820 */ {  u32 a = r_edx; u32 b = 0x820u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0059e494: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0059e49a: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 0059e4a2: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 0059e4aa: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0059e4ae: mov dword ptr [esp + 0x3c], 0 */ W32((u32)(r_esp+0x3cu), 0x0u);
    /* 0059e4b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e4b7: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x59e4bcu); f_0082d710();
    /* 0059e4bc: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e4c1: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e4c6: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x59e4cbu); f_0082d6fc();
    /* 0059e4cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059e4ce:; BB(0x0059e4ce);
    /* 0059e4ce: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e4d0: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x59e4d5u); f_008173d0();
    /* 0059e4d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e4d7: jne 0x59e59b */ if (!fZ) goto L_0059e59b;
L_0059e4dd:; BB(0x0059e4dd);
    /* 0059e4dd: jmp 0x59e54c */ goto L_0059e54c;
L_0059e4df:; BB(0x0059e4df);
    /* 0059e4df: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0059e4e1: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e4e3: call dword ptr [edx + 0x1bc] */ { u32 t = R32((u32)(r_edx+0x1bcu)); r_esp -= 4; W32(r_esp, 0x59e4e9u); call_ind(t); }
    /* 0059e4e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e4eb: je 0x59e4fe */ if (fZ) goto L_0059e4fe;
L_0059e4ed:; BB(0x0059e4ed);
    /* 0059e4ed: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e4ef: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x59e4f4u); f_008173d0();
    /* 0059e4f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e4f6: jne 0x59e59b */ if (!fZ) goto L_0059e59b;
L_0059e4fc:; BB(0x0059e4fc);
    /* 0059e4fc: jmp 0x59e54c */ goto L_0059e54c;
L_0059e4fe:; BB(0x0059e4fe);
    /* 0059e4fe: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0059e504: mov dword ptr [esp + 0x20], 0x3f000000 */ W32((u32)(r_esp+0x20u), 0x3f000000u);
    /* 0059e50c: or edx, 0x820 */ {  u32 a = r_edx; u32 b = 0x820u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0059e512: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0059e518: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 0059e520: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 0059e528: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0059e52c: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 0059e534: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e535: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x59e53au); f_0082d710();
    /* 0059e53a: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e53f: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e544: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x59e549u); f_0082d6fc();
    /* 0059e549: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059e54c:; BB(0x0059e54c);
    /* 0059e54c: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0059e54f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x59e554u); f_00829cc8();
    /* 0059e554: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x59e559u); f_0082d7b0();
    /* 0059e559: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0059e55c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x59e561u); f_0082d838();
    /* 0059e561: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e563: push dword ptr [edi + 0x3dc] */ { u32 v = R32((u32)(r_edi+0x3dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059e569: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059e56b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e56d: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x59e572u); f_00830b74();
    /* 0059e572: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0059e575: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059e577: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x59e57cu); f_0082d8bc();
    /* 0059e57c: mov dword ptr [0xa74788], 0 */ W32((u32)(0xa74788u), 0x0u);
    /* 0059e586: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e589: je 0x59e781 */ if (fZ) goto L_0059e781;
L_0059e58f:; BB(0x0059e58f);
    /* 0059e58f: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e591: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x59e596u); f_007aa7b8();
L_0059e596:; BB(0x0059e596);
    /* 0059e596: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x59e59bu); f_0082da80();
L_0059e59b:; BB(0x0059e59b);
    /* 0059e59b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059e5a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e5a3: je 0x59e5c7 */ if (fZ) goto L_0059e5c7;
L_0059e5a5:; BB(0x0059e5a5);
    /* 0059e5a5: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0059e5ab: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059e5ad: je 0x59e720 */ if (fZ) goto L_0059e720;
L_0059e5b3:; BB(0x0059e5b3);
    /* 0059e5b3: mov eax, dword ptr [edi + 0x40c] */ r_eax = R32((u32)(r_edi+0x40cu));
    /* 0059e5b9: lea ecx, [edi + 0x40c] */ r_ecx = (u32)(r_edi+0x40cu);
    /* 0059e5bf: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x59e5c2u); call_ind(t); }
    /* 0059e5c2: jmp 0x59e720 */ goto L_0059e720;
L_0059e5c7:; BB(0x0059e5c7);
    /* 0059e5c7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059e5c9: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e5cb: call dword ptr [eax + 0x1c0] */ { u32 t = R32((u32)(r_eax+0x1c0u)); r_esp -= 4; W32(r_esp, 0x59e5d1u); call_ind(t); }
    /* 0059e5d1: jmp 0x59e720 */ goto L_0059e720;
L_0059e5d6:; BB(0x0059e5d6);
    /* 0059e5d6: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 0059e5dc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e5de: je 0x59e605 */ if (fZ) goto L_0059e605;
L_0059e5e0:; BB(0x0059e5e0);
    /* 0059e5e0: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x59e5e5u); f_0082dbac();
    /* 0059e5e5: mov edx, dword ptr [edi + 0x3d4] */ r_edx = R32((u32)(r_edi+0x3d4u));
    /* 0059e5eb: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059e5ee: jne 0x59e78d */ if (!fZ) goto L_0059e78d;
L_0059e5f4:; BB(0x0059e5f4);
    /* 0059e5f4: mov edx, 1 */ r_edx = 0x1u;
    /* 0059e5f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e5fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e5fb: call 0x50212c */ r_esp -= 4; W32(r_esp, 0x59e600u); f_0050212c();
    /* 0059e600: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059e603: jmp 0x59e651 */ goto L_0059e651;
L_0059e605:; BB(0x0059e605);
    /* 0059e605: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0059e60b: mov dword ptr [esp], 0x3f000000 */ W32((u32)(r_esp), 0x3f000000u);
    /* 0059e612: or edx, 0x820 */ {  u32 a = r_edx; u32 b = 0x820u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0059e618: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0059e61e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0059e626: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0059e62e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0059e631: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0059e639: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e63a: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x59e63fu); f_0082d710();
    /* 0059e63f: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e644: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e649: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x59e64eu); f_0082d6fc();
    /* 0059e64e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059e651:; BB(0x0059e651);
    /* 0059e651: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0059e654: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x59e659u); f_00829cc8();
    /* 0059e659: mov eax, dword ptr [0xa74770] */ r_eax = R32((u32)(0xa74770u));
    /* 0059e65e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e660: je 0x59e66a */ if (fZ) goto L_0059e66a;
L_0059e662:; BB(0x0059e662);
    /* 0059e662: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0059e668: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_0059e66a:; BB(0x0059e66a);
    /* 0059e66a: mov eax, dword ptr [0xa74774] */ r_eax = R32((u32)(0xa74774u));
    /* 0059e66f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e671: je 0x59e67b */ if (fZ) goto L_0059e67b;
L_0059e673:; BB(0x0059e673);
    /* 0059e673: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0059e679: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_0059e67b:; BB(0x0059e67b);
    /* 0059e67b: mov eax, dword ptr [0xa74778] */ r_eax = R32((u32)(0xa74778u));
    /* 0059e680: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e682: je 0x59e68c */ if (fZ) goto L_0059e68c;
L_0059e684:; BB(0x0059e684);
    /* 0059e684: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0059e68a: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_0059e68c:; BB(0x0059e68c);
    /* 0059e68c: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0059e68e: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e690: call dword ptr [edx + 0x1bc] */ { u32 t = R32((u32)(r_edx+0x1bcu)); r_esp -= 4; W32(r_esp, 0x59e696u); call_ind(t); }
    /* 0059e696: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x59e69bu); f_0082d7b0();
    /* 0059e69b: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0059e69e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x59e6a3u); f_0082d838();
    /* 0059e6a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e6a5: push dword ptr [edi + 0x3dc] */ { u32 v = R32((u32)(r_edi+0x3dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059e6ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059e6ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e6af: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x59e6b4u); f_00830b74();
    /* 0059e6b4: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0059e6b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059e6b9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x59e6beu); f_0082d8bc();
    /* 0059e6be: mov edx, dword ptr [edi + 0x428] */ r_edx = R32((u32)(r_edi+0x428u));
    /* 0059e6c4: mov dword ptr [0xa74788], 0 */ W32((u32)(0xa74788u), 0x0u);
    /* 0059e6ce: add edx, 0x222 */ {  u32 a = r_edx; u32 b = 0x222u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059e6d4: mov dword ptr [edi + 0x428], edx */ W32((u32)(r_edi+0x428u), r_edx);
    /* 0059e6da: push 0x59dc10 */ { u32 v = 0x59dc10u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e6df: mov dword ptr [0xa74764], edx */ W32((u32)(0xa74764u), r_edx);
    /* 0059e6e5: call 0x83a308 */ r_esp -= 4; W32(r_esp, 0x59e6eau); f_0083a308();
    /* 0059e6ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059e6eb: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e6ee: je 0x59e7f6 */ if (fZ) goto L_0059e7f6;
L_0059e6f4:; BB(0x0059e6f4);
    /* 0059e6f4: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e6f6: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x59e6fbu); f_007aa7b8();
L_0059e6fb:; BB(0x0059e6fb);
    /* 0059e6fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e6fd: call 0x83a308 */ r_esp -= 4; W32(r_esp, 0x59e702u); f_0083a308();
    /* 0059e702: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059e703: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x59e708u); f_0082da80();
    /* 0059e708: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059e70a: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e70c: call dword ptr [eax + 0x1c0] */ { u32 t = R32((u32)(r_eax+0x1c0u)); r_esp -= 4; W32(r_esp, 0x59e712u); call_ind(t); }
    /* 0059e712: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059e718: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e71a: jne 0x59e7ec */ if (!fZ) goto L_0059e7ec;
L_0059e720:; BB(0x0059e720);
    /* 0059e720: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 0059e725: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 0059e72b: mov ebx, dword ptr [0xaab510] */ r_ebx = R32((u32)(0xaab510u));
    /* 0059e731: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 0059e736: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 0059e73b: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 0059e741: mov dword ptr [0xaf0378], ebx */ W32((u32)(0xaf0378u), r_ebx);
    /* 0059e747: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 0059e74c: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 0059e751: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 0059e756: mov eax, dword ptr [0xaab500] */ r_eax = R32((u32)(0xaab500u));
    /* 0059e75b: mov dword ptr [0xaf0364], eax */ W32((u32)(0xaf0364u), r_eax);
    /* 0059e760: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x59e765u); f_0082dab0();
    /* 0059e765: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0059e76a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0059e76f: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e771: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x59e776u); f_00520610();
L_0059e776:; BB(0x0059e776);
    /* 0059e776: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x59e77bu); f_0082dab0();
    /* 0059e77b: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059e77e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059e77f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059e780: ret  */ FN_RET(0x0059e324); r_esp += 4; return;
L_0059e781:; BB(0x0059e781);
    /* 0059e781: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e783: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x59e788u); f_007aa668();
    /* 0059e788: jmp 0x59e596 */ goto L_0059e596;
L_0059e78d:; BB(0x0059e78d);
    /* 0059e78d: mov edx, 1 */ r_edx = 0x1u;
    /* 0059e792: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e793: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e794: call 0x502118 */ r_esp -= 4; W32(r_esp, 0x59e799u); f_00502118();
    /* 0059e799: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0059e79f: mov dword ptr [esp + 0x18], 0x3f000000 */ W32((u32)(r_esp+0x18u), 0x3f000000u);
    /* 0059e7a7: or edx, 0x820 */ {  u32 a = r_edx; u32 b = 0x820u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0059e7ad: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0059e7b3: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0059e7bb: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0059e7c3: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0059e7c7: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 0059e7cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e7d0: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x59e7d5u); f_0082d710();
    /* 0059e7d5: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e7da: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e7df: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x59e7e4u); f_0082d6fc();
    /* 0059e7e4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059e7e7: jmp 0x59e651 */ goto L_0059e651;
L_0059e7ec:; BB(0x0059e7ec);
    /* 0059e7ec: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x59e7f1u); f_005022a0();
    /* 0059e7f1: jmp 0x59e720 */ goto L_0059e720;
L_0059e7f6:; BB(0x0059e7f6);
    /* 0059e7f6: mov ecx, edi */ r_ecx = r_edi;
    /* 0059e7f8: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x59e7fdu); f_007aa668();
    /* 0059e7fd: jmp 0x59e6fb */ goto L_0059e6fb;
L_0059e802:; BB(0x0059e802);
    /* 0059e802: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x59e807u); f_00482a10();
    /* 0059e807: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e809: je 0x59e3a3 */ if (fZ) goto L_0059e3a3;
L_0059e80f:; BB(0x0059e80f);
    /* 0059e80f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059e810: call 0x506798 */ r_esp -= 4; W32(r_esp, 0x59e815u); f_00506798();
    /* 0059e815: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059e816: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e818: je 0x59e3a3 */ if (fZ) goto L_0059e3a3;
L_0059e81e:; BB(0x0059e81e);
    /* 0059e81e: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059e821: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059e822: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059e823: ret  */ FN_RET(0x0059e324); r_esp += 4; return;
}

void f_0059e824(void) /* sub_59E824 */
{
    FN_ENTER(0x0059e824);
    /* 0059e824: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059e825: mov esi, ecx */ r_esi = r_ecx;
    /* 0059e827: mov ecx, esi */ r_ecx = r_esi;
    /* 0059e829: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x59e82eu); f_0051f814();
    /* 0059e82e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059e830: je 0x59e840 */ if (fZ) goto L_0059e840;
L_0059e832:; BB(0x0059e832);
    /* 0059e832: mov ecx, esi */ r_ecx = r_esi;
    /* 0059e834: call 0x59e1a4 */ r_esp -= 4; W32(r_esp, 0x59e839u); f_0059e1a4();
    /* 0059e839: mov ecx, esi */ r_ecx = r_esi;
    /* 0059e83b: call 0x59e844 */ r_esp -= 4; W32(r_esp, 0x59e840u); f_0059e844();
L_0059e840:; BB(0x0059e840);
    /* 0059e840: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059e841: ret  */ FN_RET(0x0059e824); r_esp += 4; return;
}

void f_0059e844(void) /* sub_59E844 */
{
    FN_ENTER(0x0059e844);
    /* 0059e844: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059e845: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059e847: mov eax, dword ptr [ebp + 0x3f8] */ r_eax = R32((u32)(r_ebp+0x3f8u));
    /* 0059e84d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0059e84f: jle 0x59e86d */ if ((fZ||fS!=fO)) goto L_0059e86d;
L_0059e851:; BB(0x0059e851);
    /* 0059e851: mov dword ptr [ebp + 0x24], 0xa74738 */ W32((u32)(r_ebp+0x24u), 0xa74738u);
    /* 0059e858: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 0059e85a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059e85c: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x59e861u); f_00520390();
    /* 0059e861: mov dword ptr [ebp + 0x3d0], 1 */ W32((u32)(r_ebp+0x3d0u), 0x1u);
    /* 0059e86b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059e86c: ret  */ FN_RET(0x0059e844); r_esp += 4; return;
L_0059e86d:; BB(0x0059e86d);
    /* 0059e86d: mov eax, dword ptr [0xa74740] */ r_eax = R32((u32)(0xa74740u));
    /* 0059e872: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0059e874: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0059e87a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0059e87d: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 0059e880: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059e882: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x59e887u); f_00520390();
    /* 0059e887: mov dword ptr [ebp + 0x3d0], 0 */ W32((u32)(r_ebp+0x3d0u), 0x0u);
    /* 0059e891: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059e892: ret  */ FN_RET(0x0059e844); r_esp += 4; return;
}

void f_0059e894(void) /* sub_59E894 */
{
    FN_ENTER(0x0059e894);
    /* 0059e894: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059e895: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059e896: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059e897: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059e89a: mov esi, ecx */ r_esi = r_ecx;
    /* 0059e89c: mov ecx, esi */ r_ecx = r_esi;
    /* 0059e89e: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x59e8a3u); f_0051f814();
    /* 0059e8a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e8a5: je 0x59e961 */ if (fZ) goto L_0059e961;
L_0059e8ab:; BB(0x0059e8ab);
    /* 0059e8ab: fld dword ptr [esi + 0x35c] */ FPUSH(R_F32((u32)(r_esi+0x35cu)));
    /* 0059e8b1: fcomp dword ptr [0x929da0] */ fx_compare(ST(0), R_F32((u32)(0x929da0u))); FPOP();
    /* 0059e8b7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059e8b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059e8ba: jae 0x59e8d5 */ if (!fC) goto L_0059e8d5;
L_0059e8bc:; BB(0x0059e8bc);
    /* 0059e8bc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e8be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e8c0: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x59e8c5u); f_0051f7fc();
    /* 0059e8c5: push 0x929254 */ { u32 v = 0x929254u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e8ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e8cb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x59e8d0u); f_0061cdb0();
    /* 0059e8d0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059e8d3: jmp 0x59e8ec */ goto L_0059e8ec;
L_0059e8d5:; BB(0x0059e8d5);
    /* 0059e8d5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e8d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e8d9: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x59e8deu); f_0051f7fc();
    /* 0059e8de: push 0x929264 */ { u32 v = 0x929264u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e8e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e8e4: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x59e8e9u); f_0061cdb0();
    /* 0059e8e9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059e8ec:; BB(0x0059e8ec);
    /* 0059e8ec: mov ecx, esi */ r_ecx = r_esi;
    /* 0059e8ee: call 0x59e254 */ r_esp -= 4; W32(r_esp, 0x59e8f3u); f_0059e254();
    /* 0059e8f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e8f5: je 0x59e910 */ if (fZ) goto L_0059e910;
L_0059e8f7:; BB(0x0059e8f7);
    /* 0059e8f7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e8f9: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0059e8fb: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x59e900u); f_0051f7fc();
    /* 0059e900: push 0x929274 */ { u32 v = 0x929274u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e905: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e906: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x59e90bu); f_0061cdb0();
    /* 0059e90b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059e90e: jmp 0x59e927 */ goto L_0059e927;
L_0059e910:; BB(0x0059e910);
    /* 0059e910: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e912: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0059e914: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x59e919u); f_0051f7fc();
    /* 0059e919: push 0x929284 */ { u32 v = 0x929284u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e91e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e91f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x59e924u); f_0061cdb0();
    /* 0059e924: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059e927:; BB(0x0059e927);
    /* 0059e927: mov eax, dword ptr [esi + 0x3f8] */ r_eax = R32((u32)(r_esi+0x3f8u));
    /* 0059e92d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0059e92f: jle 0x59e94a */ if ((fZ||fS!=fO)) goto L_0059e94a;
L_0059e931:; BB(0x0059e931);
    /* 0059e931: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e933: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e935: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x59e93au); f_0051f7fc();
    /* 0059e93a: push 0x929290 */ { u32 v = 0x929290u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e93f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e940: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x59e945u); f_0061cdb0();
    /* 0059e945: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059e948: jmp 0x59e961 */ goto L_0059e961;
L_0059e94a:; BB(0x0059e94a);
    /* 0059e94a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e94c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e94e: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x59e953u); f_0051f7fc();
    /* 0059e953: push 0x9292a4 */ { u32 v = 0x9292a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e958: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e959: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x59e95eu); f_0061cdb0();
    /* 0059e95e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059e961:; BB(0x0059e961);
    /* 0059e961: mov eax, dword ptr [esi + 0x3f8] */ r_eax = R32((u32)(r_esi+0x3f8u));
    /* 0059e967: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0059e969: jle 0x59e972 */ if ((fZ||fS!=fO)) goto L_0059e972;
L_0059e96b:; BB(0x0059e96b);
    /* 0059e96b: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0059e970: jmp 0x59e974 */ goto L_0059e974;
L_0059e972:; BB(0x0059e972);
    /* 0059e972: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0059e974:; BB(0x0059e974);
    /* 0059e974: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e979: mov ecx, esi */ r_ecx = r_esi;
    /* 0059e97b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0059e97d: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e982: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x59e985u); call_ind(t); }
    /* 0059e985: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e987: je 0x59eb00 */ if (fZ) goto L_0059eb00;
L_0059e98d:; BB(0x0059e98d);
    /* 0059e98d: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0059e990: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x59e995u); f_00829cc8();
    /* 0059e995: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x59e99au); f_00578b38();
    /* 0059e99a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e99c: je 0x59e9c9 */ if (fZ) goto L_0059e9c9;
L_0059e99e:; BB(0x0059e99e);
    /* 0059e99e: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 0059e9a1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059e9a3: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 0059e9a6: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0059e9a9: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0059e9ac: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0059e9b0: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0059e9b3: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0059e9b7: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0059e9ba: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0059e9bd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0059e9c0: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0059e9c3: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0059e9c6: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
L_0059e9c9:; BB(0x0059e9c9);
    /* 0059e9c9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x59e9ceu); f_0082d7b0();
    /* 0059e9ce: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0059e9d1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x59e9d6u); f_0082d838();
    /* 0059e9d6: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0059e9d9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059e9db: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x59e9e0u); f_0082d8bc();
    /* 0059e9e0: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e9e5: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e9ea: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e9ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059e9f1: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x59e9f6u); f_0082fa0c();
    /* 0059e9f6: mov eax, dword ptr [0xa74770] */ r_eax = R32((u32)(0xa74770u));
    /* 0059e9fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e9fd: je 0x59ea05 */ if (fZ) goto L_0059ea05;
L_0059e9ff:; BB(0x0059e9ff);
    /* 0059e9ff: mov dword ptr [eax], 0xb000ffb0 */ W32((u32)(r_eax), 0xb000ffb0u);
L_0059ea05:; BB(0x0059ea05);
    /* 0059ea05: mov eax, dword ptr [0xa74774] */ r_eax = R32((u32)(0xa74774u));
    /* 0059ea0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ea0c: je 0x59ea14 */ if (fZ) goto L_0059ea14;
L_0059ea0e:; BB(0x0059ea0e);
    /* 0059ea0e: mov dword ptr [eax], 0xb000ffb0 */ W32((u32)(r_eax), 0xb000ffb0u);
L_0059ea14:; BB(0x0059ea14);
    /* 0059ea14: mov eax, dword ptr [0xa74778] */ r_eax = R32((u32)(0xa74778u));
    /* 0059ea19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ea1b: je 0x59ea23 */ if (fZ) goto L_0059ea23;
L_0059ea1d:; BB(0x0059ea1d);
    /* 0059ea1d: mov dword ptr [eax], 0xb000ffb0 */ W32((u32)(r_eax), 0xb000ffb0u);
L_0059ea23:; BB(0x0059ea23);
    /* 0059ea23: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0059ea2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ea2c: jne 0x59eaca */ if (!fZ) goto L_0059eaca;
L_0059ea32:; BB(0x0059ea32);
    /* 0059ea32: movsx eax, word ptr [esi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 0059ea39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0059ea3b: jl 0x59ea49 */ if ((fS!=fO)) goto L_0059ea49;
L_0059ea3d:; BB(0x0059ea3d);
    /* 0059ea3d: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ea40: jl 0x59ea4b */ if ((fS!=fO)) goto L_0059ea4b;
L_0059ea42:; BB(0x0059ea42);
    /* 0059ea42: mov eax, 0xc */ r_eax = 0xcu;
    /* 0059ea47: jmp 0x59ea4b */ goto L_0059ea4b;
L_0059ea49:; BB(0x0059ea49);
    /* 0059ea49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0059ea4b:; BB(0x0059ea4b);
    /* 0059ea4b: fld dword ptr [0x929d90] */ FPUSH(R_F32((u32)(0x929d90u)));
    /* 0059ea51: mov edx, dword ptr [esi + 0xd8] */ r_edx = R32((u32)(r_esi+0xd8u));
    /* 0059ea57: mov edi, dword ptr [esi + 0xdc] */ r_edi = R32((u32)(r_esi+0xdcu));
    /* 0059ea5d: fld dword ptr [esi + 0x368] */ FPUSH(R_F32((u32)(r_esi+0x368u)));
    /* 0059ea63: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059ea65: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 0059ea69: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059ea6b: mov eax, dword ptr [edx + eax*8 + 4] */ r_eax = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 0059ea6f: mov edi, dword ptr [edi + eax*8 + 4] */ r_edi = R32((u32)(r_edi+r_eax*8+0x4u));
    /* 0059ea73: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0059ea75: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059ea77: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059ea78: jbe 0x59ea7e */ if ((fC||fZ)) goto L_0059ea7e;
L_0059ea7a:; BB(0x0059ea7a);
    /* 0059ea7a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059ea7c: jmp 0x59eaa7 */ goto L_0059eaa7;
L_0059ea7e:; BB(0x0059ea7e);
    /* 0059ea7e: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0059ea81: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059ea84: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0059ea88: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0059ea8c: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0059ea8f: fadd dword ptr [edx*4 + 0x929bf0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x929bf0u));
    /* 0059ea96: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0059ea98: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059ea9a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059ea9b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059ea9d: jb 0x59eaa1 */ if (fC) goto L_0059eaa1;
L_0059ea9f:; BB(0x0059ea9f);
    /* 0059ea9f: fst st(1) */ ST(1) = ST(0);
L_0059eaa1:; BB(0x0059eaa1);
    /* 0059eaa1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0059eaa3: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
L_0059eaa7:; BB(0x0059eaa7);
    /* 0059eaa7: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x59eaacu); f_0082fa9c();
    /* 0059eaac: mov ecx, esi */ r_ecx = r_esi;
    /* 0059eaae: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x59eab3u); f_007aa668();
    /* 0059eab3: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x59eab8u); f_0082faac();
    /* 0059eab8: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0059eabc: fstp dword ptr [esi + 0xc0] */ W_F32((u32)(r_esi+0xc0u), ST(0)); FPOP();
    /* 0059eac2: mov dword ptr [esi + 0xf8], edi */ W32((u32)(r_esi+0xf8u), r_edi);
    /* 0059eac8: jmp 0x59ead9 */ goto L_0059ead9;
L_0059eaca:; BB(0x0059eaca);
    /* 0059eaca: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0059eacf: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059ead4: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0059ead9:; BB(0x0059ead9);
    /* 0059ead9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x59eadeu); f_0082da80();
    /* 0059eade: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059eae0: je 0x59eafb */ if (fZ) goto L_0059eafb;
L_0059eae2:; BB(0x0059eae2);
    /* 0059eae2: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0059eae5: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0059eae8: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0059eaea: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 0059eaed: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0059eaf1: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 0059eaf4: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0059eaf8: mov dword ptr [esi + 0x20], ebp */ W32((u32)(r_esi+0x20u), r_ebp);
L_0059eafb:; BB(0x0059eafb);
    /* 0059eafb: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x59eb00u); f_0082dab0();
L_0059eb00:; BB(0x0059eb00);
    /* 0059eb00: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059eb03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059eb04: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059eb05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059eb06: ret  */ FN_RET(0x0059e894); r_esp += 4; return;
}

void f_0059eb08(void) /* sub_59EB08 */
{
    FN_ENTER(0x0059eb08);
    /* 0059eb08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059eb09: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059eb0a: mov edi, ecx */ r_edi = r_ecx;
    /* 0059eb0c: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0059eb10: cmp esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0059eb13: ja 0x59ec4b */ if ((!fC&&!fZ)) goto L_0059ec4b;
L_0059eb19:; BB(0x0059eb19);
    /* 0059eb19: mov eax, dword ptr [esi*4 + 0x929b40] */ r_eax = R32((u32)(r_esi*4+0x929b40u));
    /* 0059eb20: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059eb08); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059eb22(void)
{
    FN_ENTER(0x0059eb22);
    /* 0059eb22: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059eb26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059eb27: mov ecx, edi */ r_ecx = r_edi;
    /* 0059eb29: call 0x59ec74 */ r_esp -= 4; W32(r_esp, 0x59eb2eu); f_0059ec74();
    /* 0059eb2e: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059eb22); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059eb33(void)
{
    FN_ENTER(0x0059eb33);
    /* 0059eb33: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059eb37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059eb38: mov ecx, edi */ r_ecx = r_edi;
    /* 0059eb3a: call 0x59ee80 */ r_esp -= 4; W32(r_esp, 0x59eb3fu); f_0059ee80();
    /* 0059eb3f: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059eb33); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059eb44(void)
{
    FN_ENTER(0x0059eb44);
    /* 0059eb44: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059eb48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059eb49: mov ecx, edi */ r_ecx = r_edi;
    /* 0059eb4b: call 0x59f064 */ r_esp -= 4; W32(r_esp, 0x59eb50u); f_0059f064();
    /* 0059eb50: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059eb44); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059eb55(void)
{
    FN_ENTER(0x0059eb55);
    /* 0059eb55: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059eb59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059eb5a: mov ecx, edi */ r_ecx = r_edi;
    /* 0059eb5c: call 0x59f3dc */ r_esp -= 4; W32(r_esp, 0x59eb61u); f_0059f3dc();
    /* 0059eb61: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059eb55); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059eb66(void)
{
    FN_ENTER(0x0059eb66);
    /* 0059eb66: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059eb6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059eb6b: mov ecx, edi */ r_ecx = r_edi;
    /* 0059eb6d: call 0x59f640 */ r_esp -= 4; W32(r_esp, 0x59eb72u); f_0059f640();
    /* 0059eb72: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059eb66); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059eb77(void)
{
    FN_ENTER(0x0059eb77);
    /* 0059eb77: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059eb7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059eb7c: mov ecx, edi */ r_ecx = r_edi;
    /* 0059eb7e: call 0x59f780 */ r_esp -= 4; W32(r_esp, 0x59eb83u); f_0059f780();
    /* 0059eb83: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059eb77); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059eb88(void)
{
    FN_ENTER(0x0059eb88);
    /* 0059eb88: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059eb8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059eb8d: mov ecx, edi */ r_ecx = r_edi;
    /* 0059eb8f: call 0x59f830 */ r_esp -= 4; W32(r_esp, 0x59eb94u); f_0059f830();
    /* 0059eb94: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059eb88); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059eb99(void)
{
    FN_ENTER(0x0059eb99);
    /* 0059eb99: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059eb9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059eb9e: mov ecx, edi */ r_ecx = r_edi;
    /* 0059eba0: call 0x59fd3c */ r_esp -= 4; W32(r_esp, 0x59eba5u); f_0059fd3c();
    /* 0059eba5: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059eb99); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059ebaa(void)
{
    FN_ENTER(0x0059ebaa);
    /* 0059ebaa: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059ebae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ebaf: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ebb1: call 0x59fedc */ r_esp -= 4; W32(r_esp, 0x59ebb6u); f_0059fedc();
    /* 0059ebb6: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059ebaa); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059ebbb(void)
{
    FN_ENTER(0x0059ebbb);
    /* 0059ebbb: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059ebbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ebc0: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ebc2: call 0x59ffcc */ r_esp -= 4; W32(r_esp, 0x59ebc7u); f_0059ffcc();
    /* 0059ebc7: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059ebbb); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059ebcc(void)
{
    FN_ENTER(0x0059ebcc);
    /* 0059ebcc: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059ebd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ebd1: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ebd3: call 0x5a0348 */ r_esp -= 4; W32(r_esp, 0x59ebd8u); f_005a0348();
    /* 0059ebd8: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059ebcc); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059ebda(void)
{
    FN_ENTER(0x0059ebda);
    /* 0059ebda: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059ebde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ebdf: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ebe1: call 0x5a0590 */ r_esp -= 4; W32(r_esp, 0x59ebe6u); f_005a0590();
    /* 0059ebe6: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059ebda); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059ebe8(void)
{
    FN_ENTER(0x0059ebe8);
    /* 0059ebe8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059ebec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ebed: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ebef: call 0x5a0a74 */ r_esp -= 4; W32(r_esp, 0x59ebf4u); f_005a0a74();
    /* 0059ebf4: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059ebe8); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059ebf6(void)
{
    FN_ENTER(0x0059ebf6);
    /* 0059ebf6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059ebfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ebfb: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ebfd: call 0x5a0c90 */ r_esp -= 4; W32(r_esp, 0x59ec02u); f_005a0c90();
    /* 0059ec02: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059ebf6); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059ec04(void)
{
    FN_ENTER(0x0059ec04);
    /* 0059ec04: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059ec08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ec09: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec0b: call 0x5a0ef8 */ r_esp -= 4; W32(r_esp, 0x59ec10u); f_005a0ef8();
    /* 0059ec10: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059ec04); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059ec12(void)
{
    FN_ENTER(0x0059ec12);
    /* 0059ec12: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059ec16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ec17: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec19: call 0x5a1054 */ r_esp -= 4; W32(r_esp, 0x59ec1eu); f_005a1054();
    /* 0059ec1e: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059ec12); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059ec20(void)
{
    FN_ENTER(0x0059ec20);
    /* 0059ec20: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059ec24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ec25: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec27: call 0x5a1110 */ r_esp -= 4; W32(r_esp, 0x59ec2cu); f_005a1110();
    /* 0059ec2c: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059ec20); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059ec2e(void)
{
    FN_ENTER(0x0059ec2e);
    /* 0059ec2e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059ec32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ec33: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec35: call 0x5a12ac */ r_esp -= 4; W32(r_esp, 0x59ec3au); f_005a12ac();
    /* 0059ec3a: jmp 0x59ec4b */ goto L_0059ec4b;
L_0059ec4b:; BB(0x0059ec4b);
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059ec2e); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059ec3c(void)
{
    FN_ENTER(0x0059ec3c);
    /* 0059ec3c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0059ec40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ec41: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0059ec43: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec45: call dword ptr [edx + 0x1cc] */ { u32 t = R32((u32)(r_edx+0x1ccu)); r_esp -= 4; W32(r_esp, 0x59ec4bu); call_ind(t); }
    /* 0059ec4b: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0059ec51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec54: je 0x59ec65 */ if (fZ) goto L_0059ec65;
L_0059ec56:; BB(0x0059ec56);
    /* 0059ec56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0059ec58: mov ecx, edi */ r_ecx = r_edi;
    /* 0059ec5a: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x59ec60u); call_ind(t); }
L_0059ec60:; BB(0x0059ec60);
    /* 0059ec60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ec61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ec62: ret 8 */ FN_RET(0x0059ec3c); r_esp += 12; return;
L_0059ec65:; BB(0x0059ec65);
    /* 0059ec65: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec68: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6a:; BB(0x0059ec6a);
    /* 0059ec6a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059ec6d: je 0x59ec60 */ if (fZ) goto L_0059ec60;
L_0059ec6f:; BB(0x0059ec6f);
    /* 0059ec6f: jmp 0x59ec56 */ goto L_0059ec56;
}

void f_0059ec74(void) /* sub_59EC74 */
{
    FN_ENTER(0x0059ec74);
    /* 0059ec74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059ec75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059ec76: mov esi, ecx */ r_esi = r_ecx;
    /* 0059ec78: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0059ec7c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec7f: je 0x59ee1f */ if (fZ) goto L_0059ee1f;
L_0059ec85:; BB(0x0059ec85);
    /* 0059ec85: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec88: je 0x59edf2 */ if (fZ) goto L_0059edf2;
L_0059ec8e:; BB(0x0059ec8e);
    /* 0059ec8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ec90: jne 0x59edcf */ if (!fZ) goto L_0059edcf;
L_0059ec96:; BB(0x0059ec96);
    /* 0059ec96: mov ecx, esi */ r_ecx = r_esi;
    /* 0059ec98: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59ec9du); f_007aa094();
    /* 0059ec9d: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0059eca3: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059eca5: je 0x59ecb6 */ if (fZ) goto L_0059ecb6;
L_0059eca7:; BB(0x0059eca7);
    /* 0059eca7: mov dword ptr [esi + 0x42c], 3 */ W32((u32)(r_esi+0x42cu), 0x3u);
    /* 0059ecb1: jmp 0x59edb6 */ goto L_0059edb6;
L_0059ecb6:; BB(0x0059ecb6);
    /* 0059ecb6: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x59ecbbu); f_00482a10();
    /* 0059ecbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ecbd: jne 0x59ed6c */ if (!fZ) goto L_0059ed6c;
L_0059ecc3:; BB(0x0059ecc3);
    /* 0059ecc3: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 0059ecc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059eccb: jne 0x59ed2b */ if (!fZ) goto L_0059ed2b;
L_0059eccd:; BB(0x0059eccd);
    /* 0059eccd: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ecd2: mov ecx, esi */ r_ecx = r_esi;
    /* 0059ecd4: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x59ecd9u); f_007aaa30();
    /* 0059ecd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ecdb: je 0x59edb6 */ if (fZ) goto L_0059edb6;
L_0059ece1:; BB(0x0059ece1);
    /* 0059ece1: lea eax, [0x929d78] */ r_eax = (u32)(0x929d78u);
    /* 0059ece7: mov edi, dword ptr [esi + 0x3d4] */ r_edi = R32((u32)(r_esi+0x3d4u));
    /* 0059eced: or edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0059ecf0: mov dword ptr [esi + 0x3d4], edi */ W32((u32)(r_esi+0x3d4u), r_edi);
    /* 0059ecf6: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0059ecf8: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ecfb: lea ecx, [esi + 0x40c] */ r_ecx = (u32)(r_esi+0x40cu);
    /* 0059ed01: mov edx, esp */ r_edx = r_esp;
    /* 0059ed03: mov dword ptr [edx], edi */ W32((u32)(r_edx), r_edi);
    /* 0059ed05: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 0059ed08: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 0059ed0b: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 0059ed0e: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0059ed11: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 0059ed14: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0059ed17: call 0x576b94 */ r_esp -= 4; W32(r_esp, 0x59ed1cu); f_00576b94();
    /* 0059ed1c: mov dword ptr [esi + 0x42c], 1 */ W32((u32)(r_esi+0x42cu), 0x1u);
    /* 0059ed26: jmp 0x59edb6 */ goto L_0059edb6;
L_0059ed2b:; BB(0x0059ed2b);
    /* 0059ed2b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ed2e: jne 0x59edb6 */ if (!fZ) goto L_0059edb6;
L_0059ed34:; BB(0x0059ed34);
    /* 0059ed34: mov eax, dword ptr [esi + 0x40c] */ r_eax = R32((u32)(r_esi+0x40cu));
    /* 0059ed3a: lea ecx, [esi + 0x40c] */ r_ecx = (u32)(r_esi+0x40cu);
    /* 0059ed40: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x59ed43u); call_ind(t); }
    /* 0059ed43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ed45: je 0x59edb6 */ if (fZ) goto L_0059edb6;
L_0059ed47:; BB(0x0059ed47);
    /* 0059ed47: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 0059ed4d: mov dword ptr [esi + 0x3c8], 0 */ W32((u32)(r_esi+0x3c8u), 0x0u);
    /* 0059ed57: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059ed5a: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 0059ed60: mov dword ptr [esi + 0x42c], 2 */ W32((u32)(r_esi+0x42cu), 0x2u);
    /* 0059ed6a: jmp 0x59edb6 */ goto L_0059edb6;
L_0059ed6c:; BB(0x0059ed6c);
    /* 0059ed6c: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ed71: mov ecx, esi */ r_ecx = r_esi;
    /* 0059ed73: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x59ed78u); f_007aaa30();
    /* 0059ed78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ed7a: je 0x59ed8d */ if (fZ) goto L_0059ed8d;
L_0059ed7c:; BB(0x0059ed7c);
    /* 0059ed7c: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 0059ed82: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059ed85: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 0059ed8b: jmp 0x59edb6 */ goto L_0059edb6;
L_0059ed8d:; BB(0x0059ed8d);
    /* 0059ed8d: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ed92: mov ecx, esi */ r_ecx = r_esi;
    /* 0059ed94: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x59ed99u); f_007aaa30();
    /* 0059ed99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ed9b: je 0x59edb6 */ if (fZ) goto L_0059edb6;
L_0059ed9d:; BB(0x0059ed9d);
    /* 0059ed9d: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 0059eda3: mov dword ptr [esi + 0x3c8], 0 */ W32((u32)(r_esi+0x3c8u), 0x0u);
    /* 0059edad: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059edb0: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
L_0059edb6:; BB(0x0059edb6);
    /* 0059edb6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0059edb8: mov ecx, esi */ r_ecx = r_esi;
    /* 0059edba: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59edc0u); call_ind(t); }
    /* 0059edc0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0059edc2: mov ecx, esi */ r_ecx = r_esi;
    /* 0059edc4: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x59edcau); call_ind(t); }
    /* 0059edca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059edcb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059edcc: ret 4 */ FN_RET(0x0059ec74); r_esp += 8; return;
L_0059edcf:; BB(0x0059edcf);
    /* 0059edcf: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059edd2: jne 0x59edfd */ if (!fZ) goto L_0059edfd;
L_0059edd4:; BB(0x0059edd4);
    /* 0059edd4: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 0059edda: mov dword ptr [esi + 0x3c8], 0 */ W32((u32)(r_esi+0x3c8u), 0x0u);
    /* 0059ede4: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059ede7: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 0059eded: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059edee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059edef: ret 4 */ FN_RET(0x0059ec74); r_esp += 8; return;
L_0059edf2:; BB(0x0059edf2);
    /* 0059edf2: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 0059edf8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059edfb: je 0x59ee02 */ if (fZ) goto L_0059ee02;
L_0059edfd:; BB(0x0059edfd);
    /* 0059edfd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059edfe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059edff: ret 4 */ FN_RET(0x0059ec74); r_esp += 8; return;
L_0059ee02:; BB(0x0059ee02);
    /* 0059ee02: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ee04: mov ecx, esi */ r_ecx = r_esi;
    /* 0059ee06: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59ee0bu); f_0051f62c();
    /* 0059ee0b: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 0059ee11: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059ee14: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 0059ee1a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ee1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ee1c: ret 4 */ FN_RET(0x0059ec74); r_esp += 8; return;
L_0059ee1f:; BB(0x0059ee1f);
    /* 0059ee1f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ee21: mov eax, 0xb */ r_eax = 0xbu;
    /* 0059ee26: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0059ee2d: mov ecx, esi */ r_ecx = r_esi;
    /* 0059ee2f: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59ee34u); f_0051f664();
    /* 0059ee34: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0059ee36: mov ecx, esi */ r_ecx = r_esi;
    /* 0059ee38: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x59ee3eu); call_ind(t); }
    /* 0059ee3e: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ee43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ee45: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 0059ee4b: and eax, 0xfffffff1 */ {  u32 a = r_eax; u32 b = 0xfffffff1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059ee4e: or eax, 0x40001 */ {  u32 a = r_eax; u32 b = 0x40001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059ee53: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 0059ee59: mov ecx, esi */ r_ecx = r_esi;
    /* 0059ee5b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x59ee60u); f_007b52ec();
    /* 0059ee60: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059ee62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ee63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ee64: mov dword ptr [esi + 0x42c], eax */ W32((u32)(r_esi+0x42cu), r_eax);
    /* 0059ee6a: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059ee6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059ee6e: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ee73: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x59ee78u); f_00814298();
    /* 0059ee78: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059ee7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059ee7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059ee7d: ret 4 */ FN_RET(0x0059ec74); r_esp += 8; return;
}

void f_0059ee80(void) /* sub_59EE80 */
{
    FN_ENTER(0x0059ee80);
    /* 0059ee80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059ee81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059ee83: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059ee87: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ee8a: je 0x59f013 */ if (fZ) goto L_0059f013;
L_0059ee90:; BB(0x0059ee90);
    /* 0059ee90: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ee93: je 0x59efd5 */ if (fZ) goto L_0059efd5;
L_0059ee99:; BB(0x0059ee99);
    /* 0059ee99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ee9b: jne 0x59efbd */ if (!fZ) goto L_0059efbd;
L_0059eea1:; BB(0x0059eea1);
    /* 0059eea1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059eea3: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x59eea8u); f_007aa094();
    /* 0059eea8: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 0059eeae: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059eeb0: je 0x59eec1 */ if (fZ) goto L_0059eec1;
L_0059eeb2:; BB(0x0059eeb2);
    /* 0059eeb2: mov dword ptr [ebx + 0x42c], 3 */ W32((u32)(r_ebx+0x42cu), 0x3u);
    /* 0059eebc: jmp 0x59efa5 */ goto L_0059efa5;
L_0059eec1:; BB(0x0059eec1);
    /* 0059eec1: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x59eec6u); f_00482a10();
    /* 0059eec6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059eec8: jne 0x59ef5b */ if (!fZ) goto L_0059ef5b;
L_0059eece:; BB(0x0059eece);
    /* 0059eece: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 0059eed4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059eed6: jne 0x59ef19 */ if (!fZ) goto L_0059ef19;
L_0059eed8:; BB(0x0059eed8);
    /* 0059eed8: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059eedd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059eedf: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x59eee4u); f_007aaa30();
    /* 0059eee4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059eee6: je 0x59efa5 */ if (fZ) goto L_0059efa5;
L_0059eeec:; BB(0x0059eeec);
    /* 0059eeec: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0059eef2: mov edx, dword ptr [ebx + 0x40c] */ r_edx = R32((u32)(r_ebx+0x40cu));
    /* 0059eef8: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059eefb: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0059ef01: lea ecx, [ebx + 0x40c] */ r_ecx = (u32)(r_ebx+0x40cu);
    /* 0059ef07: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x59ef0au); call_ind(t); }
    /* 0059ef0a: mov dword ptr [ebx + 0x42c], 1 */ W32((u32)(r_ebx+0x42cu), 0x1u);
    /* 0059ef14: jmp 0x59efa5 */ goto L_0059efa5;
L_0059ef19:; BB(0x0059ef19);
    /* 0059ef19: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ef1c: jne 0x59efa5 */ if (!fZ) goto L_0059efa5;
L_0059ef22:; BB(0x0059ef22);
    /* 0059ef22: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0059ef27: lea ecx, [ebx + 0x40c] */ r_ecx = (u32)(r_ebx+0x40cu);
    /* 0059ef2d: call 0x576bb8 */ r_esp -= 4; W32(r_esp, 0x59ef32u); f_00576bb8();
    /* 0059ef32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ef34: je 0x59efa5 */ if (fZ) goto L_0059efa5;
L_0059ef36:; BB(0x0059ef36);
    /* 0059ef36: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0059ef3c: mov dword ptr [ebx + 0x3c8], 0 */ W32((u32)(r_ebx+0x3c8u), 0x0u);
    /* 0059ef46: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059ef49: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0059ef4f: mov dword ptr [ebx + 0x42c], 2 */ W32((u32)(r_ebx+0x42cu), 0x2u);
    /* 0059ef59: jmp 0x59efa5 */ goto L_0059efa5;
L_0059ef5b:; BB(0x0059ef5b);
    /* 0059ef5b: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ef60: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059ef62: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x59ef67u); f_007aaa30();
    /* 0059ef67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ef69: je 0x59ef86 */ if (fZ) goto L_0059ef86;
L_0059ef6b:; BB(0x0059ef6b);
    /* 0059ef6b: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0059ef71: mov dword ptr [ebx + 0x3c8], 1 */ W32((u32)(r_ebx+0x3c8u), 0x1u);
    /* 0059ef7b: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059ef7e: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0059ef84: jmp 0x59efa5 */ goto L_0059efa5;
L_0059ef86:; BB(0x0059ef86);
    /* 0059ef86: push 0x41e80000 */ { u32 v = 0x41e80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ef8b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059ef8d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x59ef92u); f_007aaa30();
    /* 0059ef92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ef94: je 0x59efa5 */ if (fZ) goto L_0059efa5;
L_0059ef96:; BB(0x0059ef96);
    /* 0059ef96: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0059ef9c: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059ef9f: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
L_0059efa5:; BB(0x0059efa5);
    /* 0059efa5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059efa7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059efa9: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59efafu); call_ind(t); }
    /* 0059efaf: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059efb1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059efb3: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x59efb9u); call_ind(t); }
    /* 0059efb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059efba: ret 4 */ FN_RET(0x0059ee80); r_esp += 8; return;
L_0059efbd:; BB(0x0059efbd);
    /* 0059efbd: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059efc0: jne 0x59efe0 */ if (!fZ) goto L_0059efe0;
L_0059efc2:; BB(0x0059efc2);
    /* 0059efc2: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0059efc8: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059efcb: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0059efd1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059efd2: ret 4 */ FN_RET(0x0059ee80); r_esp += 8; return;
L_0059efd5:; BB(0x0059efd5);
    /* 0059efd5: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 0059efdb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0059efde: je 0x59efe4 */ if (fZ) goto L_0059efe4;
L_0059efe0:; BB(0x0059efe0);
    /* 0059efe0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059efe1: ret 4 */ FN_RET(0x0059ee80); r_esp += 8; return;
L_0059efe4:; BB(0x0059efe4);
    /* 0059efe4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059efe6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059efe8: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59efedu); f_0051f62c();
    /* 0059efed: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059eff2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059eff4: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0059effa: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059effd: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059f002: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0059f008: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059f00a: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x59f00fu); f_007b52c4();
    /* 0059f00f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059f010: ret 4 */ FN_RET(0x0059ee80); r_esp += 8; return;
L_0059f013:; BB(0x0059f013);
    /* 0059f013: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f015: mov eax, 0xc */ r_eax = 0xcu;
    /* 0059f01a: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0059f021: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059f023: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59f028u); f_0051f664();
    /* 0059f028: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059f02a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059f02c: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x59f032u); call_ind(t); }
    /* 0059f032: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 0059f038: and eax, 0xfffffff1 */ {  u32 a = r_eax; u32 b = 0xfffffff1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059f03b: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059f03e: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0059f044: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059f046: mov dword ptr [ebx + 0x42c], edx */ W32((u32)(r_ebx+0x42cu), r_edx);
    /* 0059f04c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f04d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f04e: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0059f051: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059f052: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 0059f057: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x59f05cu); f_00814298();
    /* 0059f05c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059f05f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059f060: ret 4 */ FN_RET(0x0059ee80); r_esp += 8; return;
}

void f_0059eee5(void)
{
    FN_ENTER(0x0059eee5);
    /* 0059eee5: ror byte ptr [edi], 0x84 */ { u32 ad = (u32)(r_edi); u32 c = (4u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r); fC = (r >> 7) & 1; } }
    /* 0059eee8: mov ecx, 0x8b000000 */ r_ecx = 0x8b000000u;
    /* 0059eeed: adc esp, 3 */ { u32 c = fC; u32 a = r_esp; u32 b = 0x3u; u32 r = (a + b + c) & 0xffffffffu; r_esp = r;  }
    /* 0059eef0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0059eef2: mov edx, dword ptr [ebx + 0x40c] */ r_edx = R32((u32)(r_ebx+0x40cu));
    /* 0059eef8: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059eefb: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0059ef01: lea ecx, [ebx + 0x40c] */ r_ecx = (u32)(r_ebx+0x40cu);
    /* 0059ef07: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x59ef0au); call_ind(t); }
    /* 0059ef0a: mov dword ptr [ebx + 0x42c], 1 */ W32((u32)(r_ebx+0x42cu), 0x1u);
    /* 0059ef14: jmp 0x59efa5 */ goto L_0059efa5;
L_0059efa5:; BB(0x0059efa5);
    /* 0059efa5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059efa7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059efa9: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59efafu); call_ind(t); }
    /* 0059efaf: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059efb1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059efb3: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x59efb9u); call_ind(t); }
    /* 0059efb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059efba: ret 4 */ FN_RET(0x0059eee5); r_esp += 8; return;
}

void f_0059eeed(void)
{
    FN_ENTER(0x0059eeed);
    /* 0059eeed: adc esp, 3 */ { u32 c = fC; u32 a = r_esp; u32 b = 0x3u; u32 r = (a + b + c) & 0xffffffffu; r_esp = r;  }
    /* 0059eef0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0059eef2: mov edx, dword ptr [ebx + 0x40c] */ r_edx = R32((u32)(r_ebx+0x40cu));
    /* 0059eef8: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059eefb: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0059ef01: lea ecx, [ebx + 0x40c] */ r_ecx = (u32)(r_ebx+0x40cu);
    /* 0059ef07: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x59ef0au); call_ind(t); }
    /* 0059ef0a: mov dword ptr [ebx + 0x42c], 1 */ W32((u32)(r_ebx+0x42cu), 0x1u);
    /* 0059ef14: jmp 0x59efa5 */ goto L_0059efa5;
L_0059efa5:; BB(0x0059efa5);
    /* 0059efa5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059efa7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059efa9: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59efafu); call_ind(t); }
    /* 0059efaf: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0059efb1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059efb3: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x59efb9u); call_ind(t); }
    /* 0059efb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059efba: ret 4 */ FN_RET(0x0059eeed); r_esp += 8; return;
}

